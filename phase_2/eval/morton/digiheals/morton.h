/* Auto-generated from /home/ricardo/code/aarno/amp/digiheals/chess-aces/phase_2/eval/morton/digiheals/unstripped/mosquitto */
/* Self-contained: requires no system headers. */
#ifndef MOSQUITTO_H
#define MOSQUITTO_H

#ifdef __cplusplus
extern "C" {
#endif

/* ── enums ───────────────────────────────────────────────── */

enum mosq_err_t {
    MOSQ_ERR_AUTH_CONTINUE = -4,
    MOSQ_ERR_NO_SUBSCRIBERS = -3,
    MOSQ_ERR_SUB_EXISTS = -2,
    MOSQ_ERR_CONN_PENDING = -1,
    MOSQ_ERR_SUCCESS = 0,
    MOSQ_ERR_NOMEM = 1,
    MOSQ_ERR_PROTOCOL = 2,
    MOSQ_ERR_INVAL = 3,
    MOSQ_ERR_NO_CONN = 4,
    MOSQ_ERR_CONN_REFUSED = 5,
    MOSQ_ERR_NOT_FOUND = 6,
    MOSQ_ERR_CONN_LOST = 7,
    MOSQ_ERR_TLS = 8,
    MOSQ_ERR_PAYLOAD_SIZE = 9,
    MOSQ_ERR_NOT_SUPPORTED = 10,
    MOSQ_ERR_AUTH = 11,
    MOSQ_ERR_ACL_DENIED = 12,
    MOSQ_ERR_UNKNOWN = 13,
    MOSQ_ERR_ERRNO = 14,
    MOSQ_ERR_EAI = 15,
    MOSQ_ERR_PROXY = 16,
    MOSQ_ERR_PLUGIN_DEFER = 17,
    MOSQ_ERR_MALFORMED_UTF8 = 18,
    MOSQ_ERR_KEEPALIVE = 19,
    MOSQ_ERR_LOOKUP = 20,
    MOSQ_ERR_MALFORMED_PACKET = 21,
    MOSQ_ERR_DUPLICATE_PROPERTY = 22,
    MOSQ_ERR_TLS_HANDSHAKE = 23,
    MOSQ_ERR_QOS_NOT_SUPPORTED = 24,
    MOSQ_ERR_OVERSIZE_PACKET = 25,
    MOSQ_ERR_OCSP = 26,
    MOSQ_ERR_TIMEOUT = 27,
    MOSQ_ERR_RETAIN_NOT_SUPPORTED = 28,
    MOSQ_ERR_TOPIC_ALIAS_INVALID = 29,
    MOSQ_ERR_ADMINISTRATIVE_ACTION = 30,
    MOSQ_ERR_ALREADY_EXISTS = 31,
};

enum mosquitto__bridge_direction {
    bd_out = 0,
    bd_in = 1,
    bd_both = 2,
};

enum mosquitto__protocol {
    mosq_p_invalid = 0,
    mosq_p_mqtt31 = 1,
    mosq_p_mqtt311 = 2,
    mosq_p_mqtts = 3,
    mosq_p_mqtt5 = 5,
};

enum mosquitto_bridge_start_type {
    bst_automatic = 0,
    bst_lazy = 1,
    bst_manual = 2,
    bst_once = 3,
};

enum mosquitto_client_state {
    mosq_cs_new = 0,
    mosq_cs_connected = 1,
    mosq_cs_disconnecting = 2,
    mosq_cs_active = 3,
    mosq_cs_connect_pending = 4,
    mosq_cs_connect_srv = 5,
    mosq_cs_disconnect_ws = 6,
    mosq_cs_disconnected = 7,
    mosq_cs_socks5_new = 8,
    mosq_cs_socks5_start = 9,
    mosq_cs_socks5_request = 10,
    mosq_cs_socks5_reply = 11,
    mosq_cs_socks5_auth_ok = 12,
    mosq_cs_socks5_userpass_reply = 13,
    mosq_cs_socks5_send_userpass = 14,
    mosq_cs_expiring = 15,
    mosq_cs_duplicate = 17,
    mosq_cs_disconnect_with_will = 18,
    mosq_cs_disused = 19,
    mosq_cs_authenticating = 20,
    mosq_cs_reauthenticating = 21,
};

enum mosquitto_msg_direction {
    mosq_md_in = 0,
    mosq_md_out = 1,
};

enum mosquitto_msg_origin {
    mosq_mo_client = 0,
    mosq_mo_broker = 1,
};

enum mosquitto_msg_state {
    mosq_ms_invalid = 0,
    mosq_ms_publish_qos0 = 1,
    mosq_ms_publish_qos1 = 2,
    mosq_ms_wait_for_puback = 3,
    mosq_ms_publish_qos2 = 4,
    mosq_ms_wait_for_pubrec = 5,
    mosq_ms_resend_pubrel = 6,
    mosq_ms_wait_for_pubrel = 7,
    mosq_ms_resend_pubcomp = 8,
    mosq_ms_wait_for_pubcomp = 9,
    mosq_ms_send_pubrec = 10,
    mosq_ms_queued = 11,
};

enum mosquitto_plugin_event {
    MOSQ_EVT_RELOAD = 1,
    MOSQ_EVT_ACL_CHECK = 2,
    MOSQ_EVT_BASIC_AUTH = 3,
    MOSQ_EVT_EXT_AUTH_START = 4,
    MOSQ_EVT_EXT_AUTH_CONTINUE = 5,
    MOSQ_EVT_CONTROL = 6,
    MOSQ_EVT_MESSAGE = 7,
    MOSQ_EVT_PSK_KEY = 8,
    MOSQ_EVT_TICK = 9,
    MOSQ_EVT_DISCONNECT = 10,
};

enum mosquitto_protocol {
    mp_mqtt = 0,
    mp_mqttsn = 1,
    mp_websockets = 2,
};

enum mosquitto_pwhash_type {
    pw_sha512 = 6,
    pw_sha512_pbkdf2 = 7,
};

enum mqtt311_connack_codes {
    CONNACK_ACCEPTED = 0,
    CONNACK_REFUSED_PROTOCOL_VERSION = 1,
    CONNACK_REFUSED_IDENTIFIER_REJECTED = 2,
    CONNACK_REFUSED_SERVER_UNAVAILABLE = 3,
    CONNACK_REFUSED_BAD_USERNAME_PASSWORD = 4,
    CONNACK_REFUSED_NOT_AUTHORIZED = 5,
};

enum mqtt5_property {
    MQTT_PROP_PAYLOAD_FORMAT_INDICATOR = 1,
    MQTT_PROP_MESSAGE_EXPIRY_INTERVAL = 2,
    MQTT_PROP_CONTENT_TYPE = 3,
    MQTT_PROP_RESPONSE_TOPIC = 8,
    MQTT_PROP_CORRELATION_DATA = 9,
    MQTT_PROP_SUBSCRIPTION_IDENTIFIER = 11,
    MQTT_PROP_SESSION_EXPIRY_INTERVAL = 17,
    MQTT_PROP_ASSIGNED_CLIENT_IDENTIFIER = 18,
    MQTT_PROP_SERVER_KEEP_ALIVE = 19,
    MQTT_PROP_AUTHENTICATION_METHOD = 21,
    MQTT_PROP_AUTHENTICATION_DATA = 22,
    MQTT_PROP_REQUEST_PROBLEM_INFORMATION = 23,
    MQTT_PROP_WILL_DELAY_INTERVAL = 24,
    MQTT_PROP_REQUEST_RESPONSE_INFORMATION = 25,
    MQTT_PROP_RESPONSE_INFORMATION = 26,
    MQTT_PROP_SERVER_REFERENCE = 28,
    MQTT_PROP_REASON_STRING = 31,
    MQTT_PROP_RECEIVE_MAXIMUM = 33,
    MQTT_PROP_TOPIC_ALIAS_MAXIMUM = 34,
    MQTT_PROP_TOPIC_ALIAS = 35,
    MQTT_PROP_MAXIMUM_QOS = 36,
    MQTT_PROP_RETAIN_AVAILABLE = 37,
    MQTT_PROP_USER_PROPERTY = 38,
    MQTT_PROP_MAXIMUM_PACKET_SIZE = 39,
    MQTT_PROP_WILDCARD_SUB_AVAILABLE = 40,
    MQTT_PROP_SUBSCRIPTION_ID_AVAILABLE = 41,
    MQTT_PROP_SHARED_SUB_AVAILABLE = 42,
};

enum mqtt5_property_type {
    MQTT_PROP_TYPE_BYTE = 1,
    MQTT_PROP_TYPE_INT16 = 2,
    MQTT_PROP_TYPE_INT32 = 3,
    MQTT_PROP_TYPE_VARINT = 4,
    MQTT_PROP_TYPE_BINARY = 5,
    MQTT_PROP_TYPE_STRING = 6,
    MQTT_PROP_TYPE_STRING_PAIR = 7,
};

enum mqtt5_return_codes {
    MQTT_RC_SUCCESS = 0,
    MQTT_RC_NORMAL_DISCONNECTION = 0,
    MQTT_RC_GRANTED_QOS0 = 0,
    MQTT_RC_GRANTED_QOS1 = 1,
    MQTT_RC_GRANTED_QOS2 = 2,
    MQTT_RC_DISCONNECT_WITH_WILL_MSG = 4,
    MQTT_RC_NO_MATCHING_SUBSCRIBERS = 16,
    MQTT_RC_NO_SUBSCRIPTION_EXISTED = 17,
    MQTT_RC_CONTINUE_AUTHENTICATION = 24,
    MQTT_RC_REAUTHENTICATE = 25,
    MQTT_RC_UNSPECIFIED = 128,
    MQTT_RC_MALFORMED_PACKET = 129,
    MQTT_RC_PROTOCOL_ERROR = 130,
    MQTT_RC_IMPLEMENTATION_SPECIFIC = 131,
    MQTT_RC_UNSUPPORTED_PROTOCOL_VERSION = 132,
    MQTT_RC_CLIENTID_NOT_VALID = 133,
    MQTT_RC_BAD_USERNAME_OR_PASSWORD = 134,
    MQTT_RC_NOT_AUTHORIZED = 135,
    MQTT_RC_SERVER_UNAVAILABLE = 136,
    MQTT_RC_SERVER_BUSY = 137,
    MQTT_RC_BANNED = 138,
    MQTT_RC_SERVER_SHUTTING_DOWN = 139,
    MQTT_RC_BAD_AUTHENTICATION_METHOD = 140,
    MQTT_RC_KEEP_ALIVE_TIMEOUT = 141,
    MQTT_RC_SESSION_TAKEN_OVER = 142,
    MQTT_RC_TOPIC_FILTER_INVALID = 143,
    MQTT_RC_TOPIC_NAME_INVALID = 144,
    MQTT_RC_PACKET_ID_IN_USE = 145,
    MQTT_RC_PACKET_ID_NOT_FOUND = 146,
    MQTT_RC_RECEIVE_MAXIMUM_EXCEEDED = 147,
    MQTT_RC_TOPIC_ALIAS_INVALID = 148,
    MQTT_RC_PACKET_TOO_LARGE = 149,
    MQTT_RC_MESSAGE_RATE_TOO_HIGH = 150,
    MQTT_RC_QUOTA_EXCEEDED = 151,
    MQTT_RC_ADMINISTRATIVE_ACTION = 152,
    MQTT_RC_PAYLOAD_FORMAT_INVALID = 153,
    MQTT_RC_RETAIN_NOT_SUPPORTED = 154,
    MQTT_RC_QOS_NOT_SUPPORTED = 155,
    MQTT_RC_USE_ANOTHER_SERVER = 156,
    MQTT_RC_SERVER_MOVED = 157,
    MQTT_RC_SHARED_SUBS_NOT_SUPPORTED = 158,
    MQTT_RC_CONNECTION_RATE_EXCEEDED = 159,
    MQTT_RC_MAXIMUM_CONNECT_TIME = 160,
    MQTT_RC_SUBSCRIPTION_IDS_NOT_SUPPORTED = 161,
    MQTT_RC_WILDCARD_SUBS_NOT_SUPPORTED = 162,
};

enum mqtt5_sub_options {
    MQTT_SUB_OPT_NO_LOCAL = 4,
    MQTT_SUB_OPT_RETAIN_AS_PUBLISHED = 8,
    MQTT_SUB_OPT_SEND_RETAIN_ALWAYS = 0,
    MQTT_SUB_OPT_SEND_RETAIN_NEW = 16,
    MQTT_SUB_OPT_SEND_RETAIN_NEVER = 32,
};

enum struct_ident {
    id_invalid = 0,
    id_listener = 1,
    id_client = 2,
    id_listener_ws = 3,
};

/* ── forward declarations ────────────────────────────────── */

struct PF_cfg;
struct PF_client;
struct PF_client_msg;
struct PF_header;
struct PF_msg_store;
struct PF_retain;
struct PF_sub;
struct P_client;
struct P_client_msg;
struct P_msg_store;
struct P_retain;
struct P_sub;
struct UT_hash_bucket;
struct UT_hash_handle;
struct UT_hash_table;
union __anon_0x00002d0b;
union __anon_0x0000c3f9;
union __anon_0x0000ee38;
union __anon_0x00011586;
union __anon_0x000141a9;
union __anon_0x0001626b;
union __anon_0x00018834;
union __anon_0x0001b0e4;
union __anon_0x0001ce2e;
union __anon_0x0001eb39;
union __anon_0x00021053;
union __anon_0x000231a8;
union __anon_0x00024f6c;
union __anon_0x00026d06;
union __anon_0x00029255;
union __anon_0x0002b1af;
union __anon_0x0002d59d;
union __anon_0x00034282;
union __anon_0x0003b863;
union __anon_0x0003bf01;
union __anon_0x0003c080;
union __anon_0x0003eac0;
union __anon_0x00043db5;
union __anon_0x000483c0;
union __anon_0x0004d897;
union __anon_0x00052a5b;
union __anon_0x00055193;
union __anon_0x000573b5;
union __anon_0x000580a8;
union __anon_0x0005abb6;
union __anon_0x00062890;
union __anon_0x000651e6;
union __anon_0x00067296;
union __anon_0x000696b8;
union __anon_0x0006b581;
union __anon_0x0006d4af;
union __anon_0x0006f2f9;
union __anon_0x00071392;
union __anon_0x00073248;
union __anon_0x00075095;
union __anon_0x00076e3b;
union __anon_0x00081cfa;
union __anon_0x0008641e;
struct __sigset_t;
struct __va_list;
struct addrinfo;
struct bridge_address;
struct config_recurse;
struct dirent;
union epoll_data;
struct epoll_event;
struct ifaddrs;
struct in6_addr;
struct in_addr;
struct mosquitto;
struct mosquitto__acl;
struct mosquitto__acl_user;
struct mosquitto__alias;
struct mosquitto__auth_plugin;
struct mosquitto__auth_plugin_config;
struct mosquitto__bridge;
struct mosquitto__bridge_topic;
struct mosquitto__callback;
struct mosquitto__config;
struct mosquitto__listener;
struct mosquitto__listener_sock;
struct mosquitto__packet;
struct mosquitto__retainhier;
struct mosquitto__security_options;
struct mosquitto__subhier;
struct mosquitto__subleaf;
struct mosquitto__subshared;
struct mosquitto__subshared_ref;
struct mosquitto__unpwd;
struct mosquitto_acl_msg;
struct mosquitto_auth_opt;
struct mosquitto_client_msg;
struct mosquitto_db;
struct mosquitto_evt_acl_check;
struct mosquitto_evt_basic_auth;
struct mosquitto_evt_control;
struct mosquitto_evt_disconnect;
struct mosquitto_evt_extended_auth;
struct mosquitto_evt_message;
struct mosquitto_evt_psk_key;
struct mosquitto_evt_reload;
struct mosquitto_evt_tick;
struct mosquitto_message;
struct mosquitto_message_all;
struct mosquitto_message_v5;
struct mosquitto_msg_data;
struct mosquitto_msg_store;
struct mosquitto_msg_store_load;
struct mosquitto_opt;
struct mosquitto_plugin_id_t;
struct mqtt5__property;
struct mqtt__string;
struct passwd;
struct plugin__callbacks;
struct session_expiry_list;
struct sockaddr;
struct sockaddr_in;
struct sockaddr_in6;
struct sockaddr_storage;
struct sockaddr_un;
struct timespec;
struct timeval;
struct tm;
struct will_delay_list;

/* ── typedefs, structs & unions (dependency-ordered) ──────── */

union __anon_0x0003c080 {
    struct sockaddr * ifu_broadaddr;
    struct sockaddr * ifu_dstaddr;
};

struct __sigset_t {
    long unsigned int __bits[32];
};

struct __va_list {
    void * __ap;
};

struct config_recurse {
    unsigned int log_dest;
    int log_dest_set;
    unsigned int log_type;
    int log_type_set;
};

struct mosquitto__acl {
    struct mosquitto__acl * next;
    char * topic;
    int access;
    int ucount;
    int ccount;
};

struct mosquitto__acl_user {
    struct mosquitto__acl_user * next;
    char * username;
    struct mosquitto__acl * acl;
};

struct mosquitto__subshared_ref {
    struct mosquitto__subhier * hier;
    struct mosquitto__subshared * shared;
};

struct mosquitto_acl_msg {
    const char * topic;
    const void * payload;
    long int payloadlen;
    int qos;
    _Bool retain;
};

struct mosquitto_auth_opt {
    char * key;
    char * value;
};

struct mosquitto_evt_basic_auth {
    void * future;
    struct mosquitto * client;
    char * username;
    char * password;
    void * future2[4];
};

struct mosquitto_evt_disconnect {
    void * future;
    struct mosquitto * client;
    int reason;
    void * future2[4];
};

struct mosquitto_evt_psk_key {
    void * future;
    struct mosquitto * client;
    const char * hint;
    const char * identity;
    char * key;
    int max_key_len;
    void * future2[4];
};

struct mosquitto_evt_reload {
    void * future;
    struct mosquitto_opt * options;
    int option_count;
    void * future2[4];
};

struct mosquitto_message {
    int mid;
    char * topic;
    void * payload;
    int payloadlen;
    int qos;
    _Bool retain;
};

struct mosquitto_opt {
    char * key;
    char * value;
};

struct mosquitto_plugin_id_t {
    struct mosquitto__listener * listener;
};

struct plugin__callbacks {
    struct mosquitto__callback * tick;
    struct mosquitto__callback * acl_check;
    struct mosquitto__callback * basic_auth;
    struct mosquitto__callback * control;
    struct mosquitto__callback * disconnect;
    struct mosquitto__callback * ext_auth_continue;
    struct mosquitto__callback * ext_auth_start;
    struct mosquitto__callback * message;
    struct mosquitto__callback * psk_key;
    struct mosquitto__callback * reload;
};

struct session_expiry_list {
    struct mosquitto * context;
    struct session_expiry_list * prev;
    struct session_expiry_list * next;
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

struct will_delay_list {
    struct mosquitto * context;
    struct will_delay_list * prev;
    struct will_delay_list * next;
};

typedef struct __dirstream DIR;
typedef struct _IO_FILE FILE;
typedef int (*FUNC_auth_plugin_acl_check_v2)(void *, const char *, const char *, const char *, int);
typedef int (*FUNC_auth_plugin_acl_check_v3)(void *, int, const struct mosquitto *, struct mosquitto_acl_msg *);
typedef int (*FUNC_auth_plugin_acl_check_v4)(void *, int, struct mosquitto *, struct mosquitto_acl_msg *);
typedef int (*FUNC_auth_plugin_cleanup_v2)(void *, struct mosquitto_auth_opt *, int);
typedef int (*FUNC_auth_plugin_cleanup_v3)(void *, struct mosquitto_opt *, int);
typedef int (*FUNC_auth_plugin_cleanup_v4)(void *, struct mosquitto_opt *, int);
typedef int (*FUNC_auth_plugin_init_v2)(void * *, struct mosquitto_auth_opt *, int);
typedef int (*FUNC_auth_plugin_init_v3)(void * *, struct mosquitto_opt *, int);
typedef int (*FUNC_auth_plugin_init_v4)(void * *, struct mosquitto_opt *, int);
typedef int (*FUNC_auth_plugin_psk_key_get_v2)(void *, const char *, const char *, char *, int);
typedef int (*FUNC_auth_plugin_psk_key_get_v3)(void *, const struct mosquitto *, const char *, const char *, char *, int);
typedef int (*FUNC_auth_plugin_psk_key_get_v4)(void *, struct mosquitto *, const char *, const char *, char *, int);
typedef int (*FUNC_auth_plugin_security_cleanup_v2)(void *, struct mosquitto_auth_opt *, int, _Bool);
typedef int (*FUNC_auth_plugin_security_cleanup_v3)(void *, struct mosquitto_opt *, int, _Bool);
typedef int (*FUNC_auth_plugin_security_cleanup_v4)(void *, struct mosquitto_opt *, int, _Bool);
typedef int (*FUNC_auth_plugin_security_init_v2)(void *, struct mosquitto_auth_opt *, int, _Bool);
typedef int (*FUNC_auth_plugin_security_init_v3)(void *, struct mosquitto_opt *, int, _Bool);
typedef int (*FUNC_auth_plugin_security_init_v4)(void *, struct mosquitto_opt *, int, _Bool);
typedef int (*FUNC_auth_plugin_unpwd_check_v2)(void *, const char *, const char *);
typedef int (*FUNC_auth_plugin_unpwd_check_v3)(void *, const struct mosquitto *, const char *, const char *);
typedef int (*FUNC_auth_plugin_unpwd_check_v4)(void *, struct mosquitto *, const char *, const char *);
typedef int (*FUNC_auth_plugin_version)(void);
typedef int (*FUNC_plugin_cleanup_v5)(void *, struct mosquitto_opt *, int);
typedef int (*FUNC_plugin_version)(int, const int *);
typedef int (*MOSQ_FUNC_generic_callback)(int, void *, void *);
typedef struct UT_hash_bucket UT_hash_bucket;
typedef struct UT_hash_handle UT_hash_handle;
typedef struct UT_hash_table UT_hash_table;
typedef struct __va_list __isoc_va_list;
typedef int clockid_t;
typedef union epoll_data epoll_data_t;
typedef unsigned int gid_t;
typedef long long unsigned int ino_t;
typedef int int32_t;
typedef long long int int64_t;
typedef signed char int8_t;
typedef unsigned int mode_t;
typedef int mosq_sock_t;
typedef struct mosquitto_plugin_id_t mosquitto_plugin_id_t;
typedef struct mqtt5__property mosquitto_property;
typedef long long int off_t;
typedef int pid_t;
typedef int ptrdiff_t;
typedef short unsigned int sa_family_t;
typedef struct __sigset_t sigset_t;
typedef unsigned int size_t;
typedef unsigned int socklen_t;
typedef int ssize_t;
typedef long long int suseconds_t;
typedef long long int time_t;
typedef unsigned int uid_t;
typedef short unsigned int uint16_t;
typedef unsigned int uint32_t;
typedef long long unsigned int uint64_t;
typedef unsigned char uint8_t;
typedef struct __va_list va_list;
struct ifaddrs {
    struct ifaddrs * ifa_next;
    char * ifa_name;
    unsigned int ifa_flags;
    struct sockaddr * ifa_addr;
    struct sockaddr * ifa_netmask;
    union __anon_0x0003c080 ifa_ifu;
    void * ifa_data;
};

struct UT_hash_bucket {
    struct UT_hash_handle * hh_head;
    unsigned int count;
    unsigned int expand_mult;
};

struct UT_hash_handle {
    struct UT_hash_table * tbl;
    void * prev;
    void * next;
    struct UT_hash_handle * hh_prev;
    struct UT_hash_handle * hh_next;
    void * key;
    unsigned int keylen;
    unsigned int hashv;
};

struct mosquitto__listener_sock {
    int ident;
    mosq_sock_t sock;
    struct mosquitto__listener * listener;
};

typedef int (*FUNC_plugin_init_v5)(mosquitto_plugin_id_t *, void * *, struct mosquitto_opt *, int);
struct mosquitto_message_v5 {
    struct mosquitto_message_v5 * next;
    struct mosquitto_message_v5 * prev;
    char * topic;
    void * payload;
    mosquitto_property * properties;
    char * clientid;
    int payloadlen;
    int qos;
    _Bool retain;
};

struct dirent {
    ino_t d_ino;
    off_t d_off;
    short unsigned int d_reclen;
    unsigned char d_type;
    char d_name[256];
};

struct sockaddr {
    sa_family_t sa_family;
    char sa_data[14];
};

struct sockaddr_storage {
    sa_family_t ss_family;
    char __ss_padding[122];
    long unsigned int __ss_align;
};

struct sockaddr_un {
    sa_family_t sun_family;
    char sun_path[108];
};

struct addrinfo {
    int ai_flags;
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    socklen_t ai_addrlen;
    struct sockaddr * ai_addr;
    char * ai_canonname;
    struct addrinfo * ai_next;
};

struct mosquitto_evt_tick {
    void * future;
    long int now_ns;
    long int next_ns;
    time_t now_s;
    time_t next_s;
    void * future2[4];
};

struct timespec {
    time_t tv_sec;
    long int tv_nsec;
};

struct timeval {
    time_t tv_sec;
    suseconds_t tv_usec;
};

struct passwd {
    char * pw_name;
    char * pw_passwd;
    uid_t pw_uid;
    gid_t pw_gid;
    char * pw_gecos;
    char * pw_dir;
    char * pw_shell;
};

struct bridge_address {
    char * address;
    uint16_t port;
};

struct mosquitto__alias {
    char * topic;
    uint16_t alias;
};

struct mosquitto__security_options {
    struct mosquitto__unpwd * unpwd;
    struct mosquitto__unpwd * psk_id;
    struct mosquitto__acl_user * acl_list;
    struct mosquitto__acl * acl_patterns;
    char * password_file;
    char * psk_file;
    char * acl_file;
    struct mosquitto__auth_plugin_config * auth_plugin_configs;
    int auth_plugin_config_count;
    int8_t allow_anonymous;
    _Bool allow_zero_length_clientid;
    char * auto_id_prefix;
    uint16_t auto_id_prefix_len;
    struct plugin__callbacks plugin_callbacks;
    mosquitto_plugin_id_t * pid;
};

struct mosquitto_evt_extended_auth {
    void * future;
    struct mosquitto * client;
    const void * data_in;
    void * data_out;
    uint16_t data_in_len;
    uint16_t data_out_len;
    const char * auth_method;
    void * future2[3];
};

struct mosquitto_msg_data {
    struct mosquitto_client_msg * inflight;
    struct mosquitto_client_msg * queued;
    long int msg_bytes;
    long int msg_bytes12;
    int msg_count;
    int msg_count12;
    int inflight_quota;
    uint16_t inflight_maximum;
};

struct mqtt__string {
    char * v;
    uint16_t len;
};

typedef int (*FUNC_auth_plugin_auth_continue_v4)(void *, struct mosquitto *, const char *, const void *, uint16_t, void * *, uint16_t *);
typedef int (*FUNC_auth_plugin_auth_start_v4)(void *, struct mosquitto *, const char *, _Bool, const void *, uint16_t, void * *, uint16_t *);
typedef uint16_t in_port_t;
struct PF_client {
    int64_t session_expiry_time;
    uint32_t session_expiry_interval;
    uint16_t last_mid;
    uint16_t id_len;
    uint16_t listener_port;
    uint16_t username_len;
};

struct PF_header {
    uint32_t chunk;
    uint32_t length;
};

struct UT_hash_table {
    UT_hash_bucket * buckets;
    unsigned int num_buckets;
    unsigned int log2_num_buckets;
    unsigned int num_items;
    struct UT_hash_handle * tail;
    ptrdiff_t hho;
    unsigned int ideal_chain_maxlen;
    unsigned int nonideal_items;
    unsigned int ineff_expands;
    unsigned int noexpand;
    uint32_t signature;
};

struct mosquitto__bridge {
    char * name;
    struct bridge_address * addresses;
    int cur_address;
    int address_count;
    time_t primary_retry;
    mosq_sock_t primary_retry_sock;
    _Bool round_robin;
    _Bool try_private;
    _Bool try_private_accepted;
    _Bool clean_start;
    int8_t clean_start_local;
    uint16_t keepalive;
    struct mosquitto__bridge_topic * topics;
    int topic_count;
    _Bool topic_remapping;
    enum mosquitto__protocol protocol_version;
    time_t restart_t;
    char * remote_clientid;
    char * remote_username;
    char * remote_password;
    char * local_clientid;
    char * local_username;
    char * local_password;
    char * notification_topic;
    char * bind_address;
    _Bool notifications;
    _Bool notifications_local_only;
    enum mosquitto_bridge_start_type start_type;
    int idle_timeout;
    int restart_timeout;
    int backoff_base;
    int backoff_cap;
    int threshold;
    uint32_t maximum_packet_size;
    _Bool lazy_reconnect;
    _Bool attempt_unsubscribe;
    _Bool initial_notification_done;
    _Bool outgoing_retain;
};

struct mosquitto_message_all {
    struct mosquitto_message_all * next;
    struct mosquitto_message_all * prev;
    mosquitto_property * properties;
    time_t timestamp;
    enum mosquitto_msg_state state;
    _Bool dup;
    struct mosquitto_message msg;
    uint32_t expiry_interval;
};

typedef uint32_t in_addr_t;
union epoll_data {
    void * ptr;
    int fd;
    uint32_t u32;
    uint64_t u64;
};

typedef uint64_t dbid_t;
struct PF_cfg {
    uint64_t last_db_id;
    uint8_t shutdown;
    uint8_t dbid_size;
};

struct PF_sub {
    uint32_t identifier;
    uint16_t id_len;
    uint16_t topic_len;
    uint8_t qos;
    uint8_t options;
};

union __anon_0x0003bf01 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0003eac0 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

struct mosquitto__bridge_topic {
    char * topic;
    char * local_prefix;
    char * remote_prefix;
    char * local_topic;
    char * remote_topic;
    enum mosquitto__bridge_direction direction;
    uint8_t qos;
};

struct mosquitto__packet {
    uint8_t * payload;
    struct mosquitto__packet * next;
    uint32_t remaining_mult;
    uint32_t remaining_length;
    uint32_t packet_length;
    uint32_t to_process;
    uint32_t pos;
    uint16_t mid;
    uint8_t command;
    int8_t remaining_count;
};

struct mosquitto__subleaf {
    struct mosquitto__subleaf * prev;
    struct mosquitto__subleaf * next;
    struct mosquitto * context;
    uint32_t identifier;
    uint8_t qos;
    _Bool no_local;
    _Bool retain_as_published;
};

struct mosquitto_client_msg {
    struct mosquitto_client_msg * prev;
    struct mosquitto_client_msg * next;
    struct mosquitto_msg_store * store;
    mosquitto_property * properties;
    time_t timestamp;
    uint16_t mid;
    uint8_t qos;
    _Bool retain;
    enum mosquitto_msg_direction direction;
    enum mosquitto_msg_state state;
    _Bool dup;
};

struct mosquitto_evt_acl_check {
    void * future;
    struct mosquitto * client;
    const char * topic;
    const void * payload;
    mosquitto_property * properties;
    int access;
    uint32_t payloadlen;
    uint8_t qos;
    _Bool retain;
    void * future2[4];
};

struct mosquitto_evt_control {
    void * future;
    struct mosquitto * client;
    const char * topic;
    const void * payload;
    const mosquitto_property * properties;
    char * reason_string;
    uint32_t payloadlen;
    uint8_t qos;
    uint8_t reason_code;
    _Bool retain;
    void * future2[4];
};

struct mosquitto_evt_message {
    void * future;
    struct mosquitto * client;
    char * topic;
    void * payload;
    mosquitto_property * properties;
    char * reason_string;
    uint32_t payloadlen;
    uint8_t qos;
    uint8_t reason_code;
    _Bool retain;
    void * future2[4];
};

struct mosquitto__callback {
    UT_hash_handle hh;
    struct mosquitto__callback * next;
    struct mosquitto__callback * prev;
    MOSQ_FUNC_generic_callback cb;
    void * userdata;
    char * data;
};

struct mosquitto__retainhier {
    UT_hash_handle hh;
    struct mosquitto__retainhier * parent;
    struct mosquitto__retainhier * children;
    struct mosquitto_msg_store * retained;
    char * topic;
    uint16_t topic_len;
};

struct mosquitto__subhier {
    UT_hash_handle hh;
    struct mosquitto__subhier * parent;
    struct mosquitto__subhier * children;
    struct mosquitto__subleaf * subs;
    struct mosquitto__subshared * shared;
    char * topic;
    uint16_t topic_len;
};

struct mosquitto__subshared {
    UT_hash_handle hh;
    char * name;
    struct mosquitto__subleaf * subs;
};

struct mosquitto__unpwd {
    UT_hash_handle hh;
    char * username;
    char * password;
    char * clientid;
    enum mosquitto_pwhash_type hashtype;
};

struct mosquitto__listener {
    uint16_t port;
    char * host;
    char * bind_interface;
    int max_connections;
    char * mount_point;
    mosq_sock_t * socks;
    int sock_count;
    int client_count;
    enum mosquitto_protocol protocol;
    int socket_domain;
    _Bool use_username_as_clientid;
    uint8_t max_qos;
    uint16_t max_topic_alias;
    struct mosquitto__security_options security_options;
    char * unix_socket_path;
};

union __anon_0x00002d0b {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0000c3f9 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0000ee38 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00011586 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x000141a9 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0001626b {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00018834 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0001b0e4 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0001ce2e {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0001eb39 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00021053 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x000231a8 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00024f6c {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00026d06 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00029255 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0002b1af {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0002d59d {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00034282 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0003b863 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00043db5 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x000483c0 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0004d897 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00052a5b {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00055193 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x000573b5 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x000580a8 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0005abb6 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00062890 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x000651e6 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00067296 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x000696b8 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0006b581 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0006d4af {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0006f2f9 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00071392 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00073248 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00075095 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00076e3b {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00081cfa {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0008641e {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

struct mosquitto__auth_plugin {
    void * lib;
    void * user_data;
    int (*plugin_version)(void);
    struct mosquitto_plugin_id_t * identifier;
    FUNC_plugin_init_v5 plugin_init_v5;
    FUNC_plugin_cleanup_v5 plugin_cleanup_v5;
    FUNC_auth_plugin_init_v4 plugin_init_v4;
    FUNC_auth_plugin_cleanup_v4 plugin_cleanup_v4;
    FUNC_auth_plugin_security_init_v4 security_init_v4;
    FUNC_auth_plugin_security_cleanup_v4 security_cleanup_v4;
    FUNC_auth_plugin_acl_check_v4 acl_check_v4;
    FUNC_auth_plugin_unpwd_check_v4 unpwd_check_v4;
    FUNC_auth_plugin_psk_key_get_v4 psk_key_get_v4;
    FUNC_auth_plugin_auth_start_v4 auth_start_v4;
    FUNC_auth_plugin_auth_continue_v4 auth_continue_v4;
    FUNC_auth_plugin_init_v3 plugin_init_v3;
    FUNC_auth_plugin_cleanup_v3 plugin_cleanup_v3;
    FUNC_auth_plugin_security_init_v3 security_init_v3;
    FUNC_auth_plugin_security_cleanup_v3 security_cleanup_v3;
    FUNC_auth_plugin_acl_check_v3 acl_check_v3;
    FUNC_auth_plugin_unpwd_check_v3 unpwd_check_v3;
    FUNC_auth_plugin_psk_key_get_v3 psk_key_get_v3;
    FUNC_auth_plugin_init_v2 plugin_init_v2;
    FUNC_auth_plugin_cleanup_v2 plugin_cleanup_v2;
    FUNC_auth_plugin_security_init_v2 security_init_v2;
    FUNC_auth_plugin_security_cleanup_v2 security_cleanup_v2;
    FUNC_auth_plugin_acl_check_v2 acl_check_v2;
    FUNC_auth_plugin_unpwd_check_v2 unpwd_check_v2;
    FUNC_auth_plugin_psk_key_get_v2 psk_key_get_v2;
    int version;
};

struct P_client {
    struct PF_client F;
    char * client_id;
    char * username;
};

struct in_addr {
    in_addr_t s_addr;
};

struct epoll_event {
    uint32_t events;
    epoll_data_t data;
};

struct PF_client_msg {
    dbid_t store_id;
    uint16_t mid;
    uint16_t id_len;
    uint8_t qos;
    uint8_t state;
    uint8_t retain_dup;
    uint8_t direction;
};

struct PF_msg_store {
    dbid_t store_id;
    int64_t expiry_time;
    uint32_t payloadlen;
    uint16_t source_mid;
    uint16_t source_id_len;
    uint16_t source_username_len;
    uint16_t topic_len;
    uint16_t source_port;
    uint8_t qos;
    uint8_t retain;
};

struct PF_retain {
    dbid_t store_id;
};

struct mosquitto_db {
    dbid_t last_db_id;
    struct mosquitto__subhier * subs;
    struct mosquitto__retainhier * retains;
    struct mosquitto * contexts_by_id;
    struct mosquitto * contexts_by_sock;
    struct mosquitto * contexts_for_free;
    struct mosquitto * * bridges;
    struct clientid__index_hash * clientid_index_hash;
    struct mosquitto_msg_store * msg_store;
    struct mosquitto_msg_store_load * msg_store_load;
    time_t now_s;
    time_t now_real_s;
    int bridge_count;
    int msg_store_count;
    long unsigned int msg_store_bytes;
    char * config_file;
    struct mosquitto__config * config;
    int auth_plugin_count;
    _Bool verbose;
    int subscription_count;
    int shared_subscription_count;
    int retained_count;
    int persistence_changes;
    struct mosquitto * ll_for_free;
    int epollfd;
    struct mosquitto_message_v5 * plugin_msgs;
};

struct mosquitto_msg_store {
    struct mosquitto_msg_store * next;
    struct mosquitto_msg_store * prev;
    dbid_t db_id;
    char * source_id;
    char * source_username;
    struct mosquitto__listener * source_listener;
    char * * dest_ids;
    int dest_id_count;
    int ref_count;
    char * topic;
    mosquitto_property * properties;
    void * payload;
    time_t message_expiry_time;
    uint32_t payloadlen;
    enum mosquitto_msg_origin origin;
    uint16_t source_mid;
    uint16_t mid;
    uint8_t qos;
    _Bool retain;
};

struct mosquitto_msg_store_load {
    UT_hash_handle hh;
    dbid_t db_id;
    struct mosquitto_msg_store * store;
};

struct P_sub {
    struct PF_sub F;
    char * client_id;
    char * topic;
};

struct in6_addr {
    union __anon_0x0003bf01 __in6_union;
};

struct mosquitto {
    int ident;
    mosq_sock_t sock;
    uint32_t maximum_packet_size;
    enum mosquitto__protocol protocol;
    char * address;
    char * id;
    char * username;
    char * password;
    uint16_t keepalive;
    uint16_t last_mid;
    enum mosquitto_client_state state;
    time_t last_msg_in;
    time_t next_msg_out;
    time_t ping_t;
    struct mosquitto__packet in_packet;
    struct mosquitto__packet * current_out_packet;
    struct mosquitto__packet * out_packet;
    struct mosquitto_message_all * will;
    struct mosquitto__alias * aliases;
    struct will_delay_list * will_delay_entry;
    int alias_count;
    uint32_t will_delay_interval;
    time_t will_delay_time;
    _Bool want_write;
    _Bool want_connect;
    _Bool clean_start;
    time_t session_expiry_time;
    uint32_t session_expiry_interval;
    _Bool removed_from_by_id;
    _Bool is_dropping;
    _Bool is_bridge;
    struct mosquitto__bridge * bridge;
    struct mosquitto_msg_data msgs_in;
    struct mosquitto_msg_data msgs_out;
    struct mosquitto__acl_user * acl_list;
    struct mosquitto__listener * listener;
    struct mosquitto__packet * out_packet_last;
    struct mosquitto__subhier * * subs;
    struct mosquitto__subshared_ref * * shared_subs;
    char * auth_method;
    int sub_count;
    int shared_sub_count;
    _Bool ws_want_write;
    _Bool assigned_id;
    uint8_t max_qos;
    uint8_t retain_available;
    _Bool tcp_nodelay;
    UT_hash_handle hh_id;
    UT_hash_handle hh_sock;
    struct mosquitto * for_free_next;
    struct session_expiry_list * expiry_list_item;
    uint16_t remote_port;
    uint32_t events;
};

struct mosquitto__config {
    _Bool allow_duplicate_messages;
    int autosave_interval;
    _Bool autosave_on_changes;
    _Bool check_retain_source;
    char * clientid_prefixes;
    _Bool connection_messages;
    uint16_t cmd_port[10];
    int cmd_port_count;
    _Bool daemon;
    struct mosquitto__listener default_listener;
    struct mosquitto__listener * listeners;
    int listener_count;
    _Bool local_only;
    unsigned int log_dest;
    int log_facility;
    unsigned int log_type;
    _Bool log_timestamp;
    char * log_timestamp_format;
    char * log_file;
    FILE * log_fptr;
    size_t max_inflight_bytes;
    size_t max_queued_bytes;
    int max_queued_messages;
    uint32_t max_packet_size;
    uint32_t message_size_limit;
    uint16_t max_inflight_messages;
    uint16_t max_keepalive;
    uint8_t max_qos;
    _Bool persistence;
    char * persistence_location;
    char * persistence_file;
    char * persistence_filepath;
    time_t persistent_client_expiration;
    char * pid_file;
    _Bool queue_qos0_messages;
    _Bool per_listener_settings;
    _Bool retain_available;
    _Bool set_tcp_nodelay;
    int sys_interval;
    _Bool upgrade_outgoing_qos;
    char * user;
    struct mosquitto__bridge * bridges;
    int bridge_count;
    struct mosquitto__security_options security_options;
};

struct mqtt5__property {
    struct mqtt5__property * next;
    union __anon_0x00002d0b value;
    struct mqtt__string name;
    int32_t identifier;
    _Bool client_generated;
};

struct mosquitto__auth_plugin_config {
    char * path;
    struct mosquitto_opt * options;
    int option_count;
    _Bool deny_special_chars;
    struct mosquitto__auth_plugin plugin;
};

struct sockaddr_in {
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;
    uint8_t sin_zero[8];
};

struct P_client_msg {
    struct PF_client_msg F;
    char * client_id;
    mosquitto_property * properties;
};

struct P_retain {
    struct PF_retain F;
};

struct sockaddr_in6 {
    sa_family_t sin6_family;
    in_port_t sin6_port;
    uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    uint32_t sin6_scope_id;
};

struct P_msg_store {
    struct PF_msg_store F;
    void * payload;
    struct mosquitto source;
    char * topic;
    mosquitto_property * properties;
};


/* ── exported function declarations ──────────────────────── */

extern void LIB_ERROR(void);
extern void *_fini(/* signature unavailable */);
extern void *_init(/* signature unavailable */);
extern void *_start(/* signature unavailable */);
extern void *_start_c(/* signature unavailable */);
extern int acl__find_acls(struct mosquitto * context);
extern int alias__add(struct mosquitto *, const char *, uint16_t);
extern int alias__find(struct mosquitto *, char * *, uint16_t);
extern void alias__free_all(struct mosquitto *);
extern int bridge__add_topic(struct mosquitto__bridge *, const char *, enum mosquitto__bridge_direction, uint8_t, const char *, const char *);
extern void bridge__cleanup(struct mosquitto *);
extern int bridge__connect(struct mosquitto * context);
extern int bridge__new(struct mosquitto__bridge * bridge);
extern int bridge__on_connect(struct mosquitto *);
extern void bridge__packet_cleanup(struct mosquitto * context);
extern int bridge__register_local_connections(void);
extern int bridge__remap_topic_in(struct mosquitto *, char * *);
extern void bridge__start_all(void);
extern void bridge_check(void);
extern void config__cleanup(struct mosquitto__config *);
extern int config__get_dir_files(const char * include_dir, char * * * files, int * file_count);
extern void config__init(struct mosquitto__config *);
extern int config__parse_args(struct mosquitto__config *, int, char * *);
extern int config__read(struct mosquitto__config *, _Bool);
extern int connect__on_authorised(struct mosquitto * context, void * auth_data_out, uint16_t auth_data_out_len);
extern void context__add_to_disused(struct mosquitto *);
extern void context__cleanup(struct mosquitto *, _Bool);
extern void context__disconnect(struct mosquitto *);
extern void context__free_disused(void);
extern struct mosquitto * context__init(mosq_sock_t);
extern void context__remove_from_by_id(struct mosquitto * context);
extern void context__send_will(struct mosquitto *);
extern int control__process(struct mosquitto *, struct mosquitto_msg_store *);
extern int control__register_callback(struct mosquitto__security_options *, MOSQ_FUNC_generic_callback, const char *, void *);
extern int control__unregister_callback(struct mosquitto__security_options *, MOSQ_FUNC_generic_callback, const char *);
extern int db__close(void);
extern int db__message_delete_outgoing(struct mosquitto *, uint16_t, enum mosquitto_msg_state, int);
extern void db__message_dequeue_first(struct mosquitto * context, struct mosquitto_msg_data * msg_data);
extern int db__message_insert(struct mosquitto *, uint16_t, enum mosquitto_msg_direction, uint8_t, _Bool, struct mosquitto_msg_store *, mosquitto_property *, _Bool);
extern int db__message_reconnect_reset(struct mosquitto *);
extern int db__message_release_incoming(struct mosquitto *, uint16_t);
extern int db__message_remove_incoming(struct mosquitto *, uint16_t);
extern int db__message_store(const struct mosquitto *, struct mosquitto_msg_store *, uint32_t, dbid_t, enum mosquitto_msg_origin);
extern int db__message_store_find(struct mosquitto *, uint16_t, struct mosquitto_msg_store * *);
extern int db__message_update_outgoing(struct mosquitto *, uint16_t, enum mosquitto_msg_state, int);
extern int db__message_write_inflight_out_all(struct mosquitto *);
extern int db__message_write_inflight_out_latest(struct mosquitto *);
extern int db__message_write_queued_in(struct mosquitto *);
extern int db__message_write_queued_out(struct mosquitto *);
extern int db__messages_delete(struct mosquitto * context, _Bool force_free);
extern int db__messages_easy_queue(struct mosquitto *, const char *, uint8_t, uint32_t, const void *, int, uint32_t, mosquitto_property * *);
extern void db__msg_store_add(struct mosquitto_msg_store * store);
extern void db__msg_store_clean(void);
extern void db__msg_store_compact(void);
extern void db__msg_store_free(struct mosquitto_msg_store *);
extern void db__msg_store_ref_dec(struct mosquitto_msg_store * *);
extern void db__msg_store_ref_inc(struct mosquitto_msg_store *);
extern void db__msg_store_remove(struct mosquitto_msg_store * store);
extern int db__open(struct mosquitto__config *);
extern _Bool db__ready_for_flight(struct mosquitto_msg_data *, int);
extern _Bool db__ready_for_queue(struct mosquitto *, int, struct mosquitto_msg_data *);
extern void do_disconnect(struct mosquitto *, int);
extern int drop_privileges(struct mosquitto__config * config);
extern char * fgets_extending(char * *, int *, FILE *);
extern int handle__auth(struct mosquitto *);
extern int handle__connack(struct mosquitto *);
extern int handle__connect(struct mosquitto *);
extern int handle__disconnect(struct mosquitto *);
extern int handle__packet(struct mosquitto * context);
extern int handle__pingreq(struct mosquitto *);
extern int handle__pingresp(struct mosquitto *);
extern int handle__pubackcomp(struct mosquitto *, const char *);
extern int handle__publish(struct mosquitto *);
extern int handle__pubrec(struct mosquitto *);
extern int handle__pubrel(struct mosquitto *);
extern int handle__suback(struct mosquitto *);
extern int handle__subscribe(struct mosquitto *);
extern int handle__unsuback(struct mosquitto *);
extern int handle__unsubscribe(struct mosquitto *);
extern void handle_sighup(int signal);
extern void handle_sigint(int signal);
extern void handle_sigusr1(int signal);
extern void handle_sigusr2(int signal);
extern int keepalive__add(struct mosquitto * context);
extern void keepalive__check(void);
extern int keepalive__remove(struct mosquitto * context);
extern void keepalive__remove_all(void);
extern int keepalive__update(struct mosquitto *);
extern void listener__set_defaults(struct mosquitto__listener * listener);
extern void listeners__reload_all_certificates(void);
extern int log__close(struct mosquitto__config *);
extern int log__init(struct mosquitto__config *);
extern void log__internal(const char * fmt, ...);
extern int log__printf(struct mosquitto *, unsigned int, const char *, ...);
extern int main(int argc, char * * argv);
extern void memory__set_limit(size_t lim);
extern char * misc__trimblanks(char *);
extern void * mosquitto__calloc(size_t, size_t);
extern int mosquitto__check_keepalive(struct mosquitto * mosq);
extern FILE * mosquitto__fopen(const char *, const char *, _Bool);
extern void mosquitto__free(void *);
extern enum mosquitto_client_state mosquitto__get_state(struct mosquitto * mosq);
extern void * mosquitto__malloc(size_t);
extern uint16_t mosquitto__mid_generate(struct mosquitto * mosq);
extern void * mosquitto__realloc(void *, size_t);
extern int mosquitto__set_state(struct mosquitto * mosq, enum mosquitto_client_state state);
extern char * mosquitto__strdup(const char *);
extern int mosquitto_acl_check(struct mosquitto *, const char *, uint32_t, void *, uint8_t, _Bool, int);
extern int mosquitto_broker_publish(const char * clientid, const char * topic, int payloadlen, void * payload, int qos, _Bool retain, mosquitto_property * properties);
extern int mosquitto_broker_publish_copy(const char * clientid, const char * topic, int payloadlen, const void * payload, int qos, _Bool retain, mosquitto_property * properties);
extern int mosquitto_callback_register(mosquitto_plugin_id_t *, int, MOSQ_FUNC_generic_callback, const void *, void *);
extern int mosquitto_callback_unregister(mosquitto_plugin_id_t *, int, MOSQ_FUNC_generic_callback, const void *);
extern void * mosquitto_calloc(size_t nmemb, size_t size);
extern const char * mosquitto_client_address(const struct mosquitto * client);
extern void * mosquitto_client_certificate(const struct mosquitto * client);
extern _Bool mosquitto_client_clean_session(const struct mosquitto * client);
extern const char * mosquitto_client_id(const struct mosquitto * client);
extern int mosquitto_client_keepalive(const struct mosquitto * client);
extern int mosquitto_client_protocol(const struct mosquitto * client);
extern int mosquitto_client_protocol_version(const struct mosquitto * client);
extern int mosquitto_client_sub_count(const struct mosquitto * client);
extern const char * mosquitto_client_username(const struct mosquitto *);
extern const char * mosquitto_connack_string(int connack_code);
extern void mosquitto_free(void *);
extern int mosquitto_kick_client_by_clientid(const char * clientid, _Bool with_will);
extern int mosquitto_kick_client_by_username(const char * username, _Bool with_will);
extern void mosquitto_log_printf(int level, const char * fmt, ...);
extern int mosquitto_log_vprintf(int level, const char * fmt, va_list va);
extern int mosquitto_main_loop(struct mosquitto__listener_sock *, int);
extern void * mosquitto_malloc(size_t);
extern int mosquitto_property_add_binary(mosquitto_property * *, int, const void *, uint16_t);
extern int mosquitto_property_add_byte(mosquitto_property * *, int, uint8_t);
extern int mosquitto_property_add_int16(mosquitto_property * *, int, uint16_t);
extern int mosquitto_property_add_int32(mosquitto_property * *, int, uint32_t);
extern int mosquitto_property_add_string(mosquitto_property * *, int, const char *);
extern int mosquitto_property_add_string_pair(mosquitto_property * * proplist, int identifier, const char * name, const char * value);
extern int mosquitto_property_add_varint(mosquitto_property * *, int, uint32_t);
extern int mosquitto_property_check_all(int command, const mosquitto_property * properties);
extern int mosquitto_property_check_command(int, int);
extern int mosquitto_property_copy_all(mosquitto_property * *, const mosquitto_property *);
extern void mosquitto_property_free_all(mosquitto_property * *);
extern int mosquitto_property_identifier(const mosquitto_property * property);
extern const char * mosquitto_property_identifier_to_string(int identifier);
extern const mosquitto_property * mosquitto_property_next(const mosquitto_property * proplist);
extern const mosquitto_property * mosquitto_property_read_binary(const mosquitto_property * proplist, int identifier, void * * value, uint16_t * len, _Bool skip_first);
extern const mosquitto_property * mosquitto_property_read_byte(const mosquitto_property * proplist, int identifier, uint8_t * value, _Bool skip_first);
extern const mosquitto_property * mosquitto_property_read_int16(const mosquitto_property *, int, uint16_t *, _Bool);
extern const mosquitto_property * mosquitto_property_read_int32(const mosquitto_property * proplist, int identifier, uint32_t * value, _Bool skip_first);
extern const mosquitto_property * mosquitto_property_read_string(const mosquitto_property * proplist, int identifier, char * * value, _Bool skip_first);
extern const mosquitto_property * mosquitto_property_read_string_pair(const mosquitto_property * proplist, int identifier, char * * name, char * * value, _Bool skip_first);
extern const mosquitto_property * mosquitto_property_read_varint(const mosquitto_property * proplist, int identifier, uint32_t * value, _Bool skip_first);
extern int mosquitto_psk_key_get(struct mosquitto * context, const char * hint, const char * identity, char * key, int max_key_len);
extern int mosquitto_psk_key_get_default(struct mosquitto * context, const char * hint, const char * identity, char * key, int max_key_len);
extern int mosquitto_pub_topic_check(const char *);
extern int mosquitto_pub_topic_check2(const char * str, size_t len);
extern void * mosquitto_realloc(void * ptr, size_t size);
extern const char * mosquitto_reason_string(int reason_code);
extern int mosquitto_security_apply(void);
extern int mosquitto_security_apply_default(void);
extern int mosquitto_security_auth_continue(struct mosquitto * context, const void * data_in, uint16_t data_in_len, void * * data_out, uint16_t * data_out_len);
extern int mosquitto_security_auth_start(struct mosquitto * context, _Bool reauth, const void * data_in, uint16_t data_in_len, void * * data_out, uint16_t * data_out_len);
extern int mosquitto_security_cleanup(_Bool reload);
extern int mosquitto_security_cleanup_default(_Bool reload);
extern int mosquitto_security_init(_Bool reload);
extern int mosquitto_security_init_default(_Bool reload);
extern int mosquitto_security_module_cleanup(void);
extern int mosquitto_security_module_init(void);
extern int mosquitto_set_username(struct mosquitto * client, const char * username);
extern char * mosquitto_strdup(const char * s);
extern const char * mosquitto_strerror(int mosq_errno);
extern int mosquitto_string_to_command(const char * str, int * cmd);
extern int mosquitto_string_to_property_info(const char * propname, int * identifier, int * type);
extern int mosquitto_sub_topic_check(const char * str);
extern int mosquitto_sub_topic_check2(const char * str, size_t len);
extern time_t mosquitto_time(void);
extern int mosquitto_topic_matches_sub(const char * sub, const char * topic, _Bool * result);
extern int mosquitto_topic_matches_sub2(const char * sub, size_t sublen, const char * topic, size_t topiclen, _Bool * result);
extern int mosquitto_unpwd_check(struct mosquitto *);
extern int mosquitto_validate_utf8(const char *, int);
extern int mux__add_in(struct mosquitto *);
extern int mux__add_out(struct mosquitto *);
extern int mux__cleanup(void);
extern int mux__delete(struct mosquitto * context);
extern int mux__handle(struct mosquitto__listener_sock * listensock, int listensock_count);
extern int mux__init(struct mosquitto__listener_sock * listensock, int listensock_count);
extern int mux__remove_out(struct mosquitto *);
extern int mux_epoll__add_in(struct mosquitto * context);
extern int mux_epoll__add_out(struct mosquitto * context);
extern int mux_epoll__cleanup(void);
extern int mux_epoll__delete(struct mosquitto * context);
extern int mux_epoll__handle(void);
extern int mux_epoll__init(struct mosquitto__listener_sock * listensock, int listensock_count);
extern int mux_epoll__remove_out(struct mosquitto * context);
extern void net__broker_cleanup(void);
extern void net__broker_init(void);
extern void net__cleanup(void);
extern int net__init(void);
extern int net__load_certificates(struct mosquitto__listener * listener);
extern ssize_t net__read(struct mosquitto *, void *, size_t);
extern struct mosquitto * net__socket_accept(struct mosquitto__listener_sock * listensock);
extern int net__socket_close(struct mosquitto *);
extern int net__socket_connect(struct mosquitto * mosq, const char * host, uint16_t port, const char * bind_address, _Bool blocking);
extern int net__socket_connect_step3(struct mosquitto * mosq, const char * host);
extern int net__socket_get_address(mosq_sock_t sock, char * buf, size_t len, uint16_t * remote_port);
extern int net__socket_listen(struct mosquitto__listener * listener);
extern int net__socket_nonblock(mosq_sock_t * sock);
extern int net__tls_load_verify(struct mosquitto__listener * listener);
extern int net__try_connect(const char * host, uint16_t port, mosq_sock_t * sock, const char * bind_address, _Bool blocking);
extern ssize_t net__write(struct mosquitto *, const void *, size_t);
extern int packet__alloc(struct mosquitto__packet *);
extern int packet__check_oversize(struct mosquitto *, uint32_t);
extern void packet__cleanup(struct mosquitto__packet * packet);
extern void packet__cleanup_all(struct mosquitto * mosq);
extern void packet__cleanup_all_no_locks(struct mosquitto * mosq);
extern int packet__queue(struct mosquitto *, struct mosquitto__packet *);
extern int packet__read(struct mosquitto * mosq);
extern int packet__read_binary(struct mosquitto__packet *, uint8_t * *, uint16_t *);
extern int packet__read_byte(struct mosquitto__packet *, uint8_t *);
extern int packet__read_bytes(struct mosquitto__packet * packet, void * bytes, uint32_t count);
extern int packet__read_string(struct mosquitto__packet *, char * *, uint16_t *);
extern int packet__read_uint16(struct mosquitto__packet *, uint16_t *);
extern int packet__read_uint32(struct mosquitto__packet *, uint32_t *);
extern int packet__read_varint(struct mosquitto__packet *, uint32_t *, uint8_t *);
extern unsigned int packet__varint_bytes(uint32_t);
extern int packet__write(struct mosquitto * mosq);
extern void packet__write_byte(struct mosquitto__packet *, uint8_t);
extern void packet__write_bytes(struct mosquitto__packet *, const void *, uint32_t);
extern void packet__write_string(struct mosquitto__packet *, const char *, uint16_t);
extern void packet__write_uint16(struct mosquitto__packet *, uint16_t);
extern void packet__write_uint32(struct mosquitto__packet *, uint32_t);
extern int packet__write_varint(struct mosquitto__packet *, uint32_t);
extern int persist__backup(_Bool shutdown);
extern int persist__chunk_cfg_read_v234(FILE *, struct PF_cfg *);
extern int persist__chunk_cfg_read_v56(FILE *, struct PF_cfg *);
extern int persist__chunk_cfg_write_v6(FILE *, struct PF_cfg *);
extern int persist__chunk_client_msg_read_v234(FILE *, struct P_client_msg *);
extern int persist__chunk_client_msg_read_v56(FILE *, struct P_client_msg *, uint32_t);
extern int persist__chunk_client_msg_write_v6(FILE *, struct P_client_msg *);
extern int persist__chunk_client_read_v234(FILE *, struct P_client *, uint32_t);
extern int persist__chunk_client_read_v56(FILE *, struct P_client *, uint32_t);
extern int persist__chunk_client_write_v6(FILE *, struct P_client *);
extern int persist__chunk_header_read(FILE * db_fptr, uint32_t * chunk, uint32_t * length);
extern int persist__chunk_header_read_v234(FILE *, uint32_t *, uint32_t *);
extern int persist__chunk_header_read_v56(FILE *, uint32_t *, uint32_t *);
extern int persist__chunk_message_store_write_v6(FILE *, struct P_msg_store *);
extern int persist__chunk_msg_store_read_v234(FILE *, struct P_msg_store *, uint32_t);
extern int persist__chunk_msg_store_read_v56(FILE *, struct P_msg_store *, uint32_t);
extern int persist__chunk_retain_read_v234(FILE *, struct P_retain *);
extern int persist__chunk_retain_read_v56(FILE *, struct P_retain *);
extern int persist__chunk_retain_write_v6(FILE *, struct P_retain *);
extern int persist__chunk_sub_read_v234(FILE *, struct P_sub *);
extern int persist__chunk_sub_read_v56(FILE *, struct P_sub *);
extern int persist__chunk_sub_write_v6(FILE *, struct P_sub *);
extern int persist__read_string(FILE * db_fptr, char * * str);
extern int persist__read_string_len(FILE * db_fptr, char * * str, uint16_t len);
extern int persist__restore(void);
extern void plugin__handle_disconnect(struct mosquitto * context, int reason);
extern int plugin__handle_message(struct mosquitto * context, struct mosquitto_msg_store * stored);
extern void plugin__handle_tick(void);
extern int plugin__load_v5(struct mosquitto__listener *, struct mosquitto__auth_plugin *, struct mosquitto_opt *, int, void *);
extern void property__free(mosquitto_property * * property);
extern unsigned int property__get_length(const mosquitto_property * property);
extern unsigned int property__get_length_all(const mosquitto_property *);
extern const mosquitto_property * property__get_property(const mosquitto_property * proplist, int identifier, _Bool skip_first);
extern unsigned int property__get_remaining_length(const mosquitto_property *);
extern int property__process_connect(struct mosquitto * context, mosquitto_property * * props);
extern int property__process_disconnect(struct mosquitto * context, mosquitto_property * * props);
extern int property__process_will(struct mosquitto * context, struct mosquitto_message_all * msg, mosquitto_property * * props);
extern int property__read(struct mosquitto__packet * packet, uint32_t * len, mosquitto_property * property);
extern int property__read_all(int command, struct mosquitto__packet * packet, mosquitto_property * * properties);
extern int property__write(struct mosquitto__packet * packet, const mosquitto_property * property);
extern int property__write_all(struct mosquitto__packet *, const mosquitto_property *, _Bool);
extern int pw__memcmp_const(const void * a, const void * b, size_t len);
extern void retain__clean(struct mosquitto__retainhier * * retainhier);
extern int retain__init(void);
extern int retain__queue(struct mosquitto * context, const char * sub, uint8_t sub_qos, uint32_t subscription_identifier);
extern int retain__store(const char *, struct mosquitto_msg_store *, char * *);
extern int send__auth(struct mosquitto * context, uint8_t reason_code, const void * auth_data, uint16_t auth_data_len);
extern int send__command_with_mid(struct mosquitto * mosq, uint8_t command, uint16_t mid, _Bool dup, uint8_t reason_code, const mosquitto_property * properties);
extern int send__connack(struct mosquitto * context, uint8_t ack, uint8_t reason_code, const mosquitto_property * properties);
extern int send__connect(struct mosquitto * mosq, uint16_t keepalive, _Bool clean_session, const mosquitto_property * properties);
extern int send__disconnect(struct mosquitto * mosq, uint8_t reason_code, const mosquitto_property * properties);
extern int send__pingreq(struct mosquitto *);
extern int send__pingresp(struct mosquitto * mosq);
extern int send__puback(struct mosquitto * mosq, uint16_t mid, uint8_t reason_code, const mosquitto_property * properties);
extern int send__pubcomp(struct mosquitto * mosq, uint16_t mid, const mosquitto_property * properties);
extern int send__publish(struct mosquitto * mosq, uint16_t mid, const char * topic, uint32_t payloadlen, const void * payload, uint8_t qos, _Bool retain, _Bool dup, const mosquitto_property * cmsg_props, const mosquitto_property * store_props, uint32_t expiry_interval);
extern int send__pubrec(struct mosquitto * mosq, uint16_t mid, uint8_t reason_code, const mosquitto_property * properties);
extern int send__pubrel(struct mosquitto * mosq, uint16_t mid, const mosquitto_property * properties);
extern int send__real_publish(struct mosquitto * mosq, uint16_t mid, const char * topic, uint32_t payloadlen, const void * payload, uint8_t qos, _Bool retain, _Bool dup, const mosquitto_property * cmsg_props, const mosquitto_property * store_props, uint32_t expiry_interval);
extern int send__simple_command(struct mosquitto * mosq, uint8_t command);
extern int send__suback(struct mosquitto * context, uint16_t mid, uint32_t payloadlen, const void * payload);
extern int send__subscribe(struct mosquitto * mosq, int * mid, int topic_count, const char * * topic, int topic_qos, const mosquitto_property * properties);
extern int send__unsuback(struct mosquitto * mosq, uint16_t mid, int reason_code_count, uint8_t * reason_codes, const mosquitto_property * properties);
extern int send__unsubscribe(struct mosquitto * mosq, int * mid, int topic_count, const char * * topic, const mosquitto_property * properties);
extern int session_expiry__add(struct mosquitto * context);
extern void session_expiry__check(void);
extern void session_expiry__remove(struct mosquitto * context);
extern void session_expiry__remove_all(void);
extern int sub__add(struct mosquitto * context, const char * sub, uint8_t qos, uint32_t identifier, int options, struct mosquitto__subhier * * root);
extern struct mosquitto__subhier * sub__add_hier_entry(struct mosquitto__subhier * parent, struct mosquitto__subhier * * sibling, const char * topic, uint16_t len);
extern int sub__clean_session(struct mosquitto * context);
extern int sub__messages_queue(const char * source_id, const char * topic, uint8_t qos, int retain, struct mosquitto_msg_store * * stored);
extern int sub__remove(struct mosquitto * context, const char * sub, struct mosquitto__subhier * root, uint8_t * reason);
extern int sub__topic_tokenise(const char * subtopic, char * * local_sub, char * * * topics, const char * * sharename);
extern void sub__tree_print(struct mosquitto__subhier * root, int level);
extern void sys_tree__init(void);
extern void sys_tree__update(int interval, time_t start_time);
extern void unpwd__free_item(struct mosquitto__unpwd * * unpwd, struct mosquitto__unpwd * item);
extern void util__decrement_receive_quota(struct mosquitto * mosq);
extern void util__decrement_send_quota(struct mosquitto * mosq);
extern void util__increment_receive_quota(struct mosquitto * mosq);
extern void util__increment_send_quota(struct mosquitto * mosq);
extern int util__random_bytes(void * bytes, int count);
extern int will__clear(struct mosquitto * mosq);
extern int will__set(struct mosquitto * mosq, const char * topic, int payloadlen, const void * payload, int qos, _Bool retain, mosquitto_property * properties);
extern int will_delay__add(struct mosquitto * context);
extern void will_delay__check(void);
extern void will_delay__remove(struct mosquitto * mosq);
extern void will_delay__send_all(void);

#ifdef __cplusplus
}
#endif

#endif /* MOSQUITTO_H */
