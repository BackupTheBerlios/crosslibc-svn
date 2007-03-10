#include "user32.h"
void _elfimplib_SetWindowStationUser() asm("SetWindowStationUser");
void *_imp__SetWindowStationUser = NULL;
__attribute__((constructor)) void _elfimplib_init_SetWindowStationUser() {
load_dll_user32();
_imp__SetWindowStationUser = (void *) _elf_GetProcAddress(_dll_user32, "SetWindowStationUser");
}
void _elfimplib_SetWindowStationUser() {
asm("leave\njmp *%0" : : "r"(_imp__SetWindowStationUser));
}

