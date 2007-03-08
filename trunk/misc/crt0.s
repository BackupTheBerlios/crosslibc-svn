.globl _start

_start:
    call OSCALL_determine
    call _init
    call _xlibc_callmain
    push %eax
    call _exit
    # PANIC!
    hlt

.section .init
.globl _init
_init:
    push %ebp
    movl %esp, %ebp
