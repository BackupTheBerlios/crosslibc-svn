#include "user32.h"
void _elfimplib_WinHelpA() asm("WinHelpA");
void *_imp__WinHelpA = NULL;
__attribute__((constructor)) void _elfimplib_init_WinHelpA() {
load_dll_user32();
_imp__WinHelpA = (void *) _elf_GetProcAddress(_dll_user32, "WinHelpA");
}
void _elfimplib_WinHelpA() {
asm("leave\njmp *%0" : : "r"(_imp__WinHelpA));
}

