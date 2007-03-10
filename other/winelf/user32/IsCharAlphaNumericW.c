#include "user32.h"
void _elfimplib_IsCharAlphaNumericW() asm("IsCharAlphaNumericW");
void *_imp__IsCharAlphaNumericW = NULL;
__attribute__((constructor)) void _elfimplib_init_IsCharAlphaNumericW() {
load_dll_user32();
_imp__IsCharAlphaNumericW = (void *) _elf_GetProcAddress(_dll_user32, "IsCharAlphaNumericW");
}
void _elfimplib_IsCharAlphaNumericW() {
asm("leave\njmp *%0" : : "r"(_imp__IsCharAlphaNumericW));
}

