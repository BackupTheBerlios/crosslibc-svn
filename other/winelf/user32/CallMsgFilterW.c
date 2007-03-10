#include "user32.h"
void _elfimplib_CallMsgFilterW() asm("CallMsgFilterW");
void *_imp__CallMsgFilterW = NULL;
__attribute__((constructor)) void _elfimplib_init_CallMsgFilterW() {
load_dll_user32();
_imp__CallMsgFilterW = (void *) _elf_GetProcAddress(_dll_user32, "CallMsgFilterW");
}
void _elfimplib_CallMsgFilterW() {
asm("leave\njmp *%0" : : "r"(_imp__CallMsgFilterW));
}

