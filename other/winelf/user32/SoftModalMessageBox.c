#include "user32.h"
void _elfimplib_SoftModalMessageBox() asm("SoftModalMessageBox");
void *_imp__SoftModalMessageBox = NULL;
__attribute__((constructor)) void _elfimplib_init_SoftModalMessageBox() {
load_dll_user32();
_imp__SoftModalMessageBox = (void *) _elf_GetProcAddress(_dll_user32, "SoftModalMessageBox");
}
void _elfimplib_SoftModalMessageBox() {
asm("leave\njmp *%0" : : "r"(_imp__SoftModalMessageBox));
}

