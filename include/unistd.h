#ifndef ALIBC_UNISTD_H
#define ALIBC_UNISTD_H

// Version test macros
#define _POSIX_VERSION (200809L)
#define _POSIX2_VERSION _POSIX_VERSION

#define _XOPEN_VERSION (700)

// Options and option groups
#define _POSIX_ADVISORY_INFO (-1)
#define _POSIX_ASYNCHRONOUS_IO _POSIX_VERSION
#define _POSIX_BARRIERS _POSIX_VERSION
#define _POSIX_CHOWN_RESTRICTED 1
#define _POSIX_CLOCK_SELECTION _POSIX_VERSION
#define _POSIX_CPUTIME (-1)
#define _POSIX_FSYNC (-1)
#define _POSIX_IPV6 (-1)
#define _POSIX_JOB_CONTROL _POSIX_VERSION
#define _POSIX_MAPPED_FILES _POSIX_VERSION
#define _POSIX_MEMLOCK (-1)
#define _POSIX_MEMLOCK_RANGE (-1)
#define _POSIX_MEMORY_PROTECTION _POSIX_VERSION
#define _POSIX_MESSAGE_PASSING (-1)
#define _POSIX_MONOTONIC_CLOCK (-1)
#define _POSIX_NO_TRUNC _POSIX_VERSION
#define _POSIX_PRIORITIZED_IO (-1)
#define _POSIX_PRIORITY_SCHEDULING (-1)
#define _POSIX_RAW_SOCKETS (-1)
#define _POSIX_READER_WRITER_LOCKS _POSIX_VERSION
#define _POSIX_REALTIME_SIGNALS _POSIX_VERSION
#define _POSIX_REGEXP _POSIX_VERSION
#define _POSIX_SAVED_IDS _POSIX_VERSION
#define _POSIX_SEMAPHORES _POSIX_VERSION
#define _POSIX_SHARED_MEMORY_OBJECTS (-1)
#define _POSIX_SHELL _POSIX_VERSION
#define _POSIX_SPAWN (-1)
#define _POSIX_SPIN_LOCKS _POSIX_VERSION
#define _POSIX_SPORADIC_SERVER (-1)
#define _POSIX_SYNCHRONIZED_IO (-1)
#define _POSIX_THREAD_ATTR_STACKADDR (-1)
#define _POSIX_THREAD_ATTR_STACKSIZE (-1)
#define _POSIX_THREAD_CPUTIME (-1)
#define _POSIX_THREAD_PRIO_INHERIT (-1)
#define _POSIX_THREAD_PRIO_PROTECT (-1)
#define _POSIX_THREAD_PRIORITY_SCHEDULING (-1)
#define _POSIX_THREAD_PROCESS_SHARED (-1)
#define _POSIX_THREAD_ROBUST_PRIO_INHERIT (-1)
#define _POSIX_THREAD_ROBUST_PRIO_PROTECT (-1)
#define _POSIX_THREAD_SAFE_FUNCTIONS _POSIX_VERSION
#define _POSIX_THREAD_SPORADIC_SERVER (-1)
#define _POSIX_THREADS _POSIX_VERSION
#define _POSIX_TIMEOUTS _POSIX_VERSION
#define _POSIX_TIMERS _POSIX_VERSION
#define _POSIX_TRACE (-1)
#define _POSIX_TRACE_EVENT_FILTER (-1)
#define _POSIX_TRACE_INHERIT (-1)
#define _POSIX_TRACE_LOG (-1)
#define _POSIX_TYPED_MEMORY_OBJECTS (-1)

#define _POSIX2_C_BIND _POSIX_VERSION

// Constants for Functions

#define NULL ((void *) 0)

#define F_OK 0
#define R_OK 4
#define W_OK 2
#define X_OK 1

#define STDIN_FILENO 0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2

#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEk_END 2

// Type Definition
#define __INCLUDE_SIZE_T
#define __INCLUDE_SSIZE_T
#define __INCLUDE_UID_T
#define __INCLUDE_GID_T
#define __INCLUDE_OFF_T
#define __INCLUDE_PID_T
#define __INCLUDE_INTPTR_T
#include <internal/types.h>

// Declaration

int access(const char *, int);
unsigned alarm(unsigned);
int chdir(const char *);
int chown(const char *, uid_t, gid_t);
int close(int);
size_t confstr(int, char *, size_t);
int dup(int);
int dup2(int, int);
_Noreturn void _exit(int);
int execl(const char *, const char *, ...);
int execle(const char *, const char *, ...);
int execlp(const char *, const char *, ...);
int execv(const char *, char *const []);
int execve(const char *, char *const [], char *const []);
int execvp(const char *, char *const []);
int faccessat(int, const char *, int, int);
int fchdir(int);
int fchown(int, uid_t, gid_t);
int fchownat(int, const char *, uid_t, gid_t, int);
int fdatasync(int);
int fexecve(int, char *const [], char * const []);
pid_t fork(void);
long fpathconf(int, int);
int fsync(int);
int ftruncate(int, off_t);
char *getcwd(char *, size_t);
gid_t getegid(void);
uid_t geteuid(void);
gid_t getgid(void);
int getgroups(int, gid_t []);
int gethostname(char *, size_t);
char *getlogin(void);
int getlogin_r(char *, size_t);
int getopt(int, char * const [], const char *);
pid_t getpgid(void);
pid_t getpgrp(void);
pid_t getpid(void);
pid_t getppid(void);
pid_t getsid(pid_t);
uid_t getuid(void);
int isatty(int);
int lchown(const char *, uid_t, gid_t);
int link(const char *, const char *);
int linkat(int, const char *, int, const char *, int);
off_t lseek(int, off_t, int);
long pathconf(const char *, int);
int pause(void);
int pipe(int [2]);
ssize_t pread(int, void *, size_t, off_t);
ssize_t pwrite(int, const void *, size_t, off_t);
ssize_t read(int, void *, size_t);
ssize_t readlink(const char *restrict, char *restrict, size_t);
ssize_t readlinkat(int, const char *restrict, char *restrict, size_t);
int rmdir(const char *);
int setegid(gid_t);
int seteuid(uid_t);
int setgid(gid_t);
int setpgid(pid_t, pid_t);
pid_t setsid(void);
int setuid(uid_t);
unsigned sleep(unsigned);
int symlink(const char *, const char *);
int symlinkat(const char *, int, const char *);
long sysconf(int);
pid_t tcgetpgrp(int);
int tsgetpgrp(int, pid_t);
int truncate(const char *, off_t);
char *ttyname(int);
int ttyname_r(int, char *, size_t);
int unlink(const char *);
int unlinkat(int, const char *, int);
ssize_t write(int, const void *, size_t);

#if defined(_XOPEN_SOURCE) || defined(_GNU_SOURCE) || defined(_BSD_SOURCE)
#define F_ULOCK 0
#define F_LOCK  1
#define F_TLOCK 2
#define F_TEST  3
int setreuid(uid_t, uid_t);
int setregid(gid_t, gid_t);
int lockf(int, int, off_t);
long gethostid(void);
int nice(int);
void sync(void);
pid_t setpgrp(void);
char *crypt(const char *, const char *);
void encrypt(char *, int);
void swab(const void *__restrict, void *__restrict, ssize_t);
#endif


#endif //ALIBC_UNISTD_H
