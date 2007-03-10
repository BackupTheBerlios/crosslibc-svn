#include "user32.h"
void _elfimplib_GetAppCompatFlags2() asm("GetAppCompatFlags2");
void *_imp__GetAppCompatFlags2 = NULL;
__attribute__((constructor)) void _elfimplib_init_GetAppCompatFlags2() {
load_dll_user32();
_imp__GetAppCompatFlags2 = (void *) _elf_GetProcAddress(_dll_user32, "GetAppCompatFlags2");
}
void _elfimplib_GetAppCompatFlags2() {
asm("leave\njmp *%0" : : "r"(_imp__GetAppCompatFlags2));
}

