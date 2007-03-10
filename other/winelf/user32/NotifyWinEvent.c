#include "user32.h"
void _elfimplib_NotifyWinEvent() asm("NotifyWinEvent");
void *_imp__NotifyWinEvent = NULL;
__attribute__((constructor)) void _elfimplib_init_NotifyWinEvent() {
load_dll_user32();
_imp__NotifyWinEvent = (void *) _elf_GetProcAddress(_dll_user32, "NotifyWinEvent");
}
void _elfimplib_NotifyWinEvent() {
asm("leave\njmp *%0" : : "r"(_imp__NotifyWinEvent));
}

