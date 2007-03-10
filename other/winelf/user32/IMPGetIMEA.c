#include "user32.h"
void _elfimplib_IMPGetIMEA() asm("IMPGetIMEA");
void *_imp__IMPGetIMEA = NULL;
__attribute__((constructor)) void _elfimplib_init_IMPGetIMEA() {
load_dll_user32();
_imp__IMPGetIMEA = (void *) _elf_GetProcAddress(_dll_user32, "IMPGetIMEA");
}
void _elfimplib_IMPGetIMEA() {
asm("leave\njmp *%0" : : "r"(_imp__IMPGetIMEA));
}

