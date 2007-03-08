#include "msvcrt.h"
void _elfimplib__ismbcprint() asm("ismbcprint");
void *_imp___ismbcprint = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbcprint() {
load_dll_msvcrt();
_imp___ismbcprint = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcprint");
}
void _elfimplib__ismbcprint() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcprint));
}

