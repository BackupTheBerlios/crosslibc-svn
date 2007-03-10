#include "user32.h"
void _elfimplib_DdeQueryStringW() asm("DdeQueryStringW");
void *_imp__DdeQueryStringW = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeQueryStringW() {
load_dll_user32();
_imp__DdeQueryStringW = (void *) _elf_GetProcAddress(_dll_user32, "DdeQueryStringW");
}
void _elfimplib_DdeQueryStringW() {
asm("leave\njmp *%0" : : "r"(_imp__DdeQueryStringW));
}

