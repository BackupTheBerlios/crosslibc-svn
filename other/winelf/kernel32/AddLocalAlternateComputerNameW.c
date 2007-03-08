#include "kernel32.h"
void _elfimplib_AddLocalAlternateComputerNameW() asm("AddLocalAlternateComputerNameW");
void *_imp__AddLocalAlternateComputerNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_AddLocalAlternateComputerNameW() {
load_dll_kernel32();
_imp__AddLocalAlternateComputerNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "AddLocalAlternateComputerNameW");
}
void _elfimplib_AddLocalAlternateComputerNameW() {
asm("leave\njmp *%0" : : "r"(_imp__AddLocalAlternateComputerNameW));
}

