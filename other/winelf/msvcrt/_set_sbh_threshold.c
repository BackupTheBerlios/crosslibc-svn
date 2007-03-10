#include "msvcrt.h"
void _elfimplib__set_sbh_threshold() asm("set_sbh_threshold");
void *_imp___set_sbh_threshold = NULL;
__attribute__((constructor)) void _elfimplib_init__set_sbh_threshold() {
load_dll_msvcrt();
_imp___set_sbh_threshold = (void *) _elf_GetProcAddress(_dll_msvcrt, "_set_sbh_threshold");
}
void _elfimplib__set_sbh_threshold() {
asm("leave\njmp *%0" : : "r"(_imp___set_sbh_threshold));
}

void _elfimplibmang__set_sbh_threshold() asm("_set_sbh_threshold");
void _elfimplibmang__set_sbh_threshold() {
asm("leave\njmp *%0" : : "r"(_imp___set_sbh_threshold));
}

