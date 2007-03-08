#include "kernel32.h"
void _elfimplib_CreateMutexA() asm("CreateMutexA");
void *_imp__CreateMutexA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateMutexA() {
load_dll_kernel32();
_imp__CreateMutexA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateMutexA");
}
void _elfimplib_CreateMutexA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateMutexA));
}

