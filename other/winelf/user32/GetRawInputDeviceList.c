#include "user32.h"
void _elfimplib_GetRawInputDeviceList() asm("GetRawInputDeviceList");
void *_imp__GetRawInputDeviceList = NULL;
__attribute__((constructor)) void _elfimplib_init_GetRawInputDeviceList() {
load_dll_user32();
_imp__GetRawInputDeviceList = (void *) _elf_GetProcAddress(_dll_user32, "GetRawInputDeviceList");
}
void _elfimplib_GetRawInputDeviceList() {
asm("leave\njmp *%0" : : "r"(_imp__GetRawInputDeviceList));
}

