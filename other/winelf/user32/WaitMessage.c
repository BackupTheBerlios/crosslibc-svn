#include "user32.h"
void _elfimplib_WaitMessage() asm("WaitMessage");
void *_imp__WaitMessage = NULL;
__attribute__((constructor)) void _elfimplib_init_WaitMessage() {
load_dll_user32();
_imp__WaitMessage = (void *) _elf_GetProcAddress(_dll_user32, "WaitMessage");
}
void _elfimplib_WaitMessage() {
asm("leave\njmp *%0" : : "r"(_imp__WaitMessage));
}

