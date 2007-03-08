#include "kernel32.h"
void _elfimplib_CreateEventA() asm("CreateEventA");
void *_imp__CreateEventA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateEventA() {
load_dll_kernel32();
_imp__CreateEventA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateEventA");
}
void _elfimplib_CreateEventA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateEventA));
}

