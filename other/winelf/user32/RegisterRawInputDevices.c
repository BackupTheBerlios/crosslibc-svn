#include "user32.h"
void _elfimplib_RegisterRawInputDevices() asm("RegisterRawInputDevices");
void *_imp__RegisterRawInputDevices = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterRawInputDevices() {
load_dll_user32();
_imp__RegisterRawInputDevices = (void *) _elf_GetProcAddress(_dll_user32, "RegisterRawInputDevices");
}
void _elfimplib_RegisterRawInputDevices() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterRawInputDevices));
}

