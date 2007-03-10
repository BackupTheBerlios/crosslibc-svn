#include "user32.h"
void _elfimplib_SetClassWord() asm("SetClassWord");
void *_imp__SetClassWord = NULL;
__attribute__((constructor)) void _elfimplib_init_SetClassWord() {
load_dll_user32();
_imp__SetClassWord = (void *) _elf_GetProcAddress(_dll_user32, "SetClassWord");
}
void _elfimplib_SetClassWord() {
asm("leave\njmp *%0" : : "r"(_imp__SetClassWord));
}

