#include "kernel32.h"
void _elfimplib_SetFilePointerEx() asm("SetFilePointerEx");
void *_imp__SetFilePointerEx = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFilePointerEx() {
load_dll_kernel32();
_imp__SetFilePointerEx = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFilePointerEx");
}
void _elfimplib_SetFilePointerEx() {
asm("leave\njmp *%0" : : "r"(_imp__SetFilePointerEx));
}

