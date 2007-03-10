#include "user32.h"
void _elfimplib_EqualRect() asm("EqualRect");
void *_imp__EqualRect = NULL;
__attribute__((constructor)) void _elfimplib_init_EqualRect() {
load_dll_user32();
_imp__EqualRect = (void *) _elf_GetProcAddress(_dll_user32, "EqualRect");
}
void _elfimplib_EqualRect() {
asm("leave\njmp *%0" : : "r"(_imp__EqualRect));
}

