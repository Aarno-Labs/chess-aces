FROM arm-build-base
RUN apt-get update && apt-get install -y build-essential qemu-user file
RUN rm /arm-linux-musleabi-cross/arm-linux-musleabi/lib/ld-musl-arm.so.1
RUN cp /arm-linux-musleabi-cross/arm-linux-musleabi/lib/libc.so /arm-linux-musleabi-cross/arm-linux-musleabi/lib/ld-musl-arm.so.1
ENV TOOLCHAIN=/arm-linux-musleabi-cross TARGET=arm-linux-musleabi SYSROOT=/arm-linux-musleabi-cross/arm-linux-musleabi
ENV PATH=$TOOLCHAIN/bin:$PATH
ADD ./ /home/challenge
WORKDIR /home/challenge/vsftpd-3.0.3

# vsftpd: plain Makefile build, cross-compiled to ARM32 musl.
# builddefs.h has TCPWRAPPERS/PAM/SSL all #undef'd, so no -lwrap/-lpam/-lssl
# are needed. We override LIBS/LDFLAGS/LINK so vsf_findlibs.sh's extra libs
# and the hardcoded -lssl -lcrypto are dropped. The dummyinc/ dir (via
# -idirafter dummyinc) supplies fallback headers (utmpx/crypt/shadow/etc).
RUN mkdir -p /root/vsftpd
RUN make clean || true
# -fcommon: login.h has a tentative def of `p_sess` in a shared header; GCC 10+
# defaults to -fno-common, which turns that into a multiple-definition link
# error. -fcommon restores the legacy behaviour the original build relied on.
# -DWTMPX_FILE: musl's <utmpx.h> omits this glibc-only macro; supply it as a
# build-time define (instead of patching the source) so the cross build links.
RUN make CC=arm-linux-musleabi-gcc 'CFLAGS=-fcommon -DWTMPX_FILE=\"/var/log/wtmp\"' LIBS= LINK= LDFLAGS=
RUN file vsftpd && arm-linux-musleabi-readelf -h vsftpd | grep -E 'Class|Machine'

CMD ["qemu-arm", "-L", "/arm-linux-musleabi-cross/arm-linux-musleabi", "/home/challenge/vsftpd-3.0.3/vsftpd"]
