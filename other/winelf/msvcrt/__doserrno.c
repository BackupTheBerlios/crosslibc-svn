#include "msvcrt.h"
void _elfimplib___doserrno() asm("_doserrno");
void *_imp____doserrno = NULL;
__attribute__((constructor)) void _elfimplib_init___doserrno() {
load_dll_msvcrt();
_imp____doserrno = (void *) _elf_GetProcAddress(_dll_msvcrt, "__doserrno");
}
void _elfimplib___doserrno() {
asm("leave\njmp *%0" : : "r"(_imp____doserrno));
}

void _elfimplibmang___doserrno() asm("__doserrno");
void _elfimplibmang___doserrno() {
asm("leave\njmp *%0" : : "r"(_imp____doserrno));
}

