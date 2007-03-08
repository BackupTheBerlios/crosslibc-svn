#include "kernel32.h"
void _elfimplib_LocalFlags() asm("LocalFlags");
void *_imp__LocalFlags = NULL;
__attribute__((constructor)) void _elfimplib_init_LocalFlags() {
load_dll_kernel32();
_imp__LocalFlags = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalFlags");
}
void _elfimplib_LocalFlags() {
asm("leave\njmp *%0" : : "r"(_imp__LocalFlags));
}

