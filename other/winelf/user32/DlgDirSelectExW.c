#include "user32.h"
void _elfimplib_DlgDirSelectExW() asm("DlgDirSelectExW");
void *_imp__DlgDirSelectExW = NULL;
__attribute__((constructor)) void _elfimplib_init_DlgDirSelectExW() {
load_dll_user32();
_imp__DlgDirSelectExW = (void *) _elf_GetProcAddress(_dll_user32, "DlgDirSelectExW");
}
void _elfimplib_DlgDirSelectExW() {
asm("leave\njmp *%0" : : "r"(_imp__DlgDirSelectExW));
}

