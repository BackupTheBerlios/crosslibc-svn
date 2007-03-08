#include "kernel32.h"
void _elfimplib_EnumCalendarInfoA() asm("EnumCalendarInfoA");
void *_imp__EnumCalendarInfoA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumCalendarInfoA() {
load_dll_kernel32();
_imp__EnumCalendarInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumCalendarInfoA");
}
void _elfimplib_EnumCalendarInfoA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumCalendarInfoA));
}

