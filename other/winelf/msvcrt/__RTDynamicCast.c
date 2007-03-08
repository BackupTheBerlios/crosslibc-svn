#include "msvcrt.h"
void _elfimplib___RTDynamicCast() asm("_RTDynamicCast");
void *_imp____RTDynamicCast = NULL;
__attribute__((constructor)) void _elfimplib_init___RTDynamicCast() {
load_dll_msvcrt();
_imp____RTDynamicCast = (void *) _elf_GetProcAddress(_dll_msvcrt, "__RTDynamicCast");
}
void _elfimplib___RTDynamicCast() {
asm("leave\njmp *%0" : : "r"(_imp____RTDynamicCast));
}

