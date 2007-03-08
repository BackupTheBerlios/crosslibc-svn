#include "kernel32.h"
void _elfimplib_SetComputerNameExA() asm("SetComputerNameExA");
void *_imp__SetComputerNameExA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetComputerNameExA() {
load_dll_kernel32();
_imp__SetComputerNameExA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetComputerNameExA");
}
void _elfimplib_SetComputerNameExA() {
asm("leave\njmp *%0" : : "r"(_imp__SetComputerNameExA));
}

