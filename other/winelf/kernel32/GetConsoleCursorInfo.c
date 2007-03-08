#include "kernel32.h"
void _elfimplib_GetConsoleCursorInfo() asm("GetConsoleCursorInfo");
void *_imp__GetConsoleCursorInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleCursorInfo() {
load_dll_kernel32();
_imp__GetConsoleCursorInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCursorInfo");
}
void _elfimplib_GetConsoleCursorInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleCursorInfo));
}

