#include "user32.h"
void _elfimplib_UserHandleGrantAccess() asm("UserHandleGrantAccess");
void *_imp__UserHandleGrantAccess = NULL;
__attribute__((constructor)) void _elfimplib_init_UserHandleGrantAccess() {
load_dll_user32();
_imp__UserHandleGrantAccess = (void *) _elf_GetProcAddress(_dll_user32, "UserHandleGrantAccess");
}
void _elfimplib_UserHandleGrantAccess() {
asm("leave\njmp *%0" : : "r"(_imp__UserHandleGrantAccess));
}

