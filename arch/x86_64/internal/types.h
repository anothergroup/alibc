#ifndef _TYPES_H_
#define _TYPES_H_

#ifdef __INCLUDE_SIZE_T
typedef unsigned long int size_t;
#endif
#ifdef __INCLUDE_SSIZE_T
typedef long int ssize_t;
#endif
#ifdef __INCLUDE_UID_T
typedef unsigned int uid_t;
#endif
#ifdef __INCLUDE_GID_T
typedef unsigned int gid_t;
#endif
#ifdef __INCLUDE_OFF_T
typedef long int off_t;
#endif
#ifdef __INCLUDE_PID_T
typedef int pid_t;
#endif
#ifdef __INCLUDE_INTPTR_T
typedef long int intptr_t;
#endif
#ifdef __INCLUDE_PTRDIFF_T
typedef long int ptrdiff_t;
#endif
#ifdef __INCLUDE_WCHAR_T
typedef int wchar_t;
#endif

#endif //_TYPES_H_
