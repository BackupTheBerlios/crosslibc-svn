#include "user32.h"
void _elfimplib_CopyImage() asm("CopyImage");
void *_imp__CopyImage = NULL;
__attribute__((constructor)) void _elfimplib_init_CopyImage() {
load_dll_user32();
_imp__CopyImage = (void *) _elf_GetProcAddress(_dll_user32, "CopyImage");
}
void _elfimplib_CopyImage() {
asm("leave\njmp *%0" : : "r"(_imp__CopyImage));
}

