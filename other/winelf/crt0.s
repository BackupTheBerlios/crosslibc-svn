.globl _start

_start:
    call _winelf_callmain
    hlt
