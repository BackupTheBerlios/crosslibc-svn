#include "user32.h"
void _elfimplib_AttachThreadInput() asm("AttachThreadInput");
void *_imp__AttachThreadInput = NULL;
__attribute__((constructor)) void _elfimplib_init_AttachThreadInput() {
load_dll_user32();
_imp__AttachThreadInput = (void *) _elf_GetProcAddress(_dll_user32, "AttachThreadInput");
}
void _elfimplib_AttachThreadInput() {
asm("leave\njmp *%0" : : "r"(_imp__AttachThreadInput));
}

