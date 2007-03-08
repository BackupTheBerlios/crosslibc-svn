#include "kernel32.h"
void _elfimplib_InitializeSListHead() asm("InitializeSListHead");
void *_imp__InitializeSListHead = NULL;
__attribute__((constructor)) void _elfimplib_init_InitializeSListHead() {
load_dll_kernel32();
_imp__InitializeSListHead = (void *) _elf_GetProcAddress(_dll_kernel32, "InitializeSListHead");
}
void _elfimplib_InitializeSListHead() {
asm("leave\njmp *%0" : : "r"(_imp__InitializeSListHead));
}

