#include "user32.h"
void _elfimplib_DdeAccessData() asm("DdeAccessData");
void *_imp__DdeAccessData = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeAccessData() {
load_dll_user32();
_imp__DdeAccessData = (void *) _elf_GetProcAddress(_dll_user32, "DdeAccessData");
}
void _elfimplib_DdeAccessData() {
asm("leave\njmp *%0" : : "r"(_imp__DdeAccessData));
}

