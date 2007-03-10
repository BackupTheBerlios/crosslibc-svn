#include "user32.h"
void _elfimplib_IMPQueryIMEA() asm("IMPQueryIMEA");
void *_imp__IMPQueryIMEA = NULL;
__attribute__((constructor)) void _elfimplib_init_IMPQueryIMEA() {
load_dll_user32();
_imp__IMPQueryIMEA = (void *) _elf_GetProcAddress(_dll_user32, "IMPQueryIMEA");
}
void _elfimplib_IMPQueryIMEA() {
asm("leave\njmp *%0" : : "r"(_imp__IMPQueryIMEA));
}

