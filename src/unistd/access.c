#include <unistd.h>
#include <fcntl.h>
#include "syscall.h"

int access(const char *path, int amode)
{
#ifdef SYS_access
    return __syscall(SYS_access, (intptr_t)path, amode);
#else
    return __syscall(SYS_faccessat, AT_FDCWD, filename, amode, 0);
#endif
}