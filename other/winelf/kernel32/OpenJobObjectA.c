#include "kernel32.h"
void _elfimplib_OpenJobObjectA() asm("OpenJobObjectA");
void *_imp__OpenJobObjectA = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenJobObjectA() {
load_dll_kernel32();
_imp__OpenJobObjectA = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenJobObjectA");
}
void _elfimplib_OpenJobObjectA() {
asm("leave\njmp *%0" : : "r"(_imp__OpenJobObjectA));
}

