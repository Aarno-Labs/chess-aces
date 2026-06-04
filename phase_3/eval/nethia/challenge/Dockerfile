#FROM chessexternal.apogee-research.com:5010/apogee_ta5/testbed_release/cs_base_phase_2:2021_06_02
# FROM registry.mlb.cromulence.com/chess/cs_base/phase_3:2022_03_10
FROM arm-build-base

# RUN apt install -y libpcre2-dev
# RUN apt install -y libsodium-dev
# RUN apt install -y libc-ares-dev
# RUN apt install -y libargon2-dev
# RUN apt install -y libjansson-dev
# RUN apt install -y libgeoip-dev
RUN apt update
RUN apt-get install -y build-essential curl sudo file qemu-user

RUN echo -n 09vee78cnw0mjw3bLOiPPmyn15mwmlks > /token
RUN chmod 600 /token


# syntax=docker/dockerfile:1.7

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y --no-install-recommends \
    ca-certificates \
    curl \
    xz-utils \
    tar \
    gzip \
    bzip2 \
    make \
    gcc \
    g++ \
    pkg-config \
    file \
    perl \
    python3 \
    flex \
    bison \
    m4 \
 && rm -rf /var/lib/apt/lists/*

ENV BUILD_ROOT=/build
ENV OPENSSL_VERSION=3.2.4
ENV PREFIX_DEPS=/opt/build-deps

RUN mkdir -p \
    "${BUILD_ROOT}/src" \
    "${BUILD_ROOT}/build" \
    "${PREFIX_DEPS}" \


# Your cross toolchain
ENV TOOLCHAIN=/arm-linux-musleabi-cross
ENV TARGET=arm-linux-musleabi
ENV SYSROOT=/arm-linux-musleabi-cross/arm-linux-musleabi
ENV PATH=/arm-linux-musleabi-cross/bin:/usr/bin:/bin
RUN echo PATH=$PATH


# OpenSSL
RUN curl -fL --retry 5 --retry-delay 2 \
    -o "${BUILD_ROOT}/src/openssl-${OPENSSL_VERSION}.tar.gz" \
    "https://www.openssl.org/source/openssl-${OPENSSL_VERSION}.tar.gz"

RUN rm -rf "${BUILD_ROOT}/build/openssl-${OPENSSL_VERSION}" && \
    mkdir -p "${BUILD_ROOT}/build/openssl-${OPENSSL_VERSION}" && \
    tar -xzf "${BUILD_ROOT}/src/openssl-${OPENSSL_VERSION}.tar.gz" \
      -C "${BUILD_ROOT}/build/openssl-${OPENSSL_VERSION}" --strip-components=1

ENV LDFLAGS="${LDFLAGS} -latomic"

RUN cd "${BUILD_ROOT}/build/openssl-${OPENSSL_VERSION}" && \
    ./Configure "$target" \
      linux-generic32 \
      --cross-compile-prefix=/arm-linux-musleabi-cross/bin/arm-linux-musleabi- \
      --prefix="${PREFIX_DEPS}" \
      --openssldir="${PREFIX_DEPS}/ssl" \
      --libdir=lib \
      shared \
      no-tests \
      "-Wl,-rpath,${PREFIX_DEPS}/lib" && \
    make -j"$(getconf _NPROCESSORS_ONLN)" && \
    make install_sw


ENV CC=${TARGET}-gcc
ENV CXX=${TARGET}-g++
ENV AR=${TARGET}-ar
ENV RANLIB=${TARGET}-ranlib
ENV STRIP=${TARGET}-strip
ENV LD=${TARGET}-ld


ADD ./ /home/challenge
ADD ./base_data/ /home/challenge/base_data

WORKDIR /home/challenge/unrealircd-6.0.2

RUN ac_cv_ip6=false ./configure --enable-ssl=/opt/build-deps --with-bindir=/root/unrealircd/bin --with-datadir=/root/unrealircd/data --with-pidfile=/root/unrealircd/data/unrealircd.pid --with-controlfile=/root/unrealircd/data/unrealircd.ctl --with-confdir=/root/unrealircd/conf --with-modulesdir=/root/unrealircd/modules --with-logdir=/root/unrealircd/logs --with-cachedir=/root/unrealircd/cache --with-docdir=/root/unrealircd/doc --with-tmpdir=/root/unrealircd/tmp --with-privatelibdir=/root/unrealircd/lib --with-scriptdir=/root/unrealircd --with-nick-history=2000 --with-permissions=0600 --enable-dynamic-linking --host=arm-linux-musleabi --prefix=/root/unrealircd


RUN rm /arm-linux-musleabi-cross/arm-linux-musleabi/lib/ld-musl-arm.so.1
RUN cp /arm-linux-musleabi-cross/arm-linux-musleabi/lib/libc.so /arm-linux-musleabi-cross/arm-linux-musleabi/lib/ld-musl-arm.so.1

RUN make -j $(nprocs)
RUN make install

WORKDIR /root
RUN cp /home/challenge/base_data/modules.sources.list ./unrealircd/conf
RUN cp /home/challenge/base_data/modules.custom.conf ./unrealircd/conf
RUN cp /home/challenge/base_data/unrealircd.conf ./unrealircd/conf
RUN cp -r /home/challenge/base_data/tls ./unrealircd/conf

USER root
EXPOSE 6667 6697

WORKDIR /root/unrealircd
CMD ["./bin/unrealircd", "-F"]
CMD ["qemu-arm", "-L", "/arm-linux-musleabi-cross/arm-linux-musleabi", "-E", "LD_LIBRARY_PATH=/opt/build-deps/lib", "./bin/unrealircd", "-F"]
#CMD ./unrealircd start; sleep 10000
