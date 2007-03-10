#include "user32.h"
void _elfimplib_VkKeyScanA() asm("VkKeyScanA");
void *_imp__VkKeyScanA = NULL;
__attribute__((constructor)) void _elfimplib_init_VkKeyScanA() {
load_dll_user32();
_imp__VkKeyScanA = (void *) _elf_GetProcAddress(_dll_user32, "VkKeyScanA");
}
void _elfimplib_VkKeyScanA() {
asm("leave\njmp *%0" : : "r"(_imp__VkKeyScanA));
}

