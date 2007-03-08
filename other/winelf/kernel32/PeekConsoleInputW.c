#include "kernel32.h"
void _elfimplib_PeekConsoleInputW() asm("PeekConsoleInputW");
void *_imp__PeekConsoleInputW = NULL;
__attribute__((constructor)) void _elfimplib_init_PeekConsoleInputW() {
load_dll_kernel32();
_imp__PeekConsoleInputW = (void *) _elf_GetProcAddress(_dll_kernel32, "PeekConsoleInputW");
}
void _elfimplib_PeekConsoleInputW() {
asm("leave\njmp *%0" : : "r"(_imp__PeekConsoleInputW));
}

