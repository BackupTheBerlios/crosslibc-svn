#include "msvcrt.h"
void _elfimplib__fcloseall() asm("fcloseall");
void *_imp___fcloseall = NULL;
__attribute__((constructor)) void _elfimplib_init__fcloseall() {
load_dll_msvcrt();
_imp___fcloseall = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fcloseall");
}
void _elfimplib__fcloseall() {
asm("leave\njmp *%0" : : "r"(_imp___fcloseall));
}

