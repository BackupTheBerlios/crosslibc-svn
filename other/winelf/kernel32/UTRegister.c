#include "kernel32.h"
void _elfimplib_UTRegister() asm("UTRegister");
void *_imp__UTRegister = NULL;
__attribute__((constructor)) void _elfimplib_init_UTRegister() {
load_dll_kernel32();
_imp__UTRegister = (void *) _elf_GetProcAddress(_dll_kernel32, "UTRegister");
}
void _elfimplib_UTRegister() {
asm("leave\njmp *%0" : : "r"(_imp__UTRegister));
}

