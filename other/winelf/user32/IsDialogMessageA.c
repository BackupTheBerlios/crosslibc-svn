#include "user32.h"
void _elfimplib_IsDialogMessageA() asm("IsDialogMessageA");
void *_imp__IsDialogMessageA = NULL;
__attribute__((constructor)) void _elfimplib_init_IsDialogMessageA() {
load_dll_user32();
_imp__IsDialogMessageA = (void *) _elf_GetProcAddress(_dll_user32, "IsDialogMessageA");
}
void _elfimplib_IsDialogMessageA() {
asm("leave\njmp *%0" : : "r"(_imp__IsDialogMessageA));
}

