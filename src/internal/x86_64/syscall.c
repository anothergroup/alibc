__attribute__((naked)) long __syscall(long call, long arg1, long arg2, long arg3, long arg4, long arg5, long arg6)
{
    __asm__ __volatile__
    (
            "movq %rdi, %rax\n"
            "movq %rsi, %rdi\n"
            "movq %rdx, %rsi\n"
            "movq %rcx, %rdx\n"
            "movq %r8, %r10\n"
            "movq %r9, %r8\n"
            "movq 8(%rsp), %r9\n"
            "syscall\n"
            "ret\n"
            );
}