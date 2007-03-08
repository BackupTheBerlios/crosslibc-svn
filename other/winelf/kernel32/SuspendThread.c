#include "kernel32.h"
void _elfimplib_SuspendThread() asm("SuspendThread");
void *_imp__SuspendThread = NULL;
__attribute__((constructor)) void _elfimplib_init_SuspendThread() {
load_dll_kernel32();
_imp__SuspendThread = (void *) _elf_GetProcAddress(_dll_kernel32, "SuspendThread");
}
void _elfimplib_SuspendThread() {
asm("leave\njmp *%0" : : "r"(_imp__SuspendThread));
}

