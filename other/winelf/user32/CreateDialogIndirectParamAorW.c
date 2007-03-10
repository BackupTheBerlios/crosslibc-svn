#include "user32.h"
void _elfimplib_CreateDialogIndirectParamAorW() asm("CreateDialogIndirectParamAorW");
void *_imp__CreateDialogIndirectParamAorW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateDialogIndirectParamAorW() {
load_dll_user32();
_imp__CreateDialogIndirectParamAorW = (void *) _elf_GetProcAddress(_dll_user32, "CreateDialogIndirectParamAorW");
}
void _elfimplib_CreateDialogIndirectParamAorW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateDialogIndirectParamAorW));
}

