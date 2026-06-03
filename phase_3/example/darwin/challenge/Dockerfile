FROM arm-build-base
##chessexternal.apogee-research.com:5010/apogee_ta5/testbed_release/cs_base_phase_2:2021_06_02

ADD ./ /home/challenge
ADD base_data /srv/ftp/
RUN chmod -R 755 /srv/ftp/
RUN chown -R 791:791 /srv/ftp/
RUN chown -R 792:792 /srv/ftp/chess

RUN apt-get update -y
RUN apt-get install -y build-essential qemu-user file autoconf automake pkg-config bison flex cmake

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

ENV PORT=3040
ENV HOST=challenge_container
ENV CHESS=Chess_System

RUN echo -n 09vee78cnw0mjw3bLOiPPmyn15mwmlks > /token
RUN chmod 644 /token

WORKDIR /home/challenge/proftpd-master
RUN chmod +x ./configure
RUN chmod +x /home/challenge/proftpd-master/modules/glue.sh

# Cross-compile proftpd to arm-linux-musleabi.
# mod_ident is linked statically into the binary (no DSO) so we get a
# single self-contained ARM32 ELF.
RUN ./configure \
      --host=arm-linux-musleabi \
      --build=x86_64-pc-linux-gnu \
      --with-modules=mod_ident \
      --disable-dso \
      --enable-ctrls \
      --enable-nls \
      CC=arm-linux-musleabi-gcc \
      AR=arm-linux-musleabi-ar \
      RANLIB=arm-linux-musleabi-ranlib \
      LD=arm-linux-musleabi-ld \
      ac_cv_func_setpgrp_void=yes \
      ac_cv_func_setgrent_void=yes
RUN make clean
RUN make -j"$(nproc)"
RUN make install

RUN file /home/challenge/proftpd-master/proftpd

WORKDIR /home/challenge
RUN cp -r ./proftpd /etc
WORKDIR /etc/proftpd
RUN chmod 660 ftpd.passwd
RUN chmod 660 ftpd.group

CMD qemu-arm -L /arm-linux-musleabi-cross/arm-linux-musleabi /home/challenge/proftpd-master/proftpd -n -d[10] -c /etc/proftpd/proftpd.conf
