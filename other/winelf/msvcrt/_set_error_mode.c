#include "msvcrt.h"
void _elfimplib__set_error_mode() asm("set_error_mode");
void *_imp___set_error_mode = NULL;
__attribute__((constructor)) void _elfimplib_init__set_error_mode() {
load_dll_msvcrt();
_imp___set_error_mode = (void *) _elf_GetProcAddress(_dll_msvcrt, "_set_error_mode");
}
void _elfimplib__set_error_mode() {
asm("leave\njmp *%0" : : "r"(_imp___set_error_mode));
}

void _elfimplibmang__set_error_mode() asm("_set_error_mode");
void _elfimplibmang__set_error_mode() {
asm("leave\njmp *%0" : : "r"(_imp___set_error_mode));
}

