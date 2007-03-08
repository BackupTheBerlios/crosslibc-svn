#include "kernel32.h"
void _elfimplib_CreateMailslotA() asm("CreateMailslotA");
void *_imp__CreateMailslotA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateMailslotA() {
load_dll_kernel32();
_imp__CreateMailslotA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateMailslotA");
}
void _elfimplib_CreateMailslotA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateMailslotA));
}

