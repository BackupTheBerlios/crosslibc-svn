#include "user32.h"
void _elfimplib_ReleaseCapture() asm("ReleaseCapture");
void *_imp__ReleaseCapture = NULL;
__attribute__((constructor)) void _elfimplib_init_ReleaseCapture() {
load_dll_user32();
_imp__ReleaseCapture = (void *) _elf_GetProcAddress(_dll_user32, "ReleaseCapture");
}
void _elfimplib_ReleaseCapture() {
asm("leave\njmp *%0" : : "r"(_imp__ReleaseCapture));
}

