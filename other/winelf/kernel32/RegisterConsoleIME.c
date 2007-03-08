#include "kernel32.h"
void _elfimplib_RegisterConsoleIME() asm("RegisterConsoleIME");
void *_imp__RegisterConsoleIME = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterConsoleIME() {
load_dll_kernel32();
_imp__RegisterConsoleIME = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterConsoleIME");
}
void _elfimplib_RegisterConsoleIME() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterConsoleIME));
}

