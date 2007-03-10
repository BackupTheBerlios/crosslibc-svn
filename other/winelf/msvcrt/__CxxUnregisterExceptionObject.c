#include "msvcrt.h"
void _elfimplib___CxxUnregisterExceptionObject() asm("_CxxUnregisterExceptionObject");
void *_imp____CxxUnregisterExceptionObject = NULL;
__attribute__((constructor)) void _elfimplib_init___CxxUnregisterExceptionObject() {
load_dll_msvcrt();
_imp____CxxUnregisterExceptionObject = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxUnregisterExceptionObject");
}
void _elfimplib___CxxUnregisterExceptionObject() {
asm("leave\njmp *%0" : : "r"(_imp____CxxUnregisterExceptionObject));
}

void _elfimplibmang___CxxUnregisterExceptionObject() asm("__CxxUnregisterExceptionObject");
void _elfimplibmang___CxxUnregisterExceptionObject() {
asm("leave\njmp *%0" : : "r"(_imp____CxxUnregisterExceptionObject));
}

