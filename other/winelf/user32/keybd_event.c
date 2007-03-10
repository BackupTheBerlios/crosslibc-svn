#include "user32.h"
void _elfimplib_keybd_event() asm("keybd_event");
void *_imp__keybd_event = NULL;
__attribute__((constructor)) void _elfimplib_init_keybd_event() {
load_dll_user32();
_imp__keybd_event = (void *) _elf_GetProcAddress(_dll_user32, "keybd_event");
}
void _elfimplib_keybd_event() {
asm("leave\njmp *%0" : : "r"(_imp__keybd_event));
}

