#include "user32.h"
void _elfimplib_TranslateMessageEx() asm("TranslateMessageEx");
void *_imp__TranslateMessageEx = NULL;
__attribute__((constructor)) void _elfimplib_init_TranslateMessageEx() {
load_dll_user32();
_imp__TranslateMessageEx = (void *) _elf_GetProcAddress(_dll_user32, "TranslateMessageEx");
}
void _elfimplib_TranslateMessageEx() {
asm("leave\njmp *%0" : : "r"(_imp__TranslateMessageEx));
}

