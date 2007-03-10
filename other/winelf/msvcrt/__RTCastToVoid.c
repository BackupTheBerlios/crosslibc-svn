#include "msvcrt.h"
void _elfimplib___RTCastToVoid() asm("_RTCastToVoid");
void *_imp____RTCastToVoid = NULL;
__attribute__((constructor)) void _elfimplib_init___RTCastToVoid() {
load_dll_msvcrt();
_imp____RTCastToVoid = (void *) _elf_GetProcAddress(_dll_msvcrt, "__RTCastToVoid");
}
void _elfimplib___RTCastToVoid() {
asm("leave\njmp *%0" : : "r"(_imp____RTCastToVoid));
}

void _elfimplibmang___RTCastToVoid() asm("__RTCastToVoid");
void _elfimplibmang___RTCastToVoid() {
asm("leave\njmp *%0" : : "r"(_imp____RTCastToVoid));
}

