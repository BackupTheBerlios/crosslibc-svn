#include "user32.h"
void _elfimplib_SetDoubleClickTime() asm("SetDoubleClickTime");
void *_imp__SetDoubleClickTime = NULL;
__attribute__((constructor)) void _elfimplib_init_SetDoubleClickTime() {
load_dll_user32();
_imp__SetDoubleClickTime = (void *) _elf_GetProcAddress(_dll_user32, "SetDoubleClickTime");
}
void _elfimplib_SetDoubleClickTime() {
asm("leave\njmp *%0" : : "r"(_imp__SetDoubleClickTime));
}

