#include "user32.h"
void _elfimplib_DdeNameService() asm("DdeNameService");
void *_imp__DdeNameService = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeNameService() {
load_dll_user32();
_imp__DdeNameService = (void *) _elf_GetProcAddress(_dll_user32, "DdeNameService");
}
void _elfimplib_DdeNameService() {
asm("leave\njmp *%0" : : "r"(_imp__DdeNameService));
}

