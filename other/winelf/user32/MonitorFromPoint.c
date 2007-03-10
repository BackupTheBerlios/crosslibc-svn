#include "user32.h"
void _elfimplib_MonitorFromPoint() asm("MonitorFromPoint");
void *_imp__MonitorFromPoint = NULL;
__attribute__((constructor)) void _elfimplib_init_MonitorFromPoint() {
load_dll_user32();
_imp__MonitorFromPoint = (void *) _elf_GetProcAddress(_dll_user32, "MonitorFromPoint");
}
void _elfimplib_MonitorFromPoint() {
asm("leave\njmp *%0" : : "r"(_imp__MonitorFromPoint));
}

