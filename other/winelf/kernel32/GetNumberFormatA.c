#include "kernel32.h"
void _elfimplib_GetNumberFormatA() asm("GetNumberFormatA");
void *_imp__GetNumberFormatA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNumberFormatA() {
load_dll_kernel32();
_imp__GetNumberFormatA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumberFormatA");
}
void _elfimplib_GetNumberFormatA() {
asm("leave\njmp *%0" : : "r"(_imp__GetNumberFormatA));
}

