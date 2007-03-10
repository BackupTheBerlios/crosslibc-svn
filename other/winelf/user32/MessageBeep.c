#include "user32.h"
void _elfimplib_MessageBeep() asm("MessageBeep");
void *_imp__MessageBeep = NULL;
__attribute__((constructor)) void _elfimplib_init_MessageBeep() {
load_dll_user32();
_imp__MessageBeep = (void *) _elf_GetProcAddress(_dll_user32, "MessageBeep");
}
void _elfimplib_MessageBeep() {
asm("leave\njmp *%0" : : "r"(_imp__MessageBeep));
}

