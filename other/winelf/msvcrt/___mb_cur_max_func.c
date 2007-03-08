#include "msvcrt.h"
void _elfimplib____mb_cur_max_func() asm("__mb_cur_max_func");
void *_imp_____mb_cur_max_func = NULL;
__attribute__((constructor)) void _elfimplib_init____mb_cur_max_func() {
load_dll_msvcrt();
_imp_____mb_cur_max_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "___mb_cur_max_func");
}
void _elfimplib____mb_cur_max_func() {
asm("leave\njmp *%0" : : "r"(_imp_____mb_cur_max_func));
}

