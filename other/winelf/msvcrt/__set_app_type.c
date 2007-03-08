#include "msvcrt.h"
void _elfimplib___set_app_type() asm("_set_app_type");
void *_imp____set_app_type = NULL;
__attribute__((constructor)) void _elfimplib_init___set_app_type() {
load_dll_msvcrt();
_imp____set_app_type = (void *) _elf_GetProcAddress(_dll_msvcrt, "__set_app_type");
}
void _elfimplib___set_app_type() {
asm("leave\njmp *%0" : : "r"(_imp____set_app_type));
}

