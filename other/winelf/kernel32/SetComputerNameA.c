#include "kernel32.h"
void _elfimplib_SetComputerNameA() asm("SetComputerNameA");
void *_imp__SetComputerNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetComputerNameA() {
load_dll_kernel32();
_imp__SetComputerNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetComputerNameA");
}
void _elfimplib_SetComputerNameA() {
asm("leave\njmp *%0" : : "r"(_imp__SetComputerNameA));
}

