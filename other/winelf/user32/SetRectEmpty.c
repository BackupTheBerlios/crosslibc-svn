#include "user32.h"
void _elfimplib_SetRectEmpty() asm("SetRectEmpty");
void *_imp__SetRectEmpty = NULL;
__attribute__((constructor)) void _elfimplib_init_SetRectEmpty() {
load_dll_user32();
_imp__SetRectEmpty = (void *) _elf_GetProcAddress(_dll_user32, "SetRectEmpty");
}
void _elfimplib_SetRectEmpty() {
asm("leave\njmp *%0" : : "r"(_imp__SetRectEmpty));
}

