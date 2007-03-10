#include "user32.h"
void _elfimplib_ReuseDDElParam() asm("ReuseDDElParam");
void *_imp__ReuseDDElParam = NULL;
__attribute__((constructor)) void _elfimplib_init_ReuseDDElParam() {
load_dll_user32();
_imp__ReuseDDElParam = (void *) _elf_GetProcAddress(_dll_user32, "ReuseDDElParam");
}
void _elfimplib_ReuseDDElParam() {
asm("leave\njmp *%0" : : "r"(_imp__ReuseDDElParam));
}

