#include "user32.h"
void _elfimplib_CalcMenuBar() asm("CalcMenuBar");
void *_imp__CalcMenuBar = NULL;
__attribute__((constructor)) void _elfimplib_init_CalcMenuBar() {
load_dll_user32();
_imp__CalcMenuBar = (void *) _elf_GetProcAddress(_dll_user32, "CalcMenuBar");
}
void _elfimplib_CalcMenuBar() {
asm("leave\njmp *%0" : : "r"(_imp__CalcMenuBar));
}

