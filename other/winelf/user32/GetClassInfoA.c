#include "user32.h"
void _elfimplib_GetClassInfoA() asm("GetClassInfoA");
void *_imp__GetClassInfoA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetClassInfoA() {
load_dll_user32();
_imp__GetClassInfoA = (void *) _elf_GetProcAddress(_dll_user32, "GetClassInfoA");
}
void _elfimplib_GetClassInfoA() {
asm("leave\njmp *%0" : : "r"(_imp__GetClassInfoA));
}

