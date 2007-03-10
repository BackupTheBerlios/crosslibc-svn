#include "msvcrt.h"
void _elfimplib___mb_cur_max() asm("_mb_cur_max");
void *_imp____mb_cur_max = NULL;
__attribute__((constructor)) void _elfimplib_init___mb_cur_max() {
load_dll_msvcrt();
_imp____mb_cur_max = (void *) _elf_GetProcAddress(_dll_msvcrt, "__mb_cur_max");
}
void _elfimplib___mb_cur_max() {
asm("leave\njmp *%0" : : "r"(_imp____mb_cur_max));
}

void _elfimplibmang___mb_cur_max() asm("__mb_cur_max");
void _elfimplibmang___mb_cur_max() {
asm("leave\njmp *%0" : : "r"(_imp____mb_cur_max));
}

