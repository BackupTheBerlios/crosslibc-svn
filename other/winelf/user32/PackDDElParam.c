#include "user32.h"
void _elfimplib_PackDDElParam() asm("PackDDElParam");
void *_imp__PackDDElParam = NULL;
__attribute__((constructor)) void _elfimplib_init_PackDDElParam() {
load_dll_user32();
_imp__PackDDElParam = (void *) _elf_GetProcAddress(_dll_user32, "PackDDElParam");
}
void _elfimplib_PackDDElParam() {
asm("leave\njmp *%0" : : "r"(_imp__PackDDElParam));
}

