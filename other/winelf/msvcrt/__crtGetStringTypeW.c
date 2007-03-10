#include "msvcrt.h"
void _elfimplib___crtGetStringTypeW() asm("_crtGetStringTypeW");
void *_imp____crtGetStringTypeW = NULL;
__attribute__((constructor)) void _elfimplib_init___crtGetStringTypeW() {
load_dll_msvcrt();
_imp____crtGetStringTypeW = (void *) _elf_GetProcAddress(_dll_msvcrt, "__crtGetStringTypeW");
}
void _elfimplib___crtGetStringTypeW() {
asm("leave\njmp *%0" : : "r"(_imp____crtGetStringTypeW));
}

void _elfimplibmang___crtGetStringTypeW() asm("__crtGetStringTypeW");
void _elfimplibmang___crtGetStringTypeW() {
asm("leave\njmp *%0" : : "r"(_imp____crtGetStringTypeW));
}

