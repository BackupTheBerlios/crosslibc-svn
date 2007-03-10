#include "msvcrt.h"
void _elfimplib___DestructExceptionObject() asm("_DestructExceptionObject");
void *_imp____DestructExceptionObject = NULL;
__attribute__((constructor)) void _elfimplib_init___DestructExceptionObject() {
load_dll_msvcrt();
_imp____DestructExceptionObject = (void *) _elf_GetProcAddress(_dll_msvcrt, "__DestructExceptionObject");
}
void _elfimplib___DestructExceptionObject() {
asm("leave\njmp *%0" : : "r"(_imp____DestructExceptionObject));
}

void _elfimplibmang___DestructExceptionObject() asm("__DestructExceptionObject");
void _elfimplibmang___DestructExceptionObject() {
asm("leave\njmp *%0" : : "r"(_imp____DestructExceptionObject));
}

