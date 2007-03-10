#include "user32.h"
void _elfimplib_SetLayeredWindowAttributes() asm("SetLayeredWindowAttributes");
void *_imp__SetLayeredWindowAttributes = NULL;
__attribute__((constructor)) void _elfimplib_init_SetLayeredWindowAttributes() {
load_dll_user32();
_imp__SetLayeredWindowAttributes = (void *) _elf_GetProcAddress(_dll_user32, "SetLayeredWindowAttributes");
}
void _elfimplib_SetLayeredWindowAttributes() {
asm("leave\njmp *%0" : : "r"(_imp__SetLayeredWindowAttributes));
}

