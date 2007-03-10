#include "user32.h"
void _elfimplib_GetRawInputData() asm("GetRawInputData");
void *_imp__GetRawInputData = NULL;
__attribute__((constructor)) void _elfimplib_init_GetRawInputData() {
load_dll_user32();
_imp__GetRawInputData = (void *) _elf_GetProcAddress(_dll_user32, "GetRawInputData");
}
void _elfimplib_GetRawInputData() {
asm("leave\njmp *%0" : : "r"(_imp__GetRawInputData));
}

