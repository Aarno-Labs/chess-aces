/* Auto-generated from /home/ricardo/code/aarno/amp/digiheals/chess-aces/phase_3/eval/kiaora/digiheals/unstripped/pp */
/* Self-contained: requires no system headers. */
#ifndef PP_H
#define PP_H

#ifdef __cplusplus
extern "C" {
#endif

/* ── enums ───────────────────────────────────────────────── */

enum __anon_0x00001742 {
    _S_local_capacity = 15,
};

enum align_val_t {
};

/* ── forward declarations ────────────────────────────────── */

struct 5div_t;
struct 6ldiv_t;
struct 7lldiv_t;
struct _Alloc_hider;
struct _Char_types<char>;
struct _Destroy_aux<false>;
union _G_fpos64_t;
struct _IO_FILE;
struct _Vector_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >;
struct _Vector_impl;
struct _Vector_impl_data;
struct __alloc_traits<std::allocator<char>, char>;
struct __alloc_traits<std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >;
union __anon_0x00001757;
union __anon_0x000098c0;
union __anon_0x0000bfb2;
union __anon_0x0000d0a5;
struct __mbstate_t;
struct __sv_wrapper;
struct __va_list;
struct allocator_traits<std::allocator<char> >;
struct allocator_traits<std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >;
struct bidirectional_iterator_tag;
struct char_traits<char>;
struct file;
struct forward_iterator_tag;
struct ifstk;
struct input_iterator_tag;
struct integral_constant<bool, false>;
struct integral_constant<bool, true>;
struct iterator_traits<char const*>;
struct iterator_traits<char*>;
struct iterator_traits<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*>;
struct lconv;
struct param;
struct pbbuf;
struct ppdir;
struct random_access_iterator_tag;
struct rebind<char>;
struct rebind<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >;
struct remove_reference<char const (&)[6]>;
struct remove_reference<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >;
struct remove_reference<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&>;
struct remove_reference<std::allocator<char>&>;
struct symtab;
struct tm;

/* ── typedefs, structs & unions (dependency-ordered) ──────── */

struct 5div_t {
    int quot;
    int rem;
};

struct 6ldiv_t {
    long int quot;
    long int rem;
};

struct 7lldiv_t {
    long long int quot;
    long long int rem;
};

struct _Char_types<char> {
};

struct _Destroy_aux<false> {
};

union _G_fpos64_t {
    char __opaque[16];
    long long int __lldata;
    double __align;
};

struct _IO_FILE {
    char __x;
};

struct _Vector_impl {
};

struct __alloc_traits<std::allocator<char>, char> {
};

struct __alloc_traits<std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > {
};

union __anon_0x000098c0 {
    char * pb_str;
    int pb_char;
};

union __anon_0x0000bfb2 {
    char * pb_str;
    int pb_char;
};

union __anon_0x0000d0a5 {
    char * pb_str;
    int pb_char;
};

struct __mbstate_t {
    unsigned int __opaque1;
    unsigned int __opaque2;
};

struct __va_list {
    void * __ap;
};

struct allocator_traits<std::allocator<char> > {
};

struct allocator_traits<std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > {
};

struct bidirectional_iterator_tag {
};

struct char_traits<char> {
};

struct forward_iterator_tag {
};

struct ifstk {
    char i_state;
    char i_else;
};

struct input_iterator_tag {
};

struct integral_constant<bool, false> {
};

struct integral_constant<bool, true> {
};

struct iterator_traits<char const*> {
};

struct iterator_traits<char*> {
};

struct iterator_traits<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*> {
};

struct lconv {
    char * decimal_point;
    char * thousands_sep;
    char * grouping;
    char * int_curr_symbol;
    char * currency_symbol;
    char * mon_decimal_point;
    char * mon_thousands_sep;
    char * mon_grouping;
    char * positive_sign;
    char * negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char int_p_cs_precedes;
    char int_p_sep_by_space;
    char int_n_cs_precedes;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};

struct param {
    struct param * p_link;
    char p_flags;
    char p_name[1];
};

struct ppdir {
    const char * pp_name;
    char pp_ifif;
    void (*pp_func)(int, int, const char *);
    int pp_arg;
};

struct random_access_iterator_tag {
};

struct rebind<char> {
};

struct rebind<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > {
};

struct remove_reference<char const (&)[6]> {
};

struct remove_reference<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > {
};

struct remove_reference<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&> {
};

struct remove_reference<std::allocator<char>&> {
};

struct symtab {
    struct symtab * s_link;
    char disable;
    char * s_body;
    struct param * s_params;
    char s_name[1];
};

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long int tm_gmtoff;
    const char * tm_zone;
};

