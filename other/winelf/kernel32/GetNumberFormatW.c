#include "kernel32.h"
void _elfimplib_GetNumberFormatW() asm("GetNumberFormatW");
void *_imp__GetNumberFormatW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNumberFormatW() {
load_dll_kernel32();
_imp__GetNumberFormatW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumberFormatW");
}
void _elfimplib_GetNumberFormatW() {
asm("leave\njmp *%0" : : "r"(_imp__GetNumberFormatW));
}

