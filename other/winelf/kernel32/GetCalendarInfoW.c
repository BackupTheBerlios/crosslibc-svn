#include "kernel32.h"
void _elfimplib_GetCalendarInfoW() asm("GetCalendarInfoW");
void *_imp__GetCalendarInfoW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCalendarInfoW() {
load_dll_kernel32();
_imp__GetCalendarInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCalendarInfoW");
}
void _elfimplib_GetCalendarInfoW() {
asm("leave\njmp *%0" : : "r"(_imp__GetCalendarInfoW));
}

