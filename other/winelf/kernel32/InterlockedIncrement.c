#include "kernel32.h"
void _elfimplib_InterlockedIncrement() asm("InterlockedIncrement");
void *_imp__InterlockedIncrement = NULL;
__attribute__((constructor)) void _elfimplib_init_InterlockedIncrement() {
load_dll_kernel32();
_imp__InterlockedIncrement = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedIncrement");
}
void _elfimplib_InterlockedIncrement() {
asm("leave\njmp *%0" : : "r"(_imp__InterlockedIncrement));
}

