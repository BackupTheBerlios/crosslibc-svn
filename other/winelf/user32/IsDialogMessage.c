#include "user32.h"
void _elfimplib_IsDialogMessage() asm("IsDialogMessage");
void *_imp__IsDialogMessage = NULL;
__attribute__((constructor)) void _elfimplib_init_IsDialogMessage() {
load_dll_user32();
_imp__IsDialogMessage = (void *) _elf_GetProcAddress(_dll_user32, "IsDialogMessage");
}
void _elfimplib_IsDialogMessage() {
asm("leave\njmp *%0" : : "r"(_imp__IsDialogMessage));
}

