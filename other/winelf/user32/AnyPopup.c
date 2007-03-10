#include "user32.h"
void _elfimplib_AnyPopup() asm("AnyPopup");
void *_imp__AnyPopup = NULL;
__attribute__((constructor)) void _elfimplib_init_AnyPopup() {
load_dll_user32();
_imp__AnyPopup = (void *) _elf_GetProcAddress(_dll_user32, "AnyPopup");
}
void _elfimplib_AnyPopup() {
asm("leave\njmp *%0" : : "r"(_imp__AnyPopup));
}

