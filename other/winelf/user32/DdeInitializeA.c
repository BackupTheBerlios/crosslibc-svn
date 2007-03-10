#include "user32.h"
void _elfimplib_DdeInitializeA() asm("DdeInitializeA");
void *_imp__DdeInitializeA = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeInitializeA() {
load_dll_user32();
_imp__DdeInitializeA = (void *) _elf_GetProcAddress(_dll_user32, "DdeInitializeA");
}
void _elfimplib_DdeInitializeA() {
asm("leave\njmp *%0" : : "r"(_imp__DdeInitializeA));
}

