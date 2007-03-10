#include "msvcrt.h"
void _elfimplib__wfindfirst() asm("wfindfirst");
void *_imp___wfindfirst = NULL;
__attribute__((constructor)) void _elfimplib_init__wfindfirst() {
load_dll_msvcrt();
_imp___wfindfirst = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfindfirst");
}
void _elfimplib__wfindfirst() {
asm("leave\njmp *%0" : : "r"(_imp___wfindfirst));
}

void _elfimplibmang__wfindfirst() asm("_wfindfirst");
void _elfimplibmang__wfindfirst() {
asm("leave\njmp *%0" : : "r"(_imp___wfindfirst));
}

