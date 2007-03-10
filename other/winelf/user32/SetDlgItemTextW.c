#include "user32.h"
void _elfimplib_SetDlgItemTextW() asm("SetDlgItemTextW");
void *_imp__SetDlgItemTextW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetDlgItemTextW() {
load_dll_user32();
_imp__SetDlgItemTextW = (void *) _elf_GetProcAddress(_dll_user32, "SetDlgItemTextW");
}
void _elfimplib_SetDlgItemTextW() {
asm("leave\njmp *%0" : : "r"(_imp__SetDlgItemTextW));
}

