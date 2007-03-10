#include "user32.h"
void _elfimplib_DdeKeepStringHandle() asm("DdeKeepStringHandle");
void *_imp__DdeKeepStringHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeKeepStringHandle() {
load_dll_user32();
_imp__DdeKeepStringHandle = (void *) _elf_GetProcAddress(_dll_user32, "DdeKeepStringHandle");
}
void _elfimplib_DdeKeepStringHandle() {
asm("leave\njmp *%0" : : "r"(_imp__DdeKeepStringHandle));
}

