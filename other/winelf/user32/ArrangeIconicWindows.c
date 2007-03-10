#include "user32.h"
void _elfimplib_ArrangeIconicWindows() asm("ArrangeIconicWindows");
void *_imp__ArrangeIconicWindows = NULL;
__attribute__((constructor)) void _elfimplib_init_ArrangeIconicWindows() {
load_dll_user32();
_imp__ArrangeIconicWindows = (void *) _elf_GetProcAddress(_dll_user32, "ArrangeIconicWindows");
}
void _elfimplib_ArrangeIconicWindows() {
asm("leave\njmp *%0" : : "r"(_imp__ArrangeIconicWindows));
}

