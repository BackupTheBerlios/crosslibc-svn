#include "user32.h"
void _elfimplib_DdeAbandonTransaction() asm("DdeAbandonTransaction");
void *_imp__DdeAbandonTransaction = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeAbandonTransaction() {
load_dll_user32();
_imp__DdeAbandonTransaction = (void *) _elf_GetProcAddress(_dll_user32, "DdeAbandonTransaction");
}
void _elfimplib_DdeAbandonTransaction() {
asm("leave\njmp *%0" : : "r"(_imp__DdeAbandonTransaction));
}

