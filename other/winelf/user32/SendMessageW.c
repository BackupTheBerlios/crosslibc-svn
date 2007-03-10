#include "user32.h"
void _elfimplib_SendMessageW() asm("SendMessageW");
void *_imp__SendMessageW = NULL;
__attribute__((constructor)) void _elfimplib_init_SendMessageW() {
load_dll_user32();
_imp__SendMessageW = (void *) _elf_GetProcAddress(_dll_user32, "SendMessageW");
}
void _elfimplib_SendMessageW() {
asm("leave\njmp *%0" : : "r"(_imp__SendMessageW));
}

