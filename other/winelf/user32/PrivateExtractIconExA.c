#include "user32.h"
void _elfimplib_PrivateExtractIconExA() asm("PrivateExtractIconExA");
void *_imp__PrivateExtractIconExA = NULL;
__attribute__((constructor)) void _elfimplib_init_PrivateExtractIconExA() {
load_dll_user32();
_imp__PrivateExtractIconExA = (void *) _elf_GetProcAddress(_dll_user32, "PrivateExtractIconExA");
}
void _elfimplib_PrivateExtractIconExA() {
asm("leave\njmp *%0" : : "r"(_imp__PrivateExtractIconExA));
}

