#include "kernel32.h"
void _elfimplib_SetComputerNameExW() asm("SetComputerNameExW");
void *_imp__SetComputerNameExW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetComputerNameExW() {
load_dll_kernel32();
_imp__SetComputerNameExW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetComputerNameExW");
}
void _elfimplib_SetComputerNameExW() {
asm("leave\njmp *%0" : : "r"(_imp__SetComputerNameExW));
}

