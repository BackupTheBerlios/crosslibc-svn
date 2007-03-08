#include "kernel32.h"
void _elfimplib_OpenSemaphoreA() asm("OpenSemaphoreA");
void *_imp__OpenSemaphoreA = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenSemaphoreA() {
load_dll_kernel32();
_imp__OpenSemaphoreA = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenSemaphoreA");
}
void _elfimplib_OpenSemaphoreA() {
asm("leave\njmp *%0" : : "r"(_imp__OpenSemaphoreA));
}

