#include "user32.h"
void _elfimplib_GetUserObjectSecurity() asm("GetUserObjectSecurity");
void *_imp__GetUserObjectSecurity = NULL;
__attribute__((constructor)) void _elfimplib_init_GetUserObjectSecurity() {
load_dll_user32();
_imp__GetUserObjectSecurity = (void *) _elf_GetProcAddress(_dll_user32, "GetUserObjectSecurity");
}
void _elfimplib_GetUserObjectSecurity() {
asm("leave\njmp *%0" : : "r"(_imp__GetUserObjectSecurity));
}

