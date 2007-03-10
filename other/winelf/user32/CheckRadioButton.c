#include "user32.h"
void _elfimplib_CheckRadioButton() asm("CheckRadioButton");
void *_imp__CheckRadioButton = NULL;
__attribute__((constructor)) void _elfimplib_init_CheckRadioButton() {
load_dll_user32();
_imp__CheckRadioButton = (void *) _elf_GetProcAddress(_dll_user32, "CheckRadioButton");
}
void _elfimplib_CheckRadioButton() {
asm("leave\njmp *%0" : : "r"(_imp__CheckRadioButton));
}

