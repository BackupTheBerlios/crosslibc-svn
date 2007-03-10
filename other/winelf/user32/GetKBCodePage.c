#include "user32.h"
void _elfimplib_GetKBCodePage() asm("GetKBCodePage");
void *_imp__GetKBCodePage = NULL;
__attribute__((constructor)) void _elfimplib_init_GetKBCodePage() {
load_dll_user32();
_imp__GetKBCodePage = (void *) _elf_GetProcAddress(_dll_user32, "GetKBCodePage");
}
void _elfimplib_GetKBCodePage() {
asm("leave\njmp *%0" : : "r"(_imp__GetKBCodePage));
}

