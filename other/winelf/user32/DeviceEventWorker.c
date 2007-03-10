#include "user32.h"
void _elfimplib_DeviceEventWorker() asm("DeviceEventWorker");
void *_imp__DeviceEventWorker = NULL;
__attribute__((constructor)) void _elfimplib_init_DeviceEventWorker() {
load_dll_user32();
_imp__DeviceEventWorker = (void *) _elf_GetProcAddress(_dll_user32, "DeviceEventWorker");
}
void _elfimplib_DeviceEventWorker() {
asm("leave\njmp *%0" : : "r"(_imp__DeviceEventWorker));
}

