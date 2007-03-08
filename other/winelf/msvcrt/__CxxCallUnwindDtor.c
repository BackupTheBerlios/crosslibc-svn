#include "msvcrt.h"
void _elfimplib___CxxCallUnwindDtor() asm("_CxxCallUnwindDtor");
void *_imp____CxxCallUnwindDtor = NULL;
__attribute__((constructor)) void _elfimplib_init___CxxCallUnwindDtor() {
load_dll_msvcrt();
_imp____CxxCallUnwindDtor = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxCallUnwindDtor");
}
void _elfimplib___CxxCallUnwindDtor() {
asm("leave\njmp *%0" : : "r"(_imp____CxxCallUnwindDtor));
}

