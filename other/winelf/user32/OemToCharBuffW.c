#include "user32.h"
void _elfimplib_OemToCharBuffW() asm("OemToCharBuffW");
void *_imp__OemToCharBuffW = NULL;
__attribute__((constructor)) void _elfimplib_init_OemToCharBuffW() {
load_dll_user32();
_imp__OemToCharBuffW = (void *) _elf_GetProcAddress(_dll_user32, "OemToCharBuffW");
}
void _elfimplib_OemToCharBuffW() {
asm("leave\njmp *%0" : : "r"(_imp__OemToCharBuffW));
}

