#include "user32.h"
void _elfimplib_SetUserObjectSecurity() asm("SetUserObjectSecurity");
void *_imp__SetUserObjectSecurity = NULL;
__attribute__((constructor)) void _elfimplib_init_SetUserObjectSecurity() {
load_dll_user32();
_imp__SetUserObjectSecurity = (void *) _elf_GetProcAddress(_dll_user32, "SetUserObjectSecurity");
}
void _elfimplib_SetUserObjectSecurity() {
asm("leave\njmp *%0" : : "r"(_imp__SetUserObjectSecurity));
}

