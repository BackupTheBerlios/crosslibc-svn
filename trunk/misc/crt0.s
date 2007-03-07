.globl _start

_start:
    mov $0, %eax
    call OSCALL_determine
    call _xlibc_callmain
    push %eax
    call _exit
    # PANIC!
    hlt
