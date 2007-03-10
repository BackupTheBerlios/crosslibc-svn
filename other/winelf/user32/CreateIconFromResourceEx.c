#include "user32.h"
void _elfimplib_CreateIconFromResourceEx() asm("CreateIconFromResourceEx");
void *_imp__CreateIconFromResourceEx = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateIconFromResourceEx() {
load_dll_user32();
_imp__CreateIconFromResourceEx = (void *) _elf_GetProcAddress(_dll_user32, "CreateIconFromResourceEx");
}
void _elfimplib_CreateIconFromResourceEx() {
asm("leave\njmp *%0" : : "r"(_imp__CreateIconFromResourceEx));
}

