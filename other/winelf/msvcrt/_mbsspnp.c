#include "msvcrt.h"
void _elfimplib__mbsspnp() asm("mbsspnp");
void *_imp___mbsspnp = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsspnp() {
load_dll_msvcrt();
_imp___mbsspnp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsspnp");
}
void _elfimplib__mbsspnp() {
asm("leave\njmp *%0" : : "r"(_imp___mbsspnp));
}

void _elfimplibmang__mbsspnp() asm("_mbsspnp");
void _elfimplibmang__mbsspnp() {
asm("leave\njmp *%0" : : "r"(_imp___mbsspnp));
}

