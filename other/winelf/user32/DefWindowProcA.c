#include "user32.h"
void _elfimplib_DefWindowProcA() asm("DefWindowProcA");
void *_imp__DefWindowProcA = NULL;
__attribute__((constructor)) void _elfimplib_init_DefWindowProcA() {
load_dll_user32();
_imp__DefWindowProcA = (void *) _elf_GetProcAddress(_dll_user32, "DefWindowProcA");
}
void _elfimplib_DefWindowProcA() {
asm("leave\njmp *%0" : : "r"(_imp__DefWindowProcA));
}

