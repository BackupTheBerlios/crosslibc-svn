#include "user32.h"
void _elfimplib_GetRawInputBuffer() asm("GetRawInputBuffer");
void *_imp__GetRawInputBuffer = NULL;
__attribute__((constructor)) void _elfimplib_init_GetRawInputBuffer() {
load_dll_user32();
_imp__GetRawInputBuffer = (void *) _elf_GetProcAddress(_dll_user32, "GetRawInputBuffer");
}
void _elfimplib_GetRawInputBuffer() {
asm("leave\njmp *%0" : : "r"(_imp__GetRawInputBuffer));
}

