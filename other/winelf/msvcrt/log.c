#include "msvcrt.h"
void _elfimplib_log() asm("log");
void *_imp__log = NULL;
__attribute__((constructor)) void _elfimplib_init_log() {
load_dll_msvcrt();
_imp__log = (void *) _elf_GetProcAddress(_dll_msvcrt, "log");
}
void _elfimplib_log() {
asm("leave\njmp *%0" : : "r"(_imp__log));
}

