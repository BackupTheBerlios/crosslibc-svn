/* SOL_INTERRUPTx:
 * x: the number of args
 * a: the interrupt number */
#define SOL_INTERRUPT0(a) \
asm("push $0; \
    mov $" #a ", %eax; \
    lcall $0x27, $0x0; \
    add $4, %esp;");

#define SOL_INTERRUPT1(a) \
asm("push 0x8(%ebp); \
    push $0; \
    mov $" #a ", %eax; \
    lcall $0x27, $0x0; \
    add $8, %esp;");

#define SOL_INTERRUPT2(a) \
asm("push 0xc(%ebp); \
    push 0x8(%ebp); \
    push $0; \
    mov $" #a ", %eax; \
    lcall $0x27, $0x0; \
    add $12, %esp;");

#define SOL_INTERRUPT3(a) \
asm("push 0x10(%ebp); \
    push 0xc(%ebp); \
    push 0x8(%ebp); \
    push $0; \
    mov $" #a ", %eax; \
    lcall $0x27, $0x0; \
    add $16, %esp;");
