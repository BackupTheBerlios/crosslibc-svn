#include "msvcrt.h"
void _elfimplib__wexeclp() asm("wexeclp");
void *_imp___wexeclp = NULL;
__attribute__((constructor)) void _elfimplib_init__wexeclp() {
load_dll_msvcrt();
_imp___wexeclp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexeclp");
}
void _elfimplib__wexeclp() {
asm("leave\njmp *%0" : : "r"(_imp___wexeclp));
}

void _elfimplibmang__wexeclp() asm("_wexeclp");
void _elfimplibmang__wexeclp() {
asm("leave\njmp *%0" : : "r"(_imp___wexeclp));
}

