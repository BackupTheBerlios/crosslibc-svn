#include "user32.h"
void _elfimplib_TrackPopupMenuEx() asm("TrackPopupMenuEx");
void *_imp__TrackPopupMenuEx = NULL;
__attribute__((constructor)) void _elfimplib_init_TrackPopupMenuEx() {
load_dll_user32();
_imp__TrackPopupMenuEx = (void *) _elf_GetProcAddress(_dll_user32, "TrackPopupMenuEx");
}
void _elfimplib_TrackPopupMenuEx() {
asm("leave\njmp *%0" : : "r"(_imp__TrackPopupMenuEx));
}

