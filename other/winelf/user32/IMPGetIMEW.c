#include "user32.h"
void _elfimplib_IMPGetIMEW() asm("IMPGetIMEW");
void *_imp__IMPGetIMEW = NULL;
__attribute__((constructor)) void _elfimplib_init_IMPGetIMEW() {
load_dll_user32();
_imp__IMPGetIMEW = (void *) _elf_GetProcAddress(_dll_user32, "IMPGetIMEW");
}
void _elfimplib_IMPGetIMEW() {
asm("leave\njmp *%0" : : "r"(_imp__IMPGetIMEW));
}

