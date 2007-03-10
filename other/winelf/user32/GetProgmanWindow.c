#include "user32.h"
void _elfimplib_GetProgmanWindow() asm("GetProgmanWindow");
void *_imp__GetProgmanWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProgmanWindow() {
load_dll_user32();
_imp__GetProgmanWindow = (void *) _elf_GetProcAddress(_dll_user32, "GetProgmanWindow");
}
void _elfimplib_GetProgmanWindow() {
asm("leave\njmp *%0" : : "r"(_imp__GetProgmanWindow));
}

