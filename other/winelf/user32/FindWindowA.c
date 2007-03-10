#include "user32.h"
void _elfimplib_FindWindowA() asm("FindWindowA");
void *_imp__FindWindowA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindWindowA() {
load_dll_user32();
_imp__FindWindowA = (void *) _elf_GetProcAddress(_dll_user32, "FindWindowA");
}
void _elfimplib_FindWindowA() {
asm("leave\njmp *%0" : : "r"(_imp__FindWindowA));
}

