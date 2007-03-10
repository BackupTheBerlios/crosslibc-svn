#include "user32.h"
void _elfimplib_IMPSetIMEW() asm("IMPSetIMEW");
void *_imp__IMPSetIMEW = NULL;
__attribute__((constructor)) void _elfimplib_init_IMPSetIMEW() {
load_dll_user32();
_imp__IMPSetIMEW = (void *) _elf_GetProcAddress(_dll_user32, "IMPSetIMEW");
}
void _elfimplib_IMPSetIMEW() {
asm("leave\njmp *%0" : : "r"(_imp__IMPSetIMEW));
}

