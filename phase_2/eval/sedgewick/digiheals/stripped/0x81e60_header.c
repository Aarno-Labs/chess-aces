// Binary ninja #defines
#define __packed
#define __noreturn
#define __convention(name)
#define __syscall(number)
#define __offset(...)
#define __padding
#define __named(name)
#define __inherited
#define __base(name, offset)
#define __ptr_offset(offset)
#define __data_var_refs
#define __vtable
#define __pure

//------------------------------------------------------------------------------
// Standard type definitions
//------------------------------------------------------------------------------
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef long long unsigned int uint64_t;
typedef char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int int64_t;
typedef unsigned int wchar_t;
typedef unsigned short wchar16;
typedef _Bool bool;
typedef unsigned int size_t;
typedef int ssize_t;
typedef long double float128;
typedef unsigned int wint_t;
typedef unsigned int wchar_t_;
typedef void* uintptr_t;

typedef double DFtype;

typedef int64_t DItype;

struct Elf32_Ident
{
    char signature[0x4];
    uint8_t file_class;
    uint8_t encoding;
    uint8_t version;
    uint8_t os;
    uint8_t abi_version;
    char pad[0x7];
};

struct Elf32_Rel
{
    uint32_t r_offset;
    uint32_t r_info;
};

struct Elf32_Sym
{
    uint32_t st_name;
    uint32_t st_value;
    uint32_t st_size;
    uint8_t st_info;
    uint8_t st_other;
    uint16_t st_shndx;
};

struct Elf_HashTable
{
    uint32_t nbucket;
    uint32_t nchain;
    uint32_t buckets[0x407];
    uint32_t chains[0x530];
};

typedef float SFtype;

typedef uint64_t UDItype;

typedef uint32_t USItype;

struct _IO_FILE
{
};

typedef struct _IO_FILE FILE;

struct __anon_0x000001dc
{
    uint32_t fds_bits[0x20];
};

union __anon_0x00000323
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00001117
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

enum __anon_0x00001344
{
    PR_SYM_CONF = 0x1,
    PR_SYM_CMD = 0x2,
    PR_SYM_AUTH = 0x3,
    PR_SYM_HOOK = 0x4
};

struct __anon_0x00006732
{
    uint32_t fds_bits[0x20];
};

struct __anon_0x000067ab
{
    int32_t si_timerid;
    int32_t si_overrun;
};

struct __anon_0x00006868
{
    void* si_lower;
    void* si_upper;
};

union __anon_0x0000688c
{
    struct __anon_0x00006868 __addr_bnd;
    uint32_t si_pkey;
};

struct __anon_0x000068ae
{
    void* si_addr;
    int16_t si_addr_lsb;
    union __anon_0x0000688c __first;
};

struct __anon_0x000068df
{
    int32_t si_band;
    int32_t si_fd;
};

struct __anon_0x00006903
{
    void* si_call_addr;
    int32_t si_syscall;
    uint32_t si_arch;
};

union __anon_0x00006b03
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000073ce
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x0000a79f
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0000b4cb
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x00010c98
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00011592
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x0001260b
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00012ebb
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x00014eaf
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x00015075
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00015e5b
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x0001b4ef
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0001c21b
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x0001cba0
{
    int32_t si_timerid;
    int32_t si_overrun;
};

struct __anon_0x0001cc5d
{
    void* si_lower;
    void* si_upper;
};

union __anon_0x0001cc81
{
    struct __anon_0x0001cc5d __addr_bnd;
    uint32_t si_pkey;
};

struct __anon_0x0001cca3
{
    void* si_addr;
    int16_t si_addr_lsb;
    union __anon_0x0001cc81 __first;
};

struct __anon_0x0001ccd4
{
    int32_t si_band;
    int32_t si_fd;
};

struct __anon_0x0001ccf8
{
    void* si_call_addr;
    int32_t si_syscall;
    uint32_t si_arch;
};

union __anon_0x0001cef8
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0001dc39
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x0001f5fb
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x0001f7b5
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000205ab
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x00024612
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0002543d
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x0002b3fd
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0002c1c8
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x00030119
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x000302d4
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00031078
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x0003490e
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x00034ac8
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000358b3
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x00037fd3
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00038d05
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x0003968c
{
    uint32_t fds_bits[0x20];
};

union __anon_0x0003974c
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0003a070
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x0003d34b
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

enum __anon_0x0003d5a8
{
    PR_NETACL_TYPE_ALL = 0x0,
    PR_NETACL_TYPE_NONE = 0x1,
    PR_NETACL_TYPE_IPMASK = 0x2,
    PR_NETACL_TYPE_IPMATCH = 0x3,
    PR_NETACL_TYPE_DNSMATCH = 0x4,
    PR_NETACL_TYPE_IPGLOB = 0x5,
    PR_NETACL_TYPE_DNSGLOB = 0x6
};

union __anon_0x0003e84c
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0003f1da
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x0003ff0d
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x000400c7
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00040e61
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x00043c03
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000444f7
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000450aa
{
    uint32_t fds_bits[0x20];
};

union __anon_0x0004517a
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00045eb8
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x00048da2
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00049635
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x0004a761
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0004b48d
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x0004cb56
{
    int32_t si_timerid;
    int32_t si_overrun;
};

struct __anon_0x0004cc13
{
    void* si_lower;
    void* si_upper;
};

union __anon_0x0004cc37
{
    struct __anon_0x0004cc13 __addr_bnd;
    uint32_t si_pkey;
};

struct __anon_0x0004cc59
{
    void* si_addr;
    int16_t si_addr_lsb;
    union __anon_0x0004cc37 __first;
};

struct __anon_0x0004cc8a
{
    int32_t si_band;
    int32_t si_fd;
};

struct __anon_0x0004ccae
{
    void* si_call_addr;
    int32_t si_syscall;
    uint32_t si_arch;
};

union __anon_0x0004cee9
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0004dc6a
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x000506c7
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00050f7e
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x00052089
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00052949
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000549ed
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x00054ba8
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000559d5
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x00057b9a
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0005898c
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x0005d844
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x0005da32
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0005e80a
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x0006d071
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x0006d22c
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0006db2a
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x0006f146
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0006f9e5
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x00070ceb
{
    uint32_t fds_bits[0x20];
};

union __anon_0x00070dab
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00071ae3
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x000727a4
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000734fe
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x00074861
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00075640
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x00078a8a
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x00078c45
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00078d1a
{
    int16_t __e_termination;
    int16_t __e_exit;
};

struct __anon_0x00079a97
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

enum __anon_0x0007a234
{
    JSON_NULL = 0x0,
    JSON_BOOL = 0x1,
    JSON_STRING = 0x2,
    JSON_NUMBER = 0x3,
    JSON_ARRAY = 0x4,
    JSON_OBJECT = 0x5
};

typedef enum __anon_0x0007a234 JsonTag;

union __anon_0x0007d95b
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0007e72e
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x0007e9c9
{
    void* log;
    void const* user_data;
};

struct __anon_0x0007e9f9
{
    uint8_t* ptr;
    uint8_t* buf;
    uint32_t bufsz;
    uint32_t buflen;
};

union __anon_0x00086f18
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000877a5
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x000884d2
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00088dc5
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x0008bea8
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x0008c117
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00094a43
{
    uint32_t fds_bits[0x20];
};

struct __anon_0x00094a72
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x00094c73
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00095b72
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000a243a
{
    uint8_t* name;
    int32_t facility;
};

struct __anon_0x000a9388
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x000a9543
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000aa335
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x000b3eba
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000b4771
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x000b67ef
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000b7545
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000ba1af
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x000ba369
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000bb0c1
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000beefe
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x000bf0b9
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000bfee8
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000c9dfa
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x000c9fb4
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000cae15
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000d1926
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x000d1ae1
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000d28e4
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000d2b27
{
    void* log;
    void const* user_data;
};

struct __anon_0x000d2b57
{
    uint8_t* ptr;
    uint8_t* buf;
    uint32_t bufsz;
    uint32_t buflen;
};

struct __anon_0x000d5e56
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x000d6011
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000d6d7b
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000d6ffa
{
    uint8_t* cmd;
    uint8_t* syntax;
    int32_t implemented;
};

struct __anon_0x000d8864
{
    uint32_t fds_bits[0x20];
};

struct __anon_0x000d8893
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x000d8a4d
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000d984c
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000da324
{
    int32_t dt_enabled;
    uint8_t const* dt_path;
    int32_t dt_fd;
    uint32_t dt_size;
    void* dt_data;
};

struct __anon_0x000de033
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x000de1ee
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000df03f
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x000e3bb3
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000e442f
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000e557c
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

struct __anon_0x000e7f5c
{
    uint8_t* cur;
    uint8_t* end;
    uint8_t* start;
};

typedef struct __anon_0x000e7f5c SB;

struct __dirstream
{
};

typedef struct __dirstream DIR;

struct __fsid_t
{
    int32_t __val[0x2];
};

typedef int32_t __rlimit_resource_t;

struct __sigset_t
{
    uint32_t __bits[0x20];
};

struct __va_list
{
    void* __ap;
};

typedef struct __va_list __isoc_va_list;

union align
{
    uint8_t* cp;
    void (* f)();
    int32_t l;
    FILE* fp;
    double d;
};

struct auth_module_elt
{
    struct auth_module_elt* prev;
    struct auth_module_elt* next;
    uint8_t const* name;
};

typedef int64_t blkcnt_t;

typedef int32_t blksize_t;

union block_hdr;
struct __anon_0x00008adc
{
    void* endp;
    union block_hdr* next;
    void* first_avail;
};

