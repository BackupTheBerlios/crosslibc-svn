#include "kernel32.h"
void _elfimplib_InterlockedDecrement() asm("InterlockedDecrement");
void *_imp__InterlockedDecrement = NULL;
__attribute__((constructor)) void _elfimplib_init_InterlockedDecrement() {
load_dll_kernel32();
_imp__InterlockedDecrement = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedDecrement");
}
void _elfimplib_InterlockedDecrement() {
asm("leave\njmp *%0" : : "r"(_imp__InterlockedDecrement));
}

