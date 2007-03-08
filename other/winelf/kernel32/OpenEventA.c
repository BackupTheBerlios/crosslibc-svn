#include "kernel32.h"
void _elfimplib_OpenEventA() asm("OpenEventA");
void *_imp__OpenEventA = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenEventA() {
load_dll_kernel32();
_imp__OpenEventA = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenEventA");
}
void _elfimplib_OpenEventA() {
asm("leave\njmp *%0" : : "r"(_imp__OpenEventA));
}

