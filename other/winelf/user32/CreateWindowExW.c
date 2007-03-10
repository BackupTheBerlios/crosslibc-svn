#include "user32.h"
void _elfimplib_CreateWindowExW() asm("CreateWindowExW");
void *_imp__CreateWindowExW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateWindowExW() {
load_dll_user32();
_imp__CreateWindowExW = (void *) _elf_GetProcAddress(_dll_user32, "CreateWindowExW");
}
void _elfimplib_CreateWindowExW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateWindowExW));
}

