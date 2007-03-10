#include "user32.h"
void _elfimplib_RegisterTasklist() asm("RegisterTasklist");
void *_imp__RegisterTasklist = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterTasklist() {
load_dll_user32();
_imp__RegisterTasklist = (void *) _elf_GetProcAddress(_dll_user32, "RegisterTasklist");
}
void _elfimplib_RegisterTasklist() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterTasklist));
}

