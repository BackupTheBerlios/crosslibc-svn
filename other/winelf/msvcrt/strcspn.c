#include "msvcrt.h"
void _elfimplib_strcspn() asm("strcspn");
void *_imp__strcspn = NULL;
__attribute__((constructor)) void _elfimplib_init_strcspn() {
load_dll_msvcrt();
_imp__strcspn = (void *) _elf_GetProcAddress(_dll_msvcrt, "strcspn");
}
void _elfimplib_strcspn() {
asm("leave\njmp *%0" : : "r"(_imp__strcspn));
}

