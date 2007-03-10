#include "user32.h"
void _elfimplib_DestroyReasons() asm("DestroyReasons");
void *_imp__DestroyReasons = NULL;
__attribute__((constructor)) void _elfimplib_init_DestroyReasons() {
load_dll_user32();
_imp__DestroyReasons = (void *) _elf_GetProcAddress(_dll_user32, "DestroyReasons");
}
void _elfimplib_DestroyReasons() {
asm("leave\njmp *%0" : : "r"(_imp__DestroyReasons));
}

