#include "user32.h"
void _elfimplib_ScrollChildren() asm("ScrollChildren");
void *_imp__ScrollChildren = NULL;
__attribute__((constructor)) void _elfimplib_init_ScrollChildren() {
load_dll_user32();
_imp__ScrollChildren = (void *) _elf_GetProcAddress(_dll_user32, "ScrollChildren");
}
void _elfimplib_ScrollChildren() {
asm("leave\njmp *%0" : : "r"(_imp__ScrollChildren));
}

