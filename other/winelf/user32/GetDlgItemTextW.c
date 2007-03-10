#include "user32.h"
void _elfimplib_GetDlgItemTextW() asm("GetDlgItemTextW");
void *_imp__GetDlgItemTextW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDlgItemTextW() {
load_dll_user32();
_imp__GetDlgItemTextW = (void *) _elf_GetProcAddress(_dll_user32, "GetDlgItemTextW");
}
void _elfimplib_GetDlgItemTextW() {
asm("leave\njmp *%0" : : "r"(_imp__GetDlgItemTextW));
}

