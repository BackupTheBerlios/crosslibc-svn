#include "user32.h"
void _elfimplib_GetListBoxInfo() asm("GetListBoxInfo");
void *_imp__GetListBoxInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetListBoxInfo() {
load_dll_user32();
_imp__GetListBoxInfo = (void *) _elf_GetProcAddress(_dll_user32, "GetListBoxInfo");
}
void _elfimplib_GetListBoxInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetListBoxInfo));
}

