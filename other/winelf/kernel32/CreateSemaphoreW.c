#include "kernel32.h"
void _elfimplib_CreateSemaphoreW() asm("CreateSemaphoreW");
void *_imp__CreateSemaphoreW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateSemaphoreW() {
load_dll_kernel32();
_imp__CreateSemaphoreW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateSemaphoreW");
}
void _elfimplib_CreateSemaphoreW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateSemaphoreW));
}

