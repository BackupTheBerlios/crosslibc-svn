#include "kernel32.h"
void _elfimplib_EnumerateLocalComputerNamesA() asm("EnumerateLocalComputerNamesA");
void *_imp__EnumerateLocalComputerNamesA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumerateLocalComputerNamesA() {
load_dll_kernel32();
_imp__EnumerateLocalComputerNamesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumerateLocalComputerNamesA");
}
void _elfimplib_EnumerateLocalComputerNamesA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumerateLocalComputerNamesA));
}

