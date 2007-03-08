#include "kernel32.h"
void _elfimplib_GetComputerNameA() asm("GetComputerNameA");
void *_imp__GetComputerNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetComputerNameA() {
load_dll_kernel32();
_imp__GetComputerNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetComputerNameA");
}
void _elfimplib_GetComputerNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetComputerNameA));
}

