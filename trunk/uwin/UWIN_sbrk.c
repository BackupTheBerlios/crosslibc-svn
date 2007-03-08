#include "posix.h"
void _elfimplib_sbrk() asm("UWIN_sbrk");
void *_imp__sbrk = NULL;
__attribute__((constructor)) void _elfimplib_init_sbrk() {
if (OSCALL_which != 3) return;
load_dll_posix();
_imp__sbrk = (void *) _elf_GetProcAddress(_dll_posix, "sbrk");
}
void _elfimplib_sbrk() {
asm("leave\njmp *%0" : : "r"(_imp__sbrk));
}

