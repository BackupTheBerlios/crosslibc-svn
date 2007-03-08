#include "msvcrt.h"
void _elfimplib__abnormal_termination() asm("abnormal_termination");
void *_imp___abnormal_termination = NULL;
__attribute__((constructor)) void _elfimplib_init__abnormal_termination() {
load_dll_msvcrt();
_imp___abnormal_termination = (void *) _elf_GetProcAddress(_dll_msvcrt, "_abnormal_termination");
}
void _elfimplib__abnormal_termination() {
asm("leave\njmp *%0" : : "r"(_imp___abnormal_termination));
}

