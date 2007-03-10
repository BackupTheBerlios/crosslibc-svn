#include "user32.h"
void _elfimplib_CreateWindowStationA() asm("CreateWindowStationA");
void *_imp__CreateWindowStationA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateWindowStationA() {
load_dll_user32();
_imp__CreateWindowStationA = (void *) _elf_GetProcAddress(_dll_user32, "CreateWindowStationA");
}
void _elfimplib_CreateWindowStationA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateWindowStationA));
}

