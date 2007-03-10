#include "user32.h"
void _elfimplib_UnregisterHotKey() asm("UnregisterHotKey");
void *_imp__UnregisterHotKey = NULL;
__attribute__((constructor)) void _elfimplib_init_UnregisterHotKey() {
load_dll_user32();
_imp__UnregisterHotKey = (void *) _elf_GetProcAddress(_dll_user32, "UnregisterHotKey");
}
void _elfimplib_UnregisterHotKey() {
asm("leave\njmp *%0" : : "r"(_imp__UnregisterHotKey));
}

