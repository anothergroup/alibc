#ifndef _STDDEF_H_
#define _STDDEF_H_

#define NULL ((void *) 0)

#define offsetof(type, member) __builtin_offsetof(type, member)

#define __INCLUDE_PTRDIFF_T
#define __INCLUDE_WCHAR_T
#define __INCLUDE_SIZE_T
#include <internal/types.h>

#endif //_STDDEF_H_
