#include "user32.h"
void _elfimplib_GetMessagePos() asm("GetMessagePos");
void *_imp__GetMessagePos = NULL;
__attribute__((constructor)) void _elfimplib_init_GetMessagePos() {
load_dll_user32();
_imp__GetMessagePos = (void *) _elf_GetProcAddress(_dll_user32, "GetMessagePos");
}
void _elfimplib_GetMessagePos() {
asm("leave\njmp *%0" : : "r"(_imp__GetMessagePos));
}