union block_hdr
{
    union align a;
    struct __anon_0x00008adc h;
};

typedef int32_t (* callback_t)(uint32_t, uint32_t, uint32_t, void*);

struct candidate
{
    uint8_t const* s;
    int32_t distance;
    int32_t flags;
};

struct cleanup
{
    void* user_data;
    void (* cleanup_cb)(void*);
    struct cleanup* next;
};

typedef struct cleanup cleanup_t;

typedef int32_t clock_t;

struct __anon_0x000067f1
{
    int32_t si_status;
    clock_t si_utime;
    clock_t si_stime;
};

struct __anon_0x0001cbe6
{
    int32_t si_status;
    clock_t si_utime;
    clock_t si_stime;
};

struct __anon_0x0004cb9c
{
    int32_t si_status;
    clock_t si_utime;
    clock_t si_stime;
};

struct cmd_entry
{
    uint8_t const* cmd_name;
    uint32_t cmd_namelen;
};

typedef struct config_struc config_rec;;
struct conn_struc;
struct delay_vals_rec
{
    uint8_t dv_proto[0x10];
    uint32_t dv_nvals;
    int32_t dv_vals[0x100];
};

struct delay_rec
{
    uint32_t d_sid;
    uint8_t d_addr[0x50];
    uint32_t d_port;
    struct delay_vals_rec d_vals[0x3];
};

typedef uint64_t dev_t;

enum e_dyn_tag
{
    DT_NULL = 0x0,
    DT_NEEDED = 0x1,
    DT_PLTRELSZ = 0x2,
    DT_PLTGOT = 0x3,
    DT_HASH = 0x4,
    DT_STRTAB = 0x5,
    DT_SYMTAB = 0x6,
    DT_RELA = 0x7,
    DT_RELASZ = 0x8,
    DT_RELAENT = 0x9,
    DT_STRSZ = 0xa,
    DT_SYMENT = 0xb,
    DT_INIT = 0xc,
    DT_FINI = 0xd,
    DT_SONAME = 0xe,
    DT_RPATH = 0xf,
    DT_SYMBOLIC = 0x10,
    DT_REL = 0x11,
    DT_RELSZ = 0x12,
    DT_RELENT = 0x13,
    DT_PLTREL = 0x14,
    DT_DEBUG = 0x15,
    DT_TEXTREL = 0x16,
    DT_JMPREL = 0x17,
    DT_BIND_NOW = 0x18,
    DT_INIT_ARRAY = 0x19,
    DT_FINI_ARRAY = 0x1a,
    DT_INIT_ARRAYSZ = 0x1b,
    DT_FINI_ARRAYSZ = 0x1c,
    DT_RUNPATH = 0x1d,
    DT_FLAGS = 0x1e,
    DT_ENCODING = 0x1f,
    DT_PREINIT_ARRAY = 0x20,
    DT_PREINIT_ARRAYSZ = 0x21,
    DT_LOOS = 0x6000000d,
    DT_SUNW_RTLDINF = 0x6000000e,
    DT_HIOS = 0x6ffff000,
    DT_VALRNGLO = 0x6ffffd00,
    DT_CHECKSUM = 0x6ffffdf8,
    DT_PLTPADSZ = 0x6ffffdf9,
    DT_MOVEENT = 0x6ffffdfa,
    DT_MOVESZ = 0x6ffffdfb,
    DT_FEATURE_1 = 0x6ffffdfc,
    DT_POSFLAG_1 = 0x6ffffdfd,
    DT_SYMINSZ = 0x6ffffdfe,
    DT_SYMINENT = 0x6ffffdff,
    DT_VALRNGHI = 0x6ffffdff,
    DT_ADDRRNGLO = 0x6ffffe00,
    DT_GNU_HASH = 0x6ffffef5,
    DT_CONFIG = 0x6ffffefa,
    DT_DEPAUDIT = 0x6ffffefb,
    DT_AUDIT = 0x6ffffefc,
    DT_PLTPAD = 0x6ffffefd,
    DT_MOVETAB = 0x6ffffefe,
    DT_SYMINFO = 0x6ffffeff,
    DT_ADDRRNGHI = 0x6ffffeff,
    DT_RELACOUNT = 0x6ffffff9,
    DT_RELCOUNT = 0x6ffffffa,
    DT_FLAGS_1 = 0x6ffffffb,
    DT_VERDEF = 0x6ffffffc,
    DT_VERDEFNUM = 0x6ffffffd,
    DT_VERNEED = 0x6ffffffe,
    DT_VERNEEDNUM = 0x6fffffff,
    DT_VERSYM = 0x6ffffff0,
    DT_MIPS_RLD_VERSION = 0x70000001,
    DT_MIPS_TIME_STAMP = 0x70000002,
    DT_MIPS_ICHECKSUM = 0x70000003,
    DT_MIPS_IVERSION = 0x70000004,
    DT_MIPS_FLAGS = 0x70000005,
    DT_MIPS_BASE_ADDRESS = 0x70000006,
    DT_MIPS_CONFLICT = 0x70000008,
    DT_MIPS_LIBLIST = 0x70000009,
    DT_MIPS_LOCAL_GOTNO = 0x7000000a,
    DT_MIPS_CONFLICTNO = 0x7000000b,
    DT_MIPS_LIBLISTNO = 0x70000010,
    DT_MIPS_SYMTABNO = 0x70000011,
    DT_MIPS_UNREFEXTNO = 0x70000012,
    DT_MIPS_GOTSYM = 0x70000013,
    DT_MIPS_HIPAGENO = 0x70000014,
    DT_MIPS_RLD_MAP = 0x70000016,
    DT_MIPS_RLD_MAP_REL = 0x70000035
};

struct Elf32_Dyn
{
    enum e_dyn_tag d_tag;
    uint32_t d_val;
};

enum e_machine
{
    EM_NONE = 0x0,
    EM_M32 = 0x1,
    EM_SPARC = 0x2,
    EM_386 = 0x3,
    EM_68K = 0x4,
    EM_88K = 0x5,
    EM_860 = 0x7,
    EM_MIPS = 0x8,
    EM_S370 = 0x9,
    EM_MIPS_RS3_LE = 0xa,
    EM_PARISC = 0xf,
    EM_VPP500 = 0x11,
    EM_SPARC32PLUS = 0x12,
    EM_960 = 0x13,
    EM_PPC = 0x14,
    EM_PPC64 = 0x15,
    EM_S390 = 0x16,
    EM_V800 = 0x24,
    EM_FR20 = 0x25,
    EM_RH32 = 0x26,
    EM_RCE = 0x27,
    EM_ARM = 0x28,
    EM_FAKE_ALPHA = 0x29,
    EM_SH = 0x2a,
    EM_SPARCV9 = 0x2b,
    EM_TRICORE = 0x2c,
    EM_ARC = 0x2d,
    EM_H8_300 = 0x2e,
    EM_H8_300H = 0x2f,
    EM_H8S = 0x30,
    EM_H8_500 = 0x31,
    EM_IA_64 = 0x32,
    EM_MIPS_X = 0x33,
    EM_COLDFIRE = 0x34,
    EM_68HC12 = 0x35,
    EM_MMA = 0x36,
    EM_PCP = 0x37,
    EM_NCPU = 0x38,
    EM_NDR1 = 0x39,
    EM_STARCORE = 0x3a,
    EM_ME16 = 0x3b,
    EM_ST100 = 0x3c,
    EM_TINYJ = 0x3d,
    EM_X86_64 = 0x3e,
    EM_PDSP = 0x3f,
    EM_FX66 = 0x42,
    EM_ST9PLUS = 0x43,
    EM_ST7 = 0x44,
    EM_68HC16 = 0x45,
    EM_68HC11 = 0x46,
    EM_68HC08 = 0x47,
    EM_68HC05 = 0x48,
    EM_SVX = 0x49,
    EM_ST19 = 0x4a,
    EM_VAX = 0x4b,
    EM_CRIS = 0x4c,
    EM_JAVELIN = 0x4d,
    EM_FIREPATH = 0x4e,
    EM_ZSP = 0x4f,
    EM_MMIX = 0x50,
    EM_HUANY = 0x51,
    EM_PRISM = 0x52,
    EM_AVR = 0x53,
    EM_FR30 = 0x54,
    EM_D10V = 0x55,
    EM_D30V = 0x56,
    EM_V850 = 0x57,
    EM_M32R = 0x58,
    EM_MN10300 = 0x59,
    EM_MN10200 = 0x5a,
    EM_PJ = 0x5b,
    EM_OPENRISC = 0x5c,
    EM_ARC_A5 = 0x5d,
    EM_XTENSA = 0x5e,
    EM_ALTERA_NIOS2 = 0x71,
    EM_AARCH64 = 0xb7,
    EM_TILEPRO = 0xbc,
    EM_MICROBLAZE = 0xbd,
    EM_TILEGX = 0xbf,
    EM_NUM = 0xc0
};

enum e_type
{
    ET_NONE = 0x0,
    ET_REL = 0x1,
    ET_EXEC = 0x2,
    ET_DYN = 0x3,
    ET_CORE = 0x4,
    ET_NUM = 0x5
};

struct Elf32_Header
{
    struct Elf32_Ident ident;
    enum e_type type;
    enum e_machine machine;
    uint32_t version;
    void (* entry)();
    uint32_t program_header_offset;
    uint32_t section_header_offset;
    uint32_t flags;
    uint16_t header_size;
    uint16_t program_header_size;
    uint16_t program_header_count;
    uint16_t section_header_size;
    uint16_t section_header_count;
    uint16_t string_table;
};

struct errno_info
{
    int32_t error_number;
    uint8_t const* name;
};

