#include "kernel32.h"
void _elfimplib_EraseTape() asm("EraseTape");
void *_imp__EraseTape = NULL;
__attribute__((constructor)) void _elfimplib_init_EraseTape() {
load_dll_kernel32();
_imp__EraseTape = (void *) _elf_GetProcAddress(_dll_kernel32, "EraseTape");
}
void _elfimplib_EraseTape() {
asm("leave\njmp *%0" : : "r"(_imp__EraseTape));
}

