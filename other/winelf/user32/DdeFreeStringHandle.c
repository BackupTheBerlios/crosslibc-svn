#include "user32.h"
void _elfimplib_DdeFreeStringHandle() asm("DdeFreeStringHandle");
void *_imp__DdeFreeStringHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeFreeStringHandle() {
load_dll_user32();
_imp__DdeFreeStringHandle = (void *) _elf_GetProcAddress(_dll_user32, "DdeFreeStringHandle");
}
void _elfimplib_DdeFreeStringHandle() {
asm("leave\njmp *%0" : : "r"(_imp__DdeFreeStringHandle));
}

