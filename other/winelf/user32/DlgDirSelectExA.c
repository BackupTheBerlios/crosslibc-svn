#include "user32.h"
void _elfimplib_DlgDirSelectExA() asm("DlgDirSelectExA");
void *_imp__DlgDirSelectExA = NULL;
__attribute__((constructor)) void _elfimplib_init_DlgDirSelectExA() {
load_dll_user32();
_imp__DlgDirSelectExA = (void *) _elf_GetProcAddress(_dll_user32, "DlgDirSelectExA");
}
void _elfimplib_DlgDirSelectExA() {
asm("leave\njmp *%0" : : "r"(_imp__DlgDirSelectExA));
}

