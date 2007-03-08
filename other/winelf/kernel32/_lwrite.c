#include "kernel32.h"
void _elfimplib__lwrite() asm("lwrite");
void *_imp___lwrite = NULL;
__attribute__((constructor)) void _elfimplib_init__lwrite() {
load_dll_kernel32();
_imp___lwrite = (void *) _elf_GetProcAddress(_dll_kernel32, "_lwrite");
}
void _elfimplib__lwrite() {
asm("leave\njmp *%0" : : "r"(_imp___lwrite));
}

