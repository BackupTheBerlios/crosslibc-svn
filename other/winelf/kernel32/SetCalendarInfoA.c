#include "kernel32.h"
void _elfimplib_SetCalendarInfoA() asm("SetCalendarInfoA");
void *_imp__SetCalendarInfoA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCalendarInfoA() {
load_dll_kernel32();
_imp__SetCalendarInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCalendarInfoA");
}
void _elfimplib_SetCalendarInfoA() {
asm("leave\njmp *%0" : : "r"(_imp__SetCalendarInfoA));
}

