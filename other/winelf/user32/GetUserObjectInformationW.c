#include "user32.h"
void _elfimplib_GetUserObjectInformationW() asm("GetUserObjectInformationW");
void *_imp__GetUserObjectInformationW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetUserObjectInformationW() {
load_dll_user32();
_imp__GetUserObjectInformationW = (void *) _elf_GetProcAddress(_dll_user32, "GetUserObjectInformationW");
}
void _elfimplib_GetUserObjectInformationW() {
asm("leave\njmp *%0" : : "r"(_imp__GetUserObjectInformationW));
}

