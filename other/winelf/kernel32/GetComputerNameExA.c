#include "kernel32.h"
void _elfimplib_GetComputerNameExA() asm("GetComputerNameExA");
void *_imp__GetComputerNameExA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetComputerNameExA() {
load_dll_kernel32();
_imp__GetComputerNameExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetComputerNameExA");
}
void _elfimplib_GetComputerNameExA() {
asm("leave\njmp *%0" : : "r"(_imp__GetComputerNameExA));
}

