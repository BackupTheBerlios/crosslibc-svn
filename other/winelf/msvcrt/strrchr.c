#include "msvcrt.h"
void _elfimplib_strrchr() asm("strrchr");
void *_imp__strrchr = NULL;
__attribute__((constructor)) void _elfimplib_init_strrchr() {
load_dll_msvcrt();
_imp__strrchr = (void *) _elf_GetProcAddress(_dll_msvcrt, "strrchr");
}
void _elfimplib_strrchr() {
asm("leave\njmp *%0" : : "r"(_imp__strrchr));
}

