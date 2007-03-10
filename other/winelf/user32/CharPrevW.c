#include "user32.h"
void _elfimplib_CharPrevW() asm("CharPrevW");
void *_imp__CharPrevW = NULL;
__attribute__((constructor)) void _elfimplib_init_CharPrevW() {
load_dll_user32();
_imp__CharPrevW = (void *) _elf_GetProcAddress(_dll_user32, "CharPrevW");
}
void _elfimplib_CharPrevW() {
asm("leave\njmp *%0" : : "r"(_imp__CharPrevW));
}

