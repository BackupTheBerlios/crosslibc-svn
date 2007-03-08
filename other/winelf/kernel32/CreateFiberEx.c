#include "kernel32.h"
void _elfimplib_CreateFiberEx() asm("CreateFiberEx");
void *_imp__CreateFiberEx = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateFiberEx() {
load_dll_kernel32();
_imp__CreateFiberEx = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateFiberEx");
}
void _elfimplib_CreateFiberEx() {
asm("leave\njmp *%0" : : "r"(_imp__CreateFiberEx));
}

