#include "user32.h"
void _elfimplib_MB_GetString() asm("MB_GetString");
void *_imp__MB_GetString = NULL;
__attribute__((constructor)) void _elfimplib_init_MB_GetString() {
load_dll_user32();
_imp__MB_GetString = (void *) _elf_GetProcAddress(_dll_user32, "MB_GetString");
}
void _elfimplib_MB_GetString() {
asm("leave\njmp *%0" : : "r"(_imp__MB_GetString));
}

