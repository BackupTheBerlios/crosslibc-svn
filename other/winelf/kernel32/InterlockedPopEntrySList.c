#include "kernel32.h"
void _elfimplib_InterlockedPopEntrySList() asm("InterlockedPopEntrySList");
void *_imp__InterlockedPopEntrySList = NULL;
__attribute__((constructor)) void _elfimplib_init_InterlockedPopEntrySList() {
load_dll_kernel32();
_imp__InterlockedPopEntrySList = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedPopEntrySList");
}
void _elfimplib_InterlockedPopEntrySList() {
asm("leave\njmp *%0" : : "r"(_imp__InterlockedPopEntrySList));
}

