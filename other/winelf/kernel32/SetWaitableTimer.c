#include "kernel32.h"
void _elfimplib_SetWaitableTimer() asm("SetWaitableTimer");
void *_imp__SetWaitableTimer = NULL;
__attribute__((constructor)) void _elfimplib_init_SetWaitableTimer() {
load_dll_kernel32();
_imp__SetWaitableTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "SetWaitableTimer");
}
void _elfimplib_SetWaitableTimer() {
asm("leave\njmp *%0" : : "r"(_imp__SetWaitableTimer));
}

