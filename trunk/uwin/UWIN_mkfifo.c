#include "posix.h"
void _elfimplib_mkfifo() asm("UWIN_mkfifo");
void *_imp__mkfifo = NULL;
__attribute__((constructor)) void _elfimplib_init_mkfifo() {
if (OSCALL_which != 3) return;
load_dll_posix();
_imp__mkfifo = (void *) _elf_GetProcAddress(_dll_posix, "mkfifo");
}
void _elfimplib_mkfifo() {
asm("leave\njmp *%0" : : "r"(_imp__mkfifo));
}

