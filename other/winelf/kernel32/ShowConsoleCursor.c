#include "kernel32.h"
void _elfimplib_ShowConsoleCursor() asm("ShowConsoleCursor");
void *_imp__ShowConsoleCursor = NULL;
__attribute__((constructor)) void _elfimplib_init_ShowConsoleCursor() {
load_dll_kernel32();
_imp__ShowConsoleCursor = (void *) _elf_GetProcAddress(_dll_kernel32, "ShowConsoleCursor");
}
void _elfimplib_ShowConsoleCursor() {
asm("leave\njmp *%0" : : "r"(_imp__ShowConsoleCursor));
}

