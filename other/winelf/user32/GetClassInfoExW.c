#include "user32.h"
void _elfimplib_GetClassInfoExW() asm("GetClassInfoExW");
void *_imp__GetClassInfoExW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetClassInfoExW() {
load_dll_user32();
_imp__GetClassInfoExW = (void *) _elf_GetProcAddress(_dll_user32, "GetClassInfoExW");
}
void _elfimplib_GetClassInfoExW() {
asm("leave\njmp *%0" : : "r"(_imp__GetClassInfoExW));
}

