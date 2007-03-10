#include "user32.h"
void _elfimplib_DdeCreateStringHandleW() asm("DdeCreateStringHandleW");
void *_imp__DdeCreateStringHandleW = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeCreateStringHandleW() {
load_dll_user32();
_imp__DdeCreateStringHandleW = (void *) _elf_GetProcAddress(_dll_user32, "DdeCreateStringHandleW");
}
void _elfimplib_DdeCreateStringHandleW() {
asm("leave\njmp *%0" : : "r"(_imp__DdeCreateStringHandleW));
}

