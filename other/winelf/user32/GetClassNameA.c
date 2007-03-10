#include "user32.h"
void _elfimplib_GetClassNameA() asm("GetClassNameA");
void *_imp__GetClassNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetClassNameA() {
load_dll_user32();
_imp__GetClassNameA = (void *) _elf_GetProcAddress(_dll_user32, "GetClassNameA");
}
void _elfimplib_GetClassNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetClassNameA));
}

