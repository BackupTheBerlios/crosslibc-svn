#include "kernel32.h"
void _elfimplib_SetUserGeoID() asm("SetUserGeoID");
void *_imp__SetUserGeoID = NULL;
__attribute__((constructor)) void _elfimplib_init_SetUserGeoID() {
load_dll_kernel32();
_imp__SetUserGeoID = (void *) _elf_GetProcAddress(_dll_kernel32, "SetUserGeoID");
}
void _elfimplib_SetUserGeoID() {
asm("leave\njmp *%0" : : "r"(_imp__SetUserGeoID));
}

