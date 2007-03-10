#include "user32.h"
void _elfimplib_DlgDirListA() asm("DlgDirListA");
void *_imp__DlgDirListA = NULL;
__attribute__((constructor)) void _elfimplib_init_DlgDirListA() {
load_dll_user32();
_imp__DlgDirListA = (void *) _elf_GetProcAddress(_dll_user32, "DlgDirListA");
}
void _elfimplib_DlgDirListA() {
asm("leave\njmp *%0" : : "r"(_imp__DlgDirListA));
}

