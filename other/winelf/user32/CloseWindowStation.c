#include "user32.h"
void _elfimplib_CloseWindowStation() asm("CloseWindowStation");
void *_imp__CloseWindowStation = NULL;
__attribute__((constructor)) void _elfimplib_init_CloseWindowStation() {
load_dll_user32();
_imp__CloseWindowStation = (void *) _elf_GetProcAddress(_dll_user32, "CloseWindowStation");
}
void _elfimplib_CloseWindowStation() {
asm("leave\njmp *%0" : : "r"(_imp__CloseWindowStation));
}

