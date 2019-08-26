#include <unistd.h>
#include <internal/syscall.h>
#include "syscall.h"

int _start(void)
{
    __syscall(SYS_alarm, 7);
    _exit(__syscall(SYS_alarm, 7));
}