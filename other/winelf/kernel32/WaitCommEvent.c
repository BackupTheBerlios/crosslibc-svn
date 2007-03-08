#include "kernel32.h"
void _elfimplib_WaitCommEvent() asm("WaitCommEvent");
void *_imp__WaitCommEvent = NULL;
__attribute__((constructor)) void _elfimplib_init_WaitCommEvent() {
load_dll_kernel32();
_imp__WaitCommEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitCommEvent");
}
void _elfimplib_WaitCommEvent() {
asm("leave\njmp *%0" : : "r"(_imp__WaitCommEvent));
}

