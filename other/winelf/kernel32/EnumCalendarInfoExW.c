#include "kernel32.h"
void _elfimplib_EnumCalendarInfoExW() asm("EnumCalendarInfoExW");
void *_imp__EnumCalendarInfoExW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumCalendarInfoExW() {
load_dll_kernel32();
_imp__EnumCalendarInfoExW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumCalendarInfoExW");
}
void _elfimplib_EnumCalendarInfoExW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumCalendarInfoExW));
}

