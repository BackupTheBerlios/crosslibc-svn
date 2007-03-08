#include "kernel32.h"
void _elfimplib_SetLastError() asm("SetLastError");
void *_imp__SetLastError = NULL;
__attribute__((constructor)) void _elfimplib_init_SetLastError() {
load_dll_kernel32();
_imp__SetLastError = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLastError");
}
void _elfimplib_SetLastError() {
asm("leave\njmp *%0" : : "r"(_imp__SetLastError));
}