struct extlog_buffer
{
    uint8_t* ptr;
    uint8_t* buf;
    uint32_t bufsz;
    uint32_t buflen;
};

typedef struct __anon_0x000001dc fd_set;

struct filename
{
    struct filename* down;
    struct filename* right;
    uint8_t* line;
    int32_t top;
};

struct fnmatch_struct
{
    uint8_t const* pattern;
    uint8_t const* string;
    int32_t no_leading_period;
};

typedef uint64_t fsblkcnt_t;

typedef uint64_t fsfilcnt_t;

typedef struct __fsid_t fsid_t;

typedef struct fsopendir fsopendir_t;;
typedef uint32_t gid_t;

struct globlink
{
    struct globlink* next;
    uint8_t* name;
};

struct group
{
    uint8_t* gr_name;
    uint8_t* gr_passwd;
    gid_t gr_gid;
    uint8_t** gr_mem;
};

struct help_rec
{
    uint8_t const* cmd;
    uint8_t const* syntax;
    int32_t impl;
};

struct hostent
{
    uint8_t* h_name;
    uint8_t** h_aliases;
    int32_t h_addrtype;
    int32_t h_length;
    uint8_t** h_addr_list;
};

struct in6_addr
{
    union __anon_0x00000323 __in6_union;
};

typedef uint32_t in_addr_t;

struct in_addr
{
    in_addr_t s_addr;
};

typedef uint16_t in_port_t;

typedef uint64_t ino_t;

typedef int32_t intptr_t;

struct iovec
{
    void* iov_base;
    uint32_t iov_len;
};

enum isa_feature
{
    isa_nobit = 0x0,
    isa_bit_quirk_vlldm = 0x1,
    isa_bit_fp16fml = 0x2,
    isa_bit_mve = 0x3,
    isa_bit_cmse = 0x4,
    isa_bit_quirk_armv6kz = 0x5,
    isa_bit_dotprod = 0x6,
    isa_bit_crc32 = 0x7,
    isa_bit_xscale = 0x8,
    isa_bit_vfpv2 = 0x9,
    isa_bit_vfpv3 = 0xa,
    isa_bit_vfpv4 = 0xb,
    isa_bit_lpae = 0xc,
    isa_bit_armv7em = 0xd,
    isa_bit_fp16 = 0xe,
    isa_bit_adiv = 0xf,
    isa_bit_fp_d32 = 0x10,
    isa_bit_be8 = 0x11,
    isa_bit_fp16conv = 0x12,
    isa_bit_thumb2 = 0x13,
    isa_bit_crypto = 0x14,
    isa_bit_mp = 0x15,
    isa_bit_sec = 0x16,
    isa_bit_sb = 0x17,
    isa_bit_bf16 = 0x18,
    isa_bit_predres = 0x19,
    isa_bit_armv4 = 0x1a,
    isa_bit_quirk_cm3_ldrd = 0x1b,
    isa_bit_smallmul = 0x1c,
    isa_bit_armv5t = 0x1d,
    isa_bit_armv8_1m_main = 0x1e,
    isa_bit_armv6 = 0x1f,
    isa_bit_thumb = 0x20,
    isa_bit_quirk_no_asmcpu = 0x21,
    isa_bit_armv7 = 0x22,
    isa_bit_armv8 = 0x23,
    isa_bit_i8mm = 0x24,
    isa_bit_fp_dbl = 0x25,
    isa_bit_armv5te = 0x26,
    isa_bit_fpv5 = 0x27,
    isa_bit_iwmmxt2 = 0x28,
    isa_bit_notm = 0x29,
    isa_bit_cdecp0 = 0x2a,
    isa_bit_cdecp1 = 0x2b,
    isa_bit_cdecp2 = 0x2c,
    isa_bit_cdecp3 = 0x2d,
    isa_bit_iwmmxt = 0x2e,
    isa_bit_cdecp4 = 0x2f,
    isa_bit_cdecp5 = 0x30,
    isa_bit_cdecp6 = 0x31,
    isa_bit_cdecp7 = 0x32,
    isa_bit_mve_float = 0x33,
    isa_bit_armv8_1 = 0x34,
    isa_bit_armv8_2 = 0x35,
    isa_bit_armv8_3 = 0x36,
    isa_bit_tdiv = 0x37,
    isa_bit_armv8_4 = 0x38,
    isa_bit_armv8_5 = 0x39,
    isa_bit_armv8_6 = 0x3a,
    isa_bit_neon = 0x3b,
    isa_bit_quirk_no_volatile_ce = 0x3c,
    isa_bit_armv6k = 0x3d,
    isa_bit_vfp_base = 0x3e,
    isa_num_bits = 0x3f
};

struct fbit_implication
{
    enum isa_feature ante;
    enum isa_feature cons;
};

struct json_node_st;
struct __anon_0x0007a273
{
    struct json_node_st* head;
    struct json_node_st* tail;
};

union __anon_0x0007a2ee
{
    int32_t bool_;
    uint8_t* string_;
    double number_;
    struct __anon_0x0007a273 children;
};

struct __anon_0x000e7dfd
{
    struct json_node_st* head;
    struct json_node_st* tail;
};

union __anon_0x000e7e7b
{
    int32_t bool_;
    uint8_t* string_;
    double number_;
    struct __anon_0x000e7dfd children;
};

struct json_node_st
{
    struct json_node_st* parent;
    struct json_node_st* prev;
    struct json_node_st* next;
    uint8_t* key;
    JsonTag tag;
    union __anon_0x0007a2ee __anon0;
};

typedef struct json_node_st JsonNode;

struct list_limit_rec
{
    uint32_t curr;
    uint32_t max;
    uint8_t logged;
};

struct log_event
{
    uint32_t log_type;
    int32_t log_fd;
    int32_t log_level;
    uint8_t const* log_msg;
    uint32_t log_msglen;
};

typedef struct logfile_struc logfile_t;;
struct logfmt_json_info
{
    uint32_t json_type;
    uint8_t const* json_key;
};

typedef struct logformat_struc logformat_t;;
struct logformat_struc
{
    logformat_t* next;
    logformat_t* prev;
    uint8_t* lf_fmt_name;
    uint8_t* lf_format;
};

typedef struct logformat_struc logformat_t;

struct mcache_rec
{
};

typedef uint32_t mode_t;

typedef struct module_struc module;;
struct event_handler
{
    struct event_handler* next;
    struct event_handler* prev;
    module* module;
    void (* cb)(void const*, void*);
    void* user_data;
    uint32_t flags;
};

struct modret_struc
{
    module* mr_handler_module;
    int32_t mr_error;
    uint8_t const* mr_numeric;
    uint8_t const* mr_message;
    void* data;
};

typedef struct modret_struc modret_t;

typedef uint32_t nlink_t;

typedef int64_t off_t;

struct dirent
{
    ino_t d_ino;
    off_t d_off;
    uint16_t d_reclen;
    uint8_t d_type;
    uint8_t d_name[0x100];
};

struct option
{
    uint8_t const* name;
    int32_t has_arg;
    int32_t* flag;
    int32_t val;
};

struct option_help
{
    uint8_t const* long_opt;
    uint8_t const* short_opt;
    uint8_t const* desc;
};

enum p_flags
{
    PF_X = 0x1,
    PF_W = 0x2,
    PF_R = 0x4
};

enum p_type
{
    PT_NULL = 0x0,
    PT_LOAD = 0x1,
    PT_DYNAMIC = 0x2,
    PT_INTERP = 0x3,
    PT_NOTE = 0x4,
    PT_SHLIB = 0x5,
    PT_PHDR = 0x6,
    PT_TLS = 0x7,
    PT_NUM = 0x8,
    PT_LOOS = 0x60000000,
    PT_GNU_EH_FRAME = 0x6474e550,
    PT_GNU_STACK = 0x6474e551,
    PT_GNU_RELRO = 0x6474e552,
    PT_GNU_PROPERTY = 0x6474e553,
    PT_LOSUNW = 0x6ffffffa,
    PT_SUNWBSS = 0x6ffffffb,
    PT_SUNWSTACK = 0x6ffffffa,
    PT_MIPS_REGINFO = 0x70000000,
    PT_MIPS_RTPROC = 0x70000001,
    PT_MIPS_OPTIONS = 0x70000002,
    PT_MIPS_ABIFLAGS = 0x70000003
};

struct Elf32_ProgramHeader
{
    enum p_type type;
    uint32_t offset;
    uint32_t virtual_address;
    uint32_t physical_address;
    uint32_t file_size;
    uint32_t memory_size;
    enum p_flags flags;
    uint32_t align;
};

struct patternlist
{
    struct patternlist* next;
    uint8_t str[0x1];
};

typedef int32_t pid_t;

struct flock
{
    int16_t l_type;
    int16_t l_whence;
    off_t l_start;
    off_t l_len;
    pid_t l_pid;
};

struct pool_rec
{
    union block_hdr* first;
    union block_hdr* last;
    struct cleanup* cleanups;
    struct pool_rec* sub_pools;
    struct pool_rec* sub_next;
    struct pool_rec* sub_prev;
    struct pool_rec* parent;
    uint8_t* free_first_avail;
    uint8_t const* tag;
};

typedef struct pool_rec pool;

struct __anon_0x00000434
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x00008a25
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0000a88a
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0000c12f
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x00010d8f
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000151b1
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0001b5da
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0001cfe6
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0001f964
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000247f1
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0002b575
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0003041a
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x00034c60
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000380be
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x00039843
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0003d444
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0003e943
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x00040211
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x00043cfa
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x00045271
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0004a84c
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0004cfdc
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x00054d83
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x00057d2d
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0005db89
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x00070e96
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0007289f
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000749f9
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x00078e51
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0007dae7
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000885bd
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0008c297
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x00094e5e
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000a969d
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000b68da
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000ba454
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000bf213
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000ca1ab
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000d1c79
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000d60fc
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000d8be2
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000de3d5
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

