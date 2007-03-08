#include "kernel32.h"
void _elfimplib_ReadConsoleOutputCharacterW() asm("ReadConsoleOutputCharacterW");
void *_imp__ReadConsoleOutputCharacterW = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadConsoleOutputCharacterW() {
load_dll_kernel32();
_imp__ReadConsoleOutputCharacterW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleOutputCharacterW");
}
void _elfimplib_ReadConsoleOutputCharacterW() {
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleOutputCharacterW));
}

