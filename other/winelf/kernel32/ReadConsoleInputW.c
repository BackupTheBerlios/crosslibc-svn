#include "kernel32.h"
void _elfimplib_ReadConsoleInputW() asm("ReadConsoleInputW");
void *_imp__ReadConsoleInputW = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadConsoleInputW() {
load_dll_kernel32();
_imp__ReadConsoleInputW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleInputW");
}
void _elfimplib_ReadConsoleInputW() {
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleInputW));
}

