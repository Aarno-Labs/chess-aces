FROM arm-build-base

RUN apt-get update && apt-get install -y build-essential qemu-user file autoconf automake pkg-config bison flex

# Make the musl dynamic loader available under the expected name
RUN rm -f /arm-linux-musleabi-cross/arm-linux-musleabi/lib/ld-musl-arm.so.1
RUN cp /arm-linux-musleabi-cross/arm-linux-musleabi/lib/libc.so /arm-linux-musleabi-cross/arm-linux-musleabi/lib/ld-musl-arm.so.1

ENV TOOLCHAIN=/arm-linux-musleabi-cross TARGET=arm-linux-musleabi SYSROOT=/arm-linux-musleabi-cross/arm-linux-musleabi PREFIX=/opt/arm-musl
ENV PATH=$TOOLCHAIN/bin:$PATH
ENV CC=$TARGET-gcc AR=$TARGET-ar RANLIB=$TARGET-ranlib STRIP=$TARGET-strip LD=$TARGET-ld

# The original base image shipped a "chess" user/group; recreate it here.
RUN useradd -ms /bin/bash chess || true

ADD ./ /home/challenge
ADD base_data /data

RUN useradd -ms /bin/bash ftp || true
RUN echo ftp:ftp | chpasswd
RUN cp /data/* /home/ftp || true
RUN chown ftp:ftp /home/ftp/* || true

RUN mkdir -p /home/chess && cp /data/* /home/chess || true
RUN chown chess:chess /home/chess/* || true

RUN mkdir -p /service
RUN mkdir -p /usr/local/var
RUN chown -R chess:chess /service

ENV PORT=21
ENV HOST=challenge_container
ENV CHESS=Chess_System

RUN echo -n 09vee78cnw0mjw3bLOiPPmyn15mwmlks > /token
RUN chmod 644 /token

WORKDIR /home/challenge/proftpd-1.3.7a
RUN make clean || true
RUN ./configure \
        --host=arm-linux-musleabi \
        --build=x86_64-pc-linux-gnu \
        CC=arm-linux-musleabi-gcc \
        AR=arm-linux-musleabi-ar \
        RANLIB=arm-linux-musleabi-ranlib \
        --disable-auth-pam --without-pam \
        --disable-ssl \
        ac_cv_func_setpgrp_void=no \
        ac_cv_func_setgrent_void=yes
RUN make -j8
RUN file proftpd && /arm-linux-musleabi-cross/bin/arm-linux-musleabi-readelf -h proftpd | head -20

CMD qemu-arm -L /arm-linux-musleabi-cross/arm-linux-musleabi /home/challenge/proftpd-1.3.7a/proftpd -X -n -c /home/challenge/proftpd-1.3.7a/sample-configurations/basic.conf
