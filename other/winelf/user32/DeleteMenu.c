#include "user32.h"
void _elfimplib_DeleteMenu() asm("DeleteMenu");
void *_imp__DeleteMenu = NULL;
__attribute__((constructor)) void _elfimplib_init_DeleteMenu() {
load_dll_user32();
_imp__DeleteMenu = (void *) _elf_GetProcAddress(_dll_user32, "DeleteMenu");
}
void _elfimplib_DeleteMenu() {
asm("leave\njmp *%0" : : "r"(_imp__DeleteMenu));
}

