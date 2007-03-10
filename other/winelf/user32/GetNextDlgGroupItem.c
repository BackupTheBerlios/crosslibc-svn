#include "user32.h"
void _elfimplib_GetNextDlgGroupItem() asm("GetNextDlgGroupItem");
void *_imp__GetNextDlgGroupItem = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNextDlgGroupItem() {
load_dll_user32();
_imp__GetNextDlgGroupItem = (void *) _elf_GetProcAddress(_dll_user32, "GetNextDlgGroupItem");
}
void _elfimplib_GetNextDlgGroupItem() {
asm("leave\njmp *%0" : : "r"(_imp__GetNextDlgGroupItem));
}

