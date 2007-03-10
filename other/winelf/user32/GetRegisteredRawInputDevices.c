#include "user32.h"
void _elfimplib_GetRegisteredRawInputDevices() asm("GetRegisteredRawInputDevices");
void *_imp__GetRegisteredRawInputDevices = NULL;
__attribute__((constructor)) void _elfimplib_init_GetRegisteredRawInputDevices() {
load_dll_user32();
_imp__GetRegisteredRawInputDevices = (void *) _elf_GetProcAddress(_dll_user32, "GetRegisteredRawInputDevices");
}
void _elfimplib_GetRegisteredRawInputDevices() {
asm("leave\njmp *%0" : : "r"(_imp__GetRegisteredRawInputDevices));
}

