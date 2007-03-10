#include "user32.h"
void _elfimplib_GetMouseMovePointsEx() asm("GetMouseMovePointsEx");
void *_imp__GetMouseMovePointsEx = NULL;
__attribute__((constructor)) void _elfimplib_init_GetMouseMovePointsEx() {
load_dll_user32();
_imp__GetMouseMovePointsEx = (void *) _elf_GetProcAddress(_dll_user32, "GetMouseMovePointsEx");
}
void _elfimplib_GetMouseMovePointsEx() {
asm("leave\njmp *%0" : : "r"(_imp__GetMouseMovePointsEx));
}

