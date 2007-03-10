#include "user32.h"
void _elfimplib_GetInputState() asm("GetInputState");
void *_imp__GetInputState = NULL;
__attribute__((constructor)) void _elfimplib_init_GetInputState() {
load_dll_user32();
_imp__GetInputState = (void *) _elf_GetProcAddress(_dll_user32, "GetInputState");
}
void _elfimplib_GetInputState() {
asm("leave\njmp *%0" : : "r"(_imp__GetInputState));
}

