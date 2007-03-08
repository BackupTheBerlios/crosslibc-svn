#include "kernel32.h"
void _elfimplib_CreateFiber() asm("CreateFiber");
void *_imp__CreateFiber = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateFiber() {
load_dll_kernel32();
_imp__CreateFiber = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateFiber");
}
void _elfimplib_CreateFiber() {
asm("leave\njmp *%0" : : "r"(_imp__CreateFiber));
}

