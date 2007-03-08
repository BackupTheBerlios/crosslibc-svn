#include "msvcrt.h"
void _elfimplib_setvbuf() asm("setvbuf");
void *_imp__setvbuf = NULL;
__attribute__((constructor)) void _elfimplib_init_setvbuf() {
load_dll_msvcrt();
_imp__setvbuf = (void *) _elf_GetProcAddress(_dll_msvcrt, "setvbuf");
}
void _elfimplib_setvbuf() {
asm("leave\njmp *%0" : : "r"(_imp__setvbuf));
}

