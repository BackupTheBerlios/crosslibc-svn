#include "user32.h"
void _elfimplib_DlgDirSelectComboBoxExW() asm("DlgDirSelectComboBoxExW");
void *_imp__DlgDirSelectComboBoxExW = NULL;
__attribute__((constructor)) void _elfimplib_init_DlgDirSelectComboBoxExW() {
load_dll_user32();
_imp__DlgDirSelectComboBoxExW = (void *) _elf_GetProcAddress(_dll_user32, "DlgDirSelectComboBoxExW");
}
void _elfimplib_DlgDirSelectComboBoxExW() {
asm("leave\njmp *%0" : : "r"(_imp__DlgDirSelectComboBoxExW));
}

