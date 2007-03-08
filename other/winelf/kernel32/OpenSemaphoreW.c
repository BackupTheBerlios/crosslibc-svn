#include "kernel32.h"
void _elfimplib_OpenSemaphoreW() asm("OpenSemaphoreW");
void *_imp__OpenSemaphoreW = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenSemaphoreW() {
load_dll_kernel32();
_imp__OpenSemaphoreW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenSemaphoreW");
}
void _elfimplib_OpenSemaphoreW() {
asm("leave\njmp *%0" : : "r"(_imp__OpenSemaphoreW));
}

