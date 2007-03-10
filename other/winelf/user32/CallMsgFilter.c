#include "user32.h"
void _elfimplib_CallMsgFilter() asm("CallMsgFilter");
void *_imp__CallMsgFilter = NULL;
__attribute__((constructor)) void _elfimplib_init_CallMsgFilter() {
load_dll_user32();
_imp__CallMsgFilter = (void *) _elf_GetProcAddress(_dll_user32, "CallMsgFilter");
}
void _elfimplib_CallMsgFilter() {
asm("leave\njmp *%0" : : "r"(_imp__CallMsgFilter));
}

