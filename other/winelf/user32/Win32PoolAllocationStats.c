#include "user32.h"
void _elfimplib_Win32PoolAllocationStats() asm("Win32PoolAllocationStats");
void *_imp__Win32PoolAllocationStats = NULL;
__attribute__((constructor)) void _elfimplib_init_Win32PoolAllocationStats() {
load_dll_user32();
_imp__Win32PoolAllocationStats = (void *) _elf_GetProcAddress(_dll_user32, "Win32PoolAllocationStats");
}
void _elfimplib_Win32PoolAllocationStats() {
asm("leave\njmp *%0" : : "r"(_imp__Win32PoolAllocationStats));
}

