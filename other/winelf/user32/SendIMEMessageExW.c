#include "user32.h"
void _elfimplib_SendIMEMessageExW() asm("SendIMEMessageExW");
void *_imp__SendIMEMessageExW = NULL;
__attribute__((constructor)) void _elfimplib_init_SendIMEMessageExW() {
load_dll_user32();
_imp__SendIMEMessageExW = (void *) _elf_GetProcAddress(_dll_user32, "SendIMEMessageExW");
}
void _elfimplib_SendIMEMessageExW() {
asm("leave\njmp *%0" : : "r"(_imp__SendIMEMessageExW));
}

