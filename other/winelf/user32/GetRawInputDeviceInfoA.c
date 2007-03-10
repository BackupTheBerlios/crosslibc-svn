#include "user32.h"
void _elfimplib_GetRawInputDeviceInfoA() asm("GetRawInputDeviceInfoA");
void *_imp__GetRawInputDeviceInfoA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetRawInputDeviceInfoA() {
load_dll_user32();
_imp__GetRawInputDeviceInfoA = (void *) _elf_GetProcAddress(_dll_user32, "GetRawInputDeviceInfoA");
}
void _elfimplib_GetRawInputDeviceInfoA() {
asm("leave\njmp *%0" : : "r"(_imp__GetRawInputDeviceInfoA));
}

