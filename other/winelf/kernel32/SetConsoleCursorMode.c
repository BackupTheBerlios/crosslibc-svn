#include "kernel32.h"
void _elfimplib_SetConsoleCursorMode() asm("SetConsoleCursorMode");
void *_imp__SetConsoleCursorMode = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleCursorMode() {
load_dll_kernel32();
_imp__SetConsoleCursorMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCursorMode");
}
void _elfimplib_SetConsoleCursorMode() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleCursorMode));
}

