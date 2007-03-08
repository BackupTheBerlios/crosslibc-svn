#include "kernel32.h"
void _elfimplib_FreeConsole() asm("FreeConsole");
void *_imp__FreeConsole = NULL;
__attribute__((constructor)) void _elfimplib_init_FreeConsole() {
load_dll_kernel32();
_imp__FreeConsole = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeConsole");
}
void _elfimplib_FreeConsole() {
asm("leave\njmp *%0" : : "r"(_imp__FreeConsole));
}

