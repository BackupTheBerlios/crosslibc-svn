#include "user32.h"
void _elfimplib_CreateDialogParamW() asm("CreateDialogParamW");
void *_imp__CreateDialogParamW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateDialogParamW() {
load_dll_user32();
_imp__CreateDialogParamW = (void *) _elf_GetProcAddress(_dll_user32, "CreateDialogParamW");
}
void _elfimplib_CreateDialogParamW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateDialogParamW));
}

