#include "kernel32.h"
void _elfimplib_SetLocalPrimaryComputerNameA() asm("SetLocalPrimaryComputerNameA");
void *_imp__SetLocalPrimaryComputerNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetLocalPrimaryComputerNameA() {
load_dll_kernel32();
_imp__SetLocalPrimaryComputerNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLocalPrimaryComputerNameA");
}
void _elfimplib_SetLocalPrimaryComputerNameA() {
asm("leave\njmp *%0" : : "r"(_imp__SetLocalPrimaryComputerNameA));
}

