#include "kernel32.h"
void _elfimplib_RemoveLocalAlternateComputerNameW() asm("RemoveLocalAlternateComputerNameW");
void *_imp__RemoveLocalAlternateComputerNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_RemoveLocalAlternateComputerNameW() {
load_dll_kernel32();
_imp__RemoveLocalAlternateComputerNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "RemoveLocalAlternateComputerNameW");
}
void _elfimplib_RemoveLocalAlternateComputerNameW() {
asm("leave\njmp *%0" : : "r"(_imp__RemoveLocalAlternateComputerNameW));
}

