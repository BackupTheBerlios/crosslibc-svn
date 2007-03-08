#include "kernel32.h"
void _elfimplib_Module32NextW() asm("Module32NextW");
void *_imp__Module32NextW = NULL;
__attribute__((constructor)) void _elfimplib_init_Module32NextW() {
load_dll_kernel32();
_imp__Module32NextW = (void *) _elf_GetProcAddress(_dll_kernel32, "Module32NextW");
}
void _elfimplib_Module32NextW() {
asm("leave\njmp *%0" : : "r"(_imp__Module32NextW));
}

