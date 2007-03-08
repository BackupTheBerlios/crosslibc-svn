#include "kernel32.h"
void _elfimplib_GetConsoleCursorMode() asm("GetConsoleCursorMode");
void *_imp__GetConsoleCursorMode = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleCursorMode() {
load_dll_kernel32();
_imp__GetConsoleCursorMode = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCursorMode");
}
void _elfimplib_GetConsoleCursorMode() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleCursorMode));
}

