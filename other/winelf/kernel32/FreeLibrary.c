#include "kernel32.h"
void _elfimplib_FreeLibrary() asm("FreeLibrary");
void *_imp__FreeLibrary = NULL;
__attribute__((constructor)) void _elfimplib_init_FreeLibrary() {
load_dll_kernel32();
_imp__FreeLibrary = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeLibrary");
}
void _elfimplib_FreeLibrary() {
asm("leave\njmp *%0" : : "r"(_imp__FreeLibrary));
}

