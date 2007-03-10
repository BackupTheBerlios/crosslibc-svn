#include "user32.h"
void _elfimplib_SetCaretPos() asm("SetCaretPos");
void *_imp__SetCaretPos = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCaretPos() {
load_dll_user32();
_imp__SetCaretPos = (void *) _elf_GetProcAddress(_dll_user32, "SetCaretPos");
}
void _elfimplib_SetCaretPos() {
asm("leave\njmp *%0" : : "r"(_imp__SetCaretPos));
}

