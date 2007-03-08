#include "kernel32.h"
void _elfimplib_GetConsoleTitleW() asm("GetConsoleTitleW");
void *_imp__GetConsoleTitleW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleTitleW() {
load_dll_kernel32();
_imp__GetConsoleTitleW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleTitleW");
}
void _elfimplib_GetConsoleTitleW() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleTitleW));
}

