#include "msvcrt.h"
void _elfimplib___pxcptinfoptrs() asm("_pxcptinfoptrs");
void *_imp____pxcptinfoptrs = NULL;
__attribute__((constructor)) void _elfimplib_init___pxcptinfoptrs() {
load_dll_msvcrt();
_imp____pxcptinfoptrs = (void *) _elf_GetProcAddress(_dll_msvcrt, "__pxcptinfoptrs");
}
void _elfimplib___pxcptinfoptrs() {
asm("leave\njmp *%0" : : "r"(_imp____pxcptinfoptrs));
}

void _elfimplibmang___pxcptinfoptrs() asm("__pxcptinfoptrs");
void _elfimplibmang___pxcptinfoptrs() {
asm("leave\njmp *%0" : : "r"(_imp____pxcptinfoptrs));
}

