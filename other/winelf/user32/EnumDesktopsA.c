#include "user32.h"
void _elfimplib_EnumDesktopsA() asm("EnumDesktopsA");
void *_imp__EnumDesktopsA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumDesktopsA() {
load_dll_user32();
_imp__EnumDesktopsA = (void *) _elf_GetProcAddress(_dll_user32, "EnumDesktopsA");
}
void _elfimplib_EnumDesktopsA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumDesktopsA));
}

