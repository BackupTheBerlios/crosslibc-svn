#include "user32.h"
void _elfimplib_DefDlgProcW() asm("DefDlgProcW");
void *_imp__DefDlgProcW = NULL;
__attribute__((constructor)) void _elfimplib_init_DefDlgProcW() {
load_dll_user32();
_imp__DefDlgProcW = (void *) _elf_GetProcAddress(_dll_user32, "DefDlgProcW");
}
void _elfimplib_DefDlgProcW() {
asm("leave\njmp *%0" : : "r"(_imp__DefDlgProcW));
}

