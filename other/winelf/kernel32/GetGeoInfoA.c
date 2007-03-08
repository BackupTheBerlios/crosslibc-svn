#include "kernel32.h"
void _elfimplib_GetGeoInfoA() asm("GetGeoInfoA");
void *_imp__GetGeoInfoA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetGeoInfoA() {
load_dll_kernel32();
_imp__GetGeoInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetGeoInfoA");
}
void _elfimplib_GetGeoInfoA() {
asm("leave\njmp *%0" : : "r"(_imp__GetGeoInfoA));
}

