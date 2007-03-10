#include "user32.h"
void _elfimplib_GetClassInfoExA() asm("GetClassInfoExA");
void *_imp__GetClassInfoExA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetClassInfoExA() {
load_dll_user32();
_imp__GetClassInfoExA = (void *) _elf_GetProcAddress(_dll_user32, "GetClassInfoExA");
}
void _elfimplib_GetClassInfoExA() {
asm("leave\njmp *%0" : : "r"(_imp__GetClassInfoExA));
}

