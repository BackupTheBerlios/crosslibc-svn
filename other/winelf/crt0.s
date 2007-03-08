.globl _start

_start:
    call _winelf_init
    call _init
    call _winelf_callmain
    push %eax
    call exit
    hlt

.section .init
.globl _init
_init:
    push %ebp
    movl %esp, %ebp
