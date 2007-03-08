#include "msvcrt.h"
void _elfimplib__c_exit() asm("c_exit");
void *_imp___c_exit = NULL;
__attribute__((constructor)) void _elfimplib_init__c_exit() {
load_dll_msvcrt();
_imp___c_exit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_c_exit");
}
void _elfimplib__c_exit() {
asm("leave\njmp *%0" : : "r"(_imp___c_exit));
}

