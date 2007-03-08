#include "msvcrt.h"
void _elfimplib_perror() asm("perror");
void *_imp__perror = NULL;
__attribute__((constructor)) void _elfimplib_init_perror() {
load_dll_msvcrt();
_imp__perror = (void *) _elf_GetProcAddress(_dll_msvcrt, "perror");
}
void _elfimplib_perror() {
asm("leave\njmp *%0" : : "r"(_imp__perror));
}

