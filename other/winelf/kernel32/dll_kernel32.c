#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>

extern WINBASEAPI HMODULE WINAPI (*_elf_LoadLibraryA)(LPCSTR);
extern WINBASEAPI FARPROC WINAPI (*_elf_GetProcAddress)(HMODULE,LPCSTR);

HMODULE _dll_kernel32 = NULL;

void load_dll_kernel32() {
if (!_dll_kernel32) {
_dll_kernel32 = _elf_LoadLibraryA("kernel32");
}
}

