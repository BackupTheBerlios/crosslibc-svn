#include "user32.h"
void _elfimplib_UnhookWinEvent() asm("UnhookWinEvent");
void *_imp__UnhookWinEvent = NULL;
__attribute__((constructor)) void _elfimplib_init_UnhookWinEvent() {
load_dll_user32();
_imp__UnhookWinEvent = (void *) _elf_GetProcAddress(_dll_user32, "UnhookWinEvent");
}
void _elfimplib_UnhookWinEvent() {
asm("leave\njmp *%0" : : "r"(_imp__UnhookWinEvent));
}

