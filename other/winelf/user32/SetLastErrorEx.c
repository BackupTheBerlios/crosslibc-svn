#include "user32.h"
void _elfimplib_SetLastErrorEx() asm("SetLastErrorEx");
void *_imp__SetLastErrorEx = NULL;
__attribute__((constructor)) void _elfimplib_init_SetLastErrorEx() {
load_dll_user32();
_imp__SetLastErrorEx = (void *) _elf_GetProcAddress(_dll_user32, "SetLastErrorEx");
}
void _elfimplib_SetLastErrorEx() {
asm("leave\njmp *%0" : : "r"(_imp__SetLastErrorEx));
}

