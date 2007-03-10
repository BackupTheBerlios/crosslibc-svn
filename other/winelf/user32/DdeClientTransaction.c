#include "user32.h"
void _elfimplib_DdeClientTransaction() asm("DdeClientTransaction");
void *_imp__DdeClientTransaction = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeClientTransaction() {
load_dll_user32();
_imp__DdeClientTransaction = (void *) _elf_GetProcAddress(_dll_user32, "DdeClientTransaction");
}
void _elfimplib_DdeClientTransaction() {
asm("leave\njmp *%0" : : "r"(_imp__DdeClientTransaction));
}

