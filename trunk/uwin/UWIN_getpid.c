#include "posix.h"
void _elfimplib_getpid() asm("UWIN_getpid");
void *_imp__getpid = NULL;
__attribute__((constructor)) void _elfimplib_init_getpid() {
if (OSCALL_which != 3) return;
load_dll_posix();
_imp__getpid = (void *) _elf_GetProcAddress(_dll_posix, "getpid");
}
void _elfimplib_getpid() {
asm("leave\njmp *%0" : : "r"(_imp__getpid));
}

