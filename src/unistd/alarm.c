#include <unistd.h>
#include "syscall.h"

unsigned alarm(unsigned seconds)
{
    return __syscall(SYS_alarm, seconds);
}
