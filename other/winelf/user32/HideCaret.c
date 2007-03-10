#include "user32.h"
void _elfimplib_HideCaret() asm("HideCaret");
void *_imp__HideCaret = NULL;
__attribute__((constructor)) void _elfimplib_init_HideCaret() {
load_dll_user32();
_imp__HideCaret = (void *) _elf_GetProcAddress(_dll_user32, "HideCaret");
}
void _elfimplib_HideCaret() {
asm("leave\njmp *%0" : : "r"(_imp__HideCaret));
}

