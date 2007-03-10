#include "user32.h"
void _elfimplib_DragDetect() asm("DragDetect");
void *_imp__DragDetect = NULL;
__attribute__((constructor)) void _elfimplib_init_DragDetect() {
load_dll_user32();
_imp__DragDetect = (void *) _elf_GetProcAddress(_dll_user32, "DragDetect");
}
void _elfimplib_DragDetect() {
asm("leave\njmp *%0" : : "r"(_imp__DragDetect));
}

