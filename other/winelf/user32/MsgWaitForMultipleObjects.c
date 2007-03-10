#include "user32.h"
void _elfimplib_MsgWaitForMultipleObjects() asm("MsgWaitForMultipleObjects");
void *_imp__MsgWaitForMultipleObjects = NULL;
__attribute__((constructor)) void _elfimplib_init_MsgWaitForMultipleObjects() {
load_dll_user32();
_imp__MsgWaitForMultipleObjects = (void *) _elf_GetProcAddress(_dll_user32, "MsgWaitForMultipleObjects");
}
void _elfimplib_MsgWaitForMultipleObjects() {
asm("leave\njmp *%0" : : "r"(_imp__MsgWaitForMultipleObjects));
}

