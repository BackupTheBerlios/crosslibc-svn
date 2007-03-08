#include "kernel32.h"
void _elfimplib_RaiseException() asm("RaiseException");
void *_imp__RaiseException = NULL;
__attribute__((constructor)) void _elfimplib_init_RaiseException() {
load_dll_kernel32();
_imp__RaiseException = (void *) _elf_GetProcAddress(_dll_kernel32, "RaiseException");
}
void _elfimplib_RaiseException() {
asm("leave\njmp *%0" : : "r"(_imp__RaiseException));
}

