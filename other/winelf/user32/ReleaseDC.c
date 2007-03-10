#include "user32.h"
void _elfimplib_ReleaseDC() asm("ReleaseDC");
void *_imp__ReleaseDC = NULL;
__attribute__((constructor)) void _elfimplib_init_ReleaseDC() {
load_dll_user32();
_imp__ReleaseDC = (void *) _elf_GetProcAddress(_dll_user32, "ReleaseDC");
}
void _elfimplib_ReleaseDC() {
asm("leave\njmp *%0" : : "r"(_imp__ReleaseDC));
}

