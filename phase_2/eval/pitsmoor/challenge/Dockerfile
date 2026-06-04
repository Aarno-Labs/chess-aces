# FROM chessexternal.apogee-research.com:5010/apogee_ta5/testbed_release/cs_base_phase_2:2020_11_16
FROM arm-build-base
RUN apt-get update
RUN apt-get install -y build-essential
RUN apt-get install -y cmake
RUN apt-get install -y qemu-user

RUN apt-get install -y automake autoconf pkgconf
ADD ./ /home/challenge
# ADD base_data /data

RUN mkdir /service
# RUN chown -R chess:chess /service

ENV PORT=6667
ENV HOST=challenge_container
ENV CHESS=Chess_System

RUN echo -n 09vee78cnw0mjw3bLOiPPmyn15mwmlks > /token
RUN chmod 644 /token

WORKDIR /home/challenge/ngircd
RUN ./autogen.sh


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

RUN ./configure \
      --host=$TARGET \
      --build=x86_64-pc-linux-gnu \
    AR=arm-linux-musleabi-ar \
    CC=arm-linux-musleabi-gcc \
    RANLIB=arm-linux-musleabi-ranlib
      

RUN make -j 8 V=1

# CMD /home/challenge/ngircd/src/ngircd/ngircd -n -f ./doc/sample-ngircd.conf
CMD qemu-arm -L /arm-linux-musleabi-cross/arm-linux-musleabi /home/challenge/ngircd/src/ngircd/ngircd -n -f ./doc/sample-ngircd.conf