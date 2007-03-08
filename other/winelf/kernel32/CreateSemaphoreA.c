#include "kernel32.h"
void _elfimplib_CreateSemaphoreA() asm("CreateSemaphoreA");
void *_imp__CreateSemaphoreA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateSemaphoreA() {
load_dll_kernel32();
_imp__CreateSemaphoreA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateSemaphoreA");
}
void _elfimplib_CreateSemaphoreA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateSemaphoreA));
}

