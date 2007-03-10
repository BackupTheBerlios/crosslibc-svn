#include "user32.h"
void _elfimplib_DefFrameProcW() asm("DefFrameProcW");
void *_imp__DefFrameProcW = NULL;
__attribute__((constructor)) void _elfimplib_init_DefFrameProcW() {
load_dll_user32();
_imp__DefFrameProcW = (void *) _elf_GetProcAddress(_dll_user32, "DefFrameProcW");
}
void _elfimplib_DefFrameProcW() {
asm("leave\njmp *%0" : : "r"(_imp__DefFrameProcW));
}

