#include "user32.h"
void _elfimplib_GetWindowTextLengthW() asm("GetWindowTextLengthW");
void *_imp__GetWindowTextLengthW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWindowTextLengthW() {
load_dll_user32();
_imp__GetWindowTextLengthW = (void *) _elf_GetProcAddress(_dll_user32, "GetWindowTextLengthW");
}
void _elfimplib_GetWindowTextLengthW() {
asm("leave\njmp *%0" : : "r"(_imp__GetWindowTextLengthW));
}

