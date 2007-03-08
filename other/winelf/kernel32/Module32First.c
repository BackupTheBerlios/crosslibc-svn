#include "kernel32.h"
void _elfimplib_Module32First() asm("Module32First");
void *_imp__Module32First = NULL;
__attribute__((constructor)) void _elfimplib_init_Module32First() {
load_dll_kernel32();
_imp__Module32First = (void *) _elf_GetProcAddress(_dll_kernel32, "Module32First");
}
void _elfimplib_Module32First() {
asm("leave\njmp *%0" : : "r"(_imp__Module32First));
}

