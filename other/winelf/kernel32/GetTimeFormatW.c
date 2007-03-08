#include "kernel32.h"
void _elfimplib_GetTimeFormatW() asm("GetTimeFormatW");
void *_imp__GetTimeFormatW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTimeFormatW() {
load_dll_kernel32();
_imp__GetTimeFormatW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTimeFormatW");
}
void _elfimplib_GetTimeFormatW() {
asm("leave\njmp *%0" : : "r"(_imp__GetTimeFormatW));
}

