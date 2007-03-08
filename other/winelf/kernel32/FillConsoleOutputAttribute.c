#include "kernel32.h"
void _elfimplib_FillConsoleOutputAttribute() asm("FillConsoleOutputAttribute");
void *_imp__FillConsoleOutputAttribute = NULL;
__attribute__((constructor)) void _elfimplib_init_FillConsoleOutputAttribute() {
load_dll_kernel32();
_imp__FillConsoleOutputAttribute = (void *) _elf_GetProcAddress(_dll_kernel32, "FillConsoleOutputAttribute");
}
void _elfimplib_FillConsoleOutputAttribute() {
asm("leave\njmp *%0" : : "r"(_imp__FillConsoleOutputAttribute));
}

