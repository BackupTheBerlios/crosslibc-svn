#include "kernel32.h"
void _elfimplib_UTUnRegister() asm("UTUnRegister");
void *_imp__UTUnRegister = NULL;
__attribute__((constructor)) void _elfimplib_init_UTUnRegister() {
load_dll_kernel32();
_imp__UTUnRegister = (void *) _elf_GetProcAddress(_dll_kernel32, "UTUnRegister");
}
void _elfimplib_UTUnRegister() {
asm("leave\njmp *%0" : : "r"(_imp__UTUnRegister));
}

