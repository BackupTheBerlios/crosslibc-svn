#include "kernel32.h"
void _elfimplib_RegisterConsoleOS2() asm("RegisterConsoleOS2");
void *_imp__RegisterConsoleOS2 = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterConsoleOS2() {
load_dll_kernel32();
_imp__RegisterConsoleOS2 = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterConsoleOS2");
}
void _elfimplib_RegisterConsoleOS2() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterConsoleOS2));
}

