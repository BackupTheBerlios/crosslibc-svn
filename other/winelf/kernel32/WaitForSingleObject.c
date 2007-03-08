#include "kernel32.h"
void _elfimplib_WaitForSingleObject() asm("WaitForSingleObject");
void *_imp__WaitForSingleObject = NULL;
__attribute__((constructor)) void _elfimplib_init_WaitForSingleObject() {
load_dll_kernel32();
_imp__WaitForSingleObject = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitForSingleObject");
}
void _elfimplib_WaitForSingleObject() {
asm("leave\njmp *%0" : : "r"(_imp__WaitForSingleObject));
}

