#include "kernel32.h"
void _elfimplib_EndUpdateResourceW() asm("EndUpdateResourceW");
void *_imp__EndUpdateResourceW = NULL;
__attribute__((constructor)) void _elfimplib_init_EndUpdateResourceW() {
load_dll_kernel32();
_imp__EndUpdateResourceW = (void *) _elf_GetProcAddress(_dll_kernel32, "EndUpdateResourceW");
}
void _elfimplib_EndUpdateResourceW() {
asm("leave\njmp *%0" : : "r"(_imp__EndUpdateResourceW));
}