typedef struct _IO_FILE FILE;
typedef struct __va_list __isoc_va_list;
typedef /* ??? */ __string_type;
typedef /* ??? */ __sv_type;
typedef /* ??? */ allocator_type;
typedef char char_type;
typedef /* ??? */ const_reverse_iterator;
typedef const void * const_void_pointer;
typedef struct 5div_t div_t;
typedef struct integral_constant<bool, false> false_type;
typedef union _G_fpos64_t fpos_t;
typedef short int int16_t;
typedef int int32_t;
typedef long long int int64_t;
typedef signed char int8_t;
typedef int int_type;
typedef long long int intmax_t;
typedef int intptr_t;
typedef /* ??? */ iterator;
typedef struct random_access_iterator_tag iterator_category;
typedef struct 6ldiv_t ldiv_t;
typedef struct 7lldiv_t lldiv_t;
typedef struct __mbstate_t mbstate_t;
typedef void nullptr_t;
typedef /* ??? */ ostringstream;
typedef char * pointer;
typedef int ptrdiff_t;
typedef /* ??? */ rebind_alloc;
typedef reference reference;
typedef /* ??? */ reverse_iterator;
typedef unsigned int size_t;
typedef /* ??? */ string;
typedef long long int time_t;
typedef struct integral_constant<bool, true> true_type;
typedef /* ??? */ type;
typedef short unsigned int uint16_t;
typedef unsigned int uint32_t;
typedef long long unsigned int uint64_t;
typedef unsigned char uint8_t;
typedef long long unsigned int uintmax_t;
typedef unsigned int uintptr_t;
typedef bool value_type;
typedef const int * wctrans_t;
typedef long unsigned int wctype_t;
typedef unsigned int wint_t;
struct _Vector_base<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > {
    struct _Vector_impl _M_impl;
};

struct pbbuf {
    char pb_type;
    union __anon_0x000098c0 pb_val;
};

struct file {
    int f_line;
    FILE * f_file;
    char * f_bufp;
    int f_bufc;
    int f_eof;
    char f_lasteol;
    char f_buf[512];
    char f_name[301];
};

struct __sv_wrapper {
    __sv_type _M_sv;
};

typedef int16_t int_least16_t;
typedef int32_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int32_t int_least32_t;
typedef int64_t int_fast64_t;
typedef int64_t int_least64_t;
typedef int8_t int_fast8_t;
typedef int8_t int_least8_t;
struct _Alloc_hider {
    pointer _M_p;
};

struct _Vector_impl_data {
    pointer _M_start;
    pointer _M_finish;
    pointer _M_end_of_storage;
};

typedef ptrdiff_t difference_type;
typedef rebind_alloc other;
typedef size_t size_type;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_fast64_t;
typedef uint64_t uint_least64_t;
typedef uint8_t uint_fast8_t;
typedef uint8_t uint_least8_t;
typedef const value_type * const_iterator;
typedef const value_type * const_pointer;
typedef const value_type * const_reference;
typedef other _Char_alloc_type;
typedef other _Tp_alloc_type;
union __anon_0x00001757 {
    char _M_local_buf[16];
    size_type _M_allocated_capacity;
};

typedef const_iterator __const_iterator;

/* ── exported function declarations ──────────────────────── */

