#include "kernel32.h"
void _elfimplib_SetConsoleCursorInfo() asm("SetConsoleCursorInfo");
void *_imp__SetConsoleCursorInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleCursorInfo() {
load_dll_kernel32();
_imp__SetConsoleCursorInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCursorInfo");
}
void _elfimplib_SetConsoleCursorInfo() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleCursorInfo));
}

