#include "kernel32.h"
void _elfimplib_GetExitCodeThread() asm("GetExitCodeThread");
void *_imp__GetExitCodeThread = NULL;
__attribute__((constructor)) void _elfimplib_init_GetExitCodeThread() {
load_dll_kernel32();
_imp__GetExitCodeThread = (void *) _elf_GetProcAddress(_dll_kernel32, "GetExitCodeThread");
}
void _elfimplib_GetExitCodeThread() {
asm("leave\njmp *%0" : : "r"(_imp__GetExitCodeThread));
}

