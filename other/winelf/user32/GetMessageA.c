#include "user32.h"
void _elfimplib_GetMessageA() asm("GetMessageA");
void *_imp__GetMessageA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetMessageA() {
load_dll_user32();
_imp__GetMessageA = (void *) _elf_GetProcAddress(_dll_user32, "GetMessageA");
}
void _elfimplib_GetMessageA() {
asm("leave\njmp *%0" : : "r"(_imp__GetMessageA));
}

