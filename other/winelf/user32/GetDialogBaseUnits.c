#include "user32.h"
void _elfimplib_GetDialogBaseUnits() asm("GetDialogBaseUnits");
void *_imp__GetDialogBaseUnits = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDialogBaseUnits() {
load_dll_user32();
_imp__GetDialogBaseUnits = (void *) _elf_GetProcAddress(_dll_user32, "GetDialogBaseUnits");
}
void _elfimplib_GetDialogBaseUnits() {
asm("leave\njmp *%0" : : "r"(_imp__GetDialogBaseUnits));
}

