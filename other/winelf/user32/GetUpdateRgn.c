#include "user32.h"
void _elfimplib_GetUpdateRgn() asm("GetUpdateRgn");
void *_imp__GetUpdateRgn = NULL;
__attribute__((constructor)) void _elfimplib_init_GetUpdateRgn() {
load_dll_user32();
_imp__GetUpdateRgn = (void *) _elf_GetProcAddress(_dll_user32, "GetUpdateRgn");
}
void _elfimplib_GetUpdateRgn() {
asm("leave\njmp *%0" : : "r"(_imp__GetUpdateRgn));
}

