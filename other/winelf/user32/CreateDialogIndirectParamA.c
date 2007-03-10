#include "user32.h"
void _elfimplib_CreateDialogIndirectParamA() asm("CreateDialogIndirectParamA");
void *_imp__CreateDialogIndirectParamA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateDialogIndirectParamA() {
load_dll_user32();
_imp__CreateDialogIndirectParamA = (void *) _elf_GetProcAddress(_dll_user32, "CreateDialogIndirectParamA");
}
void _elfimplib_CreateDialogIndirectParamA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateDialogIndirectParamA));
}

