#include "kernel32.h"
void _elfimplib_GetTimeFormatA() asm("GetTimeFormatA");
void *_imp__GetTimeFormatA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTimeFormatA() {
load_dll_kernel32();
_imp__GetTimeFormatA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTimeFormatA");
}
void _elfimplib_GetTimeFormatA() {
asm("leave\njmp *%0" : : "r"(_imp__GetTimeFormatA));
}

