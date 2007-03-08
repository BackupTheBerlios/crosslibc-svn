#include "msvcrt.h"
void _elfimplib_isleadbyte() asm("isleadbyte");
void *_imp__isleadbyte = NULL;
__attribute__((constructor)) void _elfimplib_init_isleadbyte() {
load_dll_msvcrt();
_imp__isleadbyte = (void *) _elf_GetProcAddress(_dll_msvcrt, "isleadbyte");
}
void _elfimplib_isleadbyte() {
asm("leave\njmp *%0" : : "r"(_imp__isleadbyte));
}

