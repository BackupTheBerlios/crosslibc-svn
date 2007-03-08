#include "kernel32.h"
void _elfimplib_GetLocaleInfoW() asm("GetLocaleInfoW");
void *_imp__GetLocaleInfoW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLocaleInfoW() {
load_dll_kernel32();
_imp__GetLocaleInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLocaleInfoW");
}
void _elfimplib_GetLocaleInfoW() {
asm("leave\njmp *%0" : : "r"(_imp__GetLocaleInfoW));
}

