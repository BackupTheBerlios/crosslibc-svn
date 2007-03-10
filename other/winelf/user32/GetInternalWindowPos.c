#include "user32.h"
void _elfimplib_GetInternalWindowPos() asm("GetInternalWindowPos");
void *_imp__GetInternalWindowPos = NULL;
__attribute__((constructor)) void _elfimplib_init_GetInternalWindowPos() {
load_dll_user32();
_imp__GetInternalWindowPos = (void *) _elf_GetProcAddress(_dll_user32, "GetInternalWindowPos");
}
void _elfimplib_GetInternalWindowPos() {
asm("leave\njmp *%0" : : "r"(_imp__GetInternalWindowPos));
}

