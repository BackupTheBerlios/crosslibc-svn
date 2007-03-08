#include "msvcrt.h"
void _elfimplib__get_sbh_threshold() asm("get_sbh_threshold");
void *_imp___get_sbh_threshold = NULL;
__attribute__((constructor)) void _elfimplib_init__get_sbh_threshold() {
load_dll_msvcrt();
_imp___get_sbh_threshold = (void *) _elf_GetProcAddress(_dll_msvcrt, "_get_sbh_threshold");
}
void _elfimplib__get_sbh_threshold() {
asm("leave\njmp *%0" : : "r"(_imp___get_sbh_threshold));
}

