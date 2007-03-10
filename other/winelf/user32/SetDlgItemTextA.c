#include "user32.h"
void _elfimplib_SetDlgItemTextA() asm("SetDlgItemTextA");
void *_imp__SetDlgItemTextA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetDlgItemTextA() {
load_dll_user32();
_imp__SetDlgItemTextA = (void *) _elf_GetProcAddress(_dll_user32, "SetDlgItemTextA");
}
void _elfimplib_SetDlgItemTextA() {
asm("leave\njmp *%0" : : "r"(_imp__SetDlgItemTextA));
}

