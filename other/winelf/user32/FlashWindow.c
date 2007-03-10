#include "user32.h"
void _elfimplib_FlashWindow() asm("FlashWindow");
void *_imp__FlashWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_FlashWindow() {
load_dll_user32();
_imp__FlashWindow = (void *) _elf_GetProcAddress(_dll_user32, "FlashWindow");
}
void _elfimplib_FlashWindow() {
asm("leave\njmp *%0" : : "r"(_imp__FlashWindow));
}

