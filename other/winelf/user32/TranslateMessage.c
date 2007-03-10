#include "user32.h"
void _elfimplib_TranslateMessage() asm("TranslateMessage");
void *_imp__TranslateMessage = NULL;
__attribute__((constructor)) void _elfimplib_init_TranslateMessage() {
load_dll_user32();
_imp__TranslateMessage = (void *) _elf_GetProcAddress(_dll_user32, "TranslateMessage");
}
void _elfimplib_TranslateMessage() {
asm("leave\njmp *%0" : : "r"(_imp__TranslateMessage));
}

