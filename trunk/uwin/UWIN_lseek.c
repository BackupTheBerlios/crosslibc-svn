#include "posix.h"
void _elfimplib_lseek() asm("UWIN_lseek");
void *_imp__lseek = NULL;
__attribute__((constructor)) void _elfimplib_init_lseek() {
if (OSCALL_which != 3) return;
load_dll_posix();
_imp__lseek = (void *) _elf_GetProcAddress(_dll_posix, "lseek");
}
void _elfimplib_lseek() {
asm("leave\njmp *%0" : : "r"(_imp__lseek));
}

