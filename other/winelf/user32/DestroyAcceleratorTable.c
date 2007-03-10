#include "user32.h"
void _elfimplib_DestroyAcceleratorTable() asm("DestroyAcceleratorTable");
void *_imp__DestroyAcceleratorTable = NULL;
__attribute__((constructor)) void _elfimplib_init_DestroyAcceleratorTable() {
load_dll_user32();
_imp__DestroyAcceleratorTable = (void *) _elf_GetProcAddress(_dll_user32, "DestroyAcceleratorTable");
}
void _elfimplib_DestroyAcceleratorTable() {
asm("leave\njmp *%0" : : "r"(_imp__DestroyAcceleratorTable));
}

