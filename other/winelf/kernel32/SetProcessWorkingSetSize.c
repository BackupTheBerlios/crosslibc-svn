#include "kernel32.h"
void _elfimplib_SetProcessWorkingSetSize() asm("SetProcessWorkingSetSize");
void *_imp__SetProcessWorkingSetSize = NULL;
__attribute__((constructor)) void _elfimplib_init_SetProcessWorkingSetSize() {
load_dll_kernel32();
_imp__SetProcessWorkingSetSize = (void *) _elf_GetProcAddress(_dll_kernel32, "SetProcessWorkingSetSize");
}
void _elfimplib_SetProcessWorkingSetSize() {
asm("leave\njmp *%0" : : "r"(_imp__SetProcessWorkingSetSize));
}

