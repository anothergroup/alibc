#include <unistd.h>
#include <errno.h>
#include "syscall.h"

int close(int fd)
{
    int ret = __syscall(SYS_close, fd);
    if (ret == -EINTR) {
        ret = 0;
    }
    return (int) __syscall_retval(ret);
}