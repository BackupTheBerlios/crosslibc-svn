#include "user32.h"
void _elfimplib_GetWindowModuleFileNameW() asm("GetWindowModuleFileNameW");
void *_imp__GetWindowModuleFileNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWindowModuleFileNameW() {
load_dll_user32();
_imp__GetWindowModuleFileNameW = (void *) _elf_GetProcAddress(_dll_user32, "GetWindowModuleFileNameW");
}
void _elfimplib_GetWindowModuleFileNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetWindowModuleFileNameW));
}

