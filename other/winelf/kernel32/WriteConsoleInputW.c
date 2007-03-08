#include "kernel32.h"
void _elfimplib_WriteConsoleInputW() asm("WriteConsoleInputW");
void *_imp__WriteConsoleInputW = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteConsoleInputW() {
load_dll_kernel32();
_imp__WriteConsoleInputW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleInputW");
}
void _elfimplib_WriteConsoleInputW() {
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleInputW));
}

