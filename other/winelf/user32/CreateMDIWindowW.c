#include "user32.h"
void _elfimplib_CreateMDIWindowW() asm("CreateMDIWindowW");
void *_imp__CreateMDIWindowW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateMDIWindowW() {
load_dll_user32();
_imp__CreateMDIWindowW = (void *) _elf_GetProcAddress(_dll_user32, "CreateMDIWindowW");
}
void _elfimplib_CreateMDIWindowW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateMDIWindowW));
}

