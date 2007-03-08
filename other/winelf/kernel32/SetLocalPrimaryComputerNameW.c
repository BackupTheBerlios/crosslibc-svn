#include "kernel32.h"
void _elfimplib_SetLocalPrimaryComputerNameW() asm("SetLocalPrimaryComputerNameW");
void *_imp__SetLocalPrimaryComputerNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetLocalPrimaryComputerNameW() {
load_dll_kernel32();
_imp__SetLocalPrimaryComputerNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLocalPrimaryComputerNameW");
}
void _elfimplib_SetLocalPrimaryComputerNameW() {
asm("leave\njmp *%0" : : "r"(_imp__SetLocalPrimaryComputerNameW));
}

