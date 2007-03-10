#include "user32.h"
void _elfimplib_GetWindowModuleFileNameA() asm("GetWindowModuleFileNameA");
void *_imp__GetWindowModuleFileNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWindowModuleFileNameA() {
load_dll_user32();
_imp__GetWindowModuleFileNameA = (void *) _elf_GetProcAddress(_dll_user32, "GetWindowModuleFileNameA");
}
void _elfimplib_GetWindowModuleFileNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetWindowModuleFileNameA));
}

