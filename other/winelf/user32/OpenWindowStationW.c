#include "user32.h"
void _elfimplib_OpenWindowStationW() asm("OpenWindowStationW");
void *_imp__OpenWindowStationW = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenWindowStationW() {
load_dll_user32();
_imp__OpenWindowStationW = (void *) _elf_GetProcAddress(_dll_user32, "OpenWindowStationW");
}
void _elfimplib_OpenWindowStationW() {
asm("leave\njmp *%0" : : "r"(_imp__OpenWindowStationW));
}

