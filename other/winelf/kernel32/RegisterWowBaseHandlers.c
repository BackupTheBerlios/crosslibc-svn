#include "kernel32.h"
void _elfimplib_RegisterWowBaseHandlers() asm("RegisterWowBaseHandlers");
void *_imp__RegisterWowBaseHandlers = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterWowBaseHandlers() {
load_dll_kernel32();
_imp__RegisterWowBaseHandlers = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterWowBaseHandlers");
}
void _elfimplib_RegisterWowBaseHandlers() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterWowBaseHandlers));
}

