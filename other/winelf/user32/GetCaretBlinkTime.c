#include "user32.h"
void _elfimplib_GetCaretBlinkTime() asm("GetCaretBlinkTime");
void *_imp__GetCaretBlinkTime = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCaretBlinkTime() {
load_dll_user32();
_imp__GetCaretBlinkTime = (void *) _elf_GetProcAddress(_dll_user32, "GetCaretBlinkTime");
}
void _elfimplib_GetCaretBlinkTime() {
asm("leave\njmp *%0" : : "r"(_imp__GetCaretBlinkTime));
}

