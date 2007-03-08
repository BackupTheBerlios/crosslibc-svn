#include "kernel32.h"
void _elfimplib_SetClientTimeZoneInformation() asm("SetClientTimeZoneInformation");
void *_imp__SetClientTimeZoneInformation = NULL;
__attribute__((constructor)) void _elfimplib_init_SetClientTimeZoneInformation() {
load_dll_kernel32();
_imp__SetClientTimeZoneInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "SetClientTimeZoneInformation");
}
void _elfimplib_SetClientTimeZoneInformation() {
asm("leave\njmp *%0" : : "r"(_imp__SetClientTimeZoneInformation));
}

