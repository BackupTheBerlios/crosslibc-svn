#include "user32.h"
void _elfimplib_TranslateAccelerator() asm("TranslateAccelerator");
void *_imp__TranslateAccelerator = NULL;
__attribute__((constructor)) void _elfimplib_init_TranslateAccelerator() {
load_dll_user32();
_imp__TranslateAccelerator = (void *) _elf_GetProcAddress(_dll_user32, "TranslateAccelerator");
}
void _elfimplib_TranslateAccelerator() {
asm("leave\njmp *%0" : : "r"(_imp__TranslateAccelerator));
}

