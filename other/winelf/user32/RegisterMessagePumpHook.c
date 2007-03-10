#include "user32.h"
void _elfimplib_RegisterMessagePumpHook() asm("RegisterMessagePumpHook");
void *_imp__RegisterMessagePumpHook = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterMessagePumpHook() {
load_dll_user32();
_imp__RegisterMessagePumpHook = (void *) _elf_GetProcAddress(_dll_user32, "RegisterMessagePumpHook");
}
void _elfimplib_RegisterMessagePumpHook() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterMessagePumpHook));
}

