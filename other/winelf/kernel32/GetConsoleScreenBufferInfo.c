#include "kernel32.h"
void _elfimplib_GetConsoleScreenBufferInfo() asm("GetConsoleScreenBufferInfo");
void *_imp__GetConsoleScreenBufferInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleScreenBufferInfo() {
load_dll_kernel32();
_imp__GetConsoleScreenBufferInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleScreenBufferInfo");
}
void _elfimplib_GetConsoleScreenBufferInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleScreenBufferInfo));
}

