#include "user32.h"
void _elfimplib_GetDlgCtrlID() asm("GetDlgCtrlID");
void *_imp__GetDlgCtrlID = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDlgCtrlID() {
load_dll_user32();
_imp__GetDlgCtrlID = (void *) _elf_GetProcAddress(_dll_user32, "GetDlgCtrlID");
}
void _elfimplib_GetDlgCtrlID() {
asm("leave\njmp *%0" : : "r"(_imp__GetDlgCtrlID));
}

