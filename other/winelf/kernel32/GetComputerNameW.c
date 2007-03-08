#include "kernel32.h"
void _elfimplib_GetComputerNameW() asm("GetComputerNameW");
void *_imp__GetComputerNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetComputerNameW() {
load_dll_kernel32();
_imp__GetComputerNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetComputerNameW");
}
void _elfimplib_GetComputerNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetComputerNameW));
}

