#include "kernel32.h"
void _elfimplib_OpenMutexA() asm("OpenMutexA");
void *_imp__OpenMutexA = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenMutexA() {
load_dll_kernel32();
_imp__OpenMutexA = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenMutexA");
}
void _elfimplib_OpenMutexA() {
asm("leave\njmp *%0" : : "r"(_imp__OpenMutexA));
}

