#include "user32.h"
void _elfimplib_DdePostAdvise() asm("DdePostAdvise");
void *_imp__DdePostAdvise = NULL;
__attribute__((constructor)) void _elfimplib_init_DdePostAdvise() {
load_dll_user32();
_imp__DdePostAdvise = (void *) _elf_GetProcAddress(_dll_user32, "DdePostAdvise");
}
void _elfimplib_DdePostAdvise() {
asm("leave\njmp *%0" : : "r"(_imp__DdePostAdvise));
}

