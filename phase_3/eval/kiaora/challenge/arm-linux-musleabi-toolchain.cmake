# arm-linux-musleabi-toolchain.cmake

set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR arm)

# Cross toolchain root
set(TOOLCHAIN_ROOT "/arm-linux-musleabi-cross")
set(TARGET_TRIPLE "arm-linux-musleabi")
set(CMAKE_SYSROOT "${TOOLCHAIN_ROOT}/${TARGET_TRIPLE}")
set(CMAKE_STAGING_PREFIX "/opt/arm-musl")

# Compilers / binutils
set(CMAKE_C_COMPILER   "${TARGET_TRIPLE}-gcc")
set(CMAKE_CXX_COMPILER "${TARGET_TRIPLE}-g++")
set(CMAKE_ASM_COMPILER "${TARGET_TRIPLE}-gcc")
set(CMAKE_AR           "${TARGET_TRIPLE}-ar")
set(CMAKE_RANLIB       "${TARGET_TRIPLE}-ranlib")
set(CMAKE_STRIP        "${TARGET_TRIPLE}-strip")
set(CMAKE_LINKER       "${TARGET_TRIPLE}-ld")

# Tell CMake to search programs in the host environment,
# but libraries / headers / packages in the target sysroot.
set(CMAKE_FIND_ROOT_PATH
    "${CMAKE_SYSROOT}"
    "${CMAKE_STAGING_PREFIX}"
)

set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
# Use BOTH so that the cross-built Boost installed at a non-sysroot prefix
# (/opt/boost-arm, passed via BOOST_ROOT / CMAKE_PREFIX_PATH) can be located
# in addition to anything inside the target sysroot.
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY BOTH)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE BOTH)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE BOTH)

# Pass sysroot to compiler/linker explicitly
set(CMAKE_C_FLAGS_INIT   "--sysroot=${CMAKE_SYSROOT}")
set(CMAKE_CXX_FLAGS_INIT "--sysroot=${CMAKE_SYSROOT}")
set(CMAKE_ASM_FLAGS_INIT "--sysroot=${CMAKE_SYSROOT}")
set(CMAKE_EXE_LINKER_FLAGS_INIT    "--sysroot=${CMAKE_SYSROOT}")
set(CMAKE_SHARED_LINKER_FLAGS_INIT "--sysroot=${CMAKE_SYSROOT}")
set(CMAKE_MODULE_LINKER_FLAGS_INIT "--sysroot=${CMAKE_SYSROOT}")

# Avoid try-run during cross compilation
set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)

# Optional: pkg-config for target packages
set(ENV{PKG_CONFIG_SYSROOT_DIR} "${CMAKE_SYSROOT}")
set(ENV{PKG_CONFIG_LIBDIR}
    "${CMAKE_SYSROOT}/usr/lib/pkgconfig:${CMAKE_SYSROOT}/usr/share/pkgconfig:${CMAKE_SYSROOT}/lib/pkgconfig"
)

# Optional install prefix default
set(CMAKE_INSTALL_PREFIX "${CMAKE_STAGING_PREFIX}" CACHE PATH "Install prefix" FORCE)