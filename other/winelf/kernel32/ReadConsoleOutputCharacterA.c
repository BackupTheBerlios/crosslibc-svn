#include "kernel32.h"
void _elfimplib_ReadConsoleOutputCharacterA() asm("ReadConsoleOutputCharacterA");
void *_imp__ReadConsoleOutputCharacterA = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadConsoleOutputCharacterA() {
load_dll_kernel32();
_imp__ReadConsoleOutputCharacterA = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleOutputCharacterA");
}
void _elfimplib_ReadConsoleOutputCharacterA() {
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleOutputCharacterA));
}

