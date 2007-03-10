#include "user32.h"
void _elfimplib_WinHelpW() asm("WinHelpW");
void *_imp__WinHelpW = NULL;
__attribute__((constructor)) void _elfimplib_init_WinHelpW() {
load_dll_user32();
_imp__WinHelpW = (void *) _elf_GetProcAddress(_dll_user32, "WinHelpW");
}
void _elfimplib_WinHelpW() {
asm("leave\njmp *%0" : : "r"(_imp__WinHelpW));
}

