#include "user32.h"
void _elfimplib_MBToWCSEx() asm("MBToWCSEx");
void *_imp__MBToWCSEx = NULL;
__attribute__((constructor)) void _elfimplib_init_MBToWCSEx() {
load_dll_user32();
_imp__MBToWCSEx = (void *) _elf_GetProcAddress(_dll_user32, "MBToWCSEx");
}
void _elfimplib_MBToWCSEx() {
asm("leave\njmp *%0" : : "r"(_imp__MBToWCSEx));
}

