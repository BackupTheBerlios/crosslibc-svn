#include "user32.h"
void _elfimplib_ExitWindowsEx() asm("ExitWindowsEx");
void *_imp__ExitWindowsEx = NULL;
__attribute__((constructor)) void _elfimplib_init_ExitWindowsEx() {
load_dll_user32();
_imp__ExitWindowsEx = (void *) _elf_GetProcAddress(_dll_user32, "ExitWindowsEx");
}
void _elfimplib_ExitWindowsEx() {
asm("leave\njmp *%0" : : "r"(_imp__ExitWindowsEx));
}

