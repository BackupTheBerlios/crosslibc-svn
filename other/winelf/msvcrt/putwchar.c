#include "msvcrt.h"
void _elfimplib_putwchar() asm("putwchar");
void *_imp__putwchar = NULL;
__attribute__((constructor)) void _elfimplib_init_putwchar() {
load_dll_msvcrt();
_imp__putwchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "putwchar");
}
void _elfimplib_putwchar() {
asm("leave\njmp *%0" : : "r"(_imp__putwchar));
}

