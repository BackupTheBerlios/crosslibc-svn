#include "msvcrt.h"
void _elfimplib___CxxFrameHandler() asm("_CxxFrameHandler");
void *_imp____CxxFrameHandler = NULL;
__attribute__((constructor)) void _elfimplib_init___CxxFrameHandler() {
load_dll_msvcrt();
_imp____CxxFrameHandler = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxFrameHandler");
}
void _elfimplib___CxxFrameHandler() {
asm("leave\njmp *%0" : : "r"(_imp____CxxFrameHandler));
}

void _elfimplibmang___CxxFrameHandler() asm("__CxxFrameHandler");
void _elfimplibmang___CxxFrameHandler() {
asm("leave\njmp *%0" : : "r"(_imp____CxxFrameHandler));
}

