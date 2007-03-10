#include "user32.h"
void _elfimplib_UserRegisterWowHandlers() asm("UserRegisterWowHandlers");
void *_imp__UserRegisterWowHandlers = NULL;
__attribute__((constructor)) void _elfimplib_init_UserRegisterWowHandlers() {
load_dll_user32();
_imp__UserRegisterWowHandlers = (void *) _elf_GetProcAddress(_dll_user32, "UserRegisterWowHandlers");
}
void _elfimplib_UserRegisterWowHandlers() {
asm("leave\njmp *%0" : : "r"(_imp__UserRegisterWowHandlers));
}

