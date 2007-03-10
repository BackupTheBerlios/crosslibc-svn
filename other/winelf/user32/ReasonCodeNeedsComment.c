#include "user32.h"
void _elfimplib_ReasonCodeNeedsComment() asm("ReasonCodeNeedsComment");
void *_imp__ReasonCodeNeedsComment = NULL;
__attribute__((constructor)) void _elfimplib_init_ReasonCodeNeedsComment() {
load_dll_user32();
_imp__ReasonCodeNeedsComment = (void *) _elf_GetProcAddress(_dll_user32, "ReasonCodeNeedsComment");
}
void _elfimplib_ReasonCodeNeedsComment() {
asm("leave\njmp *%0" : : "r"(_imp__ReasonCodeNeedsComment));
}

