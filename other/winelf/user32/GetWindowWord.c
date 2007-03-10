#include "user32.h"
void _elfimplib_GetWindowWord() asm("GetWindowWord");
void *_imp__GetWindowWord = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWindowWord() {
load_dll_user32();
_imp__GetWindowWord = (void *) _elf_GetProcAddress(_dll_user32, "GetWindowWord");
}
void _elfimplib_GetWindowWord() {
asm("leave\njmp *%0" : : "r"(_imp__GetWindowWord));
}

