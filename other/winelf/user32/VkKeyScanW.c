#include "user32.h"
void _elfimplib_VkKeyScanW() asm("VkKeyScanW");
void *_imp__VkKeyScanW = NULL;
__attribute__((constructor)) void _elfimplib_init_VkKeyScanW() {
load_dll_user32();
_imp__VkKeyScanW = (void *) _elf_GetProcAddress(_dll_user32, "VkKeyScanW");
}
void _elfimplib_VkKeyScanW() {
asm("leave\njmp *%0" : : "r"(_imp__VkKeyScanW));
}

