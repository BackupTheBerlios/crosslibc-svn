#include "user32.h"
void _elfimplib_GetAppCompatFlags() asm("GetAppCompatFlags");
void *_imp__GetAppCompatFlags = NULL;
__attribute__((constructor)) void _elfimplib_init_GetAppCompatFlags() {
load_dll_user32();
_imp__GetAppCompatFlags = (void *) _elf_GetProcAddress(_dll_user32, "GetAppCompatFlags");
}
void _elfimplib_GetAppCompatFlags() {
asm("leave\njmp *%0" : : "r"(_imp__GetAppCompatFlags));
}

