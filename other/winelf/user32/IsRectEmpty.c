#include "user32.h"
void _elfimplib_IsRectEmpty() asm("IsRectEmpty");
void *_imp__IsRectEmpty = NULL;
__attribute__((constructor)) void _elfimplib_init_IsRectEmpty() {
load_dll_user32();
_imp__IsRectEmpty = (void *) _elf_GetProcAddress(_dll_user32, "IsRectEmpty");
}
void _elfimplib_IsRectEmpty() {
asm("leave\njmp *%0" : : "r"(_imp__IsRectEmpty));
}

