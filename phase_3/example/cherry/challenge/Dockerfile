FROM arm-build-base

RUN apt-get update && apt-get install -y build-essential qemu-user file autoconf automake pkg-config bison flex wget netcat-traditional less libbsd-dev

# musl loader fix so qemu can exec the ARM binary:
RUN rm /arm-linux-musleabi-cross/arm-linux-musleabi/lib/ld-musl-arm.so.1
RUN cp /arm-linux-musleabi-cross/arm-linux-musleabi/lib/libc.so /arm-linux-musleabi-cross/arm-linux-musleabi/lib/ld-musl-arm.so.1

ENV TOOLCHAIN=/arm-linux-musleabi-cross TARGET=arm-linux-musleabi SYSROOT=/arm-linux-musleabi-cross/arm-linux-musleabi PREFIX=/opt/arm-musl
ENV PATH=$TOOLCHAIN/bin:$PATH
ENV CC=$TARGET-gcc AR=$TARGET-ar RANLIB=$TARGET-ranlib STRIP=$TARGET-strip LD=$TARGET-ld

RUN echo chess:chess | chpasswd || useradd -m chess

ADD ./ /home/challenge
RUN mkdir -p /srv/cvsroot
RUN cp -R /home/challenge/base_data/* /srv/cvsroot/

RUN mkdir -p /service

ENV PORT=2401
ENV HOST=challenge_container
ENV CHESS=Chess_System

RUN echo -n 09vee78cnw0mjw3bLOiPPmyn15mwmlks > /token
RUN chmod 644 /token

WORKDIR /home/challenge/cvs-1.12.13+real

# Remove stale x86 build artifacts that were shipped in the source tree.
RUN make distclean >/dev/null 2>&1 || true
RUN find . -name '*.o' -delete; find . -name '*.a' -delete; rm -f config.cache

# The challenge source's only libbsd dependency is the <bsd/stdlib.h> header
# (an arc4random() prototype that is never called or linked). Make the
# arch-independent bsd headers visible to the cross compiler via the sysroot.
RUN cp -r "$(dirname $(dpkg -L libbsd-dev | grep '/bsd/stdlib.h$'))" $SYSROOT/include/

# The 2004-era config.sub/config.guess do not know "musleabi" triplets.
# Replace every copy in the tree with the modern one from autoconf.
RUN NEW=$(ls /usr/share/autoconf/build-aux/config.sub /usr/share/automake-*/config.sub 2>/dev/null | head -1); \
    NEWG=$(ls /usr/share/autoconf/build-aux/config.guess /usr/share/automake-*/config.guess 2>/dev/null | head -1); \
    for f in $(find . -name config.sub); do cp "$NEW" "$f"; done; \
    for f in $(find . -name config.guess); do cp "$NEWG" "$f"; done

# Cross-compile to ARM32 musl. The cache vars below answer configure's
# run-time tests that cannot be executed under cross compilation.
RUN ./configure \
      --host=arm-linux-musleabi \
      --build=x86_64-pc-linux-gnu \
      CC=arm-linux-musleabi-gcc \
      AR=arm-linux-musleabi-ar \
      RANLIB=arm-linux-musleabi-ranlib \
      --disable-nls \
      --with-editor=/usr/bin/vi \
      ac_cv_decl_EOVERFLOW=132 \
      ac_cv_func_malloc_0_nonnull=yes \
      ac_cv_func_realloc_0_nonnull=yes \
      cvs_cv_func_printf_ptr=yes \
      ac_cv_func_working_mktime=yes \
      gl_cv_func_working_mkstemp=yes \
      gl_cv_func_working_utimes=yes \
      ac_cv_func_utime_null=yes \
      ac_cv_func_chown_works=yes \
      ac_cv_func_getgroups_works=yes \
      ac_cv_func_setvbuf_reversed=no \
      gl_cv_func_getcwd_null=yes \
      gl_cv_func_getcwd_path_max=yes \
      ac_cv_func_getpgrp_void=yes \
      ac_cv_func_setpgrp_void=yes \
      ac_cv_sys_restartable_syscalls=yes \
      ac_cv_func_fnmatch_works=yes \
      ac_cv_func_fnmatch_gnu=yes \
      gl_cv_func_rename_trailing_slash_bug=no \
      gl_cv_func_stat_dir_slash=yes \
      gl_cv_func_stat_file_slash=yes \
      ac_cv_func_mmap_fixed_mapped=yes

RUN make -j8

WORKDIR /home/challenge/cvs-1.12.13+real/src

CMD qemu-arm -L /arm-linux-musleabi-cross/arm-linux-musleabi ./cvs -f --allow-root=/srv/cvsroot pserver
