#include "msvcrt.h"
void _elfimplib__amsg_exit() asm("amsg_exit");
void *_imp___amsg_exit = NULL;
__attribute__((constructor)) void _elfimplib_init__amsg_exit() {
load_dll_msvcrt();
_imp___amsg_exit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_amsg_exit");
}
void _elfimplib__amsg_exit() {
asm("leave\njmp *%0" : : "r"(_imp___amsg_exit));
}

void _elfimplibmang__amsg_exit() asm("_amsg_exit");
void _elfimplibmang__amsg_exit() {
asm("leave\njmp *%0" : : "r"(_imp___amsg_exit));
}

