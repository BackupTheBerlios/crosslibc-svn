#include "kernel32.h"
void _elfimplib_GetCurrencyFormatW() asm("GetCurrencyFormatW");
void *_imp__GetCurrencyFormatW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCurrencyFormatW() {
load_dll_kernel32();
_imp__GetCurrencyFormatW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrencyFormatW");
}
void _elfimplib_GetCurrencyFormatW() {
asm("leave\njmp *%0" : : "r"(_imp__GetCurrencyFormatW));
}

