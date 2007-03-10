#include "user32.h"
void _elfimplib_IsServerSideWindow() asm("IsServerSideWindow");
void *_imp__IsServerSideWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_IsServerSideWindow() {
load_dll_user32();
_imp__IsServerSideWindow = (void *) _elf_GetProcAddress(_dll_user32, "IsServerSideWindow");
}
void _elfimplib_IsServerSideWindow() {
asm("leave\njmp *%0" : : "r"(_imp__IsServerSideWindow));
}

