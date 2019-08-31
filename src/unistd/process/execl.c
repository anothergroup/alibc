#include <unistd.h>
#include <stdarg.h>

static int _execl_part(enum __exec_type_e t, const char *path, int argc, const char *argv0, va_list ap)
{
    int i;
    char *argv[argc + 1];
    argv[0] = (char *) argv0;
    for (i = 1; i < argc; i++) {
        argv[i] = va_arg(ap, char *);
    }
    argv[i] = NULL;
    va_end(ap);
    switch (t) {
        case __USE_EXECV:
            return execv(path, argv);
        case __USE_EXECVP:
            return execvp(path, argv);
        case __USE_EXECVE: {
            char **envp = va_arg(ap, char **);
            return execve(path, argv, envp);
        }
    }
    return execv(path, argv);
}

/*
 * Here the idea is to loop over the variadic arguments twice, once to get the
 * total number of arguments, once to build an argument array to pass to execv.
 * Better to loop over the list twice than to have to allocate the arguments
 * dynamically on the heap
 */
int (execl)(enum __exec_type_e t, const char *path, const char *argv0, ...)
{
    int argc;
    va_list ap;
    va_start(ap, argv0);
    for (argc = 1; va_arg(ap, const char *); argc++);
    va_end(ap);

    va_start(ap, argv0);
    return _execl_part(t, path, argc, argv0, ap);
}

