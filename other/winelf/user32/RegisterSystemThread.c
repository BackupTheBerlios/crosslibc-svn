#include "user32.h"
void _elfimplib_RegisterSystemThread() asm("RegisterSystemThread");
void *_imp__RegisterSystemThread = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterSystemThread() {
load_dll_user32();
_imp__RegisterSystemThread = (void *) _elf_GetProcAddress(_dll_user32, "RegisterSystemThread");
}
void _elfimplib_RegisterSystemThread() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterSystemThread));
}

