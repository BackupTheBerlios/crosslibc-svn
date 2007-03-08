#include "msvcrt.h"
void _elfimplib__fgetwchar() asm("fgetwchar");
void *_imp___fgetwchar = NULL;
__attribute__((constructor)) void _elfimplib_init__fgetwchar() {
load_dll_msvcrt();
_imp___fgetwchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fgetwchar");
}
void _elfimplib__fgetwchar() {
asm("leave\njmp *%0" : : "r"(_imp___fgetwchar));
}

