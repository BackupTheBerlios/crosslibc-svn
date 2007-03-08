#include "kernel32.h"
void _elfimplib_SetCalendarInfoW() asm("SetCalendarInfoW");
void *_imp__SetCalendarInfoW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCalendarInfoW() {
load_dll_kernel32();
_imp__SetCalendarInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCalendarInfoW");
}
void _elfimplib_SetCalendarInfoW() {
asm("leave\njmp *%0" : : "r"(_imp__SetCalendarInfoW));
}

