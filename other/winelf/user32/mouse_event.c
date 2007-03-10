#include "user32.h"
void _elfimplib_mouse_event() asm("mouse_event");
void *_imp__mouse_event = NULL;
__attribute__((constructor)) void _elfimplib_init_mouse_event() {
load_dll_user32();
_imp__mouse_event = (void *) _elf_GetProcAddress(_dll_user32, "mouse_event");
}
void _elfimplib_mouse_event() {
asm("leave\njmp *%0" : : "r"(_imp__mouse_event));
}

