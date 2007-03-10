#include "user32.h"
void _elfimplib_ToAsciiEx() asm("ToAsciiEx");
void *_imp__ToAsciiEx = NULL;
__attribute__((constructor)) void _elfimplib_init_ToAsciiEx() {
load_dll_user32();
_imp__ToAsciiEx = (void *) _elf_GetProcAddress(_dll_user32, "ToAsciiEx");
}
void _elfimplib_ToAsciiEx() {
asm("leave\njmp *%0" : : "r"(_imp__ToAsciiEx));
}

