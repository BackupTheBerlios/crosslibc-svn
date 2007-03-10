#include "user32.h"
void _elfimplib_DefFrameProcA() asm("DefFrameProcA");
void *_imp__DefFrameProcA = NULL;
__attribute__((constructor)) void _elfimplib_init_DefFrameProcA() {
load_dll_user32();
_imp__DefFrameProcA = (void *) _elf_GetProcAddress(_dll_user32, "DefFrameProcA");
}
void _elfimplib_DefFrameProcA() {
asm("leave\njmp *%0" : : "r"(_imp__DefFrameProcA));
}

