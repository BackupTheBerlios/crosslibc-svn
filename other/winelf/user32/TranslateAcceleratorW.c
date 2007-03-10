#include "user32.h"
void _elfimplib_TranslateAcceleratorW() asm("TranslateAcceleratorW");
void *_imp__TranslateAcceleratorW = NULL;
__attribute__((constructor)) void _elfimplib_init_TranslateAcceleratorW() {
load_dll_user32();
_imp__TranslateAcceleratorW = (void *) _elf_GetProcAddress(_dll_user32, "TranslateAcceleratorW");
}
void _elfimplib_TranslateAcceleratorW() {
asm("leave\njmp *%0" : : "r"(_imp__TranslateAcceleratorW));
}

