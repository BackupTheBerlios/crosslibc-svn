#include "msvcrt.h"
void _elfimplib__local_unwind2() asm("local_unwind2");
void *_imp___local_unwind2 = NULL;
__attribute__((constructor)) void _elfimplib_init__local_unwind2() {
load_dll_msvcrt();
_imp___local_unwind2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_local_unwind2");
}
void _elfimplib__local_unwind2() {
asm("leave\njmp *%0" : : "r"(_imp___local_unwind2));
}

void _elfimplibmang__local_unwind2() asm("_local_unwind2");
void _elfimplibmang__local_unwind2() {
asm("leave\njmp *%0" : : "r"(_imp___local_unwind2));
}

