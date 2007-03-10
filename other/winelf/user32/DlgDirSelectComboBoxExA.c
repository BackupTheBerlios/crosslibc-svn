#include "user32.h"
void _elfimplib_DlgDirSelectComboBoxExA() asm("DlgDirSelectComboBoxExA");
void *_imp__DlgDirSelectComboBoxExA = NULL;
__attribute__((constructor)) void _elfimplib_init_DlgDirSelectComboBoxExA() {
load_dll_user32();
_imp__DlgDirSelectComboBoxExA = (void *) _elf_GetProcAddress(_dll_user32, "DlgDirSelectComboBoxExA");
}
void _elfimplib_DlgDirSelectComboBoxExA() {
asm("leave\njmp *%0" : : "r"(_imp__DlgDirSelectComboBoxExA));
}

