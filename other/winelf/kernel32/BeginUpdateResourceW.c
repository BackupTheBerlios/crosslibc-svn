#include "kernel32.h"
void _elfimplib_BeginUpdateResourceW() asm("BeginUpdateResourceW");
void *_imp__BeginUpdateResourceW = NULL;
__attribute__((constructor)) void _elfimplib_init_BeginUpdateResourceW() {
load_dll_kernel32();
_imp__BeginUpdateResourceW = (void *) _elf_GetProcAddress(_dll_kernel32, "BeginUpdateResourceW");
}
void _elfimplib_BeginUpdateResourceW() {
asm("leave\njmp *%0" : : "r"(_imp__BeginUpdateResourceW));
}

