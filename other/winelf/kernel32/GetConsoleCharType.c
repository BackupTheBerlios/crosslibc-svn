#include "kernel32.h"
void _elfimplib_GetConsoleCharType() asm("GetConsoleCharType");
void *_imp__GetConsoleCharType = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleCharType() {
load_dll_kernel32();
_imp__GetConsoleCharType = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCharType");
}
void _elfimplib_GetConsoleCharType() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleCharType));
}

