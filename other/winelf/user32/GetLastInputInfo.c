#include "user32.h"
void _elfimplib_GetLastInputInfo() asm("GetLastInputInfo");
void *_imp__GetLastInputInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLastInputInfo() {
load_dll_user32();
_imp__GetLastInputInfo = (void *) _elf_GetProcAddress(_dll_user32, "GetLastInputInfo");
}
void _elfimplib_GetLastInputInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetLastInputInfo));
}

