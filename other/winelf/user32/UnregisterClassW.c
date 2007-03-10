#include "user32.h"
void _elfimplib_UnregisterClassW() asm("UnregisterClassW");
void *_imp__UnregisterClassW = NULL;
__attribute__((constructor)) void _elfimplib_init_UnregisterClassW() {
load_dll_user32();
_imp__UnregisterClassW = (void *) _elf_GetProcAddress(_dll_user32, "UnregisterClassW");
}
void _elfimplib_UnregisterClassW() {
asm("leave\njmp *%0" : : "r"(_imp__UnregisterClassW));
}

