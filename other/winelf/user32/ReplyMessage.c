#include "user32.h"
void _elfimplib_ReplyMessage() asm("ReplyMessage");
void *_imp__ReplyMessage = NULL;
__attribute__((constructor)) void _elfimplib_init_ReplyMessage() {
load_dll_user32();
_imp__ReplyMessage = (void *) _elf_GetProcAddress(_dll_user32, "ReplyMessage");
}
void _elfimplib_ReplyMessage() {
asm("leave\njmp *%0" : : "r"(_imp__ReplyMessage));
}

