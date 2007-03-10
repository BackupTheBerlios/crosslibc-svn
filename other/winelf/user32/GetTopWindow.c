#include "user32.h"
void _elfimplib_GetTopWindow() asm("GetTopWindow");
void *_imp__GetTopWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTopWindow() {
load_dll_user32();
_imp__GetTopWindow = (void *) _elf_GetProcAddress(_dll_user32, "GetTopWindow");
}
void _elfimplib_GetTopWindow() {
asm("leave\njmp *%0" : : "r"(_imp__GetTopWindow));
}

