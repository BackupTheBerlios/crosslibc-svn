#include "user32.h"
void _elfimplib_UnregisterMessagePumpHook() asm("UnregisterMessagePumpHook");
void *_imp__UnregisterMessagePumpHook = NULL;
__attribute__((constructor)) void _elfimplib_init_UnregisterMessagePumpHook() {
load_dll_user32();
_imp__UnregisterMessagePumpHook = (void *) _elf_GetProcAddress(_dll_user32, "UnregisterMessagePumpHook");
}
void _elfimplib_UnregisterMessagePumpHook() {
asm("leave\njmp *%0" : : "r"(_imp__UnregisterMessagePumpHook));
}

