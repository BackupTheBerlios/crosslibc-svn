#include "user32.h"
void _elfimplib_SendInput() asm("SendInput");
void *_imp__SendInput = NULL;
__attribute__((constructor)) void _elfimplib_init_SendInput() {
load_dll_user32();
_imp__SendInput = (void *) _elf_GetProcAddress(_dll_user32, "SendInput");
}
void _elfimplib_SendInput() {
asm("leave\njmp *%0" : : "r"(_imp__SendInput));
}

