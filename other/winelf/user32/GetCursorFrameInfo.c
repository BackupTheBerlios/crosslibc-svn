#include "user32.h"
void _elfimplib_GetCursorFrameInfo() asm("GetCursorFrameInfo");
void *_imp__GetCursorFrameInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCursorFrameInfo() {
load_dll_user32();
_imp__GetCursorFrameInfo = (void *) _elf_GetProcAddress(_dll_user32, "GetCursorFrameInfo");
}
void _elfimplib_GetCursorFrameInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetCursorFrameInfo));
}

