#include "user32.h"
void _elfimplib_IMPSetIMEA() asm("IMPSetIMEA");
void *_imp__IMPSetIMEA = NULL;
__attribute__((constructor)) void _elfimplib_init_IMPSetIMEA() {
load_dll_user32();
_imp__IMPSetIMEA = (void *) _elf_GetProcAddress(_dll_user32, "IMPSetIMEA");
}
void _elfimplib_IMPSetIMEA() {
asm("leave\njmp *%0" : : "r"(_imp__IMPSetIMEA));
}

