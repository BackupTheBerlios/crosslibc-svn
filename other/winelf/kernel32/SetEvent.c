#include "kernel32.h"
void _elfimplib_SetEvent() asm("SetEvent");
void *_imp__SetEvent = NULL;
__attribute__((constructor)) void _elfimplib_init_SetEvent() {
load_dll_kernel32();
_imp__SetEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "SetEvent");
}
void _elfimplib_SetEvent() {
asm("leave\njmp *%0" : : "r"(_imp__SetEvent));
}

