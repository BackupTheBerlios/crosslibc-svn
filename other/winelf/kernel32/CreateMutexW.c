#include "kernel32.h"
void _elfimplib_CreateMutexW() asm("CreateMutexW");
void *_imp__CreateMutexW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateMutexW() {
load_dll_kernel32();
_imp__CreateMutexW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateMutexW");
}
void _elfimplib_CreateMutexW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateMutexW));
}

