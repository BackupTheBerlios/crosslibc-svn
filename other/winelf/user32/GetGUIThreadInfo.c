#include "user32.h"
void _elfimplib_GetGUIThreadInfo() asm("GetGUIThreadInfo");
void *_imp__GetGUIThreadInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetGUIThreadInfo() {
load_dll_user32();
_imp__GetGUIThreadInfo = (void *) _elf_GetProcAddress(_dll_user32, "GetGUIThreadInfo");
}
void _elfimplib_GetGUIThreadInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetGUIThreadInfo));
}

