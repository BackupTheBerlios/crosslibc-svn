#include "user32.h"
void _elfimplib_OemToCharBuffA() asm("OemToCharBuffA");
void *_imp__OemToCharBuffA = NULL;
__attribute__((constructor)) void _elfimplib_init_OemToCharBuffA() {
load_dll_user32();
_imp__OemToCharBuffA = (void *) _elf_GetProcAddress(_dll_user32, "OemToCharBuffA");
}
void _elfimplib_OemToCharBuffA() {
asm("leave\njmp *%0" : : "r"(_imp__OemToCharBuffA));
}

