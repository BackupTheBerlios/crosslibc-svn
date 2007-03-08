#include "kernel32.h"
void _elfimplib_ReleaseMutex() asm("ReleaseMutex");
void *_imp__ReleaseMutex = NULL;
__attribute__((constructor)) void _elfimplib_init_ReleaseMutex() {
load_dll_kernel32();
_imp__ReleaseMutex = (void *) _elf_GetProcAddress(_dll_kernel32, "ReleaseMutex");
}
void _elfimplib_ReleaseMutex() {
asm("leave\njmp *%0" : : "r"(_imp__ReleaseMutex));
}

