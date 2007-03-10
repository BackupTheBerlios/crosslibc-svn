#include "user32.h"
void _elfimplib_DestroyIcon() asm("DestroyIcon");
void *_imp__DestroyIcon = NULL;
__attribute__((constructor)) void _elfimplib_init_DestroyIcon() {
load_dll_user32();
_imp__DestroyIcon = (void *) _elf_GetProcAddress(_dll_user32, "DestroyIcon");
}
void _elfimplib_DestroyIcon() {
asm("leave\njmp *%0" : : "r"(_imp__DestroyIcon));
}

