#include "msvcrt.h"
void _elfimplib__wfindfirst64() asm("wfindfirst64");
void *_imp___wfindfirst64 = NULL;
__attribute__((constructor)) void _elfimplib_init__wfindfirst64() {
load_dll_msvcrt();
_imp___wfindfirst64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfindfirst64");
}
void _elfimplib__wfindfirst64() {
asm("leave\njmp *%0" : : "r"(_imp___wfindfirst64));
}

void _elfimplibmang__wfindfirst64() asm("_wfindfirst64");
void _elfimplibmang__wfindfirst64() {
asm("leave\njmp *%0" : : "r"(_imp___wfindfirst64));
}

