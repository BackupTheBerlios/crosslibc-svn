#include "user32.h"
void _elfimplib_MonitorFromWindow() asm("MonitorFromWindow");
void *_imp__MonitorFromWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_MonitorFromWindow() {
load_dll_user32();
_imp__MonitorFromWindow = (void *) _elf_GetProcAddress(_dll_user32, "MonitorFromWindow");
}
void _elfimplib_MonitorFromWindow() {
asm("leave\njmp *%0" : : "r"(_imp__MonitorFromWindow));
}

