#include "user32.h"
void _elfimplib_ToUnicode() asm("ToUnicode");
void *_imp__ToUnicode = NULL;
__attribute__((constructor)) void _elfimplib_init_ToUnicode() {
load_dll_user32();
_imp__ToUnicode = (void *) _elf_GetProcAddress(_dll_user32, "ToUnicode");
}
void _elfimplib_ToUnicode() {
asm("leave\njmp *%0" : : "r"(_imp__ToUnicode));
}

