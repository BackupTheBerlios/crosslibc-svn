#include "user32.h"
void _elfimplib_GetNextDlgTabItem() asm("GetNextDlgTabItem");
void *_imp__GetNextDlgTabItem = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNextDlgTabItem() {
load_dll_user32();
_imp__GetNextDlgTabItem = (void *) _elf_GetProcAddress(_dll_user32, "GetNextDlgTabItem");
}
void _elfimplib_GetNextDlgTabItem() {
asm("leave\njmp *%0" : : "r"(_imp__GetNextDlgTabItem));
}

