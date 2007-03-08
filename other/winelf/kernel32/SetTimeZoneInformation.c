#include "kernel32.h"
void _elfimplib_SetTimeZoneInformation() asm("SetTimeZoneInformation");
void *_imp__SetTimeZoneInformation = NULL;
__attribute__((constructor)) void _elfimplib_init_SetTimeZoneInformation() {
load_dll_kernel32();
_imp__SetTimeZoneInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "SetTimeZoneInformation");
}
void _elfimplib_SetTimeZoneInformation() {
asm("leave\njmp *%0" : : "r"(_imp__SetTimeZoneInformation));
}

