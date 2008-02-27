.globl _start
.globl _init

_start:
    call _init
    call _winelf_main
    push %eax
    call exit
    hlt
