#include "user32.h"
void _elfimplib_DdeSetUserHandle() asm("DdeSetUserHandle");
void *_imp__DdeSetUserHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeSetUserHandle() {
load_dll_user32();
_imp__DdeSetUserHandle = (void *) _elf_GetProcAddress(_dll_user32, "DdeSetUserHandle");
}
void _elfimplib_DdeSetUserHandle() {
asm("leave\njmp *%0" : : "r"(_imp__DdeSetUserHandle));
}

