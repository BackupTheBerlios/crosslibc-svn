#include "user32.h"
void _elfimplib_CtxInitUser32() asm("CtxInitUser32");
void *_imp__CtxInitUser32 = NULL;
__attribute__((constructor)) void _elfimplib_init_CtxInitUser32() {
load_dll_user32();
_imp__CtxInitUser32 = (void *) _elf_GetProcAddress(_dll_user32, "CtxInitUser32");
}
void _elfimplib_CtxInitUser32() {
asm("leave\njmp *%0" : : "r"(_imp__CtxInitUser32));
}

