#include "msvcrt.h"
void _elfimplib_exit() asm("exit");
void *_imp__exit = NULL;
__attribute__((constructor)) void _elfimplib_init_exit() {
load_dll_msvcrt();
_imp__exit = (void *) _elf_GetProcAddress(_dll_msvcrt, "exit");
}
void _elfimplib_exit() {
asm("leave\njmp *%0" : : "r"(_imp__exit));
}

