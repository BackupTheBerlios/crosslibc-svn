#include "user32.h"
void _elfimplib_GetUserObjectInformationA() asm("GetUserObjectInformationA");
void *_imp__GetUserObjectInformationA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetUserObjectInformationA() {
load_dll_user32();
_imp__GetUserObjectInformationA = (void *) _elf_GetProcAddress(_dll_user32, "GetUserObjectInformationA");
}
void _elfimplib_GetUserObjectInformationA() {
asm("leave\njmp *%0" : : "r"(_imp__GetUserObjectInformationA));
}

