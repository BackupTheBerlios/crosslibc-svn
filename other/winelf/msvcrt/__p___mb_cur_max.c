#include "msvcrt.h"
void _elfimplib___p___mb_cur_max() asm("_p___mb_cur_max");
void *_imp____p___mb_cur_max = NULL;
__attribute__((constructor)) void _elfimplib_init___p___mb_cur_max() {
load_dll_msvcrt();
_imp____p___mb_cur_max = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p___mb_cur_max");
}
void _elfimplib___p___mb_cur_max() {
asm("leave\njmp *%0" : : "r"(_imp____p___mb_cur_max));
}

