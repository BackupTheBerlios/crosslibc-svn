#include "user32.h"
void _elfimplib_GetClassLongA() asm("GetClassLongA");
void *_imp__GetClassLongA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetClassLongA() {
load_dll_user32();
_imp__GetClassLongA = (void *) _elf_GetProcAddress(_dll_user32, "GetClassLongA");
}
void _elfimplib_GetClassLongA() {
asm("leave\njmp *%0" : : "r"(_imp__GetClassLongA));
}

