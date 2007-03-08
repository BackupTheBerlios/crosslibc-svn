#include "kernel32.h"
void _elfimplib_OpenConsoleW() asm("OpenConsoleW");
void *_imp__OpenConsoleW = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenConsoleW() {
load_dll_kernel32();
_imp__OpenConsoleW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenConsoleW");
}
void _elfimplib_OpenConsoleW() {
asm("leave\njmp *%0" : : "r"(_imp__OpenConsoleW));
}

