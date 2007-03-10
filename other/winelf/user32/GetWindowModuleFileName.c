#include "user32.h"
void _elfimplib_GetWindowModuleFileName() asm("GetWindowModuleFileName");
void *_imp__GetWindowModuleFileName = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWindowModuleFileName() {
load_dll_user32();
_imp__GetWindowModuleFileName = (void *) _elf_GetProcAddress(_dll_user32, "GetWindowModuleFileName");
}
void _elfimplib_GetWindowModuleFileName() {
asm("leave\njmp *%0" : : "r"(_imp__GetWindowModuleFileName));
}

