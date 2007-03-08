#include "kernel32.h"
void _elfimplib_SetConsoleCursorPosition() asm("SetConsoleCursorPosition");
void *_imp__SetConsoleCursorPosition = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleCursorPosition() {
load_dll_kernel32();
_imp__SetConsoleCursorPosition = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCursorPosition");
}
void _elfimplib_SetConsoleCursorPosition() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleCursorPosition));
}

