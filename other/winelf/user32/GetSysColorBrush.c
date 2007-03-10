#include "user32.h"
void _elfimplib_GetSysColorBrush() asm("GetSysColorBrush");
void *_imp__GetSysColorBrush = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSysColorBrush() {
load_dll_user32();
_imp__GetSysColorBrush = (void *) _elf_GetProcAddress(_dll_user32, "GetSysColorBrush");
}
void _elfimplib_GetSysColorBrush() {
asm("leave\njmp *%0" : : "r"(_imp__GetSysColorBrush));
}

