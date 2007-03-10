#include "user32.h"
void _elfimplib_VkKeyScanExA() asm("VkKeyScanExA");
void *_imp__VkKeyScanExA = NULL;
__attribute__((constructor)) void _elfimplib_init_VkKeyScanExA() {
load_dll_user32();
_imp__VkKeyScanExA = (void *) _elf_GetProcAddress(_dll_user32, "VkKeyScanExA");
}
void _elfimplib_VkKeyScanExA() {
asm("leave\njmp *%0" : : "r"(_imp__VkKeyScanExA));
}

