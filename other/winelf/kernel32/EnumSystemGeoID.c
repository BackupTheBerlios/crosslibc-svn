#include "kernel32.h"
void _elfimplib_EnumSystemGeoID() asm("EnumSystemGeoID");
void *_imp__EnumSystemGeoID = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumSystemGeoID() {
load_dll_kernel32();
_imp__EnumSystemGeoID = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemGeoID");
}
void _elfimplib_EnumSystemGeoID() {
asm("leave\njmp *%0" : : "r"(_imp__EnumSystemGeoID));
}

