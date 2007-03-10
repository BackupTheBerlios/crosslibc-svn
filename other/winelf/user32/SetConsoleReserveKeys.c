#include "user32.h"
void _elfimplib_SetConsoleReserveKeys() asm("SetConsoleReserveKeys");
void *_imp__SetConsoleReserveKeys = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleReserveKeys() {
load_dll_user32();
_imp__SetConsoleReserveKeys = (void *) _elf_GetProcAddress(_dll_user32, "SetConsoleReserveKeys");
}
void _elfimplib_SetConsoleReserveKeys() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleReserveKeys));
}

