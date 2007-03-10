#include "user32.h"
void _elfimplib_TrackPopupMenu() asm("TrackPopupMenu");
void *_imp__TrackPopupMenu = NULL;
__attribute__((constructor)) void _elfimplib_init_TrackPopupMenu() {
load_dll_user32();
_imp__TrackPopupMenu = (void *) _elf_GetProcAddress(_dll_user32, "TrackPopupMenu");
}
void _elfimplib_TrackPopupMenu() {
asm("leave\njmp *%0" : : "r"(_imp__TrackPopupMenu));
}

