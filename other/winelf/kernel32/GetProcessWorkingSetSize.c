#include "kernel32.h"
void _elfimplib_GetProcessWorkingSetSize() asm("GetProcessWorkingSetSize");
void *_imp__GetProcessWorkingSetSize = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcessWorkingSetSize() {
load_dll_kernel32();
_imp__GetProcessWorkingSetSize = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessWorkingSetSize");
}
void _elfimplib_GetProcessWorkingSetSize() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcessWorkingSetSize));
}

