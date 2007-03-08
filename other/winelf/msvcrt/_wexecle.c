#include "msvcrt.h"
void _elfimplib__wexecle() asm("wexecle");
void *_imp___wexecle = NULL;
__attribute__((constructor)) void _elfimplib_init__wexecle() {
load_dll_msvcrt();
_imp___wexecle = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexecle");
}
void _elfimplib__wexecle() {
asm("leave\njmp *%0" : : "r"(_imp___wexecle));
}

