#include "user32.h"
void _elfimplib_IsIconic() asm("IsIconic");
void *_imp__IsIconic = NULL;
__attribute__((constructor)) void _elfimplib_init_IsIconic() {
load_dll_user32();
_imp__IsIconic = (void *) _elf_GetProcAddress(_dll_user32, "IsIconic");
}
void _elfimplib_IsIconic() {
asm("leave\njmp *%0" : : "r"(_imp__IsIconic));
}

