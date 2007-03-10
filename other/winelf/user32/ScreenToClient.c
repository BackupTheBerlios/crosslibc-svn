#include "user32.h"
void _elfimplib_ScreenToClient() asm("ScreenToClient");
void *_imp__ScreenToClient = NULL;
__attribute__((constructor)) void _elfimplib_init_ScreenToClient() {
load_dll_user32();
_imp__ScreenToClient = (void *) _elf_GetProcAddress(_dll_user32, "ScreenToClient");
}
void _elfimplib_ScreenToClient() {
asm("leave\njmp *%0" : : "r"(_imp__ScreenToClient));
}

