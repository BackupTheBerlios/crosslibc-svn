#include "user32.h"
void _elfimplib_ModifyMenuA() asm("ModifyMenuA");
void *_imp__ModifyMenuA = NULL;
__attribute__((constructor)) void _elfimplib_init_ModifyMenuA() {
load_dll_user32();
_imp__ModifyMenuA = (void *) _elf_GetProcAddress(_dll_user32, "ModifyMenuA");
}
void _elfimplib_ModifyMenuA() {
asm("leave\njmp *%0" : : "r"(_imp__ModifyMenuA));
}

