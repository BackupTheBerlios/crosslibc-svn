#include "posix.h"
void _elfimplib_link() asm("UWIN_link");
void *_imp__link = NULL;
__attribute__((constructor)) void _elfimplib_init_link() {
if (OSCALL_which != 3) return;
load_dll_posix();
_imp__link = (void *) _elf_GetProcAddress(_dll_posix, "link");
}
void _elfimplib_link() {
asm("leave\njmp *%0" : : "r"(_imp__link));
}

