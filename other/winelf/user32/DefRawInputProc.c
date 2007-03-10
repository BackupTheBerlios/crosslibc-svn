#include "user32.h"
void _elfimplib_DefRawInputProc() asm("DefRawInputProc");
void *_imp__DefRawInputProc = NULL;
__attribute__((constructor)) void _elfimplib_init_DefRawInputProc() {
load_dll_user32();
_imp__DefRawInputProc = (void *) _elf_GetProcAddress(_dll_user32, "DefRawInputProc");
}
void _elfimplib_DefRawInputProc() {
asm("leave\njmp *%0" : : "r"(_imp__DefRawInputProc));
}

