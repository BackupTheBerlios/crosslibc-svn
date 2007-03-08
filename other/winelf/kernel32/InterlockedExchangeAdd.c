#include "kernel32.h"
void _elfimplib_InterlockedExchangeAdd() asm("InterlockedExchangeAdd");
void *_imp__InterlockedExchangeAdd = NULL;
__attribute__((constructor)) void _elfimplib_init_InterlockedExchangeAdd() {
load_dll_kernel32();
_imp__InterlockedExchangeAdd = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedExchangeAdd");
}
void _elfimplib_InterlockedExchangeAdd() {
asm("leave\njmp *%0" : : "r"(_imp__InterlockedExchangeAdd));
}

