#include "user32.h"
void _elfimplib_EnumWindowStationsA() asm("EnumWindowStationsA");
void *_imp__EnumWindowStationsA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumWindowStationsA() {
load_dll_user32();
_imp__EnumWindowStationsA = (void *) _elf_GetProcAddress(_dll_user32, "EnumWindowStationsA");
}
void _elfimplib_EnumWindowStationsA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumWindowStationsA));
}

