#include "msvcrt.h"
void _elfimplib__wexeclpe() asm("wexeclpe");
void *_imp___wexeclpe = NULL;
__attribute__((constructor)) void _elfimplib_init__wexeclpe() {
load_dll_msvcrt();
_imp___wexeclpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexeclpe");
}
void _elfimplib__wexeclpe() {
asm("leave\njmp *%0" : : "r"(_imp___wexeclpe));
}

void _elfimplibmang__wexeclpe() asm("_wexeclpe");
void _elfimplibmang__wexeclpe() {
asm("leave\njmp *%0" : : "r"(_imp___wexeclpe));
}

