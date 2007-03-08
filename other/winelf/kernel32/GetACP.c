#include "kernel32.h"
void _elfimplib_GetACP() asm("GetACP");
void *_imp__GetACP = NULL;
__attribute__((constructor)) void _elfimplib_init_GetACP() {
load_dll_kernel32();
_imp__GetACP = (void *) _elf_GetProcAddress(_dll_kernel32, "GetACP");
}
void _elfimplib_GetACP() {
asm("leave\njmp *%0" : : "r"(_imp__GetACP));
}

