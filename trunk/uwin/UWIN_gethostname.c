#include "posix.h"
void _elfimplib_gethostname() asm("UWIN_gethostname");
void *_imp__gethostname = NULL;
__attribute__((constructor)) void _elfimplib_init_gethostname() {
if (OSCALL_which != 3) return;
load_dll_posix();
_imp__gethostname = (void *) _elf_GetProcAddress(_dll_posix, "gethostname");
}
void _elfimplib_gethostname() {
asm("leave\njmp *%0" : : "r"(_imp__gethostname));
}

