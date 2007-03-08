#include "msvcrt.h"
void _elfimplib___CxxLongjmpUnwind() asm("_CxxLongjmpUnwind");
void *_imp____CxxLongjmpUnwind = NULL;
__attribute__((constructor)) void _elfimplib_init___CxxLongjmpUnwind() {
load_dll_msvcrt();
_imp____CxxLongjmpUnwind = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxLongjmpUnwind");
}
void _elfimplib___CxxLongjmpUnwind() {
asm("leave\njmp *%0" : : "r"(_imp____CxxLongjmpUnwind));
}

