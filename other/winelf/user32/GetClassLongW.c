#include "user32.h"
void _elfimplib_GetClassLongW() asm("GetClassLongW");
void *_imp__GetClassLongW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetClassLongW() {
load_dll_user32();
_imp__GetClassLongW = (void *) _elf_GetProcAddress(_dll_user32, "GetClassLongW");
}
void _elfimplib_GetClassLongW() {
asm("leave\njmp *%0" : : "r"(_imp__GetClassLongW));
}

