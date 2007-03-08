#include "kernel32.h"
void _elfimplib_GetCurrencyFormatA() asm("GetCurrencyFormatA");
void *_imp__GetCurrencyFormatA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCurrencyFormatA() {
load_dll_kernel32();
_imp__GetCurrencyFormatA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrencyFormatA");
}
void _elfimplib_GetCurrencyFormatA() {
asm("leave\njmp *%0" : : "r"(_imp__GetCurrencyFormatA));
}

