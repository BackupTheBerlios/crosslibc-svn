#include "user32.h"
void _elfimplib_CallNextHookEx() asm("CallNextHookEx");
void *_imp__CallNextHookEx = NULL;
__attribute__((constructor)) void _elfimplib_init_CallNextHookEx() {
load_dll_user32();
_imp__CallNextHookEx = (void *) _elf_GetProcAddress(_dll_user32, "CallNextHookEx");
}
void _elfimplib_CallNextHookEx() {
asm("leave\njmp *%0" : : "r"(_imp__CallNextHookEx));
}

