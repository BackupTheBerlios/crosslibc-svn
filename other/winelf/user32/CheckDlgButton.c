#include "user32.h"
void _elfimplib_CheckDlgButton() asm("CheckDlgButton");
void *_imp__CheckDlgButton = NULL;
__attribute__((constructor)) void _elfimplib_init_CheckDlgButton() {
load_dll_user32();
_imp__CheckDlgButton = (void *) _elf_GetProcAddress(_dll_user32, "CheckDlgButton");
}
void _elfimplib_CheckDlgButton() {
asm("leave\njmp *%0" : : "r"(_imp__CheckDlgButton));
}

