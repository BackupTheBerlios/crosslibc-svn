#include "kernel32.h"
void _elfimplib_GetComputerNameExW() asm("GetComputerNameExW");
void *_imp__GetComputerNameExW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetComputerNameExW() {
load_dll_kernel32();
_imp__GetComputerNameExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetComputerNameExW");
}
void _elfimplib_GetComputerNameExW() {
asm("leave\njmp *%0" : : "r"(_imp__GetComputerNameExW));
}

