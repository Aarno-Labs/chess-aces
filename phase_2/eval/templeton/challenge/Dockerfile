FROM arm-build-base

RUN apt-get update && apt-get install -y build-essential qemu-user file autoconf automake pkg-config bison flex cmake php

RUN rm /arm-linux-musleabi-cross/arm-linux-musleabi/lib/ld-musl-arm.so.1
RUN cp /arm-linux-musleabi-cross/arm-linux-musleabi/lib/libc.so /arm-linux-musleabi-cross/arm-linux-musleabi/lib/ld-musl-arm.so.1

ENV TOOLCHAIN=/arm-linux-musleabi-cross TARGET=arm-linux-musleabi SYSROOT=/arm-linux-musleabi-cross/arm-linux-musleabi PREFIX=/opt/arm-musl
ENV PATH=$TOOLCHAIN/bin:$PATH
ENV CC=$TARGET-gcc AR=$TARGET-ar RANLIB=$TARGET-ranlib STRIP=$TARGET-strip LD=$TARGET-ld

ADD ./ /home/challenge
ADD base_data /data

ENV PORT=9999
ENV HOST=challenge_container
ENV CHESS=Chess_System

RUN echo -n 09vee78cnw0mjw3bLOiPPmyn15mwmlks > /token
RUN chmod 644 /token

WORKDIR /home/challenge
RUN make clean
RUN make CC=arm-linux-musleabi-gcc TARGET=templeton.bin CFLAGS="-g -Wall -include sys/select.h" -j8

# Verify the produced binary is an ARM 32-bit ELF
RUN file build/templeton.bin && arm-linux-musleabi-readelf -h build/templeton.bin | grep -E 'Class|Machine'

CMD qemu-arm -L /arm-linux-musleabi-cross/arm-linux-musleabi /home/challenge/build/templeton.bin
