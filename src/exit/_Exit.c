#include <stdlib.h>
#include "syscall.h"

_Noreturn void _Exit(int code)
{
    __syscall(60, code);
    for (;;) __syscall(60, code);
}
