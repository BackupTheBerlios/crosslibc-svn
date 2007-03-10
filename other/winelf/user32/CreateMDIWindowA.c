#include "user32.h"
void _elfimplib_CreateMDIWindowA() asm("CreateMDIWindowA");
void *_imp__CreateMDIWindowA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateMDIWindowA() {
load_dll_user32();
_imp__CreateMDIWindowA = (void *) _elf_GetProcAddress(_dll_user32, "CreateMDIWindowA");
}
void _elfimplib_CreateMDIWindowA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateMDIWindowA));
}

