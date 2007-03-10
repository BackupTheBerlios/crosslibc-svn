#include "user32.h"
void _elfimplib_GetAltTabInfoA() asm("GetAltTabInfoA");
void *_imp__GetAltTabInfoA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetAltTabInfoA() {
load_dll_user32();
_imp__GetAltTabInfoA = (void *) _elf_GetProcAddress(_dll_user32, "GetAltTabInfoA");
}
void _elfimplib_GetAltTabInfoA() {
asm("leave\njmp *%0" : : "r"(_imp__GetAltTabInfoA));
}

