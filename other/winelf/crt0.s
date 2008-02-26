.globl _start

_start:
    call _init
    call _winelf_main
    push %eax
    call exit
    hlt
