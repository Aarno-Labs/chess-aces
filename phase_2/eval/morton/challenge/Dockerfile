# FROM chessexternal.apogee-research.com:5010/apogee_ta5/testbed_release/cs_base_phase_2:2021_04_14
FROM arm-build-base

RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    qemu-user \
    file \
    autoconf \
    automake \
    pkg-config \
    bison \
    flex

# musl dynamic loader fixup (provide ld-musl-arm.so.1 -> libc.so)
RUN rm /arm-linux-musleabi-cross/arm-linux-musleabi/lib/ld-musl-arm.so.1
RUN cp /arm-linux-musleabi-cross/arm-linux-musleabi/lib/libc.so /arm-linux-musleabi-cross/arm-linux-musleabi/lib/ld-musl-arm.so.1

ENV TOOLCHAIN=/arm-linux-musleabi-cross
ENV TARGET=arm-linux-musleabi
ENV SYSROOT=/arm-linux-musleabi-cross/arm-linux-musleabi
ENV PREFIX=/opt/arm-musl
ENV PATH=$TOOLCHAIN/bin:$PATH
ENV CC=$TARGET-gcc
ENV AR=$TARGET-ar
ENV RANLIB=$TARGET-ranlib
ENV STRIP=$TARGET-strip
ENV LD=$TARGET-ld

ENV PORT=1883
ENV HOST=challenge_container
ENV CHESS=Chess_System

# Bring in the mosquitto source (and the cross toolchain cmake file)
ADD ./ /home/mosquitto/mqtt_broker
WORKDIR /home/mosquitto/mqtt_broker/mosquitto_src

# Cross-compile the MQTT broker (and lib/clients) for arm-linux-musleabi.
# TLS and cJSON are disabled (no target-sysroot OpenSSL / cJSON), matching the
# hackensack port. The broker is what ta3_morton_server runs.
RUN rm -f CMakeCache.txt && rm -rf build && mkdir build
WORKDIR /home/mosquitto/mqtt_broker/mosquitto_src/build
RUN cmake \
    -DCMAKE_TOOLCHAIN_FILE=../../arm-linux-musleabi-toolchain.cmake \
    -DCMAKE_BUILD_TYPE=Debug \
    -DWITH_TLS=OFF \
    -DWITH_CJSON=OFF \
    -DDOCUMENTATION=OFF \
    ..
RUN make -j8 VERBOSE=1
RUN make VERBOSE=1 install

# Prove the broker is an ARM 32-bit musl ELF at build time
RUN file /home/mosquitto/mqtt_broker/mosquitto_src/build/src/mosquitto
RUN /arm-linux-musleabi-cross/bin/arm-linux-musleabi-readelf -h \
    /home/mosquitto/mqtt_broker/mosquitto_src/build/src/mosquitto

WORKDIR /home/mosquitto/mqtt_broker

CMD ["qemu-arm", "-L", "/arm-linux-musleabi-cross/arm-linux-musleabi", "/opt/arm-musl/sbin/mosquitto", "-v"]
