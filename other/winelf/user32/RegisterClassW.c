#include "user32.h"
void _elfimplib_RegisterClassW() asm("RegisterClassW");
void *_imp__RegisterClassW = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterClassW() {
load_dll_user32();
_imp__RegisterClassW = (void *) _elf_GetProcAddress(_dll_user32, "RegisterClassW");
}
void _elfimplib_RegisterClassW() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterClassW));
}

