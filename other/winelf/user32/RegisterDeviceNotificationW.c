#include "user32.h"
void _elfimplib_RegisterDeviceNotificationW() asm("RegisterDeviceNotificationW");
void *_imp__RegisterDeviceNotificationW = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterDeviceNotificationW() {
load_dll_user32();
_imp__RegisterDeviceNotificationW = (void *) _elf_GetProcAddress(_dll_user32, "RegisterDeviceNotificationW");
}
void _elfimplib_RegisterDeviceNotificationW() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterDeviceNotificationW));
}

