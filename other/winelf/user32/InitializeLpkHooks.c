#include "user32.h"
void _elfimplib_InitializeLpkHooks() asm("InitializeLpkHooks");
void *_imp__InitializeLpkHooks = NULL;
__attribute__((constructor)) void _elfimplib_init_InitializeLpkHooks() {
load_dll_user32();
_imp__InitializeLpkHooks = (void *) _elf_GetProcAddress(_dll_user32, "InitializeLpkHooks");
}
void _elfimplib_InitializeLpkHooks() {
asm("leave\njmp *%0" : : "r"(_imp__InitializeLpkHooks));
}

