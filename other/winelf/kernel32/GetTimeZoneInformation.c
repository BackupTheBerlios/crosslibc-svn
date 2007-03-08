#include "kernel32.h"
void _elfimplib_GetTimeZoneInformation() asm("GetTimeZoneInformation");
void *_imp__GetTimeZoneInformation = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTimeZoneInformation() {
load_dll_kernel32();
_imp__GetTimeZoneInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTimeZoneInformation");
}
void _elfimplib_GetTimeZoneInformation() {
asm("leave\njmp *%0" : : "r"(_imp__GetTimeZoneInformation));
}

