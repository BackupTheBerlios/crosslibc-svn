#include "user32.h"
void _elfimplib_OemToCharA() asm("OemToCharA");
void *_imp__OemToCharA = NULL;
__attribute__((constructor)) void _elfimplib_init_OemToCharA() {
load_dll_user32();
_imp__OemToCharA = (void *) _elf_GetProcAddress(_dll_user32, "OemToCharA");
}
void _elfimplib_OemToCharA() {
asm("leave\njmp *%0" : : "r"(_imp__OemToCharA));
}

