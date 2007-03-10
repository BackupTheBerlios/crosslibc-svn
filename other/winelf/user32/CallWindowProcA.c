#include "user32.h"
void _elfimplib_CallWindowProcA() asm("CallWindowProcA");
void *_imp__CallWindowProcA = NULL;
__attribute__((constructor)) void _elfimplib_init_CallWindowProcA() {
load_dll_user32();
_imp__CallWindowProcA = (void *) _elf_GetProcAddress(_dll_user32, "CallWindowProcA");
}
void _elfimplib_CallWindowProcA() {
asm("leave\njmp *%0" : : "r"(_imp__CallWindowProcA));
}

