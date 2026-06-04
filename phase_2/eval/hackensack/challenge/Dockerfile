# FROM chessexternal.apogee-research.com:5010/apogee_ta5/testbed_release/cs_base_phase_2:2020_11_16
FROM arm-build-base
RUN apt-get update
RUN apt-get install -y build-essential
RUN apt-get install -y cmake
RUN apt-get install -y qemu-user

RUN rm /arm-linux-musleabi-cross/arm-linux-musleabi/lib/ld-musl-arm.so.1
RUN cp /arm-linux-musleabi-cross/arm-linux-musleabi/lib/libc.so /arm-linux-musleabi-cross/arm-linux-musleabi/lib/ld-musl-arm.so.1

RUN apt-get install -y libjemalloc-dev

RUN adduser chess

ADD ./ /home/challenge
ADD base_data /data

RUN chown -R chess:chess /home
RUN chown -R chess:chess /data
RUN mkdir /service
RUN chown -R chess:chess /service

# RUN echo admin:`dd if=/dev/urandom bs=512 count=1 2>/dev/null | md5sum | cut -f 1 -d " "` > /data/passwords.txt
RUN echo chess:chess >> /data/passwords.txt
RUN echo chess2:chess2 >> /data/passwords.txt

ENV TCP_PORT_1=1883
ENV PORT=1883
ENV HOST=challenge_container
ENV CHESS=Chess_System

RUN echo -n 09vee78cnw0mjw3bLOiPPmyn15mwmlks > /token
RUN chmod 600 /token

RUN mkdir /home/challenge/mosquitto-2.0.4/build
WORKDIR /home/challenge/mosquitto-2.0.4/build
RUN rm /home/challenge/mosquitto-2.0.4/CMakeCache.txt
RUN cmake -DWITH_TLS=OFF -DCMAKE_BUILD_TYPE=Debug -DCMAKE_TOOLCHAIN_FILE=../arm-linux-musleabi-toolchain.cmake ..
RUN make -j 8 VERBOSE=1
RUN make VERBOSE=1 install 


# RUN make clean
# RUN make
# RUN cp ./src/mosquitto /service/mosquitto.bin
# WORKDIR /

CMD ["qemu-arm", "-L", "/arm-linux-musleabi-cross/arm-linux-musleabi", "/opt/arm-musl/sbin/mosquitto", "-c", "/data/mosquitto.conf"]
