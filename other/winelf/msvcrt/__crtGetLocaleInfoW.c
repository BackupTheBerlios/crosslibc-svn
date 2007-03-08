#include "msvcrt.h"
void _elfimplib___crtGetLocaleInfoW() asm("_crtGetLocaleInfoW");
void *_imp____crtGetLocaleInfoW = NULL;
__attribute__((constructor)) void _elfimplib_init___crtGetLocaleInfoW() {
load_dll_msvcrt();
_imp____crtGetLocaleInfoW = (void *) _elf_GetProcAddress(_dll_msvcrt, "__crtGetLocaleInfoW");
}
void _elfimplib___crtGetLocaleInfoW() {
asm("leave\njmp *%0" : : "r"(_imp____crtGetLocaleInfoW));
}

