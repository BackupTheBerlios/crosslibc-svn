#include "user32.h"
void _elfimplib_DdeUnaccessData() asm("DdeUnaccessData");
void *_imp__DdeUnaccessData = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeUnaccessData() {
load_dll_user32();
_imp__DdeUnaccessData = (void *) _elf_GetProcAddress(_dll_user32, "DdeUnaccessData");
}
void _elfimplib_DdeUnaccessData() {
asm("leave\njmp *%0" : : "r"(_imp__DdeUnaccessData));
}

