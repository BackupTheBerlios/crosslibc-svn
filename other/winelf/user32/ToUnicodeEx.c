#include "user32.h"
void _elfimplib_ToUnicodeEx() asm("ToUnicodeEx");
void *_imp__ToUnicodeEx = NULL;
__attribute__((constructor)) void _elfimplib_init_ToUnicodeEx() {
load_dll_user32();
_imp__ToUnicodeEx = (void *) _elf_GetProcAddress(_dll_user32, "ToUnicodeEx");
}
void _elfimplib_ToUnicodeEx() {
asm("leave\njmp *%0" : : "r"(_imp__ToUnicodeEx));
}

