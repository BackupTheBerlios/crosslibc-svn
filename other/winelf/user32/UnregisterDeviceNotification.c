#include "user32.h"
void _elfimplib_UnregisterDeviceNotification() asm("UnregisterDeviceNotification");
void *_imp__UnregisterDeviceNotification = NULL;
__attribute__((constructor)) void _elfimplib_init_UnregisterDeviceNotification() {
load_dll_user32();
_imp__UnregisterDeviceNotification = (void *) _elf_GetProcAddress(_dll_user32, "UnregisterDeviceNotification");
}
void _elfimplib_UnregisterDeviceNotification() {
asm("leave\njmp *%0" : : "r"(_imp__UnregisterDeviceNotification));
}

