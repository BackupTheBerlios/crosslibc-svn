#include "user32.h"
void _elfimplib_WCSToMBEx() asm("WCSToMBEx");
void *_imp__WCSToMBEx = NULL;
__attribute__((constructor)) void _elfimplib_init_WCSToMBEx() {
load_dll_user32();
_imp__WCSToMBEx = (void *) _elf_GetProcAddress(_dll_user32, "WCSToMBEx");
}
void _elfimplib_WCSToMBEx() {
asm("leave\njmp *%0" : : "r"(_imp__WCSToMBEx));
}

