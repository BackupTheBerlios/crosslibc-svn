#include "msvcrt.h"
void _elfimplib__wutime64() asm("wutime64");
void *_imp___wutime64 = NULL;
__attribute__((constructor)) void _elfimplib_init__wutime64() {
load_dll_msvcrt();
_imp___wutime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wutime64");
}
void _elfimplib__wutime64() {
asm("leave\njmp *%0" : : "r"(_imp___wutime64));
}

void _elfimplibmang__wutime64() asm("_wutime64");
void _elfimplibmang__wutime64() {
asm("leave\njmp *%0" : : "r"(_imp___wutime64));
}

