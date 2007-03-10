#include "user32.h"
void _elfimplib_GetClassNameW() asm("GetClassNameW");
void *_imp__GetClassNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetClassNameW() {
load_dll_user32();
_imp__GetClassNameW = (void *) _elf_GetProcAddress(_dll_user32, "GetClassNameW");
}
void _elfimplib_GetClassNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetClassNameW));
}

