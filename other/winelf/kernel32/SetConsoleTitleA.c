#include "kernel32.h"
void _elfimplib_SetConsoleTitleA() asm("SetConsoleTitleA");
void *_imp__SetConsoleTitleA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleTitleA() {
load_dll_kernel32();
_imp__SetConsoleTitleA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleTitleA");
}
void _elfimplib_SetConsoleTitleA() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleTitleA));
}
