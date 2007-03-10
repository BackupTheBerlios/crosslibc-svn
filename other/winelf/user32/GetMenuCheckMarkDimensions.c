#include "user32.h"
void _elfimplib_GetMenuCheckMarkDimensions() asm("GetMenuCheckMarkDimensions");
void *_imp__GetMenuCheckMarkDimensions = NULL;
__attribute__((constructor)) void _elfimplib_init_GetMenuCheckMarkDimensions() {
load_dll_user32();
_imp__GetMenuCheckMarkDimensions = (void *) _elf_GetProcAddress(_dll_user32, "GetMenuCheckMarkDimensions");
}
void _elfimplib_GetMenuCheckMarkDimensions() {
asm("leave\njmp *%0" : : "r"(_imp__GetMenuCheckMarkDimensions));
}

