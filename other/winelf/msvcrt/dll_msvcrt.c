#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>

extern WINBASEAPI HMODULE WINAPI (*_elf_LoadLibraryA)(LPCSTR);
extern WINBASEAPI FARPROC WINAPI (*_elf_GetProcAddress)(HMODULE,LPCSTR);

HMODULE _dll_msvcrt = NULL;

void load_dll_msvcrt() {
if (!_dll_msvcrt) {
_dll_msvcrt = _elf_LoadLibraryA("msvcrt");
}
}

