#include "user32.h"
void _elfimplib_DdeQueryStringA() asm("DdeQueryStringA");
void *_imp__DdeQueryStringA = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeQueryStringA() {
load_dll_user32();
_imp__DdeQueryStringA = (void *) _elf_GetProcAddress(_dll_user32, "DdeQueryStringA");
}
void _elfimplib_DdeQueryStringA() {
asm("leave\njmp *%0" : : "r"(_imp__DdeQueryStringA));
}
