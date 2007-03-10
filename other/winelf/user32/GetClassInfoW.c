#include "user32.h"
void _elfimplib_GetClassInfoW() asm("GetClassInfoW");
void *_imp__GetClassInfoW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetClassInfoW() {
load_dll_user32();
_imp__GetClassInfoW = (void *) _elf_GetProcAddress(_dll_user32, "GetClassInfoW");
}
void _elfimplib_GetClassInfoW() {
asm("leave\njmp *%0" : : "r"(_imp__GetClassInfoW));
}

