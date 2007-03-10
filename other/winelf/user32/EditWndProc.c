#include "user32.h"
void _elfimplib_EditWndProc() asm("EditWndProc");
void *_imp__EditWndProc = NULL;
__attribute__((constructor)) void _elfimplib_init_EditWndProc() {
load_dll_user32();
_imp__EditWndProc = (void *) _elf_GetProcAddress(_dll_user32, "EditWndProc");
}
void _elfimplib_EditWndProc() {
asm("leave\njmp *%0" : : "r"(_imp__EditWndProc));
}

