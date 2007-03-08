#include "kernel32.h"
void _elfimplib_Sleep() asm("Sleep");
void *_imp__Sleep = NULL;
__attribute__((constructor)) void _elfimplib_init_Sleep() {
load_dll_kernel32();
_imp__Sleep = (void *) _elf_GetProcAddress(_dll_kernel32, "Sleep");
}
void _elfimplib_Sleep() {
asm("leave\njmp *%0" : : "r"(_imp__Sleep));
}

