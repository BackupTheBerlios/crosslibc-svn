#include "msvcrt.h"
void _elfimplib___CxxRegisterExceptionObject() asm("_CxxRegisterExceptionObject");
void *_imp____CxxRegisterExceptionObject = NULL;
__attribute__((constructor)) void _elfimplib_init___CxxRegisterExceptionObject() {
load_dll_msvcrt();
_imp____CxxRegisterExceptionObject = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxRegisterExceptionObject");
}
void _elfimplib___CxxRegisterExceptionObject() {
asm("leave\njmp *%0" : : "r"(_imp____CxxRegisterExceptionObject));
}

void _elfimplibmang___CxxRegisterExceptionObject() asm("__CxxRegisterExceptionObject");
void _elfimplibmang___CxxRegisterExceptionObject() {
asm("leave\njmp *%0" : : "r"(_imp____CxxRegisterExceptionObject));
}

