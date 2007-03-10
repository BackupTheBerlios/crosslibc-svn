#include "user32.h"
void _elfimplib_GetUpdateRect() asm("GetUpdateRect");
void *_imp__GetUpdateRect = NULL;
__attribute__((constructor)) void _elfimplib_init_GetUpdateRect() {
load_dll_user32();
_imp__GetUpdateRect = (void *) _elf_GetProcAddress(_dll_user32, "GetUpdateRect");
}
void _elfimplib_GetUpdateRect() {
asm("leave\njmp *%0" : : "r"(_imp__GetUpdateRect));
}

