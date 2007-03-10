#include "user32.h"
void _elfimplib_DefWindowProcW() asm("DefWindowProcW");
void *_imp__DefWindowProcW = NULL;
__attribute__((constructor)) void _elfimplib_init_DefWindowProcW() {
load_dll_user32();
_imp__DefWindowProcW = (void *) _elf_GetProcAddress(_dll_user32, "DefWindowProcW");
}
void _elfimplib_DefWindowProcW() {
asm("leave\njmp *%0" : : "r"(_imp__DefWindowProcW));
}

