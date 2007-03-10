#include "user32.h"
void _elfimplib_LookupIconIdFromDirectoryEx() asm("LookupIconIdFromDirectoryEx");
void *_imp__LookupIconIdFromDirectoryEx = NULL;
__attribute__((constructor)) void _elfimplib_init_LookupIconIdFromDirectoryEx() {
load_dll_user32();
_imp__LookupIconIdFromDirectoryEx = (void *) _elf_GetProcAddress(_dll_user32, "LookupIconIdFromDirectoryEx");
}
void _elfimplib_LookupIconIdFromDirectoryEx() {
asm("leave\njmp *%0" : : "r"(_imp__LookupIconIdFromDirectoryEx));
}

