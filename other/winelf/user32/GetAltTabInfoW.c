#include "user32.h"
void _elfimplib_GetAltTabInfoW() asm("GetAltTabInfoW");
void *_imp__GetAltTabInfoW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetAltTabInfoW() {
load_dll_user32();
_imp__GetAltTabInfoW = (void *) _elf_GetProcAddress(_dll_user32, "GetAltTabInfoW");
}
void _elfimplib_GetAltTabInfoW() {
asm("leave\njmp *%0" : : "r"(_imp__GetAltTabInfoW));
}

