#include "user32.h"
void _elfimplib_OpenWindowStationA() asm("OpenWindowStationA");
void *_imp__OpenWindowStationA = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenWindowStationA() {
load_dll_user32();
_imp__OpenWindowStationA = (void *) _elf_GetProcAddress(_dll_user32, "OpenWindowStationA");
}
void _elfimplib_OpenWindowStationA() {
asm("leave\njmp *%0" : : "r"(_imp__OpenWindowStationA));
}

