#include "user32.h"
void _elfimplib_GetDlgItem() asm("GetDlgItem");
void *_imp__GetDlgItem = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDlgItem() {
load_dll_user32();
_imp__GetDlgItem = (void *) _elf_GetProcAddress(_dll_user32, "GetDlgItem");
}
void _elfimplib_GetDlgItem() {
asm("leave\njmp *%0" : : "r"(_imp__GetDlgItem));
}

