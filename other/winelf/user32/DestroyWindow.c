#include "user32.h"
void _elfimplib_DestroyWindow() asm("DestroyWindow");
void *_imp__DestroyWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_DestroyWindow() {
load_dll_user32();
_imp__DestroyWindow = (void *) _elf_GetProcAddress(_dll_user32, "DestroyWindow");
}
void _elfimplib_DestroyWindow() {
asm("leave\njmp *%0" : : "r"(_imp__DestroyWindow));
}

