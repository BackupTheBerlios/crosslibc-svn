#include "user32.h"
void _elfimplib_DefDlgProcA() asm("DefDlgProcA");
void *_imp__DefDlgProcA = NULL;
__attribute__((constructor)) void _elfimplib_init_DefDlgProcA() {
load_dll_user32();
_imp__DefDlgProcA = (void *) _elf_GetProcAddress(_dll_user32, "DefDlgProcA");
}
void _elfimplib_DefDlgProcA() {
asm("leave\njmp *%0" : : "r"(_imp__DefDlgProcA));
}

