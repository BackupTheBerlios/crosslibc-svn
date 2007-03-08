#include "kernel32.h"
void _elfimplib_GetDefaultCommConfigW() asm("GetDefaultCommConfigW");
void *_imp__GetDefaultCommConfigW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDefaultCommConfigW() {
load_dll_kernel32();
_imp__GetDefaultCommConfigW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDefaultCommConfigW");
}
void _elfimplib_GetDefaultCommConfigW() {
asm("leave\njmp *%0" : : "r"(_imp__GetDefaultCommConfigW));
}

