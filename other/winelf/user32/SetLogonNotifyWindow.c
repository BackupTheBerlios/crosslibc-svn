#include "user32.h"
void _elfimplib_SetLogonNotifyWindow() asm("SetLogonNotifyWindow");
void *_imp__SetLogonNotifyWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_SetLogonNotifyWindow() {
load_dll_user32();
_imp__SetLogonNotifyWindow = (void *) _elf_GetProcAddress(_dll_user32, "SetLogonNotifyWindow");
}
void _elfimplib_SetLogonNotifyWindow() {
asm("leave\njmp *%0" : : "r"(_imp__SetLogonNotifyWindow));
}

