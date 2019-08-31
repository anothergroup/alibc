#include <unistd.h>
#include <fcntl.h>
#include "syscall.h"

int access(const char *path, int amode)
{
#ifdef SYS_access
    return syscall(SYS_access, path, amode);
#else
    return syscall(SYS_faccessat, AT_FDCWD, filename, amode, 0);
#endif
}