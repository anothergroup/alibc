#include "syscall.h"
#include <errno.h>

long __syscall_retval(unsigned long retval)
{
    if ((signed long) retval < 0 && (signed long) retval > -4096) {
        // errno = -retval
        return -1;
    }
    return (signed long) retval;
}
