#include "user32.h"
void _elfimplib_GetRawInputDeviceInfoW() asm("GetRawInputDeviceInfoW");
void *_imp__GetRawInputDeviceInfoW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetRawInputDeviceInfoW() {
load_dll_user32();
_imp__GetRawInputDeviceInfoW = (void *) _elf_GetProcAddress(_dll_user32, "GetRawInputDeviceInfoW");
}
void _elfimplib_GetRawInputDeviceInfoW() {
asm("leave\njmp *%0" : : "r"(_imp__GetRawInputDeviceInfoW));
}

