/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 if you're using Bionic */
/* #undef BIONIC_LIBC */

/* DARWIN_VERS value for Mac OS X 10.10 */
#define DARWIN_10_10 140000

/* DARWIN_VERS value for Mac OS X 10.5 */
#define DARWIN_10_5 90000

/* DARWIN_VERS value for Mac OS X 10.6 */
#define DARWIN_10_6 100000

/* DARWIN_VERS value for Mac OS X 10.7 */
#define DARWIN_10_7 110000

/* DARWIN_VERS value for Mac OS X 10.8 */
#define DARWIN_10_8 120000

/* DARWIN_VERS value for Mac OS X 10.9 */
#define DARWIN_10_9 130000

/* DARWIN_VERS value for iOS 7 */
#define DARWIN_IOS_7 140000

/* DARWIN_VERS value for iOS 8 */
#define DARWIN_IOS_8 140000

/* Define to 1 if you're using Darwin */
#define DARWIN_LIBC 1

/* Darwin / iOS version */
#define DARWIN_VERS DARWIN_IOS_8

/* Disable intercept pthread_spin_lock() on MIPS32 and MIPS64. */
/* #undef DISABLE_PTHREAD_SPINLOCK_INTERCEPT */

/* configured to run as an inner Valgrind */
/* #undef ENABLE_INNER */

/* path to GDB */
#define GDB_PATH "/no/gdb/was/found/at/configure/time"

/* Define to 1 if index() and strlen() have been optimized heavily (x86 glibc
   >= 2.12) */
/* #undef GLIBC_MANDATORY_INDEX_AND_STRLEN_REDIRECT */

/* Define to 1 if strlen() has been optimized heavily (amd64 glibc >= 2.10) */
/* #undef GLIBC_MANDATORY_STRLEN_REDIRECT */

/* Define to 1 if gcc/as can do Altivec. */
/* #undef HAS_ALTIVEC */

/* Define to 1 if you have the <asm/unistd.h> header file. */
/* #undef HAVE_ASM_UNISTD_H */

/* Define to 1 if as supports floating point phased out category. */
/* #undef HAVE_AS_PPC_FPPO */

/* Define to 1 if as supports mtocrf/mfocrf. */
/* #undef HAVE_AS_PPC_MFTOCRF */

/* Define to 1 if gcc supports __sync_bool_compare_and_swap() and
   __sync_add_and_fetch() for the primary target */
#define HAVE_BUILTIN_ATOMIC 1

/* Define to 1 if g++ supports __sync_bool_compare_and_swap() and
   __sync_add_and_fetch() */
#define HAVE_BUILTIN_ATOMIC_CXX 1

/* Define to 1 if compiler provides __builtin_clz(). */
#define HAVE_BUILTIN_CLZ 1

/* Define to 1 if compiler provides __builtin_ctz(). */
#define HAVE_BUILTIN_CTZ 1

/* Define to 1 if compiler provides __builtin_popcount(). */
#define HAVE_BUILTIN_POPCOUT 1

/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* Define to 1 if you have the `CLOCK_MONOTONIC' constant. */
#define HAVE_CLOCK_MONOTONIC 1

/* Define to 1 if you have a dlinfo that can do RTLD_DI_TLS_MODID. */
/* #undef HAVE_DLINFO_RTLD_DI_TLS_MODID */

/* Define to 1 if you have the <endian.h> header file. */
#define HAVE_ENDIAN_H 1

/* Define to 1 if you have the `epoll_create' function. */
/* #undef HAVE_EPOLL_CREATE */

/* Define to 1 if you have the `epoll_pwait' function. */
/* #undef HAVE_EPOLL_PWAIT */

/* Define to 1 if you have the `eventfd' function. */
/* #undef HAVE_EVENTFD */

/* Define to 1 if you have the `eventfd_read' function. */
/* #undef HAVE_EVENTFD_READ */

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `klogctl' function. */
/* #undef HAVE_KLOGCTL */

/* Define to 1 if you have the `pthread' library (-lpthread). */
#define HAVE_LIBPTHREAD 1

/* Define to 1 if you have the `rt' library (-lrt). */
/* #undef HAVE_LIBRT */

/* Define to 1 if you have the `mallinfo' function. */
/* #undef HAVE_MALLINFO */

/* Define to 1 if you have the `memchr' function. */
#define HAVE_MEMCHR 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the `mkdir' function. */
#define HAVE_MKDIR 1

/* Define to 1 if you have a working `mmap' system call. */
/* #undef HAVE_MMAP */

/* Define to 1 if you have the <mqueue.h> header file. */
/* #undef HAVE_MQUEUE_H */

/* Define to 1 if you have the `mremap' function. */
/* #undef HAVE_MREMAP */

/* Define to 1 if you have the `ppoll' function. */
/* #undef HAVE_PPOLL */

/* Define to 1 if you have the `process_vm_readv' function. */
/* #undef HAVE_PROCESS_VM_READV */

/* Define to 1 if you have the `process_vm_writev' function. */
/* #undef HAVE_PROCESS_VM_WRITEV */

/* Define to 1 if you have the `pthread_barrier_init' function. */
/* #undef HAVE_PTHREAD_BARRIER_INIT */

