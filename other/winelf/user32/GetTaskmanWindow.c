#include "user32.h"
void _elfimplib_GetTaskmanWindow() asm("GetTaskmanWindow");
void *_imp__GetTaskmanWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTaskmanWindow() {
load_dll_user32();
_imp__GetTaskmanWindow = (void *) _elf_GetProcAddress(_dll_user32, "GetTaskmanWindow");
}
void _elfimplib_GetTaskmanWindow() {
asm("leave\njmp *%0" : : "r"(_imp__GetTaskmanWindow));
}

