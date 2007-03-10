#include "user32.h"
void _elfimplib_GetWindow() asm("GetWindow");
void *_imp__GetWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWindow() {
load_dll_user32();
_imp__GetWindow = (void *) _elf_GetProcAddress(_dll_user32, "GetWindow");
}
void _elfimplib_GetWindow() {
asm("leave\njmp *%0" : : "r"(_imp__GetWindow));
}

