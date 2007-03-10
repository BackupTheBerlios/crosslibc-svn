#include "user32.h"
void _elfimplib_CreateDialogIndirectParamW() asm("CreateDialogIndirectParamW");
void *_imp__CreateDialogIndirectParamW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateDialogIndirectParamW() {
load_dll_user32();
_imp__CreateDialogIndirectParamW = (void *) _elf_GetProcAddress(_dll_user32, "CreateDialogIndirectParamW");
}
void _elfimplib_CreateDialogIndirectParamW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateDialogIndirectParamW));
}

