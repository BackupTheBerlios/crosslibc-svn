#include "user32.h"
void _elfimplib_VkKeyScanExW() asm("VkKeyScanExW");
void *_imp__VkKeyScanExW = NULL;
__attribute__((constructor)) void _elfimplib_init_VkKeyScanExW() {
load_dll_user32();
_imp__VkKeyScanExW = (void *) _elf_GetProcAddress(_dll_user32, "VkKeyScanExW");
}
void _elfimplib_VkKeyScanExW() {
asm("leave\njmp *%0" : : "r"(_imp__VkKeyScanExW));
}

