#include "user32.h"
void _elfimplib_GetLayeredWindowAttributes() asm("GetLayeredWindowAttributes");
void *_imp__GetLayeredWindowAttributes = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLayeredWindowAttributes() {
load_dll_user32();
_imp__GetLayeredWindowAttributes = (void *) _elf_GetProcAddress(_dll_user32, "GetLayeredWindowAttributes");
}
void _elfimplib_GetLayeredWindowAttributes() {
asm("leave\njmp *%0" : : "r"(_imp__GetLayeredWindowAttributes));
}

