#include "kernel32.h"
void _elfimplib_AddLocalAlternateComputerNameA() asm("AddLocalAlternateComputerNameA");
void *_imp__AddLocalAlternateComputerNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_AddLocalAlternateComputerNameA() {
load_dll_kernel32();
_imp__AddLocalAlternateComputerNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "AddLocalAlternateComputerNameA");
}
void _elfimplib_AddLocalAlternateComputerNameA() {
asm("leave\njmp *%0" : : "r"(_imp__AddLocalAlternateComputerNameA));
}

