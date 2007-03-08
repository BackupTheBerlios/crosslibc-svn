#include "kernel32.h"
void _elfimplib_SetComputerNameW() asm("SetComputerNameW");
void *_imp__SetComputerNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetComputerNameW() {
load_dll_kernel32();
_imp__SetComputerNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetComputerNameW");
}
void _elfimplib_SetComputerNameW() {
asm("leave\njmp *%0" : : "r"(_imp__SetComputerNameW));
}

