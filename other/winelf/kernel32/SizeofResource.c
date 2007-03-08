#include "kernel32.h"
void _elfimplib_SizeofResource() asm("SizeofResource");
void *_imp__SizeofResource = NULL;
__attribute__((constructor)) void _elfimplib_init_SizeofResource() {
load_dll_kernel32();
_imp__SizeofResource = (void *) _elf_GetProcAddress(_dll_kernel32, "SizeofResource");
}
void _elfimplib_SizeofResource() {
asm("leave\njmp *%0" : : "r"(_imp__SizeofResource));
}

