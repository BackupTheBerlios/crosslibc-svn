#include "user32.h"
void _elfimplib_DdeCreateDataHandle() asm("DdeCreateDataHandle");
void *_imp__DdeCreateDataHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeCreateDataHandle() {
load_dll_user32();
_imp__DdeCreateDataHandle = (void *) _elf_GetProcAddress(_dll_user32, "DdeCreateDataHandle");
}
void _elfimplib_DdeCreateDataHandle() {
asm("leave\njmp *%0" : : "r"(_imp__DdeCreateDataHandle));
}

