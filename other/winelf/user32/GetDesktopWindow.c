#include "user32.h"
void _elfimplib_GetDesktopWindow() asm("GetDesktopWindow");
void *_imp__GetDesktopWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDesktopWindow() {
load_dll_user32();
_imp__GetDesktopWindow = (void *) _elf_GetProcAddress(_dll_user32, "GetDesktopWindow");
}
void _elfimplib_GetDesktopWindow() {
asm("leave\njmp *%0" : : "r"(_imp__GetDesktopWindow));
}

