.globl _start

_start:
    mov $0, %eax
    call OSCALL_determine
    
    # Passing arguments is different per OS
    movl OSCALL_which, %eax
    
    movl $0, %ebx # LINUX
    cmpl %eax, %ebx
    je _call_lnx
    
    movl $1, %ebx # BSD
    cmpl %eax, %ebx
    je _call_bsd
    
    movl $2, %ebx # SOLARIS
    cmpl %eax, %ebx
    je _call_sol
    
    jmp _postcall
    
_call_lnx:
_call_bsd:
_call_sol:
    # stack = (argc, argv[0], argv[1], ..., argv[n], NULL, envp[0], envp[1],
    #          ..., envp[n], NULL)
    subl $8, %esp
    movl 8(%esp), %eax
    movl %eax, (%esp)
    movl %esp, 4(%esp)
    addl $12, 4(%esp)
    jmp _postcall
    
_postcall:
    call main
    push %eax
    call _exit
    # PANIC!
    hlt
