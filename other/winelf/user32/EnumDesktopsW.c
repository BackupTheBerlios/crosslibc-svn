#include "user32.h"
void _elfimplib_EnumDesktopsW() asm("EnumDesktopsW");
void *_imp__EnumDesktopsW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumDesktopsW() {
load_dll_user32();
_imp__EnumDesktopsW = (void *) _elf_GetProcAddress(_dll_user32, "EnumDesktopsW");
}
void _elfimplib_EnumDesktopsW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumDesktopsW));
}

