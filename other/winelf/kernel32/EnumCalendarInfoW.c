#include "kernel32.h"
void _elfimplib_EnumCalendarInfoW() asm("EnumCalendarInfoW");
void *_imp__EnumCalendarInfoW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumCalendarInfoW() {
load_dll_kernel32();
_imp__EnumCalendarInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumCalendarInfoW");
}
void _elfimplib_EnumCalendarInfoW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumCalendarInfoW));
}

