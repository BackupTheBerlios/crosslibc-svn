#include "msvcrt.h"
void _elfimplib_wcspbrk() asm("wcspbrk");
void *_imp__wcspbrk = NULL;
__attribute__((constructor)) void _elfimplib_init_wcspbrk() {
load_dll_msvcrt();
_imp__wcspbrk = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcspbrk");
}
void _elfimplib_wcspbrk() {
asm("leave\njmp *%0" : : "r"(_imp__wcspbrk));
}

