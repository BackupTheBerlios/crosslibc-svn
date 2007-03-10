#include "user32.h"
void _elfimplib_MsgWaitForMultipleObjectsEx() asm("MsgWaitForMultipleObjectsEx");
void *_imp__MsgWaitForMultipleObjectsEx = NULL;
__attribute__((constructor)) void _elfimplib_init_MsgWaitForMultipleObjectsEx() {
load_dll_user32();
_imp__MsgWaitForMultipleObjectsEx = (void *) _elf_GetProcAddress(_dll_user32, "MsgWaitForMultipleObjectsEx");
}
void _elfimplib_MsgWaitForMultipleObjectsEx() {
asm("leave\njmp *%0" : : "r"(_imp__MsgWaitForMultipleObjectsEx));
}

