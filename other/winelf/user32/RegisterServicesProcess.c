#include "user32.h"
void _elfimplib_RegisterServicesProcess() asm("RegisterServicesProcess");
void *_imp__RegisterServicesProcess = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterServicesProcess() {
load_dll_user32();
_imp__RegisterServicesProcess = (void *) _elf_GetProcAddress(_dll_user32, "RegisterServicesProcess");
}
void _elfimplib_RegisterServicesProcess() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterServicesProcess));
}

