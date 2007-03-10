#include "user32.h"
void _elfimplib_TranslateMDISysAccel() asm("TranslateMDISysAccel");
void *_imp__TranslateMDISysAccel = NULL;
__attribute__((constructor)) void _elfimplib_init_TranslateMDISysAccel() {
load_dll_user32();
_imp__TranslateMDISysAccel = (void *) _elf_GetProcAddress(_dll_user32, "TranslateMDISysAccel");
}
void _elfimplib_TranslateMDISysAccel() {
asm("leave\njmp *%0" : : "r"(_imp__TranslateMDISysAccel));
}

