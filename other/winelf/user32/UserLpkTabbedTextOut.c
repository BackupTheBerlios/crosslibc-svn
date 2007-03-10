#include "user32.h"
void _elfimplib_UserLpkTabbedTextOut() asm("UserLpkTabbedTextOut");
void *_imp__UserLpkTabbedTextOut = NULL;
__attribute__((constructor)) void _elfimplib_init_UserLpkTabbedTextOut() {
load_dll_user32();
_imp__UserLpkTabbedTextOut = (void *) _elf_GetProcAddress(_dll_user32, "UserLpkTabbedTextOut");
}
void _elfimplib_UserLpkTabbedTextOut() {
asm("leave\njmp *%0" : : "r"(_imp__UserLpkTabbedTextOut));
}

