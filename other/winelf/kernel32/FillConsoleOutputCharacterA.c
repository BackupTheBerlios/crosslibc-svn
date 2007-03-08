#include "kernel32.h"
void _elfimplib_FillConsoleOutputCharacterA() asm("FillConsoleOutputCharacterA");
void *_imp__FillConsoleOutputCharacterA = NULL;
__attribute__((constructor)) void _elfimplib_init_FillConsoleOutputCharacterA() {
load_dll_kernel32();
_imp__FillConsoleOutputCharacterA = (void *) _elf_GetProcAddress(_dll_kernel32, "FillConsoleOutputCharacterA");
}
void _elfimplib_FillConsoleOutputCharacterA() {
asm("leave\njmp *%0" : : "r"(_imp__FillConsoleOutputCharacterA));
}

