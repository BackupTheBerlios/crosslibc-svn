.globl _start

_start:
    call _winelf_callmain
    push %eax
    call exit
    hlt
