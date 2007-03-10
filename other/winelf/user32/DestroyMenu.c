#include "user32.h"
void _elfimplib_DestroyMenu() asm("DestroyMenu");
void *_imp__DestroyMenu = NULL;
__attribute__((constructor)) void _elfimplib_init_DestroyMenu() {
load_dll_user32();
_imp__DestroyMenu = (void *) _elf_GetProcAddress(_dll_user32, "DestroyMenu");
}
void _elfimplib_DestroyMenu() {
asm("leave\njmp *%0" : : "r"(_imp__DestroyMenu));
}

