#include "user32.h"
void _elfimplib_GetWindowTextLengthA() asm("GetWindowTextLengthA");
void *_imp__GetWindowTextLengthA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWindowTextLengthA() {
load_dll_user32();
_imp__GetWindowTextLengthA = (void *) _elf_GetProcAddress(_dll_user32, "GetWindowTextLengthA");
}
void _elfimplib_GetWindowTextLengthA() {
asm("leave\njmp *%0" : : "r"(_imp__GetWindowTextLengthA));
}

