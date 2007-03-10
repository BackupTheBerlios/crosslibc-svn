#include "user32.h"
void _elfimplib_GetActiveWindow() asm("GetActiveWindow");
void *_imp__GetActiveWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_GetActiveWindow() {
load_dll_user32();
_imp__GetActiveWindow = (void *) _elf_GetProcAddress(_dll_user32, "GetActiveWindow");
}
void _elfimplib_GetActiveWindow() {
asm("leave\njmp *%0" : : "r"(_imp__GetActiveWindow));
}

