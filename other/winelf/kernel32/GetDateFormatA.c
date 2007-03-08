#include "kernel32.h"
void _elfimplib_GetDateFormatA() asm("GetDateFormatA");
void *_imp__GetDateFormatA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDateFormatA() {
load_dll_kernel32();
_imp__GetDateFormatA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDateFormatA");
}
void _elfimplib_GetDateFormatA() {
asm("leave\njmp *%0" : : "r"(_imp__GetDateFormatA));
}

