#include "user32.h"
void _elfimplib_CallMsgFilterA() asm("CallMsgFilterA");
void *_imp__CallMsgFilterA = NULL;
__attribute__((constructor)) void _elfimplib_init_CallMsgFilterA() {
load_dll_user32();
_imp__CallMsgFilterA = (void *) _elf_GetProcAddress(_dll_user32, "CallMsgFilterA");
}
void _elfimplib_CallMsgFilterA() {
asm("leave\njmp *%0" : : "r"(_imp__CallMsgFilterA));
}

