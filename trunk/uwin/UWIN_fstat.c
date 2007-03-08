#include "posix.h"
void _elfimplib_fstat() asm("UWIN_fstat");
void *_imp__fstat = NULL;
__attribute__((constructor)) void _elfimplib_init_fstat() {
if (OSCALL_which != 3) return;
load_dll_posix();
_imp__fstat = (void *) _elf_GetProcAddress(_dll_posix, "fstat");
}
void _elfimplib_fstat() {
asm("leave\njmp *%0" : : "r"(_imp__fstat));
}

