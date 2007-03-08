#include "kernel32.h"
void _elfimplib_GetUserGeoID() asm("GetUserGeoID");
void *_imp__GetUserGeoID = NULL;
__attribute__((constructor)) void _elfimplib_init_GetUserGeoID() {
load_dll_kernel32();
_imp__GetUserGeoID = (void *) _elf_GetProcAddress(_dll_kernel32, "GetUserGeoID");
}
void _elfimplib_GetUserGeoID() {
asm("leave\njmp *%0" : : "r"(_imp__GetUserGeoID));
}

