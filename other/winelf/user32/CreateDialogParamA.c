#include "user32.h"
void _elfimplib_CreateDialogParamA() asm("CreateDialogParamA");
void *_imp__CreateDialogParamA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateDialogParamA() {
load_dll_user32();
_imp__CreateDialogParamA = (void *) _elf_GetProcAddress(_dll_user32, "CreateDialogParamA");
}
void _elfimplib_CreateDialogParamA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateDialogParamA));
}

