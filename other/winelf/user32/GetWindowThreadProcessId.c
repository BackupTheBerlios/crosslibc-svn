#include "user32.h"
void _elfimplib_GetWindowThreadProcessId() asm("GetWindowThreadProcessId");
void *_imp__GetWindowThreadProcessId = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWindowThreadProcessId() {
load_dll_user32();
_imp__GetWindowThreadProcessId = (void *) _elf_GetProcAddress(_dll_user32, "GetWindowThreadProcessId");
}
void _elfimplib_GetWindowThreadProcessId() {
asm("leave\njmp *%0" : : "r"(_imp__GetWindowThreadProcessId));
}

