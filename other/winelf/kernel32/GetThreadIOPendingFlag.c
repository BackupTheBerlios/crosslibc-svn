#include "kernel32.h"
void _elfimplib_GetThreadIOPendingFlag() asm("GetThreadIOPendingFlag");
void *_imp__GetThreadIOPendingFlag = NULL;
__attribute__((constructor)) void _elfimplib_init_GetThreadIOPendingFlag() {
load_dll_kernel32();
_imp__GetThreadIOPendingFlag = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadIOPendingFlag");
}
void _elfimplib_GetThreadIOPendingFlag() {
asm("leave\njmp *%0" : : "r"(_imp__GetThreadIOPendingFlag));
}

