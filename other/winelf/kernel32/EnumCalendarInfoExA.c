#include "kernel32.h"
void _elfimplib_EnumCalendarInfoExA() asm("EnumCalendarInfoExA");
void *_imp__EnumCalendarInfoExA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumCalendarInfoExA() {
load_dll_kernel32();
_imp__EnumCalendarInfoExA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumCalendarInfoExA");
}
void _elfimplib_EnumCalendarInfoExA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumCalendarInfoExA));
}

