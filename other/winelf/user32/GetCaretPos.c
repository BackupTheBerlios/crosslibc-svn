#include "user32.h"
void _elfimplib_GetCaretPos() asm("GetCaretPos");
void *_imp__GetCaretPos = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCaretPos() {
load_dll_user32();
_imp__GetCaretPos = (void *) _elf_GetProcAddress(_dll_user32, "GetCaretPos");
}
void _elfimplib_GetCaretPos() {
asm("leave\njmp *%0" : : "r"(_imp__GetCaretPos));
}

