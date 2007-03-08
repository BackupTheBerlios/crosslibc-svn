#include "posix.h"
void _elfimplib_tcgetattr() asm("UWIN_tcgetattr");
void *_imp__tcgetattr = NULL;
__attribute__((constructor)) void _elfimplib_init_tcgetattr() {
if (OSCALL_which != 3) return;
load_dll_posix();
_imp__tcgetattr = (void *) _elf_GetProcAddress(_dll_posix, "tcgetattr");
}
void _elfimplib_tcgetattr() {
asm("leave\njmp *%0" : : "r"(_imp__tcgetattr));
}

