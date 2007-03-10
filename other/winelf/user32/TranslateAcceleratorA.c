#include "user32.h"
void _elfimplib_TranslateAcceleratorA() asm("TranslateAcceleratorA");
void *_imp__TranslateAcceleratorA = NULL;
__attribute__((constructor)) void _elfimplib_init_TranslateAcceleratorA() {
load_dll_user32();
_imp__TranslateAcceleratorA = (void *) _elf_GetProcAddress(_dll_user32, "TranslateAcceleratorA");
}
void _elfimplib_TranslateAcceleratorA() {
asm("leave\njmp *%0" : : "r"(_imp__TranslateAcceleratorA));
}

