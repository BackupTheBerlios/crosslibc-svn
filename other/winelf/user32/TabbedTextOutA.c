#include "user32.h"
void _elfimplib_TabbedTextOutA() asm("TabbedTextOutA");
void *_imp__TabbedTextOutA = NULL;
__attribute__((constructor)) void _elfimplib_init_TabbedTextOutA() {
load_dll_user32();
_imp__TabbedTextOutA = (void *) _elf_GetProcAddress(_dll_user32, "TabbedTextOutA");
}
void _elfimplib_TabbedTextOutA() {
asm("leave\njmp *%0" : : "r"(_imp__TabbedTextOutA));
}

