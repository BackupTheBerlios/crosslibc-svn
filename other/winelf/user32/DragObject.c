#include "user32.h"
void _elfimplib_DragObject() asm("DragObject");
void *_imp__DragObject = NULL;
__attribute__((constructor)) void _elfimplib_init_DragObject() {
load_dll_user32();
_imp__DragObject = (void *) _elf_GetProcAddress(_dll_user32, "DragObject");
}
void _elfimplib_DragObject() {
asm("leave\njmp *%0" : : "r"(_imp__DragObject));
}

