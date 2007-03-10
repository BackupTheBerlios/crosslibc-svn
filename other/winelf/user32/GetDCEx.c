#include "user32.h"
void _elfimplib_GetDCEx() asm("GetDCEx");
void *_imp__GetDCEx = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDCEx() {
load_dll_user32();
_imp__GetDCEx = (void *) _elf_GetProcAddress(_dll_user32, "GetDCEx");
}
void _elfimplib_GetDCEx() {
asm("leave\njmp *%0" : : "r"(_imp__GetDCEx));
}

