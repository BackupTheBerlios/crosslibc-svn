#include "kernel32.h"
void _elfimplib_SwitchToThread() asm("SwitchToThread");
void *_imp__SwitchToThread = NULL;
__attribute__((constructor)) void _elfimplib_init_SwitchToThread() {
load_dll_kernel32();
_imp__SwitchToThread = (void *) _elf_GetProcAddress(_dll_kernel32, "SwitchToThread");
}
void _elfimplib_SwitchToThread() {
asm("leave\njmp *%0" : : "r"(_imp__SwitchToThread));
}