typedef struct __anon_0x00000434 array_header;

struct event_list
{
    struct event_list* next;
    pool* pool;
    uint8_t const* event;
    uint32_t event_len;
    struct event_handler* handlers;
};

struct jot_filters_rec
{
    pool* pool;
    int32_t included_classes;
    int32_t excluded_classes;
    array_header* cmd_ids;
};

struct json_list_st
{
    pool* pool;
    JsonNode* array;
    uint32_t item_count;
};

struct json_obj_st
{
    pool* pool;
    JsonNode* object;
    uint32_t member_count;
};

typedef struct __anon_0x00001117 pr_buffer_t;

typedef struct fs_rec pr_fs_t;;
struct fh_rec
{
    pool* fh_pool;
    int32_t fh_fd;
    uint8_t* fh_path;
    void* fh_data;
    pr_fs_t* fh_fs;
    pr_buffer_t* fh_buf;
    uint32_t fh_iosz;
};

struct fsopendir
{
    fsopendir_t* next;
    fsopendir_t* prev;
    pool* pool;
    pr_fs_t* fsdir;
    DIR* dir;
};

typedef struct fsopendir fsopendir_t;

typedef struct fh_rec pr_fh_t;

struct config_src
{
    struct config_src* cs_next;
    pool* cs_pool;
    pr_fh_t* cs_fh;
    uint32_t cs_lineno;
};

typedef struct __anon_0x0007e9c9 pr_jot_ctx_t;

typedef struct jot_filters_rec pr_jot_filters_t;

struct logfile_struc
{
    logfile_t* next;
    logfile_t* prev;
    uint8_t* lf_filename;
    int32_t lf_fd;
    int32_t lf_syslog_level;
    logformat_t* lf_format;
    pr_jot_filters_t* lf_jot_filters;
    config_rec* lf_conf;
};

typedef struct logfile_struc logfile_t;

typedef struct __anon_0x0007e9f9 pr_jot_parsed_t;

typedef struct json_list_st pr_json_array_t;

typedef struct json_obj_st pr_json_object_t;

typedef struct log_event pr_log_event_t;

typedef struct mcache_rec pr_memcache_t;

typedef enum __anon_0x0003d5a8 pr_netacl_type_t;

typedef struct netio_rec pr_netio_t;;
typedef int32_t pr_sendfile_t;

typedef enum __anon_0x00001344 pr_stash_type_t;

struct protoent
{
    uint8_t* p_name;
    uint8_t** p_aliases;
    int32_t p_proto;
};

struct re_pattern_buffer
{
    uint32_t re_nsub;
    void* __opaque;
    void* __padding1[0x4];
    uint32_t __nsub2;
    uint8_t __padding2;
};

struct redis_rec
{
};

typedef struct redis_rec pr_redis_t;

typedef struct re_pattern_buffer regex_t;

struct regexp_rec
{
    pool* regex_pool;
    module* m;
    uint8_t const* pattern;
    regex_t* re;
};

typedef struct regexp_rec pr_regex_t;

typedef int32_t regoff_t;

