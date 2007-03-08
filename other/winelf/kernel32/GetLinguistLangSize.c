#include "kernel32.h"
void _elfimplib_GetLinguistLangSize() asm("GetLinguistLangSize");
void *_imp__GetLinguistLangSize = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLinguistLangSize() {
load_dll_kernel32();
_imp__GetLinguistLangSize = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLinguistLangSize");
}
void _elfimplib_GetLinguistLangSize() {
asm("leave\njmp *%0" : : "r"(_imp__GetLinguistLangSize));
}

