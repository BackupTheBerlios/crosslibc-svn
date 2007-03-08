#include "msvcrt.h"
void _elfimplib___STRINGTOLD() asm("_STRINGTOLD");
void *_imp____STRINGTOLD = NULL;
__attribute__((constructor)) void _elfimplib_init___STRINGTOLD() {
load_dll_msvcrt();
_imp____STRINGTOLD = (void *) _elf_GetProcAddress(_dll_msvcrt, "__STRINGTOLD");
}
void _elfimplib___STRINGTOLD() {
asm("leave\njmp *%0" : : "r"(_imp____STRINGTOLD));
}