extern void *_Z10getnstokeni(/* signature unavailable */);
extern void *_Z11end_of_filev(/* signature unavailable */);
extern void *_Z11output_addci(/* signature unavailable */);
extern void *_Z11output_addsPc(/* signature unavailable */);
extern void *_Z11readexplinePci(/* signature unavailable */);
extern void *_Z13original_mainiPPc(/* signature unavailable */);
extern void *_Z13out_of_memoryv(/* signature unavailable */);
extern void *_Z14illegal_symbolv(/* signature unavailable */);
extern void *_Z4doifiiPKc(/* signature unavailable */);
extern void *_Z4evalv(/* signature unavailable */);
extern void *_Z4initv(/* signature unavailable */);
extern void *_Z4itemPFiiEi(/* signature unavailable */);
extern void *_Z4lookPKc(/* signature unavailable */);
extern void *_Z4testPKc(/* signature unavailable */);
extern void *_Z4typei(/* signature unavailable */);
extern void *_Z5doifsiiPKc(/* signature unavailable */);
extern void *_Z5fatalPKcS0_(/* signature unavailable */);
extern void *_Z5fbindPP6symtabPcPKc(/* signature unavailable */);
extern void *_Z5gchpbv(/* signature unavailable */);
extern void *_Z5ishexc(/* signature unavailable */);
extern void *_Z5isoctc(/* signature unavailable */);
extern void *_Z5matchPcPKc(/* signature unavailable */);
extern void *_Z5pbstrPKc(/* signature unavailable */);
extern void *_Z5prmsgPKcS0_S0_(/* signature unavailable */);
extern void *_Z5sbindPKcS0_P5param(/* signature unavailable */);
extern void *_Z5usagei(/* signature unavailable */);
extern void *_Z6addstrPcS_PKcS1_(/* signature unavailable */);
extern void *_Z6docallP6symtabPcS1_(/* signature unavailable */);
extern void *_Z6doelseiiPKc(/* signature unavailable */);
extern void *_Z6dolineiiPKc(/* signature unavailable */);
extern void *_Z6evaleqv(/* signature unavailable */);
extern void *_Z6evalshv(/* signature unavailable */);
extern void *_Z6gchbufv(/* signature unavailable */);
extern void *_Z6getchnv(/* signature unavailable */);
extern void *_Z6hexbinc(/* signature unavailable */);
extern void *_Z6lookupPcPP6symtab(/* signature unavailable */);
extern void *_Z6memmovPcS_j(/* signature unavailable */);
extern void *_Z6pbcstrPc(/* signature unavailable */);
extern void *_Z6pphashPKc(/* signature unavailable */);
extern void *_Z6predefPcP5ppdir(/* signature unavailable */);
extern void *_Z6strizePcS_S_S_(/* signature unavailable */);
extern void *_Z7_docallPcS_S_(/* signature unavailable */);
extern void *_Z7do_linec(/* signature unavailable */);
extern void *_Z7doendifiiPKc(/* signature unavailable */);
extern void *_Z7doerroriiPKc(/* signature unavailable */);
extern void *_Z7doundefiiPKc(/* signature unavailable */);
extern void *_Z7esc_strPciS_(/* signature unavailable */);
extern void *_Z7evalborv(/* signature unavailable */);
extern void *_Z7evallorv(/* signature unavailable */);
extern void *_Z7evalmdrv(/* signature unavailable */);
extern void *_Z7evalrelv(/* signature unavailable */);
extern void *_Z7evalsumv(/* signature unavailable */);
extern void *_Z7evalvalv(/* signature unavailable */);
extern void *_Z7flookupP6symtabPc(/* signature unavailable */);
extern void *_Z7gchfilev(/* signature unavailable */);
extern void *_Z7getnextPcPiPPS_i(/* signature unavailable */);
extern void *_Z7popfilev(/* signature unavailable */);
extern void *_Z7pp_mainPKc(/* signature unavailable */);
extern void *_Z7pragmsgiiPKc(/* signature unavailable */);
extern void *_Z7pragoptiiPKc(/* signature unavailable */);
extern void *_Z7scaneolv(/* signature unavailable */);
extern void *_Z7unfbindP6symtab(/* signature unavailable */);
extern void *_Z7unparamP5param(/* signature unavailable */);
extern void *_Z7unsbindPc(/* signature unavailable */);
extern void *_Z7warningPKcS0_(/* signature unavailable */);
extern void *_Z8dodefineiiPKc(/* signature unavailable */);
extern void *_Z8dopragmaiiPKc(/* signature unavailable */);
extern void *_Z8evalbandv(/* signature unavailable */);
extern void *_Z8evalbxorv(/* signature unavailable */);
extern void *_Z8evalfunsv(/* signature unavailable */);
extern void *_Z8evallandv(/* signature unavailable */);
extern void *_Z8evalternv(/* signature unavailable */);
extern void *_Z8evalucomv(/* signature unavailable */);
extern void *_Z8evaluminv(/* signature unavailable */);
extern void *_Z8evalunotv(/* signature unavailable */);
extern void *_Z8gettokeni(/* signature unavailable */);
extern void *_Z8inc_openPKc(/* signature unavailable */);
extern void *_Z8pragendmiiPKc(/* signature unavailable */);
extern void *_Z8pushbacki(/* signature unavailable */);
extern void *_Z8puttokenPKc(/* signature unavailable */);
extern void *_Z8readlinePcii(/* signature unavailable */);
extern void *_Z8trigraphv(/* signature unavailable */);
extern void *_Z9doincludeiiPKc(/* signature unavailable */);
extern void *_Z9getparamsv(/* signature unavailable */);
extern void *_Z9init_pathv(/* signature unavailable */);
extern void *_Z9makeparamPKci(/* signature unavailable */);
extern void *_Z9non_fatalPKcS0_(/* signature unavailable */);
extern void *_Z9pragerroriiPKc(/* signature unavailable */);
extern void *_Z9pragvalueiiPKc(/* signature unavailable */);
extern void *_ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_(/* signature unavailable */);
extern void *_ZN9__gnu_cxx11char_traitsIcE6lengthEPKc(/* signature unavailable */);
extern void *_ZN9__gnu_cxx13new_allocatorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE10deallocateEPS6_j(/* signature unavailable */);
extern void *_ZN9__gnu_cxx13new_allocatorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE7destroyIS6_EEvPT_(/* signature unavailable */);
extern void *_ZN9__gnu_cxx13new_allocatorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE8allocateEjPKv(/* signature unavailable */);
extern void *_ZN9__gnu_cxx13new_allocatorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE9constructIS6_JRA6_KcEEEvPT_DpOT0_(/* signature unavailable */);
extern void *_ZN9__gnu_cxx13new_allocatorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE9constructIS6_JS6_EEEvPT_DpOT0_(/* signature unavailable */);
extern void *_ZN9__gnu_cxx13new_allocatorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC1Ev(/* signature unavailable */);
extern void _ZN9__gnu_cxx13new_allocatorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2Ev(void);
extern void *_ZN9__gnu_cxx13new_allocatorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEED1Ev(/* signature unavailable */);
extern void _ZN9__gnu_cxx13new_allocatorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEED2Ev(void);
extern void *_ZN9__gnu_cxx17__is_null_pointerIKcEEbPT_(/* signature unavailable */);
extern void *_ZN9__gnu_cxx17__normal_iteratorIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS6_SaIS6_EEEC1ERKS7_(/* signature unavailable */);
extern void _ZN9__gnu_cxx17__normal_iteratorIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS6_SaIS6_EEEC2ERKS7_(void, void);
extern void *_ZN9__gnu_cxx17__normal_iteratorIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS6_SaIS6_EEEppEv(/* signature unavailable */);
extern void *_ZN9__gnu_cxxmiIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS6_SaIS6_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKSE_SH_(/* signature unavailable */);
extern void *_ZN9__gnu_cxxneIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS6_SaIS6_EEEEbRKNS_17__normal_iteratorIT_T0_EESG_(/* signature unavailable */);
extern void *_ZNK9__gnu_cxx13new_allocatorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE11_M_max_sizeEv(/* signature unavailable */);
extern void *_ZNK9__gnu_cxx13new_allocatorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE8max_sizeEv(/* signature unavailable */);
extern void *_ZNK9__gnu_cxx17__normal_iteratorIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS6_SaIS6_EEE4baseEv(/* signature unavailable */);
extern void *_ZNK9__gnu_cxx17__normal_iteratorIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS6_SaIS6_EEEdeEv(/* signature unavailable */);
extern void *_ZNK9__gnu_cxx17__normal_iteratorIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS6_SaIS6_EEEmiEi(/* signature unavailable */);
extern void *_ZNKSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE19_M_get_Tp_allocatorEv(/* signature unavailable */);
extern void *_ZNKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE12_M_check_lenEjPKc(/* signature unavailable */);
extern void *_ZNKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE4sizeEv(/* signature unavailable */);
extern void *_ZNKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE8max_sizeEv(/* signature unavailable */);
extern void *_ZNSaINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC1Ev(/* signature unavailable */);
extern void _ZNSaINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2Ev(void);
extern void *_ZNSaINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEED1Ev(/* signature unavailable */);
extern void _ZNSaINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEED2Ev(void);
extern void *_ZNSt11char_traitsIcE6lengthEPKc(/* signature unavailable */);
extern void *_ZNSt12_Destroy_auxILb0EE9__destroyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEvT_S9_(/* signature unavailable */);
extern void *_ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE11_M_allocateEj(/* signature unavailable */);
extern void *_ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE12_Vector_implC1Ev(/* signature unavailable */);
extern void _ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE12_Vector_implC2Ev(void);
extern void *_ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE12_Vector_implD1Ev(/* signature unavailable */);
extern void _ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE12_Vector_implD2Ev(void);
extern void *_ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE13_M_deallocateEPS5_j(/* signature unavailable */);
extern void *_ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE17_Vector_impl_dataC1Ev(/* signature unavailable */);
extern void _ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE17_Vector_impl_dataC2Ev(void);
extern void *_ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE19_M_get_Tp_allocatorEv(/* signature unavailable */);
extern void *_ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EEC1Ev(/* signature unavailable */);
extern void _ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EEC2Ev(void);
extern void *_ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED1Ev(/* signature unavailable */);
extern void _ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED2Ev(void);
extern void *_ZNSt16allocator_traitsISaINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE10deallocateERS6_PS5_j(/* signature unavailable */);
extern void *_ZNSt16allocator_traitsISaINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE7destroyIS5_EEvRS6_PT_(/* signature unavailable */);
extern void *_ZNSt16allocator_traitsISaINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE8allocateERS6_j(/* signature unavailable */);
extern void *_ZNSt16allocator_traitsISaINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE8max_sizeERKS6_(/* signature unavailable */);
extern void *_ZNSt16allocator_traitsISaINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE9constructIS5_JRA6_KcEEEvRS6_PT_DpOT0_(/* signature unavailable */);
extern void *_ZNSt16allocator_traitsISaINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE9constructIS5_JS5_EEEvRS6_PT_DpOT0_(/* signature unavailable */);
extern void *_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE11_S_max_sizeERKS6_(/* signature unavailable */);
extern void *_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE11_S_relocateEPS5_S8_S8_RS6_(/* signature unavailable */);
extern void *_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE12emplace_backIJRA6_KcEEERS5_DpOT_(/* signature unavailable */);
extern void *_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE14_S_do_relocateEPS5_S8_S8_RS6_St17integral_constantIbLb1EE(/* signature unavailable */);
extern void *_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE17_M_realloc_insertIJRA6_KcEEEvN9__gnu_cxx17__normal_iteratorIPS5_S7_EEDpOT_(/* signature unavailable */);
extern void *_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE3endEv(/* signature unavailable */);
extern void *_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE4backEv(/* signature unavailable */);
extern void *_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE5beginEv(/* signature unavailable */);
extern void *_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EEC1Ev(/* signature unavailable */);
extern void _ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EEC2Ev(void);
extern void *_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED1Ev(/* signature unavailable */);
extern void _ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED2Ev(void);
extern void *_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD1Ev(/* signature unavailable */);
extern void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev(void);
extern void *_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag(/* signature unavailable */);
extern void *_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1IS3_EEPKcRKS3_(/* signature unavailable */);
extern void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_(void, void, void);
extern void *_ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag(/* signature unavailable */);
extern void *_ZSt11__addressofINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEPT_RS6_(/* signature unavailable */);
extern void *_ZSt12__niter_baseIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEET_S7_(/* signature unavailable */);
extern void *_ZSt12__relocate_aIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_SaIS5_EET0_T_S9_S8_RT1_(/* signature unavailable */);
extern void *_ZSt14__relocate_a_1IPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_SaIS5_EET0_T_S9_S8_RT1_(/* signature unavailable */);
extern void *_ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_(/* signature unavailable */);
extern void *_ZSt19__relocate_object_aINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES5_SaIS5_EEvPT_PT0_RT1_(/* signature unavailable */);
extern void *_ZSt3maxIjERKT_S2_S2_(/* signature unavailable */);
extern void *_ZSt3minIjERKT_S2_S2_(/* signature unavailable */);
extern void *_ZSt4moveIRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEONSt16remove_referenceIT_E4typeEOS8_(/* signature unavailable */);
extern void *_ZSt7forwardINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEOT_RNSt16remove_referenceIS6_E4typeE(/* signature unavailable */);
extern void *_ZSt7forwardIRA6_KcEOT_RNSt16remove_referenceIS3_E4typeE(/* signature unavailable */);
extern void *_ZSt8_DestroyINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEvPT_(/* signature unavailable */);
extern void *_ZSt8_DestroyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEvT_S7_(/* signature unavailable */);
extern void *_ZSt8_DestroyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES5_EvT_S7_RSaIT0_E(/* signature unavailable */);
extern void *_ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_(/* signature unavailable */);
extern void *_ZdlPvS_(/* signature unavailable */);
extern void *_ZnwjPv(/* signature unavailable */);
extern void *_fini(/* signature unavailable */);
extern void *_init(/* signature unavailable */);
extern void *_start(/* signature unavailable */);
extern void *_start_c(/* signature unavailable */);
extern int main(int argc, char * * argv);

#ifdef __cplusplus
}
#endif

#endif /* PP_H */
