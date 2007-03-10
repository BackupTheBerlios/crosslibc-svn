#include "user32.h"
void _elfimplib_EnumWindowStationsW() asm("EnumWindowStationsW");
void *_imp__EnumWindowStationsW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumWindowStationsW() {
load_dll_user32();
_imp__EnumWindowStationsW = (void *) _elf_GetProcAddress(_dll_user32, "EnumWindowStationsW");
}
void _elfimplib_EnumWindowStationsW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumWindowStationsW));
}

