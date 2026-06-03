FROM arm-build-base

RUN apt-get update && apt-get install -y build-essential qemu-user file autoconf automake pkg-config bison flex python3

RUN rm /arm-linux-musleabi-cross/arm-linux-musleabi/lib/ld-musl-arm.so.1
RUN cp /arm-linux-musleabi-cross/arm-linux-musleabi/lib/libc.so /arm-linux-musleabi-cross/arm-linux-musleabi/lib/ld-musl-arm.so.1

ENV TOOLCHAIN=/arm-linux-musleabi-cross TARGET=arm-linux-musleabi SYSROOT=/arm-linux-musleabi-cross/arm-linux-musleabi PREFIX=/opt/arm-musl
ENV PATH=$TOOLCHAIN/bin:$PATH
ENV CC=$TARGET-gcc AR=$TARGET-ar RANLIB=$TARGET-ranlib STRIP=$TARGET-strip LD=$TARGET-ld

ADD ./ /home/challenge
ADD base_data /data

RUN mkdir -p /service

ENV TCP_PORT_1=389
ENV PORT=389
ENV HOST=challenge_container
ENV CHESS=Chess_System

RUN echo -n 09vee78cnw0mjw3bLOiPPmyn15mwmlks > /token
RUN chmod 600 /token

WORKDIR /home/challenge/openldap-2.4.56

# Start from a clean tree (it ships configured for x86) and cross-configure.
RUN make distclean || true

RUN ./configure \
        --host=arm-linux-musleabi \
        --build=x86_64-pc-linux-gnu \
        CC=arm-linux-musleabi-gcc \
        AR=arm-linux-musleabi-ar \
        RANLIB=arm-linux-musleabi-ranlib \
        STRIP=arm-linux-musleabi-strip \
        --with-threads=no \
        --enable-mdb=no \
        --enable-static=no \
        --enable-shared=yes \
        --without-tls \
        --without-cyrus-sasl \
        --disable-bdb \
        --disable-hdb \
        --disable-monitor \
        ac_cv_func_memcmp_clean=yes \
        ac_cv_func_memcmp_working=yes \
        --with-yielding_select=yes

RUN make depend

# Build only what's needed for slapd (skip doc/ which needs groff's soelim).
RUN make -C include
RUN make -C libraries
RUN make -C servers/slapd

RUN file servers/slapd/slapd && arm-linux-musleabi-readelf -h servers/slapd/slapd | grep -E "Class|Machine|Type"

WORKDIR /home/challenge/openldap-2.4.56/servers/slapd

RUN python3 /data/set_rootdn_pass.py /data/slapd.conf
RUN cat /data/slapd.conf | grep rootpw

CMD qemu-arm -L /arm-linux-musleabi-cross/arm-linux-musleabi ./slapd -f /data/slapd.conf -d 65535
