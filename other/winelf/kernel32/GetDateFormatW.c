#include "kernel32.h"
void _elfimplib_GetDateFormatW() asm("GetDateFormatW");
void *_imp__GetDateFormatW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDateFormatW() {
load_dll_kernel32();
_imp__GetDateFormatW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDateFormatW");
}
void _elfimplib_GetDateFormatW() {
asm("leave\njmp *%0" : : "r"(_imp__GetDateFormatW));
}

