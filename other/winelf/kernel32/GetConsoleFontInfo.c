#include "kernel32.h"
void _elfimplib_GetConsoleFontInfo() asm("GetConsoleFontInfo");
void *_imp__GetConsoleFontInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleFontInfo() {
load_dll_kernel32();
_imp__GetConsoleFontInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleFontInfo");
}
void _elfimplib_GetConsoleFontInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleFontInfo));
}

