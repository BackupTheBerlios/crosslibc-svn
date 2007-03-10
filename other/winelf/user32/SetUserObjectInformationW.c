#include "user32.h"
void _elfimplib_SetUserObjectInformationW() asm("SetUserObjectInformationW");
void *_imp__SetUserObjectInformationW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetUserObjectInformationW() {
load_dll_user32();
_imp__SetUserObjectInformationW = (void *) _elf_GetProcAddress(_dll_user32, "SetUserObjectInformationW");
}
void _elfimplib_SetUserObjectInformationW() {
asm("leave\njmp *%0" : : "r"(_imp__SetUserObjectInformationW));
}

