#include "kernel32.h"
void _elfimplib_GetUserDefaultLangID() asm("GetUserDefaultLangID");
void *_imp__GetUserDefaultLangID = NULL;
__attribute__((constructor)) void _elfimplib_init_GetUserDefaultLangID() {
load_dll_kernel32();
_imp__GetUserDefaultLangID = (void *) _elf_GetProcAddress(_dll_kernel32, "GetUserDefaultLangID");
}
void _elfimplib_GetUserDefaultLangID() {
asm("leave\njmp *%0" : : "r"(_imp__GetUserDefaultLangID));
}

