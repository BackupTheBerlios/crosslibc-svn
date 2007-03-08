#include "kernel32.h"
void _elfimplib_GetThreadLocale() asm("GetThreadLocale");
void *_imp__GetThreadLocale = NULL;
__attribute__((constructor)) void _elfimplib_init_GetThreadLocale() {
load_dll_kernel32();
_imp__GetThreadLocale = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadLocale");
}
void _elfimplib_GetThreadLocale() {
asm("leave\njmp *%0" : : "r"(_imp__GetThreadLocale));
}

