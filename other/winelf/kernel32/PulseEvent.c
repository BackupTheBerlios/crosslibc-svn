#include "kernel32.h"
void _elfimplib_PulseEvent() asm("PulseEvent");
void *_imp__PulseEvent = NULL;
__attribute__((constructor)) void _elfimplib_init_PulseEvent() {
load_dll_kernel32();
_imp__PulseEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "PulseEvent");
}
void _elfimplib_PulseEvent() {
asm("leave\njmp *%0" : : "r"(_imp__PulseEvent));
}

