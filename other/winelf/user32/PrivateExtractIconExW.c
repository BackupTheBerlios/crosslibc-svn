#include "user32.h"
void _elfimplib_PrivateExtractIconExW() asm("PrivateExtractIconExW");
void *_imp__PrivateExtractIconExW = NULL;
__attribute__((constructor)) void _elfimplib_init_PrivateExtractIconExW() {
load_dll_user32();
_imp__PrivateExtractIconExW = (void *) _elf_GetProcAddress(_dll_user32, "PrivateExtractIconExW");
}
void _elfimplib_PrivateExtractIconExW() {
asm("leave\njmp *%0" : : "r"(_imp__PrivateExtractIconExW));
}

