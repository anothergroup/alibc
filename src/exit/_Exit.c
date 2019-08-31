#include <stdlib.h>
#include "syscall.h"

_Noreturn void _Exit(int code)
{
    syscall(SYS_exit_group, code);
    for (;;) syscall(SYS_exit, code);
}
