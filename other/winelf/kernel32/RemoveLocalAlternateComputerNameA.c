#include "kernel32.h"
void _elfimplib_RemoveLocalAlternateComputerNameA() asm("RemoveLocalAlternateComputerNameA");
void *_imp__RemoveLocalAlternateComputerNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_RemoveLocalAlternateComputerNameA() {
load_dll_kernel32();
_imp__RemoveLocalAlternateComputerNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "RemoveLocalAlternateComputerNameA");
}
void _elfimplib_RemoveLocalAlternateComputerNameA() {
asm("leave\njmp *%0" : : "r"(_imp__RemoveLocalAlternateComputerNameA));
}

