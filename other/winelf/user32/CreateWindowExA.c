#include "user32.h"
void _elfimplib_CreateWindowExA() asm("CreateWindowExA");
void *_imp__CreateWindowExA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateWindowExA() {
load_dll_user32();
_imp__CreateWindowExA = (void *) _elf_GetProcAddress(_dll_user32, "CreateWindowExA");
}
void _elfimplib_CreateWindowExA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateWindowExA));
}

