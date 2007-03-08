#include "kernel32.h"
void _elfimplib_WriteConsoleOutputCharacterW() asm("WriteConsoleOutputCharacterW");
void *_imp__WriteConsoleOutputCharacterW = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteConsoleOutputCharacterW() {
load_dll_kernel32();
_imp__WriteConsoleOutputCharacterW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleOutputCharacterW");
}
void _elfimplib_WriteConsoleOutputCharacterW() {
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleOutputCharacterW));
}