struct __anon_0x00011839
{
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x00016094
{
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x000772fd
{
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x00095dab
{
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x000bb2fa
{
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x000c0121
{
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x000d6fb4
{
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x000df278
{
    regoff_t rm_so;
    regoff_t rm_eo;
};

typedef struct __anon_0x00011839 regmatch_t;

struct resp_struc
{
    struct resp_struc* next;
    uint8_t const* num;
    uint8_t const* msg;
};

typedef struct resp_struc pr_response_t;

typedef uint64_t rlim_t;

struct rlimit
{
    rlim_t rlim_cur;
    rlim_t rlim_max;
};

typedef uint16_t sa_family_t;

struct sched_obj
{
    struct sched_obj* next;
    struct sched_obj* prev;
    pool* pool;
    void (* cb)(void*, void*, void*, void*);
    int32_t nloops;
    void* arg1;
    void* arg2;
    void* arg3;
    void* arg4;
};

typedef struct sched_obj sched_t;

struct servent
{
    uint8_t* s_name;
    uint8_t** s_aliases;
    int32_t s_port;
    uint8_t* s_proto;
};

enum sh_flags
{
    SHF_WRITE = 0x1,
    SHF_ALLOC = 0x2,
    SHF_EXECINSTR = 0x4,
    SHF_MERGE = 0x10,
    SHF_STRINGS = 0x20,
    SHF_INFO_LINK = 0x40,
    SHF_LINK_ORDER = 0x80,
    SHF_OS_NONCONFORMING = 0x100,
    SHF_GROUP = 0x200,
    SHF_TLS = 0x400,
    SHF_COMPRESSED = 0x800,
    SHF_MASKOS = 0xff00000,
    SHF_ENTRYSECT = 0x10000000,
    SHF_COMDEF = 0x80000000
};

enum sh_type
{
    SHT_NULL = 0x0,
    SHT_PROGBITS = 0x1,
    SHT_SYMTAB = 0x2,
    SHT_STRTAB = 0x3,
    SHT_RELA = 0x4,
    SHT_HASH = 0x5,
    SHT_DYNAMIC = 0x6,
    SHT_NOTE = 0x7,
    SHT_NOBITS = 0x8,
    SHT_REL = 0x9,
    SHT_SHLIB = 0xa,
    SHT_DYNSYM = 0xb,
    SHT_LOUSER = 0x80000000,
    SHT_HIUSER = 0xffffffff,
    SHT_LOPROC = 0x70000000,
    SHT_HIPROC = 0x7fffffff
};

struct Elf32_SectionHeader
{
    uint32_t name;
    enum sh_type type;
    enum sh_flags flags;
    uint32_t address;
    uint32_t offset;
    uint32_t size;
    uint32_t link;
    uint32_t info;
    uint32_t align;
    uint32_t entry_size;
};

typedef void (* sighandler_t)(int32_t __status);

typedef struct __sigset_t sigset_t;

union sigval
{
    int32_t sival_int;
    void* sival_ptr;
};

union __anon_0x00006822
{
    union sigval si_value;
    struct __anon_0x000067f1 __sigchld;
};

union __anon_0x0001cc17
{
    union sigval si_value;
    struct __anon_0x0001cbe6 __sigchld;
};

union __anon_0x0004cbcd
{
    union sigval si_value;
    struct __anon_0x0004cb9c __sigchld;
};

struct sockaddr
{
    sa_family_t sa_family;
    uint8_t sa_data[0xe];
};

union __anon_0x0002568d
{
    struct sockaddr* ifu_broadaddr;
    struct sockaddr* ifu_dstaddr;
};

struct ifaddrs
{
    struct ifaddrs* ifa_next;
    uint8_t* ifa_name;
    uint32_t ifa_flags;
    struct sockaddr* ifa_addr;
    struct sockaddr* ifa_netmask;
    union __anon_0x0002568d ifa_ifu;
    void* ifa_data;
};

struct sockaddr_in
{
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;
    uint8_t sin_zero[0x8];
};

struct sockaddr_in6
{
    sa_family_t sin6_family;
    in_port_t sin6_port;
    uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    uint32_t sin6_scope_id;
};

union __anon_0x000004a7
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00006c13
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0000a8f7
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00010e01
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0001271e
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00015224
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0001b647
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0001d059
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0001f9d7
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00024869
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0002b5e8
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0003048d
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00034cd3
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00038131
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000398af
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0003d4a0
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0003e9b5
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00040284
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00043d66
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000452e4
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00048ea9
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0004a8b9
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0004d04f
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000507ce
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00052199
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00054df6
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00057da0
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0005de9b
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0006d393
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0006f259
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00070f03
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00072912
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00074a6c
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00078ec4
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0007db5a
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00087019
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00088634
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0008c5a4
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00094ed1
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000a9710
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000b3fc1
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000b694d
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000ba4c7
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000bf28b
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000ca21e
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000d1cec
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000d616f
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000d8c55
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000de448
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000e3ca3
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

struct netaddr_struc
{
    int32_t na_family;
    uint8_t na_dnsstr[0x100];
    int32_t na_have_dnsstr;
    uint8_t na_ipstr[0x2e];
    int32_t na_have_ipstr;
    union __anon_0x000004a7 na_addr;
};

typedef struct netaddr_struc pr_netaddr_t;

struct pr_netacl_t
{
    pr_netacl_type_t type;
    uint8_t const* aclstr;
    uint8_t* pattern;
    int32_t negated;
    pr_netaddr_t const* addr;
    uint32_t masklen;
};

struct sockaddr_un
{
    sa_family_t sun_family;
    uint8_t sun_path[0x6c];
};

typedef uint32_t socklen_t;

struct addrinfo
{
    int32_t ai_flags;
    int32_t ai_family;
    int32_t ai_socktype;
    int32_t ai_protocol;
    socklen_t ai_addrlen;
    struct sockaddr* ai_addr;
    uint8_t* ai_canonname;
    struct addrinfo* ai_next;
};

struct spwd
{
    uint8_t* sp_namp;
    uint8_t* sp_pwdp;
    int32_t sp_lstchg;
    int32_t sp_min;
    int32_t sp_max;
    int32_t sp_warn;
    int32_t sp_inact;
    int32_t sp_expire;
    uint32_t sp_flag;
};

struct statfs
{
    uint32_t f_type;
    uint32_t f_bsize;
    fsblkcnt_t f_blocks;
    fsblkcnt_t f_bfree;
    fsblkcnt_t f_bavail;
    fsfilcnt_t f_files;
    fsfilcnt_t f_ffree;
    fsid_t f_fsid;
    uint32_t f_namelen;
    uint32_t f_frsize;
    uint32_t f_flags;
    uint32_t f_spare[0x4];
};

struct statvfs
{
    uint32_t f_bsize;
    uint32_t f_frsize;
    fsblkcnt_t f_blocks;
    fsblkcnt_t f_bfree;
    fsblkcnt_t f_bavail;
    fsfilcnt_t f_files;
    fsfilcnt_t f_ffree;
    fsfilcnt_t f_favail;
    uint32_t f_fsid;
    uint32_t f_flag;
    uint32_t f_namemax;
    int32_t __reserved[0x6];
};

typedef int64_t suseconds_t;

struct tab_key
{
    struct tab_key* next;
    void const* key_data;
    uint32_t key_datasz;
    uint32_t hash;
    uint32_t nents;
};

typedef struct tab_key pr_table_key_t;

struct tab_entry
{
    struct tab_entry* next;
    struct tab_entry* prev;
    uint32_t idx;
    pr_table_key_t* key;
    void const* value_data;
    uint32_t value_datasz;
};

typedef struct tab_entry pr_table_entry_t;

struct table_rec
{
    pool* pool;
    uint32_t flags;
    uint32_t seed;
    uint32_t nmaxents;
    pr_table_entry_t** chains;
    uint32_t nchains;
    uint32_t nents;
    pr_table_entry_t* free_ents;
    pr_table_key_t* free_keys;
    pr_table_entry_t* tab_iter_ent;
    pr_table_entry_t* val_iter_ent;
    pr_table_entry_t* cache_ent;
    int32_t (* keycmp)(void const*, uint32_t, void const*, uint32_t);
    uint32_t (* keyhash)(void const*, uint32_t);
    void (* entinsert)(pr_table_entry_t**, pr_table_entry_t*);
    void (* entremove)(pr_table_entry_t**, pr_table_entry_t*);
};

typedef struct table_rec pr_table_t;

struct __anon_0x00001217
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000074ce
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0000b5cb
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00011691
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00012fb9
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00015f5b
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0001c31b
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0001dd39
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000206ab
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0002553d
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0002c2c8
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00031178
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000359b3
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00038e05
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0003a16f
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0003f2d9
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00040f61
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000445f6
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00045fb8
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00049733
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0004b58d
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0004dd6a
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0005107c
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00052a47
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00055ad5
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00058a8c
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0005e90a
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0006dc2a
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0006fae3
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00071be3
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000735fe
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00075740
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00079b97
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0007e82e
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000878a3
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00088ec4
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00095c72
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000aa435
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000b486f
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000b7645
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000bb1c1
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000bffe8
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000caf15
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000d29e4
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000d6e7b
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000d994c
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000df13f
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000e452d
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct class_struc
{
    pool* cls_pool;
    uint8_t* cls_name;
    uint32_t cls_satisfy;
    array_header* cls_acls;
    pr_table_t* cls_notes;
    struct class_struc* cls_next;
};

typedef struct class_struc pr_class_t;

typedef struct __anon_0x00001217 pr_netio_stream_t;

struct conn_struc
{
    struct conn_struc* next;
    struct pool_rec* pool;
    int32_t mode;
    int32_t listen_fd;
    int32_t rcvbuf;
    int32_t sndbuf;
    int32_t xerrno;
    int32_t rfd;
    int32_t wfd;
    pr_netio_stream_t* instrm;
    pr_netio_stream_t* outstrm;
    pr_netaddr_t const* remote_addr;
    int32_t remote_port;
    uint8_t const* remote_name;
    pr_netaddr_t const* local_addr;
    int32_t local_port;
};

typedef struct conn_struc conn_t;

struct listener_rec
{
    struct listener_rec* next;
    struct listener_rec* prev;
    pool* pool;
    pr_netaddr_t const* addr;
    uint32_t port;
    conn_t* conn;
    int32_t claimed;
};

struct netio_rec
{
    struct pool_rec* pool;
    void (* abort)(pr_netio_stream_t*);
    int32_t (* close)(pr_netio_stream_t*);
    pr_netio_stream_t* (* open)(pr_netio_stream_t*, int32_t, int32_t);
    int32_t (* poll)(pr_netio_stream_t*);
    int32_t (* postopen)(pr_netio_stream_t*);
    int32_t (* read)(pr_netio_stream_t*, uint8_t*, uint32_t);
    pr_netio_stream_t* (* reopen)(pr_netio_stream_t*, int32_t, int32_t);
    int32_t (* shutdown)(pr_netio_stream_t*, int32_t);
    int32_t (* write)(pr_netio_stream_t*, uint8_t*, uint32_t);
    module* owner;
    uint8_t const* owner_name;
};

typedef struct netio_rec pr_netio_t;

struct tcp_keepalive
{
    int32_t keepalive_enabled;
    int32_t keepalive_idle;
    int32_t keepalive_count;
    int32_t keepalive_intvl;
};

typedef int64_t time_t;

struct __anon_0x0004108e
{
    uint32_t sch_magic;
    uint32_t sch_version;
    pid_t sch_pid;
    time_t sch_uptime;
};

struct child
{
    struct child* next;
    struct child* prev;
    pool* ch_pool;
    pid_t ch_pid;
    time_t ch_when;
    int32_t ch_pipefd;
    uint8_t ch_dead;
};

typedef struct child pr_child_t;

typedef struct __anon_0x0004108e pr_scoreboard_header_t;

struct sort_filename
{
    time_t sort_time;
    off_t size;
    uint8_t* name;
    uint8_t* suffix;
};

struct timer
{
    struct timer* next;
    struct timer* prev;
    int32_t count;
    int32_t interval;
    int32_t timerno;
    module* mod;
    callback_t callback;
    uint8_t remove;
    uint8_t const* desc;
};

struct timespec
{
    time_t tv_sec;
    int32_t tv_nsec;
};

struct timeval
{
    time_t tv_sec;
    suseconds_t tv_usec;
};

struct __anon_0x000005c7
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x0000aa07
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x0001534a
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x0001b757
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x0001d169
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x0001fae7
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x00024979
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x0002b6f8
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x0003059c
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x00034de3
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x00038241
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x00040394
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000453f4
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x0004a9c9
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x0004d18e
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x00054f05
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x00057eb0
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x0005e431
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x00071013
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x00072a22
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x00074b7c
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x00078fd3
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x0007dc6a
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x0008d628
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x00095036
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000a984e
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000b6a5d
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000ba5d9
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000bf3c9
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000ca32d
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000d1dfc
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000d627f
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000d8d64
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000de557
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct tm
{
    int32_t tm_sec;
    int32_t tm_min;
    int32_t tm_hour;
    int32_t tm_mday;
    int32_t tm_mon;
    int32_t tm_year;
    int32_t tm_wday;
    int32_t tm_yday;
    int32_t tm_isdst;
    int32_t tm_gmtoff;
    uint8_t const* tm_zone;
};

struct trace_levels
{
    int32_t min_level;
    int32_t max_level;
};

typedef uint16_t u_int16_t;

typedef uint32_t u_int32_t;

struct BlowfishContext
{
    u_int32_t S[0x4][0x100];
    u_int32_t P[0x12];
};

typedef struct BlowfishContext blf_ctx;

typedef uint8_t u_int8_t;

typedef uint32_t uid_t;

struct __anon_0x00006787
{
    pid_t si_pid;
    uid_t si_uid;
};

union __anon_0x000067cf
{
    struct __anon_0x00006787 __piduid;
    struct __anon_0x000067ab __timer;
};

struct __anon_0x00006844
{
    union __anon_0x000067cf __first;
    union __anon_0x00006822 __second;
};

union __anon_0x00006934
{
    uint8_t __pad[0x74];
    struct __anon_0x00006844 __si_common;
    struct __anon_0x000068ae __sigfault;
    struct __anon_0x000068df __sigpoll;
    struct __anon_0x00006903 __sigsys;
};

struct __anon_0x0000698a
{
    int32_t si_signo;
    int32_t si_errno;
    int32_t si_code;
    union __anon_0x00006934 __si_fields;
};

struct __anon_0x0001cb7c
{
    pid_t si_pid;
    uid_t si_uid;
};

union __anon_0x0001cbc4
{
    struct __anon_0x0001cb7c __piduid;
    struct __anon_0x0001cba0 __timer;
};

struct __anon_0x0001cc39
{
    union __anon_0x0001cbc4 __first;
    union __anon_0x0001cc17 __second;
};

union __anon_0x0001cd29
{
    uint8_t __pad[0x74];
    struct __anon_0x0001cc39 __si_common;
    struct __anon_0x0001cca3 __sigfault;
    struct __anon_0x0001ccd4 __sigpoll;
    struct __anon_0x0001ccf8 __sigsys;
};

struct __anon_0x0001cd7f
{
    int32_t si_signo;
    int32_t si_errno;
    int32_t si_code;
    union __anon_0x0001cd29 __si_fields;
};

struct __anon_0x000410d8
{
    pid_t sce_pid;
    uid_t sce_uid;
    gid_t sce_gid;
    uint8_t sce_user[0x20];
    int32_t sce_server_port;
    uint8_t sce_server_addr[0x50];
    uint8_t sce_server_label[0x20];
    uint8_t sce_client_addr[0x2e];
    uint8_t sce_client_name[0x50];
    uint8_t sce_class[0x20];
    uint8_t sce_protocol[0x20];
    uint8_t sce_cwd[0x50];
    uint8_t sce_cmd[0x41];
    uint8_t sce_cmd_arg[0x50];
    time_t sce_begin_idle;
    time_t sce_begin_session;
    off_t sce_xfer_size;
    off_t sce_xfer_done;
    off_t sce_xfer_len;
    uint32_t sce_xfer_elapsed;
};

struct __anon_0x0004cb32
{
    pid_t si_pid;
    uid_t si_uid;
};

union __anon_0x0004cb7a
{
    struct __anon_0x0004cb32 __piduid;
    struct __anon_0x0004cb56 __timer;
};

struct __anon_0x0004cbef
{
    union __anon_0x0004cb7a __first;
    union __anon_0x0004cbcd __second;
};

union __anon_0x0004ccdf
{
    uint8_t __pad[0x74];
    struct __anon_0x0004cbef __si_common;
    struct __anon_0x0004cc59 __sigfault;
    struct __anon_0x0004cc8a __sigpoll;
    struct __anon_0x0004ccae __sigsys;
};

struct __anon_0x0004cd35
{
    int32_t si_signo;
    int32_t si_errno;
    int32_t si_code;
    union __anon_0x0004ccdf __si_fields;
};

struct __anon_0x000aa562
{
    pid_t sce_pid;
    uid_t sce_uid;
    gid_t sce_gid;
    uint8_t sce_user[0x20];
    int32_t sce_server_port;
    uint8_t sce_server_addr[0x50];
    uint8_t sce_server_label[0x20];
    uint8_t sce_client_addr[0x2e];
    uint8_t sce_client_name[0x50];
    uint8_t sce_class[0x20];
    uint8_t sce_protocol[0x20];
    uint8_t sce_cwd[0x50];
    uint8_t sce_cmd[0x41];
    uint8_t sce_cmd_arg[0x50];
    time_t sce_begin_idle;
    time_t sce_begin_session;
    off_t sce_xfer_size;
    off_t sce_xfer_done;
    off_t sce_xfer_len;
    uint32_t sce_xfer_elapsed;
};

union __anon_0x000bb35c
{
    uid_t uid;
    gid_t gid;
};

struct __anon_0x000c0167
{
    pid_t sce_pid;
    uid_t sce_uid;
    gid_t sce_gid;
    uint8_t sce_user[0x20];
    int32_t sce_server_port;
    uint8_t sce_server_addr[0x50];
    uint8_t sce_server_label[0x20];
    uint8_t sce_client_addr[0x2e];
    uint8_t sce_client_name[0x50];
    uint8_t sce_class[0x20];
    uint8_t sce_protocol[0x20];
    uint8_t sce_cwd[0x50];
    uint8_t sce_cmd[0x41];
    uint8_t sce_cmd_arg[0x50];
    time_t sce_begin_idle;
    time_t sce_begin_session;
    off_t sce_xfer_size;
    off_t sce_xfer_done;
    off_t sce_xfer_len;
    uint32_t sce_xfer_elapsed;
};

typedef union __anon_0x000bb35c authfile_id_t;

struct err_rec
{
    pool* err_pool;
    int32_t err_errno;
    uint8_t const* err_name;
    uint8_t const* err_desc;
    module* err_module;
    uint8_t const* err_file;
    uint32_t err_lineno;
    uint8_t const* err_user;
    uid_t err_uid;
    gid_t err_gid;
    uint8_t const* err_goal;
    uint8_t const* err_oper;
    uint8_t const* err_args;
    uint8_t const* err_explained;
};

struct file_rec
{
    uint8_t* af_path;
    FILE* af_file;
    uint32_t af_lineno;
    uint8_t af_restricted_ids;
    authfile_id_t af_min_id;
    authfile_id_t af_max_id;
    uint8_t af_restricted_names;
    uint8_t* af_name_filter;
    pr_regex_t* af_name_regex;
    uint8_t af_name_regex_inverted;
    uint8_t af_restricted_homes;
    uint8_t* af_home_filter;
    pr_regex_t* af_home_regex;
    uint8_t af_home_regex_inverted;
};

typedef struct file_rec authfile_file_t;

struct passwd
{
    uint8_t* pw_name;
    uint8_t* pw_passwd;
    uid_t pw_uid;
    gid_t pw_gid;
    uint8_t* pw_gecos;
    uint8_t* pw_dir;
    uint8_t* pw_shell;
};

typedef struct err_rec pr_error_t;

typedef struct __anon_0x000410d8 pr_scoreboard_entry_t;

typedef struct __anon_0x0000698a siginfo_t;

union __anon_0x000069d4
{
    void (* sa_handler)(int32_t);
    void (* sa_sigaction)(int32_t, siginfo_t*, void*);
};

union __anon_0x0001cdc9
{
    void (* sa_handler)(int32_t);
    void (* sa_sigaction)(int32_t, siginfo_t*, void*);
};

union __anon_0x0004cd7f
{
    void (* sa_handler)(int32_t);
    void (* sa_sigaction)(int32_t, siginfo_t*, void*);
};

struct sigaction
{
    union __anon_0x000069d4 __sa_handler;
    sigset_t sa_mask;
    int32_t sa_flags;
    void (* sa_restorer)();
};

struct stat
{
    dev_t st_dev;
    int32_t __st_dev_padding;
    int32_t __st_ino_truncated;
    mode_t st_mode;
    nlink_t st_nlink;
    uid_t st_uid;
    gid_t st_gid;
    dev_t st_rdev;
    int32_t __st_rdev_padding;
    off_t st_size;
    blksize_t st_blksize;
    blkcnt_t st_blocks;
    struct __anon_0x00014eaf __st_atim32;
    struct __anon_0x00014eaf __st_mtim32;
    struct __anon_0x00014eaf __st_ctim32;
    ino_t st_ino;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
};

struct __anon_0x0005ea37
{
    uint32_t gl_pathc;
    uint8_t** gl_pathv;
    uint32_t gl_offs;
    int32_t gl_flags;
    void (* gl_closedir)(void*);
    struct dirent* (* gl_readdir)(void*);
    void* (* gl_opendir)(uint8_t const*);
    int32_t (* gl_lstat)(uint8_t const*, struct stat*);
    int32_t (* gl_stat)(uint8_t const*, struct stat*);
};

struct __anon_0x000cb042
{
    uint32_t gl_pathc;
    uint8_t** gl_pathv;
    uint32_t gl_offs;
    int32_t gl_flags;
    void (* gl_closedir)(void*);
    struct dirent* (* gl_readdir)(void*);
    void* (* gl_opendir)(uint8_t const*);
    int32_t (* gl_lstat)(uint8_t const*, struct stat*);
    int32_t (* gl_stat)(uint8_t const*, struct stat*);
};

struct __anon_0x000e57b1
{
    uint32_t gl_pathc;
    uint8_t** gl_pathv;
    uint32_t gl_offs;
    int32_t gl_flags;
    void (* gl_closedir)(void*);
    struct dirent* (* gl_readdir)(void*);
    void* (* gl_opendir)(uint8_t const*);
    int32_t (* gl_lstat)(uint8_t const*, struct stat*);
    int32_t (* gl_stat)(uint8_t const*, struct stat*);
};

struct err_explain_rec
{
    uint8_t const* (* explain_accept)(pool*, int32_t, int32_t, struct sockaddr*, socklen_t*, uint8_t const**);
    uint8_t const* (* explain_bind)(pool*, int32_t, int32_t, struct sockaddr const*, socklen_t, uint8_t const**);
    uint8_t const* (* explain_chdir)(pool*, int32_t, uint8_t const*, uint8_t const**);
    uint8_t const* (* explain_chmod)(pool*, int32_t, uint8_t const*, mode_t, uint8_t const**);
    uint8_t const* (* explain_chown)(pool*, int32_t, uint8_t const*, uid_t, gid_t, uint8_t const**);
    uint8_t const* (* explain_chroot)(pool*, int32_t, uint8_t const*, uint8_t const**);
    uint8_t const* (* explain_close)(pool*, int32_t, int32_t, uint8_t const**);
    uint8_t const* (* explain_closedir)(pool*, int32_t, void*, uint8_t const**);
    uint8_t const* (* explain_connect)(pool*, int32_t, int32_t, struct sockaddr const*, socklen_t, uint8_t const**);
    uint8_t const* (* explain_fchmod)(pool*, int32_t, int32_t, mode_t, uint8_t const**);
    uint8_t const* (* explain_fchown)(pool*, int32_t, int32_t, uid_t, gid_t, uint8_t const**);
    uint8_t const* (* explain_fclose)(pool*, int32_t, FILE*, uint8_t const**);
    uint8_t const* (* explain_fcntl)(pool*, int32_t, int32_t, int32_t, int32_t, uint8_t const**);
    uint8_t const* (* explain_fdopen)(pool*, int32_t, int32_t, uint8_t const*, uint8_t const**);
    uint8_t const* (* explain_flock)(pool*, int32_t, int32_t, int32_t, uint8_t const**);
    uint8_t const* (* explain_fopen)(pool*, int32_t, uint8_t const*, uint8_t const*, uint8_t const**);
    uint8_t const* (* explain_fork)(pool*, int32_t, uint8_t const**);
    uint8_t const* (* explain_fstat)(pool*, int32_t, int32_t, struct stat*, uint8_t const**);
    uint8_t const* (* explain_fstatfs)(pool*, int32_t, int32_t, void*, uint8_t const**);
    uint8_t const* (* explain_fstatvfs)(pool*, int32_t, int32_t, void*, uint8_t const**);
    uint8_t const* (* explain_fsync)(pool*, int32_t, int32_t, uint8_t const**);
    uint8_t const* (* explain_ftruncate)(pool*, int32_t, int32_t, off_t, uint8_t const**);
    uint8_t const* (* explain_futimes)(pool*, int32_t, int32_t, struct timeval const*, uint8_t const**);
    uint8_t const* (* explain_getaddrinfo)(pool*, int32_t, uint8_t const*, uint8_t const*, struct addrinfo const*, struct addrinfo**, uint8_t const**);
    uint8_t const* (* explain_gethostbyname)(pool*, int32_t, uint8_t const*, uint8_t const**);
    uint8_t const* (* explain_gethostbyname2)(pool*, int32_t, uint8_t const*, int32_t, uint8_t const**);
    uint8_t const* (* explain_gethostname)(pool*, int32_t, uint8_t*, uint32_t, uint8_t const**);
    uint8_t const* (* explain_getnameinfo)(pool*, int32_t, struct sockaddr const*, socklen_t, uint8_t*, uint32_t, uint8_t*, uint32_t, int32_t, uint8_t const**);
    uint8_t const* (* explain_getpeername)(pool*, int32_t, int32_t, struct sockaddr*, socklen_t*, uint8_t const**);
    uint8_t const* (* explain_getrlimit)(pool*, int32_t, int32_t, struct rlimit*, uint8_t const**);
    uint8_t const* (* explain_getsockname)(pool*, int32_t, int32_t, struct sockaddr*, socklen_t*, uint8_t const**);
    uint8_t const* (* explain_getsockopt)(pool*, int32_t, int32_t, int32_t, int32_t, void*, socklen_t*, uint8_t const**);
    uint8_t const* (* explain_lchown)(pool*, int32_t, uint8_t const*, uid_t, gid_t, uint8_t const**);
    uint8_t const* (* explain_link)(pool*, int32_t, uint8_t const*, uint8_t const*, uint8_t const**);
    uint8_t const* (* explain_listen)(pool*, int32_t, int32_t, int32_t, uint8_t const**);
    uint8_t const* (* explain_lseek)(pool*, int32_t, int32_t, off_t, int32_t, uint8_t const**);
    uint8_t const* (* explain_lstat)(pool*, int32_t, uint8_t const*, struct stat*, uint8_t const**);
    uint8_t const* (* explain_mkdir)(pool*, int32_t, uint8_t const*, mode_t, uint8_t const**);
    uint8_t const* (* explain_mkdtemp)(pool*, int32_t, uint8_t*, uint8_t const**);
    uint8_t const* (* explain_mkstemp)(pool*, int32_t, uint8_t*, uint8_t const**);
    uint8_t const* (* explain_open)(pool*, int32_t, uint8_t const*, int32_t, mode_t, uint8_t const**);
    uint8_t const* (* explain_opendir)(pool*, int32_t, uint8_t const*, uint8_t const**);
    uint8_t const* (* explain_read)(pool*, int32_t, int32_t, void*, uint32_t, uint8_t const**);
    uint8_t const* (* explain_readdir)(pool*, int32_t, void*, uint8_t const**);
    uint8_t const* (* explain_readlink)(pool*, int32_t, uint8_t const*, uint8_t*, uint32_t, uint8_t const**);
    uint8_t const* (* explain_readv)(pool*, int32_t, int32_t, struct iovec const*, int32_t, uint8_t const**);
    uint8_t const* (* explain_rename)(pool*, int32_t, uint8_t const*, uint8_t const*, uint8_t const**);
    uint8_t const* (* explain_rmdir)(pool*, int32_t, uint8_t const*, uint8_t const**);
    uint8_t const* (* explain_setegid)(pool*, int32_t, gid_t, uint8_t const**);
    uint8_t const* (* explain_seteuid)(pool*, int32_t, uid_t, uint8_t const**);
    uint8_t const* (* explain_setgid)(pool*, int32_t, gid_t, uint8_t const**);
    uint8_t const* (* explain_setregid)(pool*, int32_t, gid_t, gid_t, uint8_t const**);
    uint8_t const* (* explain_setresgid)(pool*, int32_t, gid_t, gid_t, gid_t, uint8_t const**);
    uint8_t const* (* explain_setresuid)(pool*, int32_t, uid_t, uid_t, uid_t, uint8_t const**);
    uint8_t const* (* explain_setreuid)(pool*, int32_t, uid_t, uid_t, uint8_t const**);
    uint8_t const* (* explain_setrlimit)(pool*, int32_t, int32_t, struct rlimit const*, uint8_t const**);
    uint8_t const* (* explain_setsockopt)(pool*, int32_t, int32_t, int32_t, int32_t, void const*, socklen_t, uint8_t const**);
    uint8_t const* (* explain_setuid)(pool*, int32_t, uid_t, uint8_t const**);
    uint8_t const* (* explain_socket)(pool*, int32_t, int32_t, int32_t, int32_t, uint8_t const**);
    uint8_t const* (* explain_stat)(pool*, int32_t, uint8_t const*, struct stat*, uint8_t const**);
    uint8_t const* (* explain_statfs)(pool*, int32_t, uint8_t const*, void*, uint8_t const**);
    uint8_t const* (* explain_statvfs)(pool*, int32_t, uint8_t const*, void*, uint8_t const**);
    uint8_t const* (* explain_symlink)(pool*, int32_t, uint8_t const*, uint8_t const*, uint8_t const**);
    uint8_t const* (* explain_truncate)(pool*, int32_t, uint8_t const*, off_t, uint8_t const**);
    uint8_t const* (* explain_unlink)(pool*, int32_t, uint8_t const*, uint8_t const**);
    uint8_t const* (* explain_utimes)(pool*, int32_t, uint8_t const*, struct timeval const*, uint8_t const**);
    uint8_t const* (* explain_write)(pool*, int32_t, int32_t, void const*, uint32_t, uint8_t const**);
    uint8_t const* (* explain_writev)(pool*, int32_t, int32_t, struct iovec const*, int32_t, uint8_t const**);
};

struct fs_rec
{
    pr_fs_t* fs_next;
    pr_fs_t* fs_prev;
    uint8_t* fs_name;
    uint8_t* fs_path;
    void* fs_data;
    struct pool_rec* fs_pool;
    int32_t (* stat)(pr_fs_t*, uint8_t const*, struct stat*);
    int32_t (* fstat)(pr_fh_t*, int32_t, struct stat*);
    int32_t (* lstat)(pr_fs_t*, uint8_t const*, struct stat*);
    int32_t (* rename)(pr_fs_t*, uint8_t const*, uint8_t const*);
    int32_t (* unlink)(pr_fs_t*, uint8_t const*);
    int32_t (* open)(pr_fh_t*, uint8_t const*, int32_t);
    int32_t (* close)(pr_fh_t*, int32_t);
    int32_t (* read)(pr_fh_t*, int32_t, uint8_t*, uint32_t);
    int32_t (* pread)(pr_fh_t*, int32_t, void*, uint32_t, off_t);
    int32_t (* write)(pr_fh_t*, int32_t, uint8_t const*, uint32_t);
    int32_t (* pwrite)(pr_fh_t*, int32_t, void const*, uint32_t, off_t);
    off_t (* lseek)(pr_fh_t*, int32_t, off_t, int32_t);
    int32_t (* link)(pr_fs_t*, uint8_t const*, uint8_t const*);
    int32_t (* readlink)(pr_fs_t*, uint8_t const*, uint8_t*, uint32_t);
    int32_t (* symlink)(pr_fs_t*, uint8_t const*, uint8_t const*);
    int32_t (* ftruncate)(pr_fh_t*, int32_t, off_t);
    int32_t (* truncate)(pr_fs_t*, uint8_t const*, off_t);
    int32_t (* chmod)(pr_fs_t*, uint8_t const*, mode_t);
    int32_t (* fchmod)(pr_fh_t*, int32_t, mode_t);
    int32_t (* chown)(pr_fs_t*, uint8_t const*, uid_t, gid_t);
    int32_t (* fchown)(pr_fh_t*, int32_t, uid_t, gid_t);
    int32_t (* lchown)(pr_fs_t*, uint8_t const*, uid_t, gid_t);
    int32_t (* access)(pr_fs_t*, uint8_t const*, int32_t, uid_t, gid_t, array_header*);
    int32_t (* faccess)(pr_fh_t*, int32_t, uid_t, gid_t, array_header*);
    int32_t (* utimes)(pr_fs_t*, uint8_t const*, struct timeval*);
    int32_t (* futimes)(pr_fh_t*, int32_t, struct timeval*);
    int32_t (* fsync)(pr_fh_t*, int32_t);
    int32_t (* getxattr)(pool*, pr_fs_t*, uint8_t const*, uint8_t const*, void*, uint32_t);
    int32_t (* lgetxattr)(pool*, pr_fs_t*, uint8_t const*, uint8_t const*, void*, uint32_t);
    int32_t (* fgetxattr)(pool*, pr_fh_t*, int32_t, uint8_t const*, void*, uint32_t);
    int32_t (* listxattr)(pool*, pr_fs_t*, uint8_t const*, array_header**);
    int32_t (* llistxattr)(pool*, pr_fs_t*, uint8_t const*, array_header**);
    int32_t (* flistxattr)(pool*, pr_fh_t*, int32_t, array_header**);
    int32_t (* removexattr)(pool*, pr_fs_t*, uint8_t const*, uint8_t const*);
    int32_t (* lremovexattr)(pool*, pr_fs_t*, uint8_t const*, uint8_t const*);
    int32_t (* fremovexattr)(pool*, pr_fh_t*, int32_t, uint8_t const*);
    int32_t (* setxattr)(pool*, pr_fs_t*, uint8_t const*, uint8_t const*, void*, uint32_t, int32_t);
    int32_t (* lsetxattr)(pool*, pr_fs_t*, uint8_t const*, uint8_t const*, void*, uint32_t, int32_t);
    int32_t (* fsetxattr)(pool*, pr_fh_t*, int32_t, uint8_t const*, void*, uint32_t, int32_t);
    int32_t (* chdir)(pr_fs_t*, uint8_t const*);
    int32_t (* chroot)(pr_fs_t*, uint8_t const*);
    void* (* opendir)(pr_fs_t*, uint8_t const*);
    int32_t (* closedir)(pr_fs_t*, void*);
    struct dirent* (* readdir)(pr_fs_t*, void*);
    int32_t (* mkdir)(pr_fs_t*, uint8_t const*, mode_t);
    int32_t (* rmdir)(pr_fs_t*, uint8_t const*);
    int32_t allow_xdev_link;
    int32_t allow_xdev_rename;
    int32_t non_std_path;
};

typedef struct __anon_0x0005ea37 glob_t;

struct mlinfo
{
    pool* pool;
    struct stat st;
    struct tm* tm;
    uint8_t const* user;
    uint8_t const* group;
    uint8_t const* type;
    uint8_t const* perm;
    uint8_t const* path;
    uint8_t const* real_path;
};

typedef struct err_explain_rec pr_error_explainer_t;

struct err_explainer
{
    struct err_explainer* next;
    struct err_explainer* prev;
    module* m;
    uint8_t const* name;
    pr_error_explainer_t* explainer;
};

typedef struct fs_rec pr_fs_t;

struct utmpx
{
    int16_t ut_type;
    int16_t __ut_pad1;
    pid_t ut_pid;
    uint8_t ut_line[0x20];
    uint8_t ut_id[0x4];
    uint8_t ut_user[0x20];
    uint8_t ut_host[0x100];
    struct __anon_0x00078d1a ut_exit;
    int32_t ut_session;
    int32_t __ut_pad2;
    struct timeval ut_tv;
    uint32_t ut_addr_v6[0x4];
    uint8_t __unused[0x14];
};

struct utsname
{
    uint8_t sysname[0x41];
    uint8_t nodename[0x41];
    uint8_t release[0x41];
    uint8_t version[0x41];
    uint8_t machine[0x41];
    uint8_t domainname[0x41];
};

typedef struct __va_list va_list;

typedef char* va_list_1;

struct var
{
    int32_t v_type;
    uint8_t const* v_desc;
    void* v_val;
    void* v_data;
    uint32_t v_datasz;
};

typedef uint8_t const* (* var_vstr_cb)(void*, uint32_t);

typedef struct XAsetmember xasetmember_t;;
typedef int32_t (* XASET_COMPARE)(xasetmember_t*, xasetmember_t*);

typedef xasetmember_t* (* XASET_MCOPY)(xasetmember_t*);

struct XAset
{
    xasetmember_t* xas_list;
    struct pool_rec* pool;
    XASET_COMPARE xas_compare;
};

struct XAsetmember
{
    xasetmember_t* next;
    xasetmember_t* prev;
};

struct fs_statcache
{
    xasetmember_t* next;
    xasetmember_t* prev;
    pool* sc_pool;
    uint8_t const* sc_path;
    struct stat sc_stat;
    int32_t sc_errno;
    int32_t sc_retval;
    time_t sc_cached_ts;
};

typedef struct XAset xaset_t;

struct server_struc
{
    struct server_struc* next;
    struct server_struc* prev;
    struct pool_rec* pool;
    xaset_t* set;
    uint8_t const* ServerName;
    uint8_t const* ServerAddress;
    uint8_t const* ServerFQDN;
    uint32_t ServerPort;
    struct tcp_keepalive* tcp_keepalive;
    int32_t tcp_mss_len;
    int32_t tcp_rcvbuf_len;
    uint8_t tcp_rcvbuf_override;
    int32_t tcp_sndbuf_len;
    uint8_t tcp_sndbuf_override;
    uint8_t const* ServerAdmin;
    pr_netaddr_t const* addr;
    struct conn_struc* listen;
    xaset_t* conf;
    int32_t config_type;
    uint32_t sid;
    pr_table_t* notes;
};

struct config_struc
{
    struct config_struc* next;
    struct config_struc* prev;
    int32_t config_type;
    uint32_t config_id;
    struct pool_rec* pool;
    xaset_t* set;
    uint8_t* name;
    uint32_t argc;
    void** argv;
    int32_t flags;
    struct server_struc* server;
    config_rec* parent;
    xaset_t* subset;
};

typedef struct config_struc config_rec;

typedef struct server_struc server_rec;

struct cmd_struc
{
    struct pool_rec* pool;
    server_rec* server;
    config_rec* config;
    struct pool_rec* tmp_pool;
    uint32_t argc;
    uint8_t* arg;
    void** argv;
    uint8_t* group;
    int32_t cmd_class;
    int32_t stash_index;
    uint32_t stash_hash;
    pr_table_t* notes;
    int32_t cmd_id;
    int32_t is_ftp;
    uint8_t const* protocol;
};

typedef struct cmd_struc cmd_rec;

struct authtab_rec
{
    int32_t auth_flags;
    uint8_t const* name;
    modret_t* (* handler)(cmd_rec*);
    module* m;
};

typedef struct authtab_rec authtable;

struct cmdtab_rec
{
    uint8_t cmd_type;
    uint8_t const* command;
    uint8_t const* group;
    modret_t* (* handler)(cmd_rec*);
    uint8_t requires_auth;
    uint8_t interrupt_xfer;
    int32_t cmd_class;
    module* m;
};

typedef struct cmdtab_rec cmdtable;

struct conftab_rec
{
    uint8_t* directive;
    modret_t* (* handler)(cmd_rec*);
    module* m;
};

typedef struct conftab_rec conftable;

union __anon_0x00052ba5
{
    conftable* sym_conf;
    cmdtable* sym_cmd;
    authtable* sym_auth;
    cmdtable* sym_hook;
    void* sym_generic;
};

struct ipbind_rec
{
    struct ipbind_rec* ib_next;
    pr_netaddr_t const* ib_addr;
    uint32_t ib_port;
    server_rec* ib_server;
    conn_t* ib_listener;
    array_header* ib_namebinds;
    uint8_t ib_isdefault;
    uint8_t ib_islocalhost;
    uint8_t ib_isactive;
};

struct module_struc
{
    module* next;
    module* prev;
    int32_t api_version;
    uint8_t const* name;
    struct conftab_rec* conftable;
    struct cmdtab_rec* cmdtable;
    struct authtab_rec* authtable;
    int32_t (* init)();
    int32_t (* sess_init)();
    uint8_t const* module_version;
    void* handle;
    int32_t priority;
};

struct __anon_0x00000678
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000005c7 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0000aab8
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0000aa07 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000153fb
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0001534a xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0001b808
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0001b757 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0001d21a
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0001d169 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0001fb98
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0001fae7 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x00024a2a
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00024979 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0002b7a9
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0002b6f8 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0003064d
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0003059c xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x00034e94
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00034de3 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000382f2
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00038241 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x00040445
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00040394 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000454a5
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000453f4 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0004aa7a
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0004a9c9 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0004d23f
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0004d18e xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x00054fb6
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00054f05 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x00057f61
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00057eb0 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0005e4e2
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0005e431 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000710c4
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00071013 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x00072ad3
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00072a22 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x00074c2d
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00074b7c xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x00079084
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00078fd3 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0007dd1b
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0007dc6a xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0008d6d9
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0008d628 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000950e7
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00095036 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000a98ff
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000a984e xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000b6b0e
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000b6a5d xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000ba68a
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000ba5d9 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000bf47a
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000bf3c9 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000ca3de
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000ca32d xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000d1ead
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000d1dfc xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000d6330
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000d627f xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000d8e15
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000d8d64 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000de608
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    int32_t multiline_rfc2228;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000de557 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

typedef struct module_struc module;

struct namebind_rec
{
    uint8_t const* nb_name;
    uint8_t nb_iswildcard;
    uint8_t nb_isactive;
    server_rec* nb_server;
    uint32_t nb_server_port;
};

typedef struct ipbind_rec pr_ipbind_t;

typedef struct namebind_rec pr_namebind_t;

typedef struct __anon_0x00000678 session_t;

struct socket_ctx
{
    server_rec* server;
    pr_netaddr_t const* addr;
    int32_t sockfd;
};

struct stash
{
    struct stash* next;
    struct stash* prev;
    pool* sym_pool;
    uint32_t sym_hash;
    uint8_t const* sym_name;
    uint32_t sym_namelen;
    pr_stash_type_t sym_type;
    module* sym_module;
    union __anon_0x00052ba5 ptr;
};

typedef struct XAsetmember xasetmember_t;
// Globals

session_t session;

// Function signatures

cmd_rec* mod_create_ret(cmd_rec* cmd, uint8_t err, char const* n, char const* m);
cmd_rec* pr_cmd_get_displayable_str(cmd_rec* cmd, uint32_t* str_len);
int32_t pr_cmd_set_errno(cmd_rec* cmd, int32_t xerrno);
int32_t* __errno_location();
int64_t strtoll(char const* str, char** endptr, int32_t base);
modret_t* xfer_rest(cmd_rec* cmd);
struct event_list* pr_log_debug(int32_t level, char const* fmt, ...);
void pr_response_add(char const* numeric, char const* fmt, ...);
void pr_response_add_err(char const* numeric, char const* fmt, ...);
