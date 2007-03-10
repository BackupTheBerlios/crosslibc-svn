#include "user32.h"
void _elfimplib_MapDialogRect() asm("MapDialogRect");
void *_imp__MapDialogRect = NULL;
__attribute__((constructor)) void _elfimplib_init_MapDialogRect() {
load_dll_user32();
_imp__MapDialogRect = (void *) _elf_GetProcAddress(_dll_user32, "MapDialogRect");
}
void _elfimplib_MapDialogRect() {
asm("leave\njmp *%0" : : "r"(_imp__MapDialogRect));
}

