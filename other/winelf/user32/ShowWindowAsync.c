#include "user32.h"
void _elfimplib_ShowWindowAsync() asm("ShowWindowAsync");
void *_imp__ShowWindowAsync = NULL;
__attribute__((constructor)) void _elfimplib_init_ShowWindowAsync() {
load_dll_user32();
_imp__ShowWindowAsync = (void *) _elf_GetProcAddress(_dll_user32, "ShowWindowAsync");
}
void _elfimplib_ShowWindowAsync() {
asm("leave\njmp *%0" : : "r"(_imp__ShowWindowAsync));
}