/* Define to 1 if you have the `pthread_condattr_setclock' function. */
/* #undef HAVE_PTHREAD_CONDATTR_SETCLOCK */

/* Define to 1 if you have the `pthread_create@glibc2.0' function. */
/* #undef HAVE_PTHREAD_CREATE_GLIBC_2_0 */

/* Define to 1 if you have the `PTHREAD_MUTEX_ADAPTIVE_NP' constant. */
/* #undef HAVE_PTHREAD_MUTEX_ADAPTIVE_NP */

/* Define to 1 if you have the `PTHREAD_MUTEX_ERRORCHECK_NP' constant. */
/* #undef HAVE_PTHREAD_MUTEX_ERRORCHECK_NP */

/* Define to 1 if you have the `PTHREAD_MUTEX_RECURSIVE_NP' constant. */
/* #undef HAVE_PTHREAD_MUTEX_RECURSIVE_NP */

/* Define to 1 if you have the `pthread_mutex_timedlock' function. */
/* #undef HAVE_PTHREAD_MUTEX_TIMEDLOCK */

/* Define to 1 if pthread_mutex_t has a member __data.__kind. */
/* #undef HAVE_PTHREAD_MUTEX_T__DATA__KIND */

/* Define to 1 if pthread_mutex_t has a member called __m_kind. */
/* #undef HAVE_PTHREAD_MUTEX_T__M_KIND */

/* Define to 1 if you have the `PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP'
   constant. */
/* #undef HAVE_PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP */

/* Define to 1 if you have the `pthread_rwlock_t' type. */
#define HAVE_PTHREAD_RWLOCK_T 1

/* Define to 1 if you have the `pthread_rwlock_timedrdlock' function. */
/* #undef HAVE_PTHREAD_RWLOCK_TIMEDRDLOCK */

/* Define to 1 if you have the `pthread_rwlock_timedwrlock' function. */
/* #undef HAVE_PTHREAD_RWLOCK_TIMEDWRLOCK */

/* Define to 1 if you have the `pthread_setname_np' function. */
#define HAVE_PTHREAD_SETNAME_NP 1

/* Define to 1 if you have the `pthread_spin_lock' function. */
/* #undef HAVE_PTHREAD_SPIN_LOCK */

/* Define to 1 if you have the `pthread_yield' function. */
/* #undef HAVE_PTHREAD_YIELD */

/* Define to 1 if you have the `PTRACE_GETREGS' ptrace request. */
/* #undef HAVE_PTRACE_GETREGS */

/* Define to 1 if you have the `readlinkat' function. */
#define HAVE_READLINKAT 1

/* Define to 1 if you have the `semtimedop' function. */
/* #undef HAVE_SEMTIMEDOP */

/* Define to 1 if libstd++ supports annotating shared pointers */
/* #undef HAVE_SHARED_POINTER_ANNOTATION */

/* Define to 1 if you have the `signalfd' function. */
/* #undef HAVE_SIGNALFD */

/* Define to 1 if you have the `sigwaitinfo' function. */
/* #undef HAVE_SIGWAITINFO */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strpbrk' function. */
#define HAVE_STRPBRK 1

/* Define to 1 if you have the `strrchr' function. */
#define HAVE_STRRCHR 1

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* Define to 1 if you have the `syscall' function. */
#define HAVE_SYSCALL 1

/* Define to 1 if you have the <sys/endian.h> header file. */
/* #undef HAVE_SYS_ENDIAN_H */

/* Define to 1 if you have the <sys/epoll.h> header file. */
/* #undef HAVE_SYS_EPOLL_H */

/* Define to 1 if you have the <sys/eventfd.h> header file. */
/* #undef HAVE_SYS_EVENTFD_H */

/* Define to 1 if you have the <sys/klog.h> header file. */
/* #undef HAVE_SYS_KLOG_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/poll.h> header file. */
#define HAVE_SYS_POLL_H 1

/* Define to 1 if you have the <sys/signalfd.h> header file. */
/* #undef HAVE_SYS_SIGNALFD_H */

/* Define to 1 if you have the <sys/signal.h> header file. */
#define HAVE_SYS_SIGNAL_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/syscall.h> header file. */
#define HAVE_SYS_SYSCALL_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if <sys/user.h> defines struct user_regs_struct */
/* #undef HAVE_SYS_USER_REGS */

/* can use __thread to define thread-local variables */
#define HAVE_TLS 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have a usable <linux/futex.h> header file. */
/* #undef HAVE_USABLE_LINUX_FUTEX_H */

/* Define to 1 if you have the `utimensat' function. */
#define HAVE_UTIMENSAT 1

/* IOS_VERS value for iOS 7 */
#define IOS_7 70000

/* IOS_VERS value for iOS 8 */
#define IOS_8 80000

/* iOS version */
#define IOS_VERS IOS_8

/* configured default page size 4k */
#define MIPS_PAGE_SHIFT 12

/* Name of package */
#define PACKAGE "valgrind"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "valgrind-users@lists.sourceforge.net"

/* Define to the full name of this package. */
#define PACKAGE_NAME "Valgrind"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Valgrind 3.11.0.SVN"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "valgrind"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "3.11.0.SVN"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Version number of package */
#define VERSION "3.11.0.SVN"

/* Temporary files directory */
#define VG_TMPDIR "/tmp"

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */
