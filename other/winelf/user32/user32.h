#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>

extern WINBASEAPI HMODULE WINAPI (*_elf_LoadLibraryA)(LPCSTR);
extern WINBASEAPI FARPROC WINAPI (*_elf_GetProcAddress)(HMODULE,LPCSTR);

extern HMODULE _dll_user32;

void load_dll_user32();
