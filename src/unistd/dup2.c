#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include "syscall.h"

int dup2(int old, int new)
{
    int ret;
#ifdef SYS_dup2
    do {
        ret = __syscall(SYS_dup2, old, new);
    } while (ret == -EBUSY);
#else
    if (old == new) {
        return syscall(SYS_fcntl, F_GETFL) < 0 ? -1 : old;
    }
    do {
        ret = __syscall(SYS_dup3, old, new, 0);
    } while (ret == -EBUSY);
#endif
    return __syscall_retval(ret);
}
