#include "kernel32.h"
void _elfimplib_RegisterWowExec() asm("RegisterWowExec");
void *_imp__RegisterWowExec = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterWowExec() {
load_dll_kernel32();
_imp__RegisterWowExec = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterWowExec");
}
void _elfimplib_RegisterWowExec() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterWowExec));
}

