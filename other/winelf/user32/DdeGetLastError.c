#include "user32.h"
void _elfimplib_DdeGetLastError() asm("DdeGetLastError");
void *_imp__DdeGetLastError = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeGetLastError() {
load_dll_user32();
_imp__DdeGetLastError = (void *) _elf_GetProcAddress(_dll_user32, "DdeGetLastError");
}
void _elfimplib_DdeGetLastError() {
asm("leave\njmp *%0" : : "r"(_imp__DdeGetLastError));
}

