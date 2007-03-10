#include "user32.h"
void _elfimplib_CloseDesktop() asm("CloseDesktop");
void *_imp__CloseDesktop = NULL;
__attribute__((constructor)) void _elfimplib_init_CloseDesktop() {
load_dll_user32();
_imp__CloseDesktop = (void *) _elf_GetProcAddress(_dll_user32, "CloseDesktop");
}
void _elfimplib_CloseDesktop() {
asm("leave\njmp *%0" : : "r"(_imp__CloseDesktop));
}

