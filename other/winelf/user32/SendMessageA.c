#include "user32.h"
void _elfimplib_SendMessageA() asm("SendMessageA");
void *_imp__SendMessageA = NULL;
__attribute__((constructor)) void _elfimplib_init_SendMessageA() {
load_dll_user32();
_imp__SendMessageA = (void *) _elf_GetProcAddress(_dll_user32, "SendMessageA");
}
void _elfimplib_SendMessageA() {
asm("leave\njmp *%0" : : "r"(_imp__SendMessageA));
}

