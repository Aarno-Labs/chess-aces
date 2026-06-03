# FROM chessexternal.apogee-research.com:5010/apogee_ta5/testbed_release/cs_base_phase_2:2021_06_02
FROM arm-build-base

RUN apt-get update -y
RUN apt-get install -y cmake
RUN apt-get install -y build-essential ca-certificates curl flex
RUN apt-get install -y bison flex pkg-config automake autoconf qemu-user file
# RUN apt-get install -y libboost-all-dev
# RUN apt-get install -y rapidjson-dev 
# RUN apt-get install -y openssl
# RUN apt-get install -y libssl-dev

ENV PORT=3040
ENV HOST=challenge_container
ENV CHESS=Chess_System

RUN echo -n LbXTH3aWmPTXcgjQsHjBKsSgTyy45LpG > /token
RUN chmod 644 /token

ADD ./ /home/challenge
ADD base_data /data

RUN rm /arm-linux-musleabi-cross/arm-linux-musleabi/lib/ld-musl-arm.so.1
RUN cp /arm-linux-musleabi-cross/arm-linux-musleabi/lib/libc.so /arm-linux-musleabi-cross/arm-linux-musleabi/lib/ld-musl-arm.so.1

# ---- toolchain (adjust if needed) ----
ENV TOOLCHAIN=/arm-linux-musleabi-cross
ENV TARGET=arm-linux-musleabi
ENV PATH=$TOOLCHAIN/bin:$PATH

ENV BUILD_ROOT=/build

WORKDIR ${BUILD_ROOT}

RUN mkdir -p ${BUILD_ROOT}/src ${BUILD_ROOT}/cache ${BUILD_ROOT}/build

# ---- Boost version ----
ENV BOOST_VERSION=1.84.0
ENV BOOST_UNDERSCORE=1_84_0

# ---- cached download ----
#RUN --mount=type=cache,target=${BUILD_ROOT}/cache \
RUN    test -f "${BUILD_ROOT}/cache/boost_${BOOST_UNDERSCORE}.tar.gz" || \
    curl -fL --retry 5 --retry-delay 2 \
      -o "${BUILD_ROOT}/cache/boost_${BOOST_UNDERSCORE}.tar.gz" \
      "https://archives.boost.io/release/${BOOST_VERSION}/source/boost_${BOOST_UNDERSCORE}.tar.gz" && \
    cp "${BUILD_ROOT}/cache/boost_${BOOST_UNDERSCORE}.tar.gz" \
       "${BUILD_ROOT}/src/"

# ---- extract ----
RUN rm -rf "${BUILD_ROOT}/build/boost_${BOOST_UNDERSCORE}" && \
    mkdir -p "${BUILD_ROOT}/build/boost_${BOOST_UNDERSCORE}" && \
    tar -xzf "${BUILD_ROOT}/src/boost_${BOOST_UNDERSCORE}.tar.gz" \
      -C "${BUILD_ROOT}/build/boost_${BOOST_UNDERSCORE}" --strip-components=1

WORKDIR ${BUILD_ROOT}/build/boost_${BOOST_UNDERSCORE}

# ---- bootstrap ----
RUN ./bootstrap.sh

# ---- toolchain config ----
RUN cat > user-config.jam <<EOF
using gcc : arm : ${TARGET}-g++ :
    <compileflags>"--sysroot=${TOOLCHAIN}/${TARGET}"
    <linkflags>"--sysroot=${TOOLCHAIN}/${TARGET}" ;
EOF

# ---- build ----
RUN ./b2 \
    --user-config=user-config.jam \
    toolset=gcc-arm \
    target-os=linux \
    architecture=arm \
    address-model=32 \
    binary-format=elf \
    threading=multi \
    link=shared,static \
    runtime-link=shared \
    install \
    --prefix=/opt/boost-arm \
    --with-filesystem \
    --with-regex \
    --with-system \
    --with-test \    
    -j$(nproc)

WORKDIR /home/challenge/DikuMUD3

# RUN cmake --debug-find \
RUN cmake  \
  -DWITH_TLS=OFF \
  -DBUILD_TESTS=OFF \
  -DCMAKE_BUILD_TYPE=Debug \
  -DCMAKE_TOOLCHAIN_FILE=../arm-linux-musleabi-toolchain.cmake \
  -DBOOST_ROOT=/opt/boost-arm \
  -DBoost_ROOT=/opt/boost-arm \
  -DBOOST_INCLUDEDIR=/opt/boost-arm/include \
  -DBOOST_LIBRARYDIR=/opt/boost-arm/lib \
  -DBoost_NO_SYSTEM_PATHS=ON \
  -DBoost_NO_BOOST_CMAKE=OFF \
  -DBoost_DIR=/opt/boost-arm/lib/cmake/Boost-1.84.0 \
  "-DCMAKE_FIND_ROOT_PATH=/arm-linux-musleabi-cross/arm-linux-musleabi;/opt/arm-musl;/opt/boost-arm" \
  -DCMAKE_FIND_ROOT_PATH_MODE_PACKAGE=BOTH \
  .
  
# ---- cross-compile the MUD server binaries ----
RUN make -j$(nproc) vme vmc mplex pp defcomp

# Verify the produced binaries are ARM 32-bit ELF
RUN file vme/bin/vme vme/bin/vmc vme/bin/mplex vme/bin/pp vme/bin/defcomp

WORKDIR /home/challenge/DikuMUD3/vme/bin
CMD qemu-arm -L /arm-linux-musleabi-cross/arm-linux-musleabi ./vme & \
    qemu-arm -L /arm-linux-musleabi-cross/arm-linux-musleabi ./mplex -p 3040
