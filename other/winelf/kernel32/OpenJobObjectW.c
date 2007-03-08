#include "kernel32.h"
void _elfimplib_OpenJobObjectW() asm("OpenJobObjectW");
void *_imp__OpenJobObjectW = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenJobObjectW() {
load_dll_kernel32();
_imp__OpenJobObjectW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenJobObjectW");
}
void _elfimplib_OpenJobObjectW() {
asm("leave\njmp *%0" : : "r"(_imp__OpenJobObjectW));
}

