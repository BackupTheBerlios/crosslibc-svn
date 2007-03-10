#include "user32.h"
void _elfimplib_CallWindowProcW() asm("CallWindowProcW");
void *_imp__CallWindowProcW = NULL;
__attribute__((constructor)) void _elfimplib_init_CallWindowProcW() {
load_dll_user32();
_imp__CallWindowProcW = (void *) _elf_GetProcAddress(_dll_user32, "CallWindowProcW");
}
void _elfimplib_CallWindowProcW() {
asm("leave\njmp *%0" : : "r"(_imp__CallWindowProcW));
}

