#include "user32.h"
void _elfimplib_DlgDirListW() asm("DlgDirListW");
void *_imp__DlgDirListW = NULL;
__attribute__((constructor)) void _elfimplib_init_DlgDirListW() {
load_dll_user32();
_imp__DlgDirListW = (void *) _elf_GetProcAddress(_dll_user32, "DlgDirListW");
}
void _elfimplib_DlgDirListW() {
asm("leave\njmp *%0" : : "r"(_imp__DlgDirListW));
}

