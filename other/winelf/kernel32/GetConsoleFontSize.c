#include "kernel32.h"
void _elfimplib_GetConsoleFontSize() asm("GetConsoleFontSize");
void *_imp__GetConsoleFontSize = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleFontSize() {
load_dll_kernel32();
_imp__GetConsoleFontSize = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleFontSize");
}
void _elfimplib_GetConsoleFontSize() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleFontSize));
}

