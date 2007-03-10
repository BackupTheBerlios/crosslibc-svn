#include "user32.h"
void _elfimplib_UnregisterUserApiHook() asm("UnregisterUserApiHook");
void *_imp__UnregisterUserApiHook = NULL;
__attribute__((constructor)) void _elfimplib_init_UnregisterUserApiHook() {
load_dll_user32();
_imp__UnregisterUserApiHook = (void *) _elf_GetProcAddress(_dll_user32, "UnregisterUserApiHook");
}
void _elfimplib_UnregisterUserApiHook() {
asm("leave\njmp *%0" : : "r"(_imp__UnregisterUserApiHook));
}

