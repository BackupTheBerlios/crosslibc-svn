#include "user32.h"
void _elfimplib_PrivateExtractIconsA() asm("PrivateExtractIconsA");
void *_imp__PrivateExtractIconsA = NULL;
__attribute__((constructor)) void _elfimplib_init_PrivateExtractIconsA() {
load_dll_user32();
_imp__PrivateExtractIconsA = (void *) _elf_GetProcAddress(_dll_user32, "PrivateExtractIconsA");
}
void _elfimplib_PrivateExtractIconsA() {
asm("leave\njmp *%0" : : "r"(_imp__PrivateExtractIconsA));
}

