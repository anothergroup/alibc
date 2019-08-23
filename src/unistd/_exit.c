#include <unistd.h>
#include "syscall.h"

_Noreturn void _exit(int code)
{
    __syscall(60, code);
}