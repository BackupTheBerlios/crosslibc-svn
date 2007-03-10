#include "user32.h"
void _elfimplib_GetDlgItemTextA() asm("GetDlgItemTextA");
void *_imp__GetDlgItemTextA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDlgItemTextA() {
load_dll_user32();
_imp__GetDlgItemTextA = (void *) _elf_GetProcAddress(_dll_user32, "GetDlgItemTextA");
}
void _elfimplib_GetDlgItemTextA() {
asm("leave\njmp *%0" : : "r"(_imp__GetDlgItemTextA));
}

