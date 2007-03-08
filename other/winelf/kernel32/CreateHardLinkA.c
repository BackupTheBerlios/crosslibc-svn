#include "kernel32.h"
void _elfimplib_CreateHardLinkA() asm("CreateHardLinkA");
void *_imp__CreateHardLinkA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateHardLinkA() {
load_dll_kernel32();
_imp__CreateHardLinkA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateHardLinkA");
}
void _elfimplib_CreateHardLinkA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateHardLinkA));
}

