#include "user32.h"
void _elfimplib_SwapMouseButton() asm("SwapMouseButton");
void *_imp__SwapMouseButton = NULL;
__attribute__((constructor)) void _elfimplib_init_SwapMouseButton() {
load_dll_user32();
_imp__SwapMouseButton = (void *) _elf_GetProcAddress(_dll_user32, "SwapMouseButton");
}
void _elfimplib_SwapMouseButton() {
asm("leave\njmp *%0" : : "r"(_imp__SwapMouseButton));
}

