#include "user32.h"
void _elfimplib_SendIMEMessageExA() asm("SendIMEMessageExA");
void *_imp__SendIMEMessageExA = NULL;
__attribute__((constructor)) void _elfimplib_init_SendIMEMessageExA() {
load_dll_user32();
_imp__SendIMEMessageExA = (void *) _elf_GetProcAddress(_dll_user32, "SendIMEMessageExA");
}
void _elfimplib_SendIMEMessageExA() {
asm("leave\njmp *%0" : : "r"(_imp__SendIMEMessageExA));
}

