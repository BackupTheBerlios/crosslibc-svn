#include "kernel32.h"
void _elfimplib_OpenMutexW() asm("OpenMutexW");
void *_imp__OpenMutexW = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenMutexW() {
load_dll_kernel32();
_imp__OpenMutexW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenMutexW");
}
void _elfimplib_OpenMutexW() {
asm("leave\njmp *%0" : : "r"(_imp__OpenMutexW));
}

