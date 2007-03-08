#include "kernel32.h"
void _elfimplib_DeviceIoControl() asm("DeviceIoControl");
void *_imp__DeviceIoControl = NULL;
__attribute__((constructor)) void _elfimplib_init_DeviceIoControl() {
load_dll_kernel32();
_imp__DeviceIoControl = (void *) _elf_GetProcAddress(_dll_kernel32, "DeviceIoControl");
}
void _elfimplib_DeviceIoControl() {
asm("leave\njmp *%0" : : "r"(_imp__DeviceIoControl));
}

