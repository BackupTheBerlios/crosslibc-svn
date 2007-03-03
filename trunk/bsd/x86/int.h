/* BSD_INTERRUPTx:
 * x: the number of args
 * a: the interrupt number */
#define BSD_INTERRUPT0(a) \
asm("push $0; \
    mov $" #a ", %eax; \
    int $0x80; \
    add $4, %esp;");

#define BSD_INTERRUPT1(a) \
asm("push 0x8(%ebp); \
    push $0; \
    mov $" #a ", %eax; \
    int $0x80; \
    add $8, %esp;");

#define BSD_INTERRUPT2(a) \
asm("push 0xc(%ebp); \
    push 0x8(%ebp); \
    push $0; \
    mov $" #a ", %eax; \
    int $0x80; \
    add $12, %esp;");

#define BSD_INTERRUPT3(a) \
asm("push 0x10(%ebp); \
    push 0xc(%ebp); \
    push 0x8(%ebp); \
    push $0; \
    mov $" #a ", %eax; \
    int $0x80; \
    add $16, %esp;");
