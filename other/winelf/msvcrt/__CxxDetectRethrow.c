#include "msvcrt.h"
void _elfimplib___CxxDetectRethrow() asm("_CxxDetectRethrow");
void *_imp____CxxDetectRethrow = NULL;
__attribute__((constructor)) void _elfimplib_init___CxxDetectRethrow() {
load_dll_msvcrt();
_imp____CxxDetectRethrow = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxDetectRethrow");
}
void _elfimplib___CxxDetectRethrow() {
asm("leave\njmp *%0" : : "r"(_imp____CxxDetectRethrow));
}

