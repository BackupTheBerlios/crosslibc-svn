#include "user32.h"
void _elfimplib_GetLastActivePopup() asm("GetLastActivePopup");
void *_imp__GetLastActivePopup = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLastActivePopup() {
load_dll_user32();
_imp__GetLastActivePopup = (void *) _elf_GetProcAddress(_dll_user32, "GetLastActivePopup");
}
void _elfimplib_GetLastActivePopup() {
asm("leave\njmp *%0" : : "r"(_imp__GetLastActivePopup));
}

