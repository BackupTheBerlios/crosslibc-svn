#include "user32.h"
void _elfimplib_EndDialog() asm("EndDialog");
void *_imp__EndDialog = NULL;
__attribute__((constructor)) void _elfimplib_init_EndDialog() {
load_dll_user32();
_imp__EndDialog = (void *) _elf_GetProcAddress(_dll_user32, "EndDialog");
}
void _elfimplib_EndDialog() {
asm("leave\njmp *%0" : : "r"(_imp__EndDialog));
}

