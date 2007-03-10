#include "user32.h"
void _elfimplib_FlashWindowEx() asm("FlashWindowEx");
void *_imp__FlashWindowEx = NULL;
__attribute__((constructor)) void _elfimplib_init_FlashWindowEx() {
load_dll_user32();
_imp__FlashWindowEx = (void *) _elf_GetProcAddress(_dll_user32, "FlashWindowEx");
}
void _elfimplib_FlashWindowEx() {
asm("leave\njmp *%0" : : "r"(_imp__FlashWindowEx));
}

