#include "msvcrt.h"
void _elfimplib_strtok() asm("strtok");
void *_imp__strtok = NULL;
__attribute__((constructor)) void _elfimplib_init_strtok() {
load_dll_msvcrt();
_imp__strtok = (void *) _elf_GetProcAddress(_dll_msvcrt, "strtok");
}
void _elfimplib_strtok() {
asm("leave\njmp *%0" : : "r"(_imp__strtok));
}

