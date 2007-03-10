#include "user32.h"
void _elfimplib_SetDlgItemInt() asm("SetDlgItemInt");
void *_imp__SetDlgItemInt = NULL;
__attribute__((constructor)) void _elfimplib_init_SetDlgItemInt() {
load_dll_user32();
_imp__SetDlgItemInt = (void *) _elf_GetProcAddress(_dll_user32, "SetDlgItemInt");
}
void _elfimplib_SetDlgItemInt() {
asm("leave\njmp *%0" : : "r"(_imp__SetDlgItemInt));
}

