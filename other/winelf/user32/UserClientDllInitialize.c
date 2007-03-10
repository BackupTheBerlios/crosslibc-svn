#include "user32.h"
void _elfimplib_UserClientDllInitialize() asm("UserClientDllInitialize");
void *_imp__UserClientDllInitialize = NULL;
__attribute__((constructor)) void _elfimplib_init_UserClientDllInitialize() {
load_dll_user32();
_imp__UserClientDllInitialize = (void *) _elf_GetProcAddress(_dll_user32, "UserClientDllInitialize");
}
void _elfimplib_UserClientDllInitialize() {
asm("leave\njmp *%0" : : "r"(_imp__UserClientDllInitialize));
}

