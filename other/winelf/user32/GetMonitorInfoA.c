#include "user32.h"
void _elfimplib_GetMonitorInfoA() asm("GetMonitorInfoA");
void *_imp__GetMonitorInfoA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetMonitorInfoA() {
load_dll_user32();
_imp__GetMonitorInfoA = (void *) _elf_GetProcAddress(_dll_user32, "GetMonitorInfoA");
}
void _elfimplib_GetMonitorInfoA() {
asm("leave\njmp *%0" : : "r"(_imp__GetMonitorInfoA));
}

