#include "user32.h"
void _elfimplib_DlgDirListComboBoxA() asm("DlgDirListComboBoxA");
void *_imp__DlgDirListComboBoxA = NULL;
__attribute__((constructor)) void _elfimplib_init_DlgDirListComboBoxA() {
load_dll_user32();
_imp__DlgDirListComboBoxA = (void *) _elf_GetProcAddress(_dll_user32, "DlgDirListComboBoxA");
}
void _elfimplib_DlgDirListComboBoxA() {
asm("leave\njmp *%0" : : "r"(_imp__DlgDirListComboBoxA));
}

