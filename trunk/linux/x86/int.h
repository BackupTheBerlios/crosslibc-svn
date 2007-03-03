/* LINUX_INTERRUPTx:
 * x: the number of args
 * a: the interrupt number */
#define LINUX_ERRCODE \
if (LINUX_retcode >= 0xfffff001u) { \
    errno = -(LINUX_retcode); \
    LINUX_retcode = -1; \
} \
return LINUX_retcode;

#define LINUX_INTERRUPT0(a) \
asm("mov $" #a ", %eax; \
    int $0x80; \
    mov %eax, LINUX_retcode;"); \
LINUX_ERRCODE

#define LINUX_INTERRUPT1(a) \
asm("push %ebx; \
    mov 0x8(%ebp), %ebx; \
    mov $" #a ", %eax; \
    int $0x80; \
    mov %eax, LINUX_retcode; \
    pop %ebx;"); \
LINUX_ERRCODE

#define LINUX_INTERRUPT2(a) \
asm("push %ecx; \
    push %ebx; \
    mov 0xc(%ebp), %ecx; \
    mov 0x8(%ebp), %ebx; \
    mov $" #a ", %eax; \
    int $0x80; \
    mov %eax, LINUX_retcode; \
    pop %ebx; \
    pop %ecx;"); \
LINUX_ERRCODE

#define LINUX_INTERRUPT3(a) \
asm("push %edx; \
    push %ecx; \
    push %ebx; \
    mov 0x10(%ebp), %edx; \
    mov 0xc(%ebp), %ecx; \
    mov 0x8(%ebp), %ebx; \
    mov $" #a ", %eax; \
    int $0x80; \
    mov %eax, LINUX_retcode; \
    pop %ebx; \
    pop %ecx; \
    pop %edx"); \
LINUX_ERRCODE
