#include "msvcrt.h"
void _elfimplib__mbspbrk() asm("mbspbrk");
void *_imp___mbspbrk = NULL;
__attribute__((constructor)) void _elfimplib_init__mbspbrk() {
load_dll_msvcrt();
_imp___mbspbrk = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbspbrk");
}
void _elfimplib__mbspbrk() {
asm("leave\njmp *%0" : : "r"(_imp___mbspbrk));
}

void _elfimplibmang__mbspbrk() asm("_mbspbrk");
void _elfimplibmang__mbspbrk() {
asm("leave\njmp *%0" : : "r"(_imp___mbspbrk));
}

