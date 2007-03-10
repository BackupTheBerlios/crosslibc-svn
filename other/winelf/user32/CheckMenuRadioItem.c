#include "user32.h"
void _elfimplib_CheckMenuRadioItem() asm("CheckMenuRadioItem");
void *_imp__CheckMenuRadioItem = NULL;
__attribute__((constructor)) void _elfimplib_init_CheckMenuRadioItem() {
load_dll_user32();
_imp__CheckMenuRadioItem = (void *) _elf_GetProcAddress(_dll_user32, "CheckMenuRadioItem");
}
void _elfimplib_CheckMenuRadioItem() {
asm("leave\njmp *%0" : : "r"(_imp__CheckMenuRadioItem));
}

