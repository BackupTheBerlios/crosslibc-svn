#include "user32.h"
void _elfimplib_QuerySendMessage() asm("QuerySendMessage");
void *_imp__QuerySendMessage = NULL;
__attribute__((constructor)) void _elfimplib_init_QuerySendMessage() {
load_dll_user32();
_imp__QuerySendMessage = (void *) _elf_GetProcAddress(_dll_user32, "QuerySendMessage");
}
void _elfimplib_QuerySendMessage() {
asm("leave\njmp *%0" : : "r"(_imp__QuerySendMessage));
}

