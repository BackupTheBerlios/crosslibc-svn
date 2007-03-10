#include "user32.h"
void _elfimplib_SetCaretBlinkTime() asm("SetCaretBlinkTime");
void *_imp__SetCaretBlinkTime = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCaretBlinkTime() {
load_dll_user32();
_imp__SetCaretBlinkTime = (void *) _elf_GetProcAddress(_dll_user32, "SetCaretBlinkTime");
}
void _elfimplib_SetCaretBlinkTime() {
asm("leave\njmp *%0" : : "r"(_imp__SetCaretBlinkTime));
}

