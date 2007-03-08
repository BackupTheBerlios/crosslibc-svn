#include "kernel32.h"
void _elfimplib_Module32Next() asm("Module32Next");
void *_imp__Module32Next = NULL;
__attribute__((constructor)) void _elfimplib_init_Module32Next() {
load_dll_kernel32();
_imp__Module32Next = (void *) _elf_GetProcAddress(_dll_kernel32, "Module32Next");
}
void _elfimplib_Module32Next() {
asm("leave\njmp *%0" : : "r"(_imp__Module32Next));
}

