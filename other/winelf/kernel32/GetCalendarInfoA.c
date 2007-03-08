#include "kernel32.h"
void _elfimplib_GetCalendarInfoA() asm("GetCalendarInfoA");
void *_imp__GetCalendarInfoA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCalendarInfoA() {
load_dll_kernel32();
_imp__GetCalendarInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCalendarInfoA");
}
void _elfimplib_GetCalendarInfoA() {
asm("leave\njmp *%0" : : "r"(_imp__GetCalendarInfoA));
}

