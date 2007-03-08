#include "kernel32.h"
void _elfimplib_GetGeoInfoW() asm("GetGeoInfoW");
void *_imp__GetGeoInfoW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetGeoInfoW() {
load_dll_kernel32();
_imp__GetGeoInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetGeoInfoW");
}
void _elfimplib_GetGeoInfoW() {
asm("leave\njmp *%0" : : "r"(_imp__GetGeoInfoW));
}

