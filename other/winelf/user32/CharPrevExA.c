#include "user32.h"
void _elfimplib_CharPrevExA() asm("CharPrevExA");
void *_imp__CharPrevExA = NULL;
__attribute__((constructor)) void _elfimplib_init_CharPrevExA() {
load_dll_user32();
_imp__CharPrevExA = (void *) _elf_GetProcAddress(_dll_user32, "CharPrevExA");
}
void _elfimplib_CharPrevExA() {
asm("leave\njmp *%0" : : "r"(_imp__CharPrevExA));
}

