#include "user32.h"
void _elfimplib_RegisterUserApiHook() asm("RegisterUserApiHook");
void *_imp__RegisterUserApiHook = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterUserApiHook() {
load_dll_user32();
_imp__RegisterUserApiHook = (void *) _elf_GetProcAddress(_dll_user32, "RegisterUserApiHook");
}
void _elfimplib_RegisterUserApiHook() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterUserApiHook));
}

