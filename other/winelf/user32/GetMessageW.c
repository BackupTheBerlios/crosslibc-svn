#include "user32.h"
void _elfimplib_GetMessageW() asm("GetMessageW");
void *_imp__GetMessageW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetMessageW() {
load_dll_user32();
_imp__GetMessageW = (void *) _elf_GetProcAddress(_dll_user32, "GetMessageW");
}
void _elfimplib_GetMessageW() {
asm("leave\njmp *%0" : : "r"(_imp__GetMessageW));
}

