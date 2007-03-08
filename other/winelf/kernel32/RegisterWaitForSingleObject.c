#include "kernel32.h"
void _elfimplib_RegisterWaitForSingleObject() asm("RegisterWaitForSingleObject");
void *_imp__RegisterWaitForSingleObject = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterWaitForSingleObject() {
load_dll_kernel32();
_imp__RegisterWaitForSingleObject = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterWaitForSingleObject");
}
void _elfimplib_RegisterWaitForSingleObject() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterWaitForSingleObject));
}

