#include "user32.h"
void _elfimplib_ScrollWindowEx() asm("ScrollWindowEx");
void *_imp__ScrollWindowEx = NULL;
__attribute__((constructor)) void _elfimplib_init_ScrollWindowEx() {
load_dll_user32();
_imp__ScrollWindowEx = (void *) _elf_GetProcAddress(_dll_user32, "ScrollWindowEx");
}
void _elfimplib_ScrollWindowEx() {
asm("leave\njmp *%0" : : "r"(_imp__ScrollWindowEx));
}

