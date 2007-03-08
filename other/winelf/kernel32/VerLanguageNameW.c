#include "kernel32.h"
void _elfimplib_VerLanguageNameW() asm("VerLanguageNameW");
void *_imp__VerLanguageNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_VerLanguageNameW() {
load_dll_kernel32();
_imp__VerLanguageNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "VerLanguageNameW");
}
void _elfimplib_VerLanguageNameW() {
asm("leave\njmp *%0" : : "r"(_imp__VerLanguageNameW));
}

