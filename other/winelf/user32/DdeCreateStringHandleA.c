#include "user32.h"
void _elfimplib_DdeCreateStringHandleA() asm("DdeCreateStringHandleA");
void *_imp__DdeCreateStringHandleA = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeCreateStringHandleA() {
load_dll_user32();
_imp__DdeCreateStringHandleA = (void *) _elf_GetProcAddress(_dll_user32, "DdeCreateStringHandleA");
}
void _elfimplib_DdeCreateStringHandleA() {
asm("leave\njmp *%0" : : "r"(_imp__DdeCreateStringHandleA));
}

