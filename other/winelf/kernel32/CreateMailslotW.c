#include "kernel32.h"
void _elfimplib_CreateMailslotW() asm("CreateMailslotW");
void *_imp__CreateMailslotW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateMailslotW() {
load_dll_kernel32();
_imp__CreateMailslotW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateMailslotW");
}
void _elfimplib_CreateMailslotW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateMailslotW));
}

