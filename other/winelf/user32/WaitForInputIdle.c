#include "user32.h"
void _elfimplib_WaitForInputIdle() asm("WaitForInputIdle");
void *_imp__WaitForInputIdle = NULL;
__attribute__((constructor)) void _elfimplib_init_WaitForInputIdle() {
load_dll_user32();
_imp__WaitForInputIdle = (void *) _elf_GetProcAddress(_dll_user32, "WaitForInputIdle");
}
void _elfimplib_WaitForInputIdle() {
asm("leave\njmp *%0" : : "r"(_imp__WaitForInputIdle));
}

