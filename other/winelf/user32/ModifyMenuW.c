#include "user32.h"
void _elfimplib_ModifyMenuW() asm("ModifyMenuW");
void *_imp__ModifyMenuW = NULL;
__attribute__((constructor)) void _elfimplib_init_ModifyMenuW() {
load_dll_user32();
_imp__ModifyMenuW = (void *) _elf_GetProcAddress(_dll_user32, "ModifyMenuW");
}
void _elfimplib_ModifyMenuW() {
asm("leave\njmp *%0" : : "r"(_imp__ModifyMenuW));
}

