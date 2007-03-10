#include "user32.h"
void _elfimplib_CreateWindowStationW() asm("CreateWindowStationW");
void *_imp__CreateWindowStationW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateWindowStationW() {
load_dll_user32();
_imp__CreateWindowStationW = (void *) _elf_GetProcAddress(_dll_user32, "CreateWindowStationW");
}
void _elfimplib_CreateWindowStationW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateWindowStationW));
}

