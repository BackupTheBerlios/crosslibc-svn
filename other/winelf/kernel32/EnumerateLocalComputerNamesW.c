#include "kernel32.h"
void _elfimplib_EnumerateLocalComputerNamesW() asm("EnumerateLocalComputerNamesW");
void *_imp__EnumerateLocalComputerNamesW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumerateLocalComputerNamesW() {
load_dll_kernel32();
_imp__EnumerateLocalComputerNamesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumerateLocalComputerNamesW");
}
void _elfimplib_EnumerateLocalComputerNamesW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumerateLocalComputerNamesW));
}

