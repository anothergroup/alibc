#include <unistd.h>
#include <stdlib.h>
#include "syscall.h"

_Noreturn void _exit(int code)
{
    _Exit(code);
}
