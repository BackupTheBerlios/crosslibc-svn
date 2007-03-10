#include "user32.h"
void _elfimplib_FindWindowW() asm("FindWindowW");
void *_imp__FindWindowW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindWindowW() {
load_dll_user32();
_imp__FindWindowW = (void *) _elf_GetProcAddress(_dll_user32, "FindWindowW");
}
void _elfimplib_FindWindowW() {
asm("leave\njmp *%0" : : "r"(_imp__FindWindowW));
}

