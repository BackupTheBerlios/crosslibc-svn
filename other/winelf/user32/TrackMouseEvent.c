#include "user32.h"
void _elfimplib_TrackMouseEvent() asm("TrackMouseEvent");
void *_imp__TrackMouseEvent = NULL;
__attribute__((constructor)) void _elfimplib_init_TrackMouseEvent() {
load_dll_user32();
_imp__TrackMouseEvent = (void *) _elf_GetProcAddress(_dll_user32, "TrackMouseEvent");
}
void _elfimplib_TrackMouseEvent() {
asm("leave\njmp *%0" : : "r"(_imp__TrackMouseEvent));
}

