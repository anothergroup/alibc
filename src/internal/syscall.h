#ifndef _INTERNAL_SYSCALL_H_
#define _INTERNAL_SYSCALL_H_

__attribute__((visibility  ("hidden"))) long __syscall_retval(unsigned long);
__attribute__((visibility  ("hidden"))) long __syscall(long call, long arg1, long arg2, long arg3, long arg4, long arg5, long arg6);

#define _SYSCALL_NBARGS_HELPER(a, b, c, d, e, f, g, h, n, ...) n
#define _SYSCALL_NBARGS(...) _SYSCALL_NBARGS_HELPER(__VA_ARGS__, 7, 6, 5, 4, 3, 2, 1, 0,)

#define _conv(x) ((long) (x))

#define __syscall0(t) (__syscall)(t, 0, 0, 0, 0, 0, 0)
#define __syscall1(t, a) (__syscall)(t, _conv(a), 0, 0, 0, 0, 0)
#define __syscall2(t, a, b) (__syscall)(t, _conv(a), _conv(b), 0, 0, 0, 0)
#define __syscall3(t, a, b, c) (__syscall)(t, _conv(a), _conv(b), _conv(c), 0, 0, 0)
#define __syscall4(t, a, b, c, d) (__syscall)(t, _conv(a), _conv(b), _conv(c), _conv(d), 0, 0)
#define __syscall5(t, a, b, c, d, e) (__syscall)(t, _conv(a), _conv(b), _conv(c), _conv(d), _conv(e), 0)
#define __syscall6(t, a, b, c, d, e, f) (__syscall)(t, _conv(a), _conv(b), _conv(c), _conv(d), _conv(e), _conv(f))

#define _SYSCALL_CONCAT_HELPER(a, b) a##b
#define _SYSCALL_CONCAT(a, b) _SYSCALL_CONCAT_HELPER(a, b)
#define _SYSCALL(s, ...) _SYSCALL_CONCAT(s, _SYSCALL_NBARGS(__VA_ARGS__))(__VA_ARGS__)
#define __syscall(...) _SYSCALL(__syscall, __VA_ARGS__)

#define syscall(...) __syscall_retval(__syscall(__VA_ARGS__))

#include <internal/syscall.h>

#endif //_INTERNAL_SYSCALL_H_
