
// $destdir/u18.c        Machine generated C code

// $Id$

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cstdarg>
#include <ctime>
#include <csetjmp>
#include <exception>
#include "config.h"

#ifndef header_machine_h
#define header_machine_h 1
#include <cstdint>
#include <cinttypes>
#include <iostream>
#include <atomic>
using std::cout; 
using std::endl; 
using std::int32_t; 
using std::int64_t; 
using std::intptr_t;
using std::uint32_t;
using std::uint64_t;
using std::uintptr_t;
using std::size_t;
using std::string; 
 
using std::atomic; 
 
 
#ifndef DEBUG
#ifndef NDEBUG
#define NDEBUG 1
#endif 
#endif 
#if defined HAVE_COMPLEX_H && \
 defined HAVE_COMPLEX_DOUBLE && \
 defined HAVE_CSQRT
#define HAVE_COMPLEX 1
#endif 
#if defined HAVE_SIGNAL_H && defined HAVE_SETJMP_H && \
 defined HAVE_SIGSETJMP && defined HAVE_SIGLONGJMP && \
 defined HAVE_SIGACTION && defined HAVE_SIGALTSTACK
#define USE_SIGALTSTACK 1
#endif 
#if defined __has_cpp_attribute && __has_cpp_attribute(maybe_unused)
#define UNUSED_NAME [[maybe_unused]]
#elif defined __GNUC__
#define UNUSED_NAME [[gnu::unused]]
#else 
#define UNUSED_NAME
#endif 
#ifdef __cpp_inline_variables
#define INLINE_VAR inline
#else 
#define INLINE_VAR UNUSED_NAME static
#endif 
#ifndef __STDC_CONSTANT_MACROS
#define __STDC_CONSTANT_MACROS 1
#endif 
#ifndef __STDC_LIMIT_MACROS
#define __STDC_LIMIT_MACROS 1
#endif 
#ifndef __STDC_FORMAT_MACROS
#define __STDC_FORMAT_MACROS 1
#endif 
#ifndef __has_cpp_attribute
#define __has_cpp_attribute(name) 0
#endif 
#ifdef WIN32
#define __USE_MINGW_ANSI_STDIO 1
#include <winsock.h>
#include <windows.h>
#else 
#define unix_posix 1 
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/time.h>
#include <fcntl.h>
#define WSAGetLastError() errno 
#define WSACleanup() 
#define closesocket(a) close(a)
#define SOCKET int
#define SOCKET_ERROR (-1)
#ifndef INADDR_NONE
# define INADDR_NONE 0xffffffff
#endif 
#endif 
#include <cstdio>
#include <cstdlib>
#include <cstddef>
#include <cmath>
#include <cfloat>
#include <climits>
#include <cstring>
#include <cctype>
#include <cwctype>
#include <ctime>
#include <cstdarg>
#include <csetjmp>
#include <csignal>
#include <cerrno>
#include <iomanip>
#include <exception>
#include <cassert>
#include <map>
#include <unordered_map>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <random>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <functional>
#ifdef HAVE_SYS_TIME_H
#include <sys/time.h>
#endif 
#undef PACKAGE
#undef PACKAGE_NAME
#undef PACKAGE_STRING
#undef VERSION
#undef PACKAGE_VERSION
#undef PACKAGE_BUGREPORT
#undef PACKAGE_TARNAME
#undef PACKAGE_URL
#ifndef WITHOUT_FFI
#include <ffi.h>
#endif 
#undef PACKAGE
#undef PACKAGE_NAME
#undef PACKAGE_STRING
#undef VERSION
#undef PACKAGE_VERSION
#undef PACKAGE_BUGREPORT
#undef PACKAGE_TARNAME
#undef PACKAGE_URL
#ifndef EMBEDDED
extern "C"
{
#include "softfloat.h"
}
#endif 
#include "int128_t.h"
#if !defined EMBEDDED
#if ((defined HAVE_SOCKET && defined HAVE_SYS_SOCKET_H) || defined WIN32)
#define SOCKETS 1
#endif 
#endif 
#ifdef WIN32
# if defined WIN64 || defined __WIN64__
# define OPSYS "win64"
# define IMPNAME "win64"
# else 
# define OPSYS "win32"
# define IMPNAME "win32"
# endif 
#else 
# ifdef HOST_OS
# define OPSYS HOST_OS
# ifdef HOST_CPU
# define IMPNAME HOST_OS ":" HOST_CPU
# else
# define IMPNAME HOST_OS
# endif
# else 
# define OPSYS "Unknown"
# define IMPNAME "Generic"
# endif
#endif 
#ifdef SIGNED_SHIFTS_ARE_ARITHMETIC
inline int32_t ASR(int32_t a, int n)
{ if (n<0 || n>=8*static_cast<int>(sizeof(int32_t))) n=0;
 return a >> n;
}
inline int64_t ASR(int64_t a, int n)
{ if (n<0 || n>=8*static_cast<int>(sizeof(int64_t))) n=0;
 return a >> n;
}
inline int128_t ASR(int128_t a, int n)
{ if (n<0 || n>=8*static_cast<int>(sizeof(int128_t))) n=0;
 return a >> n;
}
#else 
inline int32_t ASR(int32_t a, int n)
{ if (n<0 || n>=8*static_cast<int>(sizeof(int32_t))) n=0;
 uint32_t r = (static_cast<uint32_t>(a)) >> n;
 uint32_t signbit = (static_cast<uint32_t>(a)) >>
 (8*sizeof(uint32_t)-1);
 if (n != 0) r |= ((-signbit) << (8*sizeof(uint32_t) - n));
 return static_cast<int32_t>(r);
}
inline int64_t ASR(int64_t a, int n)
{ if (n<0 || n>=8*static_cast<int>(sizeof(int64_t))) n=0;
 uint64_t r = (static_cast<uint64_t>(a)) >> n;
 uint64_t signbit = (static_cast<uint64_t>(a)) >>
 (8*sizeof(uint64_t)-1);
 if (n != 0) r |= ((-signbit) << (8*sizeof(uint64_t) - n));
 return static_cast<int64_t>(r);
}
inline int128_t ASR(int128_t a, int n)
{ if (n<0 || n>=8*static_cast<int>(sizeof(int128_t))) n=0;
 uint128_t r = (static_cast<uint128_t>(a)) >> n;
 uint64_t signbit = (static_cast<uint128_t>(a)) >>
 (8*sizeof(uint128_t)-1);
 if (n != 0) r |= ((-signbit) << (8*sizeof(uint128_t) - n));
 return static_cast<int128_t>(r);
}
#endif 
inline int32_t ASL(int32_t a, int n)
{ if (n < 0 || n>=8*static_cast<int>(sizeof(uint32_t))) n = 0;
 return static_cast<int32_t>((static_cast<uint32_t>
 (a)) << n);
}
inline int64_t ASL(int64_t a, int n)
{ if (n < 0 || n>=8*static_cast<int>(sizeof(uint64_t))) n = 0;
 return static_cast<int64_t>((static_cast<uint64_t>
 (a)) << n);
}
inline uint64_t ASL(uint64_t a, int n)
{ if (n < 0 || n>=8*static_cast<int>(sizeof(uint64_t))) n = 0;
 return a << n;
}
INLINE_VAR const uintptr_t uptr_1 = static_cast<uintptr_t>(1);
INLINE_VAR const uint64_t u64_1 = static_cast<uint64_t>(1);
#ifdef MAXALING4
inline void *aligned_malloc(size_t n)
{ void *p = reinterpret_cast<void *>(std)::malloc(n + 32);
 if (p == nullptr) return p;
 void *r = reinterpret_cast<void *>(((reinterpret_cast<uintptr_t>
 (p) + 15) & -static_cast<uint64_t>(16)) + 16);
 reinterpret_cast<void *>(reinterpret_cast<uintptr_t>
 (r) - 16) = p;
 return r;
}
inline void aligned_free(void *p)
{ if (p == nullptr) return;
 std::free(*reinterpret_cast<void *>(reinterpret_cast<uintptr_t>
 (p) - 16));
}
#else 
inline void *aligned_malloc(size_t n)
{ return reinterpret_cast<void *>(std::malloc(n));
}
inline void aligned_free(void *p)
{ std::free(p);
}
#endif 
#endif 
#ifndef header_fwin_h
#define header_fwin_h 1
#include <cstdio>
#include <cstdarg>
#include <cstdlib>
#include <csignal>
#include <atomic>
using std::atomic;
#ifdef DEBUG
extern void fwin_write_log(const char *s, ...);
#define FWIN_LOG(...) fwin_write_log(__VA_ARGS__)
#else
#define FWIN_LOG(...) ((void)0)
#endif
typedef int fwin_entrypoint(int argc, const char *argv[]);
extern int fwin_startup(int argc, const char *argv[],
 fwin_entrypoint *fwin_main);
extern const char *fullProgramName;
extern const char *programName;
extern const char *programDir;
#define FWIN_WITH_TERMED 1
#define FWIN_IN_WINDOW 2
extern int fwin_windowmode();
extern void fwin_exit(int return_code);
extern bool fwin_pause_at_end;
extern void fwin_minimize(void);
extern void fwin_restore(void);
extern void fwin_putchar(int c);
extern void fwin_puts(const char *s);
extern void fwin_showmath(const char *s);
extern void fwin_printf(const char *fmt, ...);
extern void fwin_vfprintf(const char *fmt, std::va_list a);
extern int fwin_linelength;
extern void fwin_ensure_screen(void);
extern int fwin_getchar(void);
extern atomic<bool> mustQuit;
#define MAX_PROMPT_LENGTH 80
extern void fwin_set_prompt(const char *s);
extern void fwin_clear_screen();
extern int fwin_screen_size();
typedef char *lookup_function(char *s, int ch);
extern void fwin_set_lookup(lookup_function *f);
typedef void delay_callback_t(int);
extern void fwin_callback_on_delay(delay_callback_t *f);
#define QUERY_INTERRUPT 0
#define QUIET_INTERRUPT 1
#define NOISY_INTERRUPT 2
#define BREAK_LOOP 3
#define QUIT_PROGRAM 4
typedef void review_switch_settings_function();
extern void fwin_menus(char **modules, char **switches,
 review_switch_settings_function *f);
extern void fwin_refresh_switches(char **switches, char **packages);
extern void fwin_report_left(const char *msg);
extern void fwin_report_mid(const char *msg);
extern void fwin_report_right(const char *msg);
extern char about_box_title[40]; 
extern char about_box_description[40]; 
extern char about_box_rights_1[40]; 
extern char about_box_rights_2[40]; 
extern char about_box_rights_3[40]; 
extern char about_box_rights_4[40]; 
extern void fwin_set_help_file(const char *key, const char *path);
extern int plain_worker(int argc, const char *argv[],
 fwin_entrypoint *fwin_main);
extern delay_callback_t *delay_callback;
extern void fwin_putchar_overwrite(int c);
extern void fwin_move_cursor_vertically(int n);
extern void fwin_move_to_column(int column);
#define INPUT_HISTORY_SIZE 100
extern wchar_t *input_history[INPUT_HISTORY_SIZE];
extern int input_history_next;
extern void input_history_init();
extern void input_history_end();
extern void input_history_add(const wchar_t *s);
extern const wchar_t *input_history_get(int n);
#ifndef INT_VERSION
#define INT_VERSION(a,b,c) (((a*1000) + b)*1000 + c)
#endif
extern int find_program_directory(const char *argv0);
typedef struct date_and_type_
{ unsigned long int date;
 unsigned long int type;
} date_and_type;
extern void set_filedate(const char *name,
 unsigned long int datestamp,
 unsigned long int ftype);
extern void put_fileinfo(date_and_type *p, const char *name);
extern int windowed;
extern int windowed_worker(int argc, const char *argv[],
 fwin_entrypoint *fwin_main);
extern bool fwin_use_xft;
extern bool directoryp(char *f, const char *o, size_t n);
extern bool using_termed;
extern int fwin_plain_getchar();
extern bool texmacs_mode;
#ifdef HAVE_SIGACTION
extern void sigint_handler(int signo, siginfo_t *t, void *v);
#else 
extern void sigint_handler(int signo);
#endif 
extern int plain_worker(int argc, const char *argv[],
 fwin_entrypoint *fwin_main);
extern char fwin_prompt_string[MAX_PROMPT_LENGTH];
extern int get_current_directory(char *s, size_t n);
extern bool file_readable(char *filename, const char *old, size_t n);
extern bool file_writeable(char *filename, const char *old, size_t n);
extern bool file_executable(char *filename, const char *old,
 size_t n);
extern int rename_file(char *from_name, const char *from_old,
 size_t from_size,
 char *to_name, const char *to_old, size_t to_size);
extern int get_home_directory(char *b, size_t len);
extern int get_users_home_directory(char *b, size_t len);
extern int my_system(const char *s);
extern int truncate_file(std::FILE *f, long int where);
#endif 
 
#ifndef __INT128_T__
#define __INT128_T__
#include <cinttypes>
#include <cstdint>
#if !defined HAVE_UINT128_T && defined HAVE_UNSIGNED___INT128
typedef unsigned __int128 uint128_t;
#define HAVE_UINT128_T 1
#endif 
#if !defined HAVE_INT128_T && defined HAVE___INT128
typedef __int128 int128_t;
#define HAVE_INT128_T 1
#endif 
#if !defined HAVE_UINT128_T
class uint128_t;
#endif
#if !defined HAVE_INT128_T
class int128_t;
#endif
#ifdef HAVE_UINT128_T
namespace INT128
{
inline std::uint64_t getUPPER(uint128_t a)
{ return a >> 64;
}
inline std::uint64_t getLOWER(uint128_t a)
{ return static_cast<std::uint64_t>(a);
}
inline uint128_t PACK128(std::uint64_t high, std::uint64_t low)
{ return uint128_t(high)<<64 | low;
}
inline bool TOP_BIT(uint128_t a)
{ return (a >> 127) != 0;
}
inline uint128_t UNSIGNED_FLIP_TOP_BIT(uint128_t a)
{ return a ^ (uint128_t(1)<<127);
}
};
#else 
#include <cstdint>
#include <iostream>
#include <stdexcept>
#include <utility>
class uint128_t
{
private:
 std::uint64_t UPPER, LOWER;
public:
 
 uint128_t();
 uint128_t(const uint128_t & rhs);
 uint128_t(uint128_t && rhs);
 uint128_t(int128_t rhs);
 template <typename T> uint128_t(const T & rhs)
 : UPPER(0), LOWER(rhs)
 { static_assert(std::is_integral <T>::value,
 "Input argument type must be an integer.");
 }
 template <typename S, typename T> uint128_t(const S & upper_rhs,
 const T & lower_rhs)
 : UPPER(upper_rhs), LOWER(lower_rhs)
 { static_assert(std::is_integral <S>::value &&
 std::is_integral <T>::value
 , "Input argument types must be integers.");
 }
 
 
 uint128_t operator=(const uint128_t & rhs);
 uint128_t operator=(uint128_t && rhs);
 uint128_t operator=(int128_t rhs);
 template <typename T> uint128_t operator=(const T & rhs)
 { static_assert(std::is_integral <T>::value,
 "Input argument type must be an integer.");
 UPPER = 0;
 LOWER = rhs;
 return *this;
 }
 
 operator bool() const;
 operator std::uint8_t() const;
 operator std::uint16_t() const;
 operator std::uint32_t() const;
 operator std::uint64_t() const;
 operator std::int64_t() const;
 operator int128_t() const;
 
 uint128_t operator&(const uint128_t & rhs) const;
 template <typename T> uint128_t operator&(const T & rhs) const
 { return uint128_t(0, LOWER & static_cast<std::uint64_t>(rhs));
 }
 uint128_t & operator&=(const uint128_t & rhs);
 template <typename T> uint128_t & operator&=(const T & rhs)
 { UPPER = 0;
 LOWER &= rhs;
 return *this;
 }
 uint128_t operator|(const uint128_t & rhs) const;
 template <typename T> uint128_t operator|(const T & rhs) const
 { return uint128_t(UPPER, LOWER | static_cast<std::uint64_t>(rhs));
 }
 uint128_t & operator|=(const uint128_t & rhs);
 template <typename T> uint128_t & operator|=(const T & rhs)
 { LOWER |= static_cast<std::uint64_t>(rhs);
 return *this;
 }
 uint128_t operator^(const uint128_t & rhs) const;
 template <typename T> uint128_t operator^(const T & rhs) const
 { return uint128_t(UPPER, LOWER ^ static_cast<std::uint64_t>(rhs));
 }
 uint128_t & operator^=(const uint128_t & rhs);
 template <typename T> uint128_t & operator^=(const T & rhs)
 { LOWER ^= static_cast<std::uint64_t>(rhs);
 return *this;
 }
 uint128_t operator~() const;
 
 uint128_t operator<<(const uint128_t & rhs) const;
 template <typename T> uint128_t operator<<(const T & rhs) const
 { return *this << uint128_t(rhs);
 }
 uint128_t & operator<<=(const uint128_t & rhs);
 template <typename T> uint128_t & operator<<=(const T & rhs)
 { *this = *this << uint128_t(rhs);
 return *this;
 }
 uint128_t operator>>(const uint128_t & rhs) const;
 template <typename T> uint128_t operator>>(const T & rhs) const
 { return *this >> uint128_t(rhs);
 }
 uint128_t & operator>>=(const uint128_t & rhs);
 template <typename T> uint128_t & operator>>=(const T & rhs)
 { *this = *this >> uint128_t(rhs);
 return *this;
 }
 
 bool operator!() const;
 bool operator&&(const uint128_t & rhs) const;
 bool operator||(const uint128_t & rhs) const;
 template <typename T> bool operator&&(const T & rhs)
 { return static_cast <bool> (*this && rhs);
 }
 template <typename T> bool operator||(const T & rhs)
 { return static_cast <bool> (*this || rhs);
 }
 
 bool operator==(const uint128_t & rhs) const;
 template <typename T> bool operator==(const T & rhs) const
 { return (!UPPER && (LOWER == static_cast<std::uint64_t>(rhs)));
 }
 bool operator!=(const uint128_t & rhs) const;
 template <typename T> bool operator!=(const T & rhs) const
 { return (UPPER | (LOWER != static_cast<std::uint64_t>(rhs)));
 }
 bool operator>(const uint128_t & rhs) const;
 template <typename T> bool operator>(const T & rhs) const
 { return (UPPER || (LOWER > static_cast<std::uint64_t>(rhs)));
 }
 bool operator<(const uint128_t & rhs) const;
 template <typename T> bool operator<(const T & rhs) const
 { return (!UPPER)?(LOWER < static_cast<std::uint64_t>(rhs)):false;
 }
 bool operator>=(const uint128_t & rhs) const;
 template <typename T> bool operator>=(const T & rhs) const
 { return ((*this > rhs) | (*this == rhs));
 }
 bool operator<=(const uint128_t & rhs) const;
 template <typename T> bool operator<=(const T & rhs) const
 { return ((*this < rhs) | (*this == rhs));
 }
 
 uint128_t operator+(const uint128_t & rhs) const;
 template <typename T> uint128_t operator+(const T & rhs) const
 { return uint128_t(UPPER + ((LOWER + static_cast<std::uint64_t>(rhs)) <
 LOWER), LOWER + static_cast<std::uint64_t>(rhs));
 }
 uint128_t & operator+=(const uint128_t & rhs);
 template <typename T> uint128_t & operator+=(const T & rhs)
 { UPPER = UPPER + ((LOWER + rhs) < LOWER);
 LOWER = LOWER + rhs;
 return *this;
 }
 uint128_t operator-(const uint128_t & rhs) const;
 template <typename T> uint128_t operator-(const T & rhs) const
 { return uint128_t(static_cast<std::uint64_t>(
 UPPER - ((LOWER - rhs) > LOWER)),
 static_cast<std::uint64_t>(LOWER - rhs));
 }
 uint128_t & operator-=(const uint128_t & rhs);
 template <typename T> uint128_t & operator-=(const T & rhs)
 { *this = *this - rhs;
 return *this;
 }
 uint128_t operator*(const uint128_t & rhs) const;
 template <typename T> uint128_t operator*(const T & rhs) const
 { return *this * uint128_t(rhs);
 }
 uint128_t & operator*=(const uint128_t & rhs);
 template <typename T> uint128_t & operator*=(const T & rhs)
 { *this = *this * uint128_t(rhs);
 return *this;
 }
private:
 std::pair <uint128_t, uint128_t> divmod(const uint128_t & lhs,
 const uint128_t & rhs) const;
public:
 uint128_t operator/(const uint128_t & rhs) const;
 template <typename T> uint128_t operator/(const T & rhs) const
 { return *this / uint128_t(rhs);
 }
 uint128_t & operator/=(const uint128_t & rhs);
 template <typename T> uint128_t & operator/=(const T & rhs)
 { *this = *this / uint128_t(rhs);
 return *this;
 }
 uint128_t operator%(const uint128_t & rhs) const;
 template <typename T> uint128_t operator%(const T & rhs) const
 { return *this - (rhs * (*this / rhs));
 }
 uint128_t & operator%=(const uint128_t & rhs);
 template <typename T> uint128_t & operator%=(const T & rhs)
 { *this = *this % uint128_t(rhs);
 return *this;
 }
 
 uint128_t & operator++();
 uint128_t operator++(int);
 
 uint128_t & operator--();
 uint128_t operator--(int);
 
 uint128_t operator+() const;
 
 uint128_t operator-() const;
 
 const std::uint64_t & upper() const
 { return UPPER;
 }
 const std::uint64_t & lower() const
 { return LOWER;
 }
 
 std::uint8_t bits() const;
 
 std::string str(std::uint8_t base = 10,
 const unsigned int & len = 0) const;
};
namespace INT128
{
inline std::uint64_t getUPPER(uint128_t a)
{ return a.upper();
}
inline std::uint64_t getLOWER(uint128_t a)
{ return a.lower();
}
inline uint128_t PACK128(std::uint64_t high, std::uint64_t low)
{ return uint128_t(high, low);
}
inline bool TOP_BIT(uint128_t a)
{ return (getUPPER(a) >> 63) != 0;
}
inline uint128_t UNSIGNED_FLIP_TOP_BIT(uint128_t a)
{ return uint128_t(getUPPER(a) ^ static_cast<std::uint64_t>(1)<<63,
 getLOWER(a));
}
};
namespace std 
{
template <> struct is_arithmetic <uint128_t> : std::true_type {};
template <> struct is_integral <uint128_t> : std::true_type {};
template <> struct is_unsigned <uint128_t> : std::true_type {};
template <> struct is_signed <uint128_t> : std::false_type {};
};
template <typename T> uint128_t operator&(const T & lhs,
 const uint128_t & rhs)
{ return rhs & lhs;
}
template <typename T> T & operator&=(T & lhs, const uint128_t & rhs)
{ return lhs = static_cast <T> (rhs & lhs);
}
template <typename T> uint128_t operator|(const T & lhs,
 const uint128_t & rhs)
{ return rhs | lhs;
}
template <typename T> T & operator|=(T & lhs, const uint128_t & rhs)
{ return lhs = static_cast <T> (rhs | lhs);
}
template <typename T> uint128_t operator^(const T & lhs,
 const uint128_t & rhs)
{ return rhs ^ lhs;
}
template <typename T> T & operator^=(T & lhs, const uint128_t & rhs)
{ return lhs = static_cast <T> (rhs ^ lhs);
}
uint128_t operator<<(const bool & lhs, const uint128_t & rhs);
uint128_t operator<<(const std::uint8_t & lhs, const uint128_t & rhs);
uint128_t operator<<(const std::uint16_t & lhs, const uint128_t & rhs);
uint128_t operator<<(const std::uint32_t & lhs, const uint128_t & rhs);
uint128_t operator<<(const std::uint64_t & lhs, const uint128_t & rhs);
uint128_t operator<<(const std::int8_t & lhs, const uint128_t & rhs);
uint128_t operator<<(const std::int16_t & lhs, const uint128_t & rhs);
uint128_t operator<<(const std::int32_t & lhs, const uint128_t & rhs);
uint128_t operator<<(const std::int64_t & lhs, const uint128_t & rhs);
template <typename T> T & operator<<=(T & lhs, const uint128_t & rhs)
{ return lhs = static_cast <T> (uint128_t(lhs) << rhs);
}
uint128_t operator>>(const bool & lhs, const uint128_t & rhs);
uint128_t operator>>(const std::uint8_t & lhs, const uint128_t & rhs);
uint128_t operator>>(const std::uint16_t & lhs, const uint128_t & rhs);
uint128_t operator>>(const std::uint32_t & lhs, const uint128_t & rhs);
uint128_t operator>>(const std::uint64_t & lhs, const uint128_t & rhs);
uint128_t operator>>(const std::int8_t & lhs, const uint128_t & rhs);
uint128_t operator>>(const std::int16_t & lhs, const uint128_t & rhs);
uint128_t operator>>(const std::int32_t & lhs, const uint128_t & rhs);
uint128_t operator>>(const std::int64_t & lhs, const uint128_t & rhs);
template <typename T> T & operator>>=(T & lhs, const uint128_t & rhs)
{ return lhs = static_cast <T> (uint128_t(lhs) >> rhs);
}
template <typename T> bool operator==(const T & lhs, const uint128_t & rhs)
{ return (!rhs.upper() &&
 (static_cast<std::uint64_t>(lhs) == rhs.lower()));
}
template <typename T> bool operator!=(const T & lhs, const uint128_t & rhs)
{ return (rhs.upper() ||
 (static_cast<std::uint64_t>(lhs) != rhs.lower()));
}
template <typename T> bool operator>(const T & lhs, const uint128_t & rhs)
{ return (!rhs.upper()) &&
 (static_cast<std::uint64_t>(lhs) > rhs.lower());
}
template <typename T> bool operator<(const T & lhs, const uint128_t & rhs)
{ if (rhs.upper())
 { return true;
 }
 return (static_cast<std::uint64_t>(lhs) < rhs.lower());
}
template <typename T> bool operator>=(const T & lhs, const uint128_t & rhs)
{ if (rhs.upper())
 { return false;
 }
 return (static_cast<std::uint64_t>(lhs) >= rhs.lower());
}
template <typename T> bool operator<=(const T & lhs, const uint128_t & rhs)
{ if (rhs.upper())
 { return true;
 }
 return (static_cast<std::uint64_t>(lhs) <= rhs.lower());
}
template <typename T> uint128_t operator+(const T & lhs, const uint128_t & rhs)
{ return rhs + lhs;
}
template <typename T> T & operator+=(T & lhs, const uint128_t & rhs)
{ return lhs = static_cast <T> (rhs + lhs);
}
template <typename T> uint128_t operator-(const T & lhs, const uint128_t & rhs)
{ return -(rhs - lhs);
}
template <typename T> T & operator-=(T & lhs, const uint128_t & rhs)
{ return lhs = static_cast <T> (-(rhs - lhs));
}
template <typename T> uint128_t operator*(const T & lhs, const uint128_t & rhs)
{ return rhs * lhs;
}
template <typename T> T & operator*=(T & lhs, const uint128_t & rhs)
{ return lhs = static_cast <T> (rhs * lhs);
}
template <typename T> uint128_t operator/(const T & lhs, const uint128_t & rhs)
{ return uint128_t(lhs) / rhs;
}
template <typename T> T & operator/=(T & lhs, const uint128_t & rhs)
{ return lhs = static_cast <T> (uint128_t(lhs) / rhs);
}
template <typename T> uint128_t operator%(const T & lhs, const uint128_t & rhs)
{ return uint128_t(lhs) % rhs;
}
template <typename T> T & operator%=(T & lhs, const uint128_t & rhs)
{ return lhs = static_cast <T> (uint128_t(lhs) % rhs);
}
std::ostream & operator<<(std::ostream & stream, const uint128_t & rhs);
inline uint128_t::uint128_t()
 : UPPER(0), LOWER(0)
{}
inline uint128_t::uint128_t(const uint128_t & rhs)
 : UPPER(rhs.UPPER), LOWER(rhs.LOWER)
{}
inline uint128_t::uint128_t(uint128_t && rhs)
 : UPPER(std::move(rhs.UPPER)), LOWER(std::move(rhs.LOWER))
{ if (this != &rhs)
 { rhs.UPPER = 0;
 rhs.LOWER = 0;
 }
}
inline uint128_t uint128_t::operator=(const uint128_t & rhs)
{ UPPER = rhs.UPPER;
 LOWER = rhs.LOWER;
 return *this;
}
inline uint128_t uint128_t::operator=(uint128_t && rhs)
{ if (this != &rhs)
 { UPPER = std::move(rhs.UPPER);
 LOWER = std::move(rhs.LOWER);
 rhs.UPPER = 0;
 rhs.LOWER = 0;
 }
 return *this;
}
inline uint128_t::operator bool() const
{ return (bool) (UPPER | LOWER);
}
inline uint128_t::operator std::uint8_t() const
{ return static_cast<std::uint8_t>(LOWER);
}
inline uint128_t::operator std::uint16_t() const
{ return static_cast<std::uint16_t>(LOWER);
}
inline uint128_t::operator std::uint32_t() const
{ return (std::uint32_t) LOWER;
}
inline uint128_t::operator std::uint64_t() const
{ return (std::uint64_t) LOWER;
}
inline uint128_t::operator std::int64_t() const
{ return (std::int64_t) LOWER;
}
inline uint128_t uint128_t::operator&(const uint128_t & rhs) const
{ return uint128_t(UPPER & rhs.UPPER, LOWER & rhs.LOWER);
}
inline uint128_t & uint128_t::operator&=(const uint128_t & rhs)
{ UPPER &= rhs.UPPER;
 LOWER &= rhs.LOWER;
 return *this;
}
inline uint128_t uint128_t::operator|(const uint128_t & rhs) const
{ return uint128_t(UPPER | rhs.UPPER, LOWER | rhs.LOWER);
}
inline uint128_t & uint128_t::operator|=(const uint128_t & rhs)
{ UPPER |= rhs.UPPER;
 LOWER |= rhs.LOWER;
 return *this;
}
inline uint128_t uint128_t::operator^(const uint128_t & rhs) const
{ return uint128_t(UPPER ^ rhs.UPPER, LOWER ^ rhs.LOWER);
}
inline uint128_t & uint128_t::operator^=(const uint128_t & rhs)
{ UPPER ^= rhs.UPPER;
 LOWER ^= rhs.LOWER;
 return *this;
}
inline uint128_t uint128_t::operator~() const
{ return uint128_t(~UPPER, ~LOWER);
}
inline uint128_t uint128_t::operator<<(const uint128_t & rhs) const
{ const std::uint64_t shift = rhs.LOWER;
 if (((bool) rhs.UPPER) || (shift >= 128))
 { return uint128_t(0);
 }
 else if (shift == 64)
 { return uint128_t(LOWER, 0);
 }
 else if (shift == 0)
 { return *this;
 }
 else if (shift < 64)
 { return uint128_t((UPPER << shift) + (LOWER >> (64 - shift)),
 LOWER << shift);
 }
 else if ((128 > shift) && (shift > 64))
 { return uint128_t(LOWER << (shift - 64), 0);
 }
 else
 { return uint128_t(0);
 }
}
inline uint128_t & uint128_t::operator<<=(const uint128_t & rhs)
{ *this = *this << rhs;
 return *this;
}
inline uint128_t uint128_t::operator>>(const uint128_t & rhs) const
{ const std::uint64_t shift = rhs.LOWER;
 if (((bool) rhs.UPPER) || (shift >= 128))
 { return uint128_t(0);
 }
 else if (shift == 64)
 { return uint128_t(0, UPPER);
 }
 else if (shift == 0)
 { return *this;
 }
 else if (shift < 64)
 { return uint128_t(UPPER >> shift,
 (UPPER << (64 - shift)) + (LOWER >> shift));
 }
 else if ((128 > shift) && (shift > 64))
 { return uint128_t(0, (UPPER >> (shift - 64)));
 }
 else
 { return uint128_t(0);
 }
}
inline uint128_t & uint128_t::operator>>=(const uint128_t & rhs)
{ *this = *this >> rhs;
 return *this;
}
inline bool uint128_t::operator!() const
{ return !(bool) (UPPER | LOWER);
}
inline bool uint128_t::operator&&(const uint128_t & rhs) const
{ return ((bool) *this && rhs);
}
inline bool uint128_t::operator||(const uint128_t & rhs) const
{ return ((bool) *this || rhs);
}
inline bool uint128_t::operator==(const uint128_t & rhs) const
{ return ((UPPER == rhs.UPPER) && (LOWER == rhs.LOWER));
}
inline bool uint128_t::operator!=(const uint128_t & rhs) const
{ return ((UPPER != rhs.UPPER) | (LOWER != rhs.LOWER));
}
inline bool uint128_t::operator>(const uint128_t & rhs) const
{ if (UPPER == rhs.UPPER)
 { return (LOWER > rhs.LOWER);
 }
 return (UPPER > rhs.UPPER);
}
inline bool uint128_t::operator<(const uint128_t & rhs) const
{ if (UPPER == rhs.UPPER)
 { return (LOWER < rhs.LOWER);
 }
 return (UPPER < rhs.UPPER);
}
inline bool uint128_t::operator>=(const uint128_t & rhs) const
{ return ((*this > rhs) | (*this == rhs));
}
inline bool uint128_t::operator<=(const uint128_t & rhs) const
{ return ((*this < rhs) | (*this == rhs));
}
inline uint128_t uint128_t::operator+(const uint128_t & rhs) const
{ return uint128_t(UPPER + rhs.UPPER + ((LOWER + rhs.LOWER) <
 LOWER), LOWER + rhs.LOWER);
}
inline uint128_t & uint128_t::operator+=(const uint128_t & rhs)
{ UPPER += rhs.UPPER + ((LOWER + rhs.LOWER) < LOWER);
 LOWER += rhs.LOWER;
 return *this;
}
inline uint128_t uint128_t::operator-(const uint128_t & rhs) const
{ return uint128_t(UPPER - rhs.UPPER - ((LOWER - rhs.LOWER) >
 LOWER), LOWER - rhs.LOWER);
}
inline uint128_t & uint128_t::operator-=(const uint128_t & rhs)
{ *this = *this - rhs;
 return *this;
}
inline uint128_t uint128_t::operator*(const uint128_t & rhs) const
{ 
 std::uint64_t top[4] = {UPPER >> 32, UPPER & 0xffffffff, LOWER >> 32, LOWER & 0xffffffff};
 std::uint64_t bottom[4] = {rhs.UPPER >> 32, rhs.UPPER & 0xffffffff, rhs.LOWER >> 32, rhs.LOWER & 0xffffffff};
 std::uint64_t products[4][4];
 
 for(int y = 3; y > -1; y--)
 { for(int x = 3; x > -1; x--)
 { products[3 - x][y] = top[x] * bottom[y];
 }
 }
 
 std::uint64_t fourth32 = (products[0][3] & 0xffffffff);
 std::uint64_t third32 = (products[0][2] & 0xffffffff) +
 (products[0][3] >> 32);
 std::uint64_t second32 = (products[0][1] & 0xffffffff) +
 (products[0][2] >> 32);
 std::uint64_t first32 = (products[0][0] & 0xffffffff) +
 (products[0][1] >> 32);
 
 third32 += (products[1][3] & 0xffffffff);
 second32 += (products[1][2] & 0xffffffff) + (products[1][3] >> 32);
 first32 += (products[1][1] & 0xffffffff) + (products[1][2] >> 32);
 
 second32 += (products[2][3] & 0xffffffff);
 first32 += (products[2][2] & 0xffffffff) + (products[2][3] >> 32);
 
 first32 += (products[3][3] & 0xffffffff);
 
 third32 += fourth32 >> 32;
 second32 += third32 >> 32;
 first32 += second32 >> 32;
 
 fourth32 &= 0xffffffff;
 third32 &= 0xffffffff;
 second32 &= 0xffffffff;
 first32 &= 0xffffffff;
 
 return uint128_t((first32 << 32) | second32,
 (third32 << 32) | fourth32);
}
inline uint128_t & uint128_t::operator*=(const uint128_t & rhs)
{ *this = *this * rhs;
 return *this;
}
inline std::pair <uint128_t, uint128_t> uint128_t::divmod(
 const uint128_t & lhs, const uint128_t & rhs) const
{ 
 if (rhs == uint128_t(0))
 { throw std::domain_error("Error: division or modulus by 0");
 }
 else if (rhs == uint128_t(1))
 { return std::pair <uint128_t, uint128_t> (lhs, uint128_t(0));
 }
 else if (lhs == rhs)
 { return std::pair <uint128_t, uint128_t> (uint128_t(1), uint128_t(0));
 }
 else if ((lhs == uint128_t(0)) || (lhs < rhs))
 { return std::pair <uint128_t, uint128_t> (uint128_t(0), lhs);
 }
 std::pair <uint128_t, uint128_t> qr (uint128_t(0), uint128_t(0));
 for(std::uint8_t x = lhs.bits(); x > 0; x--)
 { qr.first <<= uint128_t(1);
 qr.second <<= uint128_t(1);
 if ((lhs >> (x - 1U)) & 1)
 { qr.second++;
 }
 if (qr.second >= rhs)
 { qr.second -= rhs;
 qr.first++;
 }
 }
 return qr;
}
inline uint128_t uint128_t::operator/(const uint128_t & rhs) const
{ return divmod(*this, rhs).first;
}
inline uint128_t & uint128_t::operator/=(const uint128_t & rhs)
{ *this = *this / rhs;
 return *this;
}
inline uint128_t uint128_t::operator%(const uint128_t & rhs) const
{ return divmod(*this, rhs).second;
}
inline uint128_t & uint128_t::operator%=(const uint128_t & rhs)
{ *this = *this % rhs;
 return *this;
}
inline uint128_t & uint128_t::operator++()
{ static const uint128_t uint128_1(1);
 return *this += uint128_1;
}
inline uint128_t uint128_t::operator++(int)
{ uint128_t temp(*this);
 ++*this;
 return temp;
}
inline uint128_t & uint128_t::operator--()
{ static const uint128_t uint128_1(1);
 return *this -= uint128_1;
}
inline uint128_t uint128_t::operator--(int)
{ uint128_t temp(*this);
 --*this;
 return temp;
}
inline uint128_t uint128_t::operator+() const
{ return *this;
}
inline uint128_t uint128_t::operator-() const
{ static const uint128_t uint128_1(1);
 return ~*this + uint128_1;
}
inline std::uint8_t uint128_t::bits() const
{ std::uint8_t out = 0;
 if (UPPER)
 { out = 64;
 std::uint64_t up = UPPER;
 while (up)
 { up >>= 1;
 out++;
 }
 }
 else
 { std::uint64_t low = LOWER;
 while (low)
 { low >>= 1;
 out++;
 }
 }
 return out;
}
inline std::string uint128_t::str(std::uint8_t base,
 const unsigned int & len) const
{ if ((base < 2) || (base > 16))
 { throw std::invalid_argument("Base must be in the range [2, 16]");
 }
 std::string out = "";
 if (!(*this))
 { out = "0";
 }
 else
 { std::pair <uint128_t, uint128_t> qr(*this, uint128_t(0));
 do
 { qr = divmod(qr.first, base);
 out = "0123456789abcdef"[static_cast<std::uint8_t>(qr.second)] + out;
 }
 while (qr.first);
 }
 if (out.size() < len)
 { out = std::string(len - out.size(), '0') + out;
 }
 return out;
}
inline uint128_t operator<<(const bool & lhs, const uint128_t & rhs)
{ return uint128_t(lhs) << rhs;
}
inline uint128_t operator<<(const std::uint8_t & lhs, const uint128_t & rhs)
{ return uint128_t(lhs) << rhs;
}
inline uint128_t operator<<(const std::uint16_t & lhs, const uint128_t & rhs)
{ return uint128_t(lhs) << rhs;
}
inline uint128_t operator<<(const std::uint32_t & lhs, const uint128_t & rhs)
{ return uint128_t(lhs) << rhs;
}
inline uint128_t operator<<(const std::uint64_t & lhs, const uint128_t & rhs)
{ return uint128_t(lhs) << rhs;
}
inline uint128_t operator<<(const std::int8_t & lhs, const uint128_t & rhs)
{ return uint128_t(lhs) << rhs;
}
inline uint128_t operator<<(const std::int16_t & lhs, const uint128_t & rhs)
{ return uint128_t(lhs) << rhs;
}
inline uint128_t operator<<(const std::int32_t & lhs, const uint128_t & rhs)
{ return uint128_t(lhs) << rhs;
}
inline uint128_t operator<<(const std::int64_t & lhs, const uint128_t & rhs)
{ return uint128_t(lhs) << rhs;
}
inline uint128_t operator>>(const bool & lhs, const uint128_t & rhs)
{ return uint128_t(lhs) >> rhs;
}
inline uint128_t operator>>(const std::uint8_t & lhs, const uint128_t & rhs)
{ return uint128_t(lhs) >> rhs;
}
inline uint128_t operator>>(const std::uint16_t & lhs, const uint128_t & rhs)
{ return uint128_t(lhs) >> rhs;
}
inline uint128_t operator>>(const std::uint32_t & lhs, const uint128_t & rhs)
{ return uint128_t(lhs) >> rhs;
}
inline uint128_t operator>>(const std::uint64_t & lhs, const uint128_t & rhs)
{ return uint128_t(lhs) >> rhs;
}
inline uint128_t operator>>(const std::int8_t & lhs, const uint128_t & rhs)
{ return uint128_t(lhs) >> rhs;
}
inline uint128_t operator>>(const std::int16_t & lhs, const uint128_t & rhs)
{ return uint128_t(lhs) >> rhs;
}
inline uint128_t operator>>(const std::int32_t & lhs, const uint128_t & rhs)
{ return uint128_t(lhs) >> rhs;
}
inline uint128_t operator>>(const std::int64_t & lhs, const uint128_t & rhs)
{ return uint128_t(lhs) >> rhs;
}
inline std::ostream & operator<<(std::ostream & stream,
 const uint128_t & rhs)
{ if (stream.flags() & stream.oct)
 { stream << rhs.str(8);
 }
 else if (stream.flags() & stream.dec)
 { stream << rhs.str(10);
 }
 else if (stream.flags() & stream.hex)
 { stream << rhs.str(16);
 }
 return stream;
}
#endif 
#ifdef HAVE_INT128_T
namespace INT128
{
inline std::uint64_t getLOWER(int128_t a)
{ return static_cast<std::uint64_t>(a);
}
inline std::int64_t getUPPER(int128_t a)
{ return static_cast<std::int64_t>((a - getLOWER(a)) /
/ static_cast<int128_t>(1)<<64);
}
inline int128_t PACK128(int64_t high, std::uint64_t low)
{ return static_cast<int128_t>(high)<<64 | low;
}
inline uint128_t UNSIGNED(int128_t a)
{ return PACK128(static_cast<std::uint64_t>(a>>64),
 static_cast<std::uint64_t>(a));
}
};
#else 
#include <cstdint>
#include <iostream>
#include <stdexcept>
#include <utility>
namespace INT128
{
inline uint128_t UNSIGNED(int128_t a);
};
class int128_t
{
private:
 std::int64_t UPPER;
 std::uint64_t LOWER;
public:
 
 int128_t()
 { UPPER = 0;
 LOWER = 0;
 }
 int128_t(const int128_t & rhs)
 { UPPER = rhs.UPPER;
 LOWER = rhs.LOWER;
 }
 int128_t(int128_t && rhs)
 { UPPER = rhs.UPPER;
 LOWER = rhs.LOWER;
 }
 int128_t(uint128_t v)
 { UPPER = static_cast<std::int64_t>(INT128::getUPPER(v));
 LOWER = INT128::getLOWER(v);
 }
 int128_t(const bool &rhs)
 { UPPER = 0;
 LOWER = rhs;
 }
 template <typename T> int128_t(const T & rhs)
 : UPPER(rhs < 0 ? -1 : 0), LOWER(rhs)
 { static_assert(std::is_integral <T>::value,
 "Input argument type must be an integer.");
 }
 template <typename S, typename T> int128_t(const S & upper_rhs,
 const T & lower_rhs)
 : UPPER(upper_rhs), LOWER(lower_rhs)
 { static_assert(std::is_integral <S>::value &&
 std::is_integral <T>::value
 , "Input argument types must be integers.");
 }
 std::int64_t getUPPER()
 { return UPPER;
 }
 std::uint64_t getLOWER()
 { return LOWER;
 }
 static uint128_t FLIP_TOP_BIT(int128_t a)
 { return INT128::UNSIGNED_FLIP_TOP_BIT(INT128::UNSIGNED(a));
 }
 
 
 int128_t operator=(const int128_t & rhs)
 { UPPER = rhs.UPPER;
 LOWER = rhs.LOWER;
 return *this;
 }
 int128_t operator=(int128_t && rhs)
 { UPPER = rhs.UPPER;
 LOWER = rhs.LOWER;
 return *this;
 }
 int128_t operator=(uint128_t rhs)
 { UPPER = static_cast<std::int64_t>(INT128::getUPPER(rhs));
 LOWER = INT128::getLOWER(rhs);
 return *this;
 }
 template <typename T> int128_t operator=(const T & rhs)
 { static_assert(std::is_integral <T>::value,
 "Input argument type must be an integer.");
 UPPER = rhs < 0 ? -1 : 0;
 LOWER = rhs;
 return *this;
 }
 
 operator bool() const
 { return (bool) (UPPER | LOWER);
 }
 
 operator std::int8_t() const
 { return static_cast<std::int8_t>(LOWER);
 }
 operator std::int16_t() const
 { return static_cast<std::int16_t>(LOWER);
 }
 operator std::int32_t() const
 { return (std::int32_t) LOWER;
 }
 operator std::int64_t() const
 { return (std::int64_t) LOWER;
 }
 operator std::uint8_t() const
 { return static_cast<std::uint8_t>(LOWER);
 }
 operator std::uint16_t() const
 { return static_cast<std::uint16_t>(LOWER);
 }
 operator std::uint32_t() const
 { return (std::uint32_t) LOWER;
 }
 operator std::uint64_t() const
 { return (std::uint64_t) LOWER;
 }
 operator uint128_t() const
 { return INT128::PACK128(static_cast<std::uint64_t>(UPPER), LOWER);
 }
 
 int128_t operator&(const int128_t & rhs) const
 { return int128_t(UPPER&rhs.UPPER, LOWER&rhs.LOWER);
 }
 template <typename T> int128_t operator&(const T & rhs) const
 { return int128_t(rhs >= 0 ? 0 : UPPER,
 LOWER & static_cast<std::uint64_t>(rhs));
 }
 int128_t & operator&=(const int128_t & rhs)
 { UPPER &= rhs.UPPER;
 LOWER &= rhs.LOWER;
 return *this;
 }
 template <typename T> int128_t & operator&=(const T & rhs)
 { if (rhs >= 0) UPPER = 0;
 LOWER &= rhs;
 return *this;
 }
 int128_t operator|(const int128_t & rhs) const
 { return int128_t(UPPER|rhs.UPPER, LOWER|rhs.LOWER);
 }
 template <typename T> int128_t operator|(const T & rhs) const
 { return int128_t(rhs < 0 ? -1 : UPPER,
 LOWER | static_cast<std::uint64_t>(rhs));
 }
 int128_t & operator|=(const int128_t & rhs)
 { UPPER |= rhs.UPPER;
 LOWER |= rhs.LOWER;
 return *this;
 }
 template <typename T> int128_t & operator|=(const T & rhs)
 { if (rhs < 0) UPPER = -1;
 LOWER |= static_cast<std::uint64_t>(rhs);
 return *this;
 }
 int128_t operator^(const int128_t & rhs) const;
 template <typename T> int128_t operator^(const T & rhs) const
 { return int128_t(rhs<0 ? ~UPPER : UPPER,
 LOWER ^ static_cast<std::uint64_t>(rhs));
 }
 int128_t & operator^=(const int128_t & rhs);
 template <typename T> int128_t & operator^=(const T & rhs)
 { if (rhs < 0) UPPER = ~UPPER;
 LOWER ^= static_cast<std::uint64_t>(rhs);
 return *this;
 }
 int128_t operator~() const
 { return int128_t(~INT128::UNSIGNED(*this));
 }
 
 int128_t operator<<(const int128_t & rhs) const;
 template <typename T> int128_t operator<<(const T & rhs) const
 { return *this << int128_t(rhs);
 }
 int128_t & operator<<=(const int128_t & rhs);
 template <typename T> int128_t & operator<<=(const T & rhs)
 { *this = *this << int128_t(rhs);
 return *this;
 }
 int128_t operator>>(const int128_t & rhs) const
 { bool sign = UPPER < 0;
 uint128_t r = INT128::UNSIGNED(*this) >> INT128::UNSIGNED(rhs);
 if (sign) r |= INT128::UNSIGNED(int128_t(-1)) << INT128::UNSIGNED(int128_t(128)-rhs);
 return int128_t(r);
 }
 template <typename T> int128_t operator>>(const T & rhs) const
 { return *this >> int128_t(rhs);
 }
 int128_t & operator>>=(const int128_t & rhs)
 { bool sign = UPPER < 0;
 uint128_t r = INT128::UNSIGNED(*this) >> INT128::UNSIGNED(rhs);
 if (sign) r |= INT128::UNSIGNED(int128_t(-1)) << INT128::UNSIGNED(int128_t(128)-rhs);
 UPPER=static_cast<std::int64_t>(INT128::getUPPER(r));
 LOWER=INT128::getLOWER(r);
 return *this;
 }
 template <typename T> int128_t & operator>>=(const T & rhs)
 { *this = *this >> int128_t(rhs);
 return *this;
 }
 
 bool operator!() const;
 bool operator&&(const int128_t & rhs) const;
 bool operator||(const int128_t & rhs) const;
 template <typename T> bool operator&&(const T & rhs)
 { return static_cast <bool> (*this && rhs);
 }
 template <typename T> bool operator||(const T & rhs)
 { return static_cast <bool> (*this || rhs);
 }
 
 bool operator==(const int128_t & rhs) const;
 template <typename T> bool operator==(const T & rhs) const
 { return (UPPER == (rhs>=0 ? 0 : -1) &&
 (LOWER == static_cast<std::uint64_t>(rhs)));
 }
 bool operator!=(const int128_t & rhs) const;
 template <typename T> bool operator!=(const T & rhs) const
 { return (UPPER != (rhs>0 ? 0 : -1) |
 (LOWER != static_cast<std::uint64_t>(rhs)));
 }
 bool operator>(const int128_t & rhs) const
 { return int128_t::FLIP_TOP_BIT(*this) > int128_t::FLIP_TOP_BIT(rhs);
 }
 template <typename T> bool operator>(const T & rhs) const
 { return int128_t::FLIP_TOP_BIT(*this) > int128_t::FLIP_TOP_BIT(static_cast<std::uint64_t>(rhs));
 }
 bool operator<(const int128_t & rhs) const
 { return int128_t::FLIP_TOP_BIT(*this) < int128_t::FLIP_TOP_BIT(rhs);
 }
 template <typename T> bool operator<(const T & rhs) const
 { return int128_t::FLIP_TOP_BIT(*this) < int128_t::FLIP_TOP_BIT(static_cast<std::uint64_t>(rhs));
 }
 bool operator>=(const int128_t & rhs) const
 { return int128_t::FLIP_TOP_BIT(*this) >= int128_t::FLIP_TOP_BIT(rhs);
 }
 template <typename T> bool operator>=(const T & rhs) const
 { return int128_t::FLIP_TOP_BIT(*this) >= int128_t::FLIP_TOP_BIT(static_cast<std::uint64_t>(rhs));
 }
 bool operator<=(const int128_t & rhs) const
 { return int128_t::FLIP_TOP_BIT(*this) <= int128_t::FLIP_TOP_BIT(rhs);
 }
 template <typename T> bool operator<=(const T & rhs) const
 { return int128_t::FLIP_TOP_BIT(*this) <= int128_t::FLIP_TOP_BIT(static_cast<std::uint64_t>(rhs));
 }
 
 int128_t operator+(const int128_t & rhs) const
 { return int128_t(INT128::UNSIGNED(*this) + INT128::UNSIGNED(rhs));
 }
 template <typename T> int128_t operator+(const T & rhs) const
 { return int128_t(INT128::UNSIGNED(*this) + INT128::UNSIGNED(rhs));
 }
 int128_t & operator+=(const int128_t & rhs)
 { int128_t r = int128_t(INT128::UNSIGNED(*this) + INT128::UNSIGNED(rhs));
 UPPER = r.UPPER;
 LOWER = r.LOWER;
 return *this;
 }
 template <typename T> int128_t & operator+=(const T & rhs)
 { int128_t r = int128_t(INT128::UNSIGNED(*this) + INT128::UNSIGNED(rhs));
 UPPER = r.UPPER;
 LOWER = r.LOWER;
 return *this;
 }
 int128_t operator-(const int128_t & rhs) const
 { return int128_t(INT128::UNSIGNED(*this) - INT128::UNSIGNED(rhs));
 }
 template <typename T> int128_t operator-(const T & rhs) const
 { return *this = int128_t(rhs);
 }
 int128_t & operator-=(const int128_t & rhs)
 { int128_t r = int128_t(INT128::UNSIGNED(*this) - INT128::UNSIGNED(rhs));
 UPPER = r.UPPER;
 LOWER = r.LOWER;
 return *this;
 }
 template <typename T> int128_t & operator-=(const T & rhs)
 { int128_t r = int128_t(INT128::UNSIGNED(*this) - INT128::UNSIGNED(rhs));
 UPPER = r.UPPER;
 LOWER = r.LOWER;
 return *this;
 }
 int128_t operator*(const int128_t & rhs) const
 { return int128_t(INT128::UNSIGNED(*this) * INT128::UNSIGNED(rhs));
 }
 template <typename T> int128_t operator*(const T & rhs) const
 { return int128_t(INT128::UNSIGNED(*this) * INT128::UNSIGNED(rhs));
 }
 int128_t & operator*=(const int128_t & rhs)
 { int128_t r = int128_t(INT128::UNSIGNED(*this) * INT128::UNSIGNED(rhs));
 UPPER = r.UPPER;
 LOWER = r.LOWER;
 return *this;
 }
 template <typename T> int128_t & operator*=(const T & rhs)
 { int128_t r = int128_t(INT128::UNSIGNED(*this) * INT128::UNSIGNED(rhs));
 UPPER = r.UPPER;
 LOWER = r.LOWER;
 return *this;
 }
private:
 std::pair <int128_t, int128_t> divrem(const int128_t & a,
 const int128_t & b) const
 { uint128_t ua = INT128::UNSIGNED(a), ub = INT128::UNSIGNED(b), uq;
 if (a.upper() < 0)
 { if (b.upper() < 0) uq = (-ua)/(-ub);
 else uq = -((-ua)/ub);
 }
 else
 { if (b.upper() < 0) uq = -(ua/(-ub));
 else uq = ua/ub;
 }
 int128_t q(uq);
 return std::pair<int128_t,int128_t>(q, a - q*b);
 }
public:
 int128_t operator/(const int128_t & rhs) const
 { return divrem(*this, rhs).first;
 }
 template <typename T> int128_t operator/(const T & rhs) const
 { return *this / int128_t(rhs);
 }
 int128_t & operator/=(const int128_t & rhs);
 template <typename T> int128_t & operator/=(const T & rhs)
 { *this = *this / int128_t(rhs);
 return *this;
 }
 int128_t operator%(const int128_t & rhs) const
 { return divrem(*this, rhs).second;
 }
 template <typename T> int128_t operator%(const T & rhs) const
 { return *this % int128_t(rhs);
 }
 int128_t & operator%=(const int128_t & rhs);
 template <typename T> int128_t & operator%=(const T & rhs)
 { *this = *this % int128_t(rhs);
 return *this;
 }
 
 int128_t & operator++();
 int128_t operator++(int);
 
 int128_t & operator--();
 int128_t operator--(int);
 
 int128_t operator+() const
 { return *this;
 }
 
 int128_t operator-() const;
 
 const std::int64_t & upper() const
 { return UPPER;
 }
 const std::uint64_t & lower() const
 { return LOWER;
 }
 
 std::uint8_t bits() const;
 
 std::string str(std::uint8_t base = 10,
 unsigned int len = 0) const;
};
inline uint128_t INT128::UNSIGNED(int128_t a)
{ return INT128::PACK128(static_cast<std::uint64_t>(a.getUPPER()), a.getLOWER());
}
namespace std 
{
template <> struct is_arithmetic <int128_t> : std::true_type {};
template <> struct is_integral <int128_t> : std::true_type {};
template <> struct is_signed <int128_t> : std::true_type {};
template <> struct is_unsigned <int128_t> : std::false_type {};
};
template <typename T> int128_t operator&(const T & lhs, const int128_t & rhs)
{ return rhs & lhs;
}
template <typename T> T & operator&=(T & lhs, const int128_t & rhs)
{ return lhs = static_cast <T> (rhs & lhs);
}
template <typename T> int128_t operator|(const T & lhs, const int128_t & rhs)
{ return rhs | lhs;
}
template <typename T> T & operator|=(T & lhs, const int128_t & rhs)
{ return lhs = static_cast <T> (rhs | lhs);
}
template <typename T> int128_t operator^(const T & lhs, const int128_t & rhs)
{ return rhs ^ lhs;
}
template <typename T> T & operator^=(T & lhs, const int128_t & rhs)
{ return lhs = static_cast <T> (rhs ^ lhs);
}
inline int128_t operator<<(const bool & lhs, const int128_t & rhs)
{ return int128_t(lhs) << rhs;
}
inline int128_t operator<<(const std::uint8_t & lhs, const int128_t & rhs)
{ return int128_t(lhs) << rhs;
}
inline int128_t operator<<(const std::uint16_t & lhs, const int128_t & rhs)
{ return int128_t(lhs) << rhs;
}
inline int128_t operator<<(const std::uint32_t & lhs, const int128_t & rhs)
{ return int128_t(lhs) << rhs;
}
inline int128_t operator<<(const std::uint64_t & lhs, const int128_t & rhs)
{ return int128_t(lhs) << rhs;
}
inline int128_t operator<<(const std::int8_t & lhs, const int128_t & rhs)
{ return int128_t(lhs) << rhs;
}
inline int128_t operator<<(const std::int16_t & lhs, const int128_t & rhs)
{ return int128_t(lhs) << rhs;
}
inline int128_t operator<<(const std::int32_t & lhs, const int128_t & rhs)
{ return int128_t(lhs) << rhs;
}
inline int128_t operator<<(const std::int64_t & lhs, const int128_t & rhs)
{ return int128_t(lhs) << rhs;
}
inline int128_t operator>>(const bool & lhs, const int128_t & rhs)
{ return int128_t(lhs) >> rhs;
}
inline int128_t operator>>(const std::uint8_t & lhs, const int128_t & rhs)
{ return int128_t(lhs) >> rhs;
}
inline int128_t operator>>(const std::uint16_t & lhs, const int128_t & rhs)
{ return int128_t(lhs) >> rhs;
}
inline int128_t operator>>(const std::uint32_t & lhs, const int128_t & rhs)
{ return int128_t(lhs) >> rhs;
}
inline int128_t operator>>(const std::uint64_t & lhs, const int128_t & rhs)
{ return int128_t(lhs) >> rhs;
}
inline int128_t operator>>(const std::int8_t & lhs, const int128_t & rhs)
{ return int128_t(lhs) >> rhs;
}
inline int128_t operator>>(const std::int16_t & lhs, const int128_t & rhs)
{ return int128_t(lhs) >> rhs;
}
inline int128_t operator>>(const std::int32_t & lhs, const int128_t & rhs)
{ return int128_t(lhs) >> rhs;
}
inline int128_t operator>>(const std::int64_t & lhs, const int128_t & rhs)
{ return int128_t(lhs) >> rhs;
}
template <typename T> T & operator<<=(T & lhs, const int128_t & rhs)
{ return lhs = static_cast <T> (int128_t(lhs) << rhs);
}
template <typename T> T & operator>>=(T & lhs, const int128_t & rhs)
{ return lhs = static_cast <T> (int128_t(lhs) >> rhs);
}
template <typename T> bool operator==(const T & lhs, const int128_t & rhs)
{ return (rhs.upper() == (lhs<0?-1:0) &&
 (static_cast<std::uint64_t>(lhs) == rhs.lower()));
}
template <typename T> bool operator!=(const T & lhs, const int128_t & rhs)
{ 
 return (rhs.upper() != (lhs<0?-1:0) ||
 (static_cast<std::uint64_t>(lhs) != rhs.lower()));
}
template <typename T> bool operator>(const T & lhs, const int128_t & rhs)
{ return INT128::UNSIGNED_FLIP_TOP_BIT(int128_t(lhs)) > INT128::UNSIGNED_FLIP_TOP_BIT(rhs);
}
template <typename T> bool operator<(const T & lhs, const int128_t & rhs)
{ return INT128::UNSIGNED_FLIP_TOP_BIT(int128_t(lhs)) < INT128::UNSIGNED_FLIP_TOP_BIT(rhs);
}
template <typename T> bool operator>=(const T & lhs,
 const int128_t & rhs)
{ return INT128::UNSIGNED_FLIP_TOP_BIT(int128_t(lhs)) >= INT128::UNSIGNED_FLIP_TOP_BIT(rhs);
}
template <typename T> bool operator<=(const T & lhs,
 const int128_t & rhs)
{ return INT128::UNSIGNED_FLIP_TOP_BIT(int128_t(lhs)) <= INT128::UNSIGNED_FLIP_TOP_BIT(rhs);
}
template <typename T> int128_t operator+(const T & lhs, const int128_t & rhs)
{ return rhs + lhs;
}
template <typename T> T & operator+=(T & lhs, const int128_t & rhs)
{ return lhs = static_cast <T> (rhs + lhs);
}
template <typename T> int128_t operator-(const T & lhs, const int128_t & rhs)
{ return -(rhs - lhs);
}
template <typename T> T & operator-=(T & lhs, const int128_t & rhs)
{ return lhs = static_cast <T> (-(rhs - lhs));
}
template <typename T> int128_t operator*(const T & lhs, const int128_t & rhs)
{ return rhs * lhs;
}
template <typename T> T & operator*=(T & lhs, const int128_t & rhs)
{ return lhs = static_cast <T> (rhs * lhs);
}
template <typename T> int128_t operator/(const T & lhs, const int128_t & rhs)
{ return int128_t(lhs) / rhs;
}
template <typename T> T & operator/=(T & lhs, const int128_t & rhs)
{ return lhs = static_cast <T> (int128_t(lhs) / rhs);
}
template <typename T> int128_t operator%(const T & lhs, const int128_t & rhs)
{ return int128_t(lhs) % rhs;
}
template <typename T> T & operator%=(T & lhs, const int128_t & rhs)
{ return lhs = static_cast <T> (int128_t(lhs) % rhs);
}
std::ostream & operator<<(std::ostream & stream, const int128_t & rhs);
namespace INT128
{
inline std::int64_t getUPPER(int128_t a)
{ return a.getUPPER();
}
inline std::uint64_t getLOWER(int128_t a)
{ return a.getLOWER();
}
inline int128_t PACK128(std::int64_t high, std::uint64_t low)
{ return int128_t(high, low);
}
};
inline std::string int128_t::str(std::uint8_t base,
 unsigned int len) const
{ std::string out = "";
 if (UPPER==0 && LOWER==0) out = "0";
 else
 { uint128_t u = INT128::UNSIGNED(*this);
 if (base==10 && UPPER<0)
 { u = -u;
 len--;
 }
 do
 { int r = static_cast<std::uint64_t>(u % base);
 out = "0123456789abcdef"[r] + out;
 u = u / base;
 } while (u != 0);
 }
 if (out.size() < len) out = std::string(len - out.size(), '0') + out;
 if (base==10 && UPPER<0) out = "-" + out;
 return out; 
}
inline int128_t & int128_t::operator++()
{ static const int128_t int128_1(1);
 return *this += int128_1;
}
inline int128_t int128_t::operator++(int)
{ int128_t temp(*this);
 ++*this;
 return temp;
}
inline int128_t & int128_t::operator--()
{ static const int128_t int128_1(1);
 return *this -= int128_1;
}
inline int128_t int128_t::operator--(int)
{ int128_t temp(*this);
 --*this;
 return temp;
}
inline int128_t int128_t::operator-() const
{ static const int128_t int128_1(1);
 return ~*this + int128_1;
}
inline std::ostream & operator<<(std::ostream & stream,
 const int128_t & rhs)
{ if (stream.flags() & stream.oct)
 { stream << rhs.str(8);
 }
 else if (stream.flags() & stream.dec)
 { stream << rhs.str(10);
 }
 else if (stream.flags() & stream.hex)
 { stream << rhs.str(16);
 }
 return stream;
}
#endif 
inline uint128_t uint128(int128_t v)
{ return INT128::PACK128(static_cast<std::uint64_t>(v>>64),
 INT128::getLOWER(INT128::UNSIGNED(v)));
}
inline uint128_t uint128(std::uint64_t v)
{ return INT128::PACK128(static_cast<std::uint64_t>(0), v);
}
inline uint128_t uint128(int64_t v)
{ return INT128::PACK128(
 static_cast<std::uint64_t>(v<0 ? 0xffffffffffffffffU : 0U),
 v);
}
#ifdef HAVE_INT128_T
inline int128_t int128(int64_t v)
{ return static_cast<int128_t>(v);
}
#else 
inline int128_t int128(int64_t v)
{ return int128_t(static_cast<std::int64_t>(v<0 ? -1 : 0),
 static_cast<std::uint64_t>(v));
}
#endif 
#ifndef HAVE_UINT128_T
inline uint128_t::operator int128_t() const
{ return INT128::PACK128(static_cast<std::int64_t>(UPPER), LOWER);
}
inline uint128_t::uint128_t(int128_t a)
{ UPPER = INT128::getUPPER(a);
 LOWER = INT128::getLOWER(a);
}
inline uint128_t uint128_t::operator=(int128_t rhs)
{ UPPER = static_cast<std::uint64_t>(INT128::getUPPER(rhs));
 LOWER = INT128::getLOWER(rhs);
 return *this;
}
#endif 
#ifndef HAVE_UINT128_T
#define HAVE_UINT128_T 1
#endif
#ifndef HAVE_INT128_T
#define HAVE_INT128_T 1
#endif
#endif 
#ifndef header_log_h
#define header_log_h 1
#include <cstdint>
#include <cstring>
#include <cstdio>
#include <cstdint>
#include <cinttypes>
#include <cstdlib>
#include <cstdarg>
#include <cctype>
#include <cwchar>
#include <cwctype>
#include <ctime>
#include <csignal>
[[noreturn]] inline void my_abort()
{ std::abort();
}
template <typename F>
inline void my_assert(bool ok, F&& action)
{
 if (!ok)
 { action();
 my_abort();
 }
}
inline void my_assert(bool ok)
{ if (!ok) my_abort();
}
inline const char *where(const char *file, int line)
{ const char *p = std::strrchr(file, '/');
 if (p != nullptr) file = p+1;
 static char whereMsg[100];
 sprintf(whereMsg, "%.40s:%d", file, line);
 return whereMsg;
}
#define __WHERE__ where(__FILE__, __LINE__)
#if defined __OPTIMIZE__ || !defined __GNUC__
#define D do {} while (false)
#define DS do {} while (false)
#define DX do {} while (false)
#define DF do {} while (false)
#else 
#define D do { \
 const char *_f_ = std::strrchr(__FILE__, '/'); \
 if (_f_ == nullptr) _f_ = std::strrchr(__FILE__, '\\'); \
 if (_f_ == nullptr) _f_ = __FILE__; else _f_++; \
 std::fprintf(stderr, "Line %d File %s\n", __LINE__, _f_); \
 std::fflush(stderr); \
 } while (false)
#define DS(s) do { \
 const char *_f_ = std::strrchr(__FILE__, '/'); \
 if (_f_ == nullptr) _f_ = std::strrchr(__FILE__, '\\'); \
 if (_f_ == nullptr) _f_ = __FILE__; else _f_++; \
 std::fprintf(stderr, "Line %d File %s: %s\n", \
 __LINE__, _f_, (s)); \
 std::fflush(stderr); \
 } while (false)
#define DX(s) do { \
 const char *_f_ = std::strrchr(__FILE__, '/'); \
 if (_f_ == nullptr) _f_ = std::strrchr(__FILE__, '\\'); \
 if (_f_ == nullptr) _f_ = __FILE__; else _f_++; \
 std::fprintf(stderr, "Line %d File %s: %llx\n", __LINE__, _f_, \
 (long long unsigned)(s)); \
 std::fflush(stderr); \
 } while (false)
#define DF(f,...) do { \
 const char *_f_ = std::strrchr(__FILE__, '/'); \
 if (_f_ == nullptr) _f_ = std::strrchr(__FILE__, '\\'); \
 if (_f_ == nullptr) _f_ = __FILE__; else _f_++; \
 std::fprintf(stderr, "Line %d File %s: ", __LINE__, _f_); \
 std::fprintf(stderr, f, __VA_ARGS__); \
 std::fprintf(stderr, "\n"); \
 std::fflush(stderr); \
 } while (false)
#endif 
#ifndef LONGEST_LEGAL_FILENAME
#define LONGEST_LEGAL_FILENAME 1024
#endif 
#if defined __OPTIMIZE__ || !defined __GNUC__
inline void printlog(const char *s, ...)
{}
#else 
#define LOGFILE_NAME "debug.log"
extern const char *programDir;
inline void printlog(const char *s, ...)
{ static std::FILE *logfile = nullptr;
 std::va_list x;
 if (logfile == nullptr)
 { char logfile_name[LONGEST_LEGAL_FILENAME];
 std::memset(logfile_name, 0, sizeof(logfile_name));
 if (std::strcmp(programDir, ".") == 0)
 std::sprintf(logfile_name, "/tmp/%s", LOGFILE_NAME);
 else std::sprintf(logfile_name, "%s/%s", programDir, LOGFILE_NAME);
 logfile = std::fopen(logfile_name, "a");
 if (logfile == nullptr) logfile = std::fopen("/tmp/fwin.log", "w");
 if (logfile == nullptr) return; 
 std::time_t now = std::time(nullptr);
 std::fprintf(logfile, "New log segment started %s",
 std::asctime(std::localtime(&now)));
 }
 va_start(x, s);
 std::vfprintf(logfile, s, x);
 va_end(x);
 std::fflush(logfile);
}
#endif 
#endif 
#ifndef header_tags_h
#define header_tags_h 1
typedef intptr_t LispObject;
extern LispObject nil;
#define SIXTY_FOUR_BIT (sizeof(intptr_t) == 8)
inline void CSL_IGNORE(LispObject x)
{ static_cast<void>(x);
}
#ifndef PAGE_BITS
# define PAGE_BITS 23
#endif 
#define PAGE_POWER_OF_TWO (((size_t)1) << PAGE_BITS)
#define CSL_PAGE_SIZE (PAGE_POWER_OF_TWO)
#ifndef MAX_HEAPSIZE
#define MAX_HEAPBITS (SIXTY_FOUR_BIT ? 41 : 31)
#define MAX_HEAPSIZE (((size_t)1) << (MAX_HEAPBITS-20))
#endif 
#define MEGABYTE ((size_t)0x100000)
#if PAGE_BITS >= 20
#define MAX_PAGES (MAX_HEAPSIZE >> (PAGE_BITS-20))
#else
#define MAX_PAGES (MAX_HEAPSIZE << (20-PAGE_BITS))
#endif
#define LONGEST_LEGAL_FILENAME 1024
#define CELL ((size_t)sizeof(LispObject))
static const uintptr_t TAG_BITS = 0x7;
static const uintptr_t XTAG_BITS = 0xf;
static const int TAG_CONS = 0; 
static const int TAG_VECTOR = 1; 
static const int TAG_HDR_IMMED = 2; 
static const int TAG_FORWARD = 3; 
static const int TAG_SYMBOL = 4; 
 
 
static const int TAG_NUMBERS = 5; 
static const int TAG_BOXFLOAT = 6; 
static const int TAG_FIXNUM = 7; 
static const int TAG_XBIT = 8; 
static const int XTAG_SFLOAT = 15; 
static const int XTAG_FLOAT32 = 16;
inline bool is_forward(LispObject p)
{ return (p & TAG_BITS) == TAG_FORWARD;
}
inline bool is_number(LispObject p)
{ return (p & TAG_BITS) >= TAG_NUMBERS;
}
inline bool is_float(LispObject p)
{ return ((0xc040 >> (p & XTAG_BITS)) & 1) != 0;
}
inline bool is_pointer_type(LispObject p)
{ return ((0x73 >> (p & TAG_BITS)) & 1) != 0;
}
inline bool is_immed_or_cons(LispObject p)
{ return ((0x85 >> (p & TAG_BITS)) & 1) != 0;
}
inline bool is_immediate(LispObject p)
{ return ((0x84 >> (p & TAG_BITS)) & 1) != 0;
}
inline bool is_immed_cons_sym(LispObject p)
{ return ((0x95 >> (p & TAG_BITS)) & 1) != 0;
}
inline bool need_more_than_eq(LispObject p)
{ return ((0x63 >> (p & TAG_BITS)) & 1) != 0;
}
inline constexpr LispObject fixnum_of_int(intptr_t x)
{ return static_cast<LispObject>(
 (static_cast<uintptr_t>(x)<<4) + TAG_FIXNUM);
}
#define FIXNUM_OF_INT(n) (16*(n)+TAG_FIXNUM)
inline constexpr intptr_t int_of_fixnum(LispObject x)
{ return (static_cast<intptr_t>(x) &
 ~static_cast<intptr_t>(15)) / 16;
}
inline bool valid_as_fixnum(int32_t x)
{ if (SIXTY_FOUR_BIT) return true;
 else return int_of_fixnum(fixnum_of_int(x)) == x;
}
inline bool valid_as_fixnum(int64_t x)
{ return int_of_fixnum(fixnum_of_int(x)) == x;
}
inline bool valid_as_fixnum(int128_t x)
{ return int_of_fixnum(fixnum_of_int(static_cast<int64_t>(x))) == x;
}
inline bool intptr_valid_as_fixnum(intptr_t x)
{ return int_of_fixnum(fixnum_of_int(x)) == x;
}
inline bool valid_as_fixnum(uint32_t x)
{ if (SIXTY_FOUR_BIT) return true;
 else return x < ((static_cast<uintptr_t>(1)) << 28);
}
inline bool valid_as_fixnum(uint64_t x)
{ return x < ((static_cast<uintptr_t>(1)) << (SIXTY_FOUR_BIT ? 60 :
 28));
}
inline bool uint128_valid_as_fixnum(uint128_t x)
{ return x < ((static_cast<uintptr_t>(1)) << (SIXTY_FOUR_BIT ? 60 :
 28));
}
#define MOST_POSITIVE_FIXVAL ((static_cast<intptr_t>(1) << (8*sizeof(LispObject)-5)) - 1)
#define MOST_NEGATIVE_FIXVAL (-(static_cast<intptr_t>(1) << (8*sizeof(LispObject)-5)))
#define MOST_POSITIVE_FIXNUM fixnum_of_int(MOST_POSITIVE_FIXVAL)
#define MOST_NEGATIVE_FIXNUM fixnum_of_int(MOST_NEGATIVE_FIXVAL)
inline bool is_cons(LispObject p)
{ return (((static_cast<int>(p)) & TAG_BITS) == TAG_CONS);
}
inline bool is_fixnum(LispObject p)
{ return (((static_cast<int>(p)) & XTAG_BITS) == TAG_FIXNUM);
}
inline bool is_immediate_num(LispObject p)
{ return (((static_cast<int>(p)) & TAG_BITS) == TAG_FIXNUM);
}
inline bool is_odds(LispObject p)
{ return (((static_cast<int>(p)) & TAG_BITS) ==
 TAG_HDR_IMMED); 
}
inline bool is_sfloat(LispObject p)
{ return (((static_cast<int>(p)) & XTAG_BITS) == XTAG_SFLOAT);
}
inline bool is_symbol(LispObject p)
{ return (((static_cast<int>(p)) & TAG_BITS) == TAG_SYMBOL);
}
inline bool is_numbers(LispObject p)
{ return (((static_cast<int>(p)) & TAG_BITS) == TAG_NUMBERS);
}
inline bool is_vector(LispObject p)
{ return (((static_cast<int>(p)) & TAG_BITS) == TAG_VECTOR);
}
inline bool is_bfloat(LispObject p)
{ return (((static_cast<int>(p)) & TAG_BITS) == TAG_BOXFLOAT);
}
inline bool consp(LispObject p)
{ return is_cons(p);
}
inline bool symbolp(LispObject p)
{ return is_symbol(p);
}
inline bool car_legal(LispObject p)
{ return is_cons(p);
}
typedef struct Cons_Cell_
{ atomic<LispObject> car;
 atomic<LispObject> cdr;
} Cons_Cell;
extern bool valid_address(void *pointer);
[[noreturn]] extern void my_abort();
inline LispObject car(LispObject p,
 std::memory_order mo=std::memory_order_relaxed)
{ 
 return (reinterpret_cast<Cons_Cell *>(p))->car.load(mo);
}
inline LispObject cdr(LispObject p,
 std::memory_order mo=std::memory_order_relaxed)
{ 
 return (reinterpret_cast<Cons_Cell *>(p))->cdr.load(mo);
}
inline void setcar(LispObject p, LispObject q,
 std::memory_order mo=std::memory_order_relaxed)
{ 
 (reinterpret_cast<Cons_Cell *>(p))->car.store(q, mo);
}
inline void setcdr(LispObject p, LispObject q,
 std::memory_order mo=std::memory_order_relaxed)
{ 
 (reinterpret_cast<Cons_Cell *>(p))->cdr.store(q, mo);
}
inline atomic<LispObject> *caraddr(LispObject p)
{ 
 return &((reinterpret_cast<Cons_Cell *>(p))->car);
}
inline atomic<LispObject> *cdraddr(LispObject p)
{ 
 return &((reinterpret_cast<Cons_Cell *>(p))->cdr);
}
inline LispObject *vcaraddr(LispObject p)
{ 
 return reinterpret_cast<LispObject *>(
 &(reinterpret_cast<Cons_Cell *>(p)->car));
}
inline LispObject *vcdraddr(LispObject p)
{ 
 return reinterpret_cast<LispObject *>(
 &(reinterpret_cast<Cons_Cell *>(p)->cdr));
}
typedef LispObject Special_Form(LispObject, LispObject);
typedef LispObject no_args(LispObject);
typedef LispObject one_arg(LispObject, LispObject);
typedef LispObject two_args(LispObject, LispObject, LispObject);
typedef LispObject three_args(LispObject, LispObject, LispObject,
 LispObject);
typedef LispObject fourup_args(LispObject, LispObject, LispObject,
 LispObject, LispObject);
typedef uintptr_t Header;
#define Tw (3)
#define header_mask (0x7f<<Tw)
#define TYPE_BITVEC_1 ( 0x02 <<Tw) 
#define TYPE_BITVEC_2 ( 0x06 <<Tw) 
#define TYPE_BITVEC_3 ( 0x0a <<Tw) 
#define TYPE_BITVEC_4 ( 0x0c <<Tw) 
#define TYPE_BITVEC_5 ( 0x12 <<Tw) 
#define TYPE_BITVEC_6 ( 0x16 <<Tw) 
#define TYPE_BITVEC_7 ( 0x1a <<Tw) 
#define TYPE_BITVEC_8 ( 0x1c <<Tw) 
#define TYPE_BITVEC_9 ( 0x22 <<Tw) 
#define TYPE_BITVEC_10 ( 0x26 <<Tw) 
#define TYPE_BITVEC_11 ( 0x2a <<Tw) 
#define TYPE_BITVEC_12 ( 0x2c <<Tw) 
#define TYPE_BITVEC_13 ( 0x32 <<Tw) 
#define TYPE_BITVEC_14 ( 0x36 <<Tw) 
#define TYPE_BITVEC_15 ( 0x3a <<Tw) 
#define TYPE_BITVEC_16 ( 0x3c <<Tw) 
#define TYPE_BITVEC_17 ( 0x42 <<Tw) 
#define TYPE_BITVEC_18 ( 0x46 <<Tw) 
#define TYPE_BITVEC_19 ( 0x4a <<Tw) 
#define TYPE_BITVEC_20 ( 0x4c <<Tw) 
#define TYPE_BITVEC_21 ( 0x52 <<Tw) 
#define TYPE_BITVEC_22 ( 0x56 <<Tw) 
#define TYPE_BITVEC_23 ( 0x5a <<Tw) 
#define TYPE_BITVEC_24 ( 0x5c <<Tw) 
#define TYPE_BITVEC_25 ( 0x62 <<Tw) 
#define TYPE_BITVEC_26 ( 0x66 <<Tw) 
#define TYPE_BITVEC_27 ( 0x6a <<Tw) 
#define TYPE_BITVEC_28 ( 0x6c <<Tw) 
#define TYPE_BITVEC_29 ( 0x72 <<Tw) 
#define TYPE_BITVEC_30 ( 0x76 <<Tw) 
#define TYPE_BITVEC_31 ( 0x7a <<Tw) 
#define TYPE_BITVEC_32 ( 0x7c <<Tw) 
#define TYPE_STRING_1 ( 0x07 <<Tw) 
#define TYPE_STRING_2 ( 0x27 <<Tw) 
#define TYPE_STRING_3 ( 0x47 <<Tw) 
#define TYPE_STRING_4 ( 0x67 <<Tw) 
#define TYPE_VEC8_1 ( 0x03 <<Tw) 
#define TYPE_VEC8_2 ( 0x23 <<Tw) 
#define TYPE_VEC8_3 ( 0x43 <<Tw) 
#define TYPE_VEC8_4 ( 0x63 <<Tw) 
#define TYPE_BPS_1 ( 0x0b <<Tw) 
#define TYPE_BPS_2 ( 0x2b <<Tw) 
#define TYPE_BPS_3 ( 0x4b <<Tw) 
#define TYPE_BPS_4 ( 0x6b <<Tw) 
#define TYPE_VEC16_1 ( 0x0f <<Tw) 
#define TYPE_VEC16_2 ( 0x4f <<Tw) 
#if 0
#define TYPE_MAPLEREF ( 0x2f <<Tw) 
#endif
#define TYPE_FOREIGN ( 0x33 <<Tw) 
#define TYPE_SP ( 0x37 <<Tw) 
#define TYPE_ENCAPSULATE ( 0x3b <<Tw) 
#define TYPE_PADDER ( 0x7b <<Tw) 
inline bool vector_holds_binary(Header h)
{ return ((h) & (0x2<<Tw)) != 0;
}
#define TYPE_SIMPLE_VEC ( 0x01 <<Tw) 
#define TYPE_INDEXVEC ( 0x11 <<Tw) 
#define TYPE_HASH ( 0x15 <<Tw) 
#define TYPE_HASHX ( 0x19 <<Tw) 
#define TYPE_ARRAY ( 0x05 <<Tw) 
#define TYPE_STRUCTURE ( 0x09 <<Tw) 
#define TYPE_OBJECT ( 0x0d <<Tw) 
#define TYPE_VEC32 ( 0x13 <<Tw) 
#define TYPE_VEC64 ( 0x17 <<Tw) 
#define TYPE_VEC128 ( 0x1b <<Tw) 
#define TYPE_VECFLOAT32 ( 0x53 <<Tw) 
#define TYPE_VECFLOAT64 ( 0x57 <<Tw) 
#define TYPE_VECFLOAT128 ( 0x5b <<Tw) 
#define is_mixed_header(h) (((h) & (0x73<<Tw)) == TYPE_MIXED1)
#define TYPE_MIXED1 ( 0x41 <<Tw) 
#define TYPE_MIXED2 ( 0x45 <<Tw) 
#define TYPE_MIXED3 ( 0x49 <<Tw) 
#define TYPE_STREAM ( 0x4d <<Tw) 
#define VIRTUAL_TYPE_CONS ( 0x7d <<Tw) 
#define VIRTUAL_TYPE_REF ( 0x17d <<Tw)
#define VIRTUAL_TYPE_NIL ( 0x27d <<Tw)
#define HDR_IMMED_MASK (( 0xf <<Tw) | TAG_BITS)
#define TAG_CHAR (( 0x4 <<Tw) | TAG_HDR_IMMED) 
#define TAG_SPID (( 0xc <<Tw) | TAG_HDR_IMMED) 
#define SPID_NIL (TAG_SPID+(0x00<<(Tw+4))) 
#define SPID_FBIND (TAG_SPID+(0x01<<(Tw+4))) 
#define SPID_CATCH (TAG_SPID+(0x02<<(Tw+4))) 
#define SPID_PROTECT (TAG_SPID+(0x03<<(Tw+4))) 
#define SPID_HASHEMPTY (TAG_SPID+(0x04<<(Tw+4))) 
#define SPID_HASHTOMB (TAG_SPID+(0x05<<(Tw+4))) 
#define SPID_GCMARK (TAG_SPID+(0x06<<(Tw+4))) 
#define SPID_NOINPUT (TAG_SPID+(0x07<<(Tw+4))) 
#define SPID_ERROR (TAG_SPID+(0x08<<(Tw+4))) 
#define SPID_PVBIND (TAG_SPID+(0x09<<(Tw+4))) 
#define SPID_NOARG (TAG_SPID+(0x0a<<(Tw+4))) 
#define SPID_NOPROP (TAG_SPID+(0x0b<<(Tw+4))) 
#define SPID_LIBRARY (TAG_SPID+(0x0c<<(Tw+4))) 
inline Header vechdr(LispObject v,
 std::memory_order mo=std::memory_order_relaxed)
{ return (reinterpret_cast<atomic<Header> *>
 (reinterpret_cast<char *>(v) - TAG_VECTOR))->load(mo);
}
inline void setvechdr(LispObject v, Header h,
 std::memory_order mo=std::memory_order_relaxed)
{ (reinterpret_cast<atomic<Header> *>(reinterpret_cast<char *>
 (v) - TAG_VECTOR))->store(h, mo);
}
inline unsigned int type_of_header(Header h)
{ return (static_cast<unsigned int>(h)) & header_mask;
}
inline size_t length_of_header(Header h)
{ return ((static_cast<size_t>(h)) >> (Tw+7)) << 2;
}
inline size_t length_of_bitheader(Header h)
{ return ((static_cast<size_t>(h)) >> (Tw+2)) - 31;
}
inline size_t length_of_byteheader(Header h)
{ return ((static_cast<size_t>(h)) >> (Tw+5)) - 3;
}
inline size_t length_of_hwordheader(Header h)
{ return ((static_cast<size_t>(h)) >> (Tw+6)) - 1;
}
inline Header bitvechdr_(size_t n)
{ return TYPE_BITVEC_1 + (((n+31)&31)<<(Tw+2));
}
#define TYPE_SYMBOL 0x00000000
#define SYM_SPECIAL_VAR 0x00000080 
#define SYM_FLUID_VAR 0x00000080 
#define SYM_GLOBAL_VAR 0x00000100 
#define SYM_KEYWORD_VAR 0x00000180 
#define SYM_SPECIAL_FORM 0x00000200 
#define SYM_MACRO 0x00000400 
#define SYM_C_DEF 0x00000800 
#define SYM_CODEPTR 0x00001000 
#define SYM_ANY_GENSYM 0x00002000 
#define SYM_TRACED 0x00004000 
#define SYM_TRACESET 0x00008000 
#define SYM_TAGGED 0x00010000 
#define SYM_FASTGET_MASK 0x007e0000 
#define SYM_FASTGET_SHIFT 17
#ifdef COMMON
#define SYM_EXTERN_IN_HOME 0x00800000 
#define SYM_IN_PACKAGE 0xff000000U 
#define SYM_IN_PKG_SHIFT 24
#define SYM_IN_PKG_COUNT 8
#else 
#define SYM_UNPRINTED_GENSYM 0x00800000 
#endif 
#define symhdr_length (doubleword_align_up(sizeof(Symbol_Head)))
inline bool is_symbol_header(Header h)
{ return (static_cast<int>(h) & (0xf<<Tw)) == TYPE_SYMBOL;
}
inline bool is_symbol_header_full_test(Header h)
{ return (static_cast<int>(h) & ((0xf<<Tw) + TAG_BITS)) ==
 (TYPE_SYMBOL + TAG_HDR_IMMED);
}
inline int header_fastget(Header h)
{ return (h >> SYM_FASTGET_SHIFT) & 0x3f;
}
inline bool is_number_header_full_test(Header h)
{ return (static_cast<int>(h) & ((0x1d<<Tw) + TAG_BITS)) == ((
 0x1d<<Tw) + TAG_HDR_IMMED);
}
inline bool is_vector_header_full_test(Header h)
{ return is_odds(h) && ((static_cast<int>(h) & (0x3<<Tw)) != 0);
}
inline bool is_array_header(Header h)
{ return type_of_header(h) == TYPE_ARRAY;
}
inline bool is_basic_vector(LispObject v)
{ return type_of_header(vechdr(v)) != TYPE_INDEXVEC;
}
inline bool vector_i8(Header h)
{ return ((0x7f070707u >> ((h >> (Tw+2)) & 0x1f)) & 1) != 0;
}
inline bool vector_i16(Header h)
{ return ((0x00080008u >> ((h >> (Tw+2)) & 0x1f)) & 1) != 0;
}
inline bool vector_i32(Header h)
{ return ((0x00000090u >> ((h >> (Tw+2)) & 0x1f)) & 1) != 0;
}
inline bool vector_i64(Header h)
{ return ((0x00007820u >> ((h >> (Tw+2)) & 0x1f)) & 1) != 0;
}
inline bool vector_i128(Header h)
{ return ((0x00000040u >> ((h >> (Tw+2)) & 0x1f)) & 1) != 0;
}
inline bool vector_f32(Header h)
{ return ((0x00108000u >> ((h >> (Tw+2)) & 0x1f)) & 1) != 0;
}
inline bool vector_f64(Header h)
{ return ((0x00a00000u >> ((h >> (Tw+2)) & 0x1f)) & 1) != 0;
}
inline bool vector_f128(Header h)
{ return ((0x80400000u >> ((h >> (Tw+2)) & 0x1f)) & 1) != 0;
}
inline atomic<LispObject>& basic_elt(LispObject v, size_t n)
{ return *reinterpret_cast<atomic<LispObject> *>
 (reinterpret_cast<char *>(v) +
 (CELL-TAG_VECTOR) +
 (n*sizeof(LispObject)));
}
inline bool vector_i8(LispObject n)
{ if (is_basic_vector(n)) return vector_i8(vechdr(n));
 else return vector_i8(vechdr(basic_elt(n, 0)));
}
inline bool vector_i16(LispObject n)
{ if (is_basic_vector(n)) return vector_i16(vechdr(n));
 else return vector_i16(vechdr(basic_elt(n, 0)));
}
inline bool vector_i32(LispObject n)
{ if (is_basic_vector(n)) return vector_i32(vechdr(n));
 else return vector_i32(vechdr(basic_elt(n, 0)));
}
inline bool vector_i64(LispObject n)
{ if (is_basic_vector(n)) return vector_i64(vechdr(n));
 else return vector_i64(vechdr(basic_elt(n, 0)));
}
inline bool vector_i128(LispObject n)
{ if (is_basic_vector(n)) return vector_i128(vechdr(n));
 else return vector_i128(vechdr(basic_elt(n, 0)));
}
inline bool vector_f32(LispObject n)
{ if (is_basic_vector(n)) return vector_f32(vechdr(n));
 else return vector_f32(vechdr(basic_elt(n, 0)));
}
inline bool vector_f64(LispObject n)
{ if (is_basic_vector(n)) return vector_f64(vechdr(n));
 else return vector_f64(vechdr(basic_elt(n, 0)));
}
inline bool vector_f128(LispObject n)
{ if (is_basic_vector(n)) return vector_f128(vechdr(n));
 else return vector_f128(vechdr(basic_elt(n, 0)));
}
#define TYPE_BIGNUMINDEX ( 0x1d <<Tw)
#define TYPE_BIGNUM ( 0x1f <<Tw)
#define TYPE_RATNUM ( 0x3d <<Tw)
#define TYPE_SINGLE_FLOAT ( 0x3f <<Tw)
#define TYPE_COMPLEX_NUM ( 0x5d <<Tw)
#define TYPE_DOUBLE_FLOAT ( 0x5f <<Tw)
#define TYPE_NEW_BIGNUM ( 0x7d <<Tw) 
#define TYPE_LONG_FLOAT ( 0x7f <<Tw)
inline Header numhdr(LispObject v,
 std::memory_order mo = std::memory_order_relaxed)
{ return (reinterpret_cast<atomic<Header> *>
 (reinterpret_cast<char *>(v) - TAG_NUMBERS))->load(mo);
}
inline Header flthdr(LispObject v,
 std::memory_order mo = std::memory_order_relaxed)
{ return (reinterpret_cast<atomic<Header> *>
 (reinterpret_cast<char *>(v) - TAG_BOXFLOAT))->load(mo);
}
inline void setnumhdr(LispObject v, Header h,
 std::memory_order mo = std::memory_order_relaxed)
{ (reinterpret_cast<atomic<Header> *>(reinterpret_cast<char *>
 (v) - TAG_NUMBERS))->store(h, mo);
}
inline void setflthdr(LispObject v, Header h,
 std::memory_order mo = std::memory_order_relaxed)
{ (reinterpret_cast<atomic<Header> *>(reinterpret_cast<char *>
 (v) - TAG_BOXFLOAT))->store(h, mo);
}
inline bool is_short_float(LispObject v)
{ if (!is_sfloat(v)) return false;
 if (SIXTY_FOUR_BIT && (v & XTAG_FLOAT32) != 0) return false;
 return true;
}
inline bool is_single_float(LispObject v)
{ if (SIXTY_FOUR_BIT && is_sfloat(v) &&
 (v & XTAG_FLOAT32) != 0) return true;
 return is_bfloat(v) && type_of_header(flthdr(v)) == TYPE_SINGLE_FLOAT;
}
inline bool is_double_float(LispObject v)
{ return is_bfloat(v) &&
 type_of_header(flthdr(v)) == TYPE_DOUBLE_FLOAT;
}
inline bool is_long_float(LispObject v)
{ return is_bfloat(v) &&
 type_of_header(flthdr(v)) == TYPE_LONG_FLOAT;
}
inline bool is_ratio(LispObject n)
{ return type_of_header(numhdr(n)) == TYPE_RATNUM;
}
inline bool is_complex(LispObject n)
{ return type_of_header(numhdr(n)) == TYPE_COMPLEX_NUM;
}
inline bool is_bignum_header(Header h)
{ return type_of_header(h) == TYPE_BIGNUM;
}
inline bool is_bignum(LispObject n)
{ return is_bignum_header(numhdr(n));
 
}
inline bool is_new_bignum_header(Header h)
{ return type_of_header(h) == TYPE_NEW_BIGNUM;
}
inline bool is_new_bignum(LispObject n)
{ return is_new_bignum_header(numhdr(n));
 
}
inline bool is_string_header(Header h)
{ return (type_of_header(h) & (0x1f<<Tw)) == TYPE_STRING_1;
}
inline bool is_string(LispObject n)
{ if (is_basic_vector(n)) return is_string_header(vechdr(n));
 else return is_string_header(vechdr(basic_elt(n, 0)));
}
inline bool is_vec8_header(Header h)
{ return (type_of_header(h) & (0x1f<<Tw)) == TYPE_VEC8_1;
}
inline bool is_vec8(LispObject n)
{ if (is_basic_vector(n)) return is_vec8_header(vechdr(n));
 else return is_vec8_header(vechdr(basic_elt(n, 0)));
}
inline bool is_bps_header(Header h)
{ return (type_of_header(h) & (0x1f<<Tw)) == TYPE_BPS_1;
}
inline bool is_bps(LispObject n)
{ return is_bps_header(vechdr(n));
}
inline bool is_vec16_header(Header h)
{ return (type_of_header(h) & (0x3f<<Tw)) == TYPE_VEC16_1;
}
inline bool is_vec16(LispObject n)
{ if (is_basic_vector(n)) return is_vec16_header(vechdr(n));
 else return is_vec16_header(vechdr(basic_elt(n, 0)));
}
inline bool is_bitvec_header(Header h)
{ return (type_of_header(h) & (0x03<<Tw)) == TYPE_BITVEC_1;
}
inline bool is_bitvec(LispObject n)
{ if (is_basic_vector(n)) return is_bitvec_header(vechdr(n));
 else return is_bitvec_header(vechdr(basic_elt(n, 0)));
}
inline char& basic_celt(LispObject v, size_t n)
{ return *(reinterpret_cast<char *>(v) + (CELL-TAG_VECTOR) + n);
}
inline unsigned char& basic_ucelt(LispObject v, size_t n)
{ return *(reinterpret_cast<unsigned char *>(v) +
 (CELL-TAG_VECTOR) + n);
}
inline signed char& basic_scelt(LispObject v, size_t n)
{ return *(reinterpret_cast<signed char *>(v) +
 (CELL-TAG_VECTOR) + n);
}
#define BPS_DATA_OFFSET (CELL-TAG_VECTOR)
inline unsigned char* data_of_bps(LispObject v)
{ return reinterpret_cast<unsigned char *>(v) + BPS_DATA_OFFSET;
}
inline LispObject& vselt(LispObject v, size_t n)
{ return *reinterpret_cast<LispObject *>(
 (static_cast<intptr_t>(v) &
 ~(static_cast<intptr_t>(TAG_BITS))) +
 ((1 + n)*sizeof(LispObject)));
}
inline int16_t& basic_helt(LispObject v, size_t n)
{ return *reinterpret_cast<int16_t *>(reinterpret_cast<char *>
 (v) +
 (CELL-TAG_VECTOR) +
 n*sizeof(int16_t));
}
inline intptr_t& basic_ielt(LispObject v, size_t n)
{ return *reinterpret_cast<intptr_t *>(reinterpret_cast<char *>
 (v) +
 (CELL-TAG_VECTOR) +
 n*sizeof(intptr_t));
}
inline int32_t& basic_ielt32(LispObject v, size_t n)
{ return *reinterpret_cast<int32_t *>(reinterpret_cast<char *>(v) +
 (CELL-TAG_VECTOR) +
 n*sizeof(int32_t));
}
inline float& basic_felt(LispObject v, size_t n)
{ return *reinterpret_cast<float *>(reinterpret_cast<char *>(v) +
 (CELL-TAG_VECTOR) +
 n*sizeof(float));
}
inline double& basic_delt(LispObject v, size_t n)
{ return *reinterpret_cast<double *>(reinterpret_cast<char *>(v) +
 (8-TAG_VECTOR) +
 n*sizeof(double));
}
#define LOG2_VECTOR_CHUNK_BYTES (PAGE_BITS-2)
#define VECTOR_CHUNK_BYTES ((size_t)(((size_t)1)<<LOG2_VECTOR_CHUNK_BYTES))
inline bool is_power_of_two(uint64_t n)
{ return (n == (n & (-n)));
}
inline int intlog2(uint64_t n)
{
 static const unsigned char intlog2_table[] =
 { 0, 0, 1, 39, 2, 15, 40, 23,
 3, 12, 16, 59, 41, 19, 24, 54,
 4,0, 13, 10, 17, 62, 60, 28,
 42, 30, 20, 51, 25, 44, 55, 47,
 5,32, 0, 38, 14, 22, 11, 58,
 18, 53, 63, 9, 61, 27, 29, 50,
 43, 46, 31, 37, 21, 57, 52, 8,
 26, 49, 45, 36, 56, 7, 48, 35,
 6,34, 33
 };
 return intlog2_table[n % (sizeof(intlog2_table)/sizeof(
 intlog2_table[0]))];
}
inline int type_of_vector(LispObject v)
{ if (is_basic_vector(v)) return type_of_header(vechdr(v));
 else return type_of_header(vechdr(basic_elt(v, 0)));
}
inline size_t bytes_in_bytevector(LispObject v)
{ if (is_basic_vector(v)) return length_of_byteheader(vechdr(v)) - CELL;
 size_t n = (length_of_header(vechdr(v))-CELL)/CELL;
 return VECTOR_CHUNK_BYTES*(n-1) +
 length_of_byteheader(vechdr(basic_elt(v, n-1))) - CELL;
}
inline size_t hwords_in_hwordvector(LispObject v)
{ if (is_basic_vector(v)) return length_of_hwordheader(vechdr(v)) - (CELL/2);
 size_t n = (length_of_header(vechdr(v))-CELL)/CELL;
 return (VECTOR_CHUNK_BYTES/2)*(n-1) +
 length_of_hwordheader(vechdr(basic_elt(v, n-1))) - (CELL/2);
}
inline size_t bits_in_bitvector(LispObject v)
{ if (is_basic_vector(v)) return length_of_bitheader(vechdr(v)) - 8*CELL;
 size_t n = (length_of_header(vechdr(v))-CELL)/CELL;
 return (8*VECTOR_CHUNK_BYTES)*(n-1) +
 length_of_bitheader(vechdr(basic_elt(v, n-1))) - 8*CELL;
}
inline size_t bytes_in_vector(LispObject v)
{ if (is_basic_vector(v)) return length_of_header(vechdr(v)) - CELL;
 size_t n = (length_of_header(vechdr(v))-CELL)/CELL;
 return VECTOR_CHUNK_BYTES*(n-1) +
 length_of_header(vechdr(basic_elt(v, n-1))) - CELL;
}
inline size_t cells_in_vector(LispObject v)
{ return bytes_in_vector(v)/CELL;
}
inline bool vector_holds_binary(LispObject v)
{ if (is_basic_vector(v)) return vector_holds_binary(vechdr(v));
 else return vector_holds_binary(vechdr(basic_elt(v, 0)));
}
extern LispObject free_vectors[LOG2_VECTOR_CHUNK_BYTES+1];
inline void discard_basic_vector(LispObject v)
{ size_t size = length_of_header(vechdr(v));
 size_t n = size/CELL - 1;
 if (is_power_of_two(n)) 
 { int i = intlog2(n); 
 if (i <= LOG2_VECTOR_CHUNK_BYTES)
 { basic_elt(v, 0) = free_vectors[i];
 setvechdr(v,TYPE_SIMPLE_VEC +
 (size << (Tw+5)) +
 TAG_HDR_IMMED);
 v = (v & ~reinterpret_cast<uintptr_t>(TAG_BITS)) | TAG_VECTOR;
 free_vectors[i] = v;
 }
 }
}
inline void discard_vector(LispObject v)
{ if (is_basic_vector(v)) discard_basic_vector(v);
 else
 { size_t n1 = length_of_header(vechdr(v))/CELL - 1;
 for (size_t i=0; i<n1; i++)
 discard_basic_vector(basic_elt(v, i));
 discard_basic_vector(v);
 }
}
inline atomic<LispObject>& elt(LispObject v, size_t n)
{ if (is_basic_vector(v)) return basic_elt(v, n);
 return basic_elt(basic_elt(v, n/(VECTOR_CHUNK_BYTES/CELL)),
 n%(VECTOR_CHUNK_BYTES/CELL));
}
inline char& celt(LispObject v, size_t n)
{ if (is_basic_vector(v)) return basic_celt(v, n);
 return basic_celt(basic_elt(v, n/VECTOR_CHUNK_BYTES),
 n%VECTOR_CHUNK_BYTES);
}
inline unsigned char& ucelt(LispObject v, size_t n)
{ if (is_basic_vector(v)) return basic_ucelt(v, n);
 return basic_ucelt(basic_elt(v, n/VECTOR_CHUNK_BYTES),
 n%VECTOR_CHUNK_BYTES);
}
inline signed char& scelt(LispObject v, size_t n)
{ if (is_basic_vector(v)) return basic_scelt(v, n);
 return basic_scelt(basic_elt(v, n/VECTOR_CHUNK_BYTES),
 n%VECTOR_CHUNK_BYTES);
}
inline int16_t& helt(LispObject v, size_t n)
{ if (is_basic_vector(v)) return basic_helt(v, n);
 return basic_helt(elt(v, n/(VECTOR_CHUNK_BYTES/sizeof(int16_t))),
 n%(VECTOR_CHUNK_BYTES/sizeof(int16_t)));
}
inline intptr_t& ielt(LispObject v, size_t n)
{ if (is_basic_vector(v)) return basic_ielt(v, n);
 return basic_ielt(
 elt(v, n/(VECTOR_CHUNK_BYTES/sizeof(intptr_t))),
 n%(VECTOR_CHUNK_BYTES/sizeof(intptr_t)));
}
inline int32_t& ielt32(LispObject v, size_t n)
{ if (is_basic_vector(v)) return basic_ielt32(v, n);
 return basic_ielt32(elt(v, n/(VECTOR_CHUNK_BYTES/sizeof(int32_t))),
 n%(VECTOR_CHUNK_BYTES/sizeof(int32_t)));
}
inline float& felt(LispObject v, size_t n)
{ if (is_basic_vector(v)) return basic_felt(v, n);
 return basic_felt(elt(v, n/(VECTOR_CHUNK_BYTES/sizeof(float))),
 n%(VECTOR_CHUNK_BYTES/sizeof(float)));
}
inline double& delt(LispObject v, size_t n)
{ if (is_basic_vector(v)) return basic_delt(v, n);
 return basic_delt(elt(v, n/(VECTOR_CHUNK_BYTES/sizeof(double))),
 n%(VECTOR_CHUNK_BYTES/sizeof(double)));
}
inline bool is_header(LispObject x)
{ return (static_cast<int>(x) & (0x3<<Tw)) != 0; 
}
inline bool is_char(LispObject x)
{ return (static_cast<int>(x) & HDR_IMMED_MASK) == TAG_CHAR;
}
inline bool is_spid(LispObject x)
{ return (static_cast<int>(x) & HDR_IMMED_MASK) == TAG_SPID;
}
inline bool is_library(LispObject x)
{ return (static_cast<int>(x) & 0xfffff) == SPID_LIBRARY;
}
inline unsigned int library_number(LispObject x)
{ return (x >> 20) & 0xfff;
}
inline int font_of_char(LispObject n)
{ return (static_cast<int32_t>(n) >> (21+4+Tw)) & 0xf;
}
inline int bits_of_char(LispObject n)
{ return 0;
}
inline unsigned int code_of_char(LispObject n)
{ return (static_cast<uint32_t>(n) >> (4+Tw)) & 0x001fffff;
}
inline LispObject pack_char(int font, unsigned int code)
{ return static_cast<LispObject>(
 ((static_cast<uint32_t>(font)) << (21+4+Tw)) |
 ((static_cast<uint32_t>(code)) << (4+Tw)) | TAG_CHAR);
}
#define CHAR_EOF pack_char(0, 0x0010ffff)
typedef int32_t
junk; 
typedef intptr_t junkxx; 
typedef struct Symbol_Head_
{ Header header; 
 LispObject value; 
 LispObject env; 
 LispObject plist; 
 LispObject fastgets; 
 LispObject package; 
 LispObject pname; 
 intptr_t function0; 
 intptr_t function1; 
 intptr_t function2; 
 intptr_t function3; 
 intptr_t function4up;
 uint64_t count; 
} Symbol_Head;
#ifdef FUTURE_IDEA
typedef struct Symbol_Head_
{ Header header; 
 LispObject value; 
 LispObject plist; 
 LispObject fastgets; 
 LispObject pname; 
 LispObject package; 
 LispObject function; 
 uintptr_t count; 
} Symbol_Head;
typedef struct Function_Object_
{ Header header; 
 LispObject env; 
 intptr_t function0; 
 intptr_t function1; 
 intptr_t function2; 
 intptr_t function3; 
 intptr_t function4up;
 uintptr_t count; 
} Function_Object;
typedef struct Bytecoded_Function_Object_
{ Header header; 
 LispObject env; 
 intptr_t function0; 
 intptr_t function1; 
 intptr_t function2; 
 intptr_t function3; 
 intptr_t function4up;
 uintptr_t count; 
 unsigned char bytecodes[]; 
} Bytecoded_Function_Object;
#endif 
#define MAX_FASTGET_SIZE 63
inline Header qheader(LispObject p,
 std::memory_order mo=std::memory_order_relaxed)
{ return (reinterpret_cast<atomic<Header> *>
 (reinterpret_cast<char *>(p) + (0*CELL-TAG_SYMBOL)))->load(mo);
}
inline LispObject qvalue(LispObject p,
 std::memory_order mo=std::memory_order_relaxed)
{ return (reinterpret_cast<atomic<LispObject> *>
 (reinterpret_cast<char *>(p) + (1*CELL-TAG_SYMBOL)))->load(mo);
}
inline LispObject qenv(LispObject p,
 std::memory_order mo=std::memory_order_relaxed)
{ return (reinterpret_cast<atomic<LispObject> *>
 (reinterpret_cast<char *>(p) + (2*CELL-TAG_SYMBOL)))->load(mo);
}
inline LispObject qplist(LispObject p,
 std::memory_order mo=std::memory_order_relaxed)
{ return (reinterpret_cast<atomic<LispObject> *>
 (reinterpret_cast<char *>(p) + (3*CELL-TAG_SYMBOL)))->load(mo);
}
inline LispObject qfastgets(LispObject p,
 std::memory_order mo=std::memory_order_relaxed)
{ return (reinterpret_cast<atomic<LispObject> *>
 (reinterpret_cast<char *>(p) + (4*CELL-TAG_SYMBOL)))->load(mo);
}
inline LispObject qpackage(LispObject p,
 std::memory_order mo=std::memory_order_relaxed)
{ return (reinterpret_cast<atomic<LispObject> *>
 (reinterpret_cast<char *>(p) + (5*CELL-TAG_SYMBOL)))->load(mo);
}
inline LispObject qpname(LispObject p,
 std::memory_order mo=std::memory_order_relaxed)
{ return (reinterpret_cast<atomic<LispObject> *>
 (reinterpret_cast<char *>(p) + (6*CELL-TAG_SYMBOL)))->load(mo);
}
inline atomic<LispObject> *valueaddr(LispObject p)
{ return reinterpret_cast<atomic<LispObject> *>
 (reinterpret_cast<char *>(p) + (1*CELL-TAG_SYMBOL));
}
inline atomic<LispObject> *envaddr(LispObject p)
{ return reinterpret_cast<atomic<LispObject> *>
 (reinterpret_cast<char *>(p) + (2*CELL-TAG_SYMBOL));
}
inline atomic<LispObject> *plistaddr(LispObject p)
{ return reinterpret_cast<atomic<LispObject> *>
 (reinterpret_cast<char *>(p) + (3*CELL-TAG_SYMBOL));
}
inline atomic<LispObject> *fastgetsaddr(LispObject p)
{ return reinterpret_cast<atomic<LispObject> *>
 (reinterpret_cast<char *>(p) + (4*CELL-TAG_SYMBOL));
}
inline atomic<LispObject> *packageaddr(LispObject p)
{ return reinterpret_cast<atomic<LispObject> *>
 (reinterpret_cast<char *>(p) + (5*CELL-TAG_SYMBOL));
}
inline atomic<LispObject> *pnameaddr(LispObject p)
{ return reinterpret_cast<atomic<LispObject> *>
 (reinterpret_cast<char *>(p) + (6*CELL-TAG_SYMBOL));
}
inline void setheader(LispObject p, Header h,
 std::memory_order mo=std::memory_order_relaxed)
{ (reinterpret_cast<atomic<Header> *>(reinterpret_cast<char *>
 (p) + (0*CELL-TAG_SYMBOL)))->store(h, mo);
}
inline void setvalue(LispObject p, LispObject q,
 std::memory_order mo=std::memory_order_relaxed)
{ (reinterpret_cast<atomic<LispObject> *>(reinterpret_cast<char *>
 (p) + (1*CELL-TAG_SYMBOL)))->store(q, mo);
}
inline void setenv(LispObject p, LispObject q,
 std::memory_order mo=std::memory_order_relaxed)
{ (reinterpret_cast<atomic<LispObject> *>(reinterpret_cast<char *>
 (p) + (2*CELL-TAG_SYMBOL)))->store(q, mo);
}
inline void setplist(LispObject p, LispObject q,
 std::memory_order mo=std::memory_order_relaxed)
{ (reinterpret_cast<atomic<LispObject> *>(reinterpret_cast<char *>
 (p) + (3*CELL-TAG_SYMBOL)))->store(q, mo);
}
inline void setfastgets(LispObject p, LispObject q,
 std::memory_order mo=std::memory_order_relaxed)
{ (reinterpret_cast<atomic<LispObject> *>(reinterpret_cast<char *>
 (p) + (4*CELL-TAG_SYMBOL)))->store(q, mo);
}
inline void setpackage(LispObject p, LispObject q,
 std::memory_order mo=std::memory_order_relaxed)
{ (reinterpret_cast<atomic<LispObject> *>(reinterpret_cast<char *>
 (p) + (5*CELL-TAG_SYMBOL)))->store(q, mo);
}
inline void setpname(LispObject p, LispObject q,
 std::memory_order mo=std::memory_order_relaxed)
{ (reinterpret_cast<atomic<LispObject> *>(reinterpret_cast<char *>
 (p) + (6*CELL-TAG_SYMBOL)))->store(q, mo);
}
inline intptr_t& ifn0(LispObject p)
{ return *reinterpret_cast<intptr_t *>(reinterpret_cast<char *>
 (p) + (7*CELL-TAG_SYMBOL));
}
inline intptr_t& ifn1(LispObject p)
{ return *reinterpret_cast<intptr_t *>(reinterpret_cast<char *>
 (p) + (8*CELL-TAG_SYMBOL));
}
inline intptr_t& ifn2(LispObject p)
{ return *reinterpret_cast<intptr_t *>(reinterpret_cast<char *>
 (p) + (9*CELL-TAG_SYMBOL));
}
inline intptr_t& ifn3(LispObject p)
{ return *reinterpret_cast<intptr_t *>(reinterpret_cast<char *>
 (p) + (10*CELL-TAG_SYMBOL));
}
inline intptr_t& ifn4up(LispObject p)
{ return *reinterpret_cast<intptr_t *>(reinterpret_cast<char *>
 (p) + (11*CELL-TAG_SYMBOL));
}
inline intptr_t& ifnunused(LispObject p)
{ return *reinterpret_cast<intptr_t *>(reinterpret_cast<char *>
 (p) + (12*CELL-TAG_SYMBOL));
}
inline intptr_t& ifnn(LispObject p)
{ return *reinterpret_cast<intptr_t *>(reinterpret_cast<char *>
 (p) + (13*CELL-TAG_SYMBOL));
}
inline no_args*& qfn0(LispObject p)
{ return *((no_args **)(reinterpret_cast<char *>(p) +
 (7*CELL-TAG_SYMBOL)));
}
inline one_arg*& qfn1(LispObject p)
{ return *(one_arg **)(reinterpret_cast<char *>(p) +
 (8*CELL-TAG_SYMBOL));
}
inline two_args*& qfn2(LispObject p)
{ return *(two_args **)(reinterpret_cast<char *>(p) +
 (9*CELL-TAG_SYMBOL));
}
inline three_args*& qfn3(LispObject p)
{ return *(three_args **)(reinterpret_cast<char *>(p) +
 (10*CELL-TAG_SYMBOL));
}
inline fourup_args*& qfn4up(LispObject p)
{ return *(fourup_args **)(reinterpret_cast<char *>(p) +
 (11*CELL-TAG_SYMBOL));
}
[[noreturn]] extern LispObject aerror1(const char *s, LispObject a);
inline LispObject arg4(const char *name, LispObject a4up)
{ if (cdr(a4up) != nil) aerror1(name,
 a4up); 
 return car(a4up);
}
inline void a4a5(const char *name, LispObject a4up,
 LispObject& a4, LispObject& a5)
{ a4 = car(a4up);
 a4up = cdr(a4up);
 if (a4up==nil ||
 cdr(a4up) != nil) aerror1(name, a4up); 
 a5 = car(a4up);
}
inline void a4a5a6(const char *name, LispObject a4up,
 LispObject& a4, LispObject& a5, LispObject& a6)
{ a4 = car(a4up);
 a4up = cdr(a4up);
 if (a4up == nil) aerror1(name, a4up); 
 a5 = car(a4up);
 a4up = cdr(a4up);
 if (a4up==nil ||
 cdr(a4up) != nil) aerror1(name, a4up); 
 a6 = car(a4up);
}
inline atomic<uint64_t>& qcount(LispObject p)
{ return *(atomic<uint64_t> *)(reinterpret_cast<char *>(p) +
 (12*CELL-TAG_SYMBOL));
}
#ifdef SIXTY_FOUR_BIT
static const uint64_t zeroCount = TAG_FIXNUM;
inline uint64_t valueOfCount(uint64_t n)
{ return n >> 4;
}
inline uint64_t countOfValue(uint64_t n)
{ return (n << 4) + TAG_FIXNUM;
}
inline void incCount(atomic<uint64_t>& n, int m=1)
{ n.fetch_add(0x10*m);
}
#else
static const uint64_t zeroCount =
 TAG_FIXNUM | (static_cast<uint64_t>(TAG_FIXNUM)<<32);
inline uint64_t valueOfCount(uint64_t n)
{ return ((n >> 4) & 0x0fffffffU) |
 ((n >> 8) & 0x00fffffff0000000U);
}
inline uint64_t countOfValue(uint64_t n)
{ return zeroCount |
 ((n & 0x0fffffffU) << 4) |
 ((n & 0x00fffffff0000000U) << 8);
}
inline void incCount(atomic<uint64_t>& n, int m=1)
{ for (;;)
 { uint64_t old = n.load();
 uint64_t next = old + 0x10*m;
 if ((next & 0xff00000000U) != (old & 0xff00000000U))
 next += 0x0000000f00000000U;
 if (n.compare_exchange_weak(old, next) break;
 }
}
#endif
#ifndef HAVE_SOFTFLOAT
typedef struct _float32_t
{ uint32_t v;
} float32_t;
typedef struct _float64_t
{ uint64_t v;
} float64_t;
#endif
typedef union _Float_union
{ float f;
 uint32_t i;
 float32_t f32;
} Float_union;
inline LispObject low32(LispObject a)
{ return static_cast<LispObject>(static_cast<uint32_t>(a));
}
typedef struct Big_Number_
{
 Header h;
 uint32_t d[1]; 
} Big_Number;
inline size_t bignum_length(LispObject b)
{ return length_of_header(numhdr(b));
}
inline uint32_t* bignum_digits(LispObject b)
{ return reinterpret_cast<uint32_t *>(
 reinterpret_cast<char *>(b) + (CELL-TAG_NUMBERS));
}
inline uint32_t* vbignum_digits(LispObject b)
{ return reinterpret_cast<uint32_t *>(
 reinterpret_cast<char *>(b) + (CELL-TAG_NUMBERS));
}
inline int64_t bignum_digits64(LispObject b, size_t n)
{ return static_cast<int64_t>(
 reinterpret_cast<int32_t *>(
 reinterpret_cast<char *>(b)+(CELL-TAG_NUMBERS))[n]);
}
inline Header make_bighdr(size_t n)
{ return TAG_HDR_IMMED+TYPE_BIGNUM+(n<<(Tw+7));
}
inline Header make_new_bighdr(size_t n)
{ return TAG_HDR_IMMED+TYPE_NEW_BIGNUM+(n<<(Tw+8));
}
inline uint64_t* new_bignum_digits(LispObject b)
{ return reinterpret_cast<uint64_t *>(
 reinterpret_cast<char *>(b) + (8-TAG_NUMBERS));
}
#define pack_hdrlength(n) (static_cast<intptr_t>(n)<<(Tw+7))
typedef struct Rational_Number_
{ atomic<Header> header;
 atomic<LispObject> num;
 atomic<LispObject> den;
} Rational_Number;
inline LispObject numerator(LispObject r,
 std::memory_order mo=std::memory_order_relaxed)
{ return ((Rational_Number *)(reinterpret_cast<char *>
 (r)-TAG_NUMBERS))->num.load(mo);
}
inline LispObject denominator(LispObject r,
 std::memory_order mo=std::memory_order_relaxed)
{ return ((Rational_Number *)(reinterpret_cast<char *>
 (r)-TAG_NUMBERS))->den.load(mo);
}
inline void setnumerator(LispObject r, LispObject v,
 std::memory_order mo=std::memory_order_relaxed)
{ ((Rational_Number *)(reinterpret_cast<char *>
 (r)-TAG_NUMBERS))->num.store(v, mo);
}
inline void setdenominator(LispObject r, LispObject v,
 std::memory_order mo=std::memory_order_relaxed)
{ return ((Rational_Number *)(reinterpret_cast<char *>
 (r)-TAG_NUMBERS))->den.store(v, mo);
}
typedef struct Complex_Number_
{ atomic<Header> header;
 atomic<LispObject> real;
 atomic<LispObject> imag;
} Complex_Number;
inline LispObject real_part(LispObject r,
 std::memory_order mo=std::memory_order_relaxed)
{ return ((Complex_Number *)(reinterpret_cast<char *>
 (r)-TAG_NUMBERS))->real.load(mo);
}
inline LispObject imag_part(LispObject r,
 std::memory_order mo=std::memory_order_relaxed)
{ return ((Complex_Number *)(reinterpret_cast<char *>
 (r)-TAG_NUMBERS))->imag.load(mo);
}
inline void setreal_part(LispObject r, LispObject v,
 std::memory_order mo=std::memory_order_relaxed)
{ return ((Complex_Number *)(reinterpret_cast<char *>
 (r)-TAG_NUMBERS))->real.store(v, mo);
}
inline void setimag_part(LispObject r, LispObject v,
 std::memory_order mo=std::memory_order_relaxed)
{ return ((Complex_Number *)(reinterpret_cast<char *>
 (r)-TAG_NUMBERS))->imag.store(v, mo);
}
typedef struct Single_Float_
{ atomic<Header> header;
 union float_or_int
 { float f;
 float32_t f32;
 int32_t i;
 } f;
} Single_Float;
inline float& single_float_val(LispObject v)
{ return ((Single_Float *)(reinterpret_cast<char *>
 (v)-TAG_BOXFLOAT))->f.f;
}
inline float32_t& float32_t_val(LispObject v)
{ return ((Single_Float *)(reinterpret_cast<char *>
 (v)-TAG_BOXFLOAT))->f.f32;
}
inline int32_t& intfloat32_t_val(LispObject v)
{ return ((Single_Float *)(reinterpret_cast<char *>
 (v)-TAG_BOXFLOAT))->f.i;
}
typedef union _Double_union
{ double f;
 uint32_t i[2];
 uint64_t i64;
 float64_t f64;
} Double_union;
#define SIZEOF_DOUBLE_FLOAT 16
inline double *double_float_addr(LispObject v)
{ return reinterpret_cast<double *>(reinterpret_cast<char *>(v) +
 (8-TAG_BOXFLOAT));
}
inline int32_t& double_float_pad(LispObject v)
{ return *reinterpret_cast<int32_t *>(reinterpret_cast<char *>
 (v) + (4-TAG_BOXFLOAT));
}
inline double& double_float_val(LispObject v)
{ return *reinterpret_cast<double *>(reinterpret_cast<char *>(v) +
 (8-TAG_BOXFLOAT));
}
inline float64_t& float64_t_val(LispObject v)
{ return *reinterpret_cast<float64_t *>(reinterpret_cast<char *>
 (v) + (8-TAG_BOXFLOAT));
}
inline int64_t& intfloat64_t_val(LispObject v)
{ return *reinterpret_cast<int64_t *>(reinterpret_cast<char *>
 (v) + (8-TAG_BOXFLOAT));
}
inline int32_t& intfloat64_t_val_hi(LispObject v)
{ return *reinterpret_cast<int32_t *>(reinterpret_cast<char *>
 (v) + (8-TAG_BOXFLOAT));
}
inline int32_t& intfloat64_t_val_lo(LispObject v)
{ return *reinterpret_cast<int32_t *>(
 reinterpret_cast<char *>(v) + (12-TAG_BOXFLOAT));
}
#ifdef HAVE_SOFTFLOAT
#define SIZEOF_LONG_FLOAT 24
inline float128_t *long_float_addr(LispObject v)
{ return (float128_t *)(reinterpret_cast<char *>(v) +
 (8-TAG_BOXFLOAT));
}
inline int32_t& long_float_pad(LispObject v)
{ return *reinterpret_cast<int32_t *>(reinterpret_cast<char *>
 (v) + (4-TAG_BOXFLOAT));
}
inline float128_t& long_float_val(LispObject v)
{ return *reinterpret_cast<float128_t *>(reinterpret_cast<char *>
 (v) + (8-TAG_BOXFLOAT));
}
inline float128_t& float128_t_val(LispObject v)
{ return *reinterpret_cast<float128_t *>(reinterpret_cast<char *>
 (v) + (8-TAG_BOXFLOAT));
}
inline int64_t& intfloat128_t_val0(LispObject v)
{ return *reinterpret_cast<int64_t *>(
 reinterpret_cast<char *>(
 v) + (8-TAG_BOXFLOAT));
}
inline int64_t& intfloat128_t_val1(LispObject v)
{ return *reinterpret_cast<int64_t *>(
 reinterpret_cast<char *>(
 v) + (16-TAG_BOXFLOAT));
}
inline int32_t& intfloat128_t_val32_0(LispObject v)
{ return *reinterpret_cast<int32_t *>(
 reinterpret_cast<char *>(v) + (8-TAG_BOXFLOAT));
}
inline int32_t& intfloat128_t_val32_1(LispObject v)
{ return *reinterpret_cast<int32_t *>(
 reinterpret_cast<char *>(v) + (12-TAG_BOXFLOAT));
}
inline int32_t& intfloat128_t_val32_2(LispObject v)
{ return *reinterpret_cast<int32_t *>(
 reinterpret_cast<char *>(
 v) + (16-TAG_BOXFLOAT));
}
inline int32_t& intfloat128_t_val32_3(LispObject v)
{ return *reinterpret_cast<int32_t *>(
 reinterpret_cast<char *>(v) + (20-TAG_BOXFLOAT));
}
#endif 
inline uintptr_t word_align_up(uintptr_t n)
{ return static_cast<LispObject>((n + 3) & (-static_cast<uintptr_t>
 (4U)));
}
inline uintptr_t doubleword_align_up(uintptr_t n)
{ return static_cast<uintptr_t>(
 (n + 7) & (-static_cast<uintptr_t>(8U)));
}
inline LispObject doubleword_align_up(LispObject n)
{ return static_cast<LispObject>(
 (static_cast<uintptr_t>(n) + 7) &
 (-static_cast<uintptr_t>(8U)));
}
inline uintptr_t doubleword_align_down(uintptr_t n)
{ return static_cast<uintptr_t>(
 static_cast<intptr_t>(n) & (-static_cast<uintptr_t>(8U)));
}
inline uintptr_t object_align_up(uintptr_t n)
{ return static_cast<uintptr_t>((n + sizeof(LispObject) - 1) &
 (-static_cast<uintptr_t>(sizeof(LispObject))));
}
inline uintptr_t object_2_align_up(uintptr_t n)
{ return static_cast<uintptr_t>(
 (n + 2*sizeof(LispObject) - 1) &
 (-static_cast<uintptr_t>(
 2)*sizeof(LispObject)));
}
#define UNWIND_NULL 0x0 
#define UNWIND_GO 0x1 
#define UNWIND_RETURN 0x2 
#define UNWIND_THROW 0x3 
#define UNWIND_RESTART 0x4 
#define UNWIND_RESOURCE 0x5 
#define UNWIND_SIGNAL 0x6 
#define UNWIND_SIGINT 0x7 
#define UNWIND_FNAME 0x100 
#define UNWIND_ARGS 0x200 
#define UNWIND_ERROR (UNWIND_FNAME|UNWIND_ARGS)
#define UNWIND_UNWIND 0x400 
#define SHOW_FNAME ((exit_reason & UNWIND_FNAME) != 0)
#define SHOW_ARGS ((exit_reason & UNWIND_ARGS) != 0)
#define HASH_AS_EQ 0
#define HASH_AS_EQL 1
#define HASH_AS_CL_EQUAL 2
#define HASH_AS_EQUAL 3
#define HASH_AS_EQUALP 4
#define HASH_AS_SYMBOL 5
#define HASH_AS_SXHASH 6
#endif 
#ifndef header_thread_local_h
#define header_thread_local_h 1
#if defined __cpp_inline_variables && \
 (defined __CYGWIN__ || defined __MINGW32__)
extern "C"
{
#ifdef __LP64__
 typedef unsigned int tls_handle;
#else
 typedef unsigned long tls_handle;
#endif
 extern __declspec(dllimport) tls_handle TlsAlloc(void);
 extern __declspec(dllimport) int TlsFree(tls_handle);
 extern __declspec(dllimport) void *TlsGetValue(tls_handle);
 extern __declspec(dllimport) int TlsSetValue(tls_handle, void *);
};
#ifdef CAUTIOUS
inline void *tls_load(tls_handle teb_slot)
{ return TlsGetValue(teb_slot);
}
inline void tls_store(tls_handle teb_slot, void *v)
{ TlsSetValue(teb_slot, v);
}
#else 
#if __SIZEOF_POINTER__ == 4
#define MOVE_INSTRUCTION "movl"
#define SEGMENT_REGISTER "%%fs"
#define basic_TLS_offset 0xe10
#define extended_TLS_offset 0xf94
#else 
#define MOVE_INSTRUCTION "movq"
#define SEGMENT_REGISTER "%%gs"
#define basic_TLS_offset 0x1480
#define extended_TLS_offset 0x1780
#endif 
inline void *read_via_segment_register(tls_handle n)
{ void *r;
 asm volatile
 ( MOVE_INSTRUCTION "  " SEGMENT_REGISTER ":(%1), %0"
 : "=r" (r)
 : "r" (n)
 :
 );
 return r;
}
inline void write_via_segment_register(tls_handle n, void *v)
{ asm volatile
 ( MOVE_INSTRUCTION " %0, " SEGMENT_REGISTER ":(%1)"
 :
 : "r" (v), "r" (n)
 :
 );
}
inline void *extended_tls_load(tls_handle teb_slot)
{ void **a = (void **)read_via_segment_register(
 extended_TLS_offset);
 return a[teb_slot - 64];
}
inline void extended_tls_store(tls_handle teb_slot, void *v)
{ void **a = (void **)read_via_segment_register(
 extended_TLS_offset);
 a[teb_slot - 64] = v;
}
inline void *tls_load(tls_handle teb_slot)
{ if (teb_slot >= 64) return extended_tls_load(teb_slot);
 else return reinterpret_cast<void *>(read_via_segment_register(
 basic_TLS_offset + sizeof(void *)*teb_slot));
}
inline void tls_store(tls_handle teb_slot, void *v)
{ if (teb_slot >= 64) return extended_tls_store(teb_slot, v);
 else write_via_segment_register(
 basic_TLS_offset + sizeof(void *)*teb_slot, v);
}
#endif 
class TlsHandle
{
public:
 tls_handle h;
 TlsHandle()
 { h = TlsAlloc();
 }
 ~TlsHandle()
 { TlsFree(h);
 }
};
#ifdef DEBUG
#define declare_thread_local(name, Type) \
class name \
{ \
 static inline TlsHandle H; \
 static inline thread_local Type val; \
public: \
 static Type get() \
 { return reinterpret_cast<Type>(tls_load(H.h)); \
 } \
 static void set(Type v) \
 { tls_store(H.h, reinterpret_cast<void *>(v)); \
 val = v; \
 } \
};
#else 
#define declare_thread_local(name, Type) \
class name \
{ \
 static inline TlsHandle H; \
public: \
 static Type get() \
 { return reinterpret_cast<Type>(tls_load(H.h)); \
 } \
 static void set(Type v) \
 { tls_store(H.h, reinterpret_cast<void *>(v)); \
 } \
};
#endif 
#define declare_thread_local_ref(name, Type) \
class name ## _Ref \
{ \
 static Type* get() \
 { static thread_local Type val; \
 return &val; \
 } \
public: \
 static inline TlsHandle H; \
 name ## _Ref() \
 { tls_store(H.h, reinterpret_cast<void *>(get())); \
 } \
}; \
class name \
{ \
public: \
 static Type &get() \
 { static thread_local name ## _Ref val; \
 return *reinterpret_cast<Type*>(tls_load(val.H.h)); \
 } \
};
#elif defined __cpp_inline_variables
#define declare_thread_local(name, Type) \
class name \
{ \
 static inline thread_local Type val; \
public: \
 static Type& get() \
 { return val; \
 } \
 static void set(Type v) \
 { val = v; \
 } \
};
#define declare_thread_local_ref(name, Type) \
class name \
{ \
 static inline thread_local Type val; \
public: \
 static Type& get() \
 { return val; \
 } \
};
#else
#define declare_thread_local(name, Type) \
class name \
{ \
 static Type& val() \
 { static thread_local Type Val; \
 return Val; \
 } \
public: \
 static Type& get() \
 { return val(); \
 } \
 static void set(Type v) \
 { val() = v; \
 } \
};
#define declare_thread_local_ref(name, Type) \
class name \
{ \
public: \
 static Type& get() \
 { static thread_local Type val; \
 return val; \
 } \
};
#endif 
#endif 
#ifndef header_cslerror_h
#define header_cslerror_h 1
extern void interrupted(bool noisy);
[[noreturn]] extern LispObject error(int nargs, int code, ...);
[[noreturn]] extern LispObject cerror(int nargs, int code1, int code2, ...);
[[noreturn]] extern LispObject got_0_wanted_1(LispObject env);
[[noreturn]] extern LispObject got_0_wanted_2(LispObject env);
[[noreturn]] extern LispObject got_0_wanted_3(LispObject env);
[[noreturn]] extern LispObject got_0_wanted_4up(LispObject env);
[[noreturn]] extern LispObject got_0_wanted_other(LispObject env);
[[noreturn]] extern LispObject got_1_wanted_0(LispObject env,
 LispObject a1);
[[noreturn]] extern LispObject got_1_wanted_2(LispObject env,
 LispObject a1);
[[noreturn]] extern LispObject got_1_wanted_3(LispObject env,
 LispObject a1);
[[noreturn]] extern LispObject got_1_wanted_4up(LispObject env,
 LispObject a1);
[[noreturn]] extern LispObject got_1_wanted_other(LispObject env,
 LispObject a1);
[[noreturn]] extern LispObject got_2_wanted_0(LispObject env, LispObject a1,
 LispObject a2);
[[noreturn]] extern LispObject got_2_wanted_1(LispObject env, LispObject a1,
 LispObject a2);
[[noreturn]] extern LispObject got_2_wanted_3(LispObject env, LispObject a1,
 LispObject a2);
[[noreturn]] extern LispObject got_2_wanted_4up(LispObject env,
 LispObject a1,
 LispObject a2);
[[noreturn]] extern LispObject got_2_wanted_other(LispObject env,
 LispObject a1,
 LispObject a2);
[[noreturn]] extern LispObject got_3_wanted_0(LispObject env, LispObject a1,
 LispObject a2, LispObject a3);
[[noreturn]] extern LispObject got_3_wanted_1(LispObject env, LispObject a1,
 LispObject a2, LispObject a3);
[[noreturn]] extern LispObject got_3_wanted_2(LispObject env, LispObject a1,
 LispObject a2, LispObject a3);
[[noreturn]] extern LispObject got_3_wanted_4up(LispObject env,
 LispObject a1,
 LispObject a2, LispObject a3);
[[noreturn]] extern LispObject got_3_wanted_other(LispObject env,
 LispObject a1,
 LispObject a2, LispObject a3);
[[noreturn]] extern LispObject got_4up_wanted_0(LispObject env,
 LispObject a1,
 LispObject a2, LispObject a3,
 LispObject a4up);
[[noreturn]] extern LispObject got_4up_wanted_1(LispObject env,
 LispObject a1,
 LispObject a2, LispObject a3,
 LispObject a4up);
[[noreturn]] extern LispObject got_4up_wanted_2(LispObject env,
 LispObject a1,
 LispObject a2, LispObject a3,
 LispObject a4up);
[[noreturn]] extern LispObject got_4up_wanted_3(LispObject env,
 LispObject a1,
 LispObject a2, LispObject a3,
 LispObject a4up);
[[noreturn]] extern LispObject got_4up_wanted_other(LispObject env,
 LispObject a1,
 LispObject a2, LispObject a3,
 LispObject a4up);
[[noreturn]] extern LispObject bad_specialfn_0(LispObject env);
[[noreturn]] extern LispObject bad_specialfn_2(LispObject env, LispObject,
 LispObject);
[[noreturn]] extern LispObject bad_specialfn_3(LispObject env, LispObject,
 LispObject, LispObject);
[[noreturn]] extern LispObject bad_specialfn_4up(LispObject env, LispObject,
 LispObject, LispObject, LispObject);
#define G0W1 got_0_wanted_1
#define G0W2 got_0_wanted_2
#define G0W3 got_0_wanted_3
#define G0W4up got_0_wanted_4up
#define G0Wother got_0_wanted_other
#define G1W0 got_1_wanted_0
#define G1W2 got_1_wanted_2
#define G1W3 got_1_wanted_3
#define G1W4up got_1_wanted_4up
#define G1Wother got_1_wanted_other
#define G2W0 got_2_wanted_0
#define G2W1 got_2_wanted_1
#define G2W3 got_2_wanted_3
#define G2W4up got_2_wanted_4up
#define G2Wother got_2_wanted_other
#define G3W0 got_3_wanted_0
#define G3W1 got_3_wanted_1
#define G3W2 got_3_wanted_2
#define G3W4up got_3_wanted_4up
#define G3Wother got_3_wanted_other
#define G4W0 got_4up_wanted_0
#define G4W1 got_4up_wanted_1
#define G4W2 got_4up_wanted_2
#define G4W3 got_4up_wanted_3
#define G4Wother got_4up_wanted_other
[[noreturn]] extern LispObject aerror(const char
 *s); 
[[noreturn]] extern LispObject aerror0(const char *s);
[[noreturn]] extern LispObject aerror1(const char *s, LispObject a);
[[noreturn]] extern LispObject aerror2(const char *s, LispObject a,
 LispObject b);
[[noreturn]] extern LispObject aerror2(const char *s, const char *a,
 LispObject b);
[[noreturn]] extern LispObject aerror3(const char *s, LispObject a,
 LispObject b, LispObject c);
[[noreturn]] extern void fatal_error(int code, ...);
extern LispObject carerror(LispObject a);
extern LispObject cdrerror(LispObject a);
[[noreturn]] extern LispObject car_fails(LispObject a);
[[noreturn]] extern LispObject cdr_fails(LispObject a);
[[noreturn]] extern LispObject rplaca_fails(LispObject a);
[[noreturn]] extern LispObject rplacd_fails(LispObject a);
#define GC_MESSAGES 0x01
#define FASL_MESSAGES 0x02
#define VERBOSE_MSGS 0x04
#define GC_MSG_BITS 0x07
#define verbos_flag (miscflags & GC_MSG_BITS)
#define HEADLINE_FLAG 0x08
#define FNAME_FLAG 0x10
#define ARGS_FLAG 0x20
#define BACKTRACE_MSG_BITS 0x38
#define err_bad_car 0 
#define err_bad_cdr 1 
#define err_no_store 2 
#define err_undefined_function_0 3 
#define err_undefined_function_1 4 
#define err_undefined_function_2 5 
#define err_undefined_function_3 6 
#define err_undefined_function_4up 7 
#define err_wrong_no_args 8 
#define err_unbound_lexical 9 
#define err_bad_rplac 10 
#define err_bad_arith 11 
#define err_redef_special 12 
#define err_bad_arg 13 
#define err_bad_declare 14 
#define err_bad_fn 15 
#define err_unset_var 16 
#define err_too_many_args0 17 
#define err_too_many_args1 18 
#define err_too_many_args2 19 
#define err_too_many_args3 20 
#define err_bad_apply 21 
#define err_macroex_hook 22 
#define err_block_tag 23 
#define err_go_tag 24 
#define err_excess_args 25
#define err_insufficient_args 26
#define err_bad_bvl 27 
#define err_bad_keyargs 28
#define err_write_err 29
#define err_bad_endp 30 
#define err_no_fasldir 31
#define err_no_fasl 32 
#define err_open_failed 33 
#define err_pipe_failed 34 
#define err_stack_overflow 35
#define err_top_bit 36
#define err_mem_spans_zero 37
#define err_read_failure 38 
#define err_no_tempdir 39
#ifdef INCLUDE_ERROR_STRING_TABLE
static const char *error_message_table[] =
{ "attempt to take car of an atom",
 "attempt to take cdr of an atom",
 "insufficient freestore to run this package",
 "undefined function (0 args)",
 "undefined function (1 arg)",
 "undefined function (2 args)",
 "undefined function (3 args)",
 "undefined function (4 or more args)",
 "wrong number of arguments",
 "unbound lexical variable",
 "bad rplaca/rplacd",
 "bad argument for an arithmetic function",
 "attempt to redefine a special form",
 "not a variable",
 "bad use of declare",
 "attempt to apply non-function",
 "unset variable",
 "too many arguments for 0-arg function",
 "too many arguments for 1-arg function",
 "too many arguments for 2-arg function",
 "too many arguments for 3-arg function",
 "object not valid as a function (apply,",
 "macroexpand-hook failure",
 "block tag not found",
 "go tag not found",
 "too many arguments provided",
 "not enough arguments provided",
 "bad item in bound variable list",
 "bad keyword arguments",
 "write-error on file",
 "endp used on badly terminated list",
 "environment parameter 'fasldir' not set",
 "loadable module not found for loading",
 "file could not be opened",
 "unable to establish pipe",
 "stack overflow",
 "top bit of address has unexpected value",
 "memory block spans the zero address",
 "failure reading from an image file",
 "unable to find a directory for temporary files",
 "dummy final error message"
};
#endif
#endif 
#ifndef header_externs_h
#define header_externs_h 1
#ifdef USE_MPI
#include "mpi.h"
extern int32_t mpi_rank,mpi_size;
#endif
extern void **pages, **heap_pages, **vheap_pages;
extern void **new_heap_pages, **new_vheap_pages;
extern void *allocate_page(const char *why);
extern size_t pages_count, heap_pages_count, vheap_pages_count;
extern size_t new_heap_pages_count, new_vheap_pages_count;
extern LispObject *list_bases[];
extern LispObject *nilsegment, *stacksegment;
extern LispObject *nilsegmentbase, *stacksegmentbase;
extern LispObject *stackBase;
extern int32_t stack_segsize; 
extern double max_store_size;
extern bool restartp;
#define IMAGE_FORMAT_VERSION '5'
#define DIRECTORY_SIZE 8 
typedef struct _directory_header
{ char C, S, L, version; 
 unsigned char dirext, 
 
 
 dirsize, 
 dirused, 
 updated; 
 char eof[4]; 
 
} directory_header;
typedef struct _directory_entry
{ char data[44];
} directory_entry;
#define D_newline data[0]
#define D_name data[1]
#define D_space data[12]
#define D_date data[13]
#define D_position data[37]
#define D_size data[41]
#define name_size 12
#define date_size 24
#define DIRNAME_LENGTH 256
#define NEWLINE_CHAR 0x0a
typedef struct directory
{ directory_header h;
 std::FILE *f;
 const char *full_filename; 
 char filename[DIRNAME_LENGTH];
 directory_entry d[1]; 
} directory;
#ifdef COMMON
# define MIDDLE_INITIAL 'C'
#else
# define MIDDLE_INITIAL 'S'
#endif
inline int get_dirused(directory &d)
{ return d.h.dirused + ((d.h.dirext & 0x0f)<<8);
}
inline int get_dirsize(directory &d)
{ return d.h.dirsize + ((d.h.dirext & 0xf0)<<4);
}
#define D_WRITE_OK 1
#define D_UPDATED 2
#define D_COMPACT 4
#define D_PENDING 8
extern char *mystrdup(const char *s);
class stringBool
{
public:
 string key;
 bool flag;
 stringBool(string k, bool f)
 { key = k;
 flag = f;
 }
};
class stringBoolString
{
public:
 string key;
 bool flag;
 string data;
 stringBoolString(string k, bool f, string d)
 { key = k;
 flag = f;
 data = d;
 }
};
class faslFileRecord
{
public:
 bool inUse;
 string name;
 directory *dir;
 bool isOutput;
 faslFileRecord(string n, bool o)
 { inUse = true;
 name = n;
 dir = nullptr;
 isOutput = o;
 }
};
extern std::vector<stringBoolString> symbolsToDefine;
extern std::vector<stringBoolString> stringsToDefine;
extern std::vector<string> stringsToEvaluate;
extern std::vector<faslFileRecord> fasl_files;
extern char *big_chunk_start, *big_chunk_end;
extern uintptr_t *C_stackbase, C_stacklimit;
extern LispObject multiplication_buffer;
#ifdef CONSERVATIVE
extern void write_barrier(atomic<LispObject> *p, LispObject q);
extern void write_barrier(LispObject *p, LispObject q);
#else 
inline void write_barrier(atomic<LispObject> *p, LispObject q)
{ *p = q;
}
inline void write_barrier(LispObject *p, LispObject q)
{ *p = q;
}
#endif 
extern std::mutex debug_lock;
extern const char *debug_file;
extern int debug_line;
extern void DebugTrace();
extern void DebugTrace(int i);
extern void DebugTrace(const char *msg);
extern void DebugTrace(const char *fmt, int i);
#define Tr(...) \
 { std::lock_guard<std::mutex> lk(debug_lock); \
 debug_file = __FILE__; \
 debug_line = __LINE__; \
 DebugTrace(__VA_ARGS__); \
 }
#define GC_USER_SOFT 0
#define GC_USER_HARD 1
#define GC_STACK 2
#define GC_CONS 3
#define GC_VEC 4
#define GC_BPS 5
extern volatile char stack_contents_temp;
#ifdef CHECK_STACK
extern int check_stack(const char *file, int line);
extern void show_stack();
inline void if_check_stack()
{ if (check_stack("@" __FILE__,__LINE__))
 { show_stack();
 aerror("stack overflow");
 }
}
#else
inline void if_check_stack()
{ const char *_p_ = reinterpret_cast<const char *>(&_p_);
 if (reinterpret_cast<uintptr_t>(_p_) < C_stacklimit)
 { if (C_stacklimit > 1024*1024) C_stacklimit -= 1024*1024;
 aerror("stack overflow");
 }
}
#endif
#ifdef DEBUG
extern char debug_trail[32][32];
extern char debug_trail_file[32][32];
extern int debug_trail_line[32];
extern int debug_trailp;
extern void debug_record_raw(const char *data, const char *file,
 int line);
extern void debug_record_int_raw(const char *s, int n,
 const char *file, int line);
extern void debug_show_trail_raw(const char *msg, const char *file,
 int line);
#define debug_record(data) debug_record_raw(data, __FILE__, __LINE__)
#define debug_record_int(s, n) debug_record_int_raw(s, n, __FILE__, __LINE__)
#define debug_record_string(s) debug_record((const char *)&celt(s, 0))
#define debug_record_symbol(x) debug_record_string(qpname(x))
#define debug_show_trail(data) debug_show_trail_raw(data, __FILE__, __LINE__)
#define debug_assert(x) \
 if (!(x)) { debug_show_trail("Assertion failed"); my_exit(999); }
#else
#define debug_record(data)
#define debug_record_int(s, n)
#define debug_record_string(s)
#define debug_record_symbol(x)
#define debug_show_trail(x)
#define debug_assert(x)
#endif
#define first_nil_offset 50 
#define work_0_offset 250
#define last_nil_offset 301
#define NIL_SEGMENT_SIZE (((1 + last_nil_offset) & ~1) * \
 sizeof(LispObject) + 32)
#define SPARE 512
#ifdef CONSERVATIVE
extern uintptr_t heapstart;
extern uintptr_t len;
extern uintptr_t xor_chain;
extern uintptr_t vheapstart;
extern uintptr_t vlen;
extern uintptr_t vxor_chain;
extern LispObject *stackLimit;
#else 
extern LispObject *stackLimit;
#endif 
extern volatile atomic<uintptr_t> event_flag;
extern intptr_t nwork;
extern unsigned int exit_count;
extern uint64_t gensym_ser;
extern intptr_t print_precision, miscflags;
extern intptr_t current_modulus, fastget_size, package_bits;
extern intptr_t modulus_is_large;
extern LispObject lisp_true, lambda, funarg, unset_var, opt_key,
 rest_key;
extern LispObject quote_symbol, function_symbol, comma_symbol;
extern LispObject comma_at_symbol, cons_symbol, eval_symbol,
 apply_symbol;
extern LispObject list_symbol, liststar_symbol, eq_symbol, eql_symbol;
extern LispObject cl_equal_symbol, equal_symbol, equalp_symbol;
extern LispObject work_symbol, evalhook, applyhook, macroexpand_hook;
extern LispObject append_symbol, exit_tag, exit_value, catch_tags;
extern LispObject current_package, startfn;
extern LispObject gensym_base, string_char_sym, boffo;
extern LispObject err_table, progn_symbol, gcknt_symbol;
extern LispObject lisp_work_stream, charvec, raise_symbol,
 lower_symbol;
extern LispObject echo_symbol, codevec, litvec, supervisor, B_reg;
extern LispObject savedef, comp_symbol, compiler_symbol, faslvec;
extern LispObject tracedfn, lisp_terminal_io;
extern LispObject lisp_standard_output, lisp_standard_input,
 lisp_error_output;
extern LispObject lisp_trace_output, lisp_debug_io, lisp_query_io;
extern LispObject prompt_thing, faslgensyms;
extern LispObject prinl_symbol, emsg_star, redef_msg;
extern LispObject expr_symbol, fexpr_symbol, macro_symbol;
extern LispObject big_divisor, big_dividend, big_quotient;
extern LispObject big_fake1, big_fake2, active_stream, current_module;
extern LispObject mv_call_symbol, features_symbol, lisp_package;
extern LispObject sys_hash_table, sxhash_hash_table;
extern LispObject help_index, cfunarg, lex_words;
extern LispObject get_counts, fastget_names, input_libraries;
extern LispObject output_library, current_file, break_function;
extern LispObject standard_output, standard_input, debug_io;
extern LispObject error_output, query_io, terminal_io;
extern LispObject trace_output, fasl_stream;
extern LispObject startup_symbol, mv_call_symbol, traceprint_symbol;
extern LispObject load_source_symbol, load_selected_source_symbol;
extern LispObject bytecoded_symbol, funcall_symbol, autoload_symbol;
extern LispObject gchook, resources, callstack, procstack, procmem;
extern LispObject trap_time, current_function, keyword_package;
extern LispObject all_packages, package_symbol, internal_symbol;
extern LispObject external_symbol, inherited_symbol;
extern LispObject key_key, allow_other_keys, aux_key;
extern LispObject format_symbol, expand_def_symbol, allow_key_key;
extern LispObject declare_symbol, special_symbol, large_modulus;
extern LispObject used_space, avail_space, eof_symbol, call_stack;
extern LispObject nicknames_symbol, use_symbol, and_symbol, or_symbol;
extern LispObject not_symbol, reader_workspace, named_character;
extern LispObject read_float_format, short_float, single_float,
 double_float;
extern LispObject long_float, bit_symbol, pathname_symbol,
 print_array_sym;
extern LispObject read_base, initial_element;
extern LispObject builtin0_symbol, builtin1_symbol, builtin2_symbol;
extern LispObject builtin3_symbol, builtin4_symbol;
#ifdef OPENMATH
extern LispObject om_openFileDev(LispObject env, int nargs, ...);
extern LispObject om_openStringDev(LispObject env, LispObject lstr,
 LispObject lenc);
extern LispObject om_closeDev(LispObject env, LispObject dev);
extern LispObject om_setDevEncoding(LispObject env, LispObject ldev,
 LispObject lenc);
extern LispObject om_makeConn(LispObject env, LispObject ltimeout);
extern LispObject om_closeConn(LispObject env, LispObject lconn);
extern LispObject om_getConnInDevice(LispObject env,
 LispObject lconn);
extern LispObject om_getConnOutDevice(LispObject env,
 LispObject lconn);
extern LispObject om_connectTCP(LispObject env, int nargs, ...);
extern LispObject om_bindTCP(LispObject env, LispObject lconn,
 LispObject lport);
extern LispObject om_putApp(LispObject env, LispObject ldev);
extern LispObject om_putEndApp(LispObject env, LispObject ldev);
extern LispObject om_putAtp(LispObject env, LispObject ldev);
extern LispObject om_putEndAtp(LispObject env, LispObject ldev);
extern LispObject om_putAttr(LispObject env, LispObject ldev);
extern LispObject om_putEndAttr(LispObject env, LispObject ldev);
extern LispObject om_putBind(LispObject env, LispObject ldev);
extern LispObject om_putEndBind(LispObject env, LispObject ldev);
extern LispObject om_putBVar(LispObject env, LispObject ldev);
extern LispObject om_putEndBVar(LispObject env, LispObject ldev);
extern LispObject om_putError(LispObject env, LispObject ldev);
extern LispObject om_putEndError(LispObject env, LispObject ldev);
extern LispObject om_putObject(LispObject env, LispObject ldev);
extern LispObject om_putEndObject(LispObject env, LispObject ldev);
extern LispObject om_putInt(LispObject env, LispObject ldev,
 LispObject val);
extern LispObject om_putFloat(LispObject env, LispObject ldev,
 LispObject val);
extern LispObject om_putByteArray(LispObject env, LispObject ldev,
 LispObject val);
extern LispObject om_putVar(LispObject env, LispObject ldev,
 LispObject val);
extern LispObject om_putString(LispObject env, LispObject ldev,
 LispObject val);
extern LispObject om_putSymbol(LispObject env, LispObject ldev,
 LispObject val);
extern LispObject om_putSymbol2(LispObject env, int nargs, ...);
extern LispObject om_getApp(LispObject env, LispObject ldev);
extern LispObject om_getEndApp(LispObject env, LispObject ldev);
extern LispObject om_getAtp(LispObject env, LispObject ldev);
extern LispObject om_getEndAtp(LispObject env, LispObject ldev);
extern LispObject om_getAttr(LispObject env, LispObject ldev);
extern LispObject om_getEndAttr(LispObject env, LispObject ldev);
extern LispObject om_getBind(LispObject env, LispObject ldev);
extern LispObject om_getEndBind(LispObject env, LispObject ldev);
extern LispObject om_getBVar(LispObject env, LispObject ldev);
extern LispObject om_getEndBVar(LispObject env, LispObject ldev);
extern LispObject om_getError(LispObject env, LispObject ldev);
extern LispObject om_getEndError(LispObject env, LispObject ldev);
extern LispObject om_getObject(LispObject env, LispObject ldev);
extern LispObject om_getEndObject(LispObject env, LispObject ldev);
extern LispObject om_getInt(LispObject env, LispObject ldev);
extern LispObject om_getFloat(LispObject env, LispObject ldev);
extern LispObject om_getByteArray(LispObject env, LispObject ldev);
extern LispObject om_getVar(LispObject env, LispObject ldev);
extern LispObject om_getString(LispObject env, LispObject ldev);
extern LispObject om_getSymbol(LispObject env, LispObject ldev);
extern LispObject om_getType(LispObject env, LispObject ldev);
extern LispObject om_stringToStringPtr(LispObject env,
 LispObject lstr);
extern LispObject om_stringPtrToString(LispObject env,
 LispObject lpstr);
extern LispObject om_read(LispObject env, LispObject dev);
extern LispObject om_supportsCD(LispObject env, LispObject lcd);
extern LispObject om_supportsSymbol(LispObject env, LispObject lcd,
 LispObject lsym);
extern LispObject om_listCDs(LispObject env, int nargs, ...);
extern LispObject om_listSymbols(LispObject env, LispObject lcd);
extern LispObject om_whichCDs(LispObject env, LispObject lsym);
#endif
extern LispObject workbase[51];
extern LispObject user_base_0, user_base_1, user_base_2;
extern LispObject user_base_3, user_base_4, user_base_5;
extern LispObject user_base_6, user_base_7, user_base_8;
extern LispObject user_base_9;
#define work_0 workbase[0]
#define work_1 workbase[1]
#define mv_1 workbase[1]
#define mv_2 workbase[2]
#define mv_3 workbase[3]
#define mv_4 workbase[4]
#define work_50 workbase[50]
extern void copy_into_nilseg();
extern void copy_out_of_nilseg();
extern void rehash_this_table(LispObject v);
extern void simple_print(LispObject x);
extern void simple_msg(const char *s, LispObject x);
extern uint64_t hash_equal(LispObject key);
extern char *exit_charvec;
extern intptr_t exit_reason;
extern int procstackp;
extern bool garbage_collection_permitted;
extern int csl_argc;
extern const char **csl_argv;
extern bool fasl_output_file;
extern size_t output_directory;
extern LispObject *repeat_heap;
extern size_t repeat_count;
#ifdef BUILTIN_IMAGE
extern const unsigned char *binary_read_filep;
#else
extern std::FILE *binary_read_file;
#endif
extern std::FILE *binary_write_file;
extern size_t boffop;
extern void packcharacter(int c);
extern void packbyte(int c);
#define boffo_char(i) ucelt(boffo, i)
extern char **loadable_packages;
extern char **switches;
extern void review_switch_settings();
#ifdef SOCKETS
extern bool sockets_ready;
extern void flush_socket();
#endif
extern void report_file(const char *s);
extern int errorset_min, errorset_max;
extern bool force_verbos, force_echo, force_backtrace;
extern bool stop_on_error;
extern uint64_t force_cons, force_vec;
extern int init_flags;
extern const char *standard_directory;
extern int64_t gc_number;
extern int64_t reclaim_trap_count;
extern uintptr_t reclaim_stack_limit;
extern uint64_t reclaim_trigger_count, reclaim_trigger_target;
#ifdef CONSERVATIVE
extern void reclaim(const char *why);
#else
extern LispObject reclaim(LispObject value_to_return, const char *why,
 int stg_class, size_t size);
#endif
extern void use_gchook(LispObject arg);
extern uint64_t force_cons, force_vec;
extern bool next_gc_is_hard;
inline bool cons_forced(size_t n)
{
#ifdef DEBUG
 if (force_cons == 0) return false;
 if (force_cons <= n)
 { force_cons = 0;
 next_gc_is_hard = true;
 return true;
 }
 force_cons -= n;
#endif
 return false;
}
inline bool vec_forced(size_t n)
{
#ifdef DEBUG
 if (force_vec == 0) return false;
 if (force_vec <= n)
 { force_vec = 0;
 next_gc_is_hard = true;
 return true;
 }
 force_vec -= n;
#endif
 return false;
}
#define INIT_QUIET 1
#define INIT_VERBOSE 2
#define INIT_EXPANDABLE 4
#define Lispify_predicate(p) ((p) ? lisp_true : nil)
extern int tty_count;
extern std::FILE *spool_file;
extern char spool_file_name[128];
#define CODESIZE 0x1000
typedef struct _entry_point0
{ no_args *p;
 const char *s;
} entry_point0;
typedef struct _entry_point1
{ one_arg *p;
 const char *s;
} entry_point1;
typedef struct _entry_point2
{ two_args *p;
 const char *s;
} entry_point2;
typedef struct _entry_point3
{ three_args *p;
 const char *s;
} entry_point3;
typedef struct _entry_point4up
{ fourup_args *p;
 const char *s;
} entry_point4up;
extern entry_point0 entries_table0[];
extern entry_point1 entries_table1[];
extern entry_point2 entries_table2[];
extern entry_point3 entries_table3[];
extern entry_point4up entries_table4up[];
extern entry_point1 entries_tableio[];
extern const char *linker_type;
extern const char *compiler_command[], *import_data[],
 *config_header[], *csl_headers[];
extern LispObject encapsulate_pointer(void *);
extern void *extract_pointer(LispObject a);
extern LispObject Lencapsulatedp(LispObject env, LispObject a);
typedef void initfn(LispObject *, LispObject **,
 LispObject * volatile *);
extern LispObject characterify(LispObject a);
extern LispObject char_to_id(int ch);
extern void Iinit();
extern void IreInit();
extern void Ilist();
extern bool open_output(const char *s, size_t len);
#define IMAGE_CODE ((size_t)(-1000))
#define HELP_CODE ((size_t)(-1001))
#define BANNER_CODE ((size_t)(-1002))
#define IOPEN_OUT 0
#define IOPEN_IN 1
extern bool Iopen(const char *name, size_t len, int dirn,
 char *expanded_name);
extern bool Iopen_from_stdin(), Iopen_to_stdout();
extern bool IopenRoot(char *expanded_name, size_t hard,
 int sixtyfour);
extern bool Iwriterootp(char *expanded);
extern bool Iopen_banner(int code);
extern bool Imodulep1(int i, const char *name, size_t len,
 char *datestamp,
 size_t *size, char *expanded_name);
extern bool Imodulep(const char *name, size_t len, char *datestamp,
 size_t *size, char *expanded_name);
extern char *trim_module_name(char *name, size_t *lenp);
extern bool Icopy(const char *name, size_t len);
extern bool Idelete(const char *name, size_t len);
extern bool IcloseInput();
extern bool IcloseOutput();
extern bool Ifinished();
extern int Igetc();
extern bool Iread(void *buff, size_t size);
extern bool Iputc(int ch);
extern bool Iwrite(const void *buff, size_t size);
extern bool def_init();
extern bool inf_init();
extern bool def_finish();
extern bool inf_finish();
extern int Zgetc();
extern bool Zread(void *buff, size_t size);
extern bool Zputc(int ch);
extern bool Zwrite(const void *buff, size_t size);
extern long int Ioutsize();
extern const char *CSLtmpdir();
extern const char *CSLtmpnam(const char *suffix, size_t suffixlen);
extern int Cmkdir(const char *s);
extern char *look_in_lisp_variable(char *o, int prefix);
extern void CSL_MD5_Init();
extern void CSL_MD5_Update(const unsigned char *data, size_t len);
extern void CSL_MD5_Final(unsigned char *md);
extern bool CSL_MD5_busy;
extern unsigned char *CSL_MD5(unsigned char *data, int n,
 unsigned char *md);
extern void checksum(LispObject a);
extern void ensure_screen();
extern int window_heading;
[[noreturn]] extern void my_exit(int n);
extern uint64_t base_time;
extern std::chrono::high_resolution_clock::time_point base_walltime;
extern uint64_t gc_time;
extern bool trap_floating_overflow;
extern const volatile char *errorset_msg;
extern int errorset_code;
extern void unwind_stack(LispObject *, bool findcatch);
extern bool segvtrap;
extern bool batch_flag;
extern int escaped_printing;
void set_up_signal_handlers();
extern int async_interrupt(int a);
extern void record_get(LispObject tag, bool found);
extern bool isprime(uint64_t);
extern void set_up_functions(int restartp);
extern void get_user_files_checksum(unsigned char *);
extern LispObject acons(LispObject a, LispObject b, LispObject c);
extern LispObject ash(LispObject a, LispObject b);
extern LispObject bytestream_interpret(size_t ppc, LispObject lit,
 LispObject *entry_stack);
extern bool complex_stringp(LispObject a);
extern LispObject copy_string(LispObject a, size_t n);
extern void freshline_trace();
extern void freshline_debug();
extern LispObject cons(LispObject a, LispObject b);
extern LispObject cons_no_gc(LispObject a, LispObject b);
extern LispObject acons_no_gc(LispObject a, LispObject b,
 LispObject c);
extern LispObject cons_gc_test(LispObject a);
extern void convert_fp_rep(void *p, int old_rep, int new_rep,
 int type);
extern LispObject eval(LispObject u, LispObject env);
extern uint32_t Crand();
extern LispObject Cremainder(LispObject a, LispObject b);
extern void Csrand(uint32_t a);
extern void discard(LispObject a);
extern bool eql_fn(LispObject a, LispObject b);
extern bool cl_equal_fn(LispObject a, LispObject b);
extern bool equal_fn(LispObject a, LispObject b);
#ifdef TRACED_EQUAL
extern bool traced_equal_fn(LispObject a, LispObject b,
 const char *, int, int);
#define equal_fn(a, b) traced_equal_fn(a, b, __FILE__, __LINE__, 0)
extern void dump_equals();
#endif
extern bool equalp(LispObject a, LispObject b);
extern LispObject apply(LispObject fn, LispObject args,
 LispObject env,
 LispObject from);
extern LispObject apply_lambda(LispObject def, LispObject args,
 LispObject env, LispObject name);
extern void deallocate_pages();
extern void drop_heap_segments();
extern LispObject gcd(LispObject a, LispObject b);
extern LispObject get_pname(LispObject a);
extern LispObject get(LispObject a, LispObject b, LispObject c=nil);
extern LispObject get_basic_vector(int tag, int type, size_t length);
extern LispObject get_basic_vector_init(size_t n, LispObject v);
extern LispObject reduce_basic_vector_size(LispObject v, size_t len);
extern LispObject get_vector(int tag, int type, size_t length);
extern LispObject get_vector_init(size_t n, LispObject v);
extern LispObject reduce_vector_size(LispObject n, size_t length);
extern void prepare_for_borrowing();
inline void zero_out(void *p)
{ char *p1 = reinterpret_cast<char *>(doubleword_align_up(
 reinterpret_cast<uintptr_t>(p)));
 std::memset(p1, 0, CSL_PAGE_SIZE);
}
extern LispObject borrow_basic_vector(int tag, int type,
 size_t length);
extern LispObject borrow_vector(int tag, int type, size_t length);
extern void finished_borrowing();
extern uint64_t hash_lisp_string(LispObject s);
extern void lose_C_def(LispObject a);
extern bool geq2(LispObject a, LispObject b);
extern bool greaterp2(LispObject a, LispObject b);
extern bool lesseq2(LispObject a, LispObject b);
extern bool lessp2(LispObject a, LispObject b);
extern LispObject list2(LispObject a, LispObject b);
extern LispObject list2star(LispObject a, LispObject b, LispObject c);
extern LispObject list2starrev(LispObject a, LispObject b,
 LispObject c);
extern LispObject list3(LispObject a, LispObject b, LispObject c);
extern LispObject list3rev(LispObject a, LispObject b, LispObject c);
extern LispObject list3star(LispObject a, LispObject b,
 LispObject c, LispObject d);
extern LispObject list4(LispObject a, LispObject b,
 LispObject c, LispObject d);
extern LispObject lognot(LispObject a);
extern LispObject macroexpand(LispObject form, LispObject env);
extern LispObject make_package(LispObject name);
extern LispObject make_string(const char *b);
extern LispObject make_nstring(const char *b, size_t n);
extern LispObject make_undefined_symbol(const char *s);
extern LispObject make_symbol(char const *s, int restartp,
 no_args *f0, one_arg *f1, two_args *f2,
 three_args *f3, fourup_args *f4up);
extern void stdout_printf(const char *fmt, ...);
extern void term_printf(const char *fmt, ...);
extern void err_printf(const char *fmt, ...);
extern void debug_printf(const char *fmt, ...);
extern void trace_printf(const char *fmt, ...);
extern const char *my_getenv(const char *name);
extern LispObject ncons(LispObject a);
extern LispObject ndelete(LispObject a, LispObject b);
extern LispObject negate(LispObject a);
extern LispObject nreverse(LispObject a);
extern LispObject nreverse2(LispObject a, LispObject b);
extern std::FILE *open_file(char *filename,
 const char *original_name,
 size_t n, const char *dirn, std::FILE *old_file);
extern LispObject plus2(LispObject a, LispObject b);
extern void preserve(const char *msg, size_t len);
extern LispObject prin(LispObject u);
extern void debugprint(LispObject a, int depth=10);
extern void debugprint(const char *s, LispObject a);
extern void debugprint(const char *s);
extern const char *get_string_data(LispObject a, const char *why,
 size_t &len);
extern void prin_to_stdout(LispObject u);
extern void prin_to_terminal(LispObject u);
extern void prin_to_debug(LispObject u);
extern void prin_to_query(LispObject u);
extern void prin_to_trace(LispObject u);
extern void prinhex_to_trace(const char *msg, LispObject value);
extern void prin_to_error(LispObject u);
extern void loop_print_stdout(LispObject o);
extern void loop_print_terminal(LispObject o);
extern void loop_print_debug(LispObject o);
extern void loop_print_query(LispObject o);
extern void loop_print_trace(LispObject o);
extern void loop_print_error(LispObject o);
extern void internal_prin(LispObject u, int prefix);
extern LispObject princ(LispObject u);
extern LispObject print(LispObject u);
extern LispObject printc(LispObject u);
extern void print_bignum(LispObject u, bool blankp,
 int nobreak);
extern void print_bighexoctbin(LispObject u,
 int radix, int width, bool blankp, int nobreak);
extern void print_newbignum(LispObject u, bool blankp,
 int nobreak);
extern void print_newbighexoctbin(LispObject u,
 int radix, int width, bool blankp, int nobreak);
extern LispObject putprop(LispObject a, LispObject b,
 LispObject c);
extern LispObject quot2(LispObject a, LispObject b);
extern LispObject quotrem2(LispObject a, LispObject b);
extern LispObject rational(LispObject a);
extern void read_eval_print(int noisy);
extern void set_fns(LispObject sym, no_args *f0, one_arg *f1,
 two_args *f2, three_args *f3, fourup_args *f4up);
extern void init_heap_segments(double size);
extern void grab_more_memory(size_t npages);
extern bool allocate_more_memory();
extern void setup(int restartp, double storesize);
extern void set_up_variables(int restart_flag);
extern void warm_setup();
extern void write_everything();
extern LispObject simplify_string(LispObject s);
extern bool stringp(LispObject a);
extern LispObject times2(LispObject a, LispObject b);
extern int32_t thirty_two_bits(LispObject a);
extern uint32_t thirty_two_bits_unsigned(LispObject a);
extern int64_t sixty_four_bits(LispObject a);
extern uint64_t sixty_four_bits_unsigned(LispObject a);
extern uint64_t crc64(uint64_t crc, const void *buf, size_t size);
#ifdef DEBUG
extern void validate_string_fn(LispObject a, const char *f, int l);
#define validate_string(a) validate_string_fn(a, __FILE__, __LINE__)
#else
#define validate_string(a) 
#endif
inline LispObject onevalue(LispObject r)
{ exit_count = 1;
 return r;
}
inline LispObject nvalues(LispObject r, int n)
{ exit_count = n;
 return r;
}
#ifdef TRACED_EQUAL
#define equal(a, b) \
 ((a == b) ? true : \
 ((a & TAG_BITS) != (b & TAG_BITS)) ? false : \
 (need_more_than_eq(a)) ? equal_fn(a, b) : \
 false)
#else
inline bool equal(LispObject a, LispObject b)
{ if (a == b) return true; 
 else if ((a & TAG_BITS) != (b & TAG_BITS)) return false;
 else if (need_more_than_eq(a)) return equal_fn(a, b);
 else return false;
}
#endif
#ifdef TRACED_EQUAL
#define cl_equal(a, b) \
 ((a == b) ? true : \
 ((a & TAG_BITS) != (b & TAG_BITS)) ? false : \
 (need_more_than_eq(a)) ? cl_equal_fn(a, b) : \
 false)
#else
inline bool cl_equal(LispObject a, LispObject b)
{ if (a == b) return true; 
 else if ((a & TAG_BITS) != (b & TAG_BITS)) return false;
 else if (need_more_than_eq(a)) return cl_equal_fn(a, b);
 else return false;
}
#endif
inline bool eql(LispObject a, LispObject b)
{ if (a == b) return true; 
 else if ((a & TAG_BITS) != (b & TAG_BITS)) return false;
 else if (need_more_than_eq(a)) return eql_fn(a, b);
 else return false;
}
extern no_args *no_arg_functions[];
extern one_arg *one_arg_functions[];
extern two_args *two_arg_functions[];
extern three_args *three_arg_functions[];
extern fourup_args *fourup_arg_functions[];
extern bool no_arg_traceflags[];
extern bool one_arg_traceflags[];
extern bool two_arg_traceflags[];
extern bool three_arg_traceflags[];
extern bool fourup_arg_traceflags[];
extern const char *no_arg_names[];
extern const char *one_arg_names[];
extern const char *two_arg_names[];
extern const char *three_arg_names[];
extern const char *fourup_arg_names[];
typedef struct setup_type
{ const char *name;
 no_args *zero;
 one_arg *one;
 two_args *two;
 three_args *three;
 fourup_args *fourup;
} setup_type;
typedef struct setup_type_1
{ const char *name;
 no_args *zero;
 one_arg *one;
 two_args *two;
 three_args *three;
 fourup_args *fourup;
 uint32_t c1;
 uint32_t c2;
} setup_type_1;
extern setup_type const
arith06_setup[], arith08_setup[], arith10_setup[], arith12_setup[],
 arith13_setup[], char_setup[], eval1_setup[], eval2_setup[],
 eval3_setup[], funcs1_setup[], funcs2_setup[], funcs3_setup[],
 lisphash_setup[], print_setup[], read_setup[],
 restart_setup[], mpi_setup[];
#ifdef ARITHLIB
extern setup_type const arith_setup[];
#endif
extern setup_type const
u01_setup[], u02_setup[], u03_setup[], u04_setup[],
 u05_setup[], u06_setup[], u07_setup[], u08_setup[], u09_setup[],
 u10_setup[], u11_setup[], u12_setup[], u13_setup[], u14_setup[],
 u15_setup[], u16_setup[], u17_setup[], u18_setup[], u19_setup[],
 u20_setup[], u21_setup[], u22_setup[], u23_setup[], u24_setup[],
 u25_setup[], u26_setup[], u27_setup[], u28_setup[], u29_setup[],
 u30_setup[], u31_setup[], u32_setup[], u33_setup[], u34_setup[],
 u35_setup[], u36_setup[], u37_setup[], u38_setup[], u39_setup[],
 u40_setup[], u41_setup[], u42_setup[], u43_setup[], u44_setup[],
 u45_setup[], u46_setup[], u47_setup[], u48_setup[], u49_setup[],
 u50_setup[], u51_setup[], u52_setup[], u53_setup[], u54_setup[],
 u55_setup[], u56_setup[], u57_setup[], u58_setup[], u59_setup[],
 u60_setup[];
extern setup_type const *setup_tables[];
#ifdef NAG
extern setup_type const nag_setup[], asp_setup[];
extern setup_type const socket_setup[], xdr_setup[], grep_setup[];
extern setup_type const gr_setup[], axfns_setup[];
#endif
#ifdef OPENMATH
extern setup_type const om_setup[];
extern setup_type const om_parse_setup[];
#endif
extern const char *find_image_directory(int argc, const char *argv[]);
extern char program_name[64];
extern LispObject declare_fn(LispObject args, LispObject env);
extern LispObject function_fn(LispObject args, LispObject env);
extern LispObject let_fn_1(LispObject bvl, LispObject body,
 LispObject env, int compilerp);
extern LispObject mv_call_fn(LispObject args, LispObject env);
extern LispObject progn_fn(LispObject args, LispObject env);
extern LispObject quote_fn(LispObject args, LispObject env);
extern LispObject tagbody_fn(LispObject args, LispObject env);
[[noreturn]] extern LispObject resource_exceeded();
extern int64_t time_base, space_base, io_base, errors_base;
extern int64_t time_now, space_now, io_now, errors_now;
extern int64_t time_limit, space_limit, io_limit, errors_limit;
extern bool symbol_protect_flag, warn_about_protected_symbols;
#ifdef HASH_STATISTICS
extern uint64_t Nhget, Nhgetp, Nhput1, Nhputp1, Nhput2, Nhputp2,
 Nhputtmp;
extern uint64_t Noget, Nogetp, Noput, Noputp, Noputtmp;
#endif
#endif 
#ifndef header_arith_h
#define header_arith_h 1
#define TWO_32 4294967296.0 
#define TWO_31 2147483648.0 
#define TWO_24 16777216.0 
#define TWO_22 4194304.0 
#define TWO_21 2097152.0 
#define TWO_20 1048576.0 
#define _pi ((12868.0 - 0.036490896206895257)/4096.0)
#define _half_pi ((12868.0 - 0.036490896206895257)/8192.0)
#define boole_clr 0
#define boole_and 1
#define boole_andc2 2
#define boole_1 3
#define boole_andc1 4
#define boole_2 5
#define boole_xor 6
#define boole_ior 7
#define boole_nor 8
#define boole_eqv 9
#define boole_c2 10
#define boole_orc2 11
#define boole_c1 12
#define boole_orc1 13
#define boole_nand 14
#define boole_set 15
extern unsigned char msd_table[256], lsd_table[256];
#define top_bit_set(n) (((int32_t)(n)) < 0)
#define top_bit(n) ((int32_t)(((uint32_t)(n)) >> 31))
#define set_top_bit(n) ((int32_t)((uint32_t)(n) | (uint32_t)0x80000000U))
#define clear_top_bit(n) ((int32_t)((uint32_t)(n) & 0x7fffffff))
#define signed_overflow(n) \
 top_bit_set(static_cast<uint32_t>(n) ^ (static_cast<uint32_t>(n) << 1))
#define ADD32(a, b) ((uint32_t)(a) + (uint32_t)(b))
#define signed29_in_64(n) \
 ((static_cast<int64_t>((static_cast<uint64_t>(n) & 0x1fffffffU) << 35) / (static_cast<int64_t>(1) << 35)) == \
 static_cast<int64_t>(n))
#define signed31_in_64(n) \
 ((static_cast<int64_t>((static_cast<uint64_t>(n) & 0x7fffffffU) << 33) / (static_cast<int64_t>(1) << 33)) == \
 static_cast<int64_t>(n))
#define signed31_in_ptr(n) \
 ((static_cast<intptr_t>((static_cast<uintptr_t>(n)&0x7fffffffU) << (8*sizeof(intptr_t) - 31)) / \
 (static_cast<intptr_t>(1) << (8*sizeof(intptr_t) - 31))) == static_cast<intptr_t>(n))
#ifdef HAVE_SOFTFLOAT
#define FIX_TRUNCATE softfloat_round_minMag
#define FIX_ROUND softfloat_round_near_even
#define FIX_FLOOR softfloat_round_min
#define FIX_CEILING softfloat_round_max
#else
#define FIX_TRUNCATE 1
#define FIX_ROUND 0
#define FIX_FLOOR 2
#define FIX_CEILING 3
#endif 
extern LispObject lisp_fix(LispObject a, int roundmode);
extern LispObject lisp_ifix(LispObject a, LispObject b,
 int roundmode);
inline bool floating_edge_case(double r)
{ return (1.0/r == 0.0 || r != r);
}
inline void floating_clear_flags()
{}
#define Dmultiply(hi, lo, a, b, c) \
 do { uint64_t r64 = static_cast<uint64_t>(a) * \
 static_cast<uint64_t>(b) + \
 static_cast<uint32_t>(c); \
 (lo) = 0x7fffffffu & static_cast<uint32_t>(r64); \
 (hi) = static_cast<uint32_t>(r64 >> 31); } while (0)
#define Ddivide(r, q, a, b, c) \
 do { uint64_t r64 = (static_cast<uint64_t>(a) << 31) | \
 static_cast<uint64_t>(b); \
 uint64_t c64 = static_cast<uint64_t>( \
 static_cast<uint32_t>(c)); \
 q = static_cast<uint32_t>(r64 / c64); \
 r = static_cast<uint32_t>(r64 % c64); } while (0)
#define Ddiv10_9(r, q, a, b) Ddivide(r, q, a, b, 1000000000u)
#define Ddivideq(q, a, b, c) \
 do { uint64_t r64 = ((static_cast<uint64_t>(a)) << 31) | static_cast<uint64_t>(b); \
 uint64_t c64 = static_cast<uint64_t>(static_cast<uint32_t>(c)); \
 q = static_cast<uint32_t>(r64 / c64); } while (0)
#define Ddiv10_9q(r, q, a, b) Ddivideq(q, a, b, 1000000000u)
#define Ddivider(r, a, b, c) \
 do { uint64_t r64 = ((static_cast<uint64_t>(a)) << 31) | static_cast<uint64_t>(b); \
 uint64_t c64 = static_cast<uint64_t>(static_cast<uint32_t>(c)); \
 r = static_cast<uint32_t>(r64 % c64); } while (0)
#define Ddiv10_9r(r, q, a, b) Ddivider(r, a, b, 1000000000u)
#define fixnum_minusp(a) ((intptr_t)(a) < 0)
#define bignum_minusp(a) \
 (static_cast<int32_t>(bignum_digits(a)[((bignum_length(a)-CELL)/4)-1])<0)
inline double value_of_immediate_float(LispObject a)
{ Float_union aa;
 if (SIXTY_FOUR_BIT) aa.i = static_cast<int32_t>(static_cast<uint64_t>
 (a)>>32);
 else aa.i = static_cast<int32_t>(a - XTAG_SFLOAT);
 return aa.f;
}
extern LispObject make_boxfloat(double a, int type=TYPE_DOUBLE_FLOAT);
#ifdef HAVE_SOFTFLOAT
extern LispObject make_boxfloat128(float128_t a);
#endif 
inline LispObject pack_short_float(double d)
{ Float_union aa;
 aa.f = d;
 if (trap_floating_overflow &&
 floating_edge_case(aa.f))
 { floating_clear_flags();
 aerror("exception with short float");
 }
 aa.i &= ~0xf;
 if (SIXTY_FOUR_BIT)
 return static_cast<LispObject>((static_cast<uint64_t>
 (aa.i)) << 32) + XTAG_SFLOAT;
 else return aa.i + XTAG_SFLOAT;
}
inline LispObject pack_single_float(double d)
{ if (SIXTY_FOUR_BIT)
 { Float_union aa;
 aa.f = d;
 if (trap_floating_overflow &&
 floating_edge_case(aa.f))
 { floating_clear_flags();
 aerror("exception with single float");
 }
 return static_cast<LispObject>(static_cast<uint64_t>
 (aa.i) << 32) + XTAG_SFLOAT + XTAG_FLOAT32;
 }
 else
 { LispObject r = get_basic_vector(TAG_BOXFLOAT,
 TYPE_SINGLE_FLOAT, sizeof(Single_Float));
 single_float_val(r) = static_cast<float>(d);
 if (trap_floating_overflow &&
 floating_edge_case(single_float_val(r)))
 { floating_clear_flags();
 aerror("exception with single float");
 }
 return r;
 }
}
inline LispObject pack_immediate_float(double d,
 LispObject l1, LispObject l2=0)
{ Float_union aa;
 aa.f = d;
 if (trap_floating_overflow &&
 floating_edge_case(aa.f))
 { floating_clear_flags();
 if (((l1 | l2) & XTAG_FLOAT32) != 0)
 aerror("exception with single float");
 else aerror("exception with short float");
 }
 if (SIXTY_FOUR_BIT)
 { if (((l1 | l2) & XTAG_FLOAT32) == 0) aa.i &= ~0xf;
 return static_cast<LispObject>((static_cast<uint64_t>
 (aa.i)) << 32) + XTAG_SFLOAT +
 ((l1 | l2) & XTAG_FLOAT32);
 }
 aa.i &= ~0xf;
 return aa.i + XTAG_SFLOAT;
}
inline bool eq_i64d(int64_t a, double b)
{
 if (b != static_cast<double>(a)) return false;
 if (b == static_cast<double>(static_cast<uint64_t>
 (1)<<63)) return false;
 return a == static_cast<int64_t>(b);
}
inline bool lessp_i64d(int64_t a, double b)
{
 if (a <= (static_cast<int64_t>(1)<<53) &&
 a >= -(static_cast<int64_t>(1)<<53)) return static_cast<double>
 (a) < b;
 if (!(b >= -static_cast<double>(static_cast<uint64_t>
 (1)<<63))) return false;
 if (!(b < static_cast<double>(static_cast<uint64_t>
 (1)<<63))) return true;
 return a < static_cast<int64_t>(b);
}
inline bool lessp_di64(double a, int64_t b)
{
 if (b <= (static_cast<int64_t>(1)<<53) &&
 b >= -(static_cast<int64_t>(1)<<53)) return a < static_cast<double>
 (b);
 if (!(a < static_cast<double>(static_cast<uint64_t>
 (1)<<63))) return false;
 if (!(a >= -static_cast<double>(static_cast<uint64_t>
 (1)<<63))) return true;
 return static_cast<int64_t>(a) < b;
}
extern LispObject negateb(LispObject);
extern LispObject copyb(LispObject);
extern LispObject negate(LispObject);
extern LispObject plus2(LispObject a, LispObject b);
extern LispObject difference2(LispObject a, LispObject b);
extern LispObject times2(LispObject a, LispObject b);
extern LispObject quot2(LispObject a, LispObject b);
extern LispObject CLquot2(LispObject a, LispObject b);
extern LispObject quotbn(LispObject a, int32_t n);
extern LispObject quotbn1(LispObject a, int32_t n);
#define QUOTBB_QUOTIENT_NEEDED 1
#define QUOTBB_REMAINDER_NEEDED 2
extern LispObject quotbb(LispObject a, LispObject b, int needs);
extern LispObject Cremainder(LispObject a, LispObject b);
extern LispObject rembi(LispObject a, LispObject b);
extern LispObject rembb(LispObject a, LispObject b);
extern LispObject shrink_bignum(LispObject a, size_t lena);
extern LispObject modulus(LispObject a, LispObject b);
extern LispObject rational(LispObject a);
extern LispObject rationalize(LispObject a);
extern LispObject lcm(LispObject a, LispObject b);
extern LispObject lengthen_by_one_bit(LispObject a, int32_t msd);
extern bool numeq2(LispObject a, LispObject b);
extern bool SL_numeq2(LispObject a, LispObject b);
extern bool zerop(LispObject a);
extern bool onep(LispObject a);
extern bool minusp(LispObject a);
extern bool plusp(LispObject a);
extern LispObject integer_decode_long_float(LispObject a);
extern LispObject Linteger_decode_float(LispObject env, LispObject a);
extern LispObject validate_number(const char *s, LispObject a,
 LispObject b, LispObject c);
extern LispObject make_fake_bignum(intptr_t n);
extern LispObject make_one_word_bignum(int32_t n);
extern LispObject make_two_word_bignum(int32_t a, uint32_t b);
extern LispObject make_three_word_bignum(int32_t a, uint32_t b,
 uint32_t c);
extern LispObject make_four_word_bignum(int32_t a, uint32_t b,
 uint32_t c, uint32_t d);
extern LispObject make_five_word_bignum(int32_t a, uint32_t b,
 uint32_t c, uint32_t d, uint32_t e);
extern LispObject make_n_word_bignum(int32_t a2, uint32_t a1,
 uint32_t a0, size_t n);
extern LispObject make_n4_word_bignum(int32_t a3, uint32_t a2,
 uint32_t a1, uint32_t a0, size_t n);
extern LispObject make_n5_word_bignum(int32_t a4, uint32_t a3,
 uint32_t a2, uint32_t a1,
 uint32_t a0, size_t n);
extern LispObject make_power_of_two(size_t n);
extern LispObject make_lisp_integer32_fn(int32_t n);
inline LispObject make_lisp_integer32(int32_t n)
{ if (SIXTY_FOUR_BIT ||
 valid_as_fixnum(n)) return fixnum_of_int(static_cast<intptr_t>(n));
 else return make_lisp_integer32_fn(n);
}
extern LispObject make_lisp_integer64_fn(int64_t n);
inline LispObject make_lisp_integer64(int64_t n)
{ if (valid_as_fixnum(n)) return fixnum_of_int(
 static_cast<intptr_t>(n));
 else return make_lisp_integer64_fn(n);
}
extern LispObject make_lisp_unsigned64_fn(uint64_t n);
inline LispObject make_lisp_unsigned64(uint64_t n)
{ if (n < (static_cast<uint64_t>(1))<<(8*sizeof(intptr_t)-5))
 return fixnum_of_int(static_cast<intptr_t>(n));
 else return make_lisp_unsigned64_fn(n);
}
extern LispObject make_lisp_integerptr_fn(intptr_t n);
inline LispObject make_lisp_integerptr(intptr_t n)
{ if (intptr_valid_as_fixnum(n)) return fixnum_of_int(n);
 else return make_lisp_integerptr_fn(n);
}
extern LispObject make_lisp_unsignedptr_fn(uintptr_t n);
inline LispObject make_lisp_unsignedptr(uintptr_t n)
{ if (n < (static_cast<uintptr_t>(1))<<(8*sizeof(intptr_t)-5))
 return fixnum_of_int(static_cast<intptr_t>(n));
 else return make_lisp_unsignedptr_fn(n);
}
extern LispObject make_lisp_integer128_fn(int128_t n);
inline LispObject make_lisp_integer128(int128_t n)
{ if (valid_as_fixnum(n)) return fixnum_of_int(static_cast<int64_t>(n));
 else return make_lisp_integer128_fn(n);
}
extern LispObject make_lisp_unsigned128_fn(uint128_t n);
inline LispObject make_lisp_unsigned128(uint128_t n)
{ if (uint128_valid_as_fixnum(n))
 return fixnum_of_int(static_cast<uint64_t>(static_cast<uint64_t>(n)));
 else return make_lisp_unsigned128_fn(n);
}
inline void validate_number(LispObject n)
{
}
extern double float_of_integer(LispObject a);
extern LispObject add1(LispObject p);
extern LispObject sub1(LispObject p);
extern LispObject integerp(LispObject p);
extern double float_of_number(LispObject a);
#ifdef HAVE_SOFTFLOAT
extern float128_t float128_of_number(LispObject a);
#endif 
extern LispObject make_complex(LispObject r, LispObject i);
extern LispObject make_ratio(LispObject p, LispObject q);
extern LispObject make_approx_ratio(LispObject p, LispObject q,
 int bits);
extern LispObject ash(LispObject a, LispObject b);
extern LispObject lognot(LispObject a);
extern LispObject logior2(LispObject a, LispObject b);
extern LispObject logxor2(LispObject a, LispObject b);
extern LispObject logand2(LispObject a, LispObject b);
extern LispObject logeqv2(LispObject a, LispObject b);
extern LispObject rationalf(double d);
#ifdef HAVE_SOFTFLOAT
extern LispObject rationalf128(float128_t *d);
#endif 
extern int _reduced_exp(double, double *);
extern bool lesspbi(LispObject a, LispObject b);
extern bool lesspib(LispObject a, LispObject b);
typedef struct Complex
{ double real;
 double imag;
} Complex;
extern Complex Cln(Complex a);
extern Complex Ccos(Complex a);
extern Complex Cexp(Complex a);
extern Complex Cpow(Complex a, Complex b);
extern double Cabs(Complex a);
#ifndef HAVE_CILK
extern std::thread kara_thread[2];
#define KARA_0 (1<<0)
#define KARA_1 (1<<1)
#define KARA_QUIT (1<<2)
extern void kara_worker(int id);
extern std::mutex kara_mutex;
extern std::condition_variable cv_kara_ready,
 cv_kara_done;
extern unsigned int kara_ready;
extern int kara_done;
#endif
extern size_t kparallel, karatsuba_parallel;
#ifndef KARATSUBA_PARALLEL_CUTOFF
# define KARATSUBA_PARALLEL_CUTOFF 120
#endif
#ifndef KARATSUBA_CUTOFF
#define KARATSUBA_CUTOFF 12
#endif
#ifdef HAVE_SOFTFLOAT
static int f128M_exponent(const float128_t *p);
static void f128M_set_exponent(float128_t *p, int n);
extern void f128M_ldexp(float128_t *p, int n);
extern void f128M_frexp(float128_t *p, float128_t *r, int *x);
static bool f128M_infinite(const float128_t *p);
static bool f128M_finite(const float128_t *p);
static bool f128M_nan(const float128_t *x);
static bool f128M_subnorm(const float128_t *x);
static bool f128M_negative(const float128_t *x);
static void f128M_negate(float128_t *x);
extern void f128M_split(
 const float128_t *x, float128_t *yhi, float128_t *ylo);
#ifdef LITTLEENDIAN
#define HIPART 1
#define LOPART 0
#else
#define HIPART 0
#define LOPART 1
#endif
inline bool f128M_zero(const float128_t *p)
{ return ((p->v[HIPART] & INT64_C(0x7fffffffffffffff)) == 0) &&
 (p->v[LOPART] == 0);
}
inline bool f128M_infinite(const float128_t *p)
{ return (((p->v[HIPART] >> 48) & 0x7fff) == 0x7fff) &&
 ((p->v[HIPART] & INT64_C(0xffffffffffff)) == 0) &&
 (p->v[LOPART] == 0);
}
inline bool f128M_finite(const float128_t *p)
{ return (((p->v[HIPART] >> 48) & 0x7fff) != 0x7fff);
}
inline void f128M_make_infinite(float128_t *p)
{ p->v[HIPART] |= UINT64_C(0x7fff000000000000);
 p->v[HIPART] &= UINT64_C(0xffff000000000000);
 p->v[LOPART] = 0;
}
inline void f128M_make_zero(float128_t *p)
{ p->v[HIPART] &= UINT64_C(0x8000000000000000);
 p->v[LOPART] = 0;
}
inline bool f128M_subnorm(const float128_t *p)
{ return (((p->v[HIPART] >> 48) & 0x7fff) == 0) &&
 (((p->v[HIPART] & INT64_C(0xffffffffffff)) != 0) ||
 (p->v[LOPART] != 0));
}
inline bool f128M_nan(const float128_t *p)
{ return (((p->v[HIPART] >> 48) & 0x7fff) == 0x7fff) &&
 (((p->v[HIPART] & INT64_C(0xffffffffffff)) != 0) ||
 (p->v[LOPART] != 0));
}
inline bool f128M_negative(const float128_t *x)
{ if (f128M_nan(x)) return false;
 return (static_cast<int64_t>(x->v[HIPART])) < 0;
}
inline int f128M_exponent(const float128_t *p)
{ return ((p->v[HIPART] >> 48) & 0x7fff) - 0x3fff;
}
inline void f128M_set_exponent(float128_t *p, int n)
{ p->v[HIPART] = (p->v[HIPART] & INT64_C(0x8000ffffffffffff)) |
 ((static_cast<uint64_t>(n) + 0x3fff) << 48);
}
inline void f128M_negate(float128_t *x)
{ x->v[HIPART] ^= UINT64_C(0x8000000000000000);
}
inline bool floating_edge_case128(float128_t *r)
{ return f128M_infinite(r) || f128M_nan(r);
}
#endif 
extern int double_to_binary(double d, int64_t &m);
#ifdef HAVE_SOFTFLOAT
extern int float128_to_binary(const float128_t *d,
 int64_t &mhi, uint64_t &mlo);
#endif 
extern intptr_t double_to_3_digits(double d,
 int32_t &a2, uint32_t &a1, uint32_t &a0);
#ifdef HAVE_SOFTFLOAT
extern intptr_t float128_to_5_digits(float128_t *d,
 int32_t &a4, uint32_t &a3, uint32_t &a2, uint32_t &a1, uint32_t &a0);
extern float128_t f128_0, 
 f128_half, 
 f128_mhalf, 
 f128_1, 
 f128_10, 
 f128_10_17, 
 f128_10_18, 
 f128_r10, 
 f128_N1; 
typedef struct _float256_t
{
#ifdef LITTLEENDIAN
 float128_t lo;
 float128_t hi;
#else
 float128_t hi;
 float128_t lo;
#endif
} float256_t;
inline void f128M_to_f256M(const float128_t *a, float256_t *b)
{ b->hi = *a;
 b->lo = f128_0;
}
extern void f256M_add(
 const float256_t *x, const float256_t *y, float256_t *z);
extern void f256M_mul(
 const float256_t *x, const float256_t *y, float256_t *z);
extern void f256M_pow(const float256_t *x, unsigned int y,
 float256_t *z);
extern float256_t f256_1, f256_10, f256_r10, f256_5, f256_r5;
extern int f128M_sprint_E(char *s, int width, int precision,
 float128_t *p);
extern int f128M_sprint_F(char *s, int width, int precision,
 float128_t *p);
extern int f128M_sprint_G(char *s, int width, int precision,
 float128_t *p);
extern int f128M_print_E(int width, int precision, float128_t *p);
extern int f128M_print_F(int width, int precision, float128_t *p);
extern int f128M_print_G(int width, int precision, float128_t *p);
extern float128_t atof128(const char *s);
#endif 
#ifdef HAVE_SOFTFLOAT
#define arith_dispatch_1(stgclass, type, name) \
stgclass type name(LispObject a1) \
{ if (is_fixnum(a1)) return name##_i(a1); \
 switch (a1 & TAG_BITS) \
 { \
 case TAG_NUMBERS: \
 switch (type_of_header(numhdr(a1))) \
 { \
 case TYPE_BIGNUM: \
 return name##_b(a1); \
 case TYPE_RATNUM: \
 return name##_r(a1); \
 case TYPE_COMPLEX_NUM: \
 return name##_c(a1); \
 default: \
 aerror1("bad arg for " #name, a1); \
 } \
 case TAG_BOXFLOAT: \
 switch (type_of_header(flthdr(a1))) \
 { \
 case TYPE_SINGLE_FLOAT: \
 return name##_f(a1); \
 case TYPE_DOUBLE_FLOAT: \
 return name##_d(a1); \
 case TYPE_LONG_FLOAT: \
 return name##_l(a1); \
 default: \
 aerror1("bad arg for " #name, a1); \
 } \
 default: \
 aerror1("bad arg for " #name, a1); \
 case (XTAG_SFLOAT & TAG_BITS): \
 if (SIXTY_FOUR_BIT && ((a1 & XTAG_FLOAT32) != 0) \
 return name##_f(a1); \
 else return name##_s(a1); \
 } \
}
#define arith_dispatch_1a(stgclass, type, name, rawname) \
stgclass type name(LispObject a1, LispObject a2) \
{ if (is_fixnum(a2)) return name##_i(a1, a2); \
 switch (a2 & TAG_BITS) \
 { \
 case TAG_NUMBERS: \
 switch (type_of_header(numhdr(a2))) \
 { \
 case TYPE_BIGNUM: \
 return name##_b(a1, a2); \
 case TYPE_RATNUM: \
 return name##_r(a1, a2); \
 case TYPE_COMPLEX_NUM: \
 return name##_c(a1, a2); \
 default: \
 aerror2("bad arg for " #rawname, a1, a2); \
 } \
 case TAG_BOXFLOAT: \
 switch (type_of_header(flthdr(a2))) \
 { \
 case TYPE_SINGLE_FLOAT: \
 return name##_f(a1, a2); \
 case TYPE_DOUBLE_FLOAT: \
 return name##_d(a1, a2); \
 case TYPE_LONG_FLOAT: \
 return name##_l(a1, a2); \
 default: \
 aerror2("bad arg for " #rawname, a1, a2); \
 } \
 default: \
 aerror2("bad arg for " #rawname, a1, a2); \
 case (XTAG_SFLOAT & TAG_BITS): \
 if (SIXTY_FOUR_BIT && ((a2 & XTAG_FLOAT32) != 0)) \
 return name##_f(a1, a2); \
 else return name##_s(a1, a2); \
 } \
}
#define arith_dispatch_2(stgclass, type, name) \
arith_dispatch_1a(inline, type, name##_i, name) \
 \
arith_dispatch_1a(inline, type, name##_b, name) \
 \
arith_dispatch_1a(inline, type, name##_r, name) \
 \
arith_dispatch_1a(inline, type, name##_c, name) \
 \
arith_dispatch_1a(inline, type, name##_s, name) \
 \
arith_dispatch_1a(inline, type, name##_f, name) \
 \
arith_dispatch_1a(inline, type, name##_d, name) \
 \
arith_dispatch_1a(inline, type, name##_l, name) \
 \
stgclass type name(LispObject a1, LispObject a2) \
{ if (is_fixnum(a1)) return name##_i(a1, a2); \
 switch (a1 & TAG_BITS) \
 { \
 case TAG_NUMBERS: \
 switch (type_of_header(numhdr(a1))) \
 { \
 case TYPE_BIGNUM: \
 return name##_b(a1, a2); \
 case TYPE_RATNUM: \
 return name##_r(a1, a2); \
 case TYPE_COMPLEX_NUM: \
 return name##_c(a1, a2); \
 default: \
 aerror2("bad arg for " #name, a1, a2); \
 } \
 case TAG_BOXFLOAT: \
 switch (type_of_header(flthdr(a1))) \
 { \
 case TYPE_SINGLE_FLOAT: \
 return name##_f(a1, a2); \
 case TYPE_DOUBLE_FLOAT: \
 return name##_d(a1, a2); \
 case TYPE_LONG_FLOAT: \
 return name##_l(a1, a2); \
 default: \
 aerror2("bad arg for " #name, a1, a2); \
 } \
 default: \
 aerror2("bad arg for " #name, a1, a2); \
 case (XTAG_SFLOAT & TAG_BITS): \
 if (SIXTY_FOUR_BIT && ((a1 & XTAG_FLOAT32) != 0)) \
 return name##_f(a1, a2); \
 else return name##_s(a1, a2); \
 } \
}
#else 
#define arith_dispatch_1(stgclass, type, name) \
stgclass type name(LispObject a1) \
{ if (is_fixnum(a1)) return name##_i(a1); \
 switch (a1 & TAG_BITS) \
 { \
 case TAG_NUMBERS: \
 switch (type_of_header(numhdr(a1))) \
 { \
 case TYPE_BIGNUM: \
 return name##_b(a1); \
 case TYPE_RATNUM: \
 return name##_r(a1); \
 case TYPE_COMPLEX_NUM: \
 return name##_c(a1); \
 default: \
 aerror1("bad arg for " #name, a1); \
 } \
 case TAG_BOXFLOAT: \
 switch (type_of_header(flthdr(a1))) \
 { \
 case TYPE_SINGLE_FLOAT: \
 return name##_f(a1); \
 case TYPE_DOUBLE_FLOAT: \
 return name##_d(a1); \
 default: \
 aerror1("bad arg for " #name, a1); \
 } \
 default: \
 aerror1("bad arg for " #name, a1); \
 case (XTAG_SFLOAT & TAG_BITS): \
 if (SIXTY_FOUR_BIT && ((a1 & XTAG_FLOAT32) != 0)) \
 return name##_f(a1); \
 else return name##_s(a1); \
 } \
}
#define arith_dispatch_1a(stgclass, type, name, rawname) \
stgclass type name(LispObject a1, LispObject a2) \
{ if (is_fixnum(a2)) return name##_i(a1, a2); \
 switch (a2 & TAG_BITS) \
 { \
 case TAG_NUMBERS: \
 switch (type_of_header(numhdr(a2))) \
 { \
 case TYPE_BIGNUM: \
 return name##_b(a1, a2); \
 case TYPE_RATNUM: \
 return name##_r(a1, a2); \
 case TYPE_COMPLEX_NUM: \
 return name##_c(a1, a2); \
 default: \
 aerror2("bad arg for " #rawname, a1, a2); \
 } \
 case TAG_BOXFLOAT: \
 switch (type_of_header(flthdr(a2))) \
 { \
 case TYPE_SINGLE_FLOAT: \
 return name##_f(a1, a2); \
 case TYPE_DOUBLE_FLOAT: \
 return name##_d(a1, a2); \
 default: \
 aerror2("bad arg for " #rawname, a1, a2); \
 } \
 default: \
 aerror2("bad arg for " #rawname, a1, a2); \
 case (XTAG_SFLOAT & TAG_BITS): \
 if (SIXTY_FOUR_BIT && ((a2 & XTAG_FLOAT32) != 0)) \
 return name##_f(a1, a2); \
 else return name##_s(a1, a2); \
 } \
}
#define arith_dispatch_2(stgclass, type, name) \
arith_dispatch_1a(inline, type, name##_i, name) \
 \
arith_dispatch_1a(inline, type, name##_b, name) \
 \
arith_dispatch_1a(inline, type, name##_r, name) \
 \
arith_dispatch_1a(inline, type, name##_c, name) \
 \
arith_dispatch_1a(inline, type, name##_s, name) \
 \
arith_dispatch_1a(inline, type, name##_f, name) \
 \
arith_dispatch_1a(inline, type, name##_d, name) \
 \
stgclass type name(LispObject a1, LispObject a2) \
{ if (is_fixnum(a1)) return name##_i(a1, a2); \
 switch (a1 & TAG_BITS) \
 { \
 case TAG_NUMBERS: \
 switch (type_of_header(numhdr(a1))) \
 { \
 case TYPE_BIGNUM: \
 return name##_b(a1, a2); \
 case TYPE_RATNUM: \
 return name##_r(a1, a2); \
 case TYPE_COMPLEX_NUM: \
 return name##_c(a1, a2); \
 default: \
 aerror2("bad arg for " #name, a1, a2); \
 } \
 case TAG_BOXFLOAT: \
 switch (type_of_header(flthdr(a1))) \
 { \
 case TYPE_SINGLE_FLOAT: \
 return name##_f(a1, a2); \
 case TYPE_DOUBLE_FLOAT: \
 return name##_d(a1, a2); \
 default: \
 aerror2("bad arg for " #name, a1, a2); \
 } \
 default: \
 aerror2("bad arg for " #name, a1, a2); \
 case (XTAG_SFLOAT & TAG_BITS): \
 if (SIXTY_FOUR_BIT && ((a1 & XTAG_FLOAT32) != 0)) \
 return name##_f(a1, a2); \
 else return name##_s(a1, a2); \
 } \
}
#endif 
#endif 
#ifndef header_entries_h
#define header_entries_h 1
#ifdef CONSERVATIVE
extern void poll();
#endif
extern LispObject Lbatchp(LispObject env);
extern LispObject Ldate(LispObject env);
extern LispObject Ldatestamp(LispObject env);
extern LispObject Leject(LispObject env);
[[noreturn]] extern LispObject Lerror_0(LispObject env);
extern LispObject Lall_symbols0(LispObject env);
extern LispObject Lflush(LispObject env);
extern LispObject Lgc0(LispObject env);
extern LispObject Lgctime(LispObject env);
extern LispObject Lgensym(LispObject env);
extern LispObject Llist_modules(LispObject env);
extern LispObject Llibrary_members0(LispObject env);
extern LispObject Lload_source0(LispObject env);
extern LispObject Lload_selected_source0(LispObject env);
extern LispObject Lload_spid(LispObject);
extern LispObject Llposn(LispObject env);
extern LispObject Lmapstore0(LispObject env);
extern LispObject Lnext_random(LispObject env);
extern LispObject Lnilfn(LispObject env);
extern LispObject Lposn(LispObject env);
extern LispObject Lread(LispObject env);
extern LispObject Lreadch(LispObject env);
extern LispObject Lrtell(LispObject env);
extern LispObject Lterpri(LispObject env);
extern LispObject Ltime(LispObject env);
extern LispObject Ltmpnam(LispObject env);
extern LispObject Ltyi(LispObject env);
extern LispObject Lunserialize(LispObject env);
extern LispObject autoload_0(LispObject env);
extern LispObject bytecoded_0(LispObject env);
extern LispObject Lbytecounts_0(LispObject env);
extern LispObject byteopt_0(LispObject def);
extern LispObject byteoptrest_0(LispObject def);
extern LispObject funarged_0(LispObject env);
extern LispObject tracefunarged_0(LispObject env);
extern LispObject hardopt_0(LispObject def);
extern LispObject hardoptrest_0(LispObject def);
extern LispObject interpreted_0(LispObject env);
extern LispObject tracebytecoded_0(LispObject env);
extern LispObject tracebyteopt_0(LispObject def);
extern LispObject tracebyteoptrest_0(LispObject def);
extern LispObject tracebytecoded_0(LispObject env);
extern LispObject traceinterpreted_0(LispObject env);
extern LispObject tracehardopt_0(LispObject def);
extern LispObject tracehardoptrest_0(LispObject def);
extern LispObject undefined_0(LispObject env);
extern LispObject f0_as_0(LispObject env);
extern LispObject autoload_1(LispObject env, LispObject a);
extern LispObject bytecoded_1(LispObject env, LispObject a);
extern LispObject Lbytecounts_1(LispObject env, LispObject a);
extern LispObject byteopt_1(LispObject def, LispObject a);
extern LispObject byteoptrest_1(LispObject def, LispObject a);
extern LispObject funarged_1(LispObject env, LispObject a1);
extern LispObject tracefunarged_1(LispObject env, LispObject a1);
extern LispObject hardopt_1(LispObject def, LispObject a);
extern LispObject hardoptrest_1(LispObject def, LispObject a);
extern LispObject interpreted_1(LispObject env, LispObject a1);
extern LispObject tracebytecoded_1(LispObject env, LispObject a);
extern LispObject tracebyteopt_1(LispObject def, LispObject a);
extern LispObject tracebyteoptrest_1(LispObject def, LispObject a);
extern LispObject tracebytecoded_1(LispObject env, LispObject a);
extern LispObject traceinterpreted_1(LispObject env, LispObject a1);
extern LispObject tracehardopt_1(LispObject def, LispObject a);
extern LispObject tracehardoptrest_1(LispObject def, LispObject a);
extern LispObject undefined_1(LispObject env, LispObject a1);
extern LispObject f1_as_0(LispObject env, LispObject a);
extern LispObject f1_as_1(LispObject env, LispObject a);
extern LispObject Labsval(LispObject env, LispObject a);
extern LispObject Ladd1(LispObject env, LispObject a);
extern LispObject Lalpha_char_p(LispObject env, LispObject a);
extern LispObject Lall_symbols(LispObject env, LispObject a1);
extern LispObject Lapply0(LispObject env, LispObject a);
extern LispObject Lapply_1(LispObject env, LispObject fn);
extern LispObject Latan(LispObject env, LispObject a);
extern LispObject Latom(LispObject env, LispObject a);
extern LispObject Lbanner(LispObject env, LispObject a);
extern LispObject Lboundp(LispObject env, LispObject a);
extern LispObject Lbpsp(LispObject env, LispObject a);
extern LispObject Lbpsupbv(LispObject env, LispObject v);
extern LispObject Lcaaaar(LispObject env, LispObject a);
extern LispObject Lcaaadr(LispObject env, LispObject a);
extern LispObject Lcaaar(LispObject env, LispObject a);
extern LispObject Lcaadar(LispObject env, LispObject a);
extern LispObject Lcaaddr(LispObject env, LispObject a);
extern LispObject Lcaadr(LispObject env, LispObject a);
extern LispObject Lcaar(LispObject env, LispObject a);
extern LispObject Lcaar(LispObject env, LispObject a);
extern LispObject Lcadaar(LispObject env, LispObject a);
extern LispObject Lcadadr(LispObject env, LispObject a);
extern LispObject Lcadar(LispObject env, LispObject a);
extern LispObject Lcaddar(LispObject env, LispObject a);
extern LispObject Lcadddr(LispObject env, LispObject a);
extern LispObject Lcaddr(LispObject env, LispObject a);
extern LispObject Lcadr(LispObject env, LispObject a);
extern LispObject Lcadr(LispObject env, LispObject a);
extern LispObject Lcar(LispObject env, LispObject a);
extern LispObject Lcar(LispObject env, LispObject a);
extern LispObject Lcdaaar(LispObject env, LispObject a);
extern LispObject Lcdaadr(LispObject env, LispObject a);
extern LispObject Lcdaar(LispObject env, LispObject a);
extern LispObject Lcdadar(LispObject env, LispObject a);
extern LispObject Lcdaddr(LispObject env, LispObject a);
extern LispObject Lcdadr(LispObject env, LispObject a);
extern LispObject Lcdar(LispObject env, LispObject a);
extern LispObject Lcdar(LispObject env, LispObject a);
extern LispObject Lcddaar(LispObject env, LispObject a);
extern LispObject Lcddadr(LispObject env, LispObject a);
extern LispObject Lcddar(LispObject env, LispObject a);
extern LispObject Lcdddar(LispObject env, LispObject a);
extern LispObject Lcddddr(LispObject env, LispObject a);
extern LispObject Lcdddr(LispObject env, LispObject a);
extern LispObject Lcddr(LispObject env, LispObject a);
extern LispObject Lcddr(LispObject env, LispObject a);
extern LispObject Lcdr(LispObject env, LispObject a);
extern LispObject Lcdr(LispObject env, LispObject a);
extern LispObject Lchar_code(LispObject env, LispObject a);
extern LispObject Lclose(LispObject env, LispObject a);
extern LispObject Lcodep(LispObject env, LispObject a);
extern LispObject Lcompress(LispObject env, LispObject a);
extern LispObject Lconsp(LispObject env, LispObject a);
extern LispObject Lconstantp(LispObject env, LispObject a);
extern LispObject Lcopy_module(LispObject env, LispObject a);
extern LispObject Ldefine_in_module(LispObject env, LispObject a);
extern LispObject Ldelete_module(LispObject env, LispObject a);
extern LispObject Ldigitp(LispObject env, LispObject a);
extern LispObject Lendp(LispObject env, LispObject a);
[[noreturn]] extern LispObject Lerror_1(LispObject env, LispObject a1);
extern LispObject Lerrorset_1(LispObject env, LispObject form);
extern LispObject Leval(LispObject env, LispObject a);
extern LispObject Levenp(LispObject env, LispObject a);
extern LispObject Levlis(LispObject env, LispObject a);
extern LispObject Lexplode(LispObject env, LispObject a);
extern LispObject Lexplode2lc(LispObject env, LispObject a);
extern LispObject Lexplode2lcn(LispObject env, LispObject a);
extern LispObject Lexplode2n(LispObject env, LispObject a);
extern LispObject Lexplodec(LispObject env, LispObject a);
extern LispObject Lexplodecn(LispObject env, LispObject a);
extern LispObject Lexplodehex(LispObject env, LispObject a);
extern LispObject Lexploden(LispObject env, LispObject a);
extern LispObject Lexplodeoctal(LispObject env, LispObject a);
extern LispObject Lfixp(LispObject env, LispObject a);
extern LispObject Lfloat(LispObject env, LispObject a);
extern LispObject Lfloatp(LispObject env, LispObject a);
extern LispObject Lfrexp(LispObject env, LispObject a);
extern LispObject Lfuncall_1(LispObject env, LispObject fn);
extern LispObject Lgc(LispObject env, LispObject a);
extern LispObject Lgc_forcer1(LispObject env, LispObject a);
extern LispObject Lgensym0(LispObject env, LispObject a,
 const char *s);
extern LispObject Lgensym1(LispObject env, LispObject a);
extern LispObject Lgensym2(LispObject env, LispObject a);
extern LispObject Lgetd(LispObject env, LispObject a);
extern LispObject Lgetenv(LispObject env, LispObject a);
extern LispObject Lget_bps(LispObject env, LispObject a);
extern LispObject Liadd1(LispObject env, LispObject a);
extern LispObject Lidentity(LispObject env, LispObject a);
extern LispObject Liminus(LispObject env, LispObject a);
extern LispObject Liminusp(LispObject env, LispObject a);
extern LispObject Lindirect(LispObject env, LispObject a);
extern LispObject Lintegerp(LispObject env, LispObject a);
extern LispObject Lintern(LispObject env, LispObject a);
extern LispObject Lionep(LispObject env, LispObject a);
extern LispObject Lis_spid(LispObject env, LispObject a);
extern LispObject Lisub1(LispObject env, LispObject a);
extern LispObject Lizerop(LispObject env, LispObject a);
extern LispObject Llength(LispObject env, LispObject a);
extern LispObject Llengthc(LispObject env, LispObject a);
extern LispObject Llibrary_members(LispObject env, LispObject a);
extern LispObject Llinelength(LispObject env, LispObject a);
extern LispObject Llist_to_string(LispObject env, LispObject a);
extern LispObject Llist_to_vector(LispObject env, LispObject a);
extern LispObject Lload_module(LispObject env, LispObject a);
extern LispObject Lload_source(LispObject env, LispObject a);
extern LispObject Lload_selected_source(LispObject env, LispObject a);
extern LispObject Llognot(LispObject env, LispObject a);
extern LispObject Llog_1(LispObject env, LispObject a);
extern LispObject Llsd(LispObject env, LispObject a);
extern LispObject Lmacroexpand(LispObject env, LispObject a);
extern LispObject Lmacroexpand_1(LispObject env, LispObject a);
extern LispObject Lmacro_function(LispObject env, LispObject a);
extern LispObject Lmake_global(LispObject env, LispObject a);
extern LispObject Lmake_keyword(LispObject env, LispObject a);
extern LispObject Lmake_special(LispObject env, LispObject a);
extern LispObject Lmapstore(LispObject env, LispObject a);
extern LispObject Lmd5(LispObject env, LispObject a1);
extern LispObject Lmd60(LispObject env, LispObject a1);
extern LispObject Lminus(LispObject env, LispObject a);
extern LispObject Lminusp(LispObject env, LispObject a);
extern LispObject Lmkevect(LispObject env, LispObject n);
extern LispObject Lmkhash_1(LispObject env, LispObject a);
extern LispObject Lmkhashset(LispObject env, LispObject a);
extern LispObject Lmkquote(LispObject env, LispObject a);
extern LispObject Lmkvect(LispObject env, LispObject a);
extern LispObject Lmodular_minus(LispObject env, LispObject a);
extern LispObject Lmodular_number(LispObject env, LispObject a);
extern LispObject Lmodular_reciprocal(LispObject env, LispObject a);
extern LispObject Lmodule_exists(LispObject env, LispObject a);
extern LispObject Lmsd(LispObject env, LispObject a);
extern LispObject Lmv_list(LispObject env, LispObject a);
extern LispObject Lncons(LispObject env, LispObject a);
extern LispObject Lnreverse(LispObject env, LispObject a);
extern LispObject Lnull(LispObject env, LispObject a);
extern LispObject Lnumberp(LispObject env, LispObject a);
extern LispObject Loddp(LispObject env, LispObject a);
extern LispObject Lonep(LispObject env, LispObject a);
extern LispObject Lpagelength(LispObject env, LispObject a);
extern LispObject Lplist(LispObject env, LispObject a);
extern LispObject Lplusp(LispObject env, LispObject a);
extern LispObject Lprin(LispObject env, LispObject a);
extern LispObject Lprin(LispObject env, LispObject a);
extern LispObject Lprin2a(LispObject env, LispObject a);
extern LispObject Lprinc(LispObject env, LispObject a);
extern LispObject Lprinc(LispObject env, LispObject a);
extern LispObject Lprint(LispObject env, LispObject a);
extern LispObject Lprintc(LispObject env, LispObject a);
extern LispObject Lrandom_1(LispObject env, LispObject a);
extern LispObject Lrational(LispObject env, LispObject a);
extern LispObject Lrdf1(LispObject env, LispObject a);
extern LispObject Lrds(LispObject env, LispObject a);
extern LispObject Lremd(LispObject env, LispObject a);
extern LispObject Lrepresentation1(LispObject env, LispObject a);
extern LispObject Lreverse(LispObject env, LispObject a);
extern LispObject Lserialize(LispObject env, LispObject a);
extern LispObject Lserialize1(LispObject env, LispObject a);
extern LispObject Lsetpchar(LispObject env, LispObject a);
extern LispObject Lset_small_modulus(LispObject env, LispObject a);
extern LispObject Lsmkvect(LispObject env, LispObject a);
extern LispObject Lspecial_char(LispObject env, LispObject a);
extern LispObject Lspecial_form_p(LispObject env, LispObject a);
extern LispObject Lspid_to_nil(LispObject env, LispObject a);
extern LispObject Lspool(LispObject env, LispObject a);
extern LispObject Lstart_module(LispObject env, LispObject a);
[[noreturn]] extern LispObject Lstop1(LispObject env, LispObject a);
extern LispObject Lstringp(LispObject env, LispObject a);
extern LispObject Lsub1(LispObject env, LispObject a);
extern LispObject Lsymbolp(LispObject env, LispObject a);
extern LispObject Lsymbol_argcount(LispObject env, LispObject a);
extern LispObject Lsymbol_argcode(LispObject env, LispObject a);
extern LispObject Lsymbol_env(LispObject env, LispObject a);
extern LispObject Lsymbol_function(LispObject env, LispObject a);
extern LispObject Lsymbol_globalp(LispObject env, LispObject a);
extern LispObject Lsymbol_name(LispObject env, LispObject a);
extern LispObject Lsymbol_restore_fns(LispObject env, LispObject a);
extern LispObject Lsymbol_specialp(LispObject env, LispObject a);
extern LispObject Lsymbol_value(LispObject env, LispObject a);
extern LispObject Lsystem(LispObject env, LispObject a);
extern LispObject Lthreevectorp(LispObject env, LispObject a);
extern LispObject Lthrow_nil(LispObject env, LispObject a);
extern LispObject Ltrace(LispObject env, LispObject a);
extern LispObject Ltruncate(LispObject env, LispObject a);
extern LispObject Lttab(LispObject env, LispObject a);
extern LispObject Ltyo(LispObject env, LispObject a);
extern LispObject Lunintern(LispObject env, LispObject a);
extern LispObject Lunmake_global(LispObject env, LispObject a);
extern LispObject Lunmake_keyword(LispObject env, LispObject a);
extern LispObject Lunmake_special(LispObject env, LispObject a);
extern LispObject Luntrace(LispObject env, LispObject a);
extern LispObject Lupbv(LispObject env, LispObject a);
extern LispObject Lsimple_vectorp(LispObject env, LispObject a);
extern LispObject Lvectorp(LispObject env, LispObject a);
extern LispObject Lverbos(LispObject env, LispObject a);
extern LispObject Lwhitespace_char_p(LispObject env, LispObject a);
extern LispObject Lwritable_libraryp(LispObject env, LispObject a);
extern LispObject Lwrs(LispObject env, LispObject a);
extern LispObject Lxtab(LispObject env, LispObject a);
extern LispObject Lxtab(LispObject env, LispObject a);
extern LispObject Lzerop(LispObject env, LispObject a);
extern LispObject Lfind_symbol_1(LispObject env, LispObject str);
extern LispObject Llistp(LispObject env, LispObject a);
extern LispObject autoload_2(LispObject env, LispObject a1,
 LispObject a2);
extern LispObject bytecoded_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject byteopt_2(LispObject def, LispObject a,
 LispObject b);
extern LispObject byteoptrest_2(LispObject def, LispObject a,
 LispObject b);
extern LispObject funarged_2(LispObject env, LispObject a1,
 LispObject a2);
extern LispObject tracefunarged_2(LispObject env, LispObject a1,
 LispObject a2);
extern LispObject hardopt_2(LispObject def, LispObject a,
 LispObject b);
extern LispObject hardoptrest_2(LispObject def, LispObject a,
 LispObject b);
extern LispObject interpreted_2(LispObject env, LispObject a1,
 LispObject a2);
extern LispObject tracebyteopt_2(LispObject def, LispObject a,
 LispObject b);
extern LispObject tracebyteoptrest_2(LispObject def, LispObject a,
 LispObject b);
extern LispObject tracebytecoded_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject traceinterpreted_2(LispObject env, LispObject a1,
 LispObject a2);
extern LispObject tracehardopt_2(LispObject def, LispObject a,
 LispObject b);
extern LispObject tracehardoptrest_2(LispObject def, LispObject a,
 LispObject b);
extern LispObject undefined_2(LispObject env, LispObject a1,
 LispObject a2);
extern LispObject f2_as_0(LispObject env, LispObject a, LispObject b);
extern LispObject f2_as_1(LispObject env, LispObject a, LispObject b);
extern LispObject f2_as_2(LispObject env, LispObject a, LispObject b);
extern LispObject Lappend_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lapply_2(LispObject env, LispObject fn,
 LispObject a1);
extern LispObject Lapply1(LispObject env, LispObject a, LispObject b);
extern LispObject Lash(LispObject env, LispObject a, LispObject b);
extern LispObject Lash1(LispObject env, LispObject a, LispObject b);
extern LispObject Lassoc(LispObject env, LispObject a, LispObject b);
extern LispObject Latan2(LispObject env, LispObject a, LispObject b);
extern LispObject Latan2d(LispObject env, LispObject a, LispObject b);
extern LispObject Latsoc(LispObject env, LispObject a, LispObject b);
extern LispObject Lbpsgetv(LispObject env, LispObject v,
 LispObject n);
extern LispObject Lcons(LispObject env, LispObject a, LispObject b);
extern LispObject Ldeleq(LispObject env, LispObject a, LispObject b);
extern LispObject Ldelete(LispObject env, LispObject a, LispObject b);
extern LispObject Ldifference_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Ldivide_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lelt(LispObject env, LispObject a, LispObject b);
extern LispObject Leq(LispObject env, LispObject a, LispObject b);
extern LispObject Leqcar(LispObject env, LispObject a, LispObject b);
extern LispObject Lequalcar(LispObject env, LispObject a,
 LispObject b);
extern LispObject Leql(LispObject env, LispObject a, LispObject b);
extern LispObject Leqn_2(LispObject env, LispObject a, LispObject b);
extern LispObject Lcl_equal(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lequal(LispObject env, LispObject a, LispObject b);
[[noreturn]] extern LispObject Lerror_2(LispObject env, LispObject a1,
 LispObject a2);
extern LispObject Lerrorset_2(LispObject env, LispObject form,
 LispObject ffg1);
extern LispObject Lexpt(LispObject env, LispObject a, LispObject b);
extern LispObject Lflag(LispObject env, LispObject a, LispObject b);
extern LispObject Lflagp(LispObject env, LispObject a, LispObject b);
extern LispObject Lflagpcar(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lfuncall_2(LispObject env, LispObject fn,
 LispObject a1);
extern LispObject Lgc_forcer(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lgcd_2(LispObject env, LispObject a, LispObject b);
extern LispObject Lgeq_2(LispObject env, LispObject a, LispObject b);
extern LispObject Lget(LispObject env, LispObject a, LispObject b);
extern LispObject Lget_hash_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lgetv(LispObject env, LispObject a, LispObject b);
extern LispObject Lgreaterp_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lidifference_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Ligeq_2(LispObject env, LispObject a, LispObject b);
extern LispObject Ligreaterp_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lileq_2(LispObject env, LispObject a, LispObject b);
extern LispObject Lilessp_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Limax_2(LispObject env, LispObject a, LispObject b);
extern LispObject Limin_2(LispObject env, LispObject a, LispObject b);
extern LispObject Linorm(LispObject env, LispObject a, LispObject k);
extern LispObject Lintersect(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lintersect_symlist(LispObject env, LispObject a,
 LispObject b);
extern LispObject Liplus_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Liquotient_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Liremainder_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lirightshift(LispObject env, LispObject a,
 LispObject b);
extern LispObject Litimes_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Llcm_2(LispObject env, LispObject a, LispObject b);
extern LispObject Lleq_2(LispObject env, LispObject a, LispObject b);
extern LispObject Llessp_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Llist_2(LispObject env, LispObject a, LispObject b);
extern LispObject Llog(LispObject env, LispObject a, LispObject b);
extern LispObject Llog_2(LispObject env, LispObject a, LispObject b);
extern LispObject Lmake_random_state(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lmake_random_state(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lmax_2(LispObject env, LispObject a, LispObject b);
extern LispObject Lmember(LispObject env, LispObject a, LispObject b);
extern LispObject Lmemq(LispObject env, LispObject a, LispObject b);
extern LispObject Lmin_2(LispObject env, LispObject a, LispObject b);
extern LispObject Lmkhash_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lmod_2(LispObject env, LispObject a, LispObject b);
extern LispObject Lmodular_difference(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lmodular_expt(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lmodular_plus(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lmodular_quotient(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lmodular_times(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lnconc(LispObject env, LispObject a, LispObject b);
extern LispObject Lneq_2(LispObject env, LispObject a, LispObject b);
extern LispObject Lnreverse2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lorderp(LispObject env, LispObject a, LispObject b);
extern LispObject Lpair(LispObject env, LispObject a, LispObject b);
extern LispObject Lplus_2(LispObject env, LispObject a, LispObject b);
extern LispObject Lquotient_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lrem_2(LispObject env, LispObject a, LispObject b);
extern LispObject Lremflag(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lremprop(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lrepresentation2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lresource_limit_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lrplaca(LispObject env, LispObject a, LispObject b);
extern LispObject Lrplacd(LispObject env, LispObject a, LispObject b);
extern LispObject Lrseek(LispObject env, LispObject a);
extern LispObject Lset(LispObject env, LispObject a, LispObject b);
extern LispObject Lset_help_file(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lsgetv(LispObject env, LispObject a, LispObject b);
extern LispObject Lsmemq(LispObject env, LispObject a, LispObject b);
extern LispObject Lsubla(LispObject env, LispObject a, LispObject b);
extern LispObject Lsublis(LispObject env, LispObject a, LispObject b);
extern LispObject Lsymbol_protect(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lsymbol_set_definition(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lsymbol_set_env(LispObject env, LispObject a,
 LispObject b);
[[noreturn]] extern LispObject Lthrow_one_value(LispObject env,
 LispObject a, LispObject b);
extern LispObject Ltimes_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lunion(LispObject env, LispObject a, LispObject b);
extern LispObject Lunion_symlist(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lwrite_module(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lxcons(LispObject env, LispObject a, LispObject b);
extern LispObject Laref_2(LispObject env, LispObject a, LispObject b);
extern LispObject Latan_2(LispObject env, LispObject a, LispObject b);
extern LispObject Lelt(LispObject env, LispObject a, LispObject b);
extern LispObject Lfloat_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lintern_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lmacroexpand_1_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lmacroexpand_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lrandom_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Ltruncate_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject Lunintern_2(LispObject env, LispObject a,
 LispObject b);
extern LispObject f3_as_0(LispObject env, LispObject a1,
 LispObject a2, LispObject a3);
extern LispObject f3_as_1(LispObject env, LispObject a1,
 LispObject a2, LispObject a3);
extern LispObject f3_as_2(LispObject env, LispObject a1,
 LispObject a2, LispObject a3);
extern LispObject f3_as_3(LispObject env, LispObject a1,
 LispObject a2, LispObject a3);
extern LispObject Lapply_3(LispObject env, LispObject fn,
 LispObject a1, LispObject a2);
extern LispObject Lapply2(LispObject env, LispObject a1,
 LispObject a2, LispObject a3);
extern LispObject Lacons(LispObject env, LispObject a1, LispObject a2,
 LispObject a3);
extern LispObject Laref_3(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3);
extern LispObject Laset_3(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3);
extern LispObject Lbpsputv(LispObject env, LispObject a1,
 LispObject a2, LispObject a3);
[[noreturn]] extern LispObject Lerror_3(LispObject env, LispObject a1,
 LispObject a2, LispObject a3);
extern LispObject Lerrorset_3(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3);
extern LispObject Lfuncall_3(LispObject env, LispObject fn,
 LispObject a1, LispObject a2);
extern LispObject Llist_2star(LispObject env, LispObject a1,
 LispObject a2, LispObject a3);
extern LispObject Llist_3(LispObject env, LispObject a1,
 LispObject a2, LispObject a3);
extern LispObject Lput_hash(LispObject env, LispObject a1,
 LispObject a2, LispObject a3);
extern LispObject Lputprop(LispObject env, LispObject a1,
 LispObject a2, LispObject a3);
extern LispObject Lputv(LispObject env, LispObject a1, LispObject a2,
 LispObject a3);
extern LispObject Lresource_limit_3(LispObject env, LispObject a,
 LispObject b, LispObject c);
extern LispObject Lsputv(LispObject env, LispObject a1, LispObject a2,
 LispObject a3);
extern LispObject Lsubst(LispObject env, LispObject a1, LispObject a2,
 LispObject a3);
extern LispObject Lget_3(LispObject env, LispObject a1, LispObject a2,
 LispObject a3);
extern LispObject Lmkhash_3(LispObject env, LispObject a,
 LispObject b, LispObject c);
extern LispObject autoload_3(LispObject env, LispObject, LispObject,
 LispObject);
extern LispObject bytecoded_3(LispObject env, LispObject, LispObject,
 LispObject);
extern LispObject byteopt_3(LispObject def, LispObject, LispObject,
 LispObject);
extern LispObject byteoptrest_3(LispObject def, LispObject,
 LispObject, LispObject);
extern LispObject funarged_3(LispObject env, LispObject, LispObject,
 LispObject);
extern LispObject tracefunarged_3(LispObject env, LispObject,
 LispObject, LispObject);
extern LispObject hardopt_3(LispObject def, LispObject, LispObject,
 LispObject);
extern LispObject hardoptrest_3(LispObject def, LispObject,
 LispObject, LispObject);
extern LispObject interpreted_3(LispObject env, LispObject,
 LispObject, LispObject);
extern LispObject tracebytecoded_3(LispObject env, LispObject,
 LispObject, LispObject);
extern LispObject tracebyteopt_3(LispObject def, LispObject,
 LispObject, LispObject);
extern LispObject tracebyteoptrest_3(LispObject def, LispObject,
 LispObject, LispObject);
extern LispObject tracebytecoded_3(LispObject env, LispObject,
 LispObject, LispObject);
extern LispObject traceinterpreted_3(LispObject env, LispObject,
 LispObject, LispObject);
extern LispObject tracehardopt_3(LispObject def, LispObject,
 LispObject, LispObject);
extern LispObject tracehardoptrest_3(LispObject def, LispObject,
 LispObject, LispObject);
extern LispObject undefined_3(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3);
extern LispObject autoload_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject bytecoded_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject byteopt_4up(LispObject def, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject byteoptrest_4up(LispObject def, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject funarged_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject tracefunarged_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject hardopt_4up(LispObject def, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject hardoptrest_4up(LispObject def, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject interpreted_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject tracebyteopt_4up(LispObject def, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject tracebyteoptrest_4up(LispObject def, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject tracebytecoded0(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject tracebytecoded_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject traceinterpreted_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject tracehardopt_4up(LispObject def, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject tracehardoptrest_4up(LispObject def, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject undefined_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject Lapply_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject Lapply3(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
[[noreturn]] extern LispObject Lerror_34up(LispObject env, LispObject a1,
 LispObject a2, LispObject a3, LispObject a4up);
extern LispObject Lerrorset_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject Lfuncall_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject Llist_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject Lliststar_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject Llogand_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject Llogeqv_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject Llogor_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject Llogxor_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject Lmax_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject Lmin_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject Lresource_limit_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject Lvalues_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject Lappend_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject Laref_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject Laset_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject Leqn_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject Lgcd_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject Lgeq_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject Lgreaterp_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject Llcm_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject Lleq_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject Llessp_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject Lquotient_4up(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
#ifdef OPENMATH
extern LispObject om_openFileDev(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject om_openStringDev(LispObject env, LispObject lstr,
 LispObject lenc);
extern LispObject om_closeDev(LispObject env, LispObject dev);
extern LispObject om_setDevEncoding(LispObject env, LispObject ldev,
 LispObject lenc);
extern LispObject om_makeConn(LispObject env, LispObject ltimeout);
extern LispObject om_closeConn(LispObject env, LispObject lconn);
extern LispObject om_getConnInDevice(LispObject env,
 LispObject lconn);
extern LispObject om_getConnOutDevice(LispObject env,
 LispObject lconn);
extern LispObject om_connectTCP(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject om_bindTCP(LispObject env, LispObject lconn,
 LispObject lport);
extern LispObject om_putApp(LispObject env, LispObject ldev);
extern LispObject om_putEndApp(LispObject env, LispObject ldev);
extern LispObject om_putAtp(LispObject env, LispObject ldev);
extern LispObject om_putEndAtp(LispObject env, LispObject ldev);
extern LispObject om_putAttr(LispObject env, LispObject ldev);
extern LispObject om_putEndAttr(LispObject env, LispObject ldev);
extern LispObject om_putBind(LispObject env, LispObject ldev);
extern LispObject om_putEndBind(LispObject env, LispObject ldev);
extern LispObject om_putBVar(LispObject env, LispObject ldev);
extern LispObject om_putEndBVar(LispObject env, LispObject ldev);
extern LispObject om_putError(LispObject env, LispObject ldev);
extern LispObject om_putEndError(LispObject env, LispObject ldev);
extern LispObject om_putObject(LispObject env, LispObject ldev);
extern LispObject om_putEndObject(LispObject env, LispObject ldev);
extern LispObject om_putInt(LispObject env, LispObject ldev,
 LispObject val);
extern LispObject om_putFloat(LispObject env, LispObject ldev,
 LispObject val);
extern LispObject om_putByteArray(LispObject env, LispObject ldev,
 LispObject val);
extern LispObject om_putVar(LispObject env, LispObject ldev,
 LispObject val);
extern LispObject om_putString(LispObject env, LispObject ldev,
 LispObject val);
extern LispObject om_putSymbol(LispObject env, LispObject ldev,
 LispObject val);
extern LispObject om_putSymbol2(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject om_getApp(LispObject env, LispObject ldev);
extern LispObject om_getEndApp(LispObject env, LispObject ldev);
extern LispObject om_getAtp(LispObject env, LispObject ldev);
extern LispObject om_getEndAtp(LispObject env, LispObject ldev);
extern LispObject om_getAttr(LispObject env, LispObject ldev);
extern LispObject om_getEndAttr(LispObject env, LispObject ldev);
extern LispObject om_getBind(LispObject env, LispObject ldev);
extern LispObject om_getEndBind(LispObject env, LispObject ldev);
extern LispObject om_getBVar(LispObject env, LispObject ldev);
extern LispObject om_getEndBVar(LispObject env, LispObject ldev);
extern LispObject om_getError(LispObject env, LispObject ldev);
extern LispObject om_getEndError(LispObject env, LispObject ldev);
extern LispObject om_getObject(LispObject env, LispObject ldev);
extern LispObject om_getEndObject(LispObject env, LispObject ldev);
extern LispObject om_getInt(LispObject env, LispObject ldev);
extern LispObject om_getFloat(LispObject env, LispObject ldev);
extern LispObject om_getByteArray(LispObject env, LispObject ldev);
extern LispObject om_getVar(LispObject env, LispObject ldev);
extern LispObject om_getString(LispObject env, LispObject ldev);
extern LispObject om_getSymbol(LispObject env, LispObject ldev);
extern LispObject om_getType(LispObject env, LispObject ldev);
extern LispObject om_stringToStringPtr(LispObject env,
 LispObject lstr);
extern LispObject om_stringPtrToString(LispObject env,
 LispObject lpstr);
extern LispObject om_read(LispObject env, LispObject dev);
extern LispObject om_supportsCD(LispObject env, LispObject lcd);
extern LispObject om_supportsSymbol(LispObject env, LispObject lcd,
 LispObject lsym);
extern LispObject om_listCDs(LispObject env, LispObject a1,
 LispObject a2,
 LispObject a3, LispObject a4up);
extern LispObject om_listSymbols(LispObject env, LispObject lcd);
extern LispObject om_whichCDs(LispObject env, LispObject lsym);
#endif
extern LispObject undefined_4up(LispObject env,
 LispObject a1, LispObject a2, LispObject a3, LispObject a4);
#endif 
#ifndef __lispthrow_h
#define __lispthrow_h 1
extern LispObject *stack;
extern std::jmp_buf *global_jb;
#ifdef CONSERVATIVE
inline size_t push_count = 0;
inline size_t real_push_count = 0;
#endif
inline void real_push(LispObject a)
{ *++stack = a;
#ifdef CONSERVATIVE
 real_push_count++;
#endif
}
inline void real_push(LispObject a, LispObject b)
{ *++stack = a;
 *++stack = b;
#ifdef CONSERVATIVE
 real_push_count++;
#endif
}
inline void real_push(LispObject a, LispObject b, LispObject c)
{ *++stack = a;
 *++stack = b;
 *++stack = c;
#ifdef CONSERVATIVE
 real_push_count++;
#endif
}
inline void real_push(LispObject a, LispObject b, LispObject c,
 LispObject d)
{ *++stack = a;
 *++stack = b;
 *++stack = c;
 *++stack = d;
#ifdef CONSERVATIVE
 real_push_count++;
#endif
}
inline void real_push(LispObject a, LispObject b, LispObject c,
 LispObject d, LispObject e)
{ *++stack = a;
 *++stack = b;
 *++stack = c;
 *++stack = d;
 *++stack = e;
#ifdef CONSERVATIVE
 real_push_count++;
#endif
}
inline void real_push(LispObject a, LispObject b, LispObject c,
 LispObject d, LispObject e, LispObject f)
{ *++stack = a;
 *++stack = b;
 *++stack = c;
 *++stack = d;
 *++stack = e;
 *++stack = f;
#ifdef CONSERVATIVE
 real_push_count++;
#endif
}
inline void real_pop(LispObject& a)
{ a = *stack--;
#ifdef CONSERVATIVE
 real_push_count++;
#endif
}
inline void real_pop(volatile LispObject& a)
{ a = *stack--;
#ifdef CONSERVATIVE
 real_push_count++;
#endif
}
inline void real_pop(LispObject& a, LispObject& b)
{ a = *stack--;
 b = *stack--;
#ifdef CONSERVATIVE
 real_push_count++;
#endif
}
inline void real_pop(LispObject& a, LispObject& b, LispObject& c)
{ a = *stack--;
 b = *stack--;
 c = *stack--;
#ifdef CONSERVATIVE
 real_push_count++;
#endif
}
inline void real_pop(LispObject& a, LispObject& b, LispObject& c,
 LispObject& d)
{ a = *stack--;
 b = *stack--;
 c = *stack--;
 d = *stack--;
#ifdef CONSERVATIVE
 real_push_count++;
#endif
}
inline void real_pop(LispObject& a, LispObject& b, LispObject& c,
 LispObject& d, LispObject& e)
{ a = *stack--;
 b = *stack--;
 c = *stack--;
 d = *stack--;
 e = *stack--;
#ifdef CONSERVATIVE
 real_push_count++;
#endif
}
inline void real_pop(LispObject& a, LispObject& b, LispObject& c,
 LispObject& d, LispObject& e, LispObject& f)
{ a = *stack--;
 b = *stack--;
 c = *stack--;
 d = *stack--;
 e = *stack--;
 f = *stack--;
#ifdef CONSERVATIVE
 real_push_count++;
#endif
}
inline void real_popv(int n)
{ stack -= n;
#ifdef CONSERVATIVE
 real_push_count++;
#endif
}
#ifdef CONSERVATIVE
#if 1 
inline void push(LispObject a)
{ *++stack = a;
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void push(LispObject a, LispObject b)
{ *++stack = a;
 *++stack = b;
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void push(LispObject a, LispObject b, LispObject c)
{ *++stack = a;
 *++stack = b;
 *++stack = c;
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void push(LispObject a, LispObject b, LispObject c,
 LispObject d)
{ *++stack = a;
 *++stack = b;
 *++stack = c;
 *++stack = d;
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void push(LispObject a, LispObject b, LispObject c,
 LispObject d, LispObject e)
{ *++stack = a;
 *++stack = b;
 *++stack = c;
 *++stack = d;
 *++stack = e;
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void push(LispObject a, LispObject b, LispObject c,
 LispObject d, LispObject e, LispObject f)
{ *++stack = a;
 *++stack = b;
 *++stack = c;
 *++stack = d;
 *++stack = e;
 *++stack = f;
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void pop(LispObject& a)
{ my_assert(a == *stack);
 a = *stack--;
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void pop(volatile LispObject& a)
{ my_assert(a == *stack);
 a = *stack--;
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void pop(LispObject& a, LispObject& b)
{ my_assert(a == *stack);
 a = *stack--;
 my_assert(b == *stack);
 b = *stack--;
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void pop(LispObject& a, LispObject& b, LispObject& c)
{ my_assert(a == *stack);
 a = *stack--;
 my_assert(b == *stack);
 b = *stack--;
 my_assert(c == *stack);
 c = *stack--;
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void pop(LispObject& a, LispObject& b, LispObject& c,
 LispObject& d)
{ my_assert(a == *stack);
 a = *stack--;
 my_assert(b == *stack);
 b = *stack--;
 my_assert(c == *stack);
 c = *stack--;
 my_assert(d == *stack);
 d = *stack--;
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void pop(LispObject& a, LispObject& b, LispObject& c,
 LispObject& d, LispObject& e)
{ my_assert(a == *stack);
 a = *stack--;
 my_assert(b == *stack);
 b = *stack--;
 my_assert(c == *stack);
 c = *stack--;
 my_assert(d == *stack);
 d = *stack--;
 my_assert(e == *stack);
 e = *stack--;
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void pop(LispObject& a, LispObject& b, LispObject& c,
 LispObject& d, LispObject& e, LispObject& f)
{ my_assert(a == *stack);
 a = *stack--;
 my_assert(b == *stack);
 b = *stack--;
 my_assert(c == *stack);
 c = *stack--;
 my_assert(d == *stack);
 d = *stack--;
 my_assert(e == *stack);
 e = *stack--;
 my_assert(f == *stack);
 f = *stack--;
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void popv(int n)
{ stack -= n;
#ifdef CONSERVATIVE
 push_count++;
#endif
}
#else 
inline void push(UNUSED_NAME LispObject a)
{
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void push(UNUSED_NAME LispObject a, UNUSED_NAME LispObject b)
{
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void push(UNUSED_NAME LispObject a, UNUSED_NAME LispObject b, UNUSED_NAME LispObject c)
{
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void push(UNUSED_NAME LispObject a, UNUSED_NAME LispObject b, UNUSED_NAME LispObject c,
 UNUSED_NAME LispObject d)
{
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void push(UNUSED_NAME LispObject a, UNUSED_NAME LispObject b, UNUSED_NAME LispObject c,
 UNUSED_NAME LispObject d, UNUSED_NAME LispObject e)
{
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void push(UNUSED_NAME LispObject a, UNUSED_NAME LispObject b, UNUSED_NAME LispObject c,
 UNUSED_NAME LispObject d, UNUSED_NAME LispObject e, UNUSED_NAME LispObject f)
{
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void pop(UNUSED_NAME LispObject& a)
{
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void pop( UNUSED_NAME volatile LispObject& a)
{
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void pop(UNUSED_NAME LispObject& a, UNUSED_NAME LispObject& b)
{
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void pop(UNUSED_NAME LispObject& a, UNUSED_NAME LispObject& b, UNUSED_NAME LispObject& c)
{
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void pop(UNUSED_NAME LispObject& a, UNUSED_NAME LispObject& b, UNUSED_NAME LispObject& c,
 UNUSED_NAME LispObject& d)
{
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void pop(UNUSED_NAME LispObject& a, UNUSED_NAME LispObject& b, UNUSED_NAME LispObject& c,
 UNUSED_NAME LispObject& d, UNUSED_NAME LispObject& e)
{
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void pop(UNUSED_NAME LispObject& a, UNUSED_NAME LispObject& b, UNUSED_NAME LispObject& c,
 UNUSED_NAME LispObject& d, UNUSED_NAME LispObject& e, UNUSED_NAME LispObject& f)
{
#ifdef CONSERVATIVE
 push_count++;
#endif
}
inline void popv(UNUSED_NAME int n)
{
#ifdef CONSERVATIVE
 push_count++;
#endif
}
#endif 
#else 
inline void push(LispObject a)
{ *++stack = a;
}
inline void push(LispObject a, LispObject b)
{ *++stack = a;
 *++stack = b;
}
inline void push(LispObject a, LispObject b, LispObject c)
{ *++stack = a;
 *++stack = b;
 *++stack = c;
}
inline void push(LispObject a, LispObject b, LispObject c,
 LispObject d)
{ *++stack = a;
 *++stack = b;
 *++stack = c;
 *++stack = d;
}
inline void push(LispObject a, LispObject b, LispObject c,
 LispObject d, LispObject e)
{ *++stack = a;
 *++stack = b;
 *++stack = c;
 *++stack = d;
 *++stack = e;
}
inline void push(LispObject a, LispObject b, LispObject c,
 LispObject d, LispObject e, LispObject f)
{ *++stack = a;
 *++stack = b;
 *++stack = c;
 *++stack = d;
 *++stack = e;
 *++stack = f;
}
inline void pop(LispObject& a)
{ a = *stack--;
}
inline void pop(volatile LispObject& a)
{ a = *stack--;
}
inline void pop(LispObject& a, LispObject& b)
{ a = *stack--;
 b = *stack--;
}
inline void pop(LispObject& a, LispObject& b, LispObject& c)
{ a = *stack--;
 b = *stack--;
 c = *stack--;
}
inline void pop(LispObject& a, LispObject& b, LispObject& c,
 LispObject& d)
{ a = *stack--;
 b = *stack--;
 c = *stack--;
 d = *stack--;
}
inline void pop(LispObject& a, LispObject& b, LispObject& c,
 LispObject& d, LispObject& e)
{ a = *stack--;
 b = *stack--;
 c = *stack--;
 d = *stack--;
 e = *stack--;
}
inline void pop(LispObject& a, LispObject& b, LispObject& c,
 LispObject& d, LispObject& e, LispObject& f)
{ a = *stack--;
 b = *stack--;
 c = *stack--;
 d = *stack--;
 e = *stack--;
 f = *stack--;
}
inline void popv(int n)
{ stack -= n;
}
#endif 
extern volatile bool tick_pending;
extern volatile int unwind_pending;
extern void respond_to_stack_event();
inline void stackcheck0()
{ if_check_stack();
 if ((reinterpret_cast<uintptr_t>(stack) | event_flag.load()) >=
 reinterpret_cast<uintptr_t>(stackLimit)) respond_to_stack_event();
}
inline void stackcheck1(LispObject& a1)
{ if_check_stack();
 if ((reinterpret_cast<uintptr_t>(stack) | event_flag.load()) >=
 reinterpret_cast<uintptr_t>(stackLimit))
 { push(a1);
 respond_to_stack_event();
 pop(a1);
 }
}
inline void stackcheck2(LispObject& a1, LispObject& a2)
{ if_check_stack();
 if ((reinterpret_cast<uintptr_t>(stack) | event_flag.load()) >=
 reinterpret_cast<uintptr_t>(stackLimit))
 { push(a1, a2);
 respond_to_stack_event();
 pop(a2, a1);
 }
}
inline void stackcheck3(LispObject& a1, LispObject& a2,
 LispObject& a3)
{ if_check_stack();
 if ((reinterpret_cast<uintptr_t>(stack) | event_flag.load()) >=
 reinterpret_cast<uintptr_t>(stackLimit))
 { push(a1, a2, a3);
 respond_to_stack_event();
 pop(a3, a2, a1);
 }
}
inline void stackcheck4(LispObject& a1, LispObject& a2,
 LispObject& a3, LispObject& a4)
{ if_check_stack();
 if ((reinterpret_cast<uintptr_t>(stack) | event_flag.load()) >=
 reinterpret_cast<uintptr_t>(stackLimit))
 { push(a1, a2, a3, a4);
 respond_to_stack_event();
 pop(a4, a3, a2, a1);
 }
}
inline void stackcheck()
{ if_check_stack();
 if ((reinterpret_cast<uintptr_t>(stack) | event_flag.load()) >=
 reinterpret_cast<uintptr_t>(stackLimit)) respond_to_stack_event();
}
inline void stackcheck(LispObject& a1)
{ if_check_stack();
 if ((reinterpret_cast<uintptr_t>(stack) | event_flag.load()) >=
 reinterpret_cast<uintptr_t>(stackLimit))
 { push(a1);
 respond_to_stack_event();
 pop(a1);
 }
}
inline void stackcheck(LispObject& a1, LispObject& a2)
{ if_check_stack();
 if ((reinterpret_cast<uintptr_t>(stack) | event_flag.load()) >=
 reinterpret_cast<uintptr_t>(stackLimit))
 { push(a1, a2);
 respond_to_stack_event();
 pop(a2, a1);
 }
}
inline void stackcheck(LispObject& a1, LispObject& a2, LispObject& a3)
{ if_check_stack();
 if ((reinterpret_cast<uintptr_t>(stack) | event_flag.load()) >=
 reinterpret_cast<uintptr_t>(stackLimit))
 { push(a1, a2, a3);
 respond_to_stack_event();
 pop(a3, a2, a1);
 }
}
inline void stackcheck(LispObject& a1, LispObject& a2,
 LispObject& a3, LispObject& a4)
{ if_check_stack();
 if ((reinterpret_cast<uintptr_t>(stack) | event_flag.load()) >=
 reinterpret_cast<uintptr_t>(stackLimit))
 { push(a1, a2, a3, a4);
 respond_to_stack_event();
 pop(a4, a3, a2, a1);
 }
}
inline void respond_to_fringe_event(LispObject &r, const char *msg)
{
#ifdef BOOTSTRAP
 if (msg == nullptr)
 {
#ifdef CONSERVATIVE
 reclaim("gc-forcer");
#else
 r = reclaim(r, "gc-forcer", GC_USER_HARD, 0);
#endif
 return;
 }
#endif 
 uintptr_t f = event_flag.load();
 while (!event_flag.compare_exchange_weak(f, 0)) {}
 if (f == 0)
 {
#ifdef CONSERVATIVE
 reclaim(msg);
#else
 r = reclaim(r, "gc-forcer", GC_USER_HARD, 0);
#endif
 return;
 }
}
class stack_popper
{ int n;
public:
 stack_popper(int nn)
 { n = nn;
 }
 ~stack_popper()
 { popv(n);
 }
};
class stack_restorer
{ LispObject *stackSave;
public:
 stack_restorer()
 { stackSave = stack;
 }
 ~stack_restorer()
 { stack = stackSave;
 }
};
class save_current_function
{ LispObject *savestack;
public:
 save_current_function(LispObject newfn)
 { real_push(current_function);
 savestack = stack;
 current_function = newfn;
 }
 ~save_current_function()
 { stack = savestack;
 real_pop(current_function);
 }
};
class bind_fluid_stack
{ LispObject *savestack;
 int env_loc;
 int name_loc;
 int val_loc;
public:
 bind_fluid_stack(int e, int name, int val)
 { savestack = stack;
 env_loc = e;
 name_loc = name;
 val_loc = val;
#ifdef TRACE_FLUID
 debug_printf("bind_fluid_stack(%d, %d, %d) @ %p\n", e, name, val,
 stack);
 debug_printf("name="); prin_to_debug(elt(savestack[e], name));
 debug_printf(" old-val=");
 prin_to_debug(qvalue(elt(savestack[e], name)));
 debug_printf("\n");
#endif
 savestack[val] = qvalue(elt(savestack[e], name));
 }
 ~bind_fluid_stack()
 {
#ifdef TRACE_FLUID
 debug_printf("restore(%d, %d, %d) @ %p\n", env_loc, name_loc, val_loc,
 savestack);
 debug_printf("name=");
 prin_to_debug(elt(savestack[env_loc], name_loc));
 debug_printf(" local-val=");
 prin_to_debug(qvalue(elt(savestack[env_loc], name_loc)));
 debug_printf(" restored-val="); prin_to_debug(savestack[val_loc]);
 debug_printf("\n");
#endif
 setvalue(elt(savestack[env_loc], name_loc), savestack[val_loc]);
 }
};
#ifndef LISPEXCEPTION_DEFINED
struct LispException : public std::exception
{ virtual const char *what() const throw()
 { return "Generic Lisp Exception";
 }
};
struct LispError : public LispException
{ virtual const char *what() const throw()
 { return "Lisp Error";
 }
};
struct LispSignal : public LispError
{ virtual const char *what() const throw()
 { return "Lisp Signal";
 }
};
#endif 
struct LispResource : public LispError
{ virtual const char *what() const throw()
 { return "Lisp Resouce Limiter";
 }
};
struct LispGo : public LispException
{ virtual const char *what() const throw()
 { return "Lisp Go";
 }
};
struct LispReturnFrom : public LispException
{ virtual const char *what() const throw()
 { return "Lisp ReturnFrom";
 }
};
struct LispThrow : public LispException
{ virtual const char *what() const throw()
 { return "Lisp Throw";
 }
};
struct LispRestart : public LispException
{ virtual const char *what() const throw()
 { return "Lisp Restart";
 }
};
class RAIIstack_sanity
{ LispObject *saveStack;
 const char *fname;
 const char *file;
 int line;
 LispObject w;
public:
 RAIIstack_sanity(const char *fn, const char *fi, int li)
 { saveStack = stack;
 fname = fn;
 file = fi;
 line = li;
 w = nil;
 }
 RAIIstack_sanity(const char *fn, const char *fi, int li,
 LispObject ww)
 { saveStack = stack;
 fname = fn;
 file = fi;
 line = li;
 w = ww;
 }
 ~RAIIstack_sanity()
 {
#ifdef __cpp_lib_uncaught_exceptions
 if (saveStack != stack && std::uncaught_exceptions() == 0)
#else
 if (saveStack != stack && !std::uncaught_exception())
#endif
 { err_printf("[Stack Consistency fails] %p => %p in %s : %s:%d\n",
 saveStack, stack, fname, file, line);
 err_printf("Data: ");
 prin_to_error(w);
 err_printf("\n");
 err_printf("exit_count = %d, exit_reason = %d\n",
 exit_count, exit_reason);
 my_abort();
 }
 }
};
inline const char *tidy_filename(const char *a)
{ const char *b = std::strrchr(a, '/');
 return (b == nullptr ? a : b+1);
}
#ifdef DEBUG
#define STACK_SANITY \
 RAIIstack_sanity stack_sanity_object(__func__, \
 tidy_filename(__FILE__), __LINE__);
#define STACK_SANITY1(w) \
 RAIIstack_sanity stack_sanity_object(__func__, \
 tidy_filename(__FILE__), __LINE__, w);
#else
#define STACK_SANITY ;
#define STACK_SANITY1(w) ;
#endif
class RAIIsave_codevec
{ LispObject *saveStack;
public:
 RAIIsave_codevec()
 { real_push(litvec, codevec);
 saveStack = stack;
 }
 ~RAIIsave_codevec()
 { stack = saveStack;
 real_pop(codevec, litvec);
 }
};
#define SAVE_CODEVEC RAIIsave_codevec save_codevec_object;
[[noreturn]] extern void global_longjmp();
#ifndef SAVE_STACK_AND_JB_DEFINED
class RAIIsave_stack_and_jb
{ LispObject *saveStack;
 std::jmp_buf *jbsave;
public:
 RAIIsave_stack_and_jb()
 { jbsave = global_jb; 
 saveStack = stack; 
 }
 ~RAIIsave_stack_and_jb()
 { global_jb = jbsave; 
 stack = saveStack; 
 }
};
#endif
class RAIIsave_stack
{ LispObject *saveStack;
public:
 RAIIsave_stack()
 { saveStack = stack; 
 }
 ~RAIIsave_stack()
 { stack = saveStack; 
 }
};
#define START_SETJMP_BLOCK \
 std::jmp_buf jb; \
 RAIIsave_stack_and_jb save_stack_Object; \
 switch (setjmp(jb)) \
 { default: \
 case 1: exit_reason = UNWIND_SIGNAL; \
 if (miscflags & HEADLINE_FLAG) \
 err_printf("\n+++ Error %s: ", errorset_msg); \
 throw LispSignal(); \
 case 0: break; \
 } \
 global_jb = &jb;
#define START_TRY_BLOCK \
 RAIIsave_stack save_stack_Object;
#define on_backtrace(a, b) \
 try \
 { START_TRY_BLOCK; \
 a; \
 } \
 catch (LispError &e) \
 { int _reason = exit_reason; \
 b; \
 exit_reason = _reason; \
 throw; \
 }
#define if_error(a, b) \
 try \
 { START_TRY_BLOCK; \
 a; \
 } \
 catch (LispError &e) \
 { b; \
 }
#define ignore_error(a) \
 try \
 { START_TRY_BLOCK; \
 a; \
 } \
 catch (LispError &e) \
 { \
 }
#define ignore_exception(a) \
 try \
 { START_SETJMP_BLOCK; \
 a; \
 } \
 catch (LispError &e) \
 { \
 }
#endif 
#ifdef CONSERVATIVE
#ifndef header_newallocate_h
#define header_newallocate_h 1
#include "log.h"
#include <csetjmp>
inline void testLayout();
using std::hex;
using std::dec;
static const size_t pageSize = 8*1024*1024; 
static const size_t targetChunkSize = 16*1024; 
enum PageClass
{ reservedPageTag = 0x00, 
 freePageTag = 0x01, 
 mostlyFreePageTag = 0x02, 
 
 busyPageTag = 0x03, 
};
extern void set_up_signal_handlers();
extern bool allocateSegment(size_t);
class Chunk
{
public:
 atomic<uintptr_t> length;
 atomic<uintptr_t> chunkFringe;
 atomic<bool> isPinned;
 atomic<Chunk *>chunkStack;
 atomic<Chunk *>pinChain;
 atomic<LispObject>usableSpace[];
 uintptr_t dataStart()
 { return reinterpret_cast<uintptr_t>(&usableSpace);
 }
 uintptr_t dataEnd()
 { return reinterpret_cast<uintptr_t>(this) + length;
 }
 bool pointsWithin(uintptr_t p)
 { return p >= dataStart() && p < chunkFringe;
 }
};
extern atomic<Chunk *> chunkStack;
inline bool pushChunk(Chunk *c)
{ Chunk *old = chunkStack.load();
 do
 { c->chunkStack.store(old);
 } while (!chunkStack.compare_exchange_weak(old, c));
 return (old == nullptr);
}
inline Chunk *popChunk()
{ Chunk *old = chunkStack.load();
 Chunk *c;
 do
 { if (old == nullptr) return nullptr;
 c = old->chunkStack.load();
 } while (!chunkStack.compare_exchange_weak(old, c));
 return old;
}
static const size_t chunksPerPage = 2*pageSize/targetChunkSize;
class alignas(pageSize) Page
{
public:
 atomic <Page *>chain;
 atomic<uintptr_t>fringe;
 atomic<uintptr_t>limit;
 atomic<PageClass> pageClass;
 atomic<bool> hasPinned;
 atomic<Page *> pinChain;
 atomic<Chunk *> pinnedChunks;
 bool chunkMapSorted;
 atomic<size_t> chunkCount;
 atomic<Chunk *> chunkMap[chunksPerPage];
 static const size_t pageWords = pageSize/sizeof(LispObject);
 static const size_t bpw = 8*sizeof(uintptr_t);
 static const size_t bitmapSize = (pageWords+bpw-1)/bpw;
 static const size_t bitmap1Size = (bitmapSize+bpw-1)/bpw;
 static const size_t bitmap2Size = (bitmap1Size+bpw-1)/bpw;
 atomic<uintptr_t> dirtyMap[bitmapSize];
 atomic<uintptr_t> dirtyMap1[bitmap1Size];
 atomic<uintptr_t> dirtyMap2[bitmap2Size];
 atomic<bool> hasDirty;
 atomic<Page *>dirtyChain;
 atomic<Page *>dirtyChainBack;
 alignas(64) atomic<LispObject> data[2]; 
};
extern Page *currentPage; 
extern Page *previousPage; 
 
extern Page *busyPages; 
extern Page *mostlyFreePages; 
extern Page *freePages; 
extern Page *oldPages; 
extern size_t busyPagesCount;
extern size_t mostlyFreePagesCount;
extern size_t freePagesCount;
extern size_t oldPagesCount;
extern atomic<Page *> dirtyPages;
extern Page *globalPinChain;
inline void write_barrier(LispObject *p, LispObject q)
{ *p = q;
 Page *pp;
 if (q == nil ||
 !is_pointer_type(q) ||
 ((pp = reinterpret_cast<Page *>(
 static_cast<uintptr_t>(q) & -pageSize)) != currentPage &&
 pp != previousPage &&
 pp->pageClass == busyPageTag))
 return;
 uintptr_t a = reinterpret_cast<uintptr_t>(p);
 Page *x = reinterpret_cast<Page *>(a & -pageSize);
 const size_t bpw = 8*sizeof(uintptr_t); 
 uintptr_t offset = (a & (pageSize-1))/sizeof(LispObject);
 uintptr_t bit = uptr_1 << (offset%bpw);
 size_t wordAddr = offset/bpw;
 if ((x->dirtyMap[wordAddr].fetch_or(bit) & bit) == 0)
 { bit = uptr_1 << (wordAddr%bpw);
 wordAddr /= bpw;
 if ((x->dirtyMap1[wordAddr].fetch_or(bit) & bit) == 0)
 { bit = uptr_1 << (wordAddr%bpw);
 wordAddr /= bpw;
 if ((x->dirtyMap2[wordAddr].fetch_or(bit) & bit) == 0)
 { x->hasDirty.store(true);
 for (;;)
 { Page *old = dirtyPages;
 x->dirtyChain.store(old);
 if (dirtyPages.compare_exchange_weak(old, x)) break;
 }
 }
 }
 }
}
inline void write_unBarrier(LispObject *p)
{ uintptr_t a = reinterpret_cast<uintptr_t>(p);
 Page *x = reinterpret_cast<Page *>(a & -pageSize);
 const size_t bpw = 8*sizeof(uintptr_t); 
 uintptr_t offset = (a & (pageSize-1))/sizeof(LispObject);
 uintptr_t bit = uptr_1 << (offset%bpw);
 size_t wordAddr = offset/bpw;
 if ((x->dirtyMap[wordAddr] &= ~bit) == 0)
 { bit = uptr_1 << (wordAddr%bpw);
 wordAddr /= bpw;
 if ((x->dirtyMap1[wordAddr] &= ~bit) == 0)
 { bit = uptr_1 << (wordAddr%bpw);
 wordAddr /= bpw;
 if ((x->dirtyMap2[wordAddr] &= ~bit) == 0)
 { x->hasDirty = false;
 Page *prev = x->dirtyChainBack;
 Page *next = x->dirtyChain;
 if (prev == nullptr) dirtyPages = next;
 else prev->dirtyChain = next;
 if (next != nullptr) next->dirtyChainBack = prev;
 }
 }
 }
}
inline void fillInBackChains()
{ Page *prev = nullptr;
 for (Page *p=dirtyPages; p!=nullptr; p=p->dirtyChain)
 { p->dirtyChainBack = prev;
 prev = p;
 }
}
inline void write_barrier(atomic<LispObject> *p, LispObject q)
{ write_barrier(reinterpret_cast<LispObject *>(p), q);
}
typedef void processDirtyCell(atomic<LispObject> *a);
extern int nlz(uint64_t a);
inline void scanDirtyCells(processDirtyCell fn)
{ for (Page *p=dirtyPages; p!=nullptr; p=p->dirtyChain.load())
 { if (!p->hasDirty) continue;
 for (size_t i2=0; i2<sizeof(p->dirtyMap2)/sizeof(p->dirtyMap2[0]);
 i2++)
 { uintptr_t b2 = p->dirtyMap2[i2];
 while (b2 != 0)
 { int n2 = nlz(static_cast<uint64_t>(b2));
 size_t i1 = 8*sizeof(uintptr_t)*i2 + 63 - n2;
 uintptr_t b1 = p->dirtyMap1[i1];
 while (b1 != 0)
 { int n1 = nlz(static_cast<uint64_t>(b1));
 size_t i0 = 8*sizeof(uintptr_t)*i1 + 63 - n1;
 uintptr_t b0 = p->dirtyMap[i0];
 while (b0 != 0)
 { int n0 = nlz(static_cast<uint64_t>(b0));
 size_t i = 8*sizeof(uintptr_t)*i0 + 63 - n0;
 (*fn)(reinterpret_cast<atomic<LispObject> *>(
 reinterpret_cast<uintptr_t>(p) + i*sizeof(LispObject)));
 b0 -= uptr_1<<(63-n0);
 }
 b1 -= uptr_1<<(63-n1);
 }
 b2 -= uptr_1<<(63-n2);
 }
 }
 }
}
inline void clearAllDirtyBits()
{ for (Page *p=dirtyPages; p!=nullptr; p=p->dirtyChain.load())
 { if (!p->hasDirty) continue;
 p->hasDirty = false;
 for (size_t i2=0; i2<sizeof(p->dirtyMap2)/sizeof(p->dirtyMap2[0]);
 i2++)
 { uintptr_t b2 = p->dirtyMap2[i2];
 if (b2 != 0) continue;
 { p->dirtyMap2[i2] = 0;
 while (b2 != 0)
 { int n2 = nlz(static_cast<uint64_t>(b2));
 size_t i1 = 8*sizeof(uintptr_t)*i2 + 63 - n2;
 uintptr_t b1 = p->dirtyMap1[i1];
 if (b1 != 0)
 { p->dirtyMap1[i1] = 0;
 while (b1 != 0)
 { int n1 = nlz(static_cast<uint64_t>(b1));
 size_t i0 = 8*sizeof(uintptr_t)*i1 + 63 - n1;
 p->dirtyMap[i0] = 0;
 b1 -= uptr_1<<(63-n1);
 }
 }
 b2 -= uptr_1<<(63-n2);
 }
 }
 }
 }
 dirtyPages = nullptr;
}
extern void processAmbiguousValue(bool major, uintptr_t a);
typedef void processPinnedChunk(Chunk *c);
extern void scanPinnedChunks(processPinnedChunk *pc);
extern void clearAllPins();
extern uint64_t threadMap;
class ThreadStartup
{
public:
 ThreadStartup();
 ~ThreadStartup();
};
extern void *heapSegment[16];
extern void *heapSegmentBase[16];
extern size_t heapSegmentSize[16];
extern size_t heapSegmentCount;
void initHeapSegments(double n);
inline int findSegment2(uintptr_t p, int n)
{ if (p < reinterpret_cast<uintptr_t>(heapSegment[n+1])) return n;
 else return n+1;
}
inline int findSegment4(uintptr_t p, int n)
{ if (p < reinterpret_cast<uintptr_t>(heapSegment[n+2]))
 return findSegment2(p, n);
 else return findSegment2(p, n+2);
}
inline int findSegment8(uintptr_t p, int n)
{ if (p < reinterpret_cast<uintptr_t>(heapSegment[n+4]))
 return findSegment4(p, n);
 else return findSegment4(p, n+4);
}
inline int findSegment16(uintptr_t p, int n)
{ if (p < reinterpret_cast<uintptr_t>(heapSegment[n+8]))
 return findSegment8(p, n);
 else return findSegment8(p, n+8);
}
inline int findHeapSegment(uintptr_t p)
{ int n = findSegment16(p, 0);
 if (p < reinterpret_cast<uintptr_t>(heapSegment[n]) ||
 p >= reinterpret_cast<uintptr_t>(heapSegment[n]) +
 heapSegmentSize[n]) return -1;
 return n;
}
inline Page *findPage(uintptr_t p)
{ int n = findHeapSegment(p);
 if (n < 0) return nullptr;
 return reinterpret_cast<Page *>(p & -pageSize);
}
inline bool inCurrentPage(uintptr_t p)
{ uintptr_t n = reinterpret_cast<uintptr_t>(currentPage);
 return (p >= n &&
 p < (n + pageSize));
}
inline bool inPreviousPage(uintptr_t p)
{ uintptr_t n = reinterpret_cast<uintptr_t>(previousPage);
 return (p >= n &&
 p < (n + pageSize));
}
#ifdef __GNUC__
inline int nlz(uint64_t x)
{ return __builtin_clzll(x); 
}
#else 
inline int nlz(uint64_t x)
{ int n = 0;
 if (x <= 0x00000000FFFFFFFFU)
 { n = n +32;
 x = x <<32;
 }
 if (x <= 0x0000FFFFFFFFFFFFU)
 { n = n +16;
 x = x <<16;
 }
 if (x <= 0x00FFFFFFFFFFFFFFU)
 { n = n + 8;
 x = x << 8;
 }
 if (x <= 0x0FFFFFFFFFFFFFFFU)
 { n = n + 4;
 x = x << 4;
 }
 if (x <= 0x3FFFFFFFFFFFFFFFU)
 { n = n + 2;
 x = x << 2;
 }
 if (x <= 0x7FFFFFFFFFFFFFFFU)
 { n = n + 1;
 }
 return n;
}
#endif 
#define NLZ_DEFINED 1
static const unsigned int maxThreads = 2; 
declare_thread_local(threadId, uintptr_t);
declare_thread_local(fringe, uintptr_t);
extern atomic<uintptr_t> limit[maxThreads];
extern Chunk* myChunkBase[maxThreads];
extern uintptr_t limitBis[maxThreads];
extern uintptr_t fringeBis[maxThreads];
extern size_t request[maxThreads];
extern LispObject result[maxThreads];
extern size_t gIncrement[maxThreads];
extern atomic<uintptr_t> gFringe;
extern uintptr_t gLimit;
enum GcStyle
{
 GcStyleNone,
 GcStyleMinor,
 GcStyleMajor
};
extern GcStyle userGcRequest;
extern bool withinMajorGarbageCollection;
extern uintptr_t difficult_n_bytes();
inline Header makeHeader(size_t n, int type) 
{ return TAG_HDR_IMMED + (n << (Tw+5)) + type;
}
inline void setHeaderWord(uintptr_t a, size_t n, int type=TYPE_PADDER)
{ reinterpret_cast<atomic<uintptr_t> *>(a)->store(makeHeader(n, type));
}
#ifdef DEBUG
namespace REAL
{
#endif 
inline LispObject get_n_bytes(size_t n)
{
 uintptr_t thr = threadId::get();
 uintptr_t r = fringe::get();
 uintptr_t w = limit[thr].load();
 fringe::set(fringe::get() + n);
 if (fringe::get() <= w) return static_cast<LispObject>(r);
 if (w != 0)
 {
 uintptr_t oldFringe = r;
 Chunk *newChunk =
 reinterpret_cast<Chunk *>(gFringe.fetch_add(targetChunkSize+n));
 r = newChunk->dataStart(); 
 fringe::set(r + n);
 uint64_t newLimit = reinterpret_cast<uintptr_t>(newChunk) + targetChunkSize+n;
 Page *p = reinterpret_cast<Page *>((oldFringe-1) & -pageSize);
 if (newLimit <= gLimit)
 {
 if (withinMajorGarbageCollection &&
 myChunkBase[thr] != nullptr) pushChunk(myChunkBase[thr]);
 myChunkBase[thr] = newChunk;
 newChunk->length.store(targetChunkSize+n);
 newChunk->isPinned.store(false);
 newChunk->pinChain.store(nullptr);
 size_t chunkNo = p->chunkCount.fetch_add(1);
 p->chunkMap[chunkNo].store(newChunk);
 limitBis[thr] = newLimit;
 bool ok = limit[thr].compare_exchange_strong(w, newLimit);
 if (ok) testLayout();
 if (ok) return static_cast<LispObject>(r);
 }
 gIncrement[thr] = targetChunkSize+n;
 fringe::set(oldFringe);
 }
 else
 {
 cout << "GC triggered\r\n";
 if (myChunkBase[thr] != nullptr) myChunkBase[thr]->chunkFringe = r;
 gIncrement[thr] = 0;
 fringe::set(r);
 }
 fringeBis[thr] = fringe::get();
 request[thr] = n;
 return static_cast<LispObject>(difficult_n_bytes());
}
#ifdef DEBUG
} 
inline size_t get_size[8];
inline LispObject get_value[8];
inline unsigned int get_count = 0;
inline unsigned int get_trace = 0x7fffffff; 
inline LispObject previousCons = 0;
inline LispObject get_n_bytes(size_t n)
{ if (++get_count >= get_trace) cout << "get_n_bytes " << n << "\r\n";
 LispObject r = REAL::get_n_bytes(n);
 if (get_count >= get_trace) cout << hex << r << dec << "\r\n";
 for (int i=0; i<8; i++)
 my_assert(r != get_value[i], []{ cout << "repeat result\r\n";});
 get_size[get_count & 7] = n;
 get_value[get_count & 7] = r;
 my_assert(r > previousCons, []{ cout << "non-increasing allocation\r\n"; });
 previousCons = r;
 return r;
}
extern void crudeprin(LispObject a);
extern void crudeprint(LispObject a);
inline void dump_gets()
{ cout << "get_count = " << get_count << "\r\n";
 for (int i=1; i<=8; i++)
 { LispObject v = get_value[(get_count+i)&7];
 cout << (8-i) << "... "
 << "size=" << get_size[(get_count+i)&7] << ": "
 << hex << v << dec << " ";
 if (is_cons(v))
 { crudeprin(car(v));
 cout << " . ";
 crudeprin(cdr(v));
 }
 cout << "\r\n";
 }
}
#else
inline void dump_gets()
{
}
#endif
inline void poll()
{ uintptr_t w;
 uintptr_t thr = threadId::get();
 if (fringe::get() > (w = limit[thr].load()))
 {
 fringeBis[thr] = fringe::get();
 request[thr] = 0;
 gIncrement[thr] = 0;
 static_cast<void>(difficult_n_bytes());
 }
}
extern std::jmp_buf *buffer_pointer;
extern uintptr_t stackBases[maxThreads];
extern uintptr_t stackFringes[maxThreads];
template <typename F>
#ifdef __GNUC__
[[gnu::noinline]]
#endif 
inline void may_block(F &&action)
{ std::jmp_buf buffer;
 buffer_pointer = &buffer;
 if (setjmp(buffer) == 0)
 { stackFringes[threadId::get()] = reinterpret_cast<uintptr_t>(buffer);
 action();
 std::longjmp(buffer, 1);
 }
};
template <typename F>
#ifdef __GNUC__
[[gnu::noinline]]
#endif 
inline void withRecordedStack(F &&action)
{ std::jmp_buf buffer;
 buffer_pointer = &buffer;
 if (setjmp(buffer) == 0)
 { stackFringes[threadId::get()] = reinterpret_cast<uintptr_t>(buffer);
 action();
 std::longjmp(buffer, 1);
 }
};
extern std::mutex mutexForGc;
extern std::mutex mutexForFreePages;
extern bool gc_started;
extern std::condition_variable cv_for_gc_idling;
extern std::condition_variable cv_for_gc_busy;
extern bool gc_complete;
extern std::condition_variable cv_for_gc_complete;
extern atomic<uint32_t> activeThreads;
extern bool generationalGarbageCollection;
extern void generationalGarbageCollect();
extern void fullGarbageCollect();
extern void setUpEmptyPage(Page *p);
extern void setVariablesFromPage(Page *p);
extern void saveVariablesToPage(Page *p);
inline void ensureOtherThreadsAreIdle()
{
 { std::lock_guard<std::mutex> guard(mutexForGc);
 gc_complete = false;
 gc_started = true;
 }
 cv_for_gc_idling.notify_all();
}
inline void restoreGfringe()
{ size_t inc = 0;
 for (unsigned int i=0; i<maxThreads; i++)
 { result[i] = nil;
 inc += gIncrement[i];
 gIncrement[i] = 0;
 }
 gFringe = gFringe.load() - inc;
}
inline void fitsWithinExistingGap(unsigned int i, size_t n, size_t gap)
{
 result[i] = fringeBis[i] + TAG_VECTOR;
 request[i] = 0;
 setHeaderWord(result[i]-TAG_VECTOR, n, TYPE_VEC32);
 fringeBis[i] += n;
 gap -= n;
 myChunkBase[i]->chunkFringe = fringeBis[i];
}
inline void ableToAllocateNewChunk(unsigned int i, size_t n, size_t gap)
{
 myChunkBase[i]->chunkFringe = fringeBis[i];
 Chunk *newChunk = reinterpret_cast<Chunk *>(gFringe.load());
 newChunk->length = n+targetChunkSize;
 newChunk->isPinned = false;
 newChunk->pinChain = nullptr;
 size_t chunkNo = currentPage->chunkCount.fetch_add(1);
 currentPage->chunkMap[chunkNo].store(newChunk);
 result[i] = newChunk->dataStart() + TAG_VECTOR;
 uintptr_t thr = threadId::get();
 if (withinMajorGarbageCollection &&
 myChunkBase[thr] != nullptr) pushChunk(myChunkBase[thr]);
 myChunkBase[thr] = newChunk;
 request[i] = 0;
 my_assert(findPage(result[i]) != nullptr); 
 setHeaderWord(result[i]-TAG_VECTOR, n, TYPE_VEC32);
 fringeBis[i] = newChunk->dataStart() + n;
 gFringe = limitBis[i] = limit[i] =
 fringeBis[i] + targetChunkSize;
}
inline void regionInPageIsFull(unsigned int i, size_t n,
 size_t gap, unsigned int &pendingCount)
{
 uintptr_t pageEnd = ((gFringe-1) & -pageSize) + pageSize;
 while (gLimit != pageEnd)
 { gFringe = gLimit + reinterpret_cast<Chunk *>(gLimit)->length;
 gLimit = reinterpret_cast<uintptr_t>(
 reinterpret_cast<Chunk *>(gLimit)->pinChain.load());
 if (gLimit == 0) gLimit = pageEnd;
 size_t gap1 = gLimit - gFringe;
 myChunkBase[i]->chunkFringe = fringeBis[i];
 if (n+targetChunkSize < gap1)
 { Chunk *c = reinterpret_cast<Chunk *>(gFringe.load());
 c->length = n + targetChunkSize;
 c->isPinned = false;
 size_t chunkNo = currentPage->chunkCount.fetch_add(1);
 currentPage->chunkMap[chunkNo].store(c);
 myChunkBase[i] = c;
 result[i] = gFringe.load() + TAG_VECTOR;
 request[i] = 0;
 setHeaderWord(result[i]-TAG_VECTOR, n, TYPE_VEC32);
 fringeBis[i] = gFringe.load() + n;
 gFringe = limitBis[i] = limit[i] = fringeBis[i] + targetChunkSize;
 break;
 }
 }
 if (request[i] != 0) pendingCount++;
}
inline void tryToSatisfyAtLeastOneThread(unsigned int &pendingCount)
{ for (unsigned int i=0; i<maxThreads; i++)
 { size_t n = request[i];
 if (n != 0)
 {
 uintptr_t f = fringeBis[i];
 uintptr_t l = limitBis[i];
 size_t gap = l - f;
 if (n <= gap) fitsWithinExistingGap(i, n, gap);
 else
 { size_t gap1 = gLimit - gFringe;
 if (n+targetChunkSize < gap1)
 ableToAllocateNewChunk(i, n, gap);
 else regionInPageIsFull(i, n, gap, pendingCount);
 }
 }
 }
}
inline void grabNewCurrentPage(bool preferMostlyFree)
{ if (preferMostlyFree && mostlyFreePages != nullptr)
 { currentPage = mostlyFreePages;
 mostlyFreePages = mostlyFreePages->chain;
 mostlyFreePagesCount--;
 }
 else if (freePages != nullptr)
 { currentPage = freePages;
 freePages = freePages->chain;
 freePagesCount--;
 }
 else
 { currentPage = mostlyFreePages;
 my_assert(currentPage != nullptr,
 [&]{ cout << "Utterly out of memory" << "\r" << endl;
 std::exit(99); });
 mostlyFreePages = mostlyFreePages->chain;
 mostlyFreePagesCount--;
 }
 currentPage->pageClass = busyPageTag;
 currentPage->chain = busyPages;
 busyPages = currentPage;
 busyPagesCount++;
 gFringe = currentPage->fringe.load();
 gLimit = currentPage->limit;
 for (unsigned int k=0; k<maxThreads; k++)
 limit[k] = fringeBis[k] = limitBis[k] = gFringe;
}
inline void newRegionNeeded()
{
 for (unsigned int i=0; i<maxThreads; i++)
 { if (myChunkBase[i] != nullptr)
 myChunkBase[i]->chunkFringe = fringeBis[i];
 }
 size_t gap = gLimit - gFringe;
 if (gap != 0) setHeaderWord(gFringe, gap);
 if ((!generationalGarbageCollection ||
 !garbage_collection_permitted ||
 previousPage == nullptr) &&
 userGcRequest != GcStyleMinor)
 { if ((busyPagesCount >= freePagesCount+mostlyFreePagesCount ||
 userGcRequest == GcStyleMajor) &&
 !withinMajorGarbageCollection)
 { cout << "@@ full GC needed\r\n";
 userGcRequest = GcStyleNone;
 fullGarbageCollect();
 }
 else
 {
 if (previousPage == nullptr) busyPages++;
 previousPage = currentPage;
 { std::lock_guard<std::mutex> guard(mutexForFreePages);
 grabNewCurrentPage(withinMajorGarbageCollection);
 }
 }
 }
 else
 { cout << "@@ minor GC needed\r\n";
 userGcRequest = GcStyleNone;
 generationalGarbageCollect();
 }
}
inline void releaseOtherThreads()
{
 { std::unique_lock<std::mutex> lock(mutexForGc);
 cv_for_gc_busy.wait(lock,
 []{ uint32_t n = activeThreads.load();
 return (n & 0xff) == ((n>>8) & 0xff) - 1;
 });
 }
 { std::lock_guard<std::mutex> guard(mutexForGc);
 gc_started = false;
 activeThreads.fetch_add(0x0000001);
 gc_complete = true;
 }
 cv_for_gc_complete.notify_all();
}
inline void garbageCollectOnBehalfOfAll()
{ ensureOtherThreadsAreIdle();
 restoreGfringe();
 for (;;)
 { unsigned int pendingCount = 0;
 tryToSatisfyAtLeastOneThread(pendingCount);
 if (pendingCount == 0 &&
 userGcRequest == GcStyleNone) break;
 newRegionNeeded();
 }
 releaseOtherThreads();
}
extern void gcHelper();
inline void waitWhileAnotherThreadGarbageCollects()
{
 { std::unique_lock<std::mutex> lock(mutexForGc);
 cv_for_gc_idling.wait(lock, [] { return gc_started; });
 }
 bool inform = false;
 { std::lock_guard<std::mutex> guard(mutexForGc);
 uint32_t n = activeThreads.fetch_add(0x000001);
 if ((n & 0xff) == ((n>>8) & 0xff) - 2) inform = true;
 }
 if (inform) cv_for_gc_busy.notify_one();
 gcHelper();
 { std::unique_lock<std::mutex> lock(mutexForGc);
 cv_for_gc_complete.wait(lock, [] { return gc_complete; });
 }
 fringe::set(fringeBis[threadId::get()]);
}
inline uintptr_t difficult_n_bytes()
{
 for (unsigned int i=0; i<maxThreads; i++) limit[i].store(0);
 withRecordedStack([&]
 {
 int32_t a = activeThreads.fetch_sub(0x000001);
 if ((a & 0xff) > 1) waitWhileAnotherThreadGarbageCollects();
 else garbageCollectOnBehalfOfAll();
 });
 fringe::set(fringeBis[threadId::get()]);
 testLayout();
 return result[threadId::get()] - TAG_VECTOR;
}
extern LispObject Lgctest_0(LispObject);
extern LispObject Lgctest_1(LispObject, LispObject);
extern LispObject Lgctest_2(LispObject, LispObject, LispObject);
inline LispObject cons(LispObject a, LispObject b)
{ LispObject r = get_n_bytes(2*sizeof(LispObject)) + TAG_CONS;
 setcar(r, a);
 setcdr(r, b);
 return r;
}
inline LispObject cons_no_gc(LispObject a, LispObject b)
{ return cons(a, b);
}
inline LispObject cons_gc_test(LispObject p)
{ return p;
}
inline LispObject ncons(LispObject a)
{ LispObject r = get_n_bytes(2*sizeof(LispObject)) + TAG_CONS;
 setcar(r, a);
 setcdr(r, nil);
 return r;
}
inline LispObject list2(LispObject a, LispObject b)
{ LispObject r1 = get_n_bytes(4*sizeof(LispObject)) + TAG_CONS;
 LispObject r2 = r1 + 2*sizeof(LispObject);
 setcar(r1, a);
 setcar(r2, b);
 setcdr(r1, r2);
 setcdr(r2, nil);
 return r1;
}
inline LispObject list2star(LispObject a, LispObject b, LispObject c)
{ LispObject r1 = get_n_bytes(4*sizeof(LispObject)) + TAG_CONS;
 LispObject r2 = r1 + 2*sizeof(LispObject);
 setcar(r1, a);
 setcar(r2, b);
 setcdr(r1, r2);
 setcdr(r2, c);
 return r1;
}
inline LispObject list2starrev(LispObject c, LispObject b,
 LispObject a)
{ LispObject r1 = get_n_bytes(4*sizeof(LispObject)) + TAG_CONS;
 LispObject r2 = r1 + 2*sizeof(LispObject);
 setcar(r1, a);
 setcar(r2, b);
 setcdr(r1, r2);
 setcdr(r2, c);
 return r1;
}
inline LispObject list3star(LispObject a, LispObject b, LispObject c,
 LispObject d)
{ LispObject r1 = get_n_bytes(6*sizeof(LispObject)) + TAG_CONS;
 LispObject r2 = r1 + 2*sizeof(LispObject);
 LispObject r3 = r1 + 4*sizeof(LispObject);
 setcar(r1, a);
 setcar(r2, b);
 setcar(r3, c);
 setcdr(r1, r2);
 setcdr(r2, r3);
 setcdr(r3, d);
 return r1;
}
inline LispObject list4(LispObject a, LispObject b, LispObject c,
 LispObject d)
{ LispObject r1 = get_n_bytes(8*sizeof(LispObject)) + TAG_CONS;
 LispObject r2 = r1 + 2*sizeof(LispObject);
 LispObject r3 = r1 + 4*sizeof(LispObject);
 LispObject r4 = r1 + 6*sizeof(LispObject);
 setcar(r1, a);
 setcar(r2, b);
 setcar(r3, c);
 setcar(r4, d);
 setcdr(r1, r2);
 setcdr(r2, r3);
 setcdr(r3, r4);
 setcdr(r4, nil);
 return r1;
}
inline LispObject acons(LispObject a, LispObject b, LispObject c)
{ LispObject r1 = get_n_bytes(4*sizeof(LispObject)) + TAG_CONS;
 LispObject r2 = r1 + 2*sizeof(LispObject);
 setcar(r1, r2);
 setcar(r2, a);
 setcdr(r1, c);
 setcdr(r2, b);
 return r1;
}
inline LispObject acons_no_gc(LispObject a, LispObject b,
 LispObject c)
{ return acons(a, b, c);
}
inline LispObject list3(LispObject a, LispObject b, LispObject c)
{ LispObject r1 = get_n_bytes(6*sizeof(LispObject)) + TAG_CONS;
 LispObject r2 = r1 + 2*sizeof(LispObject);
 LispObject r3 = r1 + 4*sizeof(LispObject);
 setcar(r1, a);
 setcar(r2, b);
 setcar(r3, c);
 setcdr(r1, r2);
 setcdr(r2, r3);
 setcdr(r3, nil);
 return r1;
}
inline LispObject list3rev(LispObject c, LispObject b, LispObject a)
{ LispObject r1 = get_n_bytes(6*sizeof(LispObject)) + TAG_CONS;
 LispObject r2 = r1 + 2*sizeof(LispObject);
 LispObject r3 = r1 + 4*sizeof(LispObject);
 setcar(r1, a);
 setcar(r2, b);
 setcar(r3, c);
 setcdr(r1, r2);
 setcdr(r2, r3);
 setcdr(r3, nil);
 return r1;
}
inline LispObject Lcons(LispObject, LispObject a, LispObject b)
{ LispObject r1 = get_n_bytes(2*sizeof(LispObject)) + TAG_CONS;
 setcar(r1, a);
 setcdr(r1, b);
 return onevalue(r1);
}
inline LispObject Lxcons(LispObject, LispObject a, LispObject b)
{ LispObject r1 = get_n_bytes(2*sizeof(LispObject)) + TAG_CONS;
 setcar(r1, b);
 setcdr(r1, a);
 return onevalue(r1);
}
inline LispObject Lnilfn(LispObject)
{ return onevalue(nil);
}
inline LispObject Lncons(LispObject env, LispObject a)
{ LispObject r1 = get_n_bytes(2*sizeof(LispObject)) + TAG_CONS;
 setcar(r1, a);
 setcdr(r1, nil);
 return onevalue(r1);
}
extern void garbageCollect();
void allocate_segment(size_t n);
extern void clearPinnedMap(Page *x);
extern uint64_t threadBit(unsigned int n);
extern bool isPinned(Page *x, uintptr_t p); 
extern void setPinned(Page *x,
 uintptr_t p); 
extern void setPinnedMajor(uintptr_t p); 
extern void setPinnedMinor(uintptr_t p); 
declare_thread_local(borrowPages, Page *);
declare_thread_local(borrowFringe, uintptr_t);
declare_thread_local(borrowLimit, uintptr_t);
declare_thread_local(borrowNext, uintptr_t);
class Borrowing
{
public:
 Borrowing()
 { borrowPages::set(nullptr);
 borrowFringe::set(0);
 borrowLimit::set(0);
 borrowNext::set(0);
 }
 ~Borrowing()
 { std::lock_guard<std::mutex> lock(mutexForFreePages);
 while (borrowPages::get() != nullptr)
 { if (borrowPages::get()->pageClass.load() == mostlyFreePageTag)
 { Page *w = borrowPages::get()->chain;
 borrowPages::get()->chain = mostlyFreePages;
 mostlyFreePages = borrowPages::get();
 borrowPages::set(w);
 }
 else
 { Page *w = borrowPages::get()->chain;
 borrowPages::get()->chain = freePages;
 freePages = borrowPages::get();
 borrowPages::set(w);
 }
 }
 }
};
inline void testLayout()
{
 uintptr_t r = fringe::get();
 uintptr_t w = limit[threadId::get()].load();
 my_assert(w==0 || r <= w, [] { cout << "fringe > limit\r\n"; });
 my_assert(w <= gFringe.load(), [] {cout << "limit > gFringe\r\n";});
 my_assert(gFringe.load() <= gLimit, [] {cout << "gFringe > gLimit\r\n";});
}
#endif 
#else // CONSERVATIVE
#ifndef header_allocate_h
#define header_allocate_h 1
#if defined THREAD_LOCAL
inline thread_local uintptr_t fringe;
inline thread_local uintptr_t heaplimit;
inline thread_local uintptr_t vfringe;
inline thread_local uintptr_t vheaplimit;
#elif defined WINDOWS_THREADS && defined WIN32
const inline int fringe_slot = TlsAlloc();
const inline int heaplimit_slot = TlsAlloc();
const inline int vfringe_slot = TlsAlloc();
const inline int vheaplimit_slot = TlsAlloc();
inline thread_local atomic<uintptr_t> real_heaplimit;
inline thread_local atomic<uintptr_t> real_vheaplimit;
class ForFringe
{
public:
 operator uintptr_t()
 { return reinterpret_cast<uintptr_t>(TlsGetValue(fringe_slot));
 };
 ForFringe& operator= (const uintptr_t a)
 { TlsSetValue(fringe_slot, reinterpret_cast<void *>(a));
 return *this;
 };
 ForFringe& operator+= (const size_t a)
 { uintptr_t v = reinterpret_cast<uintptr_t>(TlsGetValue(
 fringe_slot)) + a;
 TlsSetValue(fringe_slot, reinterpret_cast<void *>(v));
 return *this;
 };
};
inline ForFringe fringe;
class ForHeapLimit
{
public:
 operator uintptr_t()
 { return *(atomic<uintptr_t> *)TlsGetValue(heaplimit_slot);
 };
 ForHeapLimit& operator= (const uintptr_t a)
 { TlsSetValue(heaplimit_slot, reinterpret_cast<void *>(a));
 return *this;
 };
 ForHeapLimit()
 { TlsSetValue(heaplimit_slot,
 reinterpret_cast<void *>()&real_heaplimit);
 };
};
inline ForHeapLimit heaplimit;
class ForVFringe
{
public:
 operator uintptr_t()
 { return reinterpret_cast<uintptr_t>(TlsGetValue(vfringe_slot));
 };
 ForVFringe& operator= (const uintptr_t a)
 { TlsSetValue(vfringe_slot, reinterpret_cast<void *>(a));
 return *this;
 };
 ForVFringe& operator+= (const size_t a)
 { uintptr_t v = reinterpret_cast<uintptr_t>(TlsGetValue(
 vfringe_slot)) + a;
 TlsSetValue(vfringe_slot, reinterpret_cast<void *>(v));
 return *this;
 };
};
inline ForVFringe vfringe;
class ForVHeapLimit
{
public:
 operator uintptr_t()
 { return *(atomic<uintptr_t> *)TlsGetValue(vheaplimit_slot);
 };
 ForVHeapLimit& operator= (const uintptr_t a)
 { TlsSetValue(vheaplimit_slot, reinterpret_cast<void *>(a));
 return *this;
 };
 ForVHeapLimit()
 { TlsSetValue(vheaplimit_slot,
 reinterpret_cast<void *>()&real_heaplimit);
 };
};
inline ForVHeapLimit vheaplimit;
#elif defined ATOMIC
inline atomic<uintptr_t> fringe;
inline atomic<uintptr_t> heaplimit;
inline atomic<uintptr_t> vfringe;
inline atomic<uintptr_t> vheaplimit;
#else
extern uintptr_t fringe;
extern uintptr_t heaplimit;
extern uintptr_t vfringe;
extern uintptr_t vheaplimit;
#endif
#define MIN_PAGE_SIZE 0x01000
#define MAX_PAGE_SIZE 0x10000
extern void get_page_size();
extern size_t page_size;
extern void set_up_signal_handlers();
extern void *allocate_segment(size_t);
extern size_t heap_segment_count;
extern void *heap_segment[32];
extern size_t heap_segment_size[32];
extern uint64_t *heap_dirty_pages_bitmap_1[32];
extern uint64_t *heap_dirty_pages_bitmap_2[32];
extern size_t free_pages_count, active_pages_count;
#define SMALL_BITMAP_SIZE (MAX_PAGE_SIZE/sizeof(uint64_t)/2)
extern uint64_t heap_small_bitmaps_1[SMALL_BITMAP_SIZE+1];
extern uint64_t *heap_small_bitmaps_1_ptr;
extern uint64_t heap_small_bitmaps_2[SMALL_BITMAP_SIZE+1];
extern uint64_t *heap_small_bitmaps_2_ptr;
int find_heap_segment(uintptr_t p);
extern bool clear_bitmap(size_t h);
extern bool refresh_bitmap(size_t h);
extern void garbage_collect();
extern size_t borrowed_pages_count;
extern void get_borrowed_page();
class Borrowing
{
public:
 Borrowing()
 { borrowed_pages_count = pages_count;
 get_borrowed_page();
 }
};
#endif 
#endif // CONSERVATIVE


// Code for lex_restore_context

static LispObject CC_lex_restore_context(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_65, v_66, v_67;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 7); // lex_cleanup
    v_65 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    v_65 = stack[0];
    stack[0] = v_65;
v_13:
    v_65 = stack[0];
    if (v_65 == nil) goto v_17;
    else goto v_18;
v_17:
    goto v_12;
v_18:
    v_65 = stack[0];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    v_66 = v_65;
    v_65 = v_66;
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    stack[-2] = v_65;
    v_65 = v_66;
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    stack[-1] = v_65;
    v_65 = v_66;
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    v_65 = Lintern(nil, v_65);
    env = stack[-4];
    stack[-3] = v_65;
    v_66 = stack[-3];
    v_65 = basic_elt(env, 1); // lex_fixed_code
    v_65 = get(v_66, v_65);
    env = stack[-4];
    if (v_65 == nil) goto v_35;
    else goto v_36;
v_35:
    v_66 = stack[-1];
    v_65 = qvalue(basic_elt(env, 2)); // lex_next_code
    v_65 = static_cast<LispObject>(greaterp2(v_66, v_65));
    v_65 = v_65 ? lisp_true : nil;
    env = stack[-4];
    if (v_65 == nil) goto v_43;
    v_65 = stack[-1];
    setvalue(basic_elt(env, 2), v_65); // lex_next_code
    goto v_41;
v_43:
v_41:
    v_67 = stack[-3];
    v_66 = basic_elt(env, 3); // lex_dipthong
    v_65 = stack[-2];
    v_65 = Lputprop(nil, v_67, v_66, v_65);
    env = stack[-4];
    v_67 = stack[-3];
    v_66 = basic_elt(env, 4); // lex_code
    v_65 = stack[-1];
    v_65 = Lputprop(nil, v_67, v_66, v_65);
    env = stack[-4];
    v_67 = stack[-1];
    v_66 = stack[-3];
    v_65 = qvalue(basic_elt(env, 5)); // lex_codename
    v_65 = acons(v_67, v_66, v_65);
    env = stack[-4];
    setvalue(basic_elt(env, 5), v_65); // lex_codename
    v_66 = stack[-3];
    v_65 = qvalue(basic_elt(env, 6)); // lex_keyword_names
    v_65 = cons(v_66, v_65);
    env = stack[-4];
    setvalue(basic_elt(env, 6), v_65); // lex_keyword_names
    goto v_34;
v_36:
v_34:
    v_65 = stack[0];
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    stack[0] = v_65;
    goto v_13;
v_12:
    v_65 = nil;
    return onevalue(v_65);
}



// Code for outdefr

static LispObject CC_outdefr(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_17, v_18, v_19;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    v_18 = v_3;
    v_19 = v_2;
// end of prologue
    v_17 = v_19;
    if (!car_legal(v_17)) stack[-2] = carerror(v_17); else
    stack[-2] = car(v_17);
    v_17 = v_19;
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    if (!car_legal(v_17)) stack[-1] = carerror(v_17); else
    stack[-1] = car(v_17);
    v_17 = v_19;
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    if (!car_legal(v_17)) stack[0] = carerror(v_17); else
    stack[0] = car(v_17);
    v_17 = v_18;
    v_17 = ncons(v_17);
    env = stack[-3];
    {
        LispObject v_23 = stack[-2];
        LispObject v_24 = stack[-1];
        LispObject v_25 = stack[0];
        LispObject fn = basic_elt(env, 1); // outref
        return (*qfn4up(fn))(fn, v_23, v_24, v_25, v_17);
    }
}



// Code for processpartitie1

static LispObject CC_processpartitie1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_77, v_78, v_79, v_80;
    LispObject v_5, v_6;
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_5 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_6 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ != nil)
        aerror1("too many arguments provided", basic_elt(env, 0));
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3,v_4,v_5,v_6);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_6,v_5,v_4,v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-1] = v_6;
    stack[-2] = v_5;
    v_79 = v_4;
    v_80 = v_3;
    stack[-3] = v_2;
// end of prologue
v_10:
    v_77 = stack[-3];
    if (v_77 == nil) goto v_13;
    else goto v_14;
v_13:
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    if (v_77 == nil) goto v_18;
    else goto v_19;
v_18:
    v_79 = basic_elt(env, 1); // times
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_78 = cdrerror(v_77); else
    v_78 = cdr(v_77);
    v_77 = stack[-1];
    return acons(v_79, v_78, v_77);
v_19:
    stack[-3] = basic_elt(env, 1); // times
    stack[0] = basic_elt(env, 2); // ext
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    {   LispObject fn = basic_elt(env, 4); // ordn
    v_77 = (*qfn1(fn))(fn, v_77);
    }
    env = stack[-5];
    v_78 = Lreverse(nil, v_77);
    env = stack[-5];
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    v_78 = acons(stack[0], v_78, v_77);
    v_77 = stack[-1];
    {
        LispObject v_86 = stack[-3];
        return acons(v_86, v_78, v_77);
    }
    goto v_12;
v_14:
    v_77 = stack[-3];
    if (!car_legal(v_77)) v_78 = carerror(v_77); else
    v_78 = car(v_77);
    v_77 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_78 == v_77) goto v_40;
    else goto v_41;
v_40:
    v_77 = stack[-3];
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    stack[-3] = v_77;
    goto v_10;
v_41:
    v_77 = stack[-3];
    if (!car_legal(v_77)) v_78 = carerror(v_77); else
    v_78 = car(v_77);
    v_77 = v_80;
    if (equal(v_78, v_77)) goto v_47;
    else goto v_48;
v_47:
    stack[-4] = v_80;
    stack[0] = v_79;
    v_77 = stack[-3];
    if (!car_legal(v_77)) stack[-3] = cdrerror(v_77); else
    stack[-3] = cdr(v_77);
    v_78 = stack[-2];
    v_77 = stack[-1];
    v_77 = list2(v_78, v_77);
    env = stack[-5];
    {
        LispObject v_87 = stack[-4];
        LispObject v_88 = stack[0];
        LispObject v_89 = stack[-3];
        LispObject fn = basic_elt(env, 5); // processcarpartitie1
        return (*qfn4up(fn))(fn, v_87, v_88, v_89, v_77);
    }
v_48:
    v_77 = stack[-3];
    if (!car_legal(v_77)) stack[-4] = carerror(v_77); else
    stack[-4] = car(v_77);
    v_77 = qvalue(basic_elt(env, 3)); // all_graded_der
    {   LispObject fn = basic_elt(env, 6); // aeval
    v_77 = (*qfn1(fn))(fn, v_77);
    }
    env = stack[-5];
    if (!car_legal(v_77)) v_78 = cdrerror(v_77); else
    v_78 = cdr(v_77);
    v_77 = stack[-3];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    {   LispObject fn = basic_elt(env, 7); // nth
    v_77 = (*qfn2(fn))(fn, v_78, v_77);
    }
    env = stack[-5];
    if (!car_legal(v_77)) stack[0] = cdrerror(v_77); else
    stack[0] = cdr(v_77);
    v_77 = stack[-3];
    if (!car_legal(v_77)) stack[-3] = cdrerror(v_77); else
    stack[-3] = cdr(v_77);
    v_78 = stack[-2];
    v_77 = stack[-1];
    v_77 = list2(v_78, v_77);
    env = stack[-5];
    {
        LispObject v_90 = stack[-4];
        LispObject v_91 = stack[0];
        LispObject v_92 = stack[-3];
        LispObject fn = basic_elt(env, 5); // processcarpartitie1
        return (*qfn4up(fn))(fn, v_90, v_91, v_92, v_77);
    }
v_12:
    v_77 = nil;
    return onevalue(v_77);
}



// Code for remove!-free!-vars!*

static LispObject CC_removeKfreeKvarsH(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_10, v_11;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_11 = v_2;
// end of prologue
    v_10 = lisp_true;
// Binding !*!*noremove!*!*
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), v_10); // !*!*noremove!*!*
    v_10 = v_11;
    {   LispObject fn = basic_elt(env, 2); // remove!-free!-vars
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    ;}  // end of a binding scope
    return onevalue(v_10);
}



// Code for degree!-in!-variable

static LispObject CC_degreeKinKvariable(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_52, v_53;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_52 = stack[-1];
    if (!consp(v_52)) goto v_11;
    else goto v_12;
v_11:
    v_52 = lisp_true;
    goto v_10;
v_12:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    v_52 = (consp(v_52) ? nil : lisp_true);
    goto v_10;
    v_52 = nil;
v_10:
    if (v_52 == nil) goto v_8;
    v_52 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
v_8:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_53 = cdrerror(v_52); else
    v_53 = cdr(v_52);
    v_52 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_53 == v_52) goto v_21;
    else goto v_22;
v_21:
    v_52 = basic_elt(env, 1); // "Polynomial with a zero coefficient found"
    {
        LispObject fn = basic_elt(env, 2); // errorf
        return (*qfn1(fn))(fn, v_52);
    }
v_22:
    v_53 = stack[0];
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (equal(v_53, v_52)) goto v_29;
    else goto v_30;
v_29:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    goto v_6;
v_30:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_53 = cdrerror(v_52); else
    v_53 = cdr(v_52);
    v_52 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // degree!-in!-variable
    stack[-2] = (*qfn2(fn))(fn, v_53, v_52);
    }
    env = stack[-3];
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_53 = cdrerror(v_52); else
    v_53 = cdr(v_52);
    v_52 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // degree!-in!-variable
    v_52 = (*qfn2(fn))(fn, v_53, v_52);
    }
    env = stack[-3];
    {
        LispObject v_57 = stack[-2];
        LispObject fn = basic_elt(env, 3); // max
        return (*qfn2(fn))(fn, v_57, v_52);
    }
    v_52 = nil;
v_6:
    return onevalue(v_52);
}



// Code for constsml

static LispObject CC_constsml(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_81, v_82;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_81 = stack[0];
    if (is_number(v_81)) goto v_8;
    else goto v_9;
v_8:
    v_81 = basic_elt(env, 1); // "<cn"
    {   LispObject fn = basic_elt(env, 12); // printout
    v_81 = (*qfn1(fn))(fn, v_81);
    }
    env = stack[-1];
    v_81 = stack[0];
    v_81 = Lfloatp(nil, v_81);
    env = stack[-1];
    if (v_81 == nil) goto v_16;
    v_81 = basic_elt(env, 2); // " type=""real""> "
    v_81 = Lprinc(nil, v_81);
    env = stack[-1];
    goto v_14;
v_16:
    v_81 = stack[0];
    v_81 = integerp(v_81);
    if (v_81 == nil) goto v_22;
    v_81 = basic_elt(env, 3); // " type=""integer""> "
    v_81 = Lprinc(nil, v_81);
    env = stack[-1];
    goto v_14;
v_22:
    v_81 = basic_elt(env, 4); // "> "
    v_81 = Lprinc(nil, v_81);
    env = stack[-1];
    goto v_14;
v_14:
    v_81 = stack[0];
    v_81 = Lprinc(nil, v_81);
    env = stack[-1];
    v_81 = basic_elt(env, 5); // " </cn>"
    v_81 = Lprinc(nil, v_81);
    env = stack[-1];
    goto v_7;
v_9:
v_7:
    v_81 = stack[0];
    if (symbolp(v_81)) goto v_37;
    else goto v_38;
v_37:
    v_81 = stack[0];
    v_82 = Lintern(nil, v_81);
    env = stack[-1];
    v_81 = qvalue(basic_elt(env, 6)); // constants!*
    v_81 = Lmember(nil, v_82, v_81);
    if (v_81 == nil) goto v_43;
    v_81 = basic_elt(env, 7); // "<cn type=""constant""> "
    {   LispObject fn = basic_elt(env, 12); // printout
    v_81 = (*qfn1(fn))(fn, v_81);
    }
    env = stack[-1];
    v_81 = stack[0];
    v_81 = Lprinc(nil, v_81);
    env = stack[-1];
    v_81 = basic_elt(env, 5); // " </cn>"
    v_81 = Lprinc(nil, v_81);
    goto v_41;
v_43:
    v_81 = basic_elt(env, 8); // "<ci"
    {   LispObject fn = basic_elt(env, 12); // printout
    v_81 = (*qfn1(fn))(fn, v_81);
    }
    env = stack[-1];
    v_81 = stack[0];
    {   LispObject fn = basic_elt(env, 13); // listp
    v_81 = (*qfn1(fn))(fn, v_81);
    }
    env = stack[-1];
    if (v_81 == nil) goto v_61;
    v_81 = basic_elt(env, 9); // " type=""list""> "
    v_81 = Lprinc(nil, v_81);
    env = stack[-1];
    goto v_59;
v_61:
    v_81 = stack[0];
    v_81 = Lsimple_vectorp(nil, v_81);
    env = stack[-1];
    if (v_81 == nil) goto v_67;
    v_81 = basic_elt(env, 10); // " type=""vector""> "
    v_81 = Lprinc(nil, v_81);
    env = stack[-1];
    goto v_59;
v_67:
    v_81 = basic_elt(env, 4); // "> "
    v_81 = Lprinc(nil, v_81);
    env = stack[-1];
    goto v_59;
v_59:
    v_81 = stack[0];
    v_81 = Lprinc(nil, v_81);
    env = stack[-1];
    v_81 = basic_elt(env, 11); // " </ci>"
    v_81 = Lprinc(nil, v_81);
    goto v_41;
v_41:
    goto v_36;
v_38:
v_36:
    v_81 = nil;
    return onevalue(v_81);
}



// Code for ldt!-tvar

static LispObject CC_ldtKtvar(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_21, v_22, v_23;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_21 = v_2;
// end of prologue
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    v_22 = v_21;
    v_21 = v_22;
    v_23 = basic_elt(env, 1); // df
    if (!consp(v_21)) goto v_11;
    v_21 = car(v_21);
    if (v_21 == v_23) goto v_10;
    else goto v_11;
v_10:
    v_21 = v_22;
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    goto v_9;
v_11:
    v_21 = v_22;
    goto v_9;
    v_21 = nil;
v_9:
    return onevalue(v_21);
}



// Code for maprin

static LispObject CC_maprin(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_19, v_20, v_21;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_20 = v_2;
// end of prologue
    v_19 = qvalue(basic_elt(env, 1)); // outputhandler!*
    if (v_19 == nil) goto v_7;
    v_19 = qvalue(basic_elt(env, 1)); // outputhandler!*
    v_21 = basic_elt(env, 0); // maprin
        return Lapply2(nil, v_19, v_21, v_20);
v_7:
    v_19 = qvalue(basic_elt(env, 2)); // overflowed!*
    if (v_19 == nil) goto v_13;
    else goto v_14;
v_13:
    v_19 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {
        LispObject fn = basic_elt(env, 3); // maprint
        return (*qfn2(fn))(fn, v_20, v_19);
    }
v_14:
    v_19 = nil;
    return onevalue(v_19);
}



// Code for findnewvars

static LispObject CC_findnewvars(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_67;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_67 = stack[0];
    if (!consp(v_67)) goto v_6;
    else goto v_7;
v_6:
    v_67 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // genp
    v_67 = (*qfn1(fn))(fn, v_67);
    }
    if (v_67 == nil) goto v_12;
    v_67 = stack[0];
    return ncons(v_67);
v_12:
    v_67 = nil;
    goto v_10;
    v_67 = nil;
v_10:
    goto v_5;
v_7:
    v_67 = stack[0];
    stack[-3] = v_67;
v_27:
    v_67 = stack[-3];
    if (v_67 == nil) goto v_32;
    else goto v_33;
v_32:
    v_67 = nil;
    goto v_26;
v_33:
    v_67 = stack[-3];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    {   LispObject fn = basic_elt(env, 0); // findnewvars
    v_67 = (*qfn1(fn))(fn, v_67);
    }
    env = stack[-4];
    stack[-2] = v_67;
    v_67 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // lastpair
    v_67 = (*qfn1(fn))(fn, v_67);
    }
    env = stack[-4];
    stack[-1] = v_67;
    v_67 = stack[-3];
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    stack[-3] = v_67;
    v_67 = stack[-1];
    if (!consp(v_67)) goto v_47;
    else goto v_48;
v_47:
    goto v_27;
v_48:
v_28:
    v_67 = stack[-3];
    if (v_67 == nil) goto v_52;
    else goto v_53;
v_52:
    v_67 = stack[-2];
    goto v_26;
v_53:
    stack[0] = stack[-1];
    v_67 = stack[-3];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    {   LispObject fn = basic_elt(env, 0); // findnewvars
    v_67 = (*qfn1(fn))(fn, v_67);
    }
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_67);
    v_67 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // lastpair
    v_67 = (*qfn1(fn))(fn, v_67);
    }
    env = stack[-4];
    stack[-1] = v_67;
    v_67 = stack[-3];
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    stack[-3] = v_67;
    goto v_28;
v_26:
    goto v_5;
    v_67 = nil;
v_5:
    return onevalue(v_67);
}



// Code for xord_gradlex

static LispObject CC_xord_gradlex(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_35, v_36;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_35 = stack[-1];
    if (!car_legal(v_35)) v_36 = carerror(v_35); else
    v_36 = car(v_35);
    v_35 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_36 == v_35) goto v_7;
    else goto v_8;
v_7:
    v_35 = nil;
    goto v_6;
v_8:
    v_35 = stack[0];
    if (!car_legal(v_35)) v_36 = carerror(v_35); else
    v_36 = car(v_35);
    v_35 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_36 == v_35) goto v_13;
    else goto v_14;
v_13:
    v_35 = lisp_true;
    goto v_6;
v_14:
    v_35 = stack[-1];
    stack[-2] = Llength(nil, v_35);
    env = stack[-3];
    v_35 = stack[0];
    v_35 = Llength(nil, v_35);
    env = stack[-3];
    if (equal(stack[-2], v_35)) goto v_19;
    else goto v_20;
v_19:
    v_36 = stack[-1];
    v_35 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // xord_lex
        return (*qfn2(fn))(fn, v_36, v_35);
    }
v_20:
    v_35 = stack[-1];
    stack[-1] = Llength(nil, v_35);
    env = stack[-3];
    v_35 = stack[0];
    v_35 = Llength(nil, v_35);
    {
        LispObject v_40 = stack[-1];
        return Lgreaterp_2(nil, v_40, v_35);
    }
    v_35 = nil;
v_6:
    return onevalue(v_35);
}



// Code for physopaeval

static LispObject CC_physopaeval(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_80, v_81, v_82;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_80 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // physopp
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-1];
    if (v_80 == nil) goto v_10;
    v_80 = stack[0];
    if (!symbolp(v_80)) v_80 = nil;
    else { v_80 = qfastgets(v_80);
           if (v_80 != nil) { v_80 = elt(v_80, 46); // rvalue
#ifdef RECORD_GET
             if (v_80 != SPID_NOPROP)
                record_get(elt(fastget_names, 46), 1);
             else record_get(elt(fastget_names, 46), 0),
                v_80 = nil; }
           else record_get(elt(fastget_names, 46), 0); }
#else
             if (v_80 == SPID_NOPROP) v_80 = nil; }}
#endif
    v_82 = v_80;
    if (v_80 == nil) goto v_16;
    v_80 = v_82;
    if (!car_legal(v_80)) v_81 = carerror(v_80); else
    v_81 = car(v_80);
    v_80 = basic_elt(env, 1); // !*sq
    if (v_81 == v_80) goto v_21;
    else goto v_22;
v_21:
    v_80 = v_82;
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    {
        LispObject fn = basic_elt(env, 4); // !*q2a
        return (*qfn1(fn))(fn, v_80);
    }
v_22:
    v_80 = v_82;
    goto v_20;
    v_80 = nil;
v_20:
    goto v_14;
v_16:
    v_80 = stack[0];
    if (!consp(v_80)) goto v_33;
    else goto v_34;
v_33:
    v_80 = stack[0];
    goto v_14;
v_34:
    v_80 = stack[0];
    if (!car_legal(v_80)) v_81 = carerror(v_80); else
    v_81 = car(v_80);
    v_80 = basic_elt(env, 2); // psimpfn
    v_80 = get(v_81, v_80);
    env = stack[-1];
    v_82 = v_80;
    if (v_80 == nil) goto v_38;
    v_81 = v_82;
    v_80 = stack[0];
        return Lapply1(nil, v_81, v_80);
v_38:
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    if (!symbolp(v_80)) v_80 = nil;
    else { v_80 = qfastgets(v_80);
           if (v_80 != nil) { v_80 = elt(v_80, 9); // opmtch
#ifdef RECORD_GET
             if (v_80 != SPID_NOPROP)
                record_get(elt(fastget_names, 9), 1);
             else record_get(elt(fastget_names, 9), 0),
                v_80 = nil; }
           else record_get(elt(fastget_names, 9), 0); }
#else
             if (v_80 == SPID_NOPROP) v_80 = nil; }}
#endif
    if (v_80 == nil) goto v_47;
    v_80 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // opmtch!*
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    v_82 = v_80;
    if (v_80 == nil) goto v_47;
    v_80 = v_82;
    goto v_14;
v_47:
    v_80 = stack[0];
    goto v_14;
    v_80 = nil;
v_14:
    goto v_8;
v_10:
    v_80 = stack[0];
    if (!consp(v_80)) goto v_64;
    v_80 = stack[0];
    if (!car_legal(v_80)) v_81 = carerror(v_80); else
    v_81 = car(v_80);
    v_80 = basic_elt(env, 1); // !*sq
    v_80 = (v_81 == v_80 ? lisp_true : nil);
    goto v_62;
v_64:
    v_80 = nil;
    goto v_62;
    v_80 = nil;
v_62:
    if (v_80 == nil) goto v_60;
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    {
        LispObject fn = basic_elt(env, 4); // !*q2a
        return (*qfn1(fn))(fn, v_80);
    }
v_60:
    v_80 = stack[0];
    goto v_8;
    v_80 = nil;
v_8:
    return onevalue(v_80);
}



// Code for contr1!-strand

static LispObject CC_contr1Kstrand(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_11, v_12;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    v_11 = v_3;
    v_12 = v_2;
// end of prologue
    stack[-2] = v_12;
    stack[-1] = v_11;
    stack[0] = nil;
    v_11 = nil;
    v_11 = ncons(v_11);
    env = stack[-3];
    {
        LispObject v_16 = stack[-2];
        LispObject v_17 = stack[-1];
        LispObject v_18 = stack[0];
        LispObject fn = basic_elt(env, 1); // contr2!-strand
        return (*qfn4up(fn))(fn, v_16, v_17, v_18, v_11);
    }
}



// Code for simp!-sign

static LispObject CC_simpKsign(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_8;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_8 = v_2;
// end of prologue
    if (!car_legal(v_8)) v_8 = carerror(v_8); else
    v_8 = car(v_8);
    {   LispObject fn = basic_elt(env, 1); // reval
    v_8 = (*qfn1(fn))(fn, v_8);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // simp!-sign1
        return (*qfn1(fn))(fn, v_8);
    }
}



// Code for sqp

static LispObject CC_sqp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_26;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_26 = stack[0];
    v_26 = Lconsp(nil, v_26);
    env = stack[-1];
    if (v_26 == nil) goto v_6;
    else goto v_7;
v_6:
    v_26 = nil;
    goto v_5;
v_7:
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    {   LispObject fn = basic_elt(env, 1); // sfpx
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-1];
    if (v_26 == nil) goto v_15;
    else goto v_16;
v_15:
    v_26 = nil;
    goto v_14;
v_16:
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    {
        LispObject fn = basic_elt(env, 1); // sfpx
        return (*qfn1(fn))(fn, v_26);
    }
    v_26 = nil;
v_14:
    goto v_5;
    v_26 = nil;
v_5:
    return onevalue(v_26);
}



// Code for mo_from_a

static LispObject CC_mo_from_a(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_80, v_81;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-3] = v_2;
// end of prologue
    stack[0] = stack[-3];
    v_80 = qvalue(basic_elt(env, 1)); // cali!=basering
    {   LispObject fn = basic_elt(env, 3); // ring_all_names
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-5];
    v_80 = Lmember(nil, stack[0], v_80);
    if (v_80 == nil) goto v_6;
    else goto v_7;
v_6:
    v_81 = stack[-3];
    v_80 = basic_elt(env, 2); // "dpoly variable"
    {
        LispObject fn = basic_elt(env, 4); // typerr
        return (*qfn2(fn))(fn, v_81, v_80);
    }
v_7:
    v_80 = qvalue(basic_elt(env, 1)); // cali!=basering
    {   LispObject fn = basic_elt(env, 3); // ring_all_names
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-5];
    stack[-4] = v_80;
    v_80 = stack[-4];
    if (v_80 == nil) goto v_32;
    else goto v_33;
v_32:
    v_80 = nil;
    goto v_26;
v_33:
    v_80 = stack[-4];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    v_81 = v_80;
    v_80 = stack[-3];
    if (equal(v_81, v_80)) goto v_42;
    else goto v_43;
v_42:
    v_80 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_41;
v_43:
    v_80 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_41;
    v_80 = nil;
v_41:
    v_80 = ncons(v_80);
    env = stack[-5];
    stack[-1] = v_80;
    stack[-2] = v_80;
v_27:
    v_80 = stack[-4];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    stack[-4] = v_80;
    v_80 = stack[-4];
    if (v_80 == nil) goto v_54;
    else goto v_55;
v_54:
    v_80 = stack[-2];
    goto v_26;
v_55:
    stack[0] = stack[-1];
    v_80 = stack[-4];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    v_81 = v_80;
    v_80 = stack[-3];
    if (equal(v_81, v_80)) goto v_65;
    else goto v_66;
v_65:
    v_80 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_64;
v_66:
    v_80 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_64;
    v_80 = nil;
v_64:
    v_80 = ncons(v_80);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_80);
    v_80 = stack[-1];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    stack[-1] = v_80;
    goto v_27;
v_26:
    {   LispObject fn = basic_elt(env, 5); // mo!=shorten
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-5];
    stack[0] = v_80;
    {   LispObject fn = basic_elt(env, 6); // mo!=deglist
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    {
        LispObject v_87 = stack[0];
        return cons(v_87, v_80);
    }
    goto v_5;
    v_80 = nil;
v_5:
    return onevalue(v_80);
}



// Code for get_action

static LispObject CC_get_action(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_43, v_44, v_45, v_46;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_3;
    v_43 = v_2;
// end of prologue
    v_44 = qvalue(basic_elt(env, 1)); // parser_action_table
    v_43 = Lgetv(nil, v_44, v_43);
    v_44 = v_43;
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    v_46 = v_44;
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    v_45 = v_43;
v_19:
    v_43 = v_46;
    if (v_43 == nil) goto v_22;
    else goto v_23;
v_22:
    goto v_18;
v_23:
    v_43 = v_46;
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_43)) v_44 = carerror(v_43); else
    v_44 = car(v_43);
    v_43 = stack[0];
    if (equal(v_44, v_43)) goto v_28;
    else goto v_29;
v_28:
    v_43 = v_46;
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    v_45 = v_43;
    v_43 = nil;
    v_46 = v_43;
    goto v_27;
v_29:
    v_43 = v_46;
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    v_46 = v_43;
    goto v_27;
v_27:
    goto v_19;
v_18:
    v_43 = v_45;
    return onevalue(v_43);
}



// Code for read_typed_name

static LispObject CC_read_typed_name(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_21, v_22;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    v_21 = qvalue(basic_elt(env, 1)); // cursym!*
    stack[0] = v_21;
    {   LispObject fn = basic_elt(env, 4); // scan
    v_21 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_22 = qvalue(basic_elt(env, 1)); // cursym!*
    v_21 = basic_elt(env, 2); // !*colon!*
    if (v_22 == v_21) goto v_11;
    v_21 = stack[0];
    v_22 = basic_elt(env, 3); // general
    return cons(v_21, v_22);
v_11:
    {   LispObject fn = basic_elt(env, 4); // scan
    v_21 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // read_type
    v_21 = (*qfn0(fn))(fn);
    }
    {
        LispObject v_24 = stack[0];
        return cons(v_24, v_21);
    }
    return onevalue(v_21);
}



// Code for rl_bestgaussp

static LispObject CC_rl_bestgaussp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_8;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_8 = v_2;
// end of prologue
    stack[0] = qvalue(basic_elt(env, 1)); // rl_bestgaussp!*
    v_8 = ncons(v_8);
    env = stack[-1];
    {
        LispObject v_10 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_10, v_8);
    }
}



// Code for mkkl

static LispObject CC_mkkl(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_25, v_26, v_27;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_25 = v_3;
    v_26 = v_2;
// end of prologue
v_8:
    v_27 = v_26;
    if (v_27 == nil) goto v_11;
    else goto v_12;
v_11:
    goto v_7;
v_12:
    v_27 = v_26;
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    stack[0] = v_27;
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    v_25 = cons(v_26, v_25);
    env = stack[-1];
    v_25 = ncons(v_25);
    env = stack[-1];
    v_26 = stack[0];
    goto v_8;
    v_25 = nil;
v_7:
    return onevalue(v_25);
}



// Code for findremainder

static LispObject CC_findremainder(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_30, v_31, v_32;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_30 = v_3;
    v_31 = v_2;
// end of prologue
    stack[0] = v_30;
v_8:
    v_30 = stack[0];
    if (v_30 == nil) goto v_12;
    else goto v_13;
v_12:
    goto v_7;
v_13:
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    v_32 = v_31;
    v_31 = v_30;
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    {   LispObject fn = basic_elt(env, 1); // wupseudodivide
    v_30 = (*qfn3(fn))(fn, v_32, v_31, v_30);
    }
    env = stack[-1];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    v_31 = v_30;
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    stack[0] = v_30;
    goto v_8;
v_7:
    v_30 = v_31;
    return onevalue(v_30);
}



// Code for prepsq!*

static LispObject CC_prepsqH(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_230, v_231, v_232;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(12);
// copy arguments values to proper place
    stack[-9] = v_2;
// end of prologue
// Binding !*combinelogs
// FLUIDBIND: reloadenv=11 litvec-offset=1 saveloc=8
{   bind_fluid_stack bind_fluid_var(-11, 1, -8);
    setvalue(basic_elt(env, 1), nil); // !*combinelogs
    v_230 = stack[-9];
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    if (v_230 == nil) goto v_12;
    else goto v_13;
v_12:
    v_230 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_9;
v_13:
    v_230 = qvalue(basic_elt(env, 2)); // ordl!*
    {   LispObject fn = basic_elt(env, 13); // setkorder
    v_230 = (*qfn1(fn))(fn, v_230);
    }
    env = stack[-11];
    stack[-10] = v_230;
    v_230 = qvalue(basic_elt(env, 3)); // factors!*
    stack[-7] = v_230;
v_27:
    v_230 = stack[-7];
    if (v_230 == nil) goto v_32;
    else goto v_33;
v_32:
    v_230 = nil;
    v_231 = v_230;
    goto v_26;
v_33:
    v_230 = stack[-7];
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    v_231 = v_230;
    v_230 = v_231;
    if (symbolp(v_230)) goto v_42;
    v_230 = nil;
    goto v_40;
v_42:
    v_232 = v_231;
    v_230 = basic_elt(env, 4); // prepsq!*fn
    v_230 = get(v_232, v_230);
    env = stack[-11];
    v_232 = v_230;
    if (v_230 == nil) goto v_46;
    v_230 = stack[-9];
    v_230 = Lapply2(nil, v_232, v_230, v_231);
    env = stack[-11];
    goto v_40;
v_46:
    v_230 = v_231;
    if (!symbolp(v_230)) v_230 = nil;
    else { v_230 = qfastgets(v_230);
           if (v_230 != nil) { v_230 = elt(v_230, 24); // klist
#ifdef RECORD_GET
             if (v_230 != SPID_NOPROP)
                record_get(elt(fastget_names, 24), 1);
             else record_get(elt(fastget_names, 24), 0),
                v_230 = nil; }
           else record_get(elt(fastget_names, 24), 0); }
#else
             if (v_230 == SPID_NOPROP) v_230 = nil; }}
#endif
    stack[-3] = v_230;
    v_230 = stack[-3];
    if (v_230 == nil) goto v_66;
    else goto v_67;
v_66:
    v_230 = nil;
    goto v_60;
v_67:
    v_230 = stack[-3];
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    v_230 = ncons(v_230);
    env = stack[-11];
    stack[-1] = v_230;
    stack[-2] = v_230;
v_61:
    v_230 = stack[-3];
    if (!car_legal(v_230)) v_230 = cdrerror(v_230); else
    v_230 = cdr(v_230);
    stack[-3] = v_230;
    v_230 = stack[-3];
    if (v_230 == nil) goto v_80;
    else goto v_81;
v_80:
    v_230 = stack[-2];
    goto v_60;
v_81:
    stack[0] = stack[-1];
    v_230 = stack[-3];
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    v_230 = ncons(v_230);
    env = stack[-11];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_230);
    v_230 = stack[-1];
    if (!car_legal(v_230)) v_230 = cdrerror(v_230); else
    v_230 = cdr(v_230);
    stack[-1] = v_230;
    goto v_61;
v_60:
    goto v_40;
    v_230 = nil;
v_40:
    stack[-6] = v_230;
    v_230 = stack[-6];
    {   LispObject fn = basic_elt(env, 14); // lastpair
    v_230 = (*qfn1(fn))(fn, v_230);
    }
    env = stack[-11];
    stack[-5] = v_230;
    v_230 = stack[-7];
    if (!car_legal(v_230)) v_230 = cdrerror(v_230); else
    v_230 = cdr(v_230);
    stack[-7] = v_230;
    v_230 = stack[-5];
    if (!consp(v_230)) goto v_100;
    else goto v_101;
v_100:
    goto v_27;
v_101:
v_28:
    v_230 = stack[-7];
    if (v_230 == nil) goto v_105;
    else goto v_106;
v_105:
    v_230 = stack[-6];
    v_231 = v_230;
    goto v_26;
v_106:
    stack[-4] = stack[-5];
    v_230 = stack[-7];
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    v_231 = v_230;
    if (symbolp(v_231)) goto v_116;
    v_230 = nil;
    goto v_114;
v_116:
    v_232 = v_230;
    v_231 = basic_elt(env, 4); // prepsq!*fn
    v_231 = get(v_232, v_231);
    env = stack[-11];
    v_232 = v_231;
    if (v_231 == nil) goto v_120;
    v_231 = stack[-9];
    v_230 = Lapply2(nil, v_232, v_231, v_230);
    env = stack[-11];
    goto v_114;
v_120:
    if (!symbolp(v_230)) v_230 = nil;
    else { v_230 = qfastgets(v_230);
           if (v_230 != nil) { v_230 = elt(v_230, 24); // klist
#ifdef RECORD_GET
             if (v_230 != SPID_NOPROP)
                record_get(elt(fastget_names, 24), 1);
             else record_get(elt(fastget_names, 24), 0),
                v_230 = nil; }
           else record_get(elt(fastget_names, 24), 0); }
#else
             if (v_230 == SPID_NOPROP) v_230 = nil; }}
#endif
    stack[-3] = v_230;
    v_230 = stack[-3];
    if (v_230 == nil) goto v_140;
    else goto v_141;
v_140:
    v_230 = nil;
    goto v_134;
v_141:
    v_230 = stack[-3];
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    v_230 = ncons(v_230);
    env = stack[-11];
    stack[-1] = v_230;
    stack[-2] = v_230;
v_135:
    v_230 = stack[-3];
    if (!car_legal(v_230)) v_230 = cdrerror(v_230); else
    v_230 = cdr(v_230);
    stack[-3] = v_230;
    v_230 = stack[-3];
    if (v_230 == nil) goto v_154;
    else goto v_155;
v_154:
    v_230 = stack[-2];
    goto v_134;
v_155:
    stack[0] = stack[-1];
    v_230 = stack[-3];
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    v_230 = ncons(v_230);
    env = stack[-11];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_230);
    v_230 = stack[-1];
    if (!car_legal(v_230)) v_230 = cdrerror(v_230); else
    v_230 = cdr(v_230);
    stack[-1] = v_230;
    goto v_135;
v_134:
    goto v_114;
    v_230 = nil;
v_114:
    if (!car_legal(stack[-4])) rplacd_fails(stack[-4]);
    setcdr(stack[-4], v_230);
    v_230 = stack[-5];
    {   LispObject fn = basic_elt(env, 14); // lastpair
    v_230 = (*qfn1(fn))(fn, v_230);
    }
    env = stack[-11];
    stack[-5] = v_230;
    v_230 = stack[-7];
    if (!car_legal(v_230)) v_230 = cdrerror(v_230); else
    v_230 = cdr(v_230);
    stack[-7] = v_230;
    goto v_28;
v_26:
    v_230 = basic_elt(env, 5); // ordop
    {   LispObject fn = basic_elt(env, 15); // sort
    stack[0] = (*qfn2(fn))(fn, v_231, v_230);
    }
    env = stack[-11];
    v_231 = qvalue(basic_elt(env, 3)); // factors!*
    v_230 = basic_elt(env, 5); // ordop
    {   LispObject fn = basic_elt(env, 15); // sort
    v_231 = (*qfn2(fn))(fn, v_231, v_230);
    }
    env = stack[-11];
    v_230 = qvalue(basic_elt(env, 2)); // ordl!*
    v_230 = Lappend_2(nil, v_231, v_230);
    env = stack[-11];
    v_230 = Lappend_2(nil, stack[0], v_230);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 13); // setkorder
    v_230 = (*qfn1(fn))(fn, v_230);
    }
    env = stack[-11];
    v_231 = qvalue(basic_elt(env, 6)); // kord!*
    v_230 = stack[-10];
    if (equal(v_231, v_230)) goto v_186;
    v_230 = lisp_true;
    goto v_184;
v_186:
    v_230 = qvalue(basic_elt(env, 7)); // wtl!*
    goto v_184;
    v_230 = nil;
v_184:
    if (v_230 == nil) goto v_182;
    v_230 = stack[-9];
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    {   LispObject fn = basic_elt(env, 16); // formop
    stack[0] = (*qfn1(fn))(fn, v_230);
    }
    env = stack[-11];
    v_230 = stack[-9];
    if (!car_legal(v_230)) v_230 = cdrerror(v_230); else
    v_230 = cdr(v_230);
    {   LispObject fn = basic_elt(env, 16); // formop
    v_230 = (*qfn1(fn))(fn, v_230);
    }
    env = stack[-11];
    v_230 = cons(stack[0], v_230);
    env = stack[-11];
    stack[-9] = v_230;
    goto v_180;
v_182:
v_180:
    v_230 = qvalue(basic_elt(env, 8)); // !*rat
    if (v_230 == nil) goto v_204;
    else goto v_202;
v_204:
    v_230 = qvalue(basic_elt(env, 9)); // !*div
    if (v_230 == nil) goto v_207;
    else goto v_202;
v_207:
    v_230 = qvalue(basic_elt(env, 10)); // upl!*
    if (v_230 == nil) goto v_210;
    else goto v_202;
v_210:
    v_230 = qvalue(basic_elt(env, 11)); // dnl!*
    if (v_230 == nil) goto v_212;
    else goto v_202;
v_212:
    goto v_203;
v_202:
    v_230 = stack[-9];
    if (!car_legal(v_230)) v_232 = carerror(v_230); else
    v_232 = car(v_230);
    v_230 = stack[-9];
    if (!car_legal(v_230)) v_231 = cdrerror(v_230); else
    v_231 = cdr(v_230);
    v_230 = nil;
    {   LispObject fn = basic_elt(env, 17); // prepsq!*1
    v_230 = (*qfn3(fn))(fn, v_232, v_231, v_230);
    }
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 18); // replus
    v_230 = (*qfn1(fn))(fn, v_230);
    }
    env = stack[-11];
    goto v_201;
v_203:
    v_231 = stack[-9];
    v_230 = basic_elt(env, 12); // prepsq!*2
    {   LispObject fn = basic_elt(env, 19); // sqform
    v_230 = (*qfn2(fn))(fn, v_231, v_230);
    }
    env = stack[-11];
    goto v_201;
    v_230 = nil;
v_201:
    stack[-9] = v_230;
    v_230 = stack[-10];
    {   LispObject fn = basic_elt(env, 13); // setkorder
    v_230 = (*qfn1(fn))(fn, v_230);
    }
    v_230 = stack[-9];
v_9:
    ;}  // end of a binding scope
    return onevalue(v_230);
}



// Code for talp_eqtp

static LispObject CC_talp_eqtp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_79, v_80;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_7:
    v_79 = stack[-1];
    if (!consp(v_79)) goto v_14;
    else goto v_15;
v_14:
    v_79 = lisp_true;
    goto v_13;
v_15:
    v_79 = stack[0];
    v_79 = (consp(v_79) ? nil : lisp_true);
    goto v_13;
    v_79 = nil;
v_13:
    if (v_79 == nil) goto v_11;
    v_80 = stack[-1];
    v_79 = stack[0];
    if (v_80 == v_79) goto v_24;
    else goto v_25;
v_24:
    v_79 = lisp_true;
    goto v_6;
v_25:
    v_79 = nil;
    goto v_6;
    goto v_9;
v_11:
    v_79 = stack[-1];
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    if (!consp(v_79)) goto v_36;
    else goto v_37;
v_36:
    v_79 = stack[0];
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    v_79 = (consp(v_79) ? nil : lisp_true);
    goto v_35;
v_37:
    v_79 = nil;
    goto v_35;
    v_79 = nil;
v_35:
    if (v_79 == nil) goto v_33;
    v_79 = stack[-1];
    if (!car_legal(v_79)) v_80 = carerror(v_79); else
    v_80 = car(v_79);
    v_79 = stack[0];
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    if (v_80 == v_79) goto v_48;
    else goto v_49;
v_48:
    v_79 = stack[-1];
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    stack[-1] = v_79;
    v_79 = stack[0];
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    stack[0] = v_79;
    goto v_7;
v_49:
    v_79 = nil;
    goto v_6;
    goto v_9;
v_33:
    v_79 = stack[-1];
    if (!car_legal(v_79)) v_80 = carerror(v_79); else
    v_80 = car(v_79);
    v_79 = stack[0];
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    {   LispObject fn = basic_elt(env, 0); // talp_eqtp
    v_79 = (*qfn2(fn))(fn, v_80, v_79);
    }
    env = stack[-2];
    if (v_79 == nil) goto v_66;
    v_79 = stack[-1];
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    stack[-1] = v_79;
    v_79 = stack[0];
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    stack[0] = v_79;
    goto v_7;
v_66:
    v_79 = nil;
    goto v_6;
    goto v_9;
v_9:
    v_79 = nil;
v_6:
    return onevalue(v_79);
}



// Code for qqe_number!-of!-adds!-in!-qterm

static LispObject CC_qqe_numberKofKaddsKinKqterm(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_27, v_28;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
v_6:
    v_27 = stack[0];
    if (!consp(v_27)) goto v_9;
    else goto v_10;
v_9:
    v_27 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_10:
    v_27 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // qqe_op
    v_28 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-1];
    v_27 = basic_elt(env, 1); // (ladd radd)
    v_27 = Lmemq(nil, v_28, v_27);
    if (v_27 == nil) goto v_14;
    v_27 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // qqe_arg2r
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // qqe_number!-of!-adds!-in!-qterm
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    return add1(v_27);
v_14:
    v_27 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // qqe_arg2l
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-1];
    stack[0] = v_27;
    goto v_6;
    v_27 = nil;
v_5:
    return onevalue(v_27);
}



// Code for subf

static LispObject CC_subf(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_146, v_147;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(10);
// copy arguments values to proper place
    stack[-6] = v_3;
    stack[-7] = v_2;
// end of prologue
// Binding alglist!*
// FLUIDBIND: reloadenv=9 litvec-offset=1 saveloc=8
{   bind_fluid_stack bind_fluid_var(-9, 1, -8);
    setvalue(basic_elt(env, 1), nil); // alglist!*
    stack[-5] = nil;
    stack[-4] = nil;
    v_146 = nil;
    v_146 = ncons(v_146);
    env = stack[-9];
    setvalue(basic_elt(env, 1), v_146); // alglist!*
    v_146 = stack[-7];
    if (!consp(v_146)) goto v_20;
    else goto v_21;
v_20:
    v_146 = lisp_true;
    goto v_19;
v_21:
    v_146 = stack[-7];
    if (!car_legal(v_146)) v_146 = carerror(v_146); else
    v_146 = car(v_146);
    v_146 = (consp(v_146) ? nil : lisp_true);
    goto v_19;
    v_146 = nil;
v_19:
    if (v_146 == nil) goto v_17;
    v_146 = stack[-7];
    {   LispObject fn = basic_elt(env, 5); // !*d2q
    v_146 = (*qfn1(fn))(fn, v_146);
    }
    goto v_11;
v_17:
    v_146 = qvalue(basic_elt(env, 2)); // ncmp!*
    if (v_146 == nil) goto v_32;
    v_146 = stack[-7];
    {   LispObject fn = basic_elt(env, 6); // noncomexpf
    v_146 = (*qfn1(fn))(fn, v_146);
    }
    env = stack[-9];
    if (v_146 == nil) goto v_32;
    v_147 = stack[-7];
    v_146 = stack[-6];
    {   LispObject fn = basic_elt(env, 7); // subf1
    v_146 = (*qfn2(fn))(fn, v_147, v_146);
    }
    goto v_11;
v_32:
    v_146 = stack[-6];
    stack[-3] = v_146;
    v_146 = stack[-3];
    if (v_146 == nil) goto v_52;
    else goto v_53;
v_52:
    v_146 = nil;
    stack[0] = v_146;
    goto v_47;
v_53:
    v_146 = stack[-3];
    if (!car_legal(v_146)) v_146 = carerror(v_146); else
    v_146 = car(v_146);
    if (!car_legal(v_146)) v_146 = carerror(v_146); else
    v_146 = car(v_146);
    v_146 = ncons(v_146);
    env = stack[-9];
    stack[-1] = v_146;
    stack[-2] = v_146;
v_48:
    v_146 = stack[-3];
    if (!car_legal(v_146)) v_146 = cdrerror(v_146); else
    v_146 = cdr(v_146);
    stack[-3] = v_146;
    v_146 = stack[-3];
    if (v_146 == nil) goto v_66;
    else goto v_67;
v_66:
    v_146 = stack[-2];
    stack[0] = v_146;
    goto v_47;
v_67:
    stack[0] = stack[-1];
    v_146 = stack[-3];
    if (!car_legal(v_146)) v_146 = carerror(v_146); else
    v_146 = car(v_146);
    if (!car_legal(v_146)) v_146 = carerror(v_146); else
    v_146 = car(v_146);
    v_146 = ncons(v_146);
    env = stack[-9];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_146);
    v_146 = stack[-1];
    if (!car_legal(v_146)) v_146 = cdrerror(v_146); else
    v_146 = cdr(v_146);
    stack[-1] = v_146;
    goto v_48;
v_47:
    v_147 = stack[-7];
    v_146 = nil;
    {   LispObject fn = basic_elt(env, 8); // kernord
    v_146 = (*qfn2(fn))(fn, v_147, v_146);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 9); // intersection
    v_146 = (*qfn2(fn))(fn, stack[0], v_146);
    }
    env = stack[-9];
    v_146 = Lreverse(nil, v_146);
    env = stack[-9];
    stack[0] = v_146;
    v_146 = stack[0];
    {   LispObject fn = basic_elt(env, 10); // setkorder
    v_146 = (*qfn1(fn))(fn, v_146);
    }
    env = stack[-9];
    stack[0] = v_146;
    v_146 = stack[-7];
    {   LispObject fn = basic_elt(env, 11); // reorder
    v_147 = (*qfn1(fn))(fn, v_146);
    }
    env = stack[-9];
    v_146 = stack[-6];
    {   LispObject fn = basic_elt(env, 7); // subf1
    v_146 = (*qfn2(fn))(fn, v_147, v_146);
    }
    env = stack[-9];
    stack[-7] = v_146;
v_91:
    v_147 = stack[-7];
    v_146 = stack[-4];
    v_146 = Lmember(nil, v_147, v_146);
    if (v_146 == nil) goto v_98;
    else goto v_99;
v_98:
    stack[-1] = basic_elt(env, 3); // expt
    v_146 = stack[-7];
    if (!car_legal(v_146)) v_146 = carerror(v_146); else
    v_146 = car(v_146);
    {   LispObject fn = basic_elt(env, 12); // kernels
    v_146 = (*qfn1(fn))(fn, v_146);
    }
    env = stack[-9];
    v_146 = Latsoc(nil, stack[-1], v_146);
    if (v_146 == nil) goto v_107;
    else goto v_106;
v_107:
    stack[-1] = basic_elt(env, 3); // expt
    v_146 = stack[-7];
    if (!car_legal(v_146)) v_146 = cdrerror(v_146); else
    v_146 = cdr(v_146);
    {   LispObject fn = basic_elt(env, 12); // kernels
    v_146 = (*qfn1(fn))(fn, v_146);
    }
    env = stack[-9];
    v_146 = Latsoc(nil, stack[-1], v_146);
    if (v_146 == nil) goto v_113;
    else goto v_106;
v_113:
    v_146 = nil;
    goto v_104;
v_106:
    v_146 = stack[-7];
    {   LispObject fn = basic_elt(env, 13); // prepsq
    v_147 = (*qfn1(fn))(fn, v_146);
    }
    env = stack[-9];
    stack[-5] = v_147;
    v_146 = qvalue(basic_elt(env, 4)); // varstack!*
    v_146 = Lmember(nil, v_147, v_146);
    v_146 = (v_146 == nil ? lisp_true : nil);
    goto v_104;
    v_146 = nil;
v_104:
    goto v_97;
v_99:
    v_146 = nil;
    goto v_97;
    v_146 = nil;
v_97:
    if (v_146 == nil) goto v_94;
    else goto v_95;
v_94:
    goto v_90;
v_95:
    v_147 = stack[-7];
    v_146 = stack[-4];
    v_146 = cons(v_147, v_146);
    env = stack[-9];
    stack[-4] = v_146;
    v_146 = stack[-5];
    {   LispObject fn = basic_elt(env, 14); // simp
    v_146 = (*qfn1(fn))(fn, v_146);
    }
    env = stack[-9];
    stack[-7] = v_146;
    goto v_91;
v_90:
    v_146 = stack[0];
    {   LispObject fn = basic_elt(env, 10); // setkorder
    v_146 = (*qfn1(fn))(fn, v_146);
    }
    env = stack[-9];
    v_146 = stack[-7];
    if (!car_legal(v_146)) v_146 = carerror(v_146); else
    v_146 = car(v_146);
    {   LispObject fn = basic_elt(env, 11); // reorder
    stack[0] = (*qfn1(fn))(fn, v_146);
    }
    env = stack[-9];
    v_146 = stack[-7];
    if (!car_legal(v_146)) v_146 = cdrerror(v_146); else
    v_146 = cdr(v_146);
    {   LispObject fn = basic_elt(env, 11); // reorder
    v_146 = (*qfn1(fn))(fn, v_146);
    }
    env = stack[-9];
    v_146 = cons(stack[0], v_146);
v_11:
    ;}  // end of a binding scope
    return onevalue(v_146);
}



// Code for cl_nnf1

static LispObject CC_cl_nnf1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_275, v_276, v_277;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(7);
// copy arguments values to proper place
    stack[-4] = v_3;
    stack[-2] = v_2;
// end of prologue
v_1:
    v_275 = stack[-2];
    if (!consp(v_275)) goto v_10;
    else goto v_11;
v_10:
    v_275 = stack[-2];
    goto v_9;
v_11:
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = carerror(v_275); else
    v_275 = car(v_275);
    goto v_9;
    v_275 = nil;
v_9:
    v_277 = v_275;
    v_276 = v_277;
    v_275 = basic_elt(env, 1); // not
    if (v_276 == v_275) goto v_20;
    else goto v_21;
v_20:
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_276 = carerror(v_275); else
    v_276 = car(v_275);
    v_275 = stack[-4];
    v_275 = (v_275 == nil ? lisp_true : nil);
    stack[-2] = v_276;
    stack[-4] = v_275;
    goto v_1;
v_21:
    v_276 = v_277;
    v_275 = basic_elt(env, 2); // impl
    if (v_276 == v_275) goto v_32;
    else goto v_33;
v_32:
    v_276 = basic_elt(env, 3); // or
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 13); // cl_cflip
    stack[-1] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_276 = carerror(v_275); else
    v_276 = car(v_275);
    v_275 = stack[-4];
    v_275 = (v_275 == nil ? lisp_true : nil);
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    stack[0] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_276 = carerror(v_275); else
    v_276 = car(v_275);
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    v_275 = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = ncons(v_275);
    {
        LispObject v_284 = stack[-1];
        LispObject v_285 = stack[0];
        return list2star(v_284, v_285, v_275);
    }
v_33:
    v_276 = v_277;
    v_275 = basic_elt(env, 4); // repl
    if (v_276 == v_275) goto v_55;
    else goto v_56;
v_55:
    v_276 = basic_elt(env, 3); // or
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 13); // cl_cflip
    stack[-1] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_276 = carerror(v_275); else
    v_276 = car(v_275);
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    stack[0] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_276 = carerror(v_275); else
    v_276 = car(v_275);
    v_275 = stack[-4];
    v_275 = (v_275 == nil ? lisp_true : nil);
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    v_275 = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = ncons(v_275);
    {
        LispObject v_286 = stack[-1];
        LispObject v_287 = stack[0];
        return list2star(v_286, v_287, v_275);
    }
v_56:
    v_276 = v_277;
    v_275 = basic_elt(env, 5); // equiv
    if (v_276 == v_275) goto v_78;
    else goto v_79;
v_78:
    v_276 = basic_elt(env, 3); // or
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 13); // cl_cflip
    stack[-5] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_276 = basic_elt(env, 6); // and
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 13); // cl_cflip
    stack[-1] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_276 = carerror(v_275); else
    v_276 = car(v_275);
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    stack[0] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_276 = carerror(v_275); else
    v_276 = car(v_275);
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    v_275 = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = ncons(v_275);
    env = stack[-6];
    stack[-3] = list2star(stack[-1], stack[0], v_275);
    env = stack[-6];
    v_276 = basic_elt(env, 6); // and
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 13); // cl_cflip
    stack[-1] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_276 = carerror(v_275); else
    v_276 = car(v_275);
    v_275 = stack[-4];
    v_275 = (v_275 == nil ? lisp_true : nil);
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    stack[0] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_276 = carerror(v_275); else
    v_276 = car(v_275);
    v_275 = stack[-4];
    v_275 = (v_275 == nil ? lisp_true : nil);
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    v_275 = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = ncons(v_275);
    env = stack[-6];
    v_275 = list2star(stack[-1], stack[0], v_275);
    env = stack[-6];
    v_275 = ncons(v_275);
    {
        LispObject v_288 = stack[-5];
        LispObject v_289 = stack[-3];
        return list2star(v_288, v_289, v_275);
    }
v_79:
    v_276 = v_277;
    v_275 = basic_elt(env, 7); // true
    if (v_276 == v_275) goto v_127;
    else goto v_128;
v_127:
    v_275 = lisp_true;
    goto v_126;
v_128:
    v_276 = v_277;
    v_275 = basic_elt(env, 8); // false
    v_275 = (v_276 == v_275 ? lisp_true : nil);
    goto v_126;
    v_275 = nil;
v_126:
    if (v_275 == nil) goto v_124;
    v_276 = stack[-2];
    v_275 = stack[-4];
    {
        LispObject fn = basic_elt(env, 13); // cl_cflip
        return (*qfn2(fn))(fn, v_276, v_275);
    }
v_124:
    v_276 = v_277;
    v_275 = basic_elt(env, 9); // ex
    if (v_276 == v_275) goto v_146;
    else goto v_147;
v_146:
    v_275 = lisp_true;
    goto v_145;
v_147:
    v_276 = v_277;
    v_275 = basic_elt(env, 10); // all
    v_275 = (v_276 == v_275 ? lisp_true : nil);
    goto v_145;
    v_275 = nil;
v_145:
    if (v_275 == nil) goto v_143;
    v_276 = v_277;
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 13); // cl_cflip
    stack[-1] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) stack[0] = carerror(v_275); else
    stack[0] = car(v_275);
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_276 = carerror(v_275); else
    v_276 = car(v_275);
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    v_275 = (*qfn2(fn))(fn, v_276, v_275);
    }
    {
        LispObject v_290 = stack[-1];
        LispObject v_291 = stack[0];
        return list3(v_290, v_291, v_275);
    }
v_143:
    v_276 = v_277;
    v_275 = basic_elt(env, 11); // bex
    if (v_276 == v_275) goto v_175;
    else goto v_176;
v_175:
    v_275 = lisp_true;
    goto v_174;
v_176:
    v_276 = v_277;
    v_275 = basic_elt(env, 12); // ball
    v_275 = (v_276 == v_275 ? lisp_true : nil);
    goto v_174;
    v_275 = nil;
v_174:
    if (v_275 == nil) goto v_172;
    v_276 = v_277;
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 13); // cl_cflip
    stack[-1] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) stack[0] = carerror(v_275); else
    stack[0] = car(v_275);
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_276 = carerror(v_275); else
    v_276 = car(v_275);
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    stack[-3] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_276 = carerror(v_275); else
    v_276 = car(v_275);
    v_275 = lisp_true;
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    v_275 = (*qfn2(fn))(fn, v_276, v_275);
    }
    {
        LispObject v_292 = stack[-1];
        LispObject v_293 = stack[0];
        LispObject v_294 = stack[-3];
        return list4(v_292, v_293, v_294, v_275);
    }
v_172:
    v_276 = v_277;
    v_275 = basic_elt(env, 3); // or
    if (v_276 == v_275) goto v_211;
    else goto v_212;
v_211:
    v_275 = lisp_true;
    goto v_210;
v_212:
    v_276 = v_277;
    v_275 = basic_elt(env, 6); // and
    v_275 = (v_276 == v_275 ? lisp_true : nil);
    goto v_210;
    v_275 = nil;
v_210:
    if (v_275 == nil) goto v_208;
    v_276 = v_277;
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 13); // cl_cflip
    stack[-5] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    stack[-3] = v_275;
    v_275 = stack[-3];
    if (v_275 == nil) goto v_235;
    else goto v_236;
v_235:
    v_275 = nil;
    goto v_229;
v_236:
    v_275 = stack[-3];
    if (!car_legal(v_275)) v_275 = carerror(v_275); else
    v_275 = car(v_275);
    v_276 = v_275;
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    v_275 = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = ncons(v_275);
    env = stack[-6];
    stack[-1] = v_275;
    stack[-2] = v_275;
v_230:
    v_275 = stack[-3];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    stack[-3] = v_275;
    v_275 = stack[-3];
    if (v_275 == nil) goto v_250;
    else goto v_251;
v_250:
    v_275 = stack[-2];
    goto v_229;
v_251:
    stack[0] = stack[-1];
    v_275 = stack[-3];
    if (!car_legal(v_275)) v_275 = carerror(v_275); else
    v_275 = car(v_275);
    v_276 = v_275;
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    v_275 = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = ncons(v_275);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_275);
    v_275 = stack[-1];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    stack[-1] = v_275;
    goto v_230;
v_229:
    {
        LispObject v_295 = stack[-5];
        return cons(v_295, v_275);
    }
v_208:
    v_275 = stack[-4];
    if (v_275 == nil) goto v_268;
    v_275 = stack[-2];
    goto v_266;
v_268:
    v_275 = stack[-2];
    {
        LispObject fn = basic_elt(env, 14); // rl_negateat
        return (*qfn1(fn))(fn, v_275);
    }
    v_275 = nil;
v_266:
    return onevalue(v_275);
}



// Code for cgp_number

static LispObject CC_cgp_number(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_7, v_8;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_7 = v_2;
// end of prologue
    v_8 = v_7;
    v_7 = static_cast<LispObject>(80)+TAG_FIXNUM; // 5
    {
        LispObject fn = basic_elt(env, 1); // nth
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for nary

static LispObject CC_nary(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_49, v_50;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_50 = carerror(v_49); else
    v_50 = car(v_49);
    v_49 = basic_elt(env, 1); // e
    if (v_50 == v_49) goto v_13;
    else goto v_14;
v_13:
    v_50 = stack[0];
    v_49 = basic_elt(env, 2); // power
    v_49 = (v_50 == v_49 ? lisp_true : nil);
    goto v_12;
v_14:
    v_49 = nil;
    goto v_12;
    v_49 = nil;
v_12:
    if (v_49 == nil) goto v_10;
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_50 = cdrerror(v_49); else
    v_50 = cdr(v_49);
    v_49 = basic_elt(env, 3); // exp
    {   LispObject fn = basic_elt(env, 8); // unary
    v_49 = (*qfn2(fn))(fn, v_50, v_49);
    }
    goto v_8;
v_10:
    v_49 = basic_elt(env, 4); // "<apply>"
    {   LispObject fn = basic_elt(env, 9); // printout
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-2];
    v_49 = basic_elt(env, 5); // "<"
    v_49 = Lprinc(nil, v_49);
    env = stack[-2];
    v_49 = stack[0];
    v_49 = Lprinc(nil, v_49);
    env = stack[-2];
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_50 = carerror(v_49); else
    v_50 = car(v_49);
    v_49 = basic_elt(env, 6); // "/"
    {   LispObject fn = basic_elt(env, 10); // attributesml
    v_49 = (*qfn2(fn))(fn, v_50, v_49);
    }
    env = stack[-2];
    v_49 = lisp_true;
    {   LispObject fn = basic_elt(env, 11); // indent!*
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-2];
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    {   LispObject fn = basic_elt(env, 12); // multi_elem
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-2];
    v_49 = nil;
    {   LispObject fn = basic_elt(env, 11); // indent!*
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-2];
    v_49 = basic_elt(env, 7); // "</apply>"
    {   LispObject fn = basic_elt(env, 9); // printout
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    goto v_8;
v_8:
    v_49 = nil;
    return onevalue(v_49);
}



// Code for sacar

static LispObject CC_sacar(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_38, v_39;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_38 = stack[0];
    if (!consp(v_38)) goto v_7;
    else goto v_8;
v_7:
    v_38 = nil;
    goto v_6;
v_8:
    v_39 = stack[-1];
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    if (v_39 == v_38) goto v_15;
    else goto v_16;
v_15:
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    goto v_14;
v_16:
    v_38 = nil;
    goto v_14;
    v_38 = nil;
v_14:
    if (v_38 == nil) goto v_12;
    v_38 = stack[0];
    return ncons(v_38);
v_12:
    v_39 = stack[-1];
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    {   LispObject fn = basic_elt(env, 0); // sacar
    stack[-2] = (*qfn2(fn))(fn, v_39, v_38);
    }
    env = stack[-3];
    v_39 = stack[-1];
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    {   LispObject fn = basic_elt(env, 0); // sacar
    v_38 = (*qfn2(fn))(fn, v_39, v_38);
    }
    {
        LispObject v_43 = stack[-2];
        return Lappend_2(nil, v_43, v_38);
    }
    v_38 = nil;
v_6:
    return onevalue(v_38);
}



// Code for inshisto

static LispObject CC_inshisto(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_69, v_70, v_71;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-3] = v_2;
// end of prologue
    stack[0] = qvalue(basic_elt(env, 1)); // codmat
    v_70 = qvalue(basic_elt(env, 2)); // maxvar
    v_69 = stack[-3];
    v_69 = plus2(v_70, v_69);
    env = stack[-5];
    v_70 = Lgetv(nil, stack[0], v_69);
    env = stack[-5];
    v_69 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_69 = Lgetv(nil, v_70, v_69);
    env = stack[-5];
    if (v_69 == nil) goto v_7;
    v_70 = stack[-3];
    v_69 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_69 = static_cast<LispObject>(geq2(v_70, v_69));
    v_69 = v_69 ? lisp_true : nil;
    env = stack[-5];
    if (v_69 == nil) goto v_7;
    stack[0] = qvalue(basic_elt(env, 3)); // codhisto
    stack[-1] = qvalue(basic_elt(env, 1)); // codmat
    v_70 = qvalue(basic_elt(env, 2)); // maxvar
    v_69 = stack[-3];
    v_69 = plus2(v_70, v_69);
    env = stack[-5];
    v_70 = Lgetv(nil, stack[-1], v_69);
    env = stack[-5];
    v_69 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_69 = Lgetv(nil, v_70, v_69);
    env = stack[-5];
    if (!car_legal(v_69)) v_70 = cdrerror(v_69); else
    v_70 = cdr(v_69);
    v_69 = static_cast<LispObject>(3200)+TAG_FIXNUM; // 200
    {   LispObject fn = basic_elt(env, 5); // min
    v_69 = (*qfn2(fn))(fn, v_70, v_69);
    }
    env = stack[-5];
    stack[-2] = v_69;
    v_69 = Lgetv(nil, stack[0], v_69);
    env = stack[-5];
    stack[-4] = v_69;
    if (v_69 == nil) goto v_27;
    stack[0] = qvalue(basic_elt(env, 1)); // codmat
    v_70 = qvalue(basic_elt(env, 2)); // maxvar
    v_69 = stack[-4];
    v_69 = plus2(v_70, v_69);
    env = stack[-5];
    v_70 = Lgetv(nil, stack[0], v_69);
    env = stack[-5];
    v_69 = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    v_70 = Lgetv(nil, v_70, v_69);
    env = stack[-5];
    v_69 = stack[-3];
    if (!car_legal(v_70)) rplaca_fails(v_70);
    setcar(v_70, v_69);
    goto v_25;
v_27:
    v_70 = stack[-2];
    v_69 = qvalue(basic_elt(env, 4)); // headhisto
    v_69 = static_cast<LispObject>(greaterp2(v_70, v_69));
    v_69 = v_69 ? lisp_true : nil;
    env = stack[-5];
    if (v_69 == nil) goto v_50;
    v_69 = stack[-2];
    setvalue(basic_elt(env, 4), v_69); // headhisto
    goto v_25;
v_50:
v_25:
    stack[0] = qvalue(basic_elt(env, 1)); // codmat
    v_70 = qvalue(basic_elt(env, 2)); // maxvar
    v_69 = stack[-3];
    v_69 = plus2(v_70, v_69);
    env = stack[-5];
    stack[-1] = Lgetv(nil, stack[0], v_69);
    env = stack[-5];
    stack[0] = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    v_70 = nil;
    v_69 = stack[-4];
    v_69 = cons(v_70, v_69);
    env = stack[-5];
    v_69 = Lputv(nil, stack[-1], stack[0], v_69);
    env = stack[-5];
    v_71 = qvalue(basic_elt(env, 3)); // codhisto
    v_70 = stack[-2];
    v_69 = stack[-3];
    v_69 = Lputv(nil, v_71, v_70, v_69);
    v_69 = nil;
    goto v_5;
v_7:
    v_69 = nil;
v_5:
    return onevalue(v_69);
}



// Code for bcplus!?

static LispObject CC_bcplusW(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_18, v_19;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_18 = v_2;
// end of prologue
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    v_19 = v_18;
    v_18 = v_19;
    if (is_number(v_18)) goto v_10;
    v_18 = nil;
    goto v_8;
v_10:
    v_18 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Lgreaterp_2(nil, v_19, v_18);
    v_18 = nil;
v_8:
    return onevalue(v_18);
}



// Code for groebbuchcrit4t

static LispObject CC_groebbuchcrit4t(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_46, v_47;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_7:
    v_46 = stack[-1];
    if (v_46 == nil) goto v_14;
    else goto v_15;
v_14:
    v_46 = lisp_true;
    goto v_13;
v_15:
    v_46 = stack[0];
    v_46 = (v_46 == nil ? lisp_true : nil);
    goto v_13;
    v_46 = nil;
v_13:
    if (v_46 == nil) goto v_11;
    v_46 = nil;
    goto v_6;
v_11:
    v_46 = stack[-1];
    if (!car_legal(v_46)) v_47 = carerror(v_46); else
    v_47 = car(v_46);
    v_46 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_47 == v_46) goto v_28;
    v_46 = stack[0];
    if (!car_legal(v_46)) v_47 = carerror(v_46); else
    v_47 = car(v_46);
    v_46 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_46 = Lneq_2(nil, v_47, v_46);
    env = stack[-2];
    goto v_26;
v_28:
    v_46 = nil;
    goto v_26;
    v_46 = nil;
v_26:
    if (v_46 == nil) goto v_24;
    v_46 = lisp_true;
    goto v_6;
v_24:
    v_46 = stack[-1];
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    stack[-1] = v_46;
    v_46 = stack[0];
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    stack[0] = v_46;
    goto v_7;
    v_46 = nil;
v_6:
    return onevalue(v_46);
}



// Code for !*pf2wedgepf

static LispObject CC_Hpf2wedgepf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_28, v_29, v_30;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    stack[-1] = nil;
v_7:
    v_28 = stack[0];
    if (v_28 == nil) goto v_10;
    else goto v_11;
v_10:
    v_28 = stack[-1];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_28);
    }
v_11:
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    {   LispObject fn = basic_elt(env, 2); // wedgefax
    v_30 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-2];
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    if (!car_legal(v_28)) v_29 = cdrerror(v_28); else
    v_29 = cdr(v_28);
    v_28 = stack[-1];
    v_28 = acons(v_30, v_29, v_28);
    env = stack[-2];
    stack[-1] = v_28;
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    stack[0] = v_28;
    goto v_7;
    v_28 = nil;
    return onevalue(v_28);
}



// Code for pv_times1

static LispObject CC_pv_times1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_26, v_27, v_28;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3,v_4);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_4,v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    v_27 = v_4;
    stack[0] = v_3;
    v_26 = v_2;
// end of prologue
v_9:
    v_28 = v_26;
    if (v_28 == nil) goto v_12;
    else goto v_13;
v_12:
    v_26 = v_27;
    goto v_8;
v_13:
    v_28 = v_26;
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    stack[-1] = v_28;
    if (!car_legal(v_26)) v_28 = carerror(v_26); else
    v_28 = car(v_26);
    v_26 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // pv_times2
    v_26 = (*qfn3(fn))(fn, v_28, v_26, v_27);
    }
    env = stack[-2];
    v_27 = v_26;
    v_26 = stack[-1];
    goto v_9;
    v_26 = nil;
v_8:
    return onevalue(v_26);
}



// Code for general!-reduce!-degree!-mod!-p

static LispObject CC_generalKreduceKdegreeKmodKp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_55, v_56, v_57;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_55 = stack[-1];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    {   LispObject fn = basic_elt(env, 1); // general!-modular!-minus
    v_56 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-3];
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    {   LispObject fn = basic_elt(env, 2); // general!-modular!-quotient
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-3];
    stack[-2] = v_55;
    v_55 = stack[-1];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_56 = cdrerror(v_55); else
    v_56 = cdr(v_55);
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    v_55 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_56) - static_cast<std::uintptr_t>(v_55) + TAG_FIXNUM);
    v_57 = v_55;
    v_56 = v_57;
    v_55 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_56 == v_55) goto v_28;
    else goto v_29;
v_28:
    v_55 = stack[-1];
    if (!car_legal(v_55)) stack[-1] = cdrerror(v_55); else
    stack[-1] = cdr(v_55);
    v_55 = stack[0];
    if (!car_legal(v_55)) v_56 = cdrerror(v_55); else
    v_56 = cdr(v_55);
    v_55 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // general!-multiply!-by!-constant!-mod!-p
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-3];
    {
        LispObject v_61 = stack[-1];
        LispObject fn = basic_elt(env, 4); // general!-plus!-mod!-p
        return (*qfn2(fn))(fn, v_61, v_55);
    }
v_29:
    v_55 = stack[-1];
    if (!car_legal(v_55)) stack[-1] = cdrerror(v_55); else
    stack[-1] = cdr(v_55);
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    v_56 = v_57;
    {   LispObject fn = basic_elt(env, 5); // mksp
    v_56 = (*qfn2(fn))(fn, v_55, v_56);
    }
    env = stack[-3];
    v_55 = stack[-2];
    v_56 = cons(v_56, v_55);
    env = stack[-3];
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    {   LispObject fn = basic_elt(env, 6); // general!-times!-term!-mod!-p
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-3];
    {
        LispObject v_62 = stack[-1];
        LispObject fn = basic_elt(env, 4); // general!-plus!-mod!-p
        return (*qfn2(fn))(fn, v_62, v_55);
    }
    v_55 = nil;
    return onevalue(v_55);
}



// Code for update_kc_list

static LispObject CC_update_kc_list(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_38, v_39;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3,v_4);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_4,v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[0] = v_4;
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    v_39 = stack[-1];
    v_38 = stack[-2];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    {   LispObject fn = basic_elt(env, 1); // list_assoc
    v_38 = (*qfn2(fn))(fn, v_39, v_38);
    }
    env = stack[-4];
    v_39 = v_38;
    v_38 = v_39;
    if (v_38 == nil) goto v_14;
    stack[-3] = v_39;
    v_38 = v_39;
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    if (!car_legal(v_38)) stack[-1] = carerror(v_38); else
    stack[-1] = car(v_38);
    v_38 = v_39;
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    if (!car_legal(v_38)) v_39 = cdrerror(v_38); else
    v_39 = cdr(v_38);
    v_38 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // addf
    v_38 = (*qfn2(fn))(fn, v_39, v_38);
    }
    env = stack[-4];
    v_38 = cons(stack[-1], v_38);
    if (!car_legal(stack[-3])) rplaca_fails(stack[-3]);
    setcar(stack[-3], v_38);
    v_38 = stack[-2];
    goto v_12;
v_14:
    v_38 = stack[-2];
    if (!car_legal(v_38)) stack[-3] = carerror(v_38); else
    stack[-3] = car(v_38);
    v_39 = stack[-1];
    v_38 = stack[0];
    v_39 = cons(v_39, v_38);
    v_38 = stack[-2];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    {
        LispObject v_44 = stack[-3];
        return list2star(v_44, v_39, v_38);
    }
    v_38 = nil;
v_12:
    return onevalue(v_38);
}



// Code for ofsf_pow2q

static LispObject CC_ofsf_pow2q(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_13, v_14, v_15;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_13 = v_3;
    v_14 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // to
    v_14 = (*qfn2(fn))(fn, v_14, v_13);
    }
    env = stack[0];
    v_13 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_15 = cons(v_14, v_13);
    v_14 = nil;
    v_13 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return acons(v_15, v_14, v_13);
}



// Code for prepreform

static LispObject CC_prepreform(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_9, v_10;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_9 = v_2;
// end of prologue
    stack[0] = v_9;
    v_10 = qvalue(basic_elt(env, 1)); // ordl!*
    v_9 = qvalue(basic_elt(env, 2)); // factors!*
    v_9 = Lappend_2(nil, v_10, v_9);
    env = stack[-1];
    {
        LispObject v_12 = stack[0];
        LispObject fn = basic_elt(env, 3); // prepreform1
        return (*qfn2(fn))(fn, v_12, v_9);
    }
}



// Code for exptcompare

static LispObject CC_exptcompare(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_32, v_33, v_34;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_32 = v_3;
    v_33 = v_2;
// end of prologue
    v_34 = v_33;
    if (!consp(v_34)) goto v_7;
    else goto v_8;
v_7:
    v_34 = v_32;
    if (!consp(v_34)) goto v_12;
    else goto v_13;
v_12:
        return Lgreaterp_2(nil, v_33, v_32);
v_13:
    v_32 = nil;
    goto v_11;
    v_32 = nil;
v_11:
    goto v_6;
v_8:
    v_34 = v_32;
    if (!consp(v_34)) goto v_21;
    else goto v_22;
v_21:
    v_32 = lisp_true;
    goto v_6;
v_22:
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
        return Lgreaterp_2(nil, v_33, v_32);
    v_32 = nil;
v_6:
    return onevalue(v_32);
}



// Code for cl_smsimpl!-junct2

static LispObject CC_cl_smsimplKjunct2(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_85, v_86, v_87, v_88;
    LispObject v_5, v_6, v_7;
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_5 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_6 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_7 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ != nil)
        aerror1("too many arguments provided", basic_elt(env, 0));
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3,v_4,v_5,v_6,v_7);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_7,v_6,v_5,v_4,v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-2] = v_7;
    v_85 = v_6;
    v_86 = v_5;
    v_87 = v_4;
    stack[-3] = v_3;
    v_88 = v_2;
// end of prologue
    stack[-4] = v_88;
    stack[-1] = v_87;
    stack[0] = v_86;
    v_85 = ncons(v_85);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 6); // rl_smmkatl
    v_85 = (*qfn4up(fn))(fn, stack[-4], stack[-1], stack[0], v_85);
    }
    env = stack[-5];
    stack[-1] = v_85;
    v_86 = stack[-1];
    v_85 = stack[-2];
    if (v_86 == v_85) goto v_21;
    else goto v_22;
v_21:
    v_85 = stack[-2];
    return ncons(v_85);
v_22:
    v_85 = qvalue(basic_elt(env, 1)); // !*rlsichk
    if (v_85 == nil) goto v_30;
    v_85 = stack[-3];
    v_86 = v_85;
    v_85 = nil;
    stack[-3] = v_85;
    v_85 = v_86;
    stack[0] = v_85;
v_37:
    v_85 = stack[0];
    if (v_85 == nil) goto v_41;
    else goto v_42;
v_41:
    goto v_36;
v_42:
    v_85 = stack[0];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    v_86 = v_85;
    v_85 = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // lto_insert
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-5];
    stack[-3] = v_85;
    v_85 = stack[0];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    stack[0] = v_85;
    goto v_37;
v_36:
    goto v_28;
v_30:
    v_85 = stack[-3];
    v_85 = Lnreverse(nil, v_85);
    env = stack[-5];
    stack[-3] = v_85;
    goto v_28;
v_28:
    v_85 = qvalue(basic_elt(env, 2)); // !*rlsiso
    if (v_85 == nil) goto v_60;
    v_86 = stack[-1];
    v_85 = basic_elt(env, 3); // rl_ordatp
    {   LispObject fn = basic_elt(env, 8); // sort
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-5];
    stack[-1] = v_85;
    v_85 = qvalue(basic_elt(env, 4)); // !*rlsisocx
    if (v_85 == nil) goto v_68;
    v_86 = stack[-3];
    v_85 = basic_elt(env, 5); // cl_sordp
    {   LispObject fn = basic_elt(env, 8); // sort
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-5];
    stack[-3] = v_85;
    goto v_66;
v_68:
v_66:
    goto v_58;
v_60:
v_58:
    v_86 = stack[-1];
    v_85 = stack[-3];
    v_85 = Lnconc(nil, v_86, v_85);
    env = stack[-5];
    v_86 = v_85;
    v_85 = v_86;
    if (v_85 == nil) goto v_79;
    v_85 = v_86;
    goto v_12;
v_79:
    v_85 = stack[-2];
    {   LispObject fn = basic_elt(env, 9); // cl_flip
    v_85 = (*qfn1(fn))(fn, v_85);
    }
    return ncons(v_85);
v_12:
    return onevalue(v_85);
}



// Code for cl_pnf2!-junctor

static LispObject CC_cl_pnf2Kjunctor(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_227, v_228, v_229;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(11);
// copy arguments values to proper place
    stack[-8] = v_2;
// end of prologue
    stack[-7] = nil;
    stack[-6] = nil;
    v_227 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_227;
    v_227 = stack[-8];
    if (!consp(v_227)) goto v_20;
    else goto v_21;
v_20:
    v_227 = stack[-8];
    goto v_19;
v_21:
    v_227 = stack[-8];
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    goto v_19;
    v_227 = nil;
v_19:
    stack[-9] = v_227;
    v_227 = stack[-8];
    if (!car_legal(v_227)) v_227 = cdrerror(v_227); else
    v_227 = cdr(v_227);
    stack[-4] = v_227;
    v_227 = stack[-4];
    if (v_227 == nil) goto v_38;
    else goto v_39;
v_38:
    v_227 = nil;
    goto v_32;
v_39:
    v_227 = stack[-4];
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    {   LispObject fn = basic_elt(env, 3); // cl_pnf2
    v_227 = (*qfn1(fn))(fn, v_227);
    }
    env = stack[-10];
    v_227 = ncons(v_227);
    env = stack[-10];
    stack[-1] = v_227;
    stack[-2] = v_227;
v_33:
    v_227 = stack[-4];
    if (!car_legal(v_227)) v_227 = cdrerror(v_227); else
    v_227 = cdr(v_227);
    stack[-4] = v_227;
    v_227 = stack[-4];
    if (v_227 == nil) goto v_52;
    else goto v_53;
v_52:
    v_227 = stack[-2];
    goto v_32;
v_53:
    stack[0] = stack[-1];
    v_227 = stack[-4];
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    {   LispObject fn = basic_elt(env, 3); // cl_pnf2
    v_227 = (*qfn1(fn))(fn, v_227);
    }
    env = stack[-10];
    v_227 = ncons(v_227);
    env = stack[-10];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_227);
    v_227 = stack[-1];
    if (!car_legal(v_227)) v_227 = cdrerror(v_227); else
    v_227 = cdr(v_227);
    stack[-1] = v_227;
    goto v_33;
v_32:
    v_228 = v_227;
    v_227 = lisp_true;
    stack[-5] = v_227;
    v_227 = lisp_true;
    stack[-4] = v_227;
    v_227 = v_228;
    stack[-1] = v_227;
v_71:
    v_227 = stack[-1];
    if (v_227 == nil) goto v_75;
    else goto v_76;
v_75:
    goto v_70;
v_76:
    v_227 = stack[-1];
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    stack[0] = v_227;
    v_227 = stack[0];
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    {   LispObject fn = basic_elt(env, 4); // cl_qb
    v_227 = (*qfn1(fn))(fn, v_227);
    }
    env = stack[-10];
    stack[-2] = v_227;
    v_228 = stack[-2];
    v_227 = stack[-3];
    v_227 = static_cast<LispObject>(greaterp2(v_228, v_227));
    v_227 = v_227 ? lisp_true : nil;
    env = stack[-10];
    if (v_227 == nil) goto v_88;
    v_227 = stack[-2];
    stack[-3] = v_227;
    v_227 = lisp_true;
    stack[-5] = v_227;
    v_227 = lisp_true;
    stack[-4] = v_227;
    goto v_86;
v_88:
v_86:
    v_227 = stack[0];
    if (!car_legal(v_227)) v_227 = cdrerror(v_227); else
    v_227 = cdr(v_227);
    if (v_227 == nil) goto v_98;
    v_227 = stack[0];
    if (!car_legal(v_227)) v_228 = carerror(v_227); else
    v_228 = car(v_227);
    v_227 = stack[-7];
    v_227 = cons(v_228, v_227);
    env = stack[-10];
    stack[-7] = v_227;
    v_227 = stack[0];
    if (!car_legal(v_227)) v_227 = cdrerror(v_227); else
    v_227 = cdr(v_227);
    if (!car_legal(v_227)) v_228 = carerror(v_227); else
    v_228 = car(v_227);
    v_227 = stack[-6];
    v_227 = cons(v_228, v_227);
    env = stack[-10];
    stack[-6] = v_227;
    goto v_96;
v_98:
    v_227 = stack[0];
    if (!car_legal(v_227)) v_228 = carerror(v_227); else
    v_228 = car(v_227);
    v_227 = stack[-7];
    v_227 = cons(v_228, v_227);
    env = stack[-10];
    stack[-7] = v_227;
    v_227 = stack[0];
    if (!car_legal(v_227)) v_228 = carerror(v_227); else
    v_228 = car(v_227);
    v_227 = stack[-6];
    v_227 = cons(v_228, v_227);
    env = stack[-10];
    stack[-6] = v_227;
    goto v_96;
v_96:
    v_228 = stack[-3];
    v_227 = stack[-2];
    v_227 = Leqn_2(nil, v_228, v_227);
    env = stack[-10];
    if (v_227 == nil) goto v_123;
    v_227 = stack[-7];
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    if (!consp(v_227)) goto v_133;
    else goto v_134;
v_133:
    v_227 = stack[-7];
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    v_228 = v_227;
    goto v_132;
v_134:
    v_227 = stack[-7];
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    v_228 = v_227;
    goto v_132;
    v_228 = nil;
v_132:
    v_227 = basic_elt(env, 1); // all
    if (v_228 == v_227) goto v_129;
    else goto v_130;
v_129:
    v_227 = nil;
    stack[-5] = v_227;
    goto v_128;
v_130:
v_128:
    v_227 = stack[-6];
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    if (!consp(v_227)) goto v_152;
    else goto v_153;
v_152:
    v_227 = stack[-6];
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    v_228 = v_227;
    goto v_151;
v_153:
    v_227 = stack[-6];
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    v_228 = v_227;
    goto v_151;
    v_228 = nil;
v_151:
    v_227 = basic_elt(env, 2); // ex
    if (v_228 == v_227) goto v_148;
    else goto v_149;
v_148:
    v_227 = nil;
    stack[-4] = v_227;
    goto v_147;
v_149:
v_147:
    goto v_121;
v_123:
v_121:
    v_227 = stack[-1];
    if (!car_legal(v_227)) v_227 = cdrerror(v_227); else
    v_227 = cdr(v_227);
    stack[-1] = v_227;
    goto v_71;
v_70:
    v_227 = stack[-7];
    v_227 = Lnreverse(nil, v_227);
    env = stack[-10];
    stack[-7] = v_227;
    v_227 = stack[-6];
    v_227 = Lnreverse(nil, v_227);
    env = stack[-10];
    stack[-6] = v_227;
    v_228 = stack[-3];
    v_227 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_227 = Leqn_2(nil, v_228, v_227);
    env = stack[-10];
    if (v_227 == nil) goto v_175;
    v_227 = stack[-8];
    return ncons(v_227);
v_175:
    v_228 = stack[-5];
    v_227 = stack[-4];
    if (equal(v_228, v_227)) goto v_184;
    v_227 = stack[-5];
    if (v_227 == nil) goto v_190;
    v_229 = stack[-7];
    v_228 = stack[-9];
    v_227 = basic_elt(env, 2); // ex
    {   LispObject fn = basic_elt(env, 5); // cl_interchange
    v_227 = (*qfn3(fn))(fn, v_229, v_228, v_227);
    }
    return ncons(v_227);
v_190:
    v_229 = stack[-6];
    v_228 = stack[-9];
    v_227 = basic_elt(env, 1); // all
    {   LispObject fn = basic_elt(env, 5); // cl_interchange
    v_227 = (*qfn3(fn))(fn, v_229, v_228, v_227);
    }
    return ncons(v_227);
    goto v_182;
v_184:
v_182:
    v_229 = stack[-7];
    v_228 = stack[-9];
    v_227 = basic_elt(env, 2); // ex
    {   LispObject fn = basic_elt(env, 5); // cl_interchange
    v_227 = (*qfn3(fn))(fn, v_229, v_228, v_227);
    }
    env = stack[-10];
    stack[0] = v_227;
    v_229 = stack[-6];
    v_228 = stack[-9];
    v_227 = basic_elt(env, 1); // all
    {   LispObject fn = basic_elt(env, 5); // cl_interchange
    v_227 = (*qfn3(fn))(fn, v_229, v_228, v_227);
    }
    v_229 = v_227;
    v_227 = stack[0];
    if (!car_legal(v_227)) v_228 = carerror(v_227); else
    v_228 = car(v_227);
    v_227 = v_229;
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    if (v_228 == v_227) goto v_214;
    else goto v_215;
v_214:
    v_227 = stack[0];
    return ncons(v_227);
v_215:
    v_227 = stack[0];
    v_228 = v_229;
    return list2(v_227, v_228);
    v_227 = nil;
    return onevalue(v_227);
}



// Code for aex_fvarl

static LispObject CC_aex_fvarl(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_10;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_10 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // aex_varl
    stack[-1] = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-2];
    v_10 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // aex_ctx
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // ctx_idl
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-2];
    {
        LispObject v_13 = stack[-1];
        LispObject fn = basic_elt(env, 4); // lto_setminus
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for variablesir

static LispObject CC_variablesir(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_30, v_31;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    v_31 = qvalue(basic_elt(env, 1)); // char
    v_30 = basic_elt(env, 2); // (!/ o m b v a r)
    if (equal(v_31, v_30)) goto v_10;
    {   LispObject fn = basic_elt(env, 3); // omvir
    v_30 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    stack[0] = v_30;
    {   LispObject fn = basic_elt(env, 4); // lex
    v_30 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // variablesir
    v_30 = (*qfn0(fn))(fn);
    }
    v_31 = stack[0];
    if (v_31 == nil) goto v_18;
    else goto v_19;
v_18:
    v_31 = stack[0];
        return Lappend_2(nil, v_31, v_30);
v_19:
    v_31 = stack[0];
    return cons(v_31, v_30);
    goto v_8;
v_10:
v_8:
    v_30 = nil;
    return onevalue(v_30);
}



// Code for freeoff

static LispObject CC_freeoff(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_87, v_88;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_7:
    v_87 = stack[-1];
    if (!consp(v_87)) goto v_14;
    else goto v_15;
v_14:
    v_87 = lisp_true;
    goto v_13;
v_15:
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    v_87 = (consp(v_87) ? nil : lisp_true);
    goto v_13;
    v_87 = nil;
v_13:
    if (v_87 == nil) goto v_11;
    v_87 = lisp_true;
    goto v_6;
v_11:
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    {   LispObject fn = basic_elt(env, 1); // sfp
    v_87 = (*qfn1(fn))(fn, v_87);
    }
    env = stack[-2];
    if (v_87 == nil) goto v_25;
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    if (!car_legal(v_87)) v_88 = carerror(v_87); else
    v_88 = car(v_87);
    v_87 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // freeoff
    v_87 = (*qfn2(fn))(fn, v_88, v_87);
    }
    env = stack[-2];
    if (v_87 == nil) goto v_34;
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    if (!car_legal(v_87)) v_88 = cdrerror(v_87); else
    v_88 = cdr(v_87);
    v_87 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // freeoff
    v_87 = (*qfn2(fn))(fn, v_88, v_87);
    }
    env = stack[-2];
    if (v_87 == nil) goto v_44;
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = cdrerror(v_87); else
    v_87 = cdr(v_87);
    stack[-1] = v_87;
    goto v_7;
v_44:
    v_87 = nil;
    goto v_6;
    goto v_32;
v_34:
    v_87 = nil;
    goto v_6;
v_32:
    goto v_9;
v_25:
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    if (!car_legal(v_87)) v_88 = carerror(v_87); else
    v_88 = car(v_87);
    v_87 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // ndepends
    v_87 = (*qfn2(fn))(fn, v_88, v_87);
    }
    env = stack[-2];
    if (v_87 == nil) goto v_62;
    else goto v_63;
v_62:
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    if (!car_legal(v_87)) v_88 = cdrerror(v_87); else
    v_88 = cdr(v_87);
    v_87 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // freeoff
    v_87 = (*qfn2(fn))(fn, v_88, v_87);
    }
    env = stack[-2];
    if (v_87 == nil) goto v_73;
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = cdrerror(v_87); else
    v_87 = cdr(v_87);
    stack[-1] = v_87;
    goto v_7;
v_73:
    v_87 = nil;
    goto v_6;
    goto v_61;
v_63:
    v_87 = nil;
    goto v_6;
v_61:
    goto v_9;
v_9:
    v_87 = nil;
v_6:
    return onevalue(v_87);
}



// Code for deleteall

static LispObject CC_deleteall(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_30, v_31, v_32, v_33;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_32 = nil;
v_9:
    v_30 = stack[0];
    if (v_30 == nil) goto v_12;
    else goto v_13;
v_12:
    v_30 = v_32;
    goto v_8;
v_13:
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    v_33 = v_30;
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    stack[0] = v_30;
    v_31 = v_33;
    v_30 = stack[-1];
    if (equal(v_31, v_30)) goto v_23;
    stack[-2] = v_32;
    v_30 = v_33;
    v_30 = ncons(v_30);
    env = stack[-3];
    v_30 = Lnconc(nil, stack[-2], v_30);
    env = stack[-3];
    v_32 = v_30;
    goto v_21;
v_23:
v_21:
    goto v_9;
v_8:
    return onevalue(v_30);
}



// Code for cstimes

static LispObject CC_cstimes(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_47, v_48, v_49, v_50;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_48 = v_3;
    v_49 = v_2;
// end of prologue
v_8:
    v_47 = v_49;
    if (v_47 == nil) goto v_11;
    else goto v_12;
v_11:
    v_47 = v_48;
    if (v_47 == nil) goto v_16;
    else goto v_17;
v_16:
    v_47 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_7;
v_17:
    v_47 = v_48;
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (v_47 == nil) goto v_20;
    else goto v_21;
v_20:
    v_47 = v_48;
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    goto v_7;
v_21:
    v_47 = basic_elt(env, 1); // times
    return cons(v_47, v_48);
    goto v_10;
v_12:
    v_47 = v_49;
    if (!car_legal(v_47)) v_50 = carerror(v_47); else
    v_50 = car(v_47);
    v_47 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_50 == v_47) goto v_31;
    else goto v_32;
v_31:
    v_47 = v_49;
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    v_49 = v_47;
    goto v_8;
v_32:
    v_47 = v_49;
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[0] = v_47;
    v_47 = v_49;
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    v_47 = cons(v_47, v_48);
    env = stack[-1];
    v_48 = v_47;
    v_47 = stack[0];
    v_49 = v_47;
    goto v_8;
v_10:
    v_47 = nil;
v_7:
    return onevalue(v_47);
}



// Code for simprepart

static LispObject CC_simprepart(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_12, v_13;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_13 = v_2;
// end of prologue
    v_12 = nil;
// Binding !*factor
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), v_12); // !*factor
    v_12 = v_13;
    if (!car_legal(v_12)) v_12 = carerror(v_12); else
    v_12 = car(v_12);
    {   LispObject fn = basic_elt(env, 2); // simp!*
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // repartsq
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    ;}  // end of a binding scope
    return onevalue(v_12);
}



// Code for command

static LispObject CC_command(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_249, v_250, v_251;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(7);
// end of prologue
// Binding errmsg!*
// FLUIDBIND: reloadenv=6 litvec-offset=1 saveloc=5
{   bind_fluid_stack bind_fluid_var(-6, 1, -5);
    setvalue(basic_elt(env, 1), nil); // errmsg!*
// Binding loopdelimslist!*
// FLUIDBIND: reloadenv=6 litvec-offset=2 saveloc=4
{   bind_fluid_stack bind_fluid_var(-6, 2, -4);
    setvalue(basic_elt(env, 2), nil); // loopdelimslist!*
    v_249 = qvalue(basic_elt(env, 3)); // !*demo
    if (v_249 == nil) goto v_18;
    v_249 = qvalue(basic_elt(env, 4)); // ifl!*
    if (v_249 == nil) goto v_18;
    {   LispObject fn = basic_elt(env, 27); // commdemo
    v_249 = (*qfn0(fn))(fn);
    }
    goto v_11;
v_18:
    v_249 = qvalue(basic_elt(env, 5)); // !*slin
    if (v_249 == nil) goto v_28;
    else goto v_29;
v_28:
    v_249 = lisp_true;
    goto v_27;
v_29:
    v_249 = qvalue(basic_elt(env, 6)); // !*reduce4
    goto v_27;
    v_249 = nil;
v_27:
    if (v_249 == nil) goto v_25;
    goto v_12;
v_25:
    {   LispObject fn = basic_elt(env, 28); // setcloc!*
    v_249 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    v_249 = qvalue(basic_elt(env, 7)); // lreadfn!*
    if (v_249 == nil) goto v_39;
    v_250 = qvalue(basic_elt(env, 7)); // lreadfn!*
    v_249 = nil;
    {   LispObject fn = basic_elt(env, 29); // lispapply
    v_249 = (*qfn2(fn))(fn, v_250, v_249);
    }
    env = stack[-6];
    goto v_37;
v_39:
    v_249 = Lread(nil);
    env = stack[-6];
    goto v_37;
    v_249 = nil;
v_37:
    stack[0] = v_249;
    goto v_13;
v_12:
    {   LispObject fn = basic_elt(env, 30); // readch1
    v_249 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    setvalue(basic_elt(env, 8), v_249); // crchar!*
    v_250 = qvalue(basic_elt(env, 8)); // crchar!*
    v_249 = qvalue(basic_elt(env, 9)); // !$eol!$
    if (equal(v_250, v_249)) goto v_50;
    else goto v_51;
v_50:
    goto v_12;
v_51:
    {   LispObject fn = basic_elt(env, 31); // command1
    v_249 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    stack[0] = v_249;
v_13:
    v_249 = qvalue(basic_elt(env, 6)); // !*reduce4
    if (v_249 == nil) goto v_58;
    goto v_14;
v_58:
    v_249 = qvalue(basic_elt(env, 10)); // !*struct
    if (v_249 == nil) goto v_61;
    v_249 = stack[0];
    {   LispObject fn = basic_elt(env, 32); // structchk
    v_249 = (*qfn1(fn))(fn, v_249);
    }
    env = stack[-6];
    stack[0] = v_249;
    goto v_56;
v_61:
v_56:
    v_249 = qvalue(basic_elt(env, 11)); // !*pret
    if (v_249 == nil) goto v_68;
    v_249 = stack[0];
    if (!consp(v_249)) goto v_74;
    else goto v_75;
v_74:
    v_249 = lisp_true;
    goto v_73;
v_75:
    v_249 = stack[0];
    if (!car_legal(v_249)) v_250 = carerror(v_249); else
    v_250 = car(v_249);
    v_249 = basic_elt(env, 12); // (in out shut)
    v_249 = Lmemq(nil, v_250, v_249);
    v_249 = (v_249 == nil ? lisp_true : nil);
    goto v_73;
    v_249 = nil;
v_73:
    if (v_249 == nil) goto v_68;
    v_249 = stack[0];
    if (v_249 == nil) goto v_91;
    else goto v_92;
v_91:
    v_250 = qvalue(basic_elt(env, 13)); // cursym!*
    v_249 = basic_elt(env, 14); // end
    v_249 = (v_250 == v_249 ? lisp_true : nil);
    goto v_90;
v_92:
    v_249 = nil;
    goto v_90;
    v_249 = nil;
v_90:
    if (v_249 == nil) goto v_88;
    v_249 = basic_elt(env, 14); // end
    {   LispObject fn = basic_elt(env, 33); // rprint
    v_249 = (*qfn1(fn))(fn, v_249);
    }
    env = stack[-6];
    goto v_86;
v_88:
    v_249 = stack[0];
    {   LispObject fn = basic_elt(env, 33); // rprint
    v_249 = (*qfn1(fn))(fn, v_249);
    }
    env = stack[-6];
    v_249 = Lterpri(nil);
    env = stack[-6];
    goto v_86;
v_86:
    goto v_66;
v_68:
v_66:
    v_249 = qvalue(basic_elt(env, 5)); // !*slin
    if (v_249 == nil) goto v_110;
    v_250 = basic_elt(env, 15); // symbolic
    v_249 = stack[0];
    v_249 = list2(v_250, v_249);
    goto v_11;
v_110:
    v_249 = stack[0];
    {   LispObject fn = basic_elt(env, 34); // form
    v_249 = (*qfn1(fn))(fn, v_249);
    }
    env = stack[-6];
    v_251 = v_249;
    v_249 = qvalue(basic_elt(env, 16)); // key!*
    if (!symbolp(v_249)) v_249 = nil;
    else { v_249 = qfastgets(v_249);
           if (v_249 != nil) { v_249 = elt(v_249, 48); // modefn
#ifdef RECORD_GET
             if (v_249 == SPID_NOPROP)
                record_get(elt(fastget_names, 48), 0),
                v_249 = nil;
             else record_get(elt(fastget_names, 48), 1),
                v_249 = lisp_true; }
           else record_get(elt(fastget_names, 48), 0); }
#else
             if (v_249 == SPID_NOPROP) v_249 = nil; else v_249 = lisp_true; }}
#endif
    if (v_249 == nil) goto v_120;
    v_249 = qvalue(basic_elt(env, 16)); // key!*
    goto v_118;
v_120:
    v_249 = v_251;
    if (!consp(v_249)) goto v_129;
    v_249 = v_251;
    if (!car_legal(v_249)) v_250 = carerror(v_249); else
    v_250 = car(v_249);
    v_249 = basic_elt(env, 17); // quote
    if (v_250 == v_249) goto v_134;
    v_249 = v_251;
    if (!car_legal(v_249)) v_249 = carerror(v_249); else
    v_249 = car(v_249);
    if (symbolp(v_249)) goto v_142;
    else goto v_140;
v_142:
    v_249 = v_251;
    if (!car_legal(v_249)) v_250 = carerror(v_249); else
    v_250 = car(v_249);
    v_249 = basic_elt(env, 18); // nochange
    v_249 = Lflagp(nil, v_250, v_249);
    env = stack[-6];
    if (v_249 == nil) goto v_149;
    v_249 = lisp_true;
    goto v_147;
v_149:
    v_249 = v_251;
    if (!car_legal(v_249)) v_250 = carerror(v_249); else
    v_250 = car(v_249);
    v_249 = basic_elt(env, 19); // intfn
    v_249 = Lflagp(nil, v_250, v_249);
    env = stack[-6];
    if (v_249 == nil) goto v_160;
    v_249 = lisp_true;
    goto v_158;
v_160:
    v_249 = v_251;
    if (!car_legal(v_249)) v_250 = carerror(v_249); else
    v_250 = car(v_249);
    v_249 = basic_elt(env, 20); // list
    v_249 = (v_250 == v_249 ? lisp_true : nil);
    goto v_158;
    v_249 = nil;
v_158:
    goto v_147;
    v_249 = nil;
v_147:
    if (v_249 == nil) goto v_140;
    goto v_141;
v_140:
    v_249 = lisp_true;
    goto v_139;
v_141:
    v_249 = v_251;
    if (!car_legal(v_249)) v_250 = carerror(v_249); else
    v_250 = car(v_249);
    v_249 = basic_elt(env, 21); // (setq setel setf)
    v_249 = Lmemq(nil, v_250, v_249);
    if (v_249 == nil) goto v_177;
    else goto v_178;
v_177:
    v_249 = nil;
    goto v_176;
v_178:
    v_249 = v_251;
    if (!car_legal(v_249)) v_249 = cdrerror(v_249); else
    v_249 = cdr(v_249);
    if (!car_legal(v_249)) v_249 = cdrerror(v_249); else
    v_249 = cdr(v_249);
    if (!car_legal(v_249)) v_250 = carerror(v_249); else
    v_250 = car(v_249);
    v_249 = basic_elt(env, 17); // quote
    v_249 = Leqcar(nil, v_250, v_249);
    env = stack[-6];
    goto v_176;
    v_249 = nil;
v_176:
    goto v_139;
    v_249 = nil;
v_139:
    goto v_132;
v_134:
    v_249 = nil;
    goto v_132;
    v_249 = nil;
v_132:
    goto v_127;
v_129:
    v_249 = nil;
    goto v_127;
    v_249 = nil;
v_127:
    if (v_249 == nil) goto v_125;
    v_249 = basic_elt(env, 15); // symbolic
    goto v_118;
v_125:
    v_249 = qvalue(basic_elt(env, 22)); // !*mode
    goto v_118;
v_118:
    stack[-3] = v_249;
    stack[-2] = v_251;
    stack[-1] = nil;
    stack[0] = basic_elt(env, 15); // symbolic
    v_249 = ncons(v_249);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 35); // convertmode1
    v_249 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_249);
    }
    env = stack[-6];
    v_249 = list2(stack[-3], v_249);
    goto v_11;
v_14:
    v_249 = qvalue(basic_elt(env, 23)); // !*debug
    if (v_249 == nil) goto v_213;
    v_249 = basic_elt(env, 24); // "Parse: "
    v_249 = Lprinc(nil, v_249);
    env = stack[-6];
    v_249 = stack[0];
    {   LispObject fn = basic_elt(env, 36); // prettyprint
    v_249 = (*qfn1(fn))(fn, v_249);
    }
    env = stack[-6];
    goto v_211;
v_213:
v_211:
    v_250 = qvalue(basic_elt(env, 16)); // key!*
    v_249 = basic_elt(env, 25); // !*semicol!*
    if (v_250 == v_249) goto v_221;
    else goto v_222;
v_221:
    goto v_12;
v_222:
    v_249 = qvalue(basic_elt(env, 6)); // !*reduce4
    if (v_249 == nil) goto v_227;
    else goto v_228;
v_227:
    v_249 = stack[0];
    {   LispObject fn = basic_elt(env, 34); // form
    v_249 = (*qfn1(fn))(fn, v_249);
    }
    env = stack[-6];
    stack[0] = v_249;
    goto v_226;
v_228:
    v_249 = stack[0];
    {   LispObject fn = basic_elt(env, 37); // n_form
    v_249 = (*qfn1(fn))(fn, v_249);
    }
    env = stack[-6];
    stack[0] = v_249;
    goto v_226;
v_226:
    v_249 = qvalue(basic_elt(env, 23)); // !*debug
    if (v_249 == nil) goto v_239;
    v_249 = Lterpri(nil);
    env = stack[-6];
    v_249 = basic_elt(env, 26); // "Form: "
    v_249 = Lprinc(nil, v_249);
    env = stack[-6];
    v_249 = stack[0];
    {   LispObject fn = basic_elt(env, 36); // prettyprint
    v_249 = (*qfn1(fn))(fn, v_249);
    }
    goto v_237;
v_239:
v_237:
    v_249 = stack[0];
v_11:
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_249);
}



// Code for sf_member

static LispObject CC_sf_member(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_44, v_45;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_1:
    v_44 = stack[0];
    if (!consp(v_44)) goto v_11;
    else goto v_12;
v_11:
    v_44 = lisp_true;
    goto v_10;
v_12:
    v_44 = stack[0];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    v_44 = (consp(v_44) ? nil : lisp_true);
    goto v_10;
    v_44 = nil;
v_10:
    if (v_44 == nil) goto v_7;
    else goto v_8;
v_7:
    v_45 = stack[-1];
    v_44 = stack[0];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    {   LispObject fn = basic_elt(env, 1); // mvar_member
    v_44 = (*qfn2(fn))(fn, v_45, v_44);
    }
    env = stack[-2];
    if (v_44 == nil) goto v_22;
    else goto v_21;
v_22:
    v_45 = stack[-1];
    v_44 = stack[0];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    {   LispObject fn = basic_elt(env, 0); // sf_member
    v_44 = (*qfn2(fn))(fn, v_45, v_44);
    }
    env = stack[-2];
    if (v_44 == nil) goto v_31;
    else goto v_30;
v_31:
    v_45 = stack[-1];
    v_44 = stack[0];
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    stack[-1] = v_45;
    stack[0] = v_44;
    goto v_1;
v_30:
v_21:
    goto v_6;
v_8:
    v_44 = nil;
    goto v_6;
    v_44 = nil;
v_6:
    return onevalue(v_44);
}



// Code for !:divide

static LispObject CC_Tdivide(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_40, v_41, v_42;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_41 = v_3;
    v_42 = v_2;
// end of prologue
    v_40 = v_42;
    if (v_40 == nil) goto v_7;
    else goto v_8;
v_7:
    v_40 = nil;
    return ncons(v_40);
v_8:
    v_40 = v_41;
    if (v_40 == nil) goto v_12;
    else goto v_13;
v_12:
    v_42 = basic_elt(env, 1); // poly
    v_41 = static_cast<LispObject>(3232)+TAG_FIXNUM; // 202
    v_40 = basic_elt(env, 2); // "zero divisor"
    {
        LispObject fn = basic_elt(env, 4); // rerror
        return (*qfn3(fn))(fn, v_42, v_41, v_40);
    }
v_13:
    v_40 = v_42;
    if (!consp(v_40)) goto v_23;
    else goto v_24;
v_23:
    v_40 = v_41;
    v_40 = (consp(v_40) ? nil : lisp_true);
    goto v_22;
v_24:
    v_40 = nil;
    goto v_22;
    v_40 = nil;
v_22:
    if (v_40 == nil) goto v_20;
    v_40 = v_42;
    {
        LispObject fn = basic_elt(env, 5); // dividef
        return (*qfn2(fn))(fn, v_40, v_41);
    }
v_20:
    v_40 = basic_elt(env, 3); // divide
    {
        LispObject fn = basic_elt(env, 6); // dcombine
        return (*qfn3(fn))(fn, v_42, v_41, v_40);
    }
    v_40 = nil;
    return onevalue(v_40);
}



// Code for b!:extadd

static LispObject CC_bTextadd(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_92, v_93, v_94;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    stack[-2] = nil;
v_10:
    v_92 = stack[-1];
    if (v_92 == nil) goto v_14;
    else goto v_15;
v_14:
    v_92 = stack[0];
    v_93 = v_92;
    goto v_11;
v_15:
    v_92 = stack[0];
    if (v_92 == nil) goto v_18;
    else goto v_19;
v_18:
    v_92 = stack[-1];
    v_93 = v_92;
    goto v_11;
v_19:
    v_92 = stack[-1];
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    if (!car_legal(v_92)) v_93 = carerror(v_92); else
    v_93 = car(v_92);
    v_92 = stack[0];
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    if (equal(v_93, v_92)) goto v_22;
    else goto v_23;
v_22:
    v_92 = stack[-1];
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    if (!car_legal(v_92)) v_93 = cdrerror(v_92); else
    v_93 = cdr(v_92);
    v_92 = stack[0];
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    if (!car_legal(v_92)) v_92 = cdrerror(v_92); else
    v_92 = cdr(v_92);
    {   LispObject fn = basic_elt(env, 1); // addf
    v_92 = (*qfn2(fn))(fn, v_93, v_92);
    }
    env = stack[-3];
    v_93 = v_92;
    if (v_93 == nil) goto v_40;
    v_93 = stack[-1];
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    if (!car_legal(v_93)) v_94 = carerror(v_93); else
    v_94 = car(v_93);
    v_93 = v_92;
    v_92 = stack[-2];
    v_92 = acons(v_94, v_93, v_92);
    env = stack[-3];
    stack[-2] = v_92;
    goto v_38;
v_40:
v_38:
    v_92 = stack[-1];
    if (!car_legal(v_92)) v_92 = cdrerror(v_92); else
    v_92 = cdr(v_92);
    stack[-1] = v_92;
    v_92 = stack[0];
    if (!car_legal(v_92)) v_92 = cdrerror(v_92); else
    v_92 = cdr(v_92);
    stack[0] = v_92;
    goto v_10;
v_23:
    v_92 = stack[-1];
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    if (!car_legal(v_92)) v_93 = carerror(v_92); else
    v_93 = car(v_92);
    v_92 = stack[0];
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    {   LispObject fn = basic_elt(env, 2); // b!:ordexp
    v_92 = (*qfn2(fn))(fn, v_93, v_92);
    }
    env = stack[-3];
    if (v_92 == nil) goto v_53;
    v_92 = stack[-1];
    if (!car_legal(v_92)) v_93 = carerror(v_92); else
    v_93 = car(v_92);
    v_92 = stack[-2];
    v_92 = cons(v_93, v_92);
    env = stack[-3];
    stack[-2] = v_92;
    v_92 = stack[-1];
    if (!car_legal(v_92)) v_92 = cdrerror(v_92); else
    v_92 = cdr(v_92);
    stack[-1] = v_92;
    goto v_10;
v_53:
    v_92 = stack[0];
    if (!car_legal(v_92)) v_93 = carerror(v_92); else
    v_93 = car(v_92);
    v_92 = stack[-2];
    v_92 = cons(v_93, v_92);
    env = stack[-3];
    stack[-2] = v_92;
    v_92 = stack[0];
    if (!car_legal(v_92)) v_92 = cdrerror(v_92); else
    v_92 = cdr(v_92);
    stack[0] = v_92;
    goto v_10;
v_11:
v_77:
    v_92 = stack[-2];
    if (v_92 == nil) goto v_80;
    else goto v_81;
v_80:
    goto v_76;
v_81:
    v_92 = stack[-2];
    if (!car_legal(v_92)) v_92 = cdrerror(v_92); else
    v_92 = cdr(v_92);
    stack[-1] = v_92;
    v_92 = stack[-2];
    if (!car_legal(v_92)) rplacd_fails(v_92);
    setcdr(v_92, v_93);
    v_92 = stack[-2];
    v_93 = v_92;
    v_92 = stack[-1];
    stack[-2] = v_92;
    goto v_77;
v_76:
    v_92 = v_93;
    return onevalue(v_92);
}



// Code for in_list1

static LispObject CC_in_list1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_9, v_10, v_11;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_9 = v_3;
    v_10 = v_2;
// end of prologue
    v_11 = v_10;
    v_10 = v_9;
    v_9 = nil;
    {
        LispObject fn = basic_elt(env, 1); // in_list1a
        return (*qfn3(fn))(fn, v_11, v_10, v_9);
    }
}



setup_type const u18_setup[] =
{
    {"lex_restore_context",     G0W1,     CC_lex_restore_context,G2W1,G3W1,G4W1},
    {"outdefr",                 G0W2,     G1W2,     CC_outdefr,G3W2,    G4W2},
    {"processpartitie1",        G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_processpartitie1},
    {"remove-free-vars*",       G0W1,     CC_removeKfreeKvarsH,G2W1,G3W1,G4W1},
    {"degree-in-variable",      G0W2,     G1W2,     CC_degreeKinKvariable,G3W2,G4W2},
    {"constsml",                G0W1,     CC_constsml,G2W1,   G3W1,     G4W1},
    {"ldt-tvar",                G0W1,     CC_ldtKtvar,G2W1,   G3W1,     G4W1},
    {"maprin",                  G0W1,     CC_maprin,G2W1,     G3W1,     G4W1},
    {"findnewvars",             G0W1,     CC_findnewvars,G2W1,G3W1,     G4W1},
    {"xord_gradlex",            G0W2,     G1W2,     CC_xord_gradlex,G3W2,G4W2},
    {"physopaeval",             G0W1,     CC_physopaeval,G2W1,G3W1,     G4W1},
    {"contr1-strand",           G0W2,     G1W2,     CC_contr1Kstrand,G3W2,G4W2},
    {"simp-sign",               G0W1,     CC_simpKsign,G2W1,  G3W1,     G4W1},
    {"sqp",                     G0W1,     CC_sqp,   G2W1,     G3W1,     G4W1},
    {"mo_from_a",               G0W1,     CC_mo_from_a,G2W1,  G3W1,     G4W1},
    {"get_action",              G0W2,     G1W2,     CC_get_action,G3W2, G4W2},
    {"read_typed_name",         CC_read_typed_name,G1W0,G2W0, G3W0,     G4W0},
    {"rl_bestgaussp",           G0W1,     CC_rl_bestgaussp,G2W1,G3W1,   G4W1},
    {"mkkl",                    G0W2,     G1W2,     CC_mkkl,  G3W2,     G4W2},
    {"findremainder",           G0W2,     G1W2,     CC_findremainder,G3W2,G4W2},
    {"prepsq*",                 G0W1,     CC_prepsqH,G2W1,    G3W1,     G4W1},
    {"talp_eqtp",               G0W2,     G1W2,     CC_talp_eqtp,G3W2,  G4W2},
    {"qqe_number-of-adds-in-qterm",G0W1,  CC_qqe_numberKofKaddsKinKqterm,G2W1,G3W1,G4W1},
    {"subf",                    G0W2,     G1W2,     CC_subf,  G3W2,     G4W2},
    {"cl_nnf1",                 G0W2,     G1W2,     CC_cl_nnf1,G3W2,    G4W2},
    {"cgp_number",              G0W1,     CC_cgp_number,G2W1, G3W1,     G4W1},
    {"nary",                    G0W2,     G1W2,     CC_nary,  G3W2,     G4W2},
    {"sacar",                   G0W2,     G1W2,     CC_sacar, G3W2,     G4W2},
    {"inshisto",                G0W1,     CC_inshisto,G2W1,   G3W1,     G4W1},
    {"bcplus?",                 G0W1,     CC_bcplusW,G2W1,    G3W1,     G4W1},
    {"groebbuchcrit4t",         G0W2,     G1W2,     CC_groebbuchcrit4t,G3W2,G4W2},
    {"*pf2wedgepf",             G0W1,     CC_Hpf2wedgepf,G2W1,G3W1,     G4W1},
    {"pv_times1",               G0W3,     G1W3,     G2W3,     CC_pv_times1,G4W3},
    {"general-reduce-degree-mod-p",G0W2,  G1W2,     CC_generalKreduceKdegreeKmodKp,G3W2,G4W2},
    {"update_kc_list",          G0W3,     G1W3,     G2W3,     CC_update_kc_list,G4W3},
    {"ofsf_pow2q",              G0W2,     G1W2,     CC_ofsf_pow2q,G3W2, G4W2},
    {"prepreform",              G0W1,     CC_prepreform,G2W1, G3W1,     G4W1},
    {"exptcompare",             G0W2,     G1W2,     CC_exptcompare,G3W2,G4W2},
    {"cl_smsimpl-junct2",       G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_cl_smsimplKjunct2},
    {"cl_pnf2-junctor",         G0W1,     CC_cl_pnf2Kjunctor,G2W1,G3W1, G4W1},
    {"aex_fvarl",               G0W1,     CC_aex_fvarl,G2W1,  G3W1,     G4W1},
    {"variablesir",             CC_variablesir,G1W0,G2W0,     G3W0,     G4W0},
    {"freeoff",                 G0W2,     G1W2,     CC_freeoff,G3W2,    G4W2},
    {"deleteall",               G0W2,     G1W2,     CC_deleteall,G3W2,  G4W2},
    {"cstimes",                 G0W2,     G1W2,     CC_cstimes,G3W2,    G4W2},
    {"simprepart",              G0W1,     CC_simprepart,G2W1, G3W1,     G4W1},
    {"command",                 CC_command,G1W0,    G2W0,     G3W0,     G4W0},
    {"sf_member",               G0W2,     G1W2,     CC_sf_member,G3W2,  G4W2},
    {":divide",                 G0W2,     G1W2,     CC_Tdivide,G3W2,    G4W2},
    {"b:extadd",                G0W2,     G1W2,     CC_bTextadd,G3W2,   G4W2},
    {"in_list1",                G0W2,     G1W2,     CC_in_list1,G3W2,   G4W2},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u18")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("65019 3311847 2073648")),
        nullptr, nullptr, nullptr}
};

// end of generated code
