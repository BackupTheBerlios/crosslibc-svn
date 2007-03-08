#define NULL (void *) 0

extern void *(*_elf_LoadLibraryA)(char *);
extern void *(*_elf_GetProcAddress)(void *, char *);

void *_dll_posix = NULL;

void load_dll_posix() {
if (!_dll_posix) {
_dll_posix = _elf_LoadLibraryA("posix");
}
}

