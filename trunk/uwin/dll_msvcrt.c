#define NULL (void *) 0

extern void *(*_elf_LoadLibraryA)(char *);
extern void *(*_elf_GetProcAddress)(void *, char *);

void *_dll_msvcrt = NULL;

void load_dll_msvcrt() {
if (!_dll_msvcrt) {
_dll_msvcrt = _elf_LoadLibraryA("msvcrt");
}
}

