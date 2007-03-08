#include "kernel32.h"
void _elfimplib_SetConsoleCursor() asm("SetConsoleCursor");
void *_imp__SetConsoleCursor = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleCursor() {
load_dll_kernel32();
_imp__SetConsoleCursor = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCursor");
}
void _elfimplib_SetConsoleCursor() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleCursor));
}

