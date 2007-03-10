#include "user32.h"
void _elfimplib_GetClassWord() asm("GetClassWord");
void *_imp__GetClassWord = NULL;
__attribute__((constructor)) void _elfimplib_init_GetClassWord() {
load_dll_user32();
_imp__GetClassWord = (void *) _elf_GetProcAddress(_dll_user32, "GetClassWord");
}
void _elfimplib_GetClassWord() {
asm("leave\njmp *%0" : : "r"(_imp__GetClassWord));
}

