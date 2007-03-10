#include "user32.h"
void _elfimplib_GetGuiResources() asm("GetGuiResources");
void *_imp__GetGuiResources = NULL;
__attribute__((constructor)) void _elfimplib_init_GetGuiResources() {
load_dll_user32();
_imp__GetGuiResources = (void *) _elf_GetProcAddress(_dll_user32, "GetGuiResources");
}
void _elfimplib_GetGuiResources() {
asm("leave\njmp *%0" : : "r"(_imp__GetGuiResources));
}

