#include "kernel32.h"
void _elfimplib_ConvertDefaultLocale() asm("ConvertDefaultLocale");
void *_imp__ConvertDefaultLocale = NULL;
__attribute__((constructor)) void _elfimplib_init_ConvertDefaultLocale() {
load_dll_kernel32();
_imp__ConvertDefaultLocale = (void *) _elf_GetProcAddress(_dll_kernel32, "ConvertDefaultLocale");
}
void _elfimplib_ConvertDefaultLocale() {
asm("leave\njmp *%0" : : "r"(_imp__ConvertDefaultLocale));
}

