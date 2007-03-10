#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>

extern WINBASEAPI HMODULE WINAPI (*_elf_LoadLibraryA)(LPCSTR);
extern WINBASEAPI FARPROC WINAPI (*_elf_GetProcAddress)(HMODULE,LPCSTR);

HMODULE _dll_user32 = NULL;

void load_dll_user32() {
if (!_dll_user32) {
_dll_user32 = _elf_LoadLibraryA("user32");
}
}

