#include "kernel32.h"
void _elfimplib_SetConsoleTitleW() asm("SetConsoleTitleW");
void *_imp__SetConsoleTitleW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleTitleW() {
load_dll_kernel32();
_imp__SetConsoleTitleW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleTitleW");
}
void _elfimplib_SetConsoleTitleW() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleTitleW));
}

