#include "kernel32.h"
void _elfimplib_FillConsoleOutputCharacterW() asm("FillConsoleOutputCharacterW");
void *_imp__FillConsoleOutputCharacterW = NULL;
__attribute__((constructor)) void _elfimplib_init_FillConsoleOutputCharacterW() {
load_dll_kernel32();
_imp__FillConsoleOutputCharacterW = (void *) _elf_GetProcAddress(_dll_kernel32, "FillConsoleOutputCharacterW");
}
void _elfimplib_FillConsoleOutputCharacterW() {
asm("leave\njmp *%0" : : "r"(_imp__FillConsoleOutputCharacterW));
}

