#include "kernel32.h"
void _elfimplib_UpdateResourceW() asm("UpdateResourceW");
void *_imp__UpdateResourceW = NULL;
__attribute__((constructor)) void _elfimplib_init_UpdateResourceW() {
load_dll_kernel32();
_imp__UpdateResourceW = (void *) _elf_GetProcAddress(_dll_kernel32, "UpdateResourceW");
}
void _elfimplib_UpdateResourceW() {
asm("leave\njmp *%0" : : "r"(_imp__UpdateResourceW));
}

