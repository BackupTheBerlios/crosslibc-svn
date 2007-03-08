#include "msvcrt.h"
void _elfimplib__wexecvpe() asm("wexecvpe");
void *_imp___wexecvpe = NULL;
__attribute__((constructor)) void _elfimplib_init__wexecvpe() {
load_dll_msvcrt();
_imp___wexecvpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexecvpe");
}
void _elfimplib__wexecvpe() {
asm("leave\njmp *%0" : : "r"(_imp___wexecvpe));
}

