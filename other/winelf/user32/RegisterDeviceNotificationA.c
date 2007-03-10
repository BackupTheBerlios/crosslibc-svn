#include "user32.h"
void _elfimplib_RegisterDeviceNotificationA() asm("RegisterDeviceNotificationA");
void *_imp__RegisterDeviceNotificationA = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterDeviceNotificationA() {
load_dll_user32();
_imp__RegisterDeviceNotificationA = (void *) _elf_GetProcAddress(_dll_user32, "RegisterDeviceNotificationA");
}
void _elfimplib_RegisterDeviceNotificationA() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterDeviceNotificationA));
}

