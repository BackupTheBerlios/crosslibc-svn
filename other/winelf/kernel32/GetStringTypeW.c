#include "kernel32.h"
void _elfimplib_GetStringTypeW() asm("GetStringTypeW");
void *_imp__GetStringTypeW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetStringTypeW() {
load_dll_kernel32();
_imp__GetStringTypeW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStringTypeW");
}
void _elfimplib_GetStringTypeW() {
asm("leave\njmp *%0" : : "r"(_imp__GetStringTypeW));
}

