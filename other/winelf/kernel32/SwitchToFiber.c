#include "kernel32.h"
void _elfimplib_SwitchToFiber() asm("SwitchToFiber");
void *_imp__SwitchToFiber = NULL;
__attribute__((constructor)) void _elfimplib_init_SwitchToFiber() {
load_dll_kernel32();
_imp__SwitchToFiber = (void *) _elf_GetProcAddress(_dll_kernel32, "SwitchToFiber");
}
void _elfimplib_SwitchToFiber() {
asm("leave\njmp *%0" : : "r"(_imp__SwitchToFiber));
}

