#include "kernel32.h"
void _elfimplib_Module32FirstW() asm("Module32FirstW");
void *_imp__Module32FirstW = NULL;
__attribute__((constructor)) void _elfimplib_init_Module32FirstW() {
load_dll_kernel32();
_imp__Module32FirstW = (void *) _elf_GetProcAddress(_dll_kernel32, "Module32FirstW");
}
void _elfimplib_Module32FirstW() {
asm("leave\njmp *%0" : : "r"(_imp__Module32FirstW));
}

