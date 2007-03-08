#include "kernel32.h"
void _elfimplib_GetSystemDefaultLangID() asm("GetSystemDefaultLangID");
void *_imp__GetSystemDefaultLangID = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemDefaultLangID() {
load_dll_kernel32();
_imp__GetSystemDefaultLangID = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemDefaultLangID");
}
void _elfimplib_GetSystemDefaultLangID() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemDefaultLangID));
}

