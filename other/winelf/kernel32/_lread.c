#include "kernel32.h"
void _elfimplib__lread() asm("lread");
void *_imp___lread = NULL;
__attribute__((constructor)) void _elfimplib_init__lread() {
load_dll_kernel32();
_imp___lread = (void *) _elf_GetProcAddress(_dll_kernel32, "_lread");
}
void _elfimplib__lread() {
asm("leave\njmp *%0" : : "r"(_imp___lread));
}

