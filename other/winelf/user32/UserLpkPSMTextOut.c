#include "user32.h"
void _elfimplib_UserLpkPSMTextOut() asm("UserLpkPSMTextOut");
void *_imp__UserLpkPSMTextOut = NULL;
__attribute__((constructor)) void _elfimplib_init_UserLpkPSMTextOut() {
load_dll_user32();
_imp__UserLpkPSMTextOut = (void *) _elf_GetProcAddress(_dll_user32, "UserLpkPSMTextOut");
}
void _elfimplib_UserLpkPSMTextOut() {
asm("leave\njmp *%0" : : "r"(_imp__UserLpkPSMTextOut));
}

