#include "user32.h"
void _elfimplib_DlgDirListComboBoxW() asm("DlgDirListComboBoxW");
void *_imp__DlgDirListComboBoxW = NULL;
__attribute__((constructor)) void _elfimplib_init_DlgDirListComboBoxW() {
load_dll_user32();
_imp__DlgDirListComboBoxW = (void *) _elf_GetProcAddress(_dll_user32, "DlgDirListComboBoxW");
}
void _elfimplib_DlgDirListComboBoxW() {
asm("leave\njmp *%0" : : "r"(_imp__DlgDirListComboBoxW));
}
