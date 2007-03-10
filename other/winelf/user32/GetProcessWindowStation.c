#include "user32.h"
void _elfimplib_GetProcessWindowStation() asm("GetProcessWindowStation");
void *_imp__GetProcessWindowStation = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcessWindowStation() {
load_dll_user32();
_imp__GetProcessWindowStation = (void *) _elf_GetProcAddress(_dll_user32, "GetProcessWindowStation");
}
void _elfimplib_GetProcessWindowStation() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcessWindowStation));
}

