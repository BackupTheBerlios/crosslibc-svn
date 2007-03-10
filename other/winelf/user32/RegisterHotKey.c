#include "user32.h"
void _elfimplib_RegisterHotKey() asm("RegisterHotKey");
void *_imp__RegisterHotKey = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterHotKey() {
load_dll_user32();
_imp__RegisterHotKey = (void *) _elf_GetProcAddress(_dll_user32, "RegisterHotKey");
}
void _elfimplib_RegisterHotKey() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterHotKey));
}

