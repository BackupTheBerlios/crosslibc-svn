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

void _elfimplib_ActivateActCtx() asm("ActivateActCtx");
void *_imp__ActivateActCtx = NULL;
__attribute__((constructor)) void _elfimplib_init_ActivateActCtx() {
load_dll_kernel32();
_imp__ActivateActCtx = (void *) _elf_GetProcAddress(_dll_kernel32, "ActivateActCtx");
}
void _elfimplib_ActivateActCtx() {
asm("leave\njmp *%0" : : "r"(_imp__ActivateActCtx));
}

void _elfimplib_AddAtomA() asm("AddAtomA");
void *_imp__AddAtomA = NULL;
__attribute__((constructor)) void _elfimplib_init_AddAtomA() {
load_dll_kernel32();
_imp__AddAtomA = (void *) _elf_GetProcAddress(_dll_kernel32, "AddAtomA");
}
void _elfimplib_AddAtomA() {
asm("leave\njmp *%0" : : "r"(_imp__AddAtomA));
}

void _elfimplib_AddAtomW() asm("AddAtomW");
void *_imp__AddAtomW = NULL;
__attribute__((constructor)) void _elfimplib_init_AddAtomW() {
load_dll_kernel32();
_imp__AddAtomW = (void *) _elf_GetProcAddress(_dll_kernel32, "AddAtomW");
}
void _elfimplib_AddAtomW() {
asm("leave\njmp *%0" : : "r"(_imp__AddAtomW));
}

void _elfimplib_AddConsoleAliasA() asm("AddConsoleAliasA");
void *_imp__AddConsoleAliasA = NULL;
__attribute__((constructor)) void _elfimplib_init_AddConsoleAliasA() {
load_dll_kernel32();
_imp__AddConsoleAliasA = (void *) _elf_GetProcAddress(_dll_kernel32, "AddConsoleAliasA");
}
void _elfimplib_AddConsoleAliasA() {
asm("leave\njmp *%0" : : "r"(_imp__AddConsoleAliasA));
}

void _elfimplib_AddConsoleAliasW() asm("AddConsoleAliasW");
void *_imp__AddConsoleAliasW = NULL;
__attribute__((constructor)) void _elfimplib_init_AddConsoleAliasW() {
load_dll_kernel32();
_imp__AddConsoleAliasW = (void *) _elf_GetProcAddress(_dll_kernel32, "AddConsoleAliasW");
}
void _elfimplib_AddConsoleAliasW() {
asm("leave\njmp *%0" : : "r"(_imp__AddConsoleAliasW));
}

void _elfimplib_AddLocalAlternateComputerNameA() asm("AddLocalAlternateComputerNameA");
void *_imp__AddLocalAlternateComputerNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_AddLocalAlternateComputerNameA() {
load_dll_kernel32();
_imp__AddLocalAlternateComputerNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "AddLocalAlternateComputerNameA");
}
void _elfimplib_AddLocalAlternateComputerNameA() {
asm("leave\njmp *%0" : : "r"(_imp__AddLocalAlternateComputerNameA));
}

void _elfimplib_AddLocalAlternateComputerNameW() asm("AddLocalAlternateComputerNameW");
void *_imp__AddLocalAlternateComputerNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_AddLocalAlternateComputerNameW() {
load_dll_kernel32();
_imp__AddLocalAlternateComputerNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "AddLocalAlternateComputerNameW");
}
void _elfimplib_AddLocalAlternateComputerNameW() {
asm("leave\njmp *%0" : : "r"(_imp__AddLocalAlternateComputerNameW));
}

void _elfimplib_AddRefActCtx() asm("AddRefActCtx");
void *_imp__AddRefActCtx = NULL;
__attribute__((constructor)) void _elfimplib_init_AddRefActCtx() {
load_dll_kernel32();
_imp__AddRefActCtx = (void *) _elf_GetProcAddress(_dll_kernel32, "AddRefActCtx");
}
void _elfimplib_AddRefActCtx() {
asm("leave\njmp *%0" : : "r"(_imp__AddRefActCtx));
}

void _elfimplib_AddVectoredExceptionHandler() asm("AddVectoredExceptionHandler");
void *_imp__AddVectoredExceptionHandler = NULL;
__attribute__((constructor)) void _elfimplib_init_AddVectoredExceptionHandler() {
load_dll_kernel32();
_imp__AddVectoredExceptionHandler = (void *) _elf_GetProcAddress(_dll_kernel32, "AddVectoredExceptionHandler");
}
void _elfimplib_AddVectoredExceptionHandler() {
asm("leave\njmp *%0" : : "r"(_imp__AddVectoredExceptionHandler));
}

void _elfimplib_AllocConsole() asm("AllocConsole");
void *_imp__AllocConsole = NULL;
__attribute__((constructor)) void _elfimplib_init_AllocConsole() {
load_dll_kernel32();
_imp__AllocConsole = (void *) _elf_GetProcAddress(_dll_kernel32, "AllocConsole");
}
void _elfimplib_AllocConsole() {
asm("leave\njmp *%0" : : "r"(_imp__AllocConsole));
}

void _elfimplib_AllocateUserPhysicalPages() asm("AllocateUserPhysicalPages");
void *_imp__AllocateUserPhysicalPages = NULL;
__attribute__((constructor)) void _elfimplib_init_AllocateUserPhysicalPages() {
load_dll_kernel32();
_imp__AllocateUserPhysicalPages = (void *) _elf_GetProcAddress(_dll_kernel32, "AllocateUserPhysicalPages");
}
void _elfimplib_AllocateUserPhysicalPages() {
asm("leave\njmp *%0" : : "r"(_imp__AllocateUserPhysicalPages));
}

void _elfimplib_AreFileApisANSI() asm("AreFileApisANSI");
void *_imp__AreFileApisANSI = NULL;
__attribute__((constructor)) void _elfimplib_init_AreFileApisANSI() {
load_dll_kernel32();
_imp__AreFileApisANSI = (void *) _elf_GetProcAddress(_dll_kernel32, "AreFileApisANSI");
}
void _elfimplib_AreFileApisANSI() {
asm("leave\njmp *%0" : : "r"(_imp__AreFileApisANSI));
}

void _elfimplib_AssignProcessToJobObject() asm("AssignProcessToJobObject");
void *_imp__AssignProcessToJobObject = NULL;
__attribute__((constructor)) void _elfimplib_init_AssignProcessToJobObject() {
load_dll_kernel32();
_imp__AssignProcessToJobObject = (void *) _elf_GetProcAddress(_dll_kernel32, "AssignProcessToJobObject");
}
void _elfimplib_AssignProcessToJobObject() {
asm("leave\njmp *%0" : : "r"(_imp__AssignProcessToJobObject));
}

void _elfimplib_AttachConsole() asm("AttachConsole");
void *_imp__AttachConsole = NULL;
__attribute__((constructor)) void _elfimplib_init_AttachConsole() {
load_dll_kernel32();
_imp__AttachConsole = (void *) _elf_GetProcAddress(_dll_kernel32, "AttachConsole");
}
void _elfimplib_AttachConsole() {
asm("leave\njmp *%0" : : "r"(_imp__AttachConsole));
}

void _elfimplib_BackupRead() asm("BackupRead");
void *_imp__BackupRead = NULL;
__attribute__((constructor)) void _elfimplib_init_BackupRead() {
load_dll_kernel32();
_imp__BackupRead = (void *) _elf_GetProcAddress(_dll_kernel32, "BackupRead");
}
void _elfimplib_BackupRead() {
asm("leave\njmp *%0" : : "r"(_imp__BackupRead));
}

void _elfimplib_BackupSeek() asm("BackupSeek");
void *_imp__BackupSeek = NULL;
__attribute__((constructor)) void _elfimplib_init_BackupSeek() {
load_dll_kernel32();
_imp__BackupSeek = (void *) _elf_GetProcAddress(_dll_kernel32, "BackupSeek");
}
void _elfimplib_BackupSeek() {
asm("leave\njmp *%0" : : "r"(_imp__BackupSeek));
}

void _elfimplib_BackupWrite() asm("BackupWrite");
void *_imp__BackupWrite = NULL;
__attribute__((constructor)) void _elfimplib_init_BackupWrite() {
load_dll_kernel32();
_imp__BackupWrite = (void *) _elf_GetProcAddress(_dll_kernel32, "BackupWrite");
}
void _elfimplib_BackupWrite() {
asm("leave\njmp *%0" : : "r"(_imp__BackupWrite));
}

void _elfimplib_BaseCheckAppcompatCache() asm("BaseCheckAppcompatCache");
void *_imp__BaseCheckAppcompatCache = NULL;
__attribute__((constructor)) void _elfimplib_init_BaseCheckAppcompatCache() {
load_dll_kernel32();
_imp__BaseCheckAppcompatCache = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseCheckAppcompatCache");
}
void _elfimplib_BaseCheckAppcompatCache() {
asm("leave\njmp *%0" : : "r"(_imp__BaseCheckAppcompatCache));
}

void _elfimplib_BaseCleanupAppcompatCache() asm("BaseCleanupAppcompatCache");
void *_imp__BaseCleanupAppcompatCache = NULL;
__attribute__((constructor)) void _elfimplib_init_BaseCleanupAppcompatCache() {
load_dll_kernel32();
_imp__BaseCleanupAppcompatCache = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseCleanupAppcompatCache");
}
void _elfimplib_BaseCleanupAppcompatCache() {
asm("leave\njmp *%0" : : "r"(_imp__BaseCleanupAppcompatCache));
}

void _elfimplib_BaseCleanupAppcompatCacheSupport() asm("BaseCleanupAppcompatCacheSupport");
void *_imp__BaseCleanupAppcompatCacheSupport = NULL;
__attribute__((constructor)) void _elfimplib_init_BaseCleanupAppcompatCacheSupport() {
load_dll_kernel32();
_imp__BaseCleanupAppcompatCacheSupport = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseCleanupAppcompatCacheSupport");
}
void _elfimplib_BaseCleanupAppcompatCacheSupport() {
asm("leave\njmp *%0" : : "r"(_imp__BaseCleanupAppcompatCacheSupport));
}

void _elfimplib_BaseDumpAppcompatCache() asm("BaseDumpAppcompatCache");
void *_imp__BaseDumpAppcompatCache = NULL;
__attribute__((constructor)) void _elfimplib_init_BaseDumpAppcompatCache() {
load_dll_kernel32();
_imp__BaseDumpAppcompatCache = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseDumpAppcompatCache");
}
void _elfimplib_BaseDumpAppcompatCache() {
asm("leave\njmp *%0" : : "r"(_imp__BaseDumpAppcompatCache));
}

void _elfimplib_BaseFlushAppcompatCache() asm("BaseFlushAppcompatCache");
void *_imp__BaseFlushAppcompatCache = NULL;
__attribute__((constructor)) void _elfimplib_init_BaseFlushAppcompatCache() {
load_dll_kernel32();
_imp__BaseFlushAppcompatCache = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseFlushAppcompatCache");
}
void _elfimplib_BaseFlushAppcompatCache() {
asm("leave\njmp *%0" : : "r"(_imp__BaseFlushAppcompatCache));
}

void _elfimplib_BaseInitAppcompatCache() asm("BaseInitAppcompatCache");
void *_imp__BaseInitAppcompatCache = NULL;
__attribute__((constructor)) void _elfimplib_init_BaseInitAppcompatCache() {
load_dll_kernel32();
_imp__BaseInitAppcompatCache = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseInitAppcompatCache");
}
void _elfimplib_BaseInitAppcompatCache() {
asm("leave\njmp *%0" : : "r"(_imp__BaseInitAppcompatCache));
}

void _elfimplib_BaseInitAppcompatCacheSupport() asm("BaseInitAppcompatCacheSupport");
void *_imp__BaseInitAppcompatCacheSupport = NULL;
__attribute__((constructor)) void _elfimplib_init_BaseInitAppcompatCacheSupport() {
load_dll_kernel32();
_imp__BaseInitAppcompatCacheSupport = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseInitAppcompatCacheSupport");
}
void _elfimplib_BaseInitAppcompatCacheSupport() {
asm("leave\njmp *%0" : : "r"(_imp__BaseInitAppcompatCacheSupport));
}

void _elfimplib_BaseProcessInitPostImport() asm("BaseProcessInitPostImport");
void *_imp__BaseProcessInitPostImport = NULL;
__attribute__((constructor)) void _elfimplib_init_BaseProcessInitPostImport() {
load_dll_kernel32();
_imp__BaseProcessInitPostImport = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseProcessInitPostImport");
}
void _elfimplib_BaseProcessInitPostImport() {
asm("leave\njmp *%0" : : "r"(_imp__BaseProcessInitPostImport));
}

void _elfimplib_BaseUpdateAppcompatCache() asm("BaseUpdateAppcompatCache");
void *_imp__BaseUpdateAppcompatCache = NULL;
__attribute__((constructor)) void _elfimplib_init_BaseUpdateAppcompatCache() {
load_dll_kernel32();
_imp__BaseUpdateAppcompatCache = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseUpdateAppcompatCache");
}
void _elfimplib_BaseUpdateAppcompatCache() {
asm("leave\njmp *%0" : : "r"(_imp__BaseUpdateAppcompatCache));
}

void _elfimplib_Beep() asm("Beep");
void *_imp__Beep = NULL;
__attribute__((constructor)) void _elfimplib_init_Beep() {
load_dll_kernel32();
_imp__Beep = (void *) _elf_GetProcAddress(_dll_kernel32, "Beep");
}
void _elfimplib_Beep() {
asm("leave\njmp *%0" : : "r"(_imp__Beep));
}

void _elfimplib_BeginUpdateResourceA() asm("BeginUpdateResourceA");
void *_imp__BeginUpdateResourceA = NULL;
__attribute__((constructor)) void _elfimplib_init_BeginUpdateResourceA() {
load_dll_kernel32();
_imp__BeginUpdateResourceA = (void *) _elf_GetProcAddress(_dll_kernel32, "BeginUpdateResourceA");
}
void _elfimplib_BeginUpdateResourceA() {
asm("leave\njmp *%0" : : "r"(_imp__BeginUpdateResourceA));
}

void _elfimplib_BeginUpdateResourceW() asm("BeginUpdateResourceW");
void *_imp__BeginUpdateResourceW = NULL;
__attribute__((constructor)) void _elfimplib_init_BeginUpdateResourceW() {
load_dll_kernel32();
_imp__BeginUpdateResourceW = (void *) _elf_GetProcAddress(_dll_kernel32, "BeginUpdateResourceW");
}
void _elfimplib_BeginUpdateResourceW() {
asm("leave\njmp *%0" : : "r"(_imp__BeginUpdateResourceW));
}

void _elfimplib_BindIoCompletionCallback() asm("BindIoCompletionCallback");
void *_imp__BindIoCompletionCallback = NULL;
__attribute__((constructor)) void _elfimplib_init_BindIoCompletionCallback() {
load_dll_kernel32();
_imp__BindIoCompletionCallback = (void *) _elf_GetProcAddress(_dll_kernel32, "BindIoCompletionCallback");
}
void _elfimplib_BindIoCompletionCallback() {
asm("leave\njmp *%0" : : "r"(_imp__BindIoCompletionCallback));
}

void _elfimplib_BuildCommDCBA() asm("BuildCommDCBA");
void *_imp__BuildCommDCBA = NULL;
__attribute__((constructor)) void _elfimplib_init_BuildCommDCBA() {
load_dll_kernel32();
_imp__BuildCommDCBA = (void *) _elf_GetProcAddress(_dll_kernel32, "BuildCommDCBA");
}
void _elfimplib_BuildCommDCBA() {
asm("leave\njmp *%0" : : "r"(_imp__BuildCommDCBA));
}

void _elfimplib_BuildCommDCBAndTimeoutsA() asm("BuildCommDCBAndTimeoutsA");
void *_imp__BuildCommDCBAndTimeoutsA = NULL;
__attribute__((constructor)) void _elfimplib_init_BuildCommDCBAndTimeoutsA() {
load_dll_kernel32();
_imp__BuildCommDCBAndTimeoutsA = (void *) _elf_GetProcAddress(_dll_kernel32, "BuildCommDCBAndTimeoutsA");
}
void _elfimplib_BuildCommDCBAndTimeoutsA() {
asm("leave\njmp *%0" : : "r"(_imp__BuildCommDCBAndTimeoutsA));
}

void _elfimplib_BuildCommDCBAndTimeoutsW() asm("BuildCommDCBAndTimeoutsW");
void *_imp__BuildCommDCBAndTimeoutsW = NULL;
__attribute__((constructor)) void _elfimplib_init_BuildCommDCBAndTimeoutsW() {
load_dll_kernel32();
_imp__BuildCommDCBAndTimeoutsW = (void *) _elf_GetProcAddress(_dll_kernel32, "BuildCommDCBAndTimeoutsW");
}
void _elfimplib_BuildCommDCBAndTimeoutsW() {
asm("leave\njmp *%0" : : "r"(_imp__BuildCommDCBAndTimeoutsW));
}

void _elfimplib_BuildCommDCBW() asm("BuildCommDCBW");
void *_imp__BuildCommDCBW = NULL;
__attribute__((constructor)) void _elfimplib_init_BuildCommDCBW() {
load_dll_kernel32();
_imp__BuildCommDCBW = (void *) _elf_GetProcAddress(_dll_kernel32, "BuildCommDCBW");
}
void _elfimplib_BuildCommDCBW() {
asm("leave\njmp *%0" : : "r"(_imp__BuildCommDCBW));
}

void _elfimplib_CallNamedPipeA() asm("CallNamedPipeA");
void *_imp__CallNamedPipeA = NULL;
__attribute__((constructor)) void _elfimplib_init_CallNamedPipeA() {
load_dll_kernel32();
_imp__CallNamedPipeA = (void *) _elf_GetProcAddress(_dll_kernel32, "CallNamedPipeA");
}
void _elfimplib_CallNamedPipeA() {
asm("leave\njmp *%0" : : "r"(_imp__CallNamedPipeA));
}

void _elfimplib_CallNamedPipeW() asm("CallNamedPipeW");
void *_imp__CallNamedPipeW = NULL;
__attribute__((constructor)) void _elfimplib_init_CallNamedPipeW() {
load_dll_kernel32();
_imp__CallNamedPipeW = (void *) _elf_GetProcAddress(_dll_kernel32, "CallNamedPipeW");
}
void _elfimplib_CallNamedPipeW() {
asm("leave\njmp *%0" : : "r"(_imp__CallNamedPipeW));
}

void _elfimplib_CancelDeviceWakeupRequest() asm("CancelDeviceWakeupRequest");
void *_imp__CancelDeviceWakeupRequest = NULL;
__attribute__((constructor)) void _elfimplib_init_CancelDeviceWakeupRequest() {
load_dll_kernel32();
_imp__CancelDeviceWakeupRequest = (void *) _elf_GetProcAddress(_dll_kernel32, "CancelDeviceWakeupRequest");
}
void _elfimplib_CancelDeviceWakeupRequest() {
asm("leave\njmp *%0" : : "r"(_imp__CancelDeviceWakeupRequest));
}

void _elfimplib_CancelIo() asm("CancelIo");
void *_imp__CancelIo = NULL;
__attribute__((constructor)) void _elfimplib_init_CancelIo() {
load_dll_kernel32();
_imp__CancelIo = (void *) _elf_GetProcAddress(_dll_kernel32, "CancelIo");
}
void _elfimplib_CancelIo() {
asm("leave\njmp *%0" : : "r"(_imp__CancelIo));
}

void _elfimplib_CancelTimerQueueTimer() asm("CancelTimerQueueTimer");
void *_imp__CancelTimerQueueTimer = NULL;
__attribute__((constructor)) void _elfimplib_init_CancelTimerQueueTimer() {
load_dll_kernel32();
_imp__CancelTimerQueueTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "CancelTimerQueueTimer");
}
void _elfimplib_CancelTimerQueueTimer() {
asm("leave\njmp *%0" : : "r"(_imp__CancelTimerQueueTimer));
}

void _elfimplib_CancelWaitableTimer() asm("CancelWaitableTimer");
void *_imp__CancelWaitableTimer = NULL;
__attribute__((constructor)) void _elfimplib_init_CancelWaitableTimer() {
load_dll_kernel32();
_imp__CancelWaitableTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "CancelWaitableTimer");
}
void _elfimplib_CancelWaitableTimer() {
asm("leave\njmp *%0" : : "r"(_imp__CancelWaitableTimer));
}

void _elfimplib_ChangeTimerQueueTimer() asm("ChangeTimerQueueTimer");
void *_imp__ChangeTimerQueueTimer = NULL;
__attribute__((constructor)) void _elfimplib_init_ChangeTimerQueueTimer() {
load_dll_kernel32();
_imp__ChangeTimerQueueTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "ChangeTimerQueueTimer");
}
void _elfimplib_ChangeTimerQueueTimer() {
asm("leave\njmp *%0" : : "r"(_imp__ChangeTimerQueueTimer));
}

void _elfimplib_CheckNameLegalDOS8Dot3A() asm("CheckNameLegalDOS8Dot3A");
void *_imp__CheckNameLegalDOS8Dot3A = NULL;
__attribute__((constructor)) void _elfimplib_init_CheckNameLegalDOS8Dot3A() {
load_dll_kernel32();
_imp__CheckNameLegalDOS8Dot3A = (void *) _elf_GetProcAddress(_dll_kernel32, "CheckNameLegalDOS8Dot3A");
}
void _elfimplib_CheckNameLegalDOS8Dot3A() {
asm("leave\njmp *%0" : : "r"(_imp__CheckNameLegalDOS8Dot3A));
}

void _elfimplib_CheckNameLegalDOS8Dot3W() asm("CheckNameLegalDOS8Dot3W");
void *_imp__CheckNameLegalDOS8Dot3W = NULL;
__attribute__((constructor)) void _elfimplib_init_CheckNameLegalDOS8Dot3W() {
load_dll_kernel32();
_imp__CheckNameLegalDOS8Dot3W = (void *) _elf_GetProcAddress(_dll_kernel32, "CheckNameLegalDOS8Dot3W");
}
void _elfimplib_CheckNameLegalDOS8Dot3W() {
asm("leave\njmp *%0" : : "r"(_imp__CheckNameLegalDOS8Dot3W));
}

void _elfimplib_CheckRemoteDebuggerPresent() asm("CheckRemoteDebuggerPresent");
void *_imp__CheckRemoteDebuggerPresent = NULL;
__attribute__((constructor)) void _elfimplib_init_CheckRemoteDebuggerPresent() {
load_dll_kernel32();
_imp__CheckRemoteDebuggerPresent = (void *) _elf_GetProcAddress(_dll_kernel32, "CheckRemoteDebuggerPresent");
}
void _elfimplib_CheckRemoteDebuggerPresent() {
asm("leave\njmp *%0" : : "r"(_imp__CheckRemoteDebuggerPresent));
}

void _elfimplib_ClearCommBreak() asm("ClearCommBreak");
void *_imp__ClearCommBreak = NULL;
__attribute__((constructor)) void _elfimplib_init_ClearCommBreak() {
load_dll_kernel32();
_imp__ClearCommBreak = (void *) _elf_GetProcAddress(_dll_kernel32, "ClearCommBreak");
}
void _elfimplib_ClearCommBreak() {
asm("leave\njmp *%0" : : "r"(_imp__ClearCommBreak));
}

void _elfimplib_ClearCommError() asm("ClearCommError");
void *_imp__ClearCommError = NULL;
__attribute__((constructor)) void _elfimplib_init_ClearCommError() {
load_dll_kernel32();
_imp__ClearCommError = (void *) _elf_GetProcAddress(_dll_kernel32, "ClearCommError");
}
void _elfimplib_ClearCommError() {
asm("leave\njmp *%0" : : "r"(_imp__ClearCommError));
}

void _elfimplib_CloseConsoleHandle() asm("CloseConsoleHandle");
void *_imp__CloseConsoleHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_CloseConsoleHandle() {
load_dll_kernel32();
_imp__CloseConsoleHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "CloseConsoleHandle");
}
void _elfimplib_CloseConsoleHandle() {
asm("leave\njmp *%0" : : "r"(_imp__CloseConsoleHandle));
}

void _elfimplib_CloseHandle() asm("CloseHandle");
void *_imp__CloseHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_CloseHandle() {
load_dll_kernel32();
_imp__CloseHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "CloseHandle");
}
void _elfimplib_CloseHandle() {
asm("leave\njmp *%0" : : "r"(_imp__CloseHandle));
}

void _elfimplib_CloseProfileUserMapping() asm("CloseProfileUserMapping");
void *_imp__CloseProfileUserMapping = NULL;
__attribute__((constructor)) void _elfimplib_init_CloseProfileUserMapping() {
load_dll_kernel32();
_imp__CloseProfileUserMapping = (void *) _elf_GetProcAddress(_dll_kernel32, "CloseProfileUserMapping");
}
void _elfimplib_CloseProfileUserMapping() {
asm("leave\njmp *%0" : : "r"(_imp__CloseProfileUserMapping));
}

void _elfimplib_CmdBatNotification() asm("CmdBatNotification");
void *_imp__CmdBatNotification = NULL;
__attribute__((constructor)) void _elfimplib_init_CmdBatNotification() {
load_dll_kernel32();
_imp__CmdBatNotification = (void *) _elf_GetProcAddress(_dll_kernel32, "CmdBatNotification");
}
void _elfimplib_CmdBatNotification() {
asm("leave\njmp *%0" : : "r"(_imp__CmdBatNotification));
}

void _elfimplib_CommConfigDialogA() asm("CommConfigDialogA");
void *_imp__CommConfigDialogA = NULL;
__attribute__((constructor)) void _elfimplib_init_CommConfigDialogA() {
load_dll_kernel32();
_imp__CommConfigDialogA = (void *) _elf_GetProcAddress(_dll_kernel32, "CommConfigDialogA");
}
void _elfimplib_CommConfigDialogA() {
asm("leave\njmp *%0" : : "r"(_imp__CommConfigDialogA));
}

void _elfimplib_CommConfigDialogW() asm("CommConfigDialogW");
void *_imp__CommConfigDialogW = NULL;
__attribute__((constructor)) void _elfimplib_init_CommConfigDialogW() {
load_dll_kernel32();
_imp__CommConfigDialogW = (void *) _elf_GetProcAddress(_dll_kernel32, "CommConfigDialogW");
}
void _elfimplib_CommConfigDialogW() {
asm("leave\njmp *%0" : : "r"(_imp__CommConfigDialogW));
}

void _elfimplib_CompareFileTime() asm("CompareFileTime");
void *_imp__CompareFileTime = NULL;
__attribute__((constructor)) void _elfimplib_init_CompareFileTime() {
load_dll_kernel32();
_imp__CompareFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "CompareFileTime");
}
void _elfimplib_CompareFileTime() {
asm("leave\njmp *%0" : : "r"(_imp__CompareFileTime));
}

void _elfimplib_CompareStringA() asm("CompareStringA");
void *_imp__CompareStringA = NULL;
__attribute__((constructor)) void _elfimplib_init_CompareStringA() {
load_dll_kernel32();
_imp__CompareStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "CompareStringA");
}
void _elfimplib_CompareStringA() {
asm("leave\njmp *%0" : : "r"(_imp__CompareStringA));
}

void _elfimplib_CompareStringW() asm("CompareStringW");
void *_imp__CompareStringW = NULL;
__attribute__((constructor)) void _elfimplib_init_CompareStringW() {
load_dll_kernel32();
_imp__CompareStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "CompareStringW");
}
void _elfimplib_CompareStringW() {
asm("leave\njmp *%0" : : "r"(_imp__CompareStringW));
}

void _elfimplib_ConnectNamedPipe() asm("ConnectNamedPipe");
void *_imp__ConnectNamedPipe = NULL;
__attribute__((constructor)) void _elfimplib_init_ConnectNamedPipe() {
load_dll_kernel32();
_imp__ConnectNamedPipe = (void *) _elf_GetProcAddress(_dll_kernel32, "ConnectNamedPipe");
}
void _elfimplib_ConnectNamedPipe() {
asm("leave\njmp *%0" : : "r"(_imp__ConnectNamedPipe));
}

void _elfimplib_ConsoleMenuControl() asm("ConsoleMenuControl");
void *_imp__ConsoleMenuControl = NULL;
__attribute__((constructor)) void _elfimplib_init_ConsoleMenuControl() {
load_dll_kernel32();
_imp__ConsoleMenuControl = (void *) _elf_GetProcAddress(_dll_kernel32, "ConsoleMenuControl");
}
void _elfimplib_ConsoleMenuControl() {
asm("leave\njmp *%0" : : "r"(_imp__ConsoleMenuControl));
}

void _elfimplib_ContinueDebugEvent() asm("ContinueDebugEvent");
void *_imp__ContinueDebugEvent = NULL;
__attribute__((constructor)) void _elfimplib_init_ContinueDebugEvent() {
load_dll_kernel32();
_imp__ContinueDebugEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "ContinueDebugEvent");
}
void _elfimplib_ContinueDebugEvent() {
asm("leave\njmp *%0" : : "r"(_imp__ContinueDebugEvent));
}

void _elfimplib_ConvertDefaultLocale() asm("ConvertDefaultLocale");
void *_imp__ConvertDefaultLocale = NULL;
__attribute__((constructor)) void _elfimplib_init_ConvertDefaultLocale() {
load_dll_kernel32();
_imp__ConvertDefaultLocale = (void *) _elf_GetProcAddress(_dll_kernel32, "ConvertDefaultLocale");
}
void _elfimplib_ConvertDefaultLocale() {
asm("leave\njmp *%0" : : "r"(_imp__ConvertDefaultLocale));
}

void _elfimplib_ConvertFiberToThread() asm("ConvertFiberToThread");
void *_imp__ConvertFiberToThread = NULL;
__attribute__((constructor)) void _elfimplib_init_ConvertFiberToThread() {
load_dll_kernel32();
_imp__ConvertFiberToThread = (void *) _elf_GetProcAddress(_dll_kernel32, "ConvertFiberToThread");
}
void _elfimplib_ConvertFiberToThread() {
asm("leave\njmp *%0" : : "r"(_imp__ConvertFiberToThread));
}

void _elfimplib_ConvertThreadToFiber() asm("ConvertThreadToFiber");
void *_imp__ConvertThreadToFiber = NULL;
__attribute__((constructor)) void _elfimplib_init_ConvertThreadToFiber() {
load_dll_kernel32();
_imp__ConvertThreadToFiber = (void *) _elf_GetProcAddress(_dll_kernel32, "ConvertThreadToFiber");
}
void _elfimplib_ConvertThreadToFiber() {
asm("leave\njmp *%0" : : "r"(_imp__ConvertThreadToFiber));
}

void _elfimplib_CopyFileA() asm("CopyFileA");
void *_imp__CopyFileA = NULL;
__attribute__((constructor)) void _elfimplib_init_CopyFileA() {
load_dll_kernel32();
_imp__CopyFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "CopyFileA");
}
void _elfimplib_CopyFileA() {
asm("leave\njmp *%0" : : "r"(_imp__CopyFileA));
}

void _elfimplib_CopyFileExA() asm("CopyFileExA");
void *_imp__CopyFileExA = NULL;
__attribute__((constructor)) void _elfimplib_init_CopyFileExA() {
load_dll_kernel32();
_imp__CopyFileExA = (void *) _elf_GetProcAddress(_dll_kernel32, "CopyFileExA");
}
void _elfimplib_CopyFileExA() {
asm("leave\njmp *%0" : : "r"(_imp__CopyFileExA));
}

void _elfimplib_CopyFileExW() asm("CopyFileExW");
void *_imp__CopyFileExW = NULL;
__attribute__((constructor)) void _elfimplib_init_CopyFileExW() {
load_dll_kernel32();
_imp__CopyFileExW = (void *) _elf_GetProcAddress(_dll_kernel32, "CopyFileExW");
}
void _elfimplib_CopyFileExW() {
asm("leave\njmp *%0" : : "r"(_imp__CopyFileExW));
}

void _elfimplib_CopyFileW() asm("CopyFileW");
void *_imp__CopyFileW = NULL;
__attribute__((constructor)) void _elfimplib_init_CopyFileW() {
load_dll_kernel32();
_imp__CopyFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "CopyFileW");
}
void _elfimplib_CopyFileW() {
asm("leave\njmp *%0" : : "r"(_imp__CopyFileW));
}

void _elfimplib_CopyLZFile() asm("CopyLZFile");
void *_imp__CopyLZFile = NULL;
__attribute__((constructor)) void _elfimplib_init_CopyLZFile() {
load_dll_kernel32();
_imp__CopyLZFile = (void *) _elf_GetProcAddress(_dll_kernel32, "CopyLZFile");
}
void _elfimplib_CopyLZFile() {
asm("leave\njmp *%0" : : "r"(_imp__CopyLZFile));
}

void _elfimplib_CreateActCtxA() asm("CreateActCtxA");
void *_imp__CreateActCtxA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateActCtxA() {
load_dll_kernel32();
_imp__CreateActCtxA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateActCtxA");
}
void _elfimplib_CreateActCtxA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateActCtxA));
}

void _elfimplib_CreateActCtxW() asm("CreateActCtxW");
void *_imp__CreateActCtxW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateActCtxW() {
load_dll_kernel32();
_imp__CreateActCtxW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateActCtxW");
}
void _elfimplib_CreateActCtxW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateActCtxW));
}

void _elfimplib_CreateConsoleScreenBuffer() asm("CreateConsoleScreenBuffer");
void *_imp__CreateConsoleScreenBuffer = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateConsoleScreenBuffer() {
load_dll_kernel32();
_imp__CreateConsoleScreenBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateConsoleScreenBuffer");
}
void _elfimplib_CreateConsoleScreenBuffer() {
asm("leave\njmp *%0" : : "r"(_imp__CreateConsoleScreenBuffer));
}

void _elfimplib_CreateDirectoryA() asm("CreateDirectoryA");
void *_imp__CreateDirectoryA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateDirectoryA() {
load_dll_kernel32();
_imp__CreateDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateDirectoryA");
}
void _elfimplib_CreateDirectoryA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateDirectoryA));
}

void _elfimplib_CreateDirectoryExA() asm("CreateDirectoryExA");
void *_imp__CreateDirectoryExA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateDirectoryExA() {
load_dll_kernel32();
_imp__CreateDirectoryExA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateDirectoryExA");
}
void _elfimplib_CreateDirectoryExA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateDirectoryExA));
}

void _elfimplib_CreateDirectoryExW() asm("CreateDirectoryExW");
void *_imp__CreateDirectoryExW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateDirectoryExW() {
load_dll_kernel32();
_imp__CreateDirectoryExW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateDirectoryExW");
}
void _elfimplib_CreateDirectoryExW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateDirectoryExW));
}

void _elfimplib_CreateDirectoryW() asm("CreateDirectoryW");
void *_imp__CreateDirectoryW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateDirectoryW() {
load_dll_kernel32();
_imp__CreateDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateDirectoryW");
}
void _elfimplib_CreateDirectoryW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateDirectoryW));
}

void _elfimplib_CreateEventA() asm("CreateEventA");
void *_imp__CreateEventA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateEventA() {
load_dll_kernel32();
_imp__CreateEventA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateEventA");
}
void _elfimplib_CreateEventA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateEventA));
}

void _elfimplib_CreateEventW() asm("CreateEventW");
void *_imp__CreateEventW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateEventW() {
load_dll_kernel32();
_imp__CreateEventW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateEventW");
}
void _elfimplib_CreateEventW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateEventW));
}

void _elfimplib_CreateFiber() asm("CreateFiber");
void *_imp__CreateFiber = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateFiber() {
load_dll_kernel32();
_imp__CreateFiber = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateFiber");
}
void _elfimplib_CreateFiber() {
asm("leave\njmp *%0" : : "r"(_imp__CreateFiber));
}

void _elfimplib_CreateFiberEx() asm("CreateFiberEx");
void *_imp__CreateFiberEx = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateFiberEx() {
load_dll_kernel32();
_imp__CreateFiberEx = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateFiberEx");
}
void _elfimplib_CreateFiberEx() {
asm("leave\njmp *%0" : : "r"(_imp__CreateFiberEx));
}

void _elfimplib_CreateFileA() asm("CreateFileA");
void *_imp__CreateFileA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateFileA() {
load_dll_kernel32();
_imp__CreateFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateFileA");
}
void _elfimplib_CreateFileA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateFileA));
}

void _elfimplib_CreateFileMappingA() asm("CreateFileMappingA");
void *_imp__CreateFileMappingA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateFileMappingA() {
load_dll_kernel32();
_imp__CreateFileMappingA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateFileMappingA");
}
void _elfimplib_CreateFileMappingA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateFileMappingA));
}

void _elfimplib_CreateFileMappingW() asm("CreateFileMappingW");
void *_imp__CreateFileMappingW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateFileMappingW() {
load_dll_kernel32();
_imp__CreateFileMappingW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateFileMappingW");
}
void _elfimplib_CreateFileMappingW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateFileMappingW));
}

void _elfimplib_CreateFileW() asm("CreateFileW");
void *_imp__CreateFileW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateFileW() {
load_dll_kernel32();
_imp__CreateFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateFileW");
}
void _elfimplib_CreateFileW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateFileW));
}

void _elfimplib_CreateHardLinkA() asm("CreateHardLinkA");
void *_imp__CreateHardLinkA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateHardLinkA() {
load_dll_kernel32();
_imp__CreateHardLinkA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateHardLinkA");
}
void _elfimplib_CreateHardLinkA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateHardLinkA));
}

void _elfimplib_CreateHardLinkW() asm("CreateHardLinkW");
void *_imp__CreateHardLinkW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateHardLinkW() {
load_dll_kernel32();
_imp__CreateHardLinkW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateHardLinkW");
}
void _elfimplib_CreateHardLinkW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateHardLinkW));
}

void _elfimplib_CreateIoCompletionPort() asm("CreateIoCompletionPort");
void *_imp__CreateIoCompletionPort = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateIoCompletionPort() {
load_dll_kernel32();
_imp__CreateIoCompletionPort = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateIoCompletionPort");
}
void _elfimplib_CreateIoCompletionPort() {
asm("leave\njmp *%0" : : "r"(_imp__CreateIoCompletionPort));
}

void _elfimplib_CreateJobObjectA() asm("CreateJobObjectA");
void *_imp__CreateJobObjectA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateJobObjectA() {
load_dll_kernel32();
_imp__CreateJobObjectA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateJobObjectA");
}
void _elfimplib_CreateJobObjectA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateJobObjectA));
}

void _elfimplib_CreateJobObjectW() asm("CreateJobObjectW");
void *_imp__CreateJobObjectW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateJobObjectW() {
load_dll_kernel32();
_imp__CreateJobObjectW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateJobObjectW");
}
void _elfimplib_CreateJobObjectW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateJobObjectW));
}

void _elfimplib_CreateJobSet() asm("CreateJobSet");
void *_imp__CreateJobSet = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateJobSet() {
load_dll_kernel32();
_imp__CreateJobSet = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateJobSet");
}
void _elfimplib_CreateJobSet() {
asm("leave\njmp *%0" : : "r"(_imp__CreateJobSet));
}

void _elfimplib_CreateMailslotA() asm("CreateMailslotA");
void *_imp__CreateMailslotA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateMailslotA() {
load_dll_kernel32();
_imp__CreateMailslotA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateMailslotA");
}
void _elfimplib_CreateMailslotA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateMailslotA));
}

void _elfimplib_CreateMailslotW() asm("CreateMailslotW");
void *_imp__CreateMailslotW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateMailslotW() {
load_dll_kernel32();
_imp__CreateMailslotW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateMailslotW");
}
void _elfimplib_CreateMailslotW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateMailslotW));
}

void _elfimplib_CreateMemoryResourceNotification() asm("CreateMemoryResourceNotification");
void *_imp__CreateMemoryResourceNotification = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateMemoryResourceNotification() {
load_dll_kernel32();
_imp__CreateMemoryResourceNotification = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateMemoryResourceNotification");
}
void _elfimplib_CreateMemoryResourceNotification() {
asm("leave\njmp *%0" : : "r"(_imp__CreateMemoryResourceNotification));
}

void _elfimplib_CreateMutexA() asm("CreateMutexA");
void *_imp__CreateMutexA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateMutexA() {
load_dll_kernel32();
_imp__CreateMutexA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateMutexA");
}
void _elfimplib_CreateMutexA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateMutexA));
}

void _elfimplib_CreateMutexW() asm("CreateMutexW");
void *_imp__CreateMutexW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateMutexW() {
load_dll_kernel32();
_imp__CreateMutexW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateMutexW");
}
void _elfimplib_CreateMutexW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateMutexW));
}

void _elfimplib_CreateNamedPipeA() asm("CreateNamedPipeA");
void *_imp__CreateNamedPipeA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateNamedPipeA() {
load_dll_kernel32();
_imp__CreateNamedPipeA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateNamedPipeA");
}
void _elfimplib_CreateNamedPipeA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateNamedPipeA));
}

void _elfimplib_CreateNamedPipeW() asm("CreateNamedPipeW");
void *_imp__CreateNamedPipeW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateNamedPipeW() {
load_dll_kernel32();
_imp__CreateNamedPipeW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateNamedPipeW");
}
void _elfimplib_CreateNamedPipeW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateNamedPipeW));
}

void _elfimplib_CreateNlsSecurityDescriptor() asm("CreateNlsSecurityDescriptor");
void *_imp__CreateNlsSecurityDescriptor = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateNlsSecurityDescriptor() {
load_dll_kernel32();
_imp__CreateNlsSecurityDescriptor = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateNlsSecurityDescriptor");
}
void _elfimplib_CreateNlsSecurityDescriptor() {
asm("leave\njmp *%0" : : "r"(_imp__CreateNlsSecurityDescriptor));
}

void _elfimplib_CreatePipe() asm("CreatePipe");
void *_imp__CreatePipe = NULL;
__attribute__((constructor)) void _elfimplib_init_CreatePipe() {
load_dll_kernel32();
_imp__CreatePipe = (void *) _elf_GetProcAddress(_dll_kernel32, "CreatePipe");
}
void _elfimplib_CreatePipe() {
asm("leave\njmp *%0" : : "r"(_imp__CreatePipe));
}

void _elfimplib_CreateProcessA() asm("CreateProcessA");
void *_imp__CreateProcessA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateProcessA() {
load_dll_kernel32();
_imp__CreateProcessA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateProcessA");
}
void _elfimplib_CreateProcessA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateProcessA));
}

void _elfimplib_CreateProcessInternalA() asm("CreateProcessInternalA");
void *_imp__CreateProcessInternalA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateProcessInternalA() {
load_dll_kernel32();
_imp__CreateProcessInternalA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateProcessInternalA");
}
void _elfimplib_CreateProcessInternalA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateProcessInternalA));
}

void _elfimplib_CreateProcessInternalW() asm("CreateProcessInternalW");
void *_imp__CreateProcessInternalW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateProcessInternalW() {
load_dll_kernel32();
_imp__CreateProcessInternalW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateProcessInternalW");
}
void _elfimplib_CreateProcessInternalW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateProcessInternalW));
}

void _elfimplib_CreateProcessW() asm("CreateProcessW");
void *_imp__CreateProcessW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateProcessW() {
load_dll_kernel32();
_imp__CreateProcessW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateProcessW");
}
void _elfimplib_CreateProcessW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateProcessW));
}

void _elfimplib_CreateRemoteThread() asm("CreateRemoteThread");
void *_imp__CreateRemoteThread = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateRemoteThread() {
load_dll_kernel32();
_imp__CreateRemoteThread = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateRemoteThread");
}
void _elfimplib_CreateRemoteThread() {
asm("leave\njmp *%0" : : "r"(_imp__CreateRemoteThread));
}

void _elfimplib_CreateSemaphoreA() asm("CreateSemaphoreA");
void *_imp__CreateSemaphoreA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateSemaphoreA() {
load_dll_kernel32();
_imp__CreateSemaphoreA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateSemaphoreA");
}
void _elfimplib_CreateSemaphoreA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateSemaphoreA));
}

void _elfimplib_CreateSemaphoreW() asm("CreateSemaphoreW");
void *_imp__CreateSemaphoreW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateSemaphoreW() {
load_dll_kernel32();
_imp__CreateSemaphoreW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateSemaphoreW");
}
void _elfimplib_CreateSemaphoreW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateSemaphoreW));
}

void _elfimplib_CreateSocketHandle() asm("CreateSocketHandle");
void *_imp__CreateSocketHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateSocketHandle() {
load_dll_kernel32();
_imp__CreateSocketHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateSocketHandle");
}
void _elfimplib_CreateSocketHandle() {
asm("leave\njmp *%0" : : "r"(_imp__CreateSocketHandle));
}

void _elfimplib_CreateTapePartition() asm("CreateTapePartition");
void *_imp__CreateTapePartition = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateTapePartition() {
load_dll_kernel32();
_imp__CreateTapePartition = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateTapePartition");
}
void _elfimplib_CreateTapePartition() {
asm("leave\njmp *%0" : : "r"(_imp__CreateTapePartition));
}

void _elfimplib_CreateThread() asm("CreateThread");
void *_imp__CreateThread = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateThread() {
load_dll_kernel32();
_imp__CreateThread = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateThread");
}
void _elfimplib_CreateThread() {
asm("leave\njmp *%0" : : "r"(_imp__CreateThread));
}

void _elfimplib_CreateTimerQueue() asm("CreateTimerQueue");
void *_imp__CreateTimerQueue = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateTimerQueue() {
load_dll_kernel32();
_imp__CreateTimerQueue = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateTimerQueue");
}
void _elfimplib_CreateTimerQueue() {
asm("leave\njmp *%0" : : "r"(_imp__CreateTimerQueue));
}

void _elfimplib_CreateTimerQueueTimer() asm("CreateTimerQueueTimer");
void *_imp__CreateTimerQueueTimer = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateTimerQueueTimer() {
load_dll_kernel32();
_imp__CreateTimerQueueTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateTimerQueueTimer");
}
void _elfimplib_CreateTimerQueueTimer() {
asm("leave\njmp *%0" : : "r"(_imp__CreateTimerQueueTimer));
}

void _elfimplib_CreateToolhelp32Snapshot() asm("CreateToolhelp32Snapshot");
void *_imp__CreateToolhelp32Snapshot = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateToolhelp32Snapshot() {
load_dll_kernel32();
_imp__CreateToolhelp32Snapshot = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateToolhelp32Snapshot");
}
void _elfimplib_CreateToolhelp32Snapshot() {
asm("leave\njmp *%0" : : "r"(_imp__CreateToolhelp32Snapshot));
}

void _elfimplib_CreateVirtualBuffer() asm("CreateVirtualBuffer");
void *_imp__CreateVirtualBuffer = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateVirtualBuffer() {
load_dll_kernel32();
_imp__CreateVirtualBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateVirtualBuffer");
}
void _elfimplib_CreateVirtualBuffer() {
asm("leave\njmp *%0" : : "r"(_imp__CreateVirtualBuffer));
}

void _elfimplib_CreateWaitableTimerA() asm("CreateWaitableTimerA");
void *_imp__CreateWaitableTimerA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateWaitableTimerA() {
load_dll_kernel32();
_imp__CreateWaitableTimerA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateWaitableTimerA");
}
void _elfimplib_CreateWaitableTimerA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateWaitableTimerA));
}

void _elfimplib_CreateWaitableTimerW() asm("CreateWaitableTimerW");
void *_imp__CreateWaitableTimerW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateWaitableTimerW() {
load_dll_kernel32();
_imp__CreateWaitableTimerW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateWaitableTimerW");
}
void _elfimplib_CreateWaitableTimerW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateWaitableTimerW));
}

void _elfimplib_DeactivateActCtx() asm("DeactivateActCtx");
void *_imp__DeactivateActCtx = NULL;
__attribute__((constructor)) void _elfimplib_init_DeactivateActCtx() {
load_dll_kernel32();
_imp__DeactivateActCtx = (void *) _elf_GetProcAddress(_dll_kernel32, "DeactivateActCtx");
}
void _elfimplib_DeactivateActCtx() {
asm("leave\njmp *%0" : : "r"(_imp__DeactivateActCtx));
}

void _elfimplib_DebugActiveProcess() asm("DebugActiveProcess");
void *_imp__DebugActiveProcess = NULL;
__attribute__((constructor)) void _elfimplib_init_DebugActiveProcess() {
load_dll_kernel32();
_imp__DebugActiveProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "DebugActiveProcess");
}
void _elfimplib_DebugActiveProcess() {
asm("leave\njmp *%0" : : "r"(_imp__DebugActiveProcess));
}

void _elfimplib_DebugActiveProcessStop() asm("DebugActiveProcessStop");
void *_imp__DebugActiveProcessStop = NULL;
__attribute__((constructor)) void _elfimplib_init_DebugActiveProcessStop() {
load_dll_kernel32();
_imp__DebugActiveProcessStop = (void *) _elf_GetProcAddress(_dll_kernel32, "DebugActiveProcessStop");
}
void _elfimplib_DebugActiveProcessStop() {
asm("leave\njmp *%0" : : "r"(_imp__DebugActiveProcessStop));
}

void _elfimplib_DebugBreak() asm("DebugBreak");
void *_imp__DebugBreak = NULL;
__attribute__((constructor)) void _elfimplib_init_DebugBreak() {
load_dll_kernel32();
_imp__DebugBreak = (void *) _elf_GetProcAddress(_dll_kernel32, "DebugBreak");
}
void _elfimplib_DebugBreak() {
asm("leave\njmp *%0" : : "r"(_imp__DebugBreak));
}

void _elfimplib_DebugBreakProcess() asm("DebugBreakProcess");
void *_imp__DebugBreakProcess = NULL;
__attribute__((constructor)) void _elfimplib_init_DebugBreakProcess() {
load_dll_kernel32();
_imp__DebugBreakProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "DebugBreakProcess");
}
void _elfimplib_DebugBreakProcess() {
asm("leave\njmp *%0" : : "r"(_imp__DebugBreakProcess));
}

void _elfimplib_DebugSetProcessKillOnExit() asm("DebugSetProcessKillOnExit");
void *_imp__DebugSetProcessKillOnExit = NULL;
__attribute__((constructor)) void _elfimplib_init_DebugSetProcessKillOnExit() {
load_dll_kernel32();
_imp__DebugSetProcessKillOnExit = (void *) _elf_GetProcAddress(_dll_kernel32, "DebugSetProcessKillOnExit");
}
void _elfimplib_DebugSetProcessKillOnExit() {
asm("leave\njmp *%0" : : "r"(_imp__DebugSetProcessKillOnExit));
}

void _elfimplib_DefineDosDeviceA() asm("DefineDosDeviceA");
void *_imp__DefineDosDeviceA = NULL;
__attribute__((constructor)) void _elfimplib_init_DefineDosDeviceA() {
load_dll_kernel32();
_imp__DefineDosDeviceA = (void *) _elf_GetProcAddress(_dll_kernel32, "DefineDosDeviceA");
}
void _elfimplib_DefineDosDeviceA() {
asm("leave\njmp *%0" : : "r"(_imp__DefineDosDeviceA));
}

void _elfimplib_DefineDosDeviceW() asm("DefineDosDeviceW");
void *_imp__DefineDosDeviceW = NULL;
__attribute__((constructor)) void _elfimplib_init_DefineDosDeviceW() {
load_dll_kernel32();
_imp__DefineDosDeviceW = (void *) _elf_GetProcAddress(_dll_kernel32, "DefineDosDeviceW");
}
void _elfimplib_DefineDosDeviceW() {
asm("leave\njmp *%0" : : "r"(_imp__DefineDosDeviceW));
}

void _elfimplib_DelayLoadFailureHook() asm("DelayLoadFailureHook");
void *_imp__DelayLoadFailureHook = NULL;
__attribute__((constructor)) void _elfimplib_init_DelayLoadFailureHook() {
load_dll_kernel32();
_imp__DelayLoadFailureHook = (void *) _elf_GetProcAddress(_dll_kernel32, "DelayLoadFailureHook");
}
void _elfimplib_DelayLoadFailureHook() {
asm("leave\njmp *%0" : : "r"(_imp__DelayLoadFailureHook));
}

void _elfimplib_DeleteAtom() asm("DeleteAtom");
void *_imp__DeleteAtom = NULL;
__attribute__((constructor)) void _elfimplib_init_DeleteAtom() {
load_dll_kernel32();
_imp__DeleteAtom = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteAtom");
}
void _elfimplib_DeleteAtom() {
asm("leave\njmp *%0" : : "r"(_imp__DeleteAtom));
}

void _elfimplib_DeleteCriticalSection() asm("DeleteCriticalSection");
void *_imp__DeleteCriticalSection = NULL;
__attribute__((constructor)) void _elfimplib_init_DeleteCriticalSection() {
load_dll_kernel32();
_imp__DeleteCriticalSection = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteCriticalSection");
}
void _elfimplib_DeleteCriticalSection() {
asm("leave\njmp *%0" : : "r"(_imp__DeleteCriticalSection));
}

void _elfimplib_DeleteFiber() asm("DeleteFiber");
void *_imp__DeleteFiber = NULL;
__attribute__((constructor)) void _elfimplib_init_DeleteFiber() {
load_dll_kernel32();
_imp__DeleteFiber = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteFiber");
}
void _elfimplib_DeleteFiber() {
asm("leave\njmp *%0" : : "r"(_imp__DeleteFiber));
}

void _elfimplib_DeleteFileA() asm("DeleteFileA");
void *_imp__DeleteFileA = NULL;
__attribute__((constructor)) void _elfimplib_init_DeleteFileA() {
load_dll_kernel32();
_imp__DeleteFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteFileA");
}
void _elfimplib_DeleteFileA() {
asm("leave\njmp *%0" : : "r"(_imp__DeleteFileA));
}

void _elfimplib_DeleteFileW() asm("DeleteFileW");
void *_imp__DeleteFileW = NULL;
__attribute__((constructor)) void _elfimplib_init_DeleteFileW() {
load_dll_kernel32();
_imp__DeleteFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteFileW");
}
void _elfimplib_DeleteFileW() {
asm("leave\njmp *%0" : : "r"(_imp__DeleteFileW));
}

void _elfimplib_DeleteTimerQueue() asm("DeleteTimerQueue");
void *_imp__DeleteTimerQueue = NULL;
__attribute__((constructor)) void _elfimplib_init_DeleteTimerQueue() {
load_dll_kernel32();
_imp__DeleteTimerQueue = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteTimerQueue");
}
void _elfimplib_DeleteTimerQueue() {
asm("leave\njmp *%0" : : "r"(_imp__DeleteTimerQueue));
}

void _elfimplib_DeleteTimerQueueEx() asm("DeleteTimerQueueEx");
void *_imp__DeleteTimerQueueEx = NULL;
__attribute__((constructor)) void _elfimplib_init_DeleteTimerQueueEx() {
load_dll_kernel32();
_imp__DeleteTimerQueueEx = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteTimerQueueEx");
}
void _elfimplib_DeleteTimerQueueEx() {
asm("leave\njmp *%0" : : "r"(_imp__DeleteTimerQueueEx));
}

void _elfimplib_DeleteTimerQueueTimer() asm("DeleteTimerQueueTimer");
void *_imp__DeleteTimerQueueTimer = NULL;
__attribute__((constructor)) void _elfimplib_init_DeleteTimerQueueTimer() {
load_dll_kernel32();
_imp__DeleteTimerQueueTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteTimerQueueTimer");
}
void _elfimplib_DeleteTimerQueueTimer() {
asm("leave\njmp *%0" : : "r"(_imp__DeleteTimerQueueTimer));
}

void _elfimplib_DeleteVolumeMountPointA() asm("DeleteVolumeMountPointA");
void *_imp__DeleteVolumeMountPointA = NULL;
__attribute__((constructor)) void _elfimplib_init_DeleteVolumeMountPointA() {
load_dll_kernel32();
_imp__DeleteVolumeMountPointA = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteVolumeMountPointA");
}
void _elfimplib_DeleteVolumeMountPointA() {
asm("leave\njmp *%0" : : "r"(_imp__DeleteVolumeMountPointA));
}

void _elfimplib_DeleteVolumeMountPointW() asm("DeleteVolumeMountPointW");
void *_imp__DeleteVolumeMountPointW = NULL;
__attribute__((constructor)) void _elfimplib_init_DeleteVolumeMountPointW() {
load_dll_kernel32();
_imp__DeleteVolumeMountPointW = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteVolumeMountPointW");
}
void _elfimplib_DeleteVolumeMountPointW() {
asm("leave\njmp *%0" : : "r"(_imp__DeleteVolumeMountPointW));
}

void _elfimplib_DeviceIoControl() asm("DeviceIoControl");
void *_imp__DeviceIoControl = NULL;
__attribute__((constructor)) void _elfimplib_init_DeviceIoControl() {
load_dll_kernel32();
_imp__DeviceIoControl = (void *) _elf_GetProcAddress(_dll_kernel32, "DeviceIoControl");
}
void _elfimplib_DeviceIoControl() {
asm("leave\njmp *%0" : : "r"(_imp__DeviceIoControl));
}

void _elfimplib_DisableThreadLibraryCalls() asm("DisableThreadLibraryCalls");
void *_imp__DisableThreadLibraryCalls = NULL;
__attribute__((constructor)) void _elfimplib_init_DisableThreadLibraryCalls() {
load_dll_kernel32();
_imp__DisableThreadLibraryCalls = (void *) _elf_GetProcAddress(_dll_kernel32, "DisableThreadLibraryCalls");
}
void _elfimplib_DisableThreadLibraryCalls() {
asm("leave\njmp *%0" : : "r"(_imp__DisableThreadLibraryCalls));
}

void _elfimplib_DisconnectNamedPipe() asm("DisconnectNamedPipe");
void *_imp__DisconnectNamedPipe = NULL;
__attribute__((constructor)) void _elfimplib_init_DisconnectNamedPipe() {
load_dll_kernel32();
_imp__DisconnectNamedPipe = (void *) _elf_GetProcAddress(_dll_kernel32, "DisconnectNamedPipe");
}
void _elfimplib_DisconnectNamedPipe() {
asm("leave\njmp *%0" : : "r"(_imp__DisconnectNamedPipe));
}

void _elfimplib_DnsHostnameToComputerNameA() asm("DnsHostnameToComputerNameA");
void *_imp__DnsHostnameToComputerNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_DnsHostnameToComputerNameA() {
load_dll_kernel32();
_imp__DnsHostnameToComputerNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "DnsHostnameToComputerNameA");
}
void _elfimplib_DnsHostnameToComputerNameA() {
asm("leave\njmp *%0" : : "r"(_imp__DnsHostnameToComputerNameA));
}

void _elfimplib_DnsHostnameToComputerNameW() asm("DnsHostnameToComputerNameW");
void *_imp__DnsHostnameToComputerNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_DnsHostnameToComputerNameW() {
load_dll_kernel32();
_imp__DnsHostnameToComputerNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "DnsHostnameToComputerNameW");
}
void _elfimplib_DnsHostnameToComputerNameW() {
asm("leave\njmp *%0" : : "r"(_imp__DnsHostnameToComputerNameW));
}

void _elfimplib_DosDateTimeToFileTime() asm("DosDateTimeToFileTime");
void *_imp__DosDateTimeToFileTime = NULL;
__attribute__((constructor)) void _elfimplib_init_DosDateTimeToFileTime() {
load_dll_kernel32();
_imp__DosDateTimeToFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "DosDateTimeToFileTime");
}
void _elfimplib_DosDateTimeToFileTime() {
asm("leave\njmp *%0" : : "r"(_imp__DosDateTimeToFileTime));
}

void _elfimplib_DosPathToSessionPathA() asm("DosPathToSessionPathA");
void *_imp__DosPathToSessionPathA = NULL;
__attribute__((constructor)) void _elfimplib_init_DosPathToSessionPathA() {
load_dll_kernel32();
_imp__DosPathToSessionPathA = (void *) _elf_GetProcAddress(_dll_kernel32, "DosPathToSessionPathA");
}
void _elfimplib_DosPathToSessionPathA() {
asm("leave\njmp *%0" : : "r"(_imp__DosPathToSessionPathA));
}

void _elfimplib_DosPathToSessionPathW() asm("DosPathToSessionPathW");
void *_imp__DosPathToSessionPathW = NULL;
__attribute__((constructor)) void _elfimplib_init_DosPathToSessionPathW() {
load_dll_kernel32();
_imp__DosPathToSessionPathW = (void *) _elf_GetProcAddress(_dll_kernel32, "DosPathToSessionPathW");
}
void _elfimplib_DosPathToSessionPathW() {
asm("leave\njmp *%0" : : "r"(_imp__DosPathToSessionPathW));
}

void _elfimplib_DuplicateConsoleHandle() asm("DuplicateConsoleHandle");
void *_imp__DuplicateConsoleHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_DuplicateConsoleHandle() {
load_dll_kernel32();
_imp__DuplicateConsoleHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "DuplicateConsoleHandle");
}
void _elfimplib_DuplicateConsoleHandle() {
asm("leave\njmp *%0" : : "r"(_imp__DuplicateConsoleHandle));
}

void _elfimplib_DuplicateHandle() asm("DuplicateHandle");
void *_imp__DuplicateHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_DuplicateHandle() {
load_dll_kernel32();
_imp__DuplicateHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "DuplicateHandle");
}
void _elfimplib_DuplicateHandle() {
asm("leave\njmp *%0" : : "r"(_imp__DuplicateHandle));
}

void _elfimplib_EndUpdateResourceA() asm("EndUpdateResourceA");
void *_imp__EndUpdateResourceA = NULL;
__attribute__((constructor)) void _elfimplib_init_EndUpdateResourceA() {
load_dll_kernel32();
_imp__EndUpdateResourceA = (void *) _elf_GetProcAddress(_dll_kernel32, "EndUpdateResourceA");
}
void _elfimplib_EndUpdateResourceA() {
asm("leave\njmp *%0" : : "r"(_imp__EndUpdateResourceA));
}

void _elfimplib_EndUpdateResourceW() asm("EndUpdateResourceW");
void *_imp__EndUpdateResourceW = NULL;
__attribute__((constructor)) void _elfimplib_init_EndUpdateResourceW() {
load_dll_kernel32();
_imp__EndUpdateResourceW = (void *) _elf_GetProcAddress(_dll_kernel32, "EndUpdateResourceW");
}
void _elfimplib_EndUpdateResourceW() {
asm("leave\njmp *%0" : : "r"(_imp__EndUpdateResourceW));
}

void _elfimplib_EnterCriticalSection() asm("EnterCriticalSection");
void *_imp__EnterCriticalSection = NULL;
__attribute__((constructor)) void _elfimplib_init_EnterCriticalSection() {
load_dll_kernel32();
_imp__EnterCriticalSection = (void *) _elf_GetProcAddress(_dll_kernel32, "EnterCriticalSection");
}
void _elfimplib_EnterCriticalSection() {
asm("leave\njmp *%0" : : "r"(_imp__EnterCriticalSection));
}

void _elfimplib_EnumCalendarInfoA() asm("EnumCalendarInfoA");
void *_imp__EnumCalendarInfoA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumCalendarInfoA() {
load_dll_kernel32();
_imp__EnumCalendarInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumCalendarInfoA");
}
void _elfimplib_EnumCalendarInfoA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumCalendarInfoA));
}

void _elfimplib_EnumCalendarInfoExA() asm("EnumCalendarInfoExA");
void *_imp__EnumCalendarInfoExA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumCalendarInfoExA() {
load_dll_kernel32();
_imp__EnumCalendarInfoExA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumCalendarInfoExA");
}
void _elfimplib_EnumCalendarInfoExA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumCalendarInfoExA));
}

void _elfimplib_EnumCalendarInfoExW() asm("EnumCalendarInfoExW");
void *_imp__EnumCalendarInfoExW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumCalendarInfoExW() {
load_dll_kernel32();
_imp__EnumCalendarInfoExW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumCalendarInfoExW");
}
void _elfimplib_EnumCalendarInfoExW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumCalendarInfoExW));
}

void _elfimplib_EnumCalendarInfoW() asm("EnumCalendarInfoW");
void *_imp__EnumCalendarInfoW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumCalendarInfoW() {
load_dll_kernel32();
_imp__EnumCalendarInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumCalendarInfoW");
}
void _elfimplib_EnumCalendarInfoW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumCalendarInfoW));
}

void _elfimplib_EnumDateFormatsA() asm("EnumDateFormatsA");
void *_imp__EnumDateFormatsA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumDateFormatsA() {
load_dll_kernel32();
_imp__EnumDateFormatsA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumDateFormatsA");
}
void _elfimplib_EnumDateFormatsA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumDateFormatsA));
}

void _elfimplib_EnumDateFormatsExA() asm("EnumDateFormatsExA");
void *_imp__EnumDateFormatsExA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumDateFormatsExA() {
load_dll_kernel32();
_imp__EnumDateFormatsExA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumDateFormatsExA");
}
void _elfimplib_EnumDateFormatsExA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumDateFormatsExA));
}

void _elfimplib_EnumDateFormatsExW() asm("EnumDateFormatsExW");
void *_imp__EnumDateFormatsExW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumDateFormatsExW() {
load_dll_kernel32();
_imp__EnumDateFormatsExW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumDateFormatsExW");
}
void _elfimplib_EnumDateFormatsExW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumDateFormatsExW));
}

void _elfimplib_EnumDateFormatsW() asm("EnumDateFormatsW");
void *_imp__EnumDateFormatsW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumDateFormatsW() {
load_dll_kernel32();
_imp__EnumDateFormatsW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumDateFormatsW");
}
void _elfimplib_EnumDateFormatsW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumDateFormatsW));
}

void _elfimplib_EnumLanguageGroupLocalesA() asm("EnumLanguageGroupLocalesA");
void *_imp__EnumLanguageGroupLocalesA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumLanguageGroupLocalesA() {
load_dll_kernel32();
_imp__EnumLanguageGroupLocalesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumLanguageGroupLocalesA");
}
void _elfimplib_EnumLanguageGroupLocalesA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumLanguageGroupLocalesA));
}

void _elfimplib_EnumLanguageGroupLocalesW() asm("EnumLanguageGroupLocalesW");
void *_imp__EnumLanguageGroupLocalesW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumLanguageGroupLocalesW() {
load_dll_kernel32();
_imp__EnumLanguageGroupLocalesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumLanguageGroupLocalesW");
}
void _elfimplib_EnumLanguageGroupLocalesW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumLanguageGroupLocalesW));
}

void _elfimplib_EnumResourceLanguagesA() asm("EnumResourceLanguagesA");
void *_imp__EnumResourceLanguagesA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumResourceLanguagesA() {
load_dll_kernel32();
_imp__EnumResourceLanguagesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumResourceLanguagesA");
}
void _elfimplib_EnumResourceLanguagesA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumResourceLanguagesA));
}

void _elfimplib_EnumResourceLanguagesW() asm("EnumResourceLanguagesW");
void *_imp__EnumResourceLanguagesW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumResourceLanguagesW() {
load_dll_kernel32();
_imp__EnumResourceLanguagesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumResourceLanguagesW");
}
void _elfimplib_EnumResourceLanguagesW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumResourceLanguagesW));
}

void _elfimplib_EnumResourceNamesA() asm("EnumResourceNamesA");
void *_imp__EnumResourceNamesA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumResourceNamesA() {
load_dll_kernel32();
_imp__EnumResourceNamesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumResourceNamesA");
}
void _elfimplib_EnumResourceNamesA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumResourceNamesA));
}

void _elfimplib_EnumResourceNamesW() asm("EnumResourceNamesW");
void *_imp__EnumResourceNamesW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumResourceNamesW() {
load_dll_kernel32();
_imp__EnumResourceNamesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumResourceNamesW");
}
void _elfimplib_EnumResourceNamesW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumResourceNamesW));
}

void _elfimplib_EnumResourceTypesA() asm("EnumResourceTypesA");
void *_imp__EnumResourceTypesA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumResourceTypesA() {
load_dll_kernel32();
_imp__EnumResourceTypesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumResourceTypesA");
}
void _elfimplib_EnumResourceTypesA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumResourceTypesA));
}

void _elfimplib_EnumResourceTypesW() asm("EnumResourceTypesW");
void *_imp__EnumResourceTypesW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumResourceTypesW() {
load_dll_kernel32();
_imp__EnumResourceTypesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumResourceTypesW");
}
void _elfimplib_EnumResourceTypesW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumResourceTypesW));
}

void _elfimplib_EnumSystemCodePagesA() asm("EnumSystemCodePagesA");
void *_imp__EnumSystemCodePagesA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumSystemCodePagesA() {
load_dll_kernel32();
_imp__EnumSystemCodePagesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemCodePagesA");
}
void _elfimplib_EnumSystemCodePagesA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumSystemCodePagesA));
}

void _elfimplib_EnumSystemCodePagesW() asm("EnumSystemCodePagesW");
void *_imp__EnumSystemCodePagesW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumSystemCodePagesW() {
load_dll_kernel32();
_imp__EnumSystemCodePagesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemCodePagesW");
}
void _elfimplib_EnumSystemCodePagesW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumSystemCodePagesW));
}

void _elfimplib_EnumSystemGeoID() asm("EnumSystemGeoID");
void *_imp__EnumSystemGeoID = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumSystemGeoID() {
load_dll_kernel32();
_imp__EnumSystemGeoID = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemGeoID");
}
void _elfimplib_EnumSystemGeoID() {
asm("leave\njmp *%0" : : "r"(_imp__EnumSystemGeoID));
}

void _elfimplib_EnumSystemLanguageGroupsA() asm("EnumSystemLanguageGroupsA");
void *_imp__EnumSystemLanguageGroupsA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumSystemLanguageGroupsA() {
load_dll_kernel32();
_imp__EnumSystemLanguageGroupsA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemLanguageGroupsA");
}
void _elfimplib_EnumSystemLanguageGroupsA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumSystemLanguageGroupsA));
}

void _elfimplib_EnumSystemLanguageGroupsW() asm("EnumSystemLanguageGroupsW");
void *_imp__EnumSystemLanguageGroupsW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumSystemLanguageGroupsW() {
load_dll_kernel32();
_imp__EnumSystemLanguageGroupsW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemLanguageGroupsW");
}
void _elfimplib_EnumSystemLanguageGroupsW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumSystemLanguageGroupsW));
}

void _elfimplib_EnumSystemLocalesA() asm("EnumSystemLocalesA");
void *_imp__EnumSystemLocalesA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumSystemLocalesA() {
load_dll_kernel32();
_imp__EnumSystemLocalesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemLocalesA");
}
void _elfimplib_EnumSystemLocalesA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumSystemLocalesA));
}

void _elfimplib_EnumSystemLocalesW() asm("EnumSystemLocalesW");
void *_imp__EnumSystemLocalesW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumSystemLocalesW() {
load_dll_kernel32();
_imp__EnumSystemLocalesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemLocalesW");
}
void _elfimplib_EnumSystemLocalesW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumSystemLocalesW));
}

void _elfimplib_EnumTimeFormatsA() asm("EnumTimeFormatsA");
void *_imp__EnumTimeFormatsA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumTimeFormatsA() {
load_dll_kernel32();
_imp__EnumTimeFormatsA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumTimeFormatsA");
}
void _elfimplib_EnumTimeFormatsA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumTimeFormatsA));
}

void _elfimplib_EnumTimeFormatsW() asm("EnumTimeFormatsW");
void *_imp__EnumTimeFormatsW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumTimeFormatsW() {
load_dll_kernel32();
_imp__EnumTimeFormatsW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumTimeFormatsW");
}
void _elfimplib_EnumTimeFormatsW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumTimeFormatsW));
}

void _elfimplib_EnumUILanguagesA() asm("EnumUILanguagesA");
void *_imp__EnumUILanguagesA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumUILanguagesA() {
load_dll_kernel32();
_imp__EnumUILanguagesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumUILanguagesA");
}
void _elfimplib_EnumUILanguagesA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumUILanguagesA));
}

void _elfimplib_EnumUILanguagesW() asm("EnumUILanguagesW");
void *_imp__EnumUILanguagesW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumUILanguagesW() {
load_dll_kernel32();
_imp__EnumUILanguagesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumUILanguagesW");
}
void _elfimplib_EnumUILanguagesW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumUILanguagesW));
}

void _elfimplib_EnumerateLocalComputerNamesA() asm("EnumerateLocalComputerNamesA");
void *_imp__EnumerateLocalComputerNamesA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumerateLocalComputerNamesA() {
load_dll_kernel32();
_imp__EnumerateLocalComputerNamesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumerateLocalComputerNamesA");
}
void _elfimplib_EnumerateLocalComputerNamesA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumerateLocalComputerNamesA));
}

void _elfimplib_EnumerateLocalComputerNamesW() asm("EnumerateLocalComputerNamesW");
void *_imp__EnumerateLocalComputerNamesW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumerateLocalComputerNamesW() {
load_dll_kernel32();
_imp__EnumerateLocalComputerNamesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumerateLocalComputerNamesW");
}
void _elfimplib_EnumerateLocalComputerNamesW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumerateLocalComputerNamesW));
}

void _elfimplib_EraseTape() asm("EraseTape");
void *_imp__EraseTape = NULL;
__attribute__((constructor)) void _elfimplib_init_EraseTape() {
load_dll_kernel32();
_imp__EraseTape = (void *) _elf_GetProcAddress(_dll_kernel32, "EraseTape");
}
void _elfimplib_EraseTape() {
asm("leave\njmp *%0" : : "r"(_imp__EraseTape));
}

void _elfimplib_EscapeCommFunction() asm("EscapeCommFunction");
void *_imp__EscapeCommFunction = NULL;
__attribute__((constructor)) void _elfimplib_init_EscapeCommFunction() {
load_dll_kernel32();
_imp__EscapeCommFunction = (void *) _elf_GetProcAddress(_dll_kernel32, "EscapeCommFunction");
}
void _elfimplib_EscapeCommFunction() {
asm("leave\njmp *%0" : : "r"(_imp__EscapeCommFunction));
}

void _elfimplib_ExitProcess() asm("ExitProcess");
void *_imp__ExitProcess = NULL;
__attribute__((constructor)) void _elfimplib_init_ExitProcess() {
load_dll_kernel32();
_imp__ExitProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "ExitProcess");
}
void _elfimplib_ExitProcess() {
asm("leave\njmp *%0" : : "r"(_imp__ExitProcess));
}

void _elfimplib_ExitThread() asm("ExitThread");
void *_imp__ExitThread = NULL;
__attribute__((constructor)) void _elfimplib_init_ExitThread() {
load_dll_kernel32();
_imp__ExitThread = (void *) _elf_GetProcAddress(_dll_kernel32, "ExitThread");
}
void _elfimplib_ExitThread() {
asm("leave\njmp *%0" : : "r"(_imp__ExitThread));
}

void _elfimplib_ExitVDM() asm("ExitVDM");
void *_imp__ExitVDM = NULL;
__attribute__((constructor)) void _elfimplib_init_ExitVDM() {
load_dll_kernel32();
_imp__ExitVDM = (void *) _elf_GetProcAddress(_dll_kernel32, "ExitVDM");
}
void _elfimplib_ExitVDM() {
asm("leave\njmp *%0" : : "r"(_imp__ExitVDM));
}

void _elfimplib_ExpandEnvironmentStringsA() asm("ExpandEnvironmentStringsA");
void *_imp__ExpandEnvironmentStringsA = NULL;
__attribute__((constructor)) void _elfimplib_init_ExpandEnvironmentStringsA() {
load_dll_kernel32();
_imp__ExpandEnvironmentStringsA = (void *) _elf_GetProcAddress(_dll_kernel32, "ExpandEnvironmentStringsA");
}
void _elfimplib_ExpandEnvironmentStringsA() {
asm("leave\njmp *%0" : : "r"(_imp__ExpandEnvironmentStringsA));
}

void _elfimplib_ExpandEnvironmentStringsW() asm("ExpandEnvironmentStringsW");
void *_imp__ExpandEnvironmentStringsW = NULL;
__attribute__((constructor)) void _elfimplib_init_ExpandEnvironmentStringsW() {
load_dll_kernel32();
_imp__ExpandEnvironmentStringsW = (void *) _elf_GetProcAddress(_dll_kernel32, "ExpandEnvironmentStringsW");
}
void _elfimplib_ExpandEnvironmentStringsW() {
asm("leave\njmp *%0" : : "r"(_imp__ExpandEnvironmentStringsW));
}

void _elfimplib_ExpungeConsoleCommandHistoryA() asm("ExpungeConsoleCommandHistoryA");
void *_imp__ExpungeConsoleCommandHistoryA = NULL;
__attribute__((constructor)) void _elfimplib_init_ExpungeConsoleCommandHistoryA() {
load_dll_kernel32();
_imp__ExpungeConsoleCommandHistoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "ExpungeConsoleCommandHistoryA");
}
void _elfimplib_ExpungeConsoleCommandHistoryA() {
asm("leave\njmp *%0" : : "r"(_imp__ExpungeConsoleCommandHistoryA));
}

void _elfimplib_ExpungeConsoleCommandHistoryW() asm("ExpungeConsoleCommandHistoryW");
void *_imp__ExpungeConsoleCommandHistoryW = NULL;
__attribute__((constructor)) void _elfimplib_init_ExpungeConsoleCommandHistoryW() {
load_dll_kernel32();
_imp__ExpungeConsoleCommandHistoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "ExpungeConsoleCommandHistoryW");
}
void _elfimplib_ExpungeConsoleCommandHistoryW() {
asm("leave\njmp *%0" : : "r"(_imp__ExpungeConsoleCommandHistoryW));
}

void _elfimplib_ExtendVirtualBuffer() asm("ExtendVirtualBuffer");
void *_imp__ExtendVirtualBuffer = NULL;
__attribute__((constructor)) void _elfimplib_init_ExtendVirtualBuffer() {
load_dll_kernel32();
_imp__ExtendVirtualBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "ExtendVirtualBuffer");
}
void _elfimplib_ExtendVirtualBuffer() {
asm("leave\njmp *%0" : : "r"(_imp__ExtendVirtualBuffer));
}

void _elfimplib_FatalAppExitA() asm("FatalAppExitA");
void *_imp__FatalAppExitA = NULL;
__attribute__((constructor)) void _elfimplib_init_FatalAppExitA() {
load_dll_kernel32();
_imp__FatalAppExitA = (void *) _elf_GetProcAddress(_dll_kernel32, "FatalAppExitA");
}
void _elfimplib_FatalAppExitA() {
asm("leave\njmp *%0" : : "r"(_imp__FatalAppExitA));
}

void _elfimplib_FatalAppExitW() asm("FatalAppExitW");
void *_imp__FatalAppExitW = NULL;
__attribute__((constructor)) void _elfimplib_init_FatalAppExitW() {
load_dll_kernel32();
_imp__FatalAppExitW = (void *) _elf_GetProcAddress(_dll_kernel32, "FatalAppExitW");
}
void _elfimplib_FatalAppExitW() {
asm("leave\njmp *%0" : : "r"(_imp__FatalAppExitW));
}

void _elfimplib_FatalExit() asm("FatalExit");
void *_imp__FatalExit = NULL;
__attribute__((constructor)) void _elfimplib_init_FatalExit() {
load_dll_kernel32();
_imp__FatalExit = (void *) _elf_GetProcAddress(_dll_kernel32, "FatalExit");
}
void _elfimplib_FatalExit() {
asm("leave\njmp *%0" : : "r"(_imp__FatalExit));
}

void _elfimplib_FileTimeToDosDateTime() asm("FileTimeToDosDateTime");
void *_imp__FileTimeToDosDateTime = NULL;
__attribute__((constructor)) void _elfimplib_init_FileTimeToDosDateTime() {
load_dll_kernel32();
_imp__FileTimeToDosDateTime = (void *) _elf_GetProcAddress(_dll_kernel32, "FileTimeToDosDateTime");
}
void _elfimplib_FileTimeToDosDateTime() {
asm("leave\njmp *%0" : : "r"(_imp__FileTimeToDosDateTime));
}

void _elfimplib_FileTimeToLocalFileTime() asm("FileTimeToLocalFileTime");
void *_imp__FileTimeToLocalFileTime = NULL;
__attribute__((constructor)) void _elfimplib_init_FileTimeToLocalFileTime() {
load_dll_kernel32();
_imp__FileTimeToLocalFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "FileTimeToLocalFileTime");
}
void _elfimplib_FileTimeToLocalFileTime() {
asm("leave\njmp *%0" : : "r"(_imp__FileTimeToLocalFileTime));
}

void _elfimplib_FileTimeToSystemTime() asm("FileTimeToSystemTime");
void *_imp__FileTimeToSystemTime = NULL;
__attribute__((constructor)) void _elfimplib_init_FileTimeToSystemTime() {
load_dll_kernel32();
_imp__FileTimeToSystemTime = (void *) _elf_GetProcAddress(_dll_kernel32, "FileTimeToSystemTime");
}
void _elfimplib_FileTimeToSystemTime() {
asm("leave\njmp *%0" : : "r"(_imp__FileTimeToSystemTime));
}

void _elfimplib_FillConsoleOutputAttribute() asm("FillConsoleOutputAttribute");
void *_imp__FillConsoleOutputAttribute = NULL;
__attribute__((constructor)) void _elfimplib_init_FillConsoleOutputAttribute() {
load_dll_kernel32();
_imp__FillConsoleOutputAttribute = (void *) _elf_GetProcAddress(_dll_kernel32, "FillConsoleOutputAttribute");
}
void _elfimplib_FillConsoleOutputAttribute() {
asm("leave\njmp *%0" : : "r"(_imp__FillConsoleOutputAttribute));
}

void _elfimplib_FillConsoleOutputCharacterA() asm("FillConsoleOutputCharacterA");
void *_imp__FillConsoleOutputCharacterA = NULL;
__attribute__((constructor)) void _elfimplib_init_FillConsoleOutputCharacterA() {
load_dll_kernel32();
_imp__FillConsoleOutputCharacterA = (void *) _elf_GetProcAddress(_dll_kernel32, "FillConsoleOutputCharacterA");
}
void _elfimplib_FillConsoleOutputCharacterA() {
asm("leave\njmp *%0" : : "r"(_imp__FillConsoleOutputCharacterA));
}

void _elfimplib_FillConsoleOutputCharacterW() asm("FillConsoleOutputCharacterW");
void *_imp__FillConsoleOutputCharacterW = NULL;
__attribute__((constructor)) void _elfimplib_init_FillConsoleOutputCharacterW() {
load_dll_kernel32();
_imp__FillConsoleOutputCharacterW = (void *) _elf_GetProcAddress(_dll_kernel32, "FillConsoleOutputCharacterW");
}
void _elfimplib_FillConsoleOutputCharacterW() {
asm("leave\njmp *%0" : : "r"(_imp__FillConsoleOutputCharacterW));
}

void _elfimplib_FindActCtxSectionGuid() asm("FindActCtxSectionGuid");
void *_imp__FindActCtxSectionGuid = NULL;
__attribute__((constructor)) void _elfimplib_init_FindActCtxSectionGuid() {
load_dll_kernel32();
_imp__FindActCtxSectionGuid = (void *) _elf_GetProcAddress(_dll_kernel32, "FindActCtxSectionGuid");
}
void _elfimplib_FindActCtxSectionGuid() {
asm("leave\njmp *%0" : : "r"(_imp__FindActCtxSectionGuid));
}

void _elfimplib_FindActCtxSectionStringA() asm("FindActCtxSectionStringA");
void *_imp__FindActCtxSectionStringA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindActCtxSectionStringA() {
load_dll_kernel32();
_imp__FindActCtxSectionStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindActCtxSectionStringA");
}
void _elfimplib_FindActCtxSectionStringA() {
asm("leave\njmp *%0" : : "r"(_imp__FindActCtxSectionStringA));
}

void _elfimplib_FindActCtxSectionStringW() asm("FindActCtxSectionStringW");
void *_imp__FindActCtxSectionStringW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindActCtxSectionStringW() {
load_dll_kernel32();
_imp__FindActCtxSectionStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindActCtxSectionStringW");
}
void _elfimplib_FindActCtxSectionStringW() {
asm("leave\njmp *%0" : : "r"(_imp__FindActCtxSectionStringW));
}

void _elfimplib_FindAtomA() asm("FindAtomA");
void *_imp__FindAtomA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindAtomA() {
load_dll_kernel32();
_imp__FindAtomA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindAtomA");
}
void _elfimplib_FindAtomA() {
asm("leave\njmp *%0" : : "r"(_imp__FindAtomA));
}

void _elfimplib_FindAtomW() asm("FindAtomW");
void *_imp__FindAtomW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindAtomW() {
load_dll_kernel32();
_imp__FindAtomW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindAtomW");
}
void _elfimplib_FindAtomW() {
asm("leave\njmp *%0" : : "r"(_imp__FindAtomW));
}

void _elfimplib_FindClose() asm("FindClose");
void *_imp__FindClose = NULL;
__attribute__((constructor)) void _elfimplib_init_FindClose() {
load_dll_kernel32();
_imp__FindClose = (void *) _elf_GetProcAddress(_dll_kernel32, "FindClose");
}
void _elfimplib_FindClose() {
asm("leave\njmp *%0" : : "r"(_imp__FindClose));
}

void _elfimplib_FindCloseChangeNotification() asm("FindCloseChangeNotification");
void *_imp__FindCloseChangeNotification = NULL;
__attribute__((constructor)) void _elfimplib_init_FindCloseChangeNotification() {
load_dll_kernel32();
_imp__FindCloseChangeNotification = (void *) _elf_GetProcAddress(_dll_kernel32, "FindCloseChangeNotification");
}
void _elfimplib_FindCloseChangeNotification() {
asm("leave\njmp *%0" : : "r"(_imp__FindCloseChangeNotification));
}

void _elfimplib_FindFirstChangeNotificationA() asm("FindFirstChangeNotificationA");
void *_imp__FindFirstChangeNotificationA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindFirstChangeNotificationA() {
load_dll_kernel32();
_imp__FindFirstChangeNotificationA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstChangeNotificationA");
}
void _elfimplib_FindFirstChangeNotificationA() {
asm("leave\njmp *%0" : : "r"(_imp__FindFirstChangeNotificationA));
}

void _elfimplib_FindFirstChangeNotificationW() asm("FindFirstChangeNotificationW");
void *_imp__FindFirstChangeNotificationW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindFirstChangeNotificationW() {
load_dll_kernel32();
_imp__FindFirstChangeNotificationW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstChangeNotificationW");
}
void _elfimplib_FindFirstChangeNotificationW() {
asm("leave\njmp *%0" : : "r"(_imp__FindFirstChangeNotificationW));
}

void _elfimplib_FindFirstFileA() asm("FindFirstFileA");
void *_imp__FindFirstFileA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindFirstFileA() {
load_dll_kernel32();
_imp__FindFirstFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstFileA");
}
void _elfimplib_FindFirstFileA() {
asm("leave\njmp *%0" : : "r"(_imp__FindFirstFileA));
}

void _elfimplib_FindFirstFileExA() asm("FindFirstFileExA");
void *_imp__FindFirstFileExA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindFirstFileExA() {
load_dll_kernel32();
_imp__FindFirstFileExA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstFileExA");
}
void _elfimplib_FindFirstFileExA() {
asm("leave\njmp *%0" : : "r"(_imp__FindFirstFileExA));
}

void _elfimplib_FindFirstFileExW() asm("FindFirstFileExW");
void *_imp__FindFirstFileExW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindFirstFileExW() {
load_dll_kernel32();
_imp__FindFirstFileExW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstFileExW");
}
void _elfimplib_FindFirstFileExW() {
asm("leave\njmp *%0" : : "r"(_imp__FindFirstFileExW));
}

void _elfimplib_FindFirstFileW() asm("FindFirstFileW");
void *_imp__FindFirstFileW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindFirstFileW() {
load_dll_kernel32();
_imp__FindFirstFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstFileW");
}
void _elfimplib_FindFirstFileW() {
asm("leave\njmp *%0" : : "r"(_imp__FindFirstFileW));
}

void _elfimplib_FindFirstVolumeA() asm("FindFirstVolumeA");
void *_imp__FindFirstVolumeA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindFirstVolumeA() {
load_dll_kernel32();
_imp__FindFirstVolumeA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstVolumeA");
}
void _elfimplib_FindFirstVolumeA() {
asm("leave\njmp *%0" : : "r"(_imp__FindFirstVolumeA));
}

void _elfimplib_FindFirstVolumeMountPointA() asm("FindFirstVolumeMountPointA");
void *_imp__FindFirstVolumeMountPointA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindFirstVolumeMountPointA() {
load_dll_kernel32();
_imp__FindFirstVolumeMountPointA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstVolumeMountPointA");
}
void _elfimplib_FindFirstVolumeMountPointA() {
asm("leave\njmp *%0" : : "r"(_imp__FindFirstVolumeMountPointA));
}

void _elfimplib_FindFirstVolumeMountPointW() asm("FindFirstVolumeMountPointW");
void *_imp__FindFirstVolumeMountPointW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindFirstVolumeMountPointW() {
load_dll_kernel32();
_imp__FindFirstVolumeMountPointW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstVolumeMountPointW");
}
void _elfimplib_FindFirstVolumeMountPointW() {
asm("leave\njmp *%0" : : "r"(_imp__FindFirstVolumeMountPointW));
}

void _elfimplib_FindFirstVolumeW() asm("FindFirstVolumeW");
void *_imp__FindFirstVolumeW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindFirstVolumeW() {
load_dll_kernel32();
_imp__FindFirstVolumeW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstVolumeW");
}
void _elfimplib_FindFirstVolumeW() {
asm("leave\njmp *%0" : : "r"(_imp__FindFirstVolumeW));
}

void _elfimplib_FindNextChangeNotification() asm("FindNextChangeNotification");
void *_imp__FindNextChangeNotification = NULL;
__attribute__((constructor)) void _elfimplib_init_FindNextChangeNotification() {
load_dll_kernel32();
_imp__FindNextChangeNotification = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextChangeNotification");
}
void _elfimplib_FindNextChangeNotification() {
asm("leave\njmp *%0" : : "r"(_imp__FindNextChangeNotification));
}

void _elfimplib_FindNextFileA() asm("FindNextFileA");
void *_imp__FindNextFileA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindNextFileA() {
load_dll_kernel32();
_imp__FindNextFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextFileA");
}
void _elfimplib_FindNextFileA() {
asm("leave\njmp *%0" : : "r"(_imp__FindNextFileA));
}

void _elfimplib_FindNextFileW() asm("FindNextFileW");
void *_imp__FindNextFileW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindNextFileW() {
load_dll_kernel32();
_imp__FindNextFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextFileW");
}
void _elfimplib_FindNextFileW() {
asm("leave\njmp *%0" : : "r"(_imp__FindNextFileW));
}

void _elfimplib_FindNextVolumeA() asm("FindNextVolumeA");
void *_imp__FindNextVolumeA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindNextVolumeA() {
load_dll_kernel32();
_imp__FindNextVolumeA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextVolumeA");
}
void _elfimplib_FindNextVolumeA() {
asm("leave\njmp *%0" : : "r"(_imp__FindNextVolumeA));
}

void _elfimplib_FindNextVolumeMountPointA() asm("FindNextVolumeMountPointA");
void *_imp__FindNextVolumeMountPointA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindNextVolumeMountPointA() {
load_dll_kernel32();
_imp__FindNextVolumeMountPointA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextVolumeMountPointA");
}
void _elfimplib_FindNextVolumeMountPointA() {
asm("leave\njmp *%0" : : "r"(_imp__FindNextVolumeMountPointA));
}

void _elfimplib_FindNextVolumeMountPointW() asm("FindNextVolumeMountPointW");
void *_imp__FindNextVolumeMountPointW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindNextVolumeMountPointW() {
load_dll_kernel32();
_imp__FindNextVolumeMountPointW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextVolumeMountPointW");
}
void _elfimplib_FindNextVolumeMountPointW() {
asm("leave\njmp *%0" : : "r"(_imp__FindNextVolumeMountPointW));
}

void _elfimplib_FindNextVolumeW() asm("FindNextVolumeW");
void *_imp__FindNextVolumeW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindNextVolumeW() {
load_dll_kernel32();
_imp__FindNextVolumeW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextVolumeW");
}
void _elfimplib_FindNextVolumeW() {
asm("leave\njmp *%0" : : "r"(_imp__FindNextVolumeW));
}

void _elfimplib_FindResourceA() asm("FindResourceA");
void *_imp__FindResourceA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindResourceA() {
load_dll_kernel32();
_imp__FindResourceA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindResourceA");
}
void _elfimplib_FindResourceA() {
asm("leave\njmp *%0" : : "r"(_imp__FindResourceA));
}

void _elfimplib_FindResourceExA() asm("FindResourceExA");
void *_imp__FindResourceExA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindResourceExA() {
load_dll_kernel32();
_imp__FindResourceExA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindResourceExA");
}
void _elfimplib_FindResourceExA() {
asm("leave\njmp *%0" : : "r"(_imp__FindResourceExA));
}

void _elfimplib_FindResourceExW() asm("FindResourceExW");
void *_imp__FindResourceExW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindResourceExW() {
load_dll_kernel32();
_imp__FindResourceExW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindResourceExW");
}
void _elfimplib_FindResourceExW() {
asm("leave\njmp *%0" : : "r"(_imp__FindResourceExW));
}

void _elfimplib_FindResourceW() asm("FindResourceW");
void *_imp__FindResourceW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindResourceW() {
load_dll_kernel32();
_imp__FindResourceW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindResourceW");
}
void _elfimplib_FindResourceW() {
asm("leave\njmp *%0" : : "r"(_imp__FindResourceW));
}

void _elfimplib_FindVolumeClose() asm("FindVolumeClose");
void *_imp__FindVolumeClose = NULL;
__attribute__((constructor)) void _elfimplib_init_FindVolumeClose() {
load_dll_kernel32();
_imp__FindVolumeClose = (void *) _elf_GetProcAddress(_dll_kernel32, "FindVolumeClose");
}
void _elfimplib_FindVolumeClose() {
asm("leave\njmp *%0" : : "r"(_imp__FindVolumeClose));
}

void _elfimplib_FindVolumeMountPointClose() asm("FindVolumeMountPointClose");
void *_imp__FindVolumeMountPointClose = NULL;
__attribute__((constructor)) void _elfimplib_init_FindVolumeMountPointClose() {
load_dll_kernel32();
_imp__FindVolumeMountPointClose = (void *) _elf_GetProcAddress(_dll_kernel32, "FindVolumeMountPointClose");
}
void _elfimplib_FindVolumeMountPointClose() {
asm("leave\njmp *%0" : : "r"(_imp__FindVolumeMountPointClose));
}

void _elfimplib_FlushConsoleInputBuffer() asm("FlushConsoleInputBuffer");
void *_imp__FlushConsoleInputBuffer = NULL;
__attribute__((constructor)) void _elfimplib_init_FlushConsoleInputBuffer() {
load_dll_kernel32();
_imp__FlushConsoleInputBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "FlushConsoleInputBuffer");
}
void _elfimplib_FlushConsoleInputBuffer() {
asm("leave\njmp *%0" : : "r"(_imp__FlushConsoleInputBuffer));
}

void _elfimplib_FlushFileBuffers() asm("FlushFileBuffers");
void *_imp__FlushFileBuffers = NULL;
__attribute__((constructor)) void _elfimplib_init_FlushFileBuffers() {
load_dll_kernel32();
_imp__FlushFileBuffers = (void *) _elf_GetProcAddress(_dll_kernel32, "FlushFileBuffers");
}
void _elfimplib_FlushFileBuffers() {
asm("leave\njmp *%0" : : "r"(_imp__FlushFileBuffers));
}

void _elfimplib_FlushInstructionCache() asm("FlushInstructionCache");
void *_imp__FlushInstructionCache = NULL;
__attribute__((constructor)) void _elfimplib_init_FlushInstructionCache() {
load_dll_kernel32();
_imp__FlushInstructionCache = (void *) _elf_GetProcAddress(_dll_kernel32, "FlushInstructionCache");
}
void _elfimplib_FlushInstructionCache() {
asm("leave\njmp *%0" : : "r"(_imp__FlushInstructionCache));
}

void _elfimplib_FlushViewOfFile() asm("FlushViewOfFile");
void *_imp__FlushViewOfFile = NULL;
__attribute__((constructor)) void _elfimplib_init_FlushViewOfFile() {
load_dll_kernel32();
_imp__FlushViewOfFile = (void *) _elf_GetProcAddress(_dll_kernel32, "FlushViewOfFile");
}
void _elfimplib_FlushViewOfFile() {
asm("leave\njmp *%0" : : "r"(_imp__FlushViewOfFile));
}

void _elfimplib_FoldStringA() asm("FoldStringA");
void *_imp__FoldStringA = NULL;
__attribute__((constructor)) void _elfimplib_init_FoldStringA() {
load_dll_kernel32();
_imp__FoldStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "FoldStringA");
}
void _elfimplib_FoldStringA() {
asm("leave\njmp *%0" : : "r"(_imp__FoldStringA));
}

void _elfimplib_FoldStringW() asm("FoldStringW");
void *_imp__FoldStringW = NULL;
__attribute__((constructor)) void _elfimplib_init_FoldStringW() {
load_dll_kernel32();
_imp__FoldStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "FoldStringW");
}
void _elfimplib_FoldStringW() {
asm("leave\njmp *%0" : : "r"(_imp__FoldStringW));
}

void _elfimplib_FormatMessageA() asm("FormatMessageA");
void *_imp__FormatMessageA = NULL;
__attribute__((constructor)) void _elfimplib_init_FormatMessageA() {
load_dll_kernel32();
_imp__FormatMessageA = (void *) _elf_GetProcAddress(_dll_kernel32, "FormatMessageA");
}
void _elfimplib_FormatMessageA() {
asm("leave\njmp *%0" : : "r"(_imp__FormatMessageA));
}

void _elfimplib_FormatMessageW() asm("FormatMessageW");
void *_imp__FormatMessageW = NULL;
__attribute__((constructor)) void _elfimplib_init_FormatMessageW() {
load_dll_kernel32();
_imp__FormatMessageW = (void *) _elf_GetProcAddress(_dll_kernel32, "FormatMessageW");
}
void _elfimplib_FormatMessageW() {
asm("leave\njmp *%0" : : "r"(_imp__FormatMessageW));
}

void _elfimplib_FreeConsole() asm("FreeConsole");
void *_imp__FreeConsole = NULL;
__attribute__((constructor)) void _elfimplib_init_FreeConsole() {
load_dll_kernel32();
_imp__FreeConsole = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeConsole");
}
void _elfimplib_FreeConsole() {
asm("leave\njmp *%0" : : "r"(_imp__FreeConsole));
}

void _elfimplib_FreeEnvironmentStringsA() asm("FreeEnvironmentStringsA");
void *_imp__FreeEnvironmentStringsA = NULL;
__attribute__((constructor)) void _elfimplib_init_FreeEnvironmentStringsA() {
load_dll_kernel32();
_imp__FreeEnvironmentStringsA = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeEnvironmentStringsA");
}
void _elfimplib_FreeEnvironmentStringsA() {
asm("leave\njmp *%0" : : "r"(_imp__FreeEnvironmentStringsA));
}

void _elfimplib_FreeEnvironmentStringsW() asm("FreeEnvironmentStringsW");
void *_imp__FreeEnvironmentStringsW = NULL;
__attribute__((constructor)) void _elfimplib_init_FreeEnvironmentStringsW() {
load_dll_kernel32();
_imp__FreeEnvironmentStringsW = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeEnvironmentStringsW");
}
void _elfimplib_FreeEnvironmentStringsW() {
asm("leave\njmp *%0" : : "r"(_imp__FreeEnvironmentStringsW));
}

void _elfimplib_FreeLibrary() asm("FreeLibrary");
void *_imp__FreeLibrary = NULL;
__attribute__((constructor)) void _elfimplib_init_FreeLibrary() {
load_dll_kernel32();
_imp__FreeLibrary = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeLibrary");
}
void _elfimplib_FreeLibrary() {
asm("leave\njmp *%0" : : "r"(_imp__FreeLibrary));
}

void _elfimplib_FreeLibraryAndExitThread() asm("FreeLibraryAndExitThread");
void *_imp__FreeLibraryAndExitThread = NULL;
__attribute__((constructor)) void _elfimplib_init_FreeLibraryAndExitThread() {
load_dll_kernel32();
_imp__FreeLibraryAndExitThread = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeLibraryAndExitThread");
}
void _elfimplib_FreeLibraryAndExitThread() {
asm("leave\njmp *%0" : : "r"(_imp__FreeLibraryAndExitThread));
}

void _elfimplib_FreeResource() asm("FreeResource");
void *_imp__FreeResource = NULL;
__attribute__((constructor)) void _elfimplib_init_FreeResource() {
load_dll_kernel32();
_imp__FreeResource = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeResource");
}
void _elfimplib_FreeResource() {
asm("leave\njmp *%0" : : "r"(_imp__FreeResource));
}

void _elfimplib_FreeUserPhysicalPages() asm("FreeUserPhysicalPages");
void *_imp__FreeUserPhysicalPages = NULL;
__attribute__((constructor)) void _elfimplib_init_FreeUserPhysicalPages() {
load_dll_kernel32();
_imp__FreeUserPhysicalPages = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeUserPhysicalPages");
}
void _elfimplib_FreeUserPhysicalPages() {
asm("leave\njmp *%0" : : "r"(_imp__FreeUserPhysicalPages));
}

void _elfimplib_FreeVirtualBuffer() asm("FreeVirtualBuffer");
void *_imp__FreeVirtualBuffer = NULL;
__attribute__((constructor)) void _elfimplib_init_FreeVirtualBuffer() {
load_dll_kernel32();
_imp__FreeVirtualBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeVirtualBuffer");
}
void _elfimplib_FreeVirtualBuffer() {
asm("leave\njmp *%0" : : "r"(_imp__FreeVirtualBuffer));
}

void _elfimplib_GenerateConsoleCtrlEvent() asm("GenerateConsoleCtrlEvent");
void *_imp__GenerateConsoleCtrlEvent = NULL;
__attribute__((constructor)) void _elfimplib_init_GenerateConsoleCtrlEvent() {
load_dll_kernel32();
_imp__GenerateConsoleCtrlEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "GenerateConsoleCtrlEvent");
}
void _elfimplib_GenerateConsoleCtrlEvent() {
asm("leave\njmp *%0" : : "r"(_imp__GenerateConsoleCtrlEvent));
}

void _elfimplib_GetACP() asm("GetACP");
void *_imp__GetACP = NULL;
__attribute__((constructor)) void _elfimplib_init_GetACP() {
load_dll_kernel32();
_imp__GetACP = (void *) _elf_GetProcAddress(_dll_kernel32, "GetACP");
}
void _elfimplib_GetACP() {
asm("leave\njmp *%0" : : "r"(_imp__GetACP));
}

void _elfimplib_GetAtomNameA() asm("GetAtomNameA");
void *_imp__GetAtomNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetAtomNameA() {
load_dll_kernel32();
_imp__GetAtomNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetAtomNameA");
}
void _elfimplib_GetAtomNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetAtomNameA));
}

void _elfimplib_GetAtomNameW() asm("GetAtomNameW");
void *_imp__GetAtomNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetAtomNameW() {
load_dll_kernel32();
_imp__GetAtomNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetAtomNameW");
}
void _elfimplib_GetAtomNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetAtomNameW));
}

void _elfimplib_GetBinaryType() asm("GetBinaryType");
void *_imp__GetBinaryType = NULL;
__attribute__((constructor)) void _elfimplib_init_GetBinaryType() {
load_dll_kernel32();
_imp__GetBinaryType = (void *) _elf_GetProcAddress(_dll_kernel32, "GetBinaryType");
}
void _elfimplib_GetBinaryType() {
asm("leave\njmp *%0" : : "r"(_imp__GetBinaryType));
}

void _elfimplib_GetBinaryTypeA() asm("GetBinaryTypeA");
void *_imp__GetBinaryTypeA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetBinaryTypeA() {
load_dll_kernel32();
_imp__GetBinaryTypeA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetBinaryTypeA");
}
void _elfimplib_GetBinaryTypeA() {
asm("leave\njmp *%0" : : "r"(_imp__GetBinaryTypeA));
}

void _elfimplib_GetBinaryTypeW() asm("GetBinaryTypeW");
void *_imp__GetBinaryTypeW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetBinaryTypeW() {
load_dll_kernel32();
_imp__GetBinaryTypeW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetBinaryTypeW");
}
void _elfimplib_GetBinaryTypeW() {
asm("leave\njmp *%0" : : "r"(_imp__GetBinaryTypeW));
}

void _elfimplib_GetCPFileNameFromRegistry() asm("GetCPFileNameFromRegistry");
void *_imp__GetCPFileNameFromRegistry = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCPFileNameFromRegistry() {
load_dll_kernel32();
_imp__GetCPFileNameFromRegistry = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCPFileNameFromRegistry");
}
void _elfimplib_GetCPFileNameFromRegistry() {
asm("leave\njmp *%0" : : "r"(_imp__GetCPFileNameFromRegistry));
}

void _elfimplib_GetCPInfo() asm("GetCPInfo");
void *_imp__GetCPInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCPInfo() {
load_dll_kernel32();
_imp__GetCPInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCPInfo");
}
void _elfimplib_GetCPInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetCPInfo));
}

void _elfimplib_GetCPInfoExA() asm("GetCPInfoExA");
void *_imp__GetCPInfoExA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCPInfoExA() {
load_dll_kernel32();
_imp__GetCPInfoExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCPInfoExA");
}
void _elfimplib_GetCPInfoExA() {
asm("leave\njmp *%0" : : "r"(_imp__GetCPInfoExA));
}

void _elfimplib_GetCPInfoExW() asm("GetCPInfoExW");
void *_imp__GetCPInfoExW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCPInfoExW() {
load_dll_kernel32();
_imp__GetCPInfoExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCPInfoExW");
}
void _elfimplib_GetCPInfoExW() {
asm("leave\njmp *%0" : : "r"(_imp__GetCPInfoExW));
}

void _elfimplib_GetCalendarInfoA() asm("GetCalendarInfoA");
void *_imp__GetCalendarInfoA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCalendarInfoA() {
load_dll_kernel32();
_imp__GetCalendarInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCalendarInfoA");
}
void _elfimplib_GetCalendarInfoA() {
asm("leave\njmp *%0" : : "r"(_imp__GetCalendarInfoA));
}

void _elfimplib_GetCalendarInfoW() asm("GetCalendarInfoW");
void *_imp__GetCalendarInfoW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCalendarInfoW() {
load_dll_kernel32();
_imp__GetCalendarInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCalendarInfoW");
}
void _elfimplib_GetCalendarInfoW() {
asm("leave\njmp *%0" : : "r"(_imp__GetCalendarInfoW));
}

void _elfimplib_GetComPlusPackageInstallStatus() asm("GetComPlusPackageInstallStatus");
void *_imp__GetComPlusPackageInstallStatus = NULL;
__attribute__((constructor)) void _elfimplib_init_GetComPlusPackageInstallStatus() {
load_dll_kernel32();
_imp__GetComPlusPackageInstallStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "GetComPlusPackageInstallStatus");
}
void _elfimplib_GetComPlusPackageInstallStatus() {
asm("leave\njmp *%0" : : "r"(_imp__GetComPlusPackageInstallStatus));
}

void _elfimplib_GetCommConfig() asm("GetCommConfig");
void *_imp__GetCommConfig = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCommConfig() {
load_dll_kernel32();
_imp__GetCommConfig = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommConfig");
}
void _elfimplib_GetCommConfig() {
asm("leave\njmp *%0" : : "r"(_imp__GetCommConfig));
}

void _elfimplib_GetCommMask() asm("GetCommMask");
void *_imp__GetCommMask = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCommMask() {
load_dll_kernel32();
_imp__GetCommMask = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommMask");
}
void _elfimplib_GetCommMask() {
asm("leave\njmp *%0" : : "r"(_imp__GetCommMask));
}

void _elfimplib_GetCommModemStatus() asm("GetCommModemStatus");
void *_imp__GetCommModemStatus = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCommModemStatus() {
load_dll_kernel32();
_imp__GetCommModemStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommModemStatus");
}
void _elfimplib_GetCommModemStatus() {
asm("leave\njmp *%0" : : "r"(_imp__GetCommModemStatus));
}

void _elfimplib_GetCommProperties() asm("GetCommProperties");
void *_imp__GetCommProperties = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCommProperties() {
load_dll_kernel32();
_imp__GetCommProperties = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommProperties");
}
void _elfimplib_GetCommProperties() {
asm("leave\njmp *%0" : : "r"(_imp__GetCommProperties));
}

void _elfimplib_GetCommState() asm("GetCommState");
void *_imp__GetCommState = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCommState() {
load_dll_kernel32();
_imp__GetCommState = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommState");
}
void _elfimplib_GetCommState() {
asm("leave\njmp *%0" : : "r"(_imp__GetCommState));
}

void _elfimplib_GetCommTimeouts() asm("GetCommTimeouts");
void *_imp__GetCommTimeouts = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCommTimeouts() {
load_dll_kernel32();
_imp__GetCommTimeouts = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommTimeouts");
}
void _elfimplib_GetCommTimeouts() {
asm("leave\njmp *%0" : : "r"(_imp__GetCommTimeouts));
}

void _elfimplib_GetCommandLineA() asm("GetCommandLineA");
void *_imp__GetCommandLineA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCommandLineA() {
load_dll_kernel32();
_imp__GetCommandLineA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommandLineA");
}
void _elfimplib_GetCommandLineA() {
asm("leave\njmp *%0" : : "r"(_imp__GetCommandLineA));
}

void _elfimplib_GetCommandLineW() asm("GetCommandLineW");
void *_imp__GetCommandLineW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCommandLineW() {
load_dll_kernel32();
_imp__GetCommandLineW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommandLineW");
}
void _elfimplib_GetCommandLineW() {
asm("leave\njmp *%0" : : "r"(_imp__GetCommandLineW));
}

void _elfimplib_GetCompressedFileSizeA() asm("GetCompressedFileSizeA");
void *_imp__GetCompressedFileSizeA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCompressedFileSizeA() {
load_dll_kernel32();
_imp__GetCompressedFileSizeA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCompressedFileSizeA");
}
void _elfimplib_GetCompressedFileSizeA() {
asm("leave\njmp *%0" : : "r"(_imp__GetCompressedFileSizeA));
}

void _elfimplib_GetCompressedFileSizeW() asm("GetCompressedFileSizeW");
void *_imp__GetCompressedFileSizeW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCompressedFileSizeW() {
load_dll_kernel32();
_imp__GetCompressedFileSizeW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCompressedFileSizeW");
}
void _elfimplib_GetCompressedFileSizeW() {
asm("leave\njmp *%0" : : "r"(_imp__GetCompressedFileSizeW));
}

void _elfimplib_GetComputerNameA() asm("GetComputerNameA");
void *_imp__GetComputerNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetComputerNameA() {
load_dll_kernel32();
_imp__GetComputerNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetComputerNameA");
}
void _elfimplib_GetComputerNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetComputerNameA));
}

void _elfimplib_GetComputerNameExA() asm("GetComputerNameExA");
void *_imp__GetComputerNameExA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetComputerNameExA() {
load_dll_kernel32();
_imp__GetComputerNameExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetComputerNameExA");
}
void _elfimplib_GetComputerNameExA() {
asm("leave\njmp *%0" : : "r"(_imp__GetComputerNameExA));
}

void _elfimplib_GetComputerNameExW() asm("GetComputerNameExW");
void *_imp__GetComputerNameExW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetComputerNameExW() {
load_dll_kernel32();
_imp__GetComputerNameExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetComputerNameExW");
}
void _elfimplib_GetComputerNameExW() {
asm("leave\njmp *%0" : : "r"(_imp__GetComputerNameExW));
}

void _elfimplib_GetComputerNameW() asm("GetComputerNameW");
void *_imp__GetComputerNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetComputerNameW() {
load_dll_kernel32();
_imp__GetComputerNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetComputerNameW");
}
void _elfimplib_GetComputerNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetComputerNameW));
}

void _elfimplib_GetConsoleAliasA() asm("GetConsoleAliasA");
void *_imp__GetConsoleAliasA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleAliasA() {
load_dll_kernel32();
_imp__GetConsoleAliasA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasA");
}
void _elfimplib_GetConsoleAliasA() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasA));
}

void _elfimplib_GetConsoleAliasExesA() asm("GetConsoleAliasExesA");
void *_imp__GetConsoleAliasExesA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleAliasExesA() {
load_dll_kernel32();
_imp__GetConsoleAliasExesA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasExesA");
}
void _elfimplib_GetConsoleAliasExesA() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasExesA));
}

void _elfimplib_GetConsoleAliasExesLengthA() asm("GetConsoleAliasExesLengthA");
void *_imp__GetConsoleAliasExesLengthA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleAliasExesLengthA() {
load_dll_kernel32();
_imp__GetConsoleAliasExesLengthA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasExesLengthA");
}
void _elfimplib_GetConsoleAliasExesLengthA() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasExesLengthA));
}

void _elfimplib_GetConsoleAliasExesLengthW() asm("GetConsoleAliasExesLengthW");
void *_imp__GetConsoleAliasExesLengthW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleAliasExesLengthW() {
load_dll_kernel32();
_imp__GetConsoleAliasExesLengthW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasExesLengthW");
}
void _elfimplib_GetConsoleAliasExesLengthW() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasExesLengthW));
}

void _elfimplib_GetConsoleAliasExesW() asm("GetConsoleAliasExesW");
void *_imp__GetConsoleAliasExesW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleAliasExesW() {
load_dll_kernel32();
_imp__GetConsoleAliasExesW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasExesW");
}
void _elfimplib_GetConsoleAliasExesW() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasExesW));
}

void _elfimplib_GetConsoleAliasW() asm("GetConsoleAliasW");
void *_imp__GetConsoleAliasW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleAliasW() {
load_dll_kernel32();
_imp__GetConsoleAliasW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasW");
}
void _elfimplib_GetConsoleAliasW() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasW));
}

void _elfimplib_GetConsoleAliasesA() asm("GetConsoleAliasesA");
void *_imp__GetConsoleAliasesA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleAliasesA() {
load_dll_kernel32();
_imp__GetConsoleAliasesA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasesA");
}
void _elfimplib_GetConsoleAliasesA() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasesA));
}

void _elfimplib_GetConsoleAliasesLengthA() asm("GetConsoleAliasesLengthA");
void *_imp__GetConsoleAliasesLengthA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleAliasesLengthA() {
load_dll_kernel32();
_imp__GetConsoleAliasesLengthA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasesLengthA");
}
void _elfimplib_GetConsoleAliasesLengthA() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasesLengthA));
}

void _elfimplib_GetConsoleAliasesLengthW() asm("GetConsoleAliasesLengthW");
void *_imp__GetConsoleAliasesLengthW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleAliasesLengthW() {
load_dll_kernel32();
_imp__GetConsoleAliasesLengthW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasesLengthW");
}
void _elfimplib_GetConsoleAliasesLengthW() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasesLengthW));
}

void _elfimplib_GetConsoleAliasesW() asm("GetConsoleAliasesW");
void *_imp__GetConsoleAliasesW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleAliasesW() {
load_dll_kernel32();
_imp__GetConsoleAliasesW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasesW");
}
void _elfimplib_GetConsoleAliasesW() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasesW));
}

void _elfimplib_GetConsoleCP() asm("GetConsoleCP");
void *_imp__GetConsoleCP = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleCP() {
load_dll_kernel32();
_imp__GetConsoleCP = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCP");
}
void _elfimplib_GetConsoleCP() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleCP));
}

void _elfimplib_GetConsoleCharType() asm("GetConsoleCharType");
void *_imp__GetConsoleCharType = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleCharType() {
load_dll_kernel32();
_imp__GetConsoleCharType = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCharType");
}
void _elfimplib_GetConsoleCharType() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleCharType));
}

void _elfimplib_GetConsoleCommandHistoryA() asm("GetConsoleCommandHistoryA");
void *_imp__GetConsoleCommandHistoryA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleCommandHistoryA() {
load_dll_kernel32();
_imp__GetConsoleCommandHistoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCommandHistoryA");
}
void _elfimplib_GetConsoleCommandHistoryA() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleCommandHistoryA));
}

void _elfimplib_GetConsoleCommandHistoryLengthA() asm("GetConsoleCommandHistoryLengthA");
void *_imp__GetConsoleCommandHistoryLengthA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleCommandHistoryLengthA() {
load_dll_kernel32();
_imp__GetConsoleCommandHistoryLengthA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCommandHistoryLengthA");
}
void _elfimplib_GetConsoleCommandHistoryLengthA() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleCommandHistoryLengthA));
}

void _elfimplib_GetConsoleCommandHistoryLengthW() asm("GetConsoleCommandHistoryLengthW");
void *_imp__GetConsoleCommandHistoryLengthW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleCommandHistoryLengthW() {
load_dll_kernel32();
_imp__GetConsoleCommandHistoryLengthW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCommandHistoryLengthW");
}
void _elfimplib_GetConsoleCommandHistoryLengthW() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleCommandHistoryLengthW));
}

void _elfimplib_GetConsoleCommandHistoryW() asm("GetConsoleCommandHistoryW");
void *_imp__GetConsoleCommandHistoryW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleCommandHistoryW() {
load_dll_kernel32();
_imp__GetConsoleCommandHistoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCommandHistoryW");
}
void _elfimplib_GetConsoleCommandHistoryW() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleCommandHistoryW));
}

void _elfimplib_GetConsoleCursorInfo() asm("GetConsoleCursorInfo");
void *_imp__GetConsoleCursorInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleCursorInfo() {
load_dll_kernel32();
_imp__GetConsoleCursorInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCursorInfo");
}
void _elfimplib_GetConsoleCursorInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleCursorInfo));
}

void _elfimplib_GetConsoleCursorMode() asm("GetConsoleCursorMode");
void *_imp__GetConsoleCursorMode = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleCursorMode() {
load_dll_kernel32();
_imp__GetConsoleCursorMode = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCursorMode");
}
void _elfimplib_GetConsoleCursorMode() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleCursorMode));
}

void _elfimplib_GetConsoleDisplayMode() asm("GetConsoleDisplayMode");
void *_imp__GetConsoleDisplayMode = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleDisplayMode() {
load_dll_kernel32();
_imp__GetConsoleDisplayMode = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleDisplayMode");
}
void _elfimplib_GetConsoleDisplayMode() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleDisplayMode));
}

void _elfimplib_GetConsoleFontInfo() asm("GetConsoleFontInfo");
void *_imp__GetConsoleFontInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleFontInfo() {
load_dll_kernel32();
_imp__GetConsoleFontInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleFontInfo");
}
void _elfimplib_GetConsoleFontInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleFontInfo));
}

void _elfimplib_GetConsoleFontSize() asm("GetConsoleFontSize");
void *_imp__GetConsoleFontSize = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleFontSize() {
load_dll_kernel32();
_imp__GetConsoleFontSize = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleFontSize");
}
void _elfimplib_GetConsoleFontSize() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleFontSize));
}

void _elfimplib_GetConsoleHardwareState() asm("GetConsoleHardwareState");
void *_imp__GetConsoleHardwareState = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleHardwareState() {
load_dll_kernel32();
_imp__GetConsoleHardwareState = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleHardwareState");
}
void _elfimplib_GetConsoleHardwareState() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleHardwareState));
}

void _elfimplib_GetConsoleInputExeNameA() asm("GetConsoleInputExeNameA");
void *_imp__GetConsoleInputExeNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleInputExeNameA() {
load_dll_kernel32();
_imp__GetConsoleInputExeNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleInputExeNameA");
}
void _elfimplib_GetConsoleInputExeNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleInputExeNameA));
}

void _elfimplib_GetConsoleInputExeNameW() asm("GetConsoleInputExeNameW");
void *_imp__GetConsoleInputExeNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleInputExeNameW() {
load_dll_kernel32();
_imp__GetConsoleInputExeNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleInputExeNameW");
}
void _elfimplib_GetConsoleInputExeNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleInputExeNameW));
}

void _elfimplib_GetConsoleInputWaitHandle() asm("GetConsoleInputWaitHandle");
void *_imp__GetConsoleInputWaitHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleInputWaitHandle() {
load_dll_kernel32();
_imp__GetConsoleInputWaitHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleInputWaitHandle");
}
void _elfimplib_GetConsoleInputWaitHandle() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleInputWaitHandle));
}

void _elfimplib_GetConsoleKeyboardLayoutNameA() asm("GetConsoleKeyboardLayoutNameA");
void *_imp__GetConsoleKeyboardLayoutNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleKeyboardLayoutNameA() {
load_dll_kernel32();
_imp__GetConsoleKeyboardLayoutNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleKeyboardLayoutNameA");
}
void _elfimplib_GetConsoleKeyboardLayoutNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleKeyboardLayoutNameA));
}

void _elfimplib_GetConsoleKeyboardLayoutNameW() asm("GetConsoleKeyboardLayoutNameW");
void *_imp__GetConsoleKeyboardLayoutNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleKeyboardLayoutNameW() {
load_dll_kernel32();
_imp__GetConsoleKeyboardLayoutNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleKeyboardLayoutNameW");
}
void _elfimplib_GetConsoleKeyboardLayoutNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleKeyboardLayoutNameW));
}

void _elfimplib_GetConsoleMode() asm("GetConsoleMode");
void *_imp__GetConsoleMode = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleMode() {
load_dll_kernel32();
_imp__GetConsoleMode = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleMode");
}
void _elfimplib_GetConsoleMode() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleMode));
}

void _elfimplib_GetConsoleNlsMode() asm("GetConsoleNlsMode");
void *_imp__GetConsoleNlsMode = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleNlsMode() {
load_dll_kernel32();
_imp__GetConsoleNlsMode = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleNlsMode");
}
void _elfimplib_GetConsoleNlsMode() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleNlsMode));
}

void _elfimplib_GetConsoleOutputCP() asm("GetConsoleOutputCP");
void *_imp__GetConsoleOutputCP = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleOutputCP() {
load_dll_kernel32();
_imp__GetConsoleOutputCP = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleOutputCP");
}
void _elfimplib_GetConsoleOutputCP() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleOutputCP));
}

void _elfimplib_GetConsoleProcessList() asm("GetConsoleProcessList");
void *_imp__GetConsoleProcessList = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleProcessList() {
load_dll_kernel32();
_imp__GetConsoleProcessList = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleProcessList");
}
void _elfimplib_GetConsoleProcessList() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleProcessList));
}

void _elfimplib_GetConsoleScreenBufferInfo() asm("GetConsoleScreenBufferInfo");
void *_imp__GetConsoleScreenBufferInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleScreenBufferInfo() {
load_dll_kernel32();
_imp__GetConsoleScreenBufferInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleScreenBufferInfo");
}
void _elfimplib_GetConsoleScreenBufferInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleScreenBufferInfo));
}

void _elfimplib_GetConsoleSelectionInfo() asm("GetConsoleSelectionInfo");
void *_imp__GetConsoleSelectionInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleSelectionInfo() {
load_dll_kernel32();
_imp__GetConsoleSelectionInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleSelectionInfo");
}
void _elfimplib_GetConsoleSelectionInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleSelectionInfo));
}

void _elfimplib_GetConsoleTitleA() asm("GetConsoleTitleA");
void *_imp__GetConsoleTitleA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleTitleA() {
load_dll_kernel32();
_imp__GetConsoleTitleA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleTitleA");
}
void _elfimplib_GetConsoleTitleA() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleTitleA));
}

void _elfimplib_GetConsoleTitleW() asm("GetConsoleTitleW");
void *_imp__GetConsoleTitleW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleTitleW() {
load_dll_kernel32();
_imp__GetConsoleTitleW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleTitleW");
}
void _elfimplib_GetConsoleTitleW() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleTitleW));
}

void _elfimplib_GetConsoleWindow() asm("GetConsoleWindow");
void *_imp__GetConsoleWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_GetConsoleWindow() {
load_dll_kernel32();
_imp__GetConsoleWindow = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleWindow");
}
void _elfimplib_GetConsoleWindow() {
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleWindow));
}

void _elfimplib_GetCurrencyFormatA() asm("GetCurrencyFormatA");
void *_imp__GetCurrencyFormatA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCurrencyFormatA() {
load_dll_kernel32();
_imp__GetCurrencyFormatA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrencyFormatA");
}
void _elfimplib_GetCurrencyFormatA() {
asm("leave\njmp *%0" : : "r"(_imp__GetCurrencyFormatA));
}

void _elfimplib_GetCurrencyFormatW() asm("GetCurrencyFormatW");
void *_imp__GetCurrencyFormatW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCurrencyFormatW() {
load_dll_kernel32();
_imp__GetCurrencyFormatW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrencyFormatW");
}
void _elfimplib_GetCurrencyFormatW() {
asm("leave\njmp *%0" : : "r"(_imp__GetCurrencyFormatW));
}

void _elfimplib_GetCurrentActCtx() asm("GetCurrentActCtx");
void *_imp__GetCurrentActCtx = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCurrentActCtx() {
load_dll_kernel32();
_imp__GetCurrentActCtx = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentActCtx");
}
void _elfimplib_GetCurrentActCtx() {
asm("leave\njmp *%0" : : "r"(_imp__GetCurrentActCtx));
}

void _elfimplib_GetCurrentConsoleFont() asm("GetCurrentConsoleFont");
void *_imp__GetCurrentConsoleFont = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCurrentConsoleFont() {
load_dll_kernel32();
_imp__GetCurrentConsoleFont = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentConsoleFont");
}
void _elfimplib_GetCurrentConsoleFont() {
asm("leave\njmp *%0" : : "r"(_imp__GetCurrentConsoleFont));
}

void _elfimplib_GetCurrentDirectoryA() asm("GetCurrentDirectoryA");
void *_imp__GetCurrentDirectoryA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCurrentDirectoryA() {
load_dll_kernel32();
_imp__GetCurrentDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentDirectoryA");
}
void _elfimplib_GetCurrentDirectoryA() {
asm("leave\njmp *%0" : : "r"(_imp__GetCurrentDirectoryA));
}

void _elfimplib_GetCurrentDirectoryW() asm("GetCurrentDirectoryW");
void *_imp__GetCurrentDirectoryW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCurrentDirectoryW() {
load_dll_kernel32();
_imp__GetCurrentDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentDirectoryW");
}
void _elfimplib_GetCurrentDirectoryW() {
asm("leave\njmp *%0" : : "r"(_imp__GetCurrentDirectoryW));
}

void _elfimplib_GetCurrentProcess() asm("GetCurrentProcess");
void *_imp__GetCurrentProcess = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCurrentProcess() {
load_dll_kernel32();
_imp__GetCurrentProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentProcess");
}
void _elfimplib_GetCurrentProcess() {
asm("leave\njmp *%0" : : "r"(_imp__GetCurrentProcess));
}

void _elfimplib_GetCurrentProcessId() asm("GetCurrentProcessId");
void *_imp__GetCurrentProcessId = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCurrentProcessId() {
load_dll_kernel32();
_imp__GetCurrentProcessId = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentProcessId");
}
void _elfimplib_GetCurrentProcessId() {
asm("leave\njmp *%0" : : "r"(_imp__GetCurrentProcessId));
}

void _elfimplib_GetCurrentThread() asm("GetCurrentThread");
void *_imp__GetCurrentThread = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCurrentThread() {
load_dll_kernel32();
_imp__GetCurrentThread = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentThread");
}
void _elfimplib_GetCurrentThread() {
asm("leave\njmp *%0" : : "r"(_imp__GetCurrentThread));
}

void _elfimplib_GetCurrentThreadId() asm("GetCurrentThreadId");
void *_imp__GetCurrentThreadId = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCurrentThreadId() {
load_dll_kernel32();
_imp__GetCurrentThreadId = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentThreadId");
}
void _elfimplib_GetCurrentThreadId() {
asm("leave\njmp *%0" : : "r"(_imp__GetCurrentThreadId));
}

void _elfimplib_GetDateFormatA() asm("GetDateFormatA");
void *_imp__GetDateFormatA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDateFormatA() {
load_dll_kernel32();
_imp__GetDateFormatA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDateFormatA");
}
void _elfimplib_GetDateFormatA() {
asm("leave\njmp *%0" : : "r"(_imp__GetDateFormatA));
}

void _elfimplib_GetDateFormatW() asm("GetDateFormatW");
void *_imp__GetDateFormatW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDateFormatW() {
load_dll_kernel32();
_imp__GetDateFormatW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDateFormatW");
}
void _elfimplib_GetDateFormatW() {
asm("leave\njmp *%0" : : "r"(_imp__GetDateFormatW));
}

void _elfimplib_GetDefaultCommConfigA() asm("GetDefaultCommConfigA");
void *_imp__GetDefaultCommConfigA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDefaultCommConfigA() {
load_dll_kernel32();
_imp__GetDefaultCommConfigA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDefaultCommConfigA");
}
void _elfimplib_GetDefaultCommConfigA() {
asm("leave\njmp *%0" : : "r"(_imp__GetDefaultCommConfigA));
}

void _elfimplib_GetDefaultCommConfigW() asm("GetDefaultCommConfigW");
void *_imp__GetDefaultCommConfigW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDefaultCommConfigW() {
load_dll_kernel32();
_imp__GetDefaultCommConfigW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDefaultCommConfigW");
}
void _elfimplib_GetDefaultCommConfigW() {
asm("leave\njmp *%0" : : "r"(_imp__GetDefaultCommConfigW));
}

void _elfimplib_GetDefaultSortkeySize() asm("GetDefaultSortkeySize");
void *_imp__GetDefaultSortkeySize = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDefaultSortkeySize() {
load_dll_kernel32();
_imp__GetDefaultSortkeySize = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDefaultSortkeySize");
}
void _elfimplib_GetDefaultSortkeySize() {
asm("leave\njmp *%0" : : "r"(_imp__GetDefaultSortkeySize));
}

void _elfimplib_GetDevicePowerState() asm("GetDevicePowerState");
void *_imp__GetDevicePowerState = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDevicePowerState() {
load_dll_kernel32();
_imp__GetDevicePowerState = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDevicePowerState");
}
void _elfimplib_GetDevicePowerState() {
asm("leave\njmp *%0" : : "r"(_imp__GetDevicePowerState));
}

void _elfimplib_GetDiskFreeSpaceA() asm("GetDiskFreeSpaceA");
void *_imp__GetDiskFreeSpaceA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDiskFreeSpaceA() {
load_dll_kernel32();
_imp__GetDiskFreeSpaceA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDiskFreeSpaceA");
}
void _elfimplib_GetDiskFreeSpaceA() {
asm("leave\njmp *%0" : : "r"(_imp__GetDiskFreeSpaceA));
}

void _elfimplib_GetDiskFreeSpaceExA() asm("GetDiskFreeSpaceExA");
void *_imp__GetDiskFreeSpaceExA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDiskFreeSpaceExA() {
load_dll_kernel32();
_imp__GetDiskFreeSpaceExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDiskFreeSpaceExA");
}
void _elfimplib_GetDiskFreeSpaceExA() {
asm("leave\njmp *%0" : : "r"(_imp__GetDiskFreeSpaceExA));
}

void _elfimplib_GetDiskFreeSpaceExW() asm("GetDiskFreeSpaceExW");
void *_imp__GetDiskFreeSpaceExW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDiskFreeSpaceExW() {
load_dll_kernel32();
_imp__GetDiskFreeSpaceExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDiskFreeSpaceExW");
}
void _elfimplib_GetDiskFreeSpaceExW() {
asm("leave\njmp *%0" : : "r"(_imp__GetDiskFreeSpaceExW));
}

void _elfimplib_GetDiskFreeSpaceW() asm("GetDiskFreeSpaceW");
void *_imp__GetDiskFreeSpaceW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDiskFreeSpaceW() {
load_dll_kernel32();
_imp__GetDiskFreeSpaceW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDiskFreeSpaceW");
}
void _elfimplib_GetDiskFreeSpaceW() {
asm("leave\njmp *%0" : : "r"(_imp__GetDiskFreeSpaceW));
}

void _elfimplib_GetDllDirectoryA() asm("GetDllDirectoryA");
void *_imp__GetDllDirectoryA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDllDirectoryA() {
load_dll_kernel32();
_imp__GetDllDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDllDirectoryA");
}
void _elfimplib_GetDllDirectoryA() {
asm("leave\njmp *%0" : : "r"(_imp__GetDllDirectoryA));
}

void _elfimplib_GetDllDirectoryW() asm("GetDllDirectoryW");
void *_imp__GetDllDirectoryW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDllDirectoryW() {
load_dll_kernel32();
_imp__GetDllDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDllDirectoryW");
}
void _elfimplib_GetDllDirectoryW() {
asm("leave\njmp *%0" : : "r"(_imp__GetDllDirectoryW));
}

void _elfimplib_GetDriveTypeA() asm("GetDriveTypeA");
void *_imp__GetDriveTypeA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDriveTypeA() {
load_dll_kernel32();
_imp__GetDriveTypeA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDriveTypeA");
}
void _elfimplib_GetDriveTypeA() {
asm("leave\njmp *%0" : : "r"(_imp__GetDriveTypeA));
}

void _elfimplib_GetDriveTypeW() asm("GetDriveTypeW");
void *_imp__GetDriveTypeW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDriveTypeW() {
load_dll_kernel32();
_imp__GetDriveTypeW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDriveTypeW");
}
void _elfimplib_GetDriveTypeW() {
asm("leave\njmp *%0" : : "r"(_imp__GetDriveTypeW));
}

void _elfimplib_GetEnvironmentStrings() asm("GetEnvironmentStrings");
void *_imp__GetEnvironmentStrings = NULL;
__attribute__((constructor)) void _elfimplib_init_GetEnvironmentStrings() {
load_dll_kernel32();
_imp__GetEnvironmentStrings = (void *) _elf_GetProcAddress(_dll_kernel32, "GetEnvironmentStrings");
}
void _elfimplib_GetEnvironmentStrings() {
asm("leave\njmp *%0" : : "r"(_imp__GetEnvironmentStrings));
}

void _elfimplib_GetEnvironmentStringsA() asm("GetEnvironmentStringsA");
void *_imp__GetEnvironmentStringsA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetEnvironmentStringsA() {
load_dll_kernel32();
_imp__GetEnvironmentStringsA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetEnvironmentStringsA");
}
void _elfimplib_GetEnvironmentStringsA() {
asm("leave\njmp *%0" : : "r"(_imp__GetEnvironmentStringsA));
}

void _elfimplib_GetEnvironmentStringsW() asm("GetEnvironmentStringsW");
void *_imp__GetEnvironmentStringsW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetEnvironmentStringsW() {
load_dll_kernel32();
_imp__GetEnvironmentStringsW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetEnvironmentStringsW");
}
void _elfimplib_GetEnvironmentStringsW() {
asm("leave\njmp *%0" : : "r"(_imp__GetEnvironmentStringsW));
}

void _elfimplib_GetEnvironmentVariableA() asm("GetEnvironmentVariableA");
void *_imp__GetEnvironmentVariableA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetEnvironmentVariableA() {
load_dll_kernel32();
_imp__GetEnvironmentVariableA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetEnvironmentVariableA");
}
void _elfimplib_GetEnvironmentVariableA() {
asm("leave\njmp *%0" : : "r"(_imp__GetEnvironmentVariableA));
}

void _elfimplib_GetEnvironmentVariableW() asm("GetEnvironmentVariableW");
void *_imp__GetEnvironmentVariableW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetEnvironmentVariableW() {
load_dll_kernel32();
_imp__GetEnvironmentVariableW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetEnvironmentVariableW");
}
void _elfimplib_GetEnvironmentVariableW() {
asm("leave\njmp *%0" : : "r"(_imp__GetEnvironmentVariableW));
}

void _elfimplib_GetExitCodeProcess() asm("GetExitCodeProcess");
void *_imp__GetExitCodeProcess = NULL;
__attribute__((constructor)) void _elfimplib_init_GetExitCodeProcess() {
load_dll_kernel32();
_imp__GetExitCodeProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "GetExitCodeProcess");
}
void _elfimplib_GetExitCodeProcess() {
asm("leave\njmp *%0" : : "r"(_imp__GetExitCodeProcess));
}

void _elfimplib_GetExitCodeThread() asm("GetExitCodeThread");
void *_imp__GetExitCodeThread = NULL;
__attribute__((constructor)) void _elfimplib_init_GetExitCodeThread() {
load_dll_kernel32();
_imp__GetExitCodeThread = (void *) _elf_GetProcAddress(_dll_kernel32, "GetExitCodeThread");
}
void _elfimplib_GetExitCodeThread() {
asm("leave\njmp *%0" : : "r"(_imp__GetExitCodeThread));
}

void _elfimplib_GetExpandedNameA() asm("GetExpandedNameA");
void *_imp__GetExpandedNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetExpandedNameA() {
load_dll_kernel32();
_imp__GetExpandedNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetExpandedNameA");
}
void _elfimplib_GetExpandedNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetExpandedNameA));
}

void _elfimplib_GetExpandedNameW() asm("GetExpandedNameW");
void *_imp__GetExpandedNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetExpandedNameW() {
load_dll_kernel32();
_imp__GetExpandedNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetExpandedNameW");
}
void _elfimplib_GetExpandedNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetExpandedNameW));
}

void _elfimplib_GetFileAttributesA() asm("GetFileAttributesA");
void *_imp__GetFileAttributesA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFileAttributesA() {
load_dll_kernel32();
_imp__GetFileAttributesA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileAttributesA");
}
void _elfimplib_GetFileAttributesA() {
asm("leave\njmp *%0" : : "r"(_imp__GetFileAttributesA));
}

void _elfimplib_GetFileAttributesExA() asm("GetFileAttributesExA");
void *_imp__GetFileAttributesExA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFileAttributesExA() {
load_dll_kernel32();
_imp__GetFileAttributesExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileAttributesExA");
}
void _elfimplib_GetFileAttributesExA() {
asm("leave\njmp *%0" : : "r"(_imp__GetFileAttributesExA));
}

void _elfimplib_GetFileAttributesExW() asm("GetFileAttributesExW");
void *_imp__GetFileAttributesExW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFileAttributesExW() {
load_dll_kernel32();
_imp__GetFileAttributesExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileAttributesExW");
}
void _elfimplib_GetFileAttributesExW() {
asm("leave\njmp *%0" : : "r"(_imp__GetFileAttributesExW));
}

void _elfimplib_GetFileAttributesW() asm("GetFileAttributesW");
void *_imp__GetFileAttributesW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFileAttributesW() {
load_dll_kernel32();
_imp__GetFileAttributesW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileAttributesW");
}
void _elfimplib_GetFileAttributesW() {
asm("leave\njmp *%0" : : "r"(_imp__GetFileAttributesW));
}

void _elfimplib_GetFileInformationByHandle() asm("GetFileInformationByHandle");
void *_imp__GetFileInformationByHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFileInformationByHandle() {
load_dll_kernel32();
_imp__GetFileInformationByHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileInformationByHandle");
}
void _elfimplib_GetFileInformationByHandle() {
asm("leave\njmp *%0" : : "r"(_imp__GetFileInformationByHandle));
}

void _elfimplib_GetFileSize() asm("GetFileSize");
void *_imp__GetFileSize = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFileSize() {
load_dll_kernel32();
_imp__GetFileSize = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileSize");
}
void _elfimplib_GetFileSize() {
asm("leave\njmp *%0" : : "r"(_imp__GetFileSize));
}

void _elfimplib_GetFileSizeEx() asm("GetFileSizeEx");
void *_imp__GetFileSizeEx = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFileSizeEx() {
load_dll_kernel32();
_imp__GetFileSizeEx = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileSizeEx");
}
void _elfimplib_GetFileSizeEx() {
asm("leave\njmp *%0" : : "r"(_imp__GetFileSizeEx));
}

void _elfimplib_GetFileTime() asm("GetFileTime");
void *_imp__GetFileTime = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFileTime() {
load_dll_kernel32();
_imp__GetFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileTime");
}
void _elfimplib_GetFileTime() {
asm("leave\njmp *%0" : : "r"(_imp__GetFileTime));
}

void _elfimplib_GetFileType() asm("GetFileType");
void *_imp__GetFileType = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFileType() {
load_dll_kernel32();
_imp__GetFileType = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileType");
}
void _elfimplib_GetFileType() {
asm("leave\njmp *%0" : : "r"(_imp__GetFileType));
}

void _elfimplib_GetFirmwareEnvironmentVariableA() asm("GetFirmwareEnvironmentVariableA");
void *_imp__GetFirmwareEnvironmentVariableA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFirmwareEnvironmentVariableA() {
load_dll_kernel32();
_imp__GetFirmwareEnvironmentVariableA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFirmwareEnvironmentVariableA");
}
void _elfimplib_GetFirmwareEnvironmentVariableA() {
asm("leave\njmp *%0" : : "r"(_imp__GetFirmwareEnvironmentVariableA));
}

void _elfimplib_GetFirmwareEnvironmentVariableW() asm("GetFirmwareEnvironmentVariableW");
void *_imp__GetFirmwareEnvironmentVariableW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFirmwareEnvironmentVariableW() {
load_dll_kernel32();
_imp__GetFirmwareEnvironmentVariableW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFirmwareEnvironmentVariableW");
}
void _elfimplib_GetFirmwareEnvironmentVariableW() {
asm("leave\njmp *%0" : : "r"(_imp__GetFirmwareEnvironmentVariableW));
}

void _elfimplib_GetFullPathNameA() asm("GetFullPathNameA");
void *_imp__GetFullPathNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFullPathNameA() {
load_dll_kernel32();
_imp__GetFullPathNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFullPathNameA");
}
void _elfimplib_GetFullPathNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetFullPathNameA));
}

void _elfimplib_GetFullPathNameW() asm("GetFullPathNameW");
void *_imp__GetFullPathNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFullPathNameW() {
load_dll_kernel32();
_imp__GetFullPathNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFullPathNameW");
}
void _elfimplib_GetFullPathNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetFullPathNameW));
}

void _elfimplib_GetGeoInfoA() asm("GetGeoInfoA");
void *_imp__GetGeoInfoA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetGeoInfoA() {
load_dll_kernel32();
_imp__GetGeoInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetGeoInfoA");
}
void _elfimplib_GetGeoInfoA() {
asm("leave\njmp *%0" : : "r"(_imp__GetGeoInfoA));
}

void _elfimplib_GetGeoInfoW() asm("GetGeoInfoW");
void *_imp__GetGeoInfoW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetGeoInfoW() {
load_dll_kernel32();
_imp__GetGeoInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetGeoInfoW");
}
void _elfimplib_GetGeoInfoW() {
asm("leave\njmp *%0" : : "r"(_imp__GetGeoInfoW));
}

void _elfimplib_GetHandleContext() asm("GetHandleContext");
void *_imp__GetHandleContext = NULL;
__attribute__((constructor)) void _elfimplib_init_GetHandleContext() {
load_dll_kernel32();
_imp__GetHandleContext = (void *) _elf_GetProcAddress(_dll_kernel32, "GetHandleContext");
}
void _elfimplib_GetHandleContext() {
asm("leave\njmp *%0" : : "r"(_imp__GetHandleContext));
}

void _elfimplib_GetHandleInformation() asm("GetHandleInformation");
void *_imp__GetHandleInformation = NULL;
__attribute__((constructor)) void _elfimplib_init_GetHandleInformation() {
load_dll_kernel32();
_imp__GetHandleInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "GetHandleInformation");
}
void _elfimplib_GetHandleInformation() {
asm("leave\njmp *%0" : : "r"(_imp__GetHandleInformation));
}

void _elfimplib_GetLargestConsoleWindowSize() asm("GetLargestConsoleWindowSize");
void *_imp__GetLargestConsoleWindowSize = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLargestConsoleWindowSize() {
load_dll_kernel32();
_imp__GetLargestConsoleWindowSize = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLargestConsoleWindowSize");
}
void _elfimplib_GetLargestConsoleWindowSize() {
asm("leave\njmp *%0" : : "r"(_imp__GetLargestConsoleWindowSize));
}

void _elfimplib_GetLastError() asm("GetLastError");
void *_imp__GetLastError = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLastError() {
load_dll_kernel32();
_imp__GetLastError = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLastError");
}
void _elfimplib_GetLastError() {
asm("leave\njmp *%0" : : "r"(_imp__GetLastError));
}

void _elfimplib_GetLinguistLangSize() asm("GetLinguistLangSize");
void *_imp__GetLinguistLangSize = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLinguistLangSize() {
load_dll_kernel32();
_imp__GetLinguistLangSize = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLinguistLangSize");
}
void _elfimplib_GetLinguistLangSize() {
asm("leave\njmp *%0" : : "r"(_imp__GetLinguistLangSize));
}

void _elfimplib_GetLocalTime() asm("GetLocalTime");
void *_imp__GetLocalTime = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLocalTime() {
load_dll_kernel32();
_imp__GetLocalTime = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLocalTime");
}
void _elfimplib_GetLocalTime() {
asm("leave\njmp *%0" : : "r"(_imp__GetLocalTime));
}

void _elfimplib_GetLocaleInfoA() asm("GetLocaleInfoA");
void *_imp__GetLocaleInfoA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLocaleInfoA() {
load_dll_kernel32();
_imp__GetLocaleInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLocaleInfoA");
}
void _elfimplib_GetLocaleInfoA() {
asm("leave\njmp *%0" : : "r"(_imp__GetLocaleInfoA));
}

void _elfimplib_GetLocaleInfoW() asm("GetLocaleInfoW");
void *_imp__GetLocaleInfoW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLocaleInfoW() {
load_dll_kernel32();
_imp__GetLocaleInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLocaleInfoW");
}
void _elfimplib_GetLocaleInfoW() {
asm("leave\njmp *%0" : : "r"(_imp__GetLocaleInfoW));
}

void _elfimplib_GetLogicalDriveStringsA() asm("GetLogicalDriveStringsA");
void *_imp__GetLogicalDriveStringsA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLogicalDriveStringsA() {
load_dll_kernel32();
_imp__GetLogicalDriveStringsA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLogicalDriveStringsA");
}
void _elfimplib_GetLogicalDriveStringsA() {
asm("leave\njmp *%0" : : "r"(_imp__GetLogicalDriveStringsA));
}

void _elfimplib_GetLogicalDriveStringsW() asm("GetLogicalDriveStringsW");
void *_imp__GetLogicalDriveStringsW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLogicalDriveStringsW() {
load_dll_kernel32();
_imp__GetLogicalDriveStringsW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLogicalDriveStringsW");
}
void _elfimplib_GetLogicalDriveStringsW() {
asm("leave\njmp *%0" : : "r"(_imp__GetLogicalDriveStringsW));
}

void _elfimplib_GetLogicalDrives() asm("GetLogicalDrives");
void *_imp__GetLogicalDrives = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLogicalDrives() {
load_dll_kernel32();
_imp__GetLogicalDrives = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLogicalDrives");
}
void _elfimplib_GetLogicalDrives() {
asm("leave\njmp *%0" : : "r"(_imp__GetLogicalDrives));
}

void _elfimplib_GetLongPathNameA() asm("GetLongPathNameA");
void *_imp__GetLongPathNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLongPathNameA() {
load_dll_kernel32();
_imp__GetLongPathNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLongPathNameA");
}
void _elfimplib_GetLongPathNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetLongPathNameA));
}

void _elfimplib_GetLongPathNameW() asm("GetLongPathNameW");
void *_imp__GetLongPathNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLongPathNameW() {
load_dll_kernel32();
_imp__GetLongPathNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLongPathNameW");
}
void _elfimplib_GetLongPathNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetLongPathNameW));
}

void _elfimplib_GetMailslotInfo() asm("GetMailslotInfo");
void *_imp__GetMailslotInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetMailslotInfo() {
load_dll_kernel32();
_imp__GetMailslotInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetMailslotInfo");
}
void _elfimplib_GetMailslotInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetMailslotInfo));
}

void _elfimplib_GetModuleFileNameA() asm("GetModuleFileNameA");
void *_imp__GetModuleFileNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetModuleFileNameA() {
load_dll_kernel32();
_imp__GetModuleFileNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetModuleFileNameA");
}
void _elfimplib_GetModuleFileNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetModuleFileNameA));
}

void _elfimplib_GetModuleFileNameW() asm("GetModuleFileNameW");
void *_imp__GetModuleFileNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetModuleFileNameW() {
load_dll_kernel32();
_imp__GetModuleFileNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetModuleFileNameW");
}
void _elfimplib_GetModuleFileNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetModuleFileNameW));
}

void _elfimplib_GetModuleHandleA() asm("GetModuleHandleA");
void *_imp__GetModuleHandleA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetModuleHandleA() {
load_dll_kernel32();
_imp__GetModuleHandleA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetModuleHandleA");
}
void _elfimplib_GetModuleHandleA() {
asm("leave\njmp *%0" : : "r"(_imp__GetModuleHandleA));
}

void _elfimplib_GetModuleHandleExA() asm("GetModuleHandleExA");
void *_imp__GetModuleHandleExA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetModuleHandleExA() {
load_dll_kernel32();
_imp__GetModuleHandleExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetModuleHandleExA");
}
void _elfimplib_GetModuleHandleExA() {
asm("leave\njmp *%0" : : "r"(_imp__GetModuleHandleExA));
}

void _elfimplib_GetModuleHandleExW() asm("GetModuleHandleExW");
void *_imp__GetModuleHandleExW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetModuleHandleExW() {
load_dll_kernel32();
_imp__GetModuleHandleExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetModuleHandleExW");
}
void _elfimplib_GetModuleHandleExW() {
asm("leave\njmp *%0" : : "r"(_imp__GetModuleHandleExW));
}

void _elfimplib_GetModuleHandleW() asm("GetModuleHandleW");
void *_imp__GetModuleHandleW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetModuleHandleW() {
load_dll_kernel32();
_imp__GetModuleHandleW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetModuleHandleW");
}
void _elfimplib_GetModuleHandleW() {
asm("leave\njmp *%0" : : "r"(_imp__GetModuleHandleW));
}

void _elfimplib_GetNamedPipeHandleStateA() asm("GetNamedPipeHandleStateA");
void *_imp__GetNamedPipeHandleStateA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNamedPipeHandleStateA() {
load_dll_kernel32();
_imp__GetNamedPipeHandleStateA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNamedPipeHandleStateA");
}
void _elfimplib_GetNamedPipeHandleStateA() {
asm("leave\njmp *%0" : : "r"(_imp__GetNamedPipeHandleStateA));
}

void _elfimplib_GetNamedPipeHandleStateW() asm("GetNamedPipeHandleStateW");
void *_imp__GetNamedPipeHandleStateW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNamedPipeHandleStateW() {
load_dll_kernel32();
_imp__GetNamedPipeHandleStateW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNamedPipeHandleStateW");
}
void _elfimplib_GetNamedPipeHandleStateW() {
asm("leave\njmp *%0" : : "r"(_imp__GetNamedPipeHandleStateW));
}

void _elfimplib_GetNamedPipeInfo() asm("GetNamedPipeInfo");
void *_imp__GetNamedPipeInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNamedPipeInfo() {
load_dll_kernel32();
_imp__GetNamedPipeInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNamedPipeInfo");
}
void _elfimplib_GetNamedPipeInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetNamedPipeInfo));
}

void _elfimplib_GetNativeSystemInfo() asm("GetNativeSystemInfo");
void *_imp__GetNativeSystemInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNativeSystemInfo() {
load_dll_kernel32();
_imp__GetNativeSystemInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNativeSystemInfo");
}
void _elfimplib_GetNativeSystemInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetNativeSystemInfo));
}

void _elfimplib_GetNextVDMCommand() asm("GetNextVDMCommand");
void *_imp__GetNextVDMCommand = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNextVDMCommand() {
load_dll_kernel32();
_imp__GetNextVDMCommand = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNextVDMCommand");
}
void _elfimplib_GetNextVDMCommand() {
asm("leave\njmp *%0" : : "r"(_imp__GetNextVDMCommand));
}

void _elfimplib_GetNlsSectionName() asm("GetNlsSectionName");
void *_imp__GetNlsSectionName = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNlsSectionName() {
load_dll_kernel32();
_imp__GetNlsSectionName = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNlsSectionName");
}
void _elfimplib_GetNlsSectionName() {
asm("leave\njmp *%0" : : "r"(_imp__GetNlsSectionName));
}

void _elfimplib_GetNumaAvailableMemory() asm("GetNumaAvailableMemory");
void *_imp__GetNumaAvailableMemory = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNumaAvailableMemory() {
load_dll_kernel32();
_imp__GetNumaAvailableMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumaAvailableMemory");
}
void _elfimplib_GetNumaAvailableMemory() {
asm("leave\njmp *%0" : : "r"(_imp__GetNumaAvailableMemory));
}

void _elfimplib_GetNumaAvailableMemoryNode() asm("GetNumaAvailableMemoryNode");
void *_imp__GetNumaAvailableMemoryNode = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNumaAvailableMemoryNode() {
load_dll_kernel32();
_imp__GetNumaAvailableMemoryNode = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumaAvailableMemoryNode");
}
void _elfimplib_GetNumaAvailableMemoryNode() {
asm("leave\njmp *%0" : : "r"(_imp__GetNumaAvailableMemoryNode));
}

void _elfimplib_GetNumaHighestNodeNumber() asm("GetNumaHighestNodeNumber");
void *_imp__GetNumaHighestNodeNumber = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNumaHighestNodeNumber() {
load_dll_kernel32();
_imp__GetNumaHighestNodeNumber = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumaHighestNodeNumber");
}
void _elfimplib_GetNumaHighestNodeNumber() {
asm("leave\njmp *%0" : : "r"(_imp__GetNumaHighestNodeNumber));
}

void _elfimplib_GetNumaNodeProcessorMask() asm("GetNumaNodeProcessorMask");
void *_imp__GetNumaNodeProcessorMask = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNumaNodeProcessorMask() {
load_dll_kernel32();
_imp__GetNumaNodeProcessorMask = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumaNodeProcessorMask");
}
void _elfimplib_GetNumaNodeProcessorMask() {
asm("leave\njmp *%0" : : "r"(_imp__GetNumaNodeProcessorMask));
}

void _elfimplib_GetNumaProcessorMap() asm("GetNumaProcessorMap");
void *_imp__GetNumaProcessorMap = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNumaProcessorMap() {
load_dll_kernel32();
_imp__GetNumaProcessorMap = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumaProcessorMap");
}
void _elfimplib_GetNumaProcessorMap() {
asm("leave\njmp *%0" : : "r"(_imp__GetNumaProcessorMap));
}

void _elfimplib_GetNumaProcessorNode() asm("GetNumaProcessorNode");
void *_imp__GetNumaProcessorNode = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNumaProcessorNode() {
load_dll_kernel32();
_imp__GetNumaProcessorNode = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumaProcessorNode");
}
void _elfimplib_GetNumaProcessorNode() {
asm("leave\njmp *%0" : : "r"(_imp__GetNumaProcessorNode));
}

void _elfimplib_GetNumberFormatA() asm("GetNumberFormatA");
void *_imp__GetNumberFormatA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNumberFormatA() {
load_dll_kernel32();
_imp__GetNumberFormatA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumberFormatA");
}
void _elfimplib_GetNumberFormatA() {
asm("leave\njmp *%0" : : "r"(_imp__GetNumberFormatA));
}

void _elfimplib_GetNumberFormatW() asm("GetNumberFormatW");
void *_imp__GetNumberFormatW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNumberFormatW() {
load_dll_kernel32();
_imp__GetNumberFormatW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumberFormatW");
}
void _elfimplib_GetNumberFormatW() {
asm("leave\njmp *%0" : : "r"(_imp__GetNumberFormatW));
}

void _elfimplib_GetNumberOfConsoleFonts() asm("GetNumberOfConsoleFonts");
void *_imp__GetNumberOfConsoleFonts = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNumberOfConsoleFonts() {
load_dll_kernel32();
_imp__GetNumberOfConsoleFonts = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumberOfConsoleFonts");
}
void _elfimplib_GetNumberOfConsoleFonts() {
asm("leave\njmp *%0" : : "r"(_imp__GetNumberOfConsoleFonts));
}

void _elfimplib_GetNumberOfConsoleInputEvents() asm("GetNumberOfConsoleInputEvents");
void *_imp__GetNumberOfConsoleInputEvents = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNumberOfConsoleInputEvents() {
load_dll_kernel32();
_imp__GetNumberOfConsoleInputEvents = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumberOfConsoleInputEvents");
}
void _elfimplib_GetNumberOfConsoleInputEvents() {
asm("leave\njmp *%0" : : "r"(_imp__GetNumberOfConsoleInputEvents));
}

void _elfimplib_GetNumberOfConsoleMouseButtons() asm("GetNumberOfConsoleMouseButtons");
void *_imp__GetNumberOfConsoleMouseButtons = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNumberOfConsoleMouseButtons() {
load_dll_kernel32();
_imp__GetNumberOfConsoleMouseButtons = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumberOfConsoleMouseButtons");
}
void _elfimplib_GetNumberOfConsoleMouseButtons() {
asm("leave\njmp *%0" : : "r"(_imp__GetNumberOfConsoleMouseButtons));
}

void _elfimplib_GetOEMCP() asm("GetOEMCP");
void *_imp__GetOEMCP = NULL;
__attribute__((constructor)) void _elfimplib_init_GetOEMCP() {
load_dll_kernel32();
_imp__GetOEMCP = (void *) _elf_GetProcAddress(_dll_kernel32, "GetOEMCP");
}
void _elfimplib_GetOEMCP() {
asm("leave\njmp *%0" : : "r"(_imp__GetOEMCP));
}

void _elfimplib_GetOverlappedResult() asm("GetOverlappedResult");
void *_imp__GetOverlappedResult = NULL;
__attribute__((constructor)) void _elfimplib_init_GetOverlappedResult() {
load_dll_kernel32();
_imp__GetOverlappedResult = (void *) _elf_GetProcAddress(_dll_kernel32, "GetOverlappedResult");
}
void _elfimplib_GetOverlappedResult() {
asm("leave\njmp *%0" : : "r"(_imp__GetOverlappedResult));
}

void _elfimplib_GetPriorityClass() asm("GetPriorityClass");
void *_imp__GetPriorityClass = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPriorityClass() {
load_dll_kernel32();
_imp__GetPriorityClass = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPriorityClass");
}
void _elfimplib_GetPriorityClass() {
asm("leave\njmp *%0" : : "r"(_imp__GetPriorityClass));
}

void _elfimplib_GetPrivateProfileIntA() asm("GetPrivateProfileIntA");
void *_imp__GetPrivateProfileIntA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPrivateProfileIntA() {
load_dll_kernel32();
_imp__GetPrivateProfileIntA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileIntA");
}
void _elfimplib_GetPrivateProfileIntA() {
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileIntA));
}

void _elfimplib_GetPrivateProfileIntW() asm("GetPrivateProfileIntW");
void *_imp__GetPrivateProfileIntW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPrivateProfileIntW() {
load_dll_kernel32();
_imp__GetPrivateProfileIntW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileIntW");
}
void _elfimplib_GetPrivateProfileIntW() {
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileIntW));
}

void _elfimplib_GetPrivateProfileSectionA() asm("GetPrivateProfileSectionA");
void *_imp__GetPrivateProfileSectionA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPrivateProfileSectionA() {
load_dll_kernel32();
_imp__GetPrivateProfileSectionA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileSectionA");
}
void _elfimplib_GetPrivateProfileSectionA() {
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileSectionA));
}

void _elfimplib_GetPrivateProfileSectionNamesA() asm("GetPrivateProfileSectionNamesA");
void *_imp__GetPrivateProfileSectionNamesA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPrivateProfileSectionNamesA() {
load_dll_kernel32();
_imp__GetPrivateProfileSectionNamesA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileSectionNamesA");
}
void _elfimplib_GetPrivateProfileSectionNamesA() {
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileSectionNamesA));
}

void _elfimplib_GetPrivateProfileSectionNamesW() asm("GetPrivateProfileSectionNamesW");
void *_imp__GetPrivateProfileSectionNamesW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPrivateProfileSectionNamesW() {
load_dll_kernel32();
_imp__GetPrivateProfileSectionNamesW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileSectionNamesW");
}
void _elfimplib_GetPrivateProfileSectionNamesW() {
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileSectionNamesW));
}

void _elfimplib_GetPrivateProfileSectionW() asm("GetPrivateProfileSectionW");
void *_imp__GetPrivateProfileSectionW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPrivateProfileSectionW() {
load_dll_kernel32();
_imp__GetPrivateProfileSectionW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileSectionW");
}
void _elfimplib_GetPrivateProfileSectionW() {
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileSectionW));
}

void _elfimplib_GetPrivateProfileStringA() asm("GetPrivateProfileStringA");
void *_imp__GetPrivateProfileStringA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPrivateProfileStringA() {
load_dll_kernel32();
_imp__GetPrivateProfileStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileStringA");
}
void _elfimplib_GetPrivateProfileStringA() {
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileStringA));
}

void _elfimplib_GetPrivateProfileStringW() asm("GetPrivateProfileStringW");
void *_imp__GetPrivateProfileStringW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPrivateProfileStringW() {
load_dll_kernel32();
_imp__GetPrivateProfileStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileStringW");
}
void _elfimplib_GetPrivateProfileStringW() {
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileStringW));
}

void _elfimplib_GetPrivateProfileStructA() asm("GetPrivateProfileStructA");
void *_imp__GetPrivateProfileStructA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPrivateProfileStructA() {
load_dll_kernel32();
_imp__GetPrivateProfileStructA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileStructA");
}
void _elfimplib_GetPrivateProfileStructA() {
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileStructA));
}

void _elfimplib_GetPrivateProfileStructW() asm("GetPrivateProfileStructW");
void *_imp__GetPrivateProfileStructW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPrivateProfileStructW() {
load_dll_kernel32();
_imp__GetPrivateProfileStructW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileStructW");
}
void _elfimplib_GetPrivateProfileStructW() {
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileStructW));
}

void _elfimplib_GetProcAddress() asm("GetProcAddress");
void *_imp__GetProcAddress = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcAddress() {
load_dll_kernel32();
_imp__GetProcAddress = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcAddress");
}
void _elfimplib_GetProcAddress() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcAddress));
}

void _elfimplib_GetProcessAffinityMask() asm("GetProcessAffinityMask");
void *_imp__GetProcessAffinityMask = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcessAffinityMask() {
load_dll_kernel32();
_imp__GetProcessAffinityMask = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessAffinityMask");
}
void _elfimplib_GetProcessAffinityMask() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcessAffinityMask));
}

void _elfimplib_GetProcessHandleCount() asm("GetProcessHandleCount");
void *_imp__GetProcessHandleCount = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcessHandleCount() {
load_dll_kernel32();
_imp__GetProcessHandleCount = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessHandleCount");
}
void _elfimplib_GetProcessHandleCount() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcessHandleCount));
}

void _elfimplib_GetProcessHeap() asm("GetProcessHeap");
void *_imp__GetProcessHeap = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcessHeap() {
load_dll_kernel32();
_imp__GetProcessHeap = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessHeap");
}
void _elfimplib_GetProcessHeap() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcessHeap));
}

void _elfimplib_GetProcessHeaps() asm("GetProcessHeaps");
void *_imp__GetProcessHeaps = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcessHeaps() {
load_dll_kernel32();
_imp__GetProcessHeaps = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessHeaps");
}
void _elfimplib_GetProcessHeaps() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcessHeaps));
}

void _elfimplib_GetProcessId() asm("GetProcessId");
void *_imp__GetProcessId = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcessId() {
load_dll_kernel32();
_imp__GetProcessId = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessId");
}
void _elfimplib_GetProcessId() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcessId));
}

void _elfimplib_GetProcessIoCounters() asm("GetProcessIoCounters");
void *_imp__GetProcessIoCounters = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcessIoCounters() {
load_dll_kernel32();
_imp__GetProcessIoCounters = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessIoCounters");
}
void _elfimplib_GetProcessIoCounters() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcessIoCounters));
}

void _elfimplib_GetProcessPriorityBoost() asm("GetProcessPriorityBoost");
void *_imp__GetProcessPriorityBoost = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcessPriorityBoost() {
load_dll_kernel32();
_imp__GetProcessPriorityBoost = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessPriorityBoost");
}
void _elfimplib_GetProcessPriorityBoost() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcessPriorityBoost));
}

void _elfimplib_GetProcessShutdownParameters() asm("GetProcessShutdownParameters");
void *_imp__GetProcessShutdownParameters = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcessShutdownParameters() {
load_dll_kernel32();
_imp__GetProcessShutdownParameters = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessShutdownParameters");
}
void _elfimplib_GetProcessShutdownParameters() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcessShutdownParameters));
}

void _elfimplib_GetProcessTimes() asm("GetProcessTimes");
void *_imp__GetProcessTimes = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcessTimes() {
load_dll_kernel32();
_imp__GetProcessTimes = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessTimes");
}
void _elfimplib_GetProcessTimes() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcessTimes));
}

void _elfimplib_GetProcessVersion() asm("GetProcessVersion");
void *_imp__GetProcessVersion = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcessVersion() {
load_dll_kernel32();
_imp__GetProcessVersion = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessVersion");
}
void _elfimplib_GetProcessVersion() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcessVersion));
}

void _elfimplib_GetProcessWorkingSetSize() asm("GetProcessWorkingSetSize");
void *_imp__GetProcessWorkingSetSize = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcessWorkingSetSize() {
load_dll_kernel32();
_imp__GetProcessWorkingSetSize = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessWorkingSetSize");
}
void _elfimplib_GetProcessWorkingSetSize() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcessWorkingSetSize));
}

void _elfimplib_GetProfileIntA() asm("GetProfileIntA");
void *_imp__GetProfileIntA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProfileIntA() {
load_dll_kernel32();
_imp__GetProfileIntA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProfileIntA");
}
void _elfimplib_GetProfileIntA() {
asm("leave\njmp *%0" : : "r"(_imp__GetProfileIntA));
}

void _elfimplib_GetProfileIntW() asm("GetProfileIntW");
void *_imp__GetProfileIntW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProfileIntW() {
load_dll_kernel32();
_imp__GetProfileIntW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProfileIntW");
}
void _elfimplib_GetProfileIntW() {
asm("leave\njmp *%0" : : "r"(_imp__GetProfileIntW));
}

void _elfimplib_GetProfileSectionA() asm("GetProfileSectionA");
void *_imp__GetProfileSectionA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProfileSectionA() {
load_dll_kernel32();
_imp__GetProfileSectionA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProfileSectionA");
}
void _elfimplib_GetProfileSectionA() {
asm("leave\njmp *%0" : : "r"(_imp__GetProfileSectionA));
}

void _elfimplib_GetProfileSectionW() asm("GetProfileSectionW");
void *_imp__GetProfileSectionW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProfileSectionW() {
load_dll_kernel32();
_imp__GetProfileSectionW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProfileSectionW");
}
void _elfimplib_GetProfileSectionW() {
asm("leave\njmp *%0" : : "r"(_imp__GetProfileSectionW));
}

void _elfimplib_GetProfileStringA() asm("GetProfileStringA");
void *_imp__GetProfileStringA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProfileStringA() {
load_dll_kernel32();
_imp__GetProfileStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProfileStringA");
}
void _elfimplib_GetProfileStringA() {
asm("leave\njmp *%0" : : "r"(_imp__GetProfileStringA));
}

void _elfimplib_GetProfileStringW() asm("GetProfileStringW");
void *_imp__GetProfileStringW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProfileStringW() {
load_dll_kernel32();
_imp__GetProfileStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProfileStringW");
}
void _elfimplib_GetProfileStringW() {
asm("leave\njmp *%0" : : "r"(_imp__GetProfileStringW));
}

void _elfimplib_GetQueuedCompletionStatus() asm("GetQueuedCompletionStatus");
void *_imp__GetQueuedCompletionStatus = NULL;
__attribute__((constructor)) void _elfimplib_init_GetQueuedCompletionStatus() {
load_dll_kernel32();
_imp__GetQueuedCompletionStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "GetQueuedCompletionStatus");
}
void _elfimplib_GetQueuedCompletionStatus() {
asm("leave\njmp *%0" : : "r"(_imp__GetQueuedCompletionStatus));
}

void _elfimplib_GetShortPathNameA() asm("GetShortPathNameA");
void *_imp__GetShortPathNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetShortPathNameA() {
load_dll_kernel32();
_imp__GetShortPathNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetShortPathNameA");
}
void _elfimplib_GetShortPathNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetShortPathNameA));
}

void _elfimplib_GetShortPathNameW() asm("GetShortPathNameW");
void *_imp__GetShortPathNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetShortPathNameW() {
load_dll_kernel32();
_imp__GetShortPathNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetShortPathNameW");
}
void _elfimplib_GetShortPathNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetShortPathNameW));
}

void _elfimplib_GetStartupInfoA() asm("GetStartupInfoA");
void *_imp__GetStartupInfoA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetStartupInfoA() {
load_dll_kernel32();
_imp__GetStartupInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStartupInfoA");
}
void _elfimplib_GetStartupInfoA() {
asm("leave\njmp *%0" : : "r"(_imp__GetStartupInfoA));
}

void _elfimplib_GetStartupInfoW() asm("GetStartupInfoW");
void *_imp__GetStartupInfoW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetStartupInfoW() {
load_dll_kernel32();
_imp__GetStartupInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStartupInfoW");
}
void _elfimplib_GetStartupInfoW() {
asm("leave\njmp *%0" : : "r"(_imp__GetStartupInfoW));
}

void _elfimplib_GetStdHandle() asm("GetStdHandle");
void *_imp__GetStdHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_GetStdHandle() {
load_dll_kernel32();
_imp__GetStdHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStdHandle");
}
void _elfimplib_GetStdHandle() {
asm("leave\njmp *%0" : : "r"(_imp__GetStdHandle));
}

void _elfimplib_GetStringTypeA() asm("GetStringTypeA");
void *_imp__GetStringTypeA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetStringTypeA() {
load_dll_kernel32();
_imp__GetStringTypeA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStringTypeA");
}
void _elfimplib_GetStringTypeA() {
asm("leave\njmp *%0" : : "r"(_imp__GetStringTypeA));
}

void _elfimplib_GetStringTypeExA() asm("GetStringTypeExA");
void *_imp__GetStringTypeExA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetStringTypeExA() {
load_dll_kernel32();
_imp__GetStringTypeExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStringTypeExA");
}
void _elfimplib_GetStringTypeExA() {
asm("leave\njmp *%0" : : "r"(_imp__GetStringTypeExA));
}

void _elfimplib_GetStringTypeExW() asm("GetStringTypeExW");
void *_imp__GetStringTypeExW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetStringTypeExW() {
load_dll_kernel32();
_imp__GetStringTypeExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStringTypeExW");
}
void _elfimplib_GetStringTypeExW() {
asm("leave\njmp *%0" : : "r"(_imp__GetStringTypeExW));
}

void _elfimplib_GetStringTypeW() asm("GetStringTypeW");
void *_imp__GetStringTypeW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetStringTypeW() {
load_dll_kernel32();
_imp__GetStringTypeW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStringTypeW");
}
void _elfimplib_GetStringTypeW() {
asm("leave\njmp *%0" : : "r"(_imp__GetStringTypeW));
}

void _elfimplib_GetSystemDefaultLCID() asm("GetSystemDefaultLCID");
void *_imp__GetSystemDefaultLCID = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemDefaultLCID() {
load_dll_kernel32();
_imp__GetSystemDefaultLCID = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemDefaultLCID");
}
void _elfimplib_GetSystemDefaultLCID() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemDefaultLCID));
}

void _elfimplib_GetSystemDefaultLangID() asm("GetSystemDefaultLangID");
void *_imp__GetSystemDefaultLangID = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemDefaultLangID() {
load_dll_kernel32();
_imp__GetSystemDefaultLangID = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemDefaultLangID");
}
void _elfimplib_GetSystemDefaultLangID() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemDefaultLangID));
}

void _elfimplib_GetSystemDefaultUILanguage() asm("GetSystemDefaultUILanguage");
void *_imp__GetSystemDefaultUILanguage = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemDefaultUILanguage() {
load_dll_kernel32();
_imp__GetSystemDefaultUILanguage = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemDefaultUILanguage");
}
void _elfimplib_GetSystemDefaultUILanguage() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemDefaultUILanguage));
}

void _elfimplib_GetSystemDirectoryA() asm("GetSystemDirectoryA");
void *_imp__GetSystemDirectoryA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemDirectoryA() {
load_dll_kernel32();
_imp__GetSystemDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemDirectoryA");
}
void _elfimplib_GetSystemDirectoryA() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemDirectoryA));
}

void _elfimplib_GetSystemDirectoryW() asm("GetSystemDirectoryW");
void *_imp__GetSystemDirectoryW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemDirectoryW() {
load_dll_kernel32();
_imp__GetSystemDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemDirectoryW");
}
void _elfimplib_GetSystemDirectoryW() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemDirectoryW));
}

void _elfimplib_GetSystemInfo() asm("GetSystemInfo");
void *_imp__GetSystemInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemInfo() {
load_dll_kernel32();
_imp__GetSystemInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemInfo");
}
void _elfimplib_GetSystemInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemInfo));
}

void _elfimplib_GetSystemPowerStatus() asm("GetSystemPowerStatus");
void *_imp__GetSystemPowerStatus = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemPowerStatus() {
load_dll_kernel32();
_imp__GetSystemPowerStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemPowerStatus");
}
void _elfimplib_GetSystemPowerStatus() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemPowerStatus));
}

void _elfimplib_GetSystemRegistryQuota() asm("GetSystemRegistryQuota");
void *_imp__GetSystemRegistryQuota = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemRegistryQuota() {
load_dll_kernel32();
_imp__GetSystemRegistryQuota = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemRegistryQuota");
}
void _elfimplib_GetSystemRegistryQuota() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemRegistryQuota));
}

void _elfimplib_GetSystemTime() asm("GetSystemTime");
void *_imp__GetSystemTime = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemTime() {
load_dll_kernel32();
_imp__GetSystemTime = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemTime");
}
void _elfimplib_GetSystemTime() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemTime));
}

void _elfimplib_GetSystemTimeAdjustment() asm("GetSystemTimeAdjustment");
void *_imp__GetSystemTimeAdjustment = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemTimeAdjustment() {
load_dll_kernel32();
_imp__GetSystemTimeAdjustment = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemTimeAdjustment");
}
void _elfimplib_GetSystemTimeAdjustment() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemTimeAdjustment));
}

void _elfimplib_GetSystemTimeAsFileTime() asm("GetSystemTimeAsFileTime");
void *_imp__GetSystemTimeAsFileTime = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemTimeAsFileTime() {
load_dll_kernel32();
_imp__GetSystemTimeAsFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemTimeAsFileTime");
}
void _elfimplib_GetSystemTimeAsFileTime() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemTimeAsFileTime));
}

void _elfimplib_GetSystemTimes() asm("GetSystemTimes");
void *_imp__GetSystemTimes = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemTimes() {
load_dll_kernel32();
_imp__GetSystemTimes = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemTimes");
}
void _elfimplib_GetSystemTimes() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemTimes));
}

void _elfimplib_GetSystemWindowsDirectoryA() asm("GetSystemWindowsDirectoryA");
void *_imp__GetSystemWindowsDirectoryA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemWindowsDirectoryA() {
load_dll_kernel32();
_imp__GetSystemWindowsDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemWindowsDirectoryA");
}
void _elfimplib_GetSystemWindowsDirectoryA() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemWindowsDirectoryA));
}

void _elfimplib_GetSystemWindowsDirectoryW() asm("GetSystemWindowsDirectoryW");
void *_imp__GetSystemWindowsDirectoryW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemWindowsDirectoryW() {
load_dll_kernel32();
_imp__GetSystemWindowsDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemWindowsDirectoryW");
}
void _elfimplib_GetSystemWindowsDirectoryW() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemWindowsDirectoryW));
}

void _elfimplib_GetSystemWow64DirectoryA() asm("GetSystemWow64DirectoryA");
void *_imp__GetSystemWow64DirectoryA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemWow64DirectoryA() {
load_dll_kernel32();
_imp__GetSystemWow64DirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemWow64DirectoryA");
}
void _elfimplib_GetSystemWow64DirectoryA() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemWow64DirectoryA));
}

void _elfimplib_GetSystemWow64DirectoryW() asm("GetSystemWow64DirectoryW");
void *_imp__GetSystemWow64DirectoryW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemWow64DirectoryW() {
load_dll_kernel32();
_imp__GetSystemWow64DirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemWow64DirectoryW");
}
void _elfimplib_GetSystemWow64DirectoryW() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemWow64DirectoryW));
}

void _elfimplib_GetTapeParameters() asm("GetTapeParameters");
void *_imp__GetTapeParameters = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTapeParameters() {
load_dll_kernel32();
_imp__GetTapeParameters = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTapeParameters");
}
void _elfimplib_GetTapeParameters() {
asm("leave\njmp *%0" : : "r"(_imp__GetTapeParameters));
}

void _elfimplib_GetTapePosition() asm("GetTapePosition");
void *_imp__GetTapePosition = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTapePosition() {
load_dll_kernel32();
_imp__GetTapePosition = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTapePosition");
}
void _elfimplib_GetTapePosition() {
asm("leave\njmp *%0" : : "r"(_imp__GetTapePosition));
}

void _elfimplib_GetTapeStatus() asm("GetTapeStatus");
void *_imp__GetTapeStatus = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTapeStatus() {
load_dll_kernel32();
_imp__GetTapeStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTapeStatus");
}
void _elfimplib_GetTapeStatus() {
asm("leave\njmp *%0" : : "r"(_imp__GetTapeStatus));
}

void _elfimplib_GetTempFileNameA() asm("GetTempFileNameA");
void *_imp__GetTempFileNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTempFileNameA() {
load_dll_kernel32();
_imp__GetTempFileNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTempFileNameA");
}
void _elfimplib_GetTempFileNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetTempFileNameA));
}

void _elfimplib_GetTempFileNameW() asm("GetTempFileNameW");
void *_imp__GetTempFileNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTempFileNameW() {
load_dll_kernel32();
_imp__GetTempFileNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTempFileNameW");
}
void _elfimplib_GetTempFileNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetTempFileNameW));
}

void _elfimplib_GetTempPathA() asm("GetTempPathA");
void *_imp__GetTempPathA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTempPathA() {
load_dll_kernel32();
_imp__GetTempPathA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTempPathA");
}
void _elfimplib_GetTempPathA() {
asm("leave\njmp *%0" : : "r"(_imp__GetTempPathA));
}

void _elfimplib_GetTempPathW() asm("GetTempPathW");
void *_imp__GetTempPathW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTempPathW() {
load_dll_kernel32();
_imp__GetTempPathW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTempPathW");
}
void _elfimplib_GetTempPathW() {
asm("leave\njmp *%0" : : "r"(_imp__GetTempPathW));
}

void _elfimplib_GetThreadContext() asm("GetThreadContext");
void *_imp__GetThreadContext = NULL;
__attribute__((constructor)) void _elfimplib_init_GetThreadContext() {
load_dll_kernel32();
_imp__GetThreadContext = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadContext");
}
void _elfimplib_GetThreadContext() {
asm("leave\njmp *%0" : : "r"(_imp__GetThreadContext));
}

void _elfimplib_GetThreadIOPendingFlag() asm("GetThreadIOPendingFlag");
void *_imp__GetThreadIOPendingFlag = NULL;
__attribute__((constructor)) void _elfimplib_init_GetThreadIOPendingFlag() {
load_dll_kernel32();
_imp__GetThreadIOPendingFlag = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadIOPendingFlag");
}
void _elfimplib_GetThreadIOPendingFlag() {
asm("leave\njmp *%0" : : "r"(_imp__GetThreadIOPendingFlag));
}

void _elfimplib_GetThreadLocale() asm("GetThreadLocale");
void *_imp__GetThreadLocale = NULL;
__attribute__((constructor)) void _elfimplib_init_GetThreadLocale() {
load_dll_kernel32();
_imp__GetThreadLocale = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadLocale");
}
void _elfimplib_GetThreadLocale() {
asm("leave\njmp *%0" : : "r"(_imp__GetThreadLocale));
}

void _elfimplib_GetThreadPriority() asm("GetThreadPriority");
void *_imp__GetThreadPriority = NULL;
__attribute__((constructor)) void _elfimplib_init_GetThreadPriority() {
load_dll_kernel32();
_imp__GetThreadPriority = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadPriority");
}
void _elfimplib_GetThreadPriority() {
asm("leave\njmp *%0" : : "r"(_imp__GetThreadPriority));
}

void _elfimplib_GetThreadPriorityBoost() asm("GetThreadPriorityBoost");
void *_imp__GetThreadPriorityBoost = NULL;
__attribute__((constructor)) void _elfimplib_init_GetThreadPriorityBoost() {
load_dll_kernel32();
_imp__GetThreadPriorityBoost = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadPriorityBoost");
}
void _elfimplib_GetThreadPriorityBoost() {
asm("leave\njmp *%0" : : "r"(_imp__GetThreadPriorityBoost));
}

void _elfimplib_GetThreadSelectorEntry() asm("GetThreadSelectorEntry");
void *_imp__GetThreadSelectorEntry = NULL;
__attribute__((constructor)) void _elfimplib_init_GetThreadSelectorEntry() {
load_dll_kernel32();
_imp__GetThreadSelectorEntry = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadSelectorEntry");
}
void _elfimplib_GetThreadSelectorEntry() {
asm("leave\njmp *%0" : : "r"(_imp__GetThreadSelectorEntry));
}

void _elfimplib_GetThreadTimes() asm("GetThreadTimes");
void *_imp__GetThreadTimes = NULL;
__attribute__((constructor)) void _elfimplib_init_GetThreadTimes() {
load_dll_kernel32();
_imp__GetThreadTimes = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadTimes");
}
void _elfimplib_GetThreadTimes() {
asm("leave\njmp *%0" : : "r"(_imp__GetThreadTimes));
}

void _elfimplib_GetTickCount() asm("GetTickCount");
void *_imp__GetTickCount = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTickCount() {
load_dll_kernel32();
_imp__GetTickCount = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTickCount");
}
void _elfimplib_GetTickCount() {
asm("leave\njmp *%0" : : "r"(_imp__GetTickCount));
}

void _elfimplib_GetTimeFormatA() asm("GetTimeFormatA");
void *_imp__GetTimeFormatA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTimeFormatA() {
load_dll_kernel32();
_imp__GetTimeFormatA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTimeFormatA");
}
void _elfimplib_GetTimeFormatA() {
asm("leave\njmp *%0" : : "r"(_imp__GetTimeFormatA));
}

void _elfimplib_GetTimeFormatW() asm("GetTimeFormatW");
void *_imp__GetTimeFormatW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTimeFormatW() {
load_dll_kernel32();
_imp__GetTimeFormatW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTimeFormatW");
}
void _elfimplib_GetTimeFormatW() {
asm("leave\njmp *%0" : : "r"(_imp__GetTimeFormatW));
}

void _elfimplib_GetTimeZoneInformation() asm("GetTimeZoneInformation");
void *_imp__GetTimeZoneInformation = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTimeZoneInformation() {
load_dll_kernel32();
_imp__GetTimeZoneInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTimeZoneInformation");
}
void _elfimplib_GetTimeZoneInformation() {
asm("leave\njmp *%0" : : "r"(_imp__GetTimeZoneInformation));
}

void _elfimplib_GetUserDefaultLCID() asm("GetUserDefaultLCID");
void *_imp__GetUserDefaultLCID = NULL;
__attribute__((constructor)) void _elfimplib_init_GetUserDefaultLCID() {
load_dll_kernel32();
_imp__GetUserDefaultLCID = (void *) _elf_GetProcAddress(_dll_kernel32, "GetUserDefaultLCID");
}
void _elfimplib_GetUserDefaultLCID() {
asm("leave\njmp *%0" : : "r"(_imp__GetUserDefaultLCID));
}

void _elfimplib_GetUserDefaultLangID() asm("GetUserDefaultLangID");
void *_imp__GetUserDefaultLangID = NULL;
__attribute__((constructor)) void _elfimplib_init_GetUserDefaultLangID() {
load_dll_kernel32();
_imp__GetUserDefaultLangID = (void *) _elf_GetProcAddress(_dll_kernel32, "GetUserDefaultLangID");
}
void _elfimplib_GetUserDefaultLangID() {
asm("leave\njmp *%0" : : "r"(_imp__GetUserDefaultLangID));
}

void _elfimplib_GetUserDefaultUILanguage() asm("GetUserDefaultUILanguage");
void *_imp__GetUserDefaultUILanguage = NULL;
__attribute__((constructor)) void _elfimplib_init_GetUserDefaultUILanguage() {
load_dll_kernel32();
_imp__GetUserDefaultUILanguage = (void *) _elf_GetProcAddress(_dll_kernel32, "GetUserDefaultUILanguage");
}
void _elfimplib_GetUserDefaultUILanguage() {
asm("leave\njmp *%0" : : "r"(_imp__GetUserDefaultUILanguage));
}

void _elfimplib_GetUserGeoID() asm("GetUserGeoID");
void *_imp__GetUserGeoID = NULL;
__attribute__((constructor)) void _elfimplib_init_GetUserGeoID() {
load_dll_kernel32();
_imp__GetUserGeoID = (void *) _elf_GetProcAddress(_dll_kernel32, "GetUserGeoID");
}
void _elfimplib_GetUserGeoID() {
asm("leave\njmp *%0" : : "r"(_imp__GetUserGeoID));
}

void _elfimplib_GetVDMCurrentDirectories() asm("GetVDMCurrentDirectories");
void *_imp__GetVDMCurrentDirectories = NULL;
__attribute__((constructor)) void _elfimplib_init_GetVDMCurrentDirectories() {
load_dll_kernel32();
_imp__GetVDMCurrentDirectories = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVDMCurrentDirectories");
}
void _elfimplib_GetVDMCurrentDirectories() {
asm("leave\njmp *%0" : : "r"(_imp__GetVDMCurrentDirectories));
}

void _elfimplib_GetVersion() asm("GetVersion");
void *_imp__GetVersion = NULL;
__attribute__((constructor)) void _elfimplib_init_GetVersion() {
load_dll_kernel32();
_imp__GetVersion = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVersion");
}
void _elfimplib_GetVersion() {
asm("leave\njmp *%0" : : "r"(_imp__GetVersion));
}

void _elfimplib_GetVersionExA() asm("GetVersionExA");
void *_imp__GetVersionExA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetVersionExA() {
load_dll_kernel32();
_imp__GetVersionExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVersionExA");
}
void _elfimplib_GetVersionExA() {
asm("leave\njmp *%0" : : "r"(_imp__GetVersionExA));
}

void _elfimplib_GetVersionExW() asm("GetVersionExW");
void *_imp__GetVersionExW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetVersionExW() {
load_dll_kernel32();
_imp__GetVersionExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVersionExW");
}
void _elfimplib_GetVersionExW() {
asm("leave\njmp *%0" : : "r"(_imp__GetVersionExW));
}

void _elfimplib_GetVolumeInformationA() asm("GetVolumeInformationA");
void *_imp__GetVolumeInformationA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetVolumeInformationA() {
load_dll_kernel32();
_imp__GetVolumeInformationA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumeInformationA");
}
void _elfimplib_GetVolumeInformationA() {
asm("leave\njmp *%0" : : "r"(_imp__GetVolumeInformationA));
}

void _elfimplib_GetVolumeInformationW() asm("GetVolumeInformationW");
void *_imp__GetVolumeInformationW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetVolumeInformationW() {
load_dll_kernel32();
_imp__GetVolumeInformationW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumeInformationW");
}
void _elfimplib_GetVolumeInformationW() {
asm("leave\njmp *%0" : : "r"(_imp__GetVolumeInformationW));
}

void _elfimplib_GetVolumeNameForVolumeMountPointA() asm("GetVolumeNameForVolumeMountPointA");
void *_imp__GetVolumeNameForVolumeMountPointA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetVolumeNameForVolumeMountPointA() {
load_dll_kernel32();
_imp__GetVolumeNameForVolumeMountPointA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumeNameForVolumeMountPointA");
}
void _elfimplib_GetVolumeNameForVolumeMountPointA() {
asm("leave\njmp *%0" : : "r"(_imp__GetVolumeNameForVolumeMountPointA));
}

void _elfimplib_GetVolumeNameForVolumeMountPointW() asm("GetVolumeNameForVolumeMountPointW");
void *_imp__GetVolumeNameForVolumeMountPointW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetVolumeNameForVolumeMountPointW() {
load_dll_kernel32();
_imp__GetVolumeNameForVolumeMountPointW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumeNameForVolumeMountPointW");
}
void _elfimplib_GetVolumeNameForVolumeMountPointW() {
asm("leave\njmp *%0" : : "r"(_imp__GetVolumeNameForVolumeMountPointW));
}

void _elfimplib_GetVolumePathNameA() asm("GetVolumePathNameA");
void *_imp__GetVolumePathNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetVolumePathNameA() {
load_dll_kernel32();
_imp__GetVolumePathNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumePathNameA");
}
void _elfimplib_GetVolumePathNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetVolumePathNameA));
}

void _elfimplib_GetVolumePathNameW() asm("GetVolumePathNameW");
void *_imp__GetVolumePathNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetVolumePathNameW() {
load_dll_kernel32();
_imp__GetVolumePathNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumePathNameW");
}
void _elfimplib_GetVolumePathNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetVolumePathNameW));
}

void _elfimplib_GetVolumePathNamesForVolumeNameA() asm("GetVolumePathNamesForVolumeNameA");
void *_imp__GetVolumePathNamesForVolumeNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetVolumePathNamesForVolumeNameA() {
load_dll_kernel32();
_imp__GetVolumePathNamesForVolumeNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumePathNamesForVolumeNameA");
}
void _elfimplib_GetVolumePathNamesForVolumeNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetVolumePathNamesForVolumeNameA));
}

void _elfimplib_GetVolumePathNamesForVolumeNameW() asm("GetVolumePathNamesForVolumeNameW");
void *_imp__GetVolumePathNamesForVolumeNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetVolumePathNamesForVolumeNameW() {
load_dll_kernel32();
_imp__GetVolumePathNamesForVolumeNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumePathNamesForVolumeNameW");
}
void _elfimplib_GetVolumePathNamesForVolumeNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetVolumePathNamesForVolumeNameW));
}

void _elfimplib_GetWindowsDirectoryA() asm("GetWindowsDirectoryA");
void *_imp__GetWindowsDirectoryA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWindowsDirectoryA() {
load_dll_kernel32();
_imp__GetWindowsDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetWindowsDirectoryA");
}
void _elfimplib_GetWindowsDirectoryA() {
asm("leave\njmp *%0" : : "r"(_imp__GetWindowsDirectoryA));
}

void _elfimplib_GetWindowsDirectoryW() asm("GetWindowsDirectoryW");
void *_imp__GetWindowsDirectoryW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWindowsDirectoryW() {
load_dll_kernel32();
_imp__GetWindowsDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetWindowsDirectoryW");
}
void _elfimplib_GetWindowsDirectoryW() {
asm("leave\njmp *%0" : : "r"(_imp__GetWindowsDirectoryW));
}

void _elfimplib_GetWriteWatch() asm("GetWriteWatch");
void *_imp__GetWriteWatch = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWriteWatch() {
load_dll_kernel32();
_imp__GetWriteWatch = (void *) _elf_GetProcAddress(_dll_kernel32, "GetWriteWatch");
}
void _elfimplib_GetWriteWatch() {
asm("leave\njmp *%0" : : "r"(_imp__GetWriteWatch));
}

void _elfimplib_GlobalAddAtomA() asm("GlobalAddAtomA");
void *_imp__GlobalAddAtomA = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalAddAtomA() {
load_dll_kernel32();
_imp__GlobalAddAtomA = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalAddAtomA");
}
void _elfimplib_GlobalAddAtomA() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalAddAtomA));
}

void _elfimplib_GlobalAddAtomW() asm("GlobalAddAtomW");
void *_imp__GlobalAddAtomW = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalAddAtomW() {
load_dll_kernel32();
_imp__GlobalAddAtomW = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalAddAtomW");
}
void _elfimplib_GlobalAddAtomW() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalAddAtomW));
}

void _elfimplib_GlobalAlloc() asm("GlobalAlloc");
void *_imp__GlobalAlloc = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalAlloc() {
load_dll_kernel32();
_imp__GlobalAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalAlloc");
}
void _elfimplib_GlobalAlloc() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalAlloc));
}

void _elfimplib_GlobalCompact() asm("GlobalCompact");
void *_imp__GlobalCompact = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalCompact() {
load_dll_kernel32();
_imp__GlobalCompact = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalCompact");
}
void _elfimplib_GlobalCompact() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalCompact));
}

void _elfimplib_GlobalDeleteAtom() asm("GlobalDeleteAtom");
void *_imp__GlobalDeleteAtom = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalDeleteAtom() {
load_dll_kernel32();
_imp__GlobalDeleteAtom = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalDeleteAtom");
}
void _elfimplib_GlobalDeleteAtom() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalDeleteAtom));
}

void _elfimplib_GlobalFindAtomA() asm("GlobalFindAtomA");
void *_imp__GlobalFindAtomA = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalFindAtomA() {
load_dll_kernel32();
_imp__GlobalFindAtomA = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalFindAtomA");
}
void _elfimplib_GlobalFindAtomA() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalFindAtomA));
}

void _elfimplib_GlobalFindAtomW() asm("GlobalFindAtomW");
void *_imp__GlobalFindAtomW = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalFindAtomW() {
load_dll_kernel32();
_imp__GlobalFindAtomW = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalFindAtomW");
}
void _elfimplib_GlobalFindAtomW() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalFindAtomW));
}

void _elfimplib_GlobalFix() asm("GlobalFix");
void *_imp__GlobalFix = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalFix() {
load_dll_kernel32();
_imp__GlobalFix = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalFix");
}
void _elfimplib_GlobalFix() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalFix));
}

void _elfimplib_GlobalFlags() asm("GlobalFlags");
void *_imp__GlobalFlags = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalFlags() {
load_dll_kernel32();
_imp__GlobalFlags = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalFlags");
}
void _elfimplib_GlobalFlags() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalFlags));
}

void _elfimplib_GlobalFree() asm("GlobalFree");
void *_imp__GlobalFree = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalFree() {
load_dll_kernel32();
_imp__GlobalFree = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalFree");
}
void _elfimplib_GlobalFree() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalFree));
}

void _elfimplib_GlobalGetAtomNameA() asm("GlobalGetAtomNameA");
void *_imp__GlobalGetAtomNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalGetAtomNameA() {
load_dll_kernel32();
_imp__GlobalGetAtomNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalGetAtomNameA");
}
void _elfimplib_GlobalGetAtomNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalGetAtomNameA));
}

void _elfimplib_GlobalGetAtomNameW() asm("GlobalGetAtomNameW");
void *_imp__GlobalGetAtomNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalGetAtomNameW() {
load_dll_kernel32();
_imp__GlobalGetAtomNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalGetAtomNameW");
}
void _elfimplib_GlobalGetAtomNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalGetAtomNameW));
}

void _elfimplib_GlobalHandle() asm("GlobalHandle");
void *_imp__GlobalHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalHandle() {
load_dll_kernel32();
_imp__GlobalHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalHandle");
}
void _elfimplib_GlobalHandle() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalHandle));
}

void _elfimplib_GlobalLock() asm("GlobalLock");
void *_imp__GlobalLock = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalLock() {
load_dll_kernel32();
_imp__GlobalLock = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalLock");
}
void _elfimplib_GlobalLock() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalLock));
}

void _elfimplib_GlobalMemoryStatus() asm("GlobalMemoryStatus");
void *_imp__GlobalMemoryStatus = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalMemoryStatus() {
load_dll_kernel32();
_imp__GlobalMemoryStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalMemoryStatus");
}
void _elfimplib_GlobalMemoryStatus() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalMemoryStatus));
}

void _elfimplib_GlobalMemoryStatusEx() asm("GlobalMemoryStatusEx");
void *_imp__GlobalMemoryStatusEx = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalMemoryStatusEx() {
load_dll_kernel32();
_imp__GlobalMemoryStatusEx = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalMemoryStatusEx");
}
void _elfimplib_GlobalMemoryStatusEx() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalMemoryStatusEx));
}

void _elfimplib_GlobalReAlloc() asm("GlobalReAlloc");
void *_imp__GlobalReAlloc = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalReAlloc() {
load_dll_kernel32();
_imp__GlobalReAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalReAlloc");
}
void _elfimplib_GlobalReAlloc() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalReAlloc));
}

void _elfimplib_GlobalSize() asm("GlobalSize");
void *_imp__GlobalSize = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalSize() {
load_dll_kernel32();
_imp__GlobalSize = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalSize");
}
void _elfimplib_GlobalSize() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalSize));
}

void _elfimplib_GlobalUnWire() asm("GlobalUnWire");
void *_imp__GlobalUnWire = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalUnWire() {
load_dll_kernel32();
_imp__GlobalUnWire = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalUnWire");
}
void _elfimplib_GlobalUnWire() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalUnWire));
}

void _elfimplib_GlobalUnfix() asm("GlobalUnfix");
void *_imp__GlobalUnfix = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalUnfix() {
load_dll_kernel32();
_imp__GlobalUnfix = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalUnfix");
}
void _elfimplib_GlobalUnfix() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalUnfix));
}

void _elfimplib_GlobalUnlock() asm("GlobalUnlock");
void *_imp__GlobalUnlock = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalUnlock() {
load_dll_kernel32();
_imp__GlobalUnlock = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalUnlock");
}
void _elfimplib_GlobalUnlock() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalUnlock));
}

void _elfimplib_GlobalWire() asm("GlobalWire");
void *_imp__GlobalWire = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalWire() {
load_dll_kernel32();
_imp__GlobalWire = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalWire");
}
void _elfimplib_GlobalWire() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalWire));
}

void _elfimplib_Heap32First() asm("Heap32First");
void *_imp__Heap32First = NULL;
__attribute__((constructor)) void _elfimplib_init_Heap32First() {
load_dll_kernel32();
_imp__Heap32First = (void *) _elf_GetProcAddress(_dll_kernel32, "Heap32First");
}
void _elfimplib_Heap32First() {
asm("leave\njmp *%0" : : "r"(_imp__Heap32First));
}

void _elfimplib_Heap32ListFirst() asm("Heap32ListFirst");
void *_imp__Heap32ListFirst = NULL;
__attribute__((constructor)) void _elfimplib_init_Heap32ListFirst() {
load_dll_kernel32();
_imp__Heap32ListFirst = (void *) _elf_GetProcAddress(_dll_kernel32, "Heap32ListFirst");
}
void _elfimplib_Heap32ListFirst() {
asm("leave\njmp *%0" : : "r"(_imp__Heap32ListFirst));
}

void _elfimplib_Heap32ListNext() asm("Heap32ListNext");
void *_imp__Heap32ListNext = NULL;
__attribute__((constructor)) void _elfimplib_init_Heap32ListNext() {
load_dll_kernel32();
_imp__Heap32ListNext = (void *) _elf_GetProcAddress(_dll_kernel32, "Heap32ListNext");
}
void _elfimplib_Heap32ListNext() {
asm("leave\njmp *%0" : : "r"(_imp__Heap32ListNext));
}

void _elfimplib_Heap32Next() asm("Heap32Next");
void *_imp__Heap32Next = NULL;
__attribute__((constructor)) void _elfimplib_init_Heap32Next() {
load_dll_kernel32();
_imp__Heap32Next = (void *) _elf_GetProcAddress(_dll_kernel32, "Heap32Next");
}
void _elfimplib_Heap32Next() {
asm("leave\njmp *%0" : : "r"(_imp__Heap32Next));
}

void _elfimplib_HeapAlloc() asm("HeapAlloc");
void *_imp__HeapAlloc = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapAlloc() {
load_dll_kernel32();
_imp__HeapAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapAlloc");
}
void _elfimplib_HeapAlloc() {
asm("leave\njmp *%0" : : "r"(_imp__HeapAlloc));
}

void _elfimplib_HeapCompact() asm("HeapCompact");
void *_imp__HeapCompact = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapCompact() {
load_dll_kernel32();
_imp__HeapCompact = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapCompact");
}
void _elfimplib_HeapCompact() {
asm("leave\njmp *%0" : : "r"(_imp__HeapCompact));
}

void _elfimplib_HeapCreate() asm("HeapCreate");
void *_imp__HeapCreate = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapCreate() {
load_dll_kernel32();
_imp__HeapCreate = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapCreate");
}
void _elfimplib_HeapCreate() {
asm("leave\njmp *%0" : : "r"(_imp__HeapCreate));
}

void _elfimplib_HeapCreateTagsW() asm("HeapCreateTagsW");
void *_imp__HeapCreateTagsW = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapCreateTagsW() {
load_dll_kernel32();
_imp__HeapCreateTagsW = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapCreateTagsW");
}
void _elfimplib_HeapCreateTagsW() {
asm("leave\njmp *%0" : : "r"(_imp__HeapCreateTagsW));
}

void _elfimplib_HeapDestroy() asm("HeapDestroy");
void *_imp__HeapDestroy = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapDestroy() {
load_dll_kernel32();
_imp__HeapDestroy = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapDestroy");
}
void _elfimplib_HeapDestroy() {
asm("leave\njmp *%0" : : "r"(_imp__HeapDestroy));
}

void _elfimplib_HeapExtend() asm("HeapExtend");
void *_imp__HeapExtend = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapExtend() {
load_dll_kernel32();
_imp__HeapExtend = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapExtend");
}
void _elfimplib_HeapExtend() {
asm("leave\njmp *%0" : : "r"(_imp__HeapExtend));
}

void _elfimplib_HeapFree() asm("HeapFree");
void *_imp__HeapFree = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapFree() {
load_dll_kernel32();
_imp__HeapFree = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapFree");
}
void _elfimplib_HeapFree() {
asm("leave\njmp *%0" : : "r"(_imp__HeapFree));
}

void _elfimplib_HeapLock() asm("HeapLock");
void *_imp__HeapLock = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapLock() {
load_dll_kernel32();
_imp__HeapLock = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapLock");
}
void _elfimplib_HeapLock() {
asm("leave\njmp *%0" : : "r"(_imp__HeapLock));
}

void _elfimplib_HeapQueryInformation() asm("HeapQueryInformation");
void *_imp__HeapQueryInformation = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapQueryInformation() {
load_dll_kernel32();
_imp__HeapQueryInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapQueryInformation");
}
void _elfimplib_HeapQueryInformation() {
asm("leave\njmp *%0" : : "r"(_imp__HeapQueryInformation));
}

void _elfimplib_HeapQueryTagW() asm("HeapQueryTagW");
void *_imp__HeapQueryTagW = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapQueryTagW() {
load_dll_kernel32();
_imp__HeapQueryTagW = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapQueryTagW");
}
void _elfimplib_HeapQueryTagW() {
asm("leave\njmp *%0" : : "r"(_imp__HeapQueryTagW));
}

void _elfimplib_HeapReAlloc() asm("HeapReAlloc");
void *_imp__HeapReAlloc = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapReAlloc() {
load_dll_kernel32();
_imp__HeapReAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapReAlloc");
}
void _elfimplib_HeapReAlloc() {
asm("leave\njmp *%0" : : "r"(_imp__HeapReAlloc));
}

void _elfimplib_HeapSetInformation() asm("HeapSetInformation");
void *_imp__HeapSetInformation = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapSetInformation() {
load_dll_kernel32();
_imp__HeapSetInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapSetInformation");
}
void _elfimplib_HeapSetInformation() {
asm("leave\njmp *%0" : : "r"(_imp__HeapSetInformation));
}

void _elfimplib_HeapSize() asm("HeapSize");
void *_imp__HeapSize = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapSize() {
load_dll_kernel32();
_imp__HeapSize = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapSize");
}
void _elfimplib_HeapSize() {
asm("leave\njmp *%0" : : "r"(_imp__HeapSize));
}

void _elfimplib_HeapSummary() asm("HeapSummary");
void *_imp__HeapSummary = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapSummary() {
load_dll_kernel32();
_imp__HeapSummary = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapSummary");
}
void _elfimplib_HeapSummary() {
asm("leave\njmp *%0" : : "r"(_imp__HeapSummary));
}

void _elfimplib_HeapUnlock() asm("HeapUnlock");
void *_imp__HeapUnlock = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapUnlock() {
load_dll_kernel32();
_imp__HeapUnlock = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapUnlock");
}
void _elfimplib_HeapUnlock() {
asm("leave\njmp *%0" : : "r"(_imp__HeapUnlock));
}

void _elfimplib_HeapUsage() asm("HeapUsage");
void *_imp__HeapUsage = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapUsage() {
load_dll_kernel32();
_imp__HeapUsage = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapUsage");
}
void _elfimplib_HeapUsage() {
asm("leave\njmp *%0" : : "r"(_imp__HeapUsage));
}

void _elfimplib_HeapValidate() asm("HeapValidate");
void *_imp__HeapValidate = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapValidate() {
load_dll_kernel32();
_imp__HeapValidate = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapValidate");
}
void _elfimplib_HeapValidate() {
asm("leave\njmp *%0" : : "r"(_imp__HeapValidate));
}

void _elfimplib_HeapWalk() asm("HeapWalk");
void *_imp__HeapWalk = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapWalk() {
load_dll_kernel32();
_imp__HeapWalk = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapWalk");
}
void _elfimplib_HeapWalk() {
asm("leave\njmp *%0" : : "r"(_imp__HeapWalk));
}

void _elfimplib_InitAtomTable() asm("InitAtomTable");
void *_imp__InitAtomTable = NULL;
__attribute__((constructor)) void _elfimplib_init_InitAtomTable() {
load_dll_kernel32();
_imp__InitAtomTable = (void *) _elf_GetProcAddress(_dll_kernel32, "InitAtomTable");
}
void _elfimplib_InitAtomTable() {
asm("leave\njmp *%0" : : "r"(_imp__InitAtomTable));
}

void _elfimplib_InitializeCriticalSection() asm("InitializeCriticalSection");
void *_imp__InitializeCriticalSection = NULL;
__attribute__((constructor)) void _elfimplib_init_InitializeCriticalSection() {
load_dll_kernel32();
_imp__InitializeCriticalSection = (void *) _elf_GetProcAddress(_dll_kernel32, "InitializeCriticalSection");
}
void _elfimplib_InitializeCriticalSection() {
asm("leave\njmp *%0" : : "r"(_imp__InitializeCriticalSection));
}

void _elfimplib_InitializeCriticalSectionAndSpinCount() asm("InitializeCriticalSectionAndSpinCount");
void *_imp__InitializeCriticalSectionAndSpinCount = NULL;
__attribute__((constructor)) void _elfimplib_init_InitializeCriticalSectionAndSpinCount() {
load_dll_kernel32();
_imp__InitializeCriticalSectionAndSpinCount = (void *) _elf_GetProcAddress(_dll_kernel32, "InitializeCriticalSectionAndSpinCount");
}
void _elfimplib_InitializeCriticalSectionAndSpinCount() {
asm("leave\njmp *%0" : : "r"(_imp__InitializeCriticalSectionAndSpinCount));
}

void _elfimplib_InitializeSListHead() asm("InitializeSListHead");
void *_imp__InitializeSListHead = NULL;
__attribute__((constructor)) void _elfimplib_init_InitializeSListHead() {
load_dll_kernel32();
_imp__InitializeSListHead = (void *) _elf_GetProcAddress(_dll_kernel32, "InitializeSListHead");
}
void _elfimplib_InitializeSListHead() {
asm("leave\njmp *%0" : : "r"(_imp__InitializeSListHead));
}

void _elfimplib_InterlockedCompareExchange() asm("InterlockedCompareExchange");
void *_imp__InterlockedCompareExchange = NULL;
__attribute__((constructor)) void _elfimplib_init_InterlockedCompareExchange() {
load_dll_kernel32();
_imp__InterlockedCompareExchange = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedCompareExchange");
}
void _elfimplib_InterlockedCompareExchange() {
asm("leave\njmp *%0" : : "r"(_imp__InterlockedCompareExchange));
}

void _elfimplib_InterlockedDecrement() asm("InterlockedDecrement");
void *_imp__InterlockedDecrement = NULL;
__attribute__((constructor)) void _elfimplib_init_InterlockedDecrement() {
load_dll_kernel32();
_imp__InterlockedDecrement = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedDecrement");
}
void _elfimplib_InterlockedDecrement() {
asm("leave\njmp *%0" : : "r"(_imp__InterlockedDecrement));
}

void _elfimplib_InterlockedExchange() asm("InterlockedExchange");
void *_imp__InterlockedExchange = NULL;
__attribute__((constructor)) void _elfimplib_init_InterlockedExchange() {
load_dll_kernel32();
_imp__InterlockedExchange = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedExchange");
}
void _elfimplib_InterlockedExchange() {
asm("leave\njmp *%0" : : "r"(_imp__InterlockedExchange));
}

void _elfimplib_InterlockedExchangeAdd() asm("InterlockedExchangeAdd");
void *_imp__InterlockedExchangeAdd = NULL;
__attribute__((constructor)) void _elfimplib_init_InterlockedExchangeAdd() {
load_dll_kernel32();
_imp__InterlockedExchangeAdd = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedExchangeAdd");
}
void _elfimplib_InterlockedExchangeAdd() {
asm("leave\njmp *%0" : : "r"(_imp__InterlockedExchangeAdd));
}

void _elfimplib_InterlockedFlushSList() asm("InterlockedFlushSList");
void *_imp__InterlockedFlushSList = NULL;
__attribute__((constructor)) void _elfimplib_init_InterlockedFlushSList() {
load_dll_kernel32();
_imp__InterlockedFlushSList = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedFlushSList");
}
void _elfimplib_InterlockedFlushSList() {
asm("leave\njmp *%0" : : "r"(_imp__InterlockedFlushSList));
}

void _elfimplib_InterlockedIncrement() asm("InterlockedIncrement");
void *_imp__InterlockedIncrement = NULL;
__attribute__((constructor)) void _elfimplib_init_InterlockedIncrement() {
load_dll_kernel32();
_imp__InterlockedIncrement = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedIncrement");
}
void _elfimplib_InterlockedIncrement() {
asm("leave\njmp *%0" : : "r"(_imp__InterlockedIncrement));
}

void _elfimplib_InterlockedPopEntrySList() asm("InterlockedPopEntrySList");
void *_imp__InterlockedPopEntrySList = NULL;
__attribute__((constructor)) void _elfimplib_init_InterlockedPopEntrySList() {
load_dll_kernel32();
_imp__InterlockedPopEntrySList = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedPopEntrySList");
}
void _elfimplib_InterlockedPopEntrySList() {
asm("leave\njmp *%0" : : "r"(_imp__InterlockedPopEntrySList));
}

void _elfimplib_InterlockedPushEntrySList() asm("InterlockedPushEntrySList");
void *_imp__InterlockedPushEntrySList = NULL;
__attribute__((constructor)) void _elfimplib_init_InterlockedPushEntrySList() {
load_dll_kernel32();
_imp__InterlockedPushEntrySList = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedPushEntrySList");
}
void _elfimplib_InterlockedPushEntrySList() {
asm("leave\njmp *%0" : : "r"(_imp__InterlockedPushEntrySList));
}

void _elfimplib_InvalidateConsoleDIBits() asm("InvalidateConsoleDIBits");
void *_imp__InvalidateConsoleDIBits = NULL;
__attribute__((constructor)) void _elfimplib_init_InvalidateConsoleDIBits() {
load_dll_kernel32();
_imp__InvalidateConsoleDIBits = (void *) _elf_GetProcAddress(_dll_kernel32, "InvalidateConsoleDIBits");
}
void _elfimplib_InvalidateConsoleDIBits() {
asm("leave\njmp *%0" : : "r"(_imp__InvalidateConsoleDIBits));
}

void _elfimplib_IsBadCodePtr() asm("IsBadCodePtr");
void *_imp__IsBadCodePtr = NULL;
__attribute__((constructor)) void _elfimplib_init_IsBadCodePtr() {
load_dll_kernel32();
_imp__IsBadCodePtr = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadCodePtr");
}
void _elfimplib_IsBadCodePtr() {
asm("leave\njmp *%0" : : "r"(_imp__IsBadCodePtr));
}

void _elfimplib_IsBadHugeReadPtr() asm("IsBadHugeReadPtr");
void *_imp__IsBadHugeReadPtr = NULL;
__attribute__((constructor)) void _elfimplib_init_IsBadHugeReadPtr() {
load_dll_kernel32();
_imp__IsBadHugeReadPtr = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadHugeReadPtr");
}
void _elfimplib_IsBadHugeReadPtr() {
asm("leave\njmp *%0" : : "r"(_imp__IsBadHugeReadPtr));
}

void _elfimplib_IsBadHugeWritePtr() asm("IsBadHugeWritePtr");
void *_imp__IsBadHugeWritePtr = NULL;
__attribute__((constructor)) void _elfimplib_init_IsBadHugeWritePtr() {
load_dll_kernel32();
_imp__IsBadHugeWritePtr = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadHugeWritePtr");
}
void _elfimplib_IsBadHugeWritePtr() {
asm("leave\njmp *%0" : : "r"(_imp__IsBadHugeWritePtr));
}

void _elfimplib_IsBadReadPtr() asm("IsBadReadPtr");
void *_imp__IsBadReadPtr = NULL;
__attribute__((constructor)) void _elfimplib_init_IsBadReadPtr() {
load_dll_kernel32();
_imp__IsBadReadPtr = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadReadPtr");
}
void _elfimplib_IsBadReadPtr() {
asm("leave\njmp *%0" : : "r"(_imp__IsBadReadPtr));
}

void _elfimplib_IsBadStringPtrA() asm("IsBadStringPtrA");
void *_imp__IsBadStringPtrA = NULL;
__attribute__((constructor)) void _elfimplib_init_IsBadStringPtrA() {
load_dll_kernel32();
_imp__IsBadStringPtrA = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadStringPtrA");
}
void _elfimplib_IsBadStringPtrA() {
asm("leave\njmp *%0" : : "r"(_imp__IsBadStringPtrA));
}

void _elfimplib_IsBadStringPtrW() asm("IsBadStringPtrW");
void *_imp__IsBadStringPtrW = NULL;
__attribute__((constructor)) void _elfimplib_init_IsBadStringPtrW() {
load_dll_kernel32();
_imp__IsBadStringPtrW = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadStringPtrW");
}
void _elfimplib_IsBadStringPtrW() {
asm("leave\njmp *%0" : : "r"(_imp__IsBadStringPtrW));
}

void _elfimplib_IsBadWritePtr() asm("IsBadWritePtr");
void *_imp__IsBadWritePtr = NULL;
__attribute__((constructor)) void _elfimplib_init_IsBadWritePtr() {
load_dll_kernel32();
_imp__IsBadWritePtr = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadWritePtr");
}
void _elfimplib_IsBadWritePtr() {
asm("leave\njmp *%0" : : "r"(_imp__IsBadWritePtr));
}

void _elfimplib_IsDBCSLeadByte() asm("IsDBCSLeadByte");
void *_imp__IsDBCSLeadByte = NULL;
__attribute__((constructor)) void _elfimplib_init_IsDBCSLeadByte() {
load_dll_kernel32();
_imp__IsDBCSLeadByte = (void *) _elf_GetProcAddress(_dll_kernel32, "IsDBCSLeadByte");
}
void _elfimplib_IsDBCSLeadByte() {
asm("leave\njmp *%0" : : "r"(_imp__IsDBCSLeadByte));
}

void _elfimplib_IsDBCSLeadByteEx() asm("IsDBCSLeadByteEx");
void *_imp__IsDBCSLeadByteEx = NULL;
__attribute__((constructor)) void _elfimplib_init_IsDBCSLeadByteEx() {
load_dll_kernel32();
_imp__IsDBCSLeadByteEx = (void *) _elf_GetProcAddress(_dll_kernel32, "IsDBCSLeadByteEx");
}
void _elfimplib_IsDBCSLeadByteEx() {
asm("leave\njmp *%0" : : "r"(_imp__IsDBCSLeadByteEx));
}

void _elfimplib_IsDebuggerPresent() asm("IsDebuggerPresent");
void *_imp__IsDebuggerPresent = NULL;
__attribute__((constructor)) void _elfimplib_init_IsDebuggerPresent() {
load_dll_kernel32();
_imp__IsDebuggerPresent = (void *) _elf_GetProcAddress(_dll_kernel32, "IsDebuggerPresent");
}
void _elfimplib_IsDebuggerPresent() {
asm("leave\njmp *%0" : : "r"(_imp__IsDebuggerPresent));
}

void _elfimplib_IsProcessInJob() asm("IsProcessInJob");
void *_imp__IsProcessInJob = NULL;
__attribute__((constructor)) void _elfimplib_init_IsProcessInJob() {
load_dll_kernel32();
_imp__IsProcessInJob = (void *) _elf_GetProcAddress(_dll_kernel32, "IsProcessInJob");
}
void _elfimplib_IsProcessInJob() {
asm("leave\njmp *%0" : : "r"(_imp__IsProcessInJob));
}

void _elfimplib_IsProcessorFeaturePresent() asm("IsProcessorFeaturePresent");
void *_imp__IsProcessorFeaturePresent = NULL;
__attribute__((constructor)) void _elfimplib_init_IsProcessorFeaturePresent() {
load_dll_kernel32();
_imp__IsProcessorFeaturePresent = (void *) _elf_GetProcAddress(_dll_kernel32, "IsProcessorFeaturePresent");
}
void _elfimplib_IsProcessorFeaturePresent() {
asm("leave\njmp *%0" : : "r"(_imp__IsProcessorFeaturePresent));
}

void _elfimplib_IsSystemResumeAutomatic() asm("IsSystemResumeAutomatic");
void *_imp__IsSystemResumeAutomatic = NULL;
__attribute__((constructor)) void _elfimplib_init_IsSystemResumeAutomatic() {
load_dll_kernel32();
_imp__IsSystemResumeAutomatic = (void *) _elf_GetProcAddress(_dll_kernel32, "IsSystemResumeAutomatic");
}
void _elfimplib_IsSystemResumeAutomatic() {
asm("leave\njmp *%0" : : "r"(_imp__IsSystemResumeAutomatic));
}

void _elfimplib_IsValidCodePage() asm("IsValidCodePage");
void *_imp__IsValidCodePage = NULL;
__attribute__((constructor)) void _elfimplib_init_IsValidCodePage() {
load_dll_kernel32();
_imp__IsValidCodePage = (void *) _elf_GetProcAddress(_dll_kernel32, "IsValidCodePage");
}
void _elfimplib_IsValidCodePage() {
asm("leave\njmp *%0" : : "r"(_imp__IsValidCodePage));
}

void _elfimplib_IsValidLanguageGroup() asm("IsValidLanguageGroup");
void *_imp__IsValidLanguageGroup = NULL;
__attribute__((constructor)) void _elfimplib_init_IsValidLanguageGroup() {
load_dll_kernel32();
_imp__IsValidLanguageGroup = (void *) _elf_GetProcAddress(_dll_kernel32, "IsValidLanguageGroup");
}
void _elfimplib_IsValidLanguageGroup() {
asm("leave\njmp *%0" : : "r"(_imp__IsValidLanguageGroup));
}

void _elfimplib_IsValidLocale() asm("IsValidLocale");
void *_imp__IsValidLocale = NULL;
__attribute__((constructor)) void _elfimplib_init_IsValidLocale() {
load_dll_kernel32();
_imp__IsValidLocale = (void *) _elf_GetProcAddress(_dll_kernel32, "IsValidLocale");
}
void _elfimplib_IsValidLocale() {
asm("leave\njmp *%0" : : "r"(_imp__IsValidLocale));
}

void _elfimplib_IsValidUILanguage() asm("IsValidUILanguage");
void *_imp__IsValidUILanguage = NULL;
__attribute__((constructor)) void _elfimplib_init_IsValidUILanguage() {
load_dll_kernel32();
_imp__IsValidUILanguage = (void *) _elf_GetProcAddress(_dll_kernel32, "IsValidUILanguage");
}
void _elfimplib_IsValidUILanguage() {
asm("leave\njmp *%0" : : "r"(_imp__IsValidUILanguage));
}

void _elfimplib_IsWow64Process() asm("IsWow64Process");
void *_imp__IsWow64Process = NULL;
__attribute__((constructor)) void _elfimplib_init_IsWow64Process() {
load_dll_kernel32();
_imp__IsWow64Process = (void *) _elf_GetProcAddress(_dll_kernel32, "IsWow64Process");
}
void _elfimplib_IsWow64Process() {
asm("leave\njmp *%0" : : "r"(_imp__IsWow64Process));
}

void _elfimplib_LCMapStringA() asm("LCMapStringA");
void *_imp__LCMapStringA = NULL;
__attribute__((constructor)) void _elfimplib_init_LCMapStringA() {
load_dll_kernel32();
_imp__LCMapStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "LCMapStringA");
}
void _elfimplib_LCMapStringA() {
asm("leave\njmp *%0" : : "r"(_imp__LCMapStringA));
}

void _elfimplib_LCMapStringW() asm("LCMapStringW");
void *_imp__LCMapStringW = NULL;
__attribute__((constructor)) void _elfimplib_init_LCMapStringW() {
load_dll_kernel32();
_imp__LCMapStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "LCMapStringW");
}
void _elfimplib_LCMapStringW() {
asm("leave\njmp *%0" : : "r"(_imp__LCMapStringW));
}

void _elfimplib_LZClose() asm("LZClose");
void *_imp__LZClose = NULL;
__attribute__((constructor)) void _elfimplib_init_LZClose() {
load_dll_kernel32();
_imp__LZClose = (void *) _elf_GetProcAddress(_dll_kernel32, "LZClose");
}
void _elfimplib_LZClose() {
asm("leave\njmp *%0" : : "r"(_imp__LZClose));
}

void _elfimplib_LZCloseFile() asm("LZCloseFile");
void *_imp__LZCloseFile = NULL;
__attribute__((constructor)) void _elfimplib_init_LZCloseFile() {
load_dll_kernel32();
_imp__LZCloseFile = (void *) _elf_GetProcAddress(_dll_kernel32, "LZCloseFile");
}
void _elfimplib_LZCloseFile() {
asm("leave\njmp *%0" : : "r"(_imp__LZCloseFile));
}

void _elfimplib_LZCopy() asm("LZCopy");
void *_imp__LZCopy = NULL;
__attribute__((constructor)) void _elfimplib_init_LZCopy() {
load_dll_kernel32();
_imp__LZCopy = (void *) _elf_GetProcAddress(_dll_kernel32, "LZCopy");
}
void _elfimplib_LZCopy() {
asm("leave\njmp *%0" : : "r"(_imp__LZCopy));
}

void _elfimplib_LZCreateFileW() asm("LZCreateFileW");
void *_imp__LZCreateFileW = NULL;
__attribute__((constructor)) void _elfimplib_init_LZCreateFileW() {
load_dll_kernel32();
_imp__LZCreateFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "LZCreateFileW");
}
void _elfimplib_LZCreateFileW() {
asm("leave\njmp *%0" : : "r"(_imp__LZCreateFileW));
}

void _elfimplib_LZDone() asm("LZDone");
void *_imp__LZDone = NULL;
__attribute__((constructor)) void _elfimplib_init_LZDone() {
load_dll_kernel32();
_imp__LZDone = (void *) _elf_GetProcAddress(_dll_kernel32, "LZDone");
}
void _elfimplib_LZDone() {
asm("leave\njmp *%0" : : "r"(_imp__LZDone));
}

void _elfimplib_LZInit() asm("LZInit");
void *_imp__LZInit = NULL;
__attribute__((constructor)) void _elfimplib_init_LZInit() {
load_dll_kernel32();
_imp__LZInit = (void *) _elf_GetProcAddress(_dll_kernel32, "LZInit");
}
void _elfimplib_LZInit() {
asm("leave\njmp *%0" : : "r"(_imp__LZInit));
}

void _elfimplib_LZOpenFileA() asm("LZOpenFileA");
void *_imp__LZOpenFileA = NULL;
__attribute__((constructor)) void _elfimplib_init_LZOpenFileA() {
load_dll_kernel32();
_imp__LZOpenFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "LZOpenFileA");
}
void _elfimplib_LZOpenFileA() {
asm("leave\njmp *%0" : : "r"(_imp__LZOpenFileA));
}

void _elfimplib_LZOpenFileW() asm("LZOpenFileW");
void *_imp__LZOpenFileW = NULL;
__attribute__((constructor)) void _elfimplib_init_LZOpenFileW() {
load_dll_kernel32();
_imp__LZOpenFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "LZOpenFileW");
}
void _elfimplib_LZOpenFileW() {
asm("leave\njmp *%0" : : "r"(_imp__LZOpenFileW));
}

void _elfimplib_LZRead() asm("LZRead");
void *_imp__LZRead = NULL;
__attribute__((constructor)) void _elfimplib_init_LZRead() {
load_dll_kernel32();
_imp__LZRead = (void *) _elf_GetProcAddress(_dll_kernel32, "LZRead");
}
void _elfimplib_LZRead() {
asm("leave\njmp *%0" : : "r"(_imp__LZRead));
}

void _elfimplib_LZSeek() asm("LZSeek");
void *_imp__LZSeek = NULL;
__attribute__((constructor)) void _elfimplib_init_LZSeek() {
load_dll_kernel32();
_imp__LZSeek = (void *) _elf_GetProcAddress(_dll_kernel32, "LZSeek");
}
void _elfimplib_LZSeek() {
asm("leave\njmp *%0" : : "r"(_imp__LZSeek));
}

void _elfimplib_LZStart() asm("LZStart");
void *_imp__LZStart = NULL;
__attribute__((constructor)) void _elfimplib_init_LZStart() {
load_dll_kernel32();
_imp__LZStart = (void *) _elf_GetProcAddress(_dll_kernel32, "LZStart");
}
void _elfimplib_LZStart() {
asm("leave\njmp *%0" : : "r"(_imp__LZStart));
}

void _elfimplib_LeaveCriticalSection() asm("LeaveCriticalSection");
void *_imp__LeaveCriticalSection = NULL;
__attribute__((constructor)) void _elfimplib_init_LeaveCriticalSection() {
load_dll_kernel32();
_imp__LeaveCriticalSection = (void *) _elf_GetProcAddress(_dll_kernel32, "LeaveCriticalSection");
}
void _elfimplib_LeaveCriticalSection() {
asm("leave\njmp *%0" : : "r"(_imp__LeaveCriticalSection));
}

void _elfimplib_LoadLibraryA() asm("LoadLibraryA");
void *_imp__LoadLibraryA = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadLibraryA() {
load_dll_kernel32();
_imp__LoadLibraryA = (void *) _elf_GetProcAddress(_dll_kernel32, "LoadLibraryA");
}
void _elfimplib_LoadLibraryA() {
asm("leave\njmp *%0" : : "r"(_imp__LoadLibraryA));
}

void _elfimplib_LoadLibraryExA() asm("LoadLibraryExA");
void *_imp__LoadLibraryExA = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadLibraryExA() {
load_dll_kernel32();
_imp__LoadLibraryExA = (void *) _elf_GetProcAddress(_dll_kernel32, "LoadLibraryExA");
}
void _elfimplib_LoadLibraryExA() {
asm("leave\njmp *%0" : : "r"(_imp__LoadLibraryExA));
}

void _elfimplib_LoadLibraryExW() asm("LoadLibraryExW");
void *_imp__LoadLibraryExW = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadLibraryExW() {
load_dll_kernel32();
_imp__LoadLibraryExW = (void *) _elf_GetProcAddress(_dll_kernel32, "LoadLibraryExW");
}
void _elfimplib_LoadLibraryExW() {
asm("leave\njmp *%0" : : "r"(_imp__LoadLibraryExW));
}

void _elfimplib_LoadLibraryW() asm("LoadLibraryW");
void *_imp__LoadLibraryW = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadLibraryW() {
load_dll_kernel32();
_imp__LoadLibraryW = (void *) _elf_GetProcAddress(_dll_kernel32, "LoadLibraryW");
}
void _elfimplib_LoadLibraryW() {
asm("leave\njmp *%0" : : "r"(_imp__LoadLibraryW));
}

void _elfimplib_LoadModule() asm("LoadModule");
void *_imp__LoadModule = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadModule() {
load_dll_kernel32();
_imp__LoadModule = (void *) _elf_GetProcAddress(_dll_kernel32, "LoadModule");
}
void _elfimplib_LoadModule() {
asm("leave\njmp *%0" : : "r"(_imp__LoadModule));
}

void _elfimplib_LoadResource() asm("LoadResource");
void *_imp__LoadResource = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadResource() {
load_dll_kernel32();
_imp__LoadResource = (void *) _elf_GetProcAddress(_dll_kernel32, "LoadResource");
}
void _elfimplib_LoadResource() {
asm("leave\njmp *%0" : : "r"(_imp__LoadResource));
}

void _elfimplib_LocalAlloc() asm("LocalAlloc");
void *_imp__LocalAlloc = NULL;
__attribute__((constructor)) void _elfimplib_init_LocalAlloc() {
load_dll_kernel32();
_imp__LocalAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalAlloc");
}
void _elfimplib_LocalAlloc() {
asm("leave\njmp *%0" : : "r"(_imp__LocalAlloc));
}

void _elfimplib_LocalCompact() asm("LocalCompact");
void *_imp__LocalCompact = NULL;
__attribute__((constructor)) void _elfimplib_init_LocalCompact() {
load_dll_kernel32();
_imp__LocalCompact = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalCompact");
}
void _elfimplib_LocalCompact() {
asm("leave\njmp *%0" : : "r"(_imp__LocalCompact));
}

void _elfimplib_LocalFileTimeToFileTime() asm("LocalFileTimeToFileTime");
void *_imp__LocalFileTimeToFileTime = NULL;
__attribute__((constructor)) void _elfimplib_init_LocalFileTimeToFileTime() {
load_dll_kernel32();
_imp__LocalFileTimeToFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalFileTimeToFileTime");
}
void _elfimplib_LocalFileTimeToFileTime() {
asm("leave\njmp *%0" : : "r"(_imp__LocalFileTimeToFileTime));
}

void _elfimplib_LocalFlags() asm("LocalFlags");
void *_imp__LocalFlags = NULL;
__attribute__((constructor)) void _elfimplib_init_LocalFlags() {
load_dll_kernel32();
_imp__LocalFlags = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalFlags");
}
void _elfimplib_LocalFlags() {
asm("leave\njmp *%0" : : "r"(_imp__LocalFlags));
}

void _elfimplib_LocalFree() asm("LocalFree");
void *_imp__LocalFree = NULL;
__attribute__((constructor)) void _elfimplib_init_LocalFree() {
load_dll_kernel32();
_imp__LocalFree = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalFree");
}
void _elfimplib_LocalFree() {
asm("leave\njmp *%0" : : "r"(_imp__LocalFree));
}

void _elfimplib_LocalHandle() asm("LocalHandle");
void *_imp__LocalHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_LocalHandle() {
load_dll_kernel32();
_imp__LocalHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalHandle");
}
void _elfimplib_LocalHandle() {
asm("leave\njmp *%0" : : "r"(_imp__LocalHandle));
}

void _elfimplib_LocalLock() asm("LocalLock");
void *_imp__LocalLock = NULL;
__attribute__((constructor)) void _elfimplib_init_LocalLock() {
load_dll_kernel32();
_imp__LocalLock = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalLock");
}
void _elfimplib_LocalLock() {
asm("leave\njmp *%0" : : "r"(_imp__LocalLock));
}

void _elfimplib_LocalReAlloc() asm("LocalReAlloc");
void *_imp__LocalReAlloc = NULL;
__attribute__((constructor)) void _elfimplib_init_LocalReAlloc() {
load_dll_kernel32();
_imp__LocalReAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalReAlloc");
}
void _elfimplib_LocalReAlloc() {
asm("leave\njmp *%0" : : "r"(_imp__LocalReAlloc));
}

void _elfimplib_LocalShrink() asm("LocalShrink");
void *_imp__LocalShrink = NULL;
__attribute__((constructor)) void _elfimplib_init_LocalShrink() {
load_dll_kernel32();
_imp__LocalShrink = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalShrink");
}
void _elfimplib_LocalShrink() {
asm("leave\njmp *%0" : : "r"(_imp__LocalShrink));
}

void _elfimplib_LocalSize() asm("LocalSize");
void *_imp__LocalSize = NULL;
__attribute__((constructor)) void _elfimplib_init_LocalSize() {
load_dll_kernel32();
_imp__LocalSize = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalSize");
}
void _elfimplib_LocalSize() {
asm("leave\njmp *%0" : : "r"(_imp__LocalSize));
}

void _elfimplib_LocalUnlock() asm("LocalUnlock");
void *_imp__LocalUnlock = NULL;
__attribute__((constructor)) void _elfimplib_init_LocalUnlock() {
load_dll_kernel32();
_imp__LocalUnlock = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalUnlock");
}
void _elfimplib_LocalUnlock() {
asm("leave\njmp *%0" : : "r"(_imp__LocalUnlock));
}

void _elfimplib_LockFile() asm("LockFile");
void *_imp__LockFile = NULL;
__attribute__((constructor)) void _elfimplib_init_LockFile() {
load_dll_kernel32();
_imp__LockFile = (void *) _elf_GetProcAddress(_dll_kernel32, "LockFile");
}
void _elfimplib_LockFile() {
asm("leave\njmp *%0" : : "r"(_imp__LockFile));
}

void _elfimplib_LockFileEx() asm("LockFileEx");
void *_imp__LockFileEx = NULL;
__attribute__((constructor)) void _elfimplib_init_LockFileEx() {
load_dll_kernel32();
_imp__LockFileEx = (void *) _elf_GetProcAddress(_dll_kernel32, "LockFileEx");
}
void _elfimplib_LockFileEx() {
asm("leave\njmp *%0" : : "r"(_imp__LockFileEx));
}

void _elfimplib_LockResource() asm("LockResource");
void *_imp__LockResource = NULL;
__attribute__((constructor)) void _elfimplib_init_LockResource() {
load_dll_kernel32();
_imp__LockResource = (void *) _elf_GetProcAddress(_dll_kernel32, "LockResource");
}
void _elfimplib_LockResource() {
asm("leave\njmp *%0" : : "r"(_imp__LockResource));
}

void _elfimplib_MapUserPhysicalPages() asm("MapUserPhysicalPages");
void *_imp__MapUserPhysicalPages = NULL;
__attribute__((constructor)) void _elfimplib_init_MapUserPhysicalPages() {
load_dll_kernel32();
_imp__MapUserPhysicalPages = (void *) _elf_GetProcAddress(_dll_kernel32, "MapUserPhysicalPages");
}
void _elfimplib_MapUserPhysicalPages() {
asm("leave\njmp *%0" : : "r"(_imp__MapUserPhysicalPages));
}

void _elfimplib_MapUserPhysicalPagesScatter() asm("MapUserPhysicalPagesScatter");
void *_imp__MapUserPhysicalPagesScatter = NULL;
__attribute__((constructor)) void _elfimplib_init_MapUserPhysicalPagesScatter() {
load_dll_kernel32();
_imp__MapUserPhysicalPagesScatter = (void *) _elf_GetProcAddress(_dll_kernel32, "MapUserPhysicalPagesScatter");
}
void _elfimplib_MapUserPhysicalPagesScatter() {
asm("leave\njmp *%0" : : "r"(_imp__MapUserPhysicalPagesScatter));
}

void _elfimplib_MapViewOfFile() asm("MapViewOfFile");
void *_imp__MapViewOfFile = NULL;
__attribute__((constructor)) void _elfimplib_init_MapViewOfFile() {
load_dll_kernel32();
_imp__MapViewOfFile = (void *) _elf_GetProcAddress(_dll_kernel32, "MapViewOfFile");
}
void _elfimplib_MapViewOfFile() {
asm("leave\njmp *%0" : : "r"(_imp__MapViewOfFile));
}

void _elfimplib_MapViewOfFileEx() asm("MapViewOfFileEx");
void *_imp__MapViewOfFileEx = NULL;
__attribute__((constructor)) void _elfimplib_init_MapViewOfFileEx() {
load_dll_kernel32();
_imp__MapViewOfFileEx = (void *) _elf_GetProcAddress(_dll_kernel32, "MapViewOfFileEx");
}
void _elfimplib_MapViewOfFileEx() {
asm("leave\njmp *%0" : : "r"(_imp__MapViewOfFileEx));
}

void _elfimplib_Module32First() asm("Module32First");
void *_imp__Module32First = NULL;
__attribute__((constructor)) void _elfimplib_init_Module32First() {
load_dll_kernel32();
_imp__Module32First = (void *) _elf_GetProcAddress(_dll_kernel32, "Module32First");
}
void _elfimplib_Module32First() {
asm("leave\njmp *%0" : : "r"(_imp__Module32First));
}

void _elfimplib_Module32FirstW() asm("Module32FirstW");
void *_imp__Module32FirstW = NULL;
__attribute__((constructor)) void _elfimplib_init_Module32FirstW() {
load_dll_kernel32();
_imp__Module32FirstW = (void *) _elf_GetProcAddress(_dll_kernel32, "Module32FirstW");
}
void _elfimplib_Module32FirstW() {
asm("leave\njmp *%0" : : "r"(_imp__Module32FirstW));
}

void _elfimplib_Module32Next() asm("Module32Next");
void *_imp__Module32Next = NULL;
__attribute__((constructor)) void _elfimplib_init_Module32Next() {
load_dll_kernel32();
_imp__Module32Next = (void *) _elf_GetProcAddress(_dll_kernel32, "Module32Next");
}
void _elfimplib_Module32Next() {
asm("leave\njmp *%0" : : "r"(_imp__Module32Next));
}

void _elfimplib_Module32NextW() asm("Module32NextW");
void *_imp__Module32NextW = NULL;
__attribute__((constructor)) void _elfimplib_init_Module32NextW() {
load_dll_kernel32();
_imp__Module32NextW = (void *) _elf_GetProcAddress(_dll_kernel32, "Module32NextW");
}
void _elfimplib_Module32NextW() {
asm("leave\njmp *%0" : : "r"(_imp__Module32NextW));
}

void _elfimplib_MoveFileA() asm("MoveFileA");
void *_imp__MoveFileA = NULL;
__attribute__((constructor)) void _elfimplib_init_MoveFileA() {
load_dll_kernel32();
_imp__MoveFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "MoveFileA");
}
void _elfimplib_MoveFileA() {
asm("leave\njmp *%0" : : "r"(_imp__MoveFileA));
}

void _elfimplib_MoveFileExA() asm("MoveFileExA");
void *_imp__MoveFileExA = NULL;
__attribute__((constructor)) void _elfimplib_init_MoveFileExA() {
load_dll_kernel32();
_imp__MoveFileExA = (void *) _elf_GetProcAddress(_dll_kernel32, "MoveFileExA");
}
void _elfimplib_MoveFileExA() {
asm("leave\njmp *%0" : : "r"(_imp__MoveFileExA));
}

void _elfimplib_MoveFileExW() asm("MoveFileExW");
void *_imp__MoveFileExW = NULL;
__attribute__((constructor)) void _elfimplib_init_MoveFileExW() {
load_dll_kernel32();
_imp__MoveFileExW = (void *) _elf_GetProcAddress(_dll_kernel32, "MoveFileExW");
}
void _elfimplib_MoveFileExW() {
asm("leave\njmp *%0" : : "r"(_imp__MoveFileExW));
}

void _elfimplib_MoveFileW() asm("MoveFileW");
void *_imp__MoveFileW = NULL;
__attribute__((constructor)) void _elfimplib_init_MoveFileW() {
load_dll_kernel32();
_imp__MoveFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "MoveFileW");
}
void _elfimplib_MoveFileW() {
asm("leave\njmp *%0" : : "r"(_imp__MoveFileW));
}

void _elfimplib_MoveFileWithProgressA() asm("MoveFileWithProgressA");
void *_imp__MoveFileWithProgressA = NULL;
__attribute__((constructor)) void _elfimplib_init_MoveFileWithProgressA() {
load_dll_kernel32();
_imp__MoveFileWithProgressA = (void *) _elf_GetProcAddress(_dll_kernel32, "MoveFileWithProgressA");
}
void _elfimplib_MoveFileWithProgressA() {
asm("leave\njmp *%0" : : "r"(_imp__MoveFileWithProgressA));
}

void _elfimplib_MoveFileWithProgressW() asm("MoveFileWithProgressW");
void *_imp__MoveFileWithProgressW = NULL;
__attribute__((constructor)) void _elfimplib_init_MoveFileWithProgressW() {
load_dll_kernel32();
_imp__MoveFileWithProgressW = (void *) _elf_GetProcAddress(_dll_kernel32, "MoveFileWithProgressW");
}
void _elfimplib_MoveFileWithProgressW() {
asm("leave\njmp *%0" : : "r"(_imp__MoveFileWithProgressW));
}

void _elfimplib_MulDiv() asm("MulDiv");
void *_imp__MulDiv = NULL;
__attribute__((constructor)) void _elfimplib_init_MulDiv() {
load_dll_kernel32();
_imp__MulDiv = (void *) _elf_GetProcAddress(_dll_kernel32, "MulDiv");
}
void _elfimplib_MulDiv() {
asm("leave\njmp *%0" : : "r"(_imp__MulDiv));
}

void _elfimplib_MultiByteToWideChar() asm("MultiByteToWideChar");
void *_imp__MultiByteToWideChar = NULL;
__attribute__((constructor)) void _elfimplib_init_MultiByteToWideChar() {
load_dll_kernel32();
_imp__MultiByteToWideChar = (void *) _elf_GetProcAddress(_dll_kernel32, "MultiByteToWideChar");
}
void _elfimplib_MultiByteToWideChar() {
asm("leave\njmp *%0" : : "r"(_imp__MultiByteToWideChar));
}

void _elfimplib_NlsConvertIntegerToString() asm("NlsConvertIntegerToString");
void *_imp__NlsConvertIntegerToString = NULL;
__attribute__((constructor)) void _elfimplib_init_NlsConvertIntegerToString() {
load_dll_kernel32();
_imp__NlsConvertIntegerToString = (void *) _elf_GetProcAddress(_dll_kernel32, "NlsConvertIntegerToString");
}
void _elfimplib_NlsConvertIntegerToString() {
asm("leave\njmp *%0" : : "r"(_imp__NlsConvertIntegerToString));
}

void _elfimplib_NlsGetCacheUpdateCount() asm("NlsGetCacheUpdateCount");
void *_imp__NlsGetCacheUpdateCount = NULL;
__attribute__((constructor)) void _elfimplib_init_NlsGetCacheUpdateCount() {
load_dll_kernel32();
_imp__NlsGetCacheUpdateCount = (void *) _elf_GetProcAddress(_dll_kernel32, "NlsGetCacheUpdateCount");
}
void _elfimplib_NlsGetCacheUpdateCount() {
asm("leave\njmp *%0" : : "r"(_imp__NlsGetCacheUpdateCount));
}

void _elfimplib_NlsResetProcessLocale() asm("NlsResetProcessLocale");
void *_imp__NlsResetProcessLocale = NULL;
__attribute__((constructor)) void _elfimplib_init_NlsResetProcessLocale() {
load_dll_kernel32();
_imp__NlsResetProcessLocale = (void *) _elf_GetProcAddress(_dll_kernel32, "NlsResetProcessLocale");
}
void _elfimplib_NlsResetProcessLocale() {
asm("leave\njmp *%0" : : "r"(_imp__NlsResetProcessLocale));
}

void _elfimplib_NumaVirtualQueryNode() asm("NumaVirtualQueryNode");
void *_imp__NumaVirtualQueryNode = NULL;
__attribute__((constructor)) void _elfimplib_init_NumaVirtualQueryNode() {
load_dll_kernel32();
_imp__NumaVirtualQueryNode = (void *) _elf_GetProcAddress(_dll_kernel32, "NumaVirtualQueryNode");
}
void _elfimplib_NumaVirtualQueryNode() {
asm("leave\njmp *%0" : : "r"(_imp__NumaVirtualQueryNode));
}

void _elfimplib_OpenConsoleW() asm("OpenConsoleW");
void *_imp__OpenConsoleW = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenConsoleW() {
load_dll_kernel32();
_imp__OpenConsoleW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenConsoleW");
}
void _elfimplib_OpenConsoleW() {
asm("leave\njmp *%0" : : "r"(_imp__OpenConsoleW));
}

void _elfimplib_OpenDataFile() asm("OpenDataFile");
void *_imp__OpenDataFile = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenDataFile() {
load_dll_kernel32();
_imp__OpenDataFile = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenDataFile");
}
void _elfimplib_OpenDataFile() {
asm("leave\njmp *%0" : : "r"(_imp__OpenDataFile));
}

void _elfimplib_OpenEventA() asm("OpenEventA");
void *_imp__OpenEventA = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenEventA() {
load_dll_kernel32();
_imp__OpenEventA = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenEventA");
}
void _elfimplib_OpenEventA() {
asm("leave\njmp *%0" : : "r"(_imp__OpenEventA));
}

void _elfimplib_OpenEventW() asm("OpenEventW");
void *_imp__OpenEventW = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenEventW() {
load_dll_kernel32();
_imp__OpenEventW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenEventW");
}
void _elfimplib_OpenEventW() {
asm("leave\njmp *%0" : : "r"(_imp__OpenEventW));
}

void _elfimplib_OpenFile() asm("OpenFile");
void *_imp__OpenFile = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenFile() {
load_dll_kernel32();
_imp__OpenFile = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenFile");
}
void _elfimplib_OpenFile() {
asm("leave\njmp *%0" : : "r"(_imp__OpenFile));
}

void _elfimplib_OpenFileMappingA() asm("OpenFileMappingA");
void *_imp__OpenFileMappingA = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenFileMappingA() {
load_dll_kernel32();
_imp__OpenFileMappingA = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenFileMappingA");
}
void _elfimplib_OpenFileMappingA() {
asm("leave\njmp *%0" : : "r"(_imp__OpenFileMappingA));
}

void _elfimplib_OpenFileMappingW() asm("OpenFileMappingW");
void *_imp__OpenFileMappingW = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenFileMappingW() {
load_dll_kernel32();
_imp__OpenFileMappingW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenFileMappingW");
}
void _elfimplib_OpenFileMappingW() {
asm("leave\njmp *%0" : : "r"(_imp__OpenFileMappingW));
}

void _elfimplib_OpenJobObjectA() asm("OpenJobObjectA");
void *_imp__OpenJobObjectA = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenJobObjectA() {
load_dll_kernel32();
_imp__OpenJobObjectA = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenJobObjectA");
}
void _elfimplib_OpenJobObjectA() {
asm("leave\njmp *%0" : : "r"(_imp__OpenJobObjectA));
}

void _elfimplib_OpenJobObjectW() asm("OpenJobObjectW");
void *_imp__OpenJobObjectW = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenJobObjectW() {
load_dll_kernel32();
_imp__OpenJobObjectW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenJobObjectW");
}
void _elfimplib_OpenJobObjectW() {
asm("leave\njmp *%0" : : "r"(_imp__OpenJobObjectW));
}

void _elfimplib_OpenMutexA() asm("OpenMutexA");
void *_imp__OpenMutexA = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenMutexA() {
load_dll_kernel32();
_imp__OpenMutexA = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenMutexA");
}
void _elfimplib_OpenMutexA() {
asm("leave\njmp *%0" : : "r"(_imp__OpenMutexA));
}

void _elfimplib_OpenMutexW() asm("OpenMutexW");
void *_imp__OpenMutexW = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenMutexW() {
load_dll_kernel32();
_imp__OpenMutexW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenMutexW");
}
void _elfimplib_OpenMutexW() {
asm("leave\njmp *%0" : : "r"(_imp__OpenMutexW));
}

void _elfimplib_OpenProcess() asm("OpenProcess");
void *_imp__OpenProcess = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenProcess() {
load_dll_kernel32();
_imp__OpenProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenProcess");
}
void _elfimplib_OpenProcess() {
asm("leave\njmp *%0" : : "r"(_imp__OpenProcess));
}

void _elfimplib_OpenProfileUserMapping() asm("OpenProfileUserMapping");
void *_imp__OpenProfileUserMapping = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenProfileUserMapping() {
load_dll_kernel32();
_imp__OpenProfileUserMapping = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenProfileUserMapping");
}
void _elfimplib_OpenProfileUserMapping() {
asm("leave\njmp *%0" : : "r"(_imp__OpenProfileUserMapping));
}

void _elfimplib_OpenSemaphoreA() asm("OpenSemaphoreA");
void *_imp__OpenSemaphoreA = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenSemaphoreA() {
load_dll_kernel32();
_imp__OpenSemaphoreA = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenSemaphoreA");
}
void _elfimplib_OpenSemaphoreA() {
asm("leave\njmp *%0" : : "r"(_imp__OpenSemaphoreA));
}

void _elfimplib_OpenSemaphoreW() asm("OpenSemaphoreW");
void *_imp__OpenSemaphoreW = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenSemaphoreW() {
load_dll_kernel32();
_imp__OpenSemaphoreW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenSemaphoreW");
}
void _elfimplib_OpenSemaphoreW() {
asm("leave\njmp *%0" : : "r"(_imp__OpenSemaphoreW));
}

void _elfimplib_OpenThread() asm("OpenThread");
void *_imp__OpenThread = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenThread() {
load_dll_kernel32();
_imp__OpenThread = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenThread");
}
void _elfimplib_OpenThread() {
asm("leave\njmp *%0" : : "r"(_imp__OpenThread));
}

void _elfimplib_OpenWaitableTimerA() asm("OpenWaitableTimerA");
void *_imp__OpenWaitableTimerA = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenWaitableTimerA() {
load_dll_kernel32();
_imp__OpenWaitableTimerA = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenWaitableTimerA");
}
void _elfimplib_OpenWaitableTimerA() {
asm("leave\njmp *%0" : : "r"(_imp__OpenWaitableTimerA));
}

void _elfimplib_OpenWaitableTimerW() asm("OpenWaitableTimerW");
void *_imp__OpenWaitableTimerW = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenWaitableTimerW() {
load_dll_kernel32();
_imp__OpenWaitableTimerW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenWaitableTimerW");
}
void _elfimplib_OpenWaitableTimerW() {
asm("leave\njmp *%0" : : "r"(_imp__OpenWaitableTimerW));
}

void _elfimplib_OutputDebugStringA() asm("OutputDebugStringA");
void *_imp__OutputDebugStringA = NULL;
__attribute__((constructor)) void _elfimplib_init_OutputDebugStringA() {
load_dll_kernel32();
_imp__OutputDebugStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "OutputDebugStringA");
}
void _elfimplib_OutputDebugStringA() {
asm("leave\njmp *%0" : : "r"(_imp__OutputDebugStringA));
}

void _elfimplib_OutputDebugStringW() asm("OutputDebugStringW");
void *_imp__OutputDebugStringW = NULL;
__attribute__((constructor)) void _elfimplib_init_OutputDebugStringW() {
load_dll_kernel32();
_imp__OutputDebugStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "OutputDebugStringW");
}
void _elfimplib_OutputDebugStringW() {
asm("leave\njmp *%0" : : "r"(_imp__OutputDebugStringW));
}

void _elfimplib_PeekConsoleInputA() asm("PeekConsoleInputA");
void *_imp__PeekConsoleInputA = NULL;
__attribute__((constructor)) void _elfimplib_init_PeekConsoleInputA() {
load_dll_kernel32();
_imp__PeekConsoleInputA = (void *) _elf_GetProcAddress(_dll_kernel32, "PeekConsoleInputA");
}
void _elfimplib_PeekConsoleInputA() {
asm("leave\njmp *%0" : : "r"(_imp__PeekConsoleInputA));
}

void _elfimplib_PeekConsoleInputW() asm("PeekConsoleInputW");
void *_imp__PeekConsoleInputW = NULL;
__attribute__((constructor)) void _elfimplib_init_PeekConsoleInputW() {
load_dll_kernel32();
_imp__PeekConsoleInputW = (void *) _elf_GetProcAddress(_dll_kernel32, "PeekConsoleInputW");
}
void _elfimplib_PeekConsoleInputW() {
asm("leave\njmp *%0" : : "r"(_imp__PeekConsoleInputW));
}

void _elfimplib_PeekNamedPipe() asm("PeekNamedPipe");
void *_imp__PeekNamedPipe = NULL;
__attribute__((constructor)) void _elfimplib_init_PeekNamedPipe() {
load_dll_kernel32();
_imp__PeekNamedPipe = (void *) _elf_GetProcAddress(_dll_kernel32, "PeekNamedPipe");
}
void _elfimplib_PeekNamedPipe() {
asm("leave\njmp *%0" : : "r"(_imp__PeekNamedPipe));
}

void _elfimplib_PostQueuedCompletionStatus() asm("PostQueuedCompletionStatus");
void *_imp__PostQueuedCompletionStatus = NULL;
__attribute__((constructor)) void _elfimplib_init_PostQueuedCompletionStatus() {
load_dll_kernel32();
_imp__PostQueuedCompletionStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "PostQueuedCompletionStatus");
}
void _elfimplib_PostQueuedCompletionStatus() {
asm("leave\njmp *%0" : : "r"(_imp__PostQueuedCompletionStatus));
}

void _elfimplib_PrepareTape() asm("PrepareTape");
void *_imp__PrepareTape = NULL;
__attribute__((constructor)) void _elfimplib_init_PrepareTape() {
load_dll_kernel32();
_imp__PrepareTape = (void *) _elf_GetProcAddress(_dll_kernel32, "PrepareTape");
}
void _elfimplib_PrepareTape() {
asm("leave\njmp *%0" : : "r"(_imp__PrepareTape));
}

void _elfimplib_PrivCopyFileExW() asm("PrivCopyFileExW");
void *_imp__PrivCopyFileExW = NULL;
__attribute__((constructor)) void _elfimplib_init_PrivCopyFileExW() {
load_dll_kernel32();
_imp__PrivCopyFileExW = (void *) _elf_GetProcAddress(_dll_kernel32, "PrivCopyFileExW");
}
void _elfimplib_PrivCopyFileExW() {
asm("leave\njmp *%0" : : "r"(_imp__PrivCopyFileExW));
}

void _elfimplib_PrivMoveFileIdentityW() asm("PrivMoveFileIdentityW");
void *_imp__PrivMoveFileIdentityW = NULL;
__attribute__((constructor)) void _elfimplib_init_PrivMoveFileIdentityW() {
load_dll_kernel32();
_imp__PrivMoveFileIdentityW = (void *) _elf_GetProcAddress(_dll_kernel32, "PrivMoveFileIdentityW");
}
void _elfimplib_PrivMoveFileIdentityW() {
asm("leave\njmp *%0" : : "r"(_imp__PrivMoveFileIdentityW));
}

void _elfimplib_Process32First() asm("Process32First");
void *_imp__Process32First = NULL;
__attribute__((constructor)) void _elfimplib_init_Process32First() {
load_dll_kernel32();
_imp__Process32First = (void *) _elf_GetProcAddress(_dll_kernel32, "Process32First");
}
void _elfimplib_Process32First() {
asm("leave\njmp *%0" : : "r"(_imp__Process32First));
}

void _elfimplib_Process32FirstW() asm("Process32FirstW");
void *_imp__Process32FirstW = NULL;
__attribute__((constructor)) void _elfimplib_init_Process32FirstW() {
load_dll_kernel32();
_imp__Process32FirstW = (void *) _elf_GetProcAddress(_dll_kernel32, "Process32FirstW");
}
void _elfimplib_Process32FirstW() {
asm("leave\njmp *%0" : : "r"(_imp__Process32FirstW));
}

void _elfimplib_Process32Next() asm("Process32Next");
void *_imp__Process32Next = NULL;
__attribute__((constructor)) void _elfimplib_init_Process32Next() {
load_dll_kernel32();
_imp__Process32Next = (void *) _elf_GetProcAddress(_dll_kernel32, "Process32Next");
}
void _elfimplib_Process32Next() {
asm("leave\njmp *%0" : : "r"(_imp__Process32Next));
}

void _elfimplib_Process32NextW() asm("Process32NextW");
void *_imp__Process32NextW = NULL;
__attribute__((constructor)) void _elfimplib_init_Process32NextW() {
load_dll_kernel32();
_imp__Process32NextW = (void *) _elf_GetProcAddress(_dll_kernel32, "Process32NextW");
}
void _elfimplib_Process32NextW() {
asm("leave\njmp *%0" : : "r"(_imp__Process32NextW));
}

void _elfimplib_ProcessIdToSessionId() asm("ProcessIdToSessionId");
void *_imp__ProcessIdToSessionId = NULL;
__attribute__((constructor)) void _elfimplib_init_ProcessIdToSessionId() {
load_dll_kernel32();
_imp__ProcessIdToSessionId = (void *) _elf_GetProcAddress(_dll_kernel32, "ProcessIdToSessionId");
}
void _elfimplib_ProcessIdToSessionId() {
asm("leave\njmp *%0" : : "r"(_imp__ProcessIdToSessionId));
}

void _elfimplib_PulseEvent() asm("PulseEvent");
void *_imp__PulseEvent = NULL;
__attribute__((constructor)) void _elfimplib_init_PulseEvent() {
load_dll_kernel32();
_imp__PulseEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "PulseEvent");
}
void _elfimplib_PulseEvent() {
asm("leave\njmp *%0" : : "r"(_imp__PulseEvent));
}

void _elfimplib_PurgeComm() asm("PurgeComm");
void *_imp__PurgeComm = NULL;
__attribute__((constructor)) void _elfimplib_init_PurgeComm() {
load_dll_kernel32();
_imp__PurgeComm = (void *) _elf_GetProcAddress(_dll_kernel32, "PurgeComm");
}
void _elfimplib_PurgeComm() {
asm("leave\njmp *%0" : : "r"(_imp__PurgeComm));
}

void _elfimplib_QueryActCtxW() asm("QueryActCtxW");
void *_imp__QueryActCtxW = NULL;
__attribute__((constructor)) void _elfimplib_init_QueryActCtxW() {
load_dll_kernel32();
_imp__QueryActCtxW = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryActCtxW");
}
void _elfimplib_QueryActCtxW() {
asm("leave\njmp *%0" : : "r"(_imp__QueryActCtxW));
}

void _elfimplib_QueryDepthSList() asm("QueryDepthSList");
void *_imp__QueryDepthSList = NULL;
__attribute__((constructor)) void _elfimplib_init_QueryDepthSList() {
load_dll_kernel32();
_imp__QueryDepthSList = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryDepthSList");
}
void _elfimplib_QueryDepthSList() {
asm("leave\njmp *%0" : : "r"(_imp__QueryDepthSList));
}

void _elfimplib_QueryDosDeviceA() asm("QueryDosDeviceA");
void *_imp__QueryDosDeviceA = NULL;
__attribute__((constructor)) void _elfimplib_init_QueryDosDeviceA() {
load_dll_kernel32();
_imp__QueryDosDeviceA = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryDosDeviceA");
}
void _elfimplib_QueryDosDeviceA() {
asm("leave\njmp *%0" : : "r"(_imp__QueryDosDeviceA));
}

void _elfimplib_QueryDosDeviceW() asm("QueryDosDeviceW");
void *_imp__QueryDosDeviceW = NULL;
__attribute__((constructor)) void _elfimplib_init_QueryDosDeviceW() {
load_dll_kernel32();
_imp__QueryDosDeviceW = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryDosDeviceW");
}
void _elfimplib_QueryDosDeviceW() {
asm("leave\njmp *%0" : : "r"(_imp__QueryDosDeviceW));
}

void _elfimplib_QueryInformationJobObject() asm("QueryInformationJobObject");
void *_imp__QueryInformationJobObject = NULL;
__attribute__((constructor)) void _elfimplib_init_QueryInformationJobObject() {
load_dll_kernel32();
_imp__QueryInformationJobObject = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryInformationJobObject");
}
void _elfimplib_QueryInformationJobObject() {
asm("leave\njmp *%0" : : "r"(_imp__QueryInformationJobObject));
}

void _elfimplib_QueryMemoryResourceNotification() asm("QueryMemoryResourceNotification");
void *_imp__QueryMemoryResourceNotification = NULL;
__attribute__((constructor)) void _elfimplib_init_QueryMemoryResourceNotification() {
load_dll_kernel32();
_imp__QueryMemoryResourceNotification = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryMemoryResourceNotification");
}
void _elfimplib_QueryMemoryResourceNotification() {
asm("leave\njmp *%0" : : "r"(_imp__QueryMemoryResourceNotification));
}

void _elfimplib_QueryPerformanceCounter() asm("QueryPerformanceCounter");
void *_imp__QueryPerformanceCounter = NULL;
__attribute__((constructor)) void _elfimplib_init_QueryPerformanceCounter() {
load_dll_kernel32();
_imp__QueryPerformanceCounter = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryPerformanceCounter");
}
void _elfimplib_QueryPerformanceCounter() {
asm("leave\njmp *%0" : : "r"(_imp__QueryPerformanceCounter));
}

void _elfimplib_QueryPerformanceFrequency() asm("QueryPerformanceFrequency");
void *_imp__QueryPerformanceFrequency = NULL;
__attribute__((constructor)) void _elfimplib_init_QueryPerformanceFrequency() {
load_dll_kernel32();
_imp__QueryPerformanceFrequency = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryPerformanceFrequency");
}
void _elfimplib_QueryPerformanceFrequency() {
asm("leave\njmp *%0" : : "r"(_imp__QueryPerformanceFrequency));
}

void _elfimplib_QueryWin31IniFilesMappedToRegistry() asm("QueryWin31IniFilesMappedToRegistry");
void *_imp__QueryWin31IniFilesMappedToRegistry = NULL;
__attribute__((constructor)) void _elfimplib_init_QueryWin31IniFilesMappedToRegistry() {
load_dll_kernel32();
_imp__QueryWin31IniFilesMappedToRegistry = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryWin31IniFilesMappedToRegistry");
}
void _elfimplib_QueryWin31IniFilesMappedToRegistry() {
asm("leave\njmp *%0" : : "r"(_imp__QueryWin31IniFilesMappedToRegistry));
}

void _elfimplib_QueueUserAPC() asm("QueueUserAPC");
void *_imp__QueueUserAPC = NULL;
__attribute__((constructor)) void _elfimplib_init_QueueUserAPC() {
load_dll_kernel32();
_imp__QueueUserAPC = (void *) _elf_GetProcAddress(_dll_kernel32, "QueueUserAPC");
}
void _elfimplib_QueueUserAPC() {
asm("leave\njmp *%0" : : "r"(_imp__QueueUserAPC));
}

void _elfimplib_QueueUserWorkItem() asm("QueueUserWorkItem");
void *_imp__QueueUserWorkItem = NULL;
__attribute__((constructor)) void _elfimplib_init_QueueUserWorkItem() {
load_dll_kernel32();
_imp__QueueUserWorkItem = (void *) _elf_GetProcAddress(_dll_kernel32, "QueueUserWorkItem");
}
void _elfimplib_QueueUserWorkItem() {
asm("leave\njmp *%0" : : "r"(_imp__QueueUserWorkItem));
}

void _elfimplib_RaiseException() asm("RaiseException");
void *_imp__RaiseException = NULL;
__attribute__((constructor)) void _elfimplib_init_RaiseException() {
load_dll_kernel32();
_imp__RaiseException = (void *) _elf_GetProcAddress(_dll_kernel32, "RaiseException");
}
void _elfimplib_RaiseException() {
asm("leave\njmp *%0" : : "r"(_imp__RaiseException));
}

void _elfimplib_ReadConsoleA() asm("ReadConsoleA");
void *_imp__ReadConsoleA = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadConsoleA() {
load_dll_kernel32();
_imp__ReadConsoleA = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleA");
}
void _elfimplib_ReadConsoleA() {
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleA));
}

void _elfimplib_ReadConsoleInputA() asm("ReadConsoleInputA");
void *_imp__ReadConsoleInputA = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadConsoleInputA() {
load_dll_kernel32();
_imp__ReadConsoleInputA = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleInputA");
}
void _elfimplib_ReadConsoleInputA() {
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleInputA));
}

void _elfimplib_ReadConsoleInputExA() asm("ReadConsoleInputExA");
void *_imp__ReadConsoleInputExA = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadConsoleInputExA() {
load_dll_kernel32();
_imp__ReadConsoleInputExA = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleInputExA");
}
void _elfimplib_ReadConsoleInputExA() {
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleInputExA));
}

void _elfimplib_ReadConsoleInputExW() asm("ReadConsoleInputExW");
void *_imp__ReadConsoleInputExW = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadConsoleInputExW() {
load_dll_kernel32();
_imp__ReadConsoleInputExW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleInputExW");
}
void _elfimplib_ReadConsoleInputExW() {
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleInputExW));
}

void _elfimplib_ReadConsoleInputW() asm("ReadConsoleInputW");
void *_imp__ReadConsoleInputW = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadConsoleInputW() {
load_dll_kernel32();
_imp__ReadConsoleInputW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleInputW");
}
void _elfimplib_ReadConsoleInputW() {
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleInputW));
}

void _elfimplib_ReadConsoleOutputA() asm("ReadConsoleOutputA");
void *_imp__ReadConsoleOutputA = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadConsoleOutputA() {
load_dll_kernel32();
_imp__ReadConsoleOutputA = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleOutputA");
}
void _elfimplib_ReadConsoleOutputA() {
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleOutputA));
}

void _elfimplib_ReadConsoleOutputAttribute() asm("ReadConsoleOutputAttribute");
void *_imp__ReadConsoleOutputAttribute = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadConsoleOutputAttribute() {
load_dll_kernel32();
_imp__ReadConsoleOutputAttribute = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleOutputAttribute");
}
void _elfimplib_ReadConsoleOutputAttribute() {
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleOutputAttribute));
}

void _elfimplib_ReadConsoleOutputCharacterA() asm("ReadConsoleOutputCharacterA");
void *_imp__ReadConsoleOutputCharacterA = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadConsoleOutputCharacterA() {
load_dll_kernel32();
_imp__ReadConsoleOutputCharacterA = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleOutputCharacterA");
}
void _elfimplib_ReadConsoleOutputCharacterA() {
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleOutputCharacterA));
}

void _elfimplib_ReadConsoleOutputCharacterW() asm("ReadConsoleOutputCharacterW");
void *_imp__ReadConsoleOutputCharacterW = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadConsoleOutputCharacterW() {
load_dll_kernel32();
_imp__ReadConsoleOutputCharacterW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleOutputCharacterW");
}
void _elfimplib_ReadConsoleOutputCharacterW() {
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleOutputCharacterW));
}

void _elfimplib_ReadConsoleOutputW() asm("ReadConsoleOutputW");
void *_imp__ReadConsoleOutputW = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadConsoleOutputW() {
load_dll_kernel32();
_imp__ReadConsoleOutputW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleOutputW");
}
void _elfimplib_ReadConsoleOutputW() {
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleOutputW));
}

void _elfimplib_ReadConsoleW() asm("ReadConsoleW");
void *_imp__ReadConsoleW = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadConsoleW() {
load_dll_kernel32();
_imp__ReadConsoleW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleW");
}
void _elfimplib_ReadConsoleW() {
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleW));
}

void _elfimplib_ReadDirectoryChangesW() asm("ReadDirectoryChangesW");
void *_imp__ReadDirectoryChangesW = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadDirectoryChangesW() {
load_dll_kernel32();
_imp__ReadDirectoryChangesW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadDirectoryChangesW");
}
void _elfimplib_ReadDirectoryChangesW() {
asm("leave\njmp *%0" : : "r"(_imp__ReadDirectoryChangesW));
}

void _elfimplib_ReadFile() asm("ReadFile");
void *_imp__ReadFile = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadFile() {
load_dll_kernel32();
_imp__ReadFile = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadFile");
}
void _elfimplib_ReadFile() {
asm("leave\njmp *%0" : : "r"(_imp__ReadFile));
}

void _elfimplib_ReadFileEx() asm("ReadFileEx");
void *_imp__ReadFileEx = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadFileEx() {
load_dll_kernel32();
_imp__ReadFileEx = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadFileEx");
}
void _elfimplib_ReadFileEx() {
asm("leave\njmp *%0" : : "r"(_imp__ReadFileEx));
}

void _elfimplib_ReadFileScatter() asm("ReadFileScatter");
void *_imp__ReadFileScatter = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadFileScatter() {
load_dll_kernel32();
_imp__ReadFileScatter = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadFileScatter");
}
void _elfimplib_ReadFileScatter() {
asm("leave\njmp *%0" : : "r"(_imp__ReadFileScatter));
}

void _elfimplib_ReadProcessMemory() asm("ReadProcessMemory");
void *_imp__ReadProcessMemory = NULL;
__attribute__((constructor)) void _elfimplib_init_ReadProcessMemory() {
load_dll_kernel32();
_imp__ReadProcessMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadProcessMemory");
}
void _elfimplib_ReadProcessMemory() {
asm("leave\njmp *%0" : : "r"(_imp__ReadProcessMemory));
}

void _elfimplib_RegisterConsoleIME() asm("RegisterConsoleIME");
void *_imp__RegisterConsoleIME = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterConsoleIME() {
load_dll_kernel32();
_imp__RegisterConsoleIME = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterConsoleIME");
}
void _elfimplib_RegisterConsoleIME() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterConsoleIME));
}

void _elfimplib_RegisterConsoleOS2() asm("RegisterConsoleOS2");
void *_imp__RegisterConsoleOS2 = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterConsoleOS2() {
load_dll_kernel32();
_imp__RegisterConsoleOS2 = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterConsoleOS2");
}
void _elfimplib_RegisterConsoleOS2() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterConsoleOS2));
}

void _elfimplib_RegisterConsoleVDM() asm("RegisterConsoleVDM");
void *_imp__RegisterConsoleVDM = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterConsoleVDM() {
load_dll_kernel32();
_imp__RegisterConsoleVDM = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterConsoleVDM");
}
void _elfimplib_RegisterConsoleVDM() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterConsoleVDM));
}

void _elfimplib_RegisterWaitForInputIdle() asm("RegisterWaitForInputIdle");
void *_imp__RegisterWaitForInputIdle = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterWaitForInputIdle() {
load_dll_kernel32();
_imp__RegisterWaitForInputIdle = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterWaitForInputIdle");
}
void _elfimplib_RegisterWaitForInputIdle() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterWaitForInputIdle));
}

void _elfimplib_RegisterWaitForSingleObject() asm("RegisterWaitForSingleObject");
void *_imp__RegisterWaitForSingleObject = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterWaitForSingleObject() {
load_dll_kernel32();
_imp__RegisterWaitForSingleObject = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterWaitForSingleObject");
}
void _elfimplib_RegisterWaitForSingleObject() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterWaitForSingleObject));
}

void _elfimplib_RegisterWaitForSingleObjectEx() asm("RegisterWaitForSingleObjectEx");
void *_imp__RegisterWaitForSingleObjectEx = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterWaitForSingleObjectEx() {
load_dll_kernel32();
_imp__RegisterWaitForSingleObjectEx = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterWaitForSingleObjectEx");
}
void _elfimplib_RegisterWaitForSingleObjectEx() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterWaitForSingleObjectEx));
}

void _elfimplib_RegisterWowBaseHandlers() asm("RegisterWowBaseHandlers");
void *_imp__RegisterWowBaseHandlers = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterWowBaseHandlers() {
load_dll_kernel32();
_imp__RegisterWowBaseHandlers = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterWowBaseHandlers");
}
void _elfimplib_RegisterWowBaseHandlers() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterWowBaseHandlers));
}

void _elfimplib_RegisterWowExec() asm("RegisterWowExec");
void *_imp__RegisterWowExec = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterWowExec() {
load_dll_kernel32();
_imp__RegisterWowExec = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterWowExec");
}
void _elfimplib_RegisterWowExec() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterWowExec));
}

void _elfimplib_ReleaseActCtx() asm("ReleaseActCtx");
void *_imp__ReleaseActCtx = NULL;
__attribute__((constructor)) void _elfimplib_init_ReleaseActCtx() {
load_dll_kernel32();
_imp__ReleaseActCtx = (void *) _elf_GetProcAddress(_dll_kernel32, "ReleaseActCtx");
}
void _elfimplib_ReleaseActCtx() {
asm("leave\njmp *%0" : : "r"(_imp__ReleaseActCtx));
}

void _elfimplib_ReleaseMutex() asm("ReleaseMutex");
void *_imp__ReleaseMutex = NULL;
__attribute__((constructor)) void _elfimplib_init_ReleaseMutex() {
load_dll_kernel32();
_imp__ReleaseMutex = (void *) _elf_GetProcAddress(_dll_kernel32, "ReleaseMutex");
}
void _elfimplib_ReleaseMutex() {
asm("leave\njmp *%0" : : "r"(_imp__ReleaseMutex));
}

void _elfimplib_ReleaseSemaphore() asm("ReleaseSemaphore");
void *_imp__ReleaseSemaphore = NULL;
__attribute__((constructor)) void _elfimplib_init_ReleaseSemaphore() {
load_dll_kernel32();
_imp__ReleaseSemaphore = (void *) _elf_GetProcAddress(_dll_kernel32, "ReleaseSemaphore");
}
void _elfimplib_ReleaseSemaphore() {
asm("leave\njmp *%0" : : "r"(_imp__ReleaseSemaphore));
}

void _elfimplib_RemoveDirectoryA() asm("RemoveDirectoryA");
void *_imp__RemoveDirectoryA = NULL;
__attribute__((constructor)) void _elfimplib_init_RemoveDirectoryA() {
load_dll_kernel32();
_imp__RemoveDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "RemoveDirectoryA");
}
void _elfimplib_RemoveDirectoryA() {
asm("leave\njmp *%0" : : "r"(_imp__RemoveDirectoryA));
}

void _elfimplib_RemoveDirectoryW() asm("RemoveDirectoryW");
void *_imp__RemoveDirectoryW = NULL;
__attribute__((constructor)) void _elfimplib_init_RemoveDirectoryW() {
load_dll_kernel32();
_imp__RemoveDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "RemoveDirectoryW");
}
void _elfimplib_RemoveDirectoryW() {
asm("leave\njmp *%0" : : "r"(_imp__RemoveDirectoryW));
}

void _elfimplib_RemoveLocalAlternateComputerNameA() asm("RemoveLocalAlternateComputerNameA");
void *_imp__RemoveLocalAlternateComputerNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_RemoveLocalAlternateComputerNameA() {
load_dll_kernel32();
_imp__RemoveLocalAlternateComputerNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "RemoveLocalAlternateComputerNameA");
}
void _elfimplib_RemoveLocalAlternateComputerNameA() {
asm("leave\njmp *%0" : : "r"(_imp__RemoveLocalAlternateComputerNameA));
}

void _elfimplib_RemoveLocalAlternateComputerNameW() asm("RemoveLocalAlternateComputerNameW");
void *_imp__RemoveLocalAlternateComputerNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_RemoveLocalAlternateComputerNameW() {
load_dll_kernel32();
_imp__RemoveLocalAlternateComputerNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "RemoveLocalAlternateComputerNameW");
}
void _elfimplib_RemoveLocalAlternateComputerNameW() {
asm("leave\njmp *%0" : : "r"(_imp__RemoveLocalAlternateComputerNameW));
}

void _elfimplib_RemoveVectoredExceptionHandler() asm("RemoveVectoredExceptionHandler");
void *_imp__RemoveVectoredExceptionHandler = NULL;
__attribute__((constructor)) void _elfimplib_init_RemoveVectoredExceptionHandler() {
load_dll_kernel32();
_imp__RemoveVectoredExceptionHandler = (void *) _elf_GetProcAddress(_dll_kernel32, "RemoveVectoredExceptionHandler");
}
void _elfimplib_RemoveVectoredExceptionHandler() {
asm("leave\njmp *%0" : : "r"(_imp__RemoveVectoredExceptionHandler));
}

void _elfimplib_ReplaceFile() asm("ReplaceFile");
void *_imp__ReplaceFile = NULL;
__attribute__((constructor)) void _elfimplib_init_ReplaceFile() {
load_dll_kernel32();
_imp__ReplaceFile = (void *) _elf_GetProcAddress(_dll_kernel32, "ReplaceFile");
}
void _elfimplib_ReplaceFile() {
asm("leave\njmp *%0" : : "r"(_imp__ReplaceFile));
}

void _elfimplib_ReplaceFileA() asm("ReplaceFileA");
void *_imp__ReplaceFileA = NULL;
__attribute__((constructor)) void _elfimplib_init_ReplaceFileA() {
load_dll_kernel32();
_imp__ReplaceFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "ReplaceFileA");
}
void _elfimplib_ReplaceFileA() {
asm("leave\njmp *%0" : : "r"(_imp__ReplaceFileA));
}

void _elfimplib_ReplaceFileW() asm("ReplaceFileW");
void *_imp__ReplaceFileW = NULL;
__attribute__((constructor)) void _elfimplib_init_ReplaceFileW() {
load_dll_kernel32();
_imp__ReplaceFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReplaceFileW");
}
void _elfimplib_ReplaceFileW() {
asm("leave\njmp *%0" : : "r"(_imp__ReplaceFileW));
}

void _elfimplib_RequestDeviceWakeup() asm("RequestDeviceWakeup");
void *_imp__RequestDeviceWakeup = NULL;
__attribute__((constructor)) void _elfimplib_init_RequestDeviceWakeup() {
load_dll_kernel32();
_imp__RequestDeviceWakeup = (void *) _elf_GetProcAddress(_dll_kernel32, "RequestDeviceWakeup");
}
void _elfimplib_RequestDeviceWakeup() {
asm("leave\njmp *%0" : : "r"(_imp__RequestDeviceWakeup));
}

void _elfimplib_RequestWakeupLatency() asm("RequestWakeupLatency");
void *_imp__RequestWakeupLatency = NULL;
__attribute__((constructor)) void _elfimplib_init_RequestWakeupLatency() {
load_dll_kernel32();
_imp__RequestWakeupLatency = (void *) _elf_GetProcAddress(_dll_kernel32, "RequestWakeupLatency");
}
void _elfimplib_RequestWakeupLatency() {
asm("leave\njmp *%0" : : "r"(_imp__RequestWakeupLatency));
}

void _elfimplib_ResetEvent() asm("ResetEvent");
void *_imp__ResetEvent = NULL;
__attribute__((constructor)) void _elfimplib_init_ResetEvent() {
load_dll_kernel32();
_imp__ResetEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "ResetEvent");
}
void _elfimplib_ResetEvent() {
asm("leave\njmp *%0" : : "r"(_imp__ResetEvent));
}

void _elfimplib_ResetWriteWatch() asm("ResetWriteWatch");
void *_imp__ResetWriteWatch = NULL;
__attribute__((constructor)) void _elfimplib_init_ResetWriteWatch() {
load_dll_kernel32();
_imp__ResetWriteWatch = (void *) _elf_GetProcAddress(_dll_kernel32, "ResetWriteWatch");
}
void _elfimplib_ResetWriteWatch() {
asm("leave\njmp *%0" : : "r"(_imp__ResetWriteWatch));
}

void _elfimplib_RestoreLastError() asm("RestoreLastError");
void *_imp__RestoreLastError = NULL;
__attribute__((constructor)) void _elfimplib_init_RestoreLastError() {
load_dll_kernel32();
_imp__RestoreLastError = (void *) _elf_GetProcAddress(_dll_kernel32, "RestoreLastError");
}
void _elfimplib_RestoreLastError() {
asm("leave\njmp *%0" : : "r"(_imp__RestoreLastError));
}

void _elfimplib_ResumeThread() asm("ResumeThread");
void *_imp__ResumeThread = NULL;
__attribute__((constructor)) void _elfimplib_init_ResumeThread() {
load_dll_kernel32();
_imp__ResumeThread = (void *) _elf_GetProcAddress(_dll_kernel32, "ResumeThread");
}
void _elfimplib_ResumeThread() {
asm("leave\njmp *%0" : : "r"(_imp__ResumeThread));
}

void _elfimplib_RtlCaptureContext() asm("RtlCaptureContext");
void *_imp__RtlCaptureContext = NULL;
__attribute__((constructor)) void _elfimplib_init_RtlCaptureContext() {
load_dll_kernel32();
_imp__RtlCaptureContext = (void *) _elf_GetProcAddress(_dll_kernel32, "RtlCaptureContext");
}
void _elfimplib_RtlCaptureContext() {
asm("leave\njmp *%0" : : "r"(_imp__RtlCaptureContext));
}

void _elfimplib_RtlCaptureStackBackTrace() asm("RtlCaptureStackBackTrace");
void *_imp__RtlCaptureStackBackTrace = NULL;
__attribute__((constructor)) void _elfimplib_init_RtlCaptureStackBackTrace() {
load_dll_kernel32();
_imp__RtlCaptureStackBackTrace = (void *) _elf_GetProcAddress(_dll_kernel32, "RtlCaptureStackBackTrace");
}
void _elfimplib_RtlCaptureStackBackTrace() {
asm("leave\njmp *%0" : : "r"(_imp__RtlCaptureStackBackTrace));
}

void _elfimplib_RtlFillMemory() asm("RtlFillMemory");
void *_imp__RtlFillMemory = NULL;
__attribute__((constructor)) void _elfimplib_init_RtlFillMemory() {
load_dll_kernel32();
_imp__RtlFillMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "RtlFillMemory");
}
void _elfimplib_RtlFillMemory() {
asm("leave\njmp *%0" : : "r"(_imp__RtlFillMemory));
}

void _elfimplib_RtlMoveMemory() asm("RtlMoveMemory");
void *_imp__RtlMoveMemory = NULL;
__attribute__((constructor)) void _elfimplib_init_RtlMoveMemory() {
load_dll_kernel32();
_imp__RtlMoveMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "RtlMoveMemory");
}
void _elfimplib_RtlMoveMemory() {
asm("leave\njmp *%0" : : "r"(_imp__RtlMoveMemory));
}

void _elfimplib_RtlUnwind() asm("RtlUnwind");
void *_imp__RtlUnwind = NULL;
__attribute__((constructor)) void _elfimplib_init_RtlUnwind() {
load_dll_kernel32();
_imp__RtlUnwind = (void *) _elf_GetProcAddress(_dll_kernel32, "RtlUnwind");
}
void _elfimplib_RtlUnwind() {
asm("leave\njmp *%0" : : "r"(_imp__RtlUnwind));
}

void _elfimplib_RtlZeroMemory() asm("RtlZeroMemory");
void *_imp__RtlZeroMemory = NULL;
__attribute__((constructor)) void _elfimplib_init_RtlZeroMemory() {
load_dll_kernel32();
_imp__RtlZeroMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "RtlZeroMemory");
}
void _elfimplib_RtlZeroMemory() {
asm("leave\njmp *%0" : : "r"(_imp__RtlZeroMemory));
}

void _elfimplib_ScrollConsoleScreenBufferA() asm("ScrollConsoleScreenBufferA");
void *_imp__ScrollConsoleScreenBufferA = NULL;
__attribute__((constructor)) void _elfimplib_init_ScrollConsoleScreenBufferA() {
load_dll_kernel32();
_imp__ScrollConsoleScreenBufferA = (void *) _elf_GetProcAddress(_dll_kernel32, "ScrollConsoleScreenBufferA");
}
void _elfimplib_ScrollConsoleScreenBufferA() {
asm("leave\njmp *%0" : : "r"(_imp__ScrollConsoleScreenBufferA));
}

void _elfimplib_ScrollConsoleScreenBufferW() asm("ScrollConsoleScreenBufferW");
void *_imp__ScrollConsoleScreenBufferW = NULL;
__attribute__((constructor)) void _elfimplib_init_ScrollConsoleScreenBufferW() {
load_dll_kernel32();
_imp__ScrollConsoleScreenBufferW = (void *) _elf_GetProcAddress(_dll_kernel32, "ScrollConsoleScreenBufferW");
}
void _elfimplib_ScrollConsoleScreenBufferW() {
asm("leave\njmp *%0" : : "r"(_imp__ScrollConsoleScreenBufferW));
}

void _elfimplib_SearchPathA() asm("SearchPathA");
void *_imp__SearchPathA = NULL;
__attribute__((constructor)) void _elfimplib_init_SearchPathA() {
load_dll_kernel32();
_imp__SearchPathA = (void *) _elf_GetProcAddress(_dll_kernel32, "SearchPathA");
}
void _elfimplib_SearchPathA() {
asm("leave\njmp *%0" : : "r"(_imp__SearchPathA));
}

void _elfimplib_SearchPathW() asm("SearchPathW");
void *_imp__SearchPathW = NULL;
__attribute__((constructor)) void _elfimplib_init_SearchPathW() {
load_dll_kernel32();
_imp__SearchPathW = (void *) _elf_GetProcAddress(_dll_kernel32, "SearchPathW");
}
void _elfimplib_SearchPathW() {
asm("leave\njmp *%0" : : "r"(_imp__SearchPathW));
}

void _elfimplib_SetCPGlobal() asm("SetCPGlobal");
void *_imp__SetCPGlobal = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCPGlobal() {
load_dll_kernel32();
_imp__SetCPGlobal = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCPGlobal");
}
void _elfimplib_SetCPGlobal() {
asm("leave\njmp *%0" : : "r"(_imp__SetCPGlobal));
}

void _elfimplib_SetCalendarInfoA() asm("SetCalendarInfoA");
void *_imp__SetCalendarInfoA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCalendarInfoA() {
load_dll_kernel32();
_imp__SetCalendarInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCalendarInfoA");
}
void _elfimplib_SetCalendarInfoA() {
asm("leave\njmp *%0" : : "r"(_imp__SetCalendarInfoA));
}

void _elfimplib_SetCalendarInfoW() asm("SetCalendarInfoW");
void *_imp__SetCalendarInfoW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCalendarInfoW() {
load_dll_kernel32();
_imp__SetCalendarInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCalendarInfoW");
}
void _elfimplib_SetCalendarInfoW() {
asm("leave\njmp *%0" : : "r"(_imp__SetCalendarInfoW));
}

void _elfimplib_SetClientTimeZoneInformation() asm("SetClientTimeZoneInformation");
void *_imp__SetClientTimeZoneInformation = NULL;
__attribute__((constructor)) void _elfimplib_init_SetClientTimeZoneInformation() {
load_dll_kernel32();
_imp__SetClientTimeZoneInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "SetClientTimeZoneInformation");
}
void _elfimplib_SetClientTimeZoneInformation() {
asm("leave\njmp *%0" : : "r"(_imp__SetClientTimeZoneInformation));
}

void _elfimplib_SetComPlusPackageInstallStatus() asm("SetComPlusPackageInstallStatus");
void *_imp__SetComPlusPackageInstallStatus = NULL;
__attribute__((constructor)) void _elfimplib_init_SetComPlusPackageInstallStatus() {
load_dll_kernel32();
_imp__SetComPlusPackageInstallStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "SetComPlusPackageInstallStatus");
}
void _elfimplib_SetComPlusPackageInstallStatus() {
asm("leave\njmp *%0" : : "r"(_imp__SetComPlusPackageInstallStatus));
}

void _elfimplib_SetCommBreak() asm("SetCommBreak");
void *_imp__SetCommBreak = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCommBreak() {
load_dll_kernel32();
_imp__SetCommBreak = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCommBreak");
}
void _elfimplib_SetCommBreak() {
asm("leave\njmp *%0" : : "r"(_imp__SetCommBreak));
}

void _elfimplib_SetCommConfig() asm("SetCommConfig");
void *_imp__SetCommConfig = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCommConfig() {
load_dll_kernel32();
_imp__SetCommConfig = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCommConfig");
}
void _elfimplib_SetCommConfig() {
asm("leave\njmp *%0" : : "r"(_imp__SetCommConfig));
}

void _elfimplib_SetCommMask() asm("SetCommMask");
void *_imp__SetCommMask = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCommMask() {
load_dll_kernel32();
_imp__SetCommMask = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCommMask");
}
void _elfimplib_SetCommMask() {
asm("leave\njmp *%0" : : "r"(_imp__SetCommMask));
}

void _elfimplib_SetCommState() asm("SetCommState");
void *_imp__SetCommState = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCommState() {
load_dll_kernel32();
_imp__SetCommState = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCommState");
}
void _elfimplib_SetCommState() {
asm("leave\njmp *%0" : : "r"(_imp__SetCommState));
}

void _elfimplib_SetCommTimeouts() asm("SetCommTimeouts");
void *_imp__SetCommTimeouts = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCommTimeouts() {
load_dll_kernel32();
_imp__SetCommTimeouts = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCommTimeouts");
}
void _elfimplib_SetCommTimeouts() {
asm("leave\njmp *%0" : : "r"(_imp__SetCommTimeouts));
}

void _elfimplib_SetComputerNameA() asm("SetComputerNameA");
void *_imp__SetComputerNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetComputerNameA() {
load_dll_kernel32();
_imp__SetComputerNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetComputerNameA");
}
void _elfimplib_SetComputerNameA() {
asm("leave\njmp *%0" : : "r"(_imp__SetComputerNameA));
}

void _elfimplib_SetComputerNameExA() asm("SetComputerNameExA");
void *_imp__SetComputerNameExA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetComputerNameExA() {
load_dll_kernel32();
_imp__SetComputerNameExA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetComputerNameExA");
}
void _elfimplib_SetComputerNameExA() {
asm("leave\njmp *%0" : : "r"(_imp__SetComputerNameExA));
}

void _elfimplib_SetComputerNameExW() asm("SetComputerNameExW");
void *_imp__SetComputerNameExW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetComputerNameExW() {
load_dll_kernel32();
_imp__SetComputerNameExW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetComputerNameExW");
}
void _elfimplib_SetComputerNameExW() {
asm("leave\njmp *%0" : : "r"(_imp__SetComputerNameExW));
}

void _elfimplib_SetComputerNameW() asm("SetComputerNameW");
void *_imp__SetComputerNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetComputerNameW() {
load_dll_kernel32();
_imp__SetComputerNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetComputerNameW");
}
void _elfimplib_SetComputerNameW() {
asm("leave\njmp *%0" : : "r"(_imp__SetComputerNameW));
}

void _elfimplib_SetConsoleActiveScreenBuffer() asm("SetConsoleActiveScreenBuffer");
void *_imp__SetConsoleActiveScreenBuffer = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleActiveScreenBuffer() {
load_dll_kernel32();
_imp__SetConsoleActiveScreenBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleActiveScreenBuffer");
}
void _elfimplib_SetConsoleActiveScreenBuffer() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleActiveScreenBuffer));
}

void _elfimplib_SetConsoleCP() asm("SetConsoleCP");
void *_imp__SetConsoleCP = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleCP() {
load_dll_kernel32();
_imp__SetConsoleCP = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCP");
}
void _elfimplib_SetConsoleCP() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleCP));
}

void _elfimplib_SetConsoleCommandHistoryMode() asm("SetConsoleCommandHistoryMode");
void *_imp__SetConsoleCommandHistoryMode = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleCommandHistoryMode() {
load_dll_kernel32();
_imp__SetConsoleCommandHistoryMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCommandHistoryMode");
}
void _elfimplib_SetConsoleCommandHistoryMode() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleCommandHistoryMode));
}

void _elfimplib_SetConsoleCtrlHandler() asm("SetConsoleCtrlHandler");
void *_imp__SetConsoleCtrlHandler = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleCtrlHandler() {
load_dll_kernel32();
_imp__SetConsoleCtrlHandler = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCtrlHandler");
}
void _elfimplib_SetConsoleCtrlHandler() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleCtrlHandler));
}

void _elfimplib_SetConsoleCursor() asm("SetConsoleCursor");
void *_imp__SetConsoleCursor = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleCursor() {
load_dll_kernel32();
_imp__SetConsoleCursor = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCursor");
}
void _elfimplib_SetConsoleCursor() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleCursor));
}

void _elfimplib_SetConsoleCursorInfo() asm("SetConsoleCursorInfo");
void *_imp__SetConsoleCursorInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleCursorInfo() {
load_dll_kernel32();
_imp__SetConsoleCursorInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCursorInfo");
}
void _elfimplib_SetConsoleCursorInfo() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleCursorInfo));
}

void _elfimplib_SetConsoleCursorMode() asm("SetConsoleCursorMode");
void *_imp__SetConsoleCursorMode = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleCursorMode() {
load_dll_kernel32();
_imp__SetConsoleCursorMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCursorMode");
}
void _elfimplib_SetConsoleCursorMode() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleCursorMode));
}

void _elfimplib_SetConsoleCursorPosition() asm("SetConsoleCursorPosition");
void *_imp__SetConsoleCursorPosition = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleCursorPosition() {
load_dll_kernel32();
_imp__SetConsoleCursorPosition = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCursorPosition");
}
void _elfimplib_SetConsoleCursorPosition() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleCursorPosition));
}

void _elfimplib_SetConsoleDisplayMode() asm("SetConsoleDisplayMode");
void *_imp__SetConsoleDisplayMode = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleDisplayMode() {
load_dll_kernel32();
_imp__SetConsoleDisplayMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleDisplayMode");
}
void _elfimplib_SetConsoleDisplayMode() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleDisplayMode));
}

void _elfimplib_SetConsoleFont() asm("SetConsoleFont");
void *_imp__SetConsoleFont = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleFont() {
load_dll_kernel32();
_imp__SetConsoleFont = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleFont");
}
void _elfimplib_SetConsoleFont() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleFont));
}

void _elfimplib_SetConsoleHardwareState() asm("SetConsoleHardwareState");
void *_imp__SetConsoleHardwareState = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleHardwareState() {
load_dll_kernel32();
_imp__SetConsoleHardwareState = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleHardwareState");
}
void _elfimplib_SetConsoleHardwareState() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleHardwareState));
}

void _elfimplib_SetConsoleIcon() asm("SetConsoleIcon");
void *_imp__SetConsoleIcon = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleIcon() {
load_dll_kernel32();
_imp__SetConsoleIcon = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleIcon");
}
void _elfimplib_SetConsoleIcon() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleIcon));
}

void _elfimplib_SetConsoleInputExeNameA() asm("SetConsoleInputExeNameA");
void *_imp__SetConsoleInputExeNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleInputExeNameA() {
load_dll_kernel32();
_imp__SetConsoleInputExeNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleInputExeNameA");
}
void _elfimplib_SetConsoleInputExeNameA() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleInputExeNameA));
}

void _elfimplib_SetConsoleInputExeNameW() asm("SetConsoleInputExeNameW");
void *_imp__SetConsoleInputExeNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleInputExeNameW() {
load_dll_kernel32();
_imp__SetConsoleInputExeNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleInputExeNameW");
}
void _elfimplib_SetConsoleInputExeNameW() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleInputExeNameW));
}

void _elfimplib_SetConsoleKeyShortcuts() asm("SetConsoleKeyShortcuts");
void *_imp__SetConsoleKeyShortcuts = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleKeyShortcuts() {
load_dll_kernel32();
_imp__SetConsoleKeyShortcuts = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleKeyShortcuts");
}
void _elfimplib_SetConsoleKeyShortcuts() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleKeyShortcuts));
}

void _elfimplib_SetConsoleLocalEUDC() asm("SetConsoleLocalEUDC");
void *_imp__SetConsoleLocalEUDC = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleLocalEUDC() {
load_dll_kernel32();
_imp__SetConsoleLocalEUDC = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleLocalEUDC");
}
void _elfimplib_SetConsoleLocalEUDC() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleLocalEUDC));
}

void _elfimplib_SetConsoleMaximumWindowSize() asm("SetConsoleMaximumWindowSize");
void *_imp__SetConsoleMaximumWindowSize = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleMaximumWindowSize() {
load_dll_kernel32();
_imp__SetConsoleMaximumWindowSize = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleMaximumWindowSize");
}
void _elfimplib_SetConsoleMaximumWindowSize() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleMaximumWindowSize));
}

void _elfimplib_SetConsoleMenuClose() asm("SetConsoleMenuClose");
void *_imp__SetConsoleMenuClose = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleMenuClose() {
load_dll_kernel32();
_imp__SetConsoleMenuClose = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleMenuClose");
}
void _elfimplib_SetConsoleMenuClose() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleMenuClose));
}

void _elfimplib_SetConsoleMode() asm("SetConsoleMode");
void *_imp__SetConsoleMode = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleMode() {
load_dll_kernel32();
_imp__SetConsoleMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleMode");
}
void _elfimplib_SetConsoleMode() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleMode));
}

void _elfimplib_SetConsoleNlsMode() asm("SetConsoleNlsMode");
void *_imp__SetConsoleNlsMode = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleNlsMode() {
load_dll_kernel32();
_imp__SetConsoleNlsMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleNlsMode");
}
void _elfimplib_SetConsoleNlsMode() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleNlsMode));
}

void _elfimplib_SetConsoleNumberOfCommandsA() asm("SetConsoleNumberOfCommandsA");
void *_imp__SetConsoleNumberOfCommandsA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleNumberOfCommandsA() {
load_dll_kernel32();
_imp__SetConsoleNumberOfCommandsA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleNumberOfCommandsA");
}
void _elfimplib_SetConsoleNumberOfCommandsA() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleNumberOfCommandsA));
}

void _elfimplib_SetConsoleNumberOfCommandsW() asm("SetConsoleNumberOfCommandsW");
void *_imp__SetConsoleNumberOfCommandsW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleNumberOfCommandsW() {
load_dll_kernel32();
_imp__SetConsoleNumberOfCommandsW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleNumberOfCommandsW");
}
void _elfimplib_SetConsoleNumberOfCommandsW() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleNumberOfCommandsW));
}

void _elfimplib_SetConsoleOS2OemFormat() asm("SetConsoleOS2OemFormat");
void *_imp__SetConsoleOS2OemFormat = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleOS2OemFormat() {
load_dll_kernel32();
_imp__SetConsoleOS2OemFormat = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleOS2OemFormat");
}
void _elfimplib_SetConsoleOS2OemFormat() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleOS2OemFormat));
}

void _elfimplib_SetConsoleOutputCP() asm("SetConsoleOutputCP");
void *_imp__SetConsoleOutputCP = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleOutputCP() {
load_dll_kernel32();
_imp__SetConsoleOutputCP = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleOutputCP");
}
void _elfimplib_SetConsoleOutputCP() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleOutputCP));
}

void _elfimplib_SetConsolePalette() asm("SetConsolePalette");
void *_imp__SetConsolePalette = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsolePalette() {
load_dll_kernel32();
_imp__SetConsolePalette = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsolePalette");
}
void _elfimplib_SetConsolePalette() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsolePalette));
}

void _elfimplib_SetConsoleScreenBufferSize() asm("SetConsoleScreenBufferSize");
void *_imp__SetConsoleScreenBufferSize = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleScreenBufferSize() {
load_dll_kernel32();
_imp__SetConsoleScreenBufferSize = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleScreenBufferSize");
}
void _elfimplib_SetConsoleScreenBufferSize() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleScreenBufferSize));
}

void _elfimplib_SetConsoleTextAttribute() asm("SetConsoleTextAttribute");
void *_imp__SetConsoleTextAttribute = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleTextAttribute() {
load_dll_kernel32();
_imp__SetConsoleTextAttribute = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleTextAttribute");
}
void _elfimplib_SetConsoleTextAttribute() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleTextAttribute));
}

void _elfimplib_SetConsoleTitleA() asm("SetConsoleTitleA");
void *_imp__SetConsoleTitleA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleTitleA() {
load_dll_kernel32();
_imp__SetConsoleTitleA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleTitleA");
}
void _elfimplib_SetConsoleTitleA() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleTitleA));
}

void _elfimplib_SetConsoleTitleW() asm("SetConsoleTitleW");
void *_imp__SetConsoleTitleW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleTitleW() {
load_dll_kernel32();
_imp__SetConsoleTitleW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleTitleW");
}
void _elfimplib_SetConsoleTitleW() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleTitleW));
}

void _elfimplib_SetConsoleWindowInfo() asm("SetConsoleWindowInfo");
void *_imp__SetConsoleWindowInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_SetConsoleWindowInfo() {
load_dll_kernel32();
_imp__SetConsoleWindowInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleWindowInfo");
}
void _elfimplib_SetConsoleWindowInfo() {
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleWindowInfo));
}

void _elfimplib_SetCriticalSectionSpinCount() asm("SetCriticalSectionSpinCount");
void *_imp__SetCriticalSectionSpinCount = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCriticalSectionSpinCount() {
load_dll_kernel32();
_imp__SetCriticalSectionSpinCount = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCriticalSectionSpinCount");
}
void _elfimplib_SetCriticalSectionSpinCount() {
asm("leave\njmp *%0" : : "r"(_imp__SetCriticalSectionSpinCount));
}

void _elfimplib_SetCurrentDirectoryA() asm("SetCurrentDirectoryA");
void *_imp__SetCurrentDirectoryA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCurrentDirectoryA() {
load_dll_kernel32();
_imp__SetCurrentDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCurrentDirectoryA");
}
void _elfimplib_SetCurrentDirectoryA() {
asm("leave\njmp *%0" : : "r"(_imp__SetCurrentDirectoryA));
}

void _elfimplib_SetCurrentDirectoryW() asm("SetCurrentDirectoryW");
void *_imp__SetCurrentDirectoryW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCurrentDirectoryW() {
load_dll_kernel32();
_imp__SetCurrentDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCurrentDirectoryW");
}
void _elfimplib_SetCurrentDirectoryW() {
asm("leave\njmp *%0" : : "r"(_imp__SetCurrentDirectoryW));
}

void _elfimplib_SetDefaultCommConfigA() asm("SetDefaultCommConfigA");
void *_imp__SetDefaultCommConfigA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetDefaultCommConfigA() {
load_dll_kernel32();
_imp__SetDefaultCommConfigA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetDefaultCommConfigA");
}
void _elfimplib_SetDefaultCommConfigA() {
asm("leave\njmp *%0" : : "r"(_imp__SetDefaultCommConfigA));
}

void _elfimplib_SetDefaultCommConfigW() asm("SetDefaultCommConfigW");
void *_imp__SetDefaultCommConfigW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetDefaultCommConfigW() {
load_dll_kernel32();
_imp__SetDefaultCommConfigW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetDefaultCommConfigW");
}
void _elfimplib_SetDefaultCommConfigW() {
asm("leave\njmp *%0" : : "r"(_imp__SetDefaultCommConfigW));
}

void _elfimplib_SetDllDirectoryA() asm("SetDllDirectoryA");
void *_imp__SetDllDirectoryA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetDllDirectoryA() {
load_dll_kernel32();
_imp__SetDllDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetDllDirectoryA");
}
void _elfimplib_SetDllDirectoryA() {
asm("leave\njmp *%0" : : "r"(_imp__SetDllDirectoryA));
}

void _elfimplib_SetDllDirectoryW() asm("SetDllDirectoryW");
void *_imp__SetDllDirectoryW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetDllDirectoryW() {
load_dll_kernel32();
_imp__SetDllDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetDllDirectoryW");
}
void _elfimplib_SetDllDirectoryW() {
asm("leave\njmp *%0" : : "r"(_imp__SetDllDirectoryW));
}

void _elfimplib_SetEndOfFile() asm("SetEndOfFile");
void *_imp__SetEndOfFile = NULL;
__attribute__((constructor)) void _elfimplib_init_SetEndOfFile() {
load_dll_kernel32();
_imp__SetEndOfFile = (void *) _elf_GetProcAddress(_dll_kernel32, "SetEndOfFile");
}
void _elfimplib_SetEndOfFile() {
asm("leave\njmp *%0" : : "r"(_imp__SetEndOfFile));
}

void _elfimplib_SetEnvironmentVariableA() asm("SetEnvironmentVariableA");
void *_imp__SetEnvironmentVariableA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetEnvironmentVariableA() {
load_dll_kernel32();
_imp__SetEnvironmentVariableA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetEnvironmentVariableA");
}
void _elfimplib_SetEnvironmentVariableA() {
asm("leave\njmp *%0" : : "r"(_imp__SetEnvironmentVariableA));
}

void _elfimplib_SetEnvironmentVariableW() asm("SetEnvironmentVariableW");
void *_imp__SetEnvironmentVariableW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetEnvironmentVariableW() {
load_dll_kernel32();
_imp__SetEnvironmentVariableW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetEnvironmentVariableW");
}
void _elfimplib_SetEnvironmentVariableW() {
asm("leave\njmp *%0" : : "r"(_imp__SetEnvironmentVariableW));
}

void _elfimplib_SetErrorMode() asm("SetErrorMode");
void *_imp__SetErrorMode = NULL;
__attribute__((constructor)) void _elfimplib_init_SetErrorMode() {
load_dll_kernel32();
_imp__SetErrorMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetErrorMode");
}
void _elfimplib_SetErrorMode() {
asm("leave\njmp *%0" : : "r"(_imp__SetErrorMode));
}

void _elfimplib_SetEvent() asm("SetEvent");
void *_imp__SetEvent = NULL;
__attribute__((constructor)) void _elfimplib_init_SetEvent() {
load_dll_kernel32();
_imp__SetEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "SetEvent");
}
void _elfimplib_SetEvent() {
asm("leave\njmp *%0" : : "r"(_imp__SetEvent));
}

void _elfimplib_SetFileApisToANSI() asm("SetFileApisToANSI");
void *_imp__SetFileApisToANSI = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFileApisToANSI() {
load_dll_kernel32();
_imp__SetFileApisToANSI = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileApisToANSI");
}
void _elfimplib_SetFileApisToANSI() {
asm("leave\njmp *%0" : : "r"(_imp__SetFileApisToANSI));
}

void _elfimplib_SetFileApisToOEM() asm("SetFileApisToOEM");
void *_imp__SetFileApisToOEM = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFileApisToOEM() {
load_dll_kernel32();
_imp__SetFileApisToOEM = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileApisToOEM");
}
void _elfimplib_SetFileApisToOEM() {
asm("leave\njmp *%0" : : "r"(_imp__SetFileApisToOEM));
}

void _elfimplib_SetFileAttributesA() asm("SetFileAttributesA");
void *_imp__SetFileAttributesA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFileAttributesA() {
load_dll_kernel32();
_imp__SetFileAttributesA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileAttributesA");
}
void _elfimplib_SetFileAttributesA() {
asm("leave\njmp *%0" : : "r"(_imp__SetFileAttributesA));
}

void _elfimplib_SetFileAttributesW() asm("SetFileAttributesW");
void *_imp__SetFileAttributesW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFileAttributesW() {
load_dll_kernel32();
_imp__SetFileAttributesW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileAttributesW");
}
void _elfimplib_SetFileAttributesW() {
asm("leave\njmp *%0" : : "r"(_imp__SetFileAttributesW));
}

void _elfimplib_SetFilePointer() asm("SetFilePointer");
void *_imp__SetFilePointer = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFilePointer() {
load_dll_kernel32();
_imp__SetFilePointer = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFilePointer");
}
void _elfimplib_SetFilePointer() {
asm("leave\njmp *%0" : : "r"(_imp__SetFilePointer));
}

void _elfimplib_SetFilePointerEx() asm("SetFilePointerEx");
void *_imp__SetFilePointerEx = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFilePointerEx() {
load_dll_kernel32();
_imp__SetFilePointerEx = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFilePointerEx");
}
void _elfimplib_SetFilePointerEx() {
asm("leave\njmp *%0" : : "r"(_imp__SetFilePointerEx));
}

void _elfimplib_SetFileShortNameA() asm("SetFileShortNameA");
void *_imp__SetFileShortNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFileShortNameA() {
load_dll_kernel32();
_imp__SetFileShortNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileShortNameA");
}
void _elfimplib_SetFileShortNameA() {
asm("leave\njmp *%0" : : "r"(_imp__SetFileShortNameA));
}

void _elfimplib_SetFileShortNameW() asm("SetFileShortNameW");
void *_imp__SetFileShortNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFileShortNameW() {
load_dll_kernel32();
_imp__SetFileShortNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileShortNameW");
}
void _elfimplib_SetFileShortNameW() {
asm("leave\njmp *%0" : : "r"(_imp__SetFileShortNameW));
}

void _elfimplib_SetFileTime() asm("SetFileTime");
void *_imp__SetFileTime = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFileTime() {
load_dll_kernel32();
_imp__SetFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileTime");
}
void _elfimplib_SetFileTime() {
asm("leave\njmp *%0" : : "r"(_imp__SetFileTime));
}

void _elfimplib_SetFileValidData() asm("SetFileValidData");
void *_imp__SetFileValidData = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFileValidData() {
load_dll_kernel32();
_imp__SetFileValidData = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileValidData");
}
void _elfimplib_SetFileValidData() {
asm("leave\njmp *%0" : : "r"(_imp__SetFileValidData));
}

void _elfimplib_SetFirmwareEnvironmentVariableA() asm("SetFirmwareEnvironmentVariableA");
void *_imp__SetFirmwareEnvironmentVariableA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFirmwareEnvironmentVariableA() {
load_dll_kernel32();
_imp__SetFirmwareEnvironmentVariableA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFirmwareEnvironmentVariableA");
}
void _elfimplib_SetFirmwareEnvironmentVariableA() {
asm("leave\njmp *%0" : : "r"(_imp__SetFirmwareEnvironmentVariableA));
}

void _elfimplib_SetFirmwareEnvironmentVariableW() asm("SetFirmwareEnvironmentVariableW");
void *_imp__SetFirmwareEnvironmentVariableW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFirmwareEnvironmentVariableW() {
load_dll_kernel32();
_imp__SetFirmwareEnvironmentVariableW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFirmwareEnvironmentVariableW");
}
void _elfimplib_SetFirmwareEnvironmentVariableW() {
asm("leave\njmp *%0" : : "r"(_imp__SetFirmwareEnvironmentVariableW));
}

void _elfimplib_SetHandleContext() asm("SetHandleContext");
void *_imp__SetHandleContext = NULL;
__attribute__((constructor)) void _elfimplib_init_SetHandleContext() {
load_dll_kernel32();
_imp__SetHandleContext = (void *) _elf_GetProcAddress(_dll_kernel32, "SetHandleContext");
}
void _elfimplib_SetHandleContext() {
asm("leave\njmp *%0" : : "r"(_imp__SetHandleContext));
}

void _elfimplib_SetHandleCount() asm("SetHandleCount");
void *_imp__SetHandleCount = NULL;
__attribute__((constructor)) void _elfimplib_init_SetHandleCount() {
load_dll_kernel32();
_imp__SetHandleCount = (void *) _elf_GetProcAddress(_dll_kernel32, "SetHandleCount");
}
void _elfimplib_SetHandleCount() {
asm("leave\njmp *%0" : : "r"(_imp__SetHandleCount));
}

void _elfimplib_SetHandleInformation() asm("SetHandleInformation");
void *_imp__SetHandleInformation = NULL;
__attribute__((constructor)) void _elfimplib_init_SetHandleInformation() {
load_dll_kernel32();
_imp__SetHandleInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "SetHandleInformation");
}
void _elfimplib_SetHandleInformation() {
asm("leave\njmp *%0" : : "r"(_imp__SetHandleInformation));
}

void _elfimplib_SetInformationJobObject() asm("SetInformationJobObject");
void *_imp__SetInformationJobObject = NULL;
__attribute__((constructor)) void _elfimplib_init_SetInformationJobObject() {
load_dll_kernel32();
_imp__SetInformationJobObject = (void *) _elf_GetProcAddress(_dll_kernel32, "SetInformationJobObject");
}
void _elfimplib_SetInformationJobObject() {
asm("leave\njmp *%0" : : "r"(_imp__SetInformationJobObject));
}

void _elfimplib_SetLastConsoleEventActive() asm("SetLastConsoleEventActive");
void *_imp__SetLastConsoleEventActive = NULL;
__attribute__((constructor)) void _elfimplib_init_SetLastConsoleEventActive() {
load_dll_kernel32();
_imp__SetLastConsoleEventActive = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLastConsoleEventActive");
}
void _elfimplib_SetLastConsoleEventActive() {
asm("leave\njmp *%0" : : "r"(_imp__SetLastConsoleEventActive));
}

void _elfimplib_SetLastError() asm("SetLastError");
void *_imp__SetLastError = NULL;
__attribute__((constructor)) void _elfimplib_init_SetLastError() {
load_dll_kernel32();
_imp__SetLastError = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLastError");
}
void _elfimplib_SetLastError() {
asm("leave\njmp *%0" : : "r"(_imp__SetLastError));
}

void _elfimplib_SetLocalPrimaryComputerNameA() asm("SetLocalPrimaryComputerNameA");
void *_imp__SetLocalPrimaryComputerNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetLocalPrimaryComputerNameA() {
load_dll_kernel32();
_imp__SetLocalPrimaryComputerNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLocalPrimaryComputerNameA");
}
void _elfimplib_SetLocalPrimaryComputerNameA() {
asm("leave\njmp *%0" : : "r"(_imp__SetLocalPrimaryComputerNameA));
}

void _elfimplib_SetLocalPrimaryComputerNameW() asm("SetLocalPrimaryComputerNameW");
void *_imp__SetLocalPrimaryComputerNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetLocalPrimaryComputerNameW() {
load_dll_kernel32();
_imp__SetLocalPrimaryComputerNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLocalPrimaryComputerNameW");
}
void _elfimplib_SetLocalPrimaryComputerNameW() {
asm("leave\njmp *%0" : : "r"(_imp__SetLocalPrimaryComputerNameW));
}

void _elfimplib_SetLocalTime() asm("SetLocalTime");
void *_imp__SetLocalTime = NULL;
__attribute__((constructor)) void _elfimplib_init_SetLocalTime() {
load_dll_kernel32();
_imp__SetLocalTime = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLocalTime");
}
void _elfimplib_SetLocalTime() {
asm("leave\njmp *%0" : : "r"(_imp__SetLocalTime));
}

void _elfimplib_SetLocaleInfoA() asm("SetLocaleInfoA");
void *_imp__SetLocaleInfoA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetLocaleInfoA() {
load_dll_kernel32();
_imp__SetLocaleInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLocaleInfoA");
}
void _elfimplib_SetLocaleInfoA() {
asm("leave\njmp *%0" : : "r"(_imp__SetLocaleInfoA));
}

void _elfimplib_SetLocaleInfoW() asm("SetLocaleInfoW");
void *_imp__SetLocaleInfoW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetLocaleInfoW() {
load_dll_kernel32();
_imp__SetLocaleInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLocaleInfoW");
}
void _elfimplib_SetLocaleInfoW() {
asm("leave\njmp *%0" : : "r"(_imp__SetLocaleInfoW));
}

void _elfimplib_SetMailslotInfo() asm("SetMailslotInfo");
void *_imp__SetMailslotInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_SetMailslotInfo() {
load_dll_kernel32();
_imp__SetMailslotInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "SetMailslotInfo");
}
void _elfimplib_SetMailslotInfo() {
asm("leave\njmp *%0" : : "r"(_imp__SetMailslotInfo));
}

void _elfimplib_SetMessageWaitingIndicator() asm("SetMessageWaitingIndicator");
void *_imp__SetMessageWaitingIndicator = NULL;
__attribute__((constructor)) void _elfimplib_init_SetMessageWaitingIndicator() {
load_dll_kernel32();
_imp__SetMessageWaitingIndicator = (void *) _elf_GetProcAddress(_dll_kernel32, "SetMessageWaitingIndicator");
}
void _elfimplib_SetMessageWaitingIndicator() {
asm("leave\njmp *%0" : : "r"(_imp__SetMessageWaitingIndicator));
}

void _elfimplib_SetNamedPipeHandleState() asm("SetNamedPipeHandleState");
void *_imp__SetNamedPipeHandleState = NULL;
__attribute__((constructor)) void _elfimplib_init_SetNamedPipeHandleState() {
load_dll_kernel32();
_imp__SetNamedPipeHandleState = (void *) _elf_GetProcAddress(_dll_kernel32, "SetNamedPipeHandleState");
}
void _elfimplib_SetNamedPipeHandleState() {
asm("leave\njmp *%0" : : "r"(_imp__SetNamedPipeHandleState));
}

void _elfimplib_SetPriorityClass() asm("SetPriorityClass");
void *_imp__SetPriorityClass = NULL;
__attribute__((constructor)) void _elfimplib_init_SetPriorityClass() {
load_dll_kernel32();
_imp__SetPriorityClass = (void *) _elf_GetProcAddress(_dll_kernel32, "SetPriorityClass");
}
void _elfimplib_SetPriorityClass() {
asm("leave\njmp *%0" : : "r"(_imp__SetPriorityClass));
}

void _elfimplib_SetProcessAffinityMask() asm("SetProcessAffinityMask");
void *_imp__SetProcessAffinityMask = NULL;
__attribute__((constructor)) void _elfimplib_init_SetProcessAffinityMask() {
load_dll_kernel32();
_imp__SetProcessAffinityMask = (void *) _elf_GetProcAddress(_dll_kernel32, "SetProcessAffinityMask");
}
void _elfimplib_SetProcessAffinityMask() {
asm("leave\njmp *%0" : : "r"(_imp__SetProcessAffinityMask));
}

void _elfimplib_SetProcessPriorityBoost() asm("SetProcessPriorityBoost");
void *_imp__SetProcessPriorityBoost = NULL;
__attribute__((constructor)) void _elfimplib_init_SetProcessPriorityBoost() {
load_dll_kernel32();
_imp__SetProcessPriorityBoost = (void *) _elf_GetProcAddress(_dll_kernel32, "SetProcessPriorityBoost");
}
void _elfimplib_SetProcessPriorityBoost() {
asm("leave\njmp *%0" : : "r"(_imp__SetProcessPriorityBoost));
}

void _elfimplib_SetProcessShutdownParameters() asm("SetProcessShutdownParameters");
void *_imp__SetProcessShutdownParameters = NULL;
__attribute__((constructor)) void _elfimplib_init_SetProcessShutdownParameters() {
load_dll_kernel32();
_imp__SetProcessShutdownParameters = (void *) _elf_GetProcAddress(_dll_kernel32, "SetProcessShutdownParameters");
}
void _elfimplib_SetProcessShutdownParameters() {
asm("leave\njmp *%0" : : "r"(_imp__SetProcessShutdownParameters));
}

void _elfimplib_SetProcessWorkingSetSize() asm("SetProcessWorkingSetSize");
void *_imp__SetProcessWorkingSetSize = NULL;
__attribute__((constructor)) void _elfimplib_init_SetProcessWorkingSetSize() {
load_dll_kernel32();
_imp__SetProcessWorkingSetSize = (void *) _elf_GetProcAddress(_dll_kernel32, "SetProcessWorkingSetSize");
}
void _elfimplib_SetProcessWorkingSetSize() {
asm("leave\njmp *%0" : : "r"(_imp__SetProcessWorkingSetSize));
}

void _elfimplib_SetStdHandle() asm("SetStdHandle");
void *_imp__SetStdHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_SetStdHandle() {
load_dll_kernel32();
_imp__SetStdHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "SetStdHandle");
}
void _elfimplib_SetStdHandle() {
asm("leave\njmp *%0" : : "r"(_imp__SetStdHandle));
}

void _elfimplib_SetSystemPowerState() asm("SetSystemPowerState");
void *_imp__SetSystemPowerState = NULL;
__attribute__((constructor)) void _elfimplib_init_SetSystemPowerState() {
load_dll_kernel32();
_imp__SetSystemPowerState = (void *) _elf_GetProcAddress(_dll_kernel32, "SetSystemPowerState");
}
void _elfimplib_SetSystemPowerState() {
asm("leave\njmp *%0" : : "r"(_imp__SetSystemPowerState));
}

void _elfimplib_SetSystemTime() asm("SetSystemTime");
void *_imp__SetSystemTime = NULL;
__attribute__((constructor)) void _elfimplib_init_SetSystemTime() {
load_dll_kernel32();
_imp__SetSystemTime = (void *) _elf_GetProcAddress(_dll_kernel32, "SetSystemTime");
}
void _elfimplib_SetSystemTime() {
asm("leave\njmp *%0" : : "r"(_imp__SetSystemTime));
}

void _elfimplib_SetSystemTimeAdjustment() asm("SetSystemTimeAdjustment");
void *_imp__SetSystemTimeAdjustment = NULL;
__attribute__((constructor)) void _elfimplib_init_SetSystemTimeAdjustment() {
load_dll_kernel32();
_imp__SetSystemTimeAdjustment = (void *) _elf_GetProcAddress(_dll_kernel32, "SetSystemTimeAdjustment");
}
void _elfimplib_SetSystemTimeAdjustment() {
asm("leave\njmp *%0" : : "r"(_imp__SetSystemTimeAdjustment));
}

void _elfimplib_SetTapeParameters() asm("SetTapeParameters");
void *_imp__SetTapeParameters = NULL;
__attribute__((constructor)) void _elfimplib_init_SetTapeParameters() {
load_dll_kernel32();
_imp__SetTapeParameters = (void *) _elf_GetProcAddress(_dll_kernel32, "SetTapeParameters");
}
void _elfimplib_SetTapeParameters() {
asm("leave\njmp *%0" : : "r"(_imp__SetTapeParameters));
}

void _elfimplib_SetTapePosition() asm("SetTapePosition");
void *_imp__SetTapePosition = NULL;
__attribute__((constructor)) void _elfimplib_init_SetTapePosition() {
load_dll_kernel32();
_imp__SetTapePosition = (void *) _elf_GetProcAddress(_dll_kernel32, "SetTapePosition");
}
void _elfimplib_SetTapePosition() {
asm("leave\njmp *%0" : : "r"(_imp__SetTapePosition));
}

void _elfimplib_SetTermsrvAppInstallMode() asm("SetTermsrvAppInstallMode");
void *_imp__SetTermsrvAppInstallMode = NULL;
__attribute__((constructor)) void _elfimplib_init_SetTermsrvAppInstallMode() {
load_dll_kernel32();
_imp__SetTermsrvAppInstallMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetTermsrvAppInstallMode");
}
void _elfimplib_SetTermsrvAppInstallMode() {
asm("leave\njmp *%0" : : "r"(_imp__SetTermsrvAppInstallMode));
}

void _elfimplib_SetThreadAffinityMask() asm("SetThreadAffinityMask");
void *_imp__SetThreadAffinityMask = NULL;
__attribute__((constructor)) void _elfimplib_init_SetThreadAffinityMask() {
load_dll_kernel32();
_imp__SetThreadAffinityMask = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadAffinityMask");
}
void _elfimplib_SetThreadAffinityMask() {
asm("leave\njmp *%0" : : "r"(_imp__SetThreadAffinityMask));
}

void _elfimplib_SetThreadContext() asm("SetThreadContext");
void *_imp__SetThreadContext = NULL;
__attribute__((constructor)) void _elfimplib_init_SetThreadContext() {
load_dll_kernel32();
_imp__SetThreadContext = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadContext");
}
void _elfimplib_SetThreadContext() {
asm("leave\njmp *%0" : : "r"(_imp__SetThreadContext));
}

void _elfimplib_SetThreadExecutionState() asm("SetThreadExecutionState");
void *_imp__SetThreadExecutionState = NULL;
__attribute__((constructor)) void _elfimplib_init_SetThreadExecutionState() {
load_dll_kernel32();
_imp__SetThreadExecutionState = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadExecutionState");
}
void _elfimplib_SetThreadExecutionState() {
asm("leave\njmp *%0" : : "r"(_imp__SetThreadExecutionState));
}

void _elfimplib_SetThreadIdealProcessor() asm("SetThreadIdealProcessor");
void *_imp__SetThreadIdealProcessor = NULL;
__attribute__((constructor)) void _elfimplib_init_SetThreadIdealProcessor() {
load_dll_kernel32();
_imp__SetThreadIdealProcessor = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadIdealProcessor");
}
void _elfimplib_SetThreadIdealProcessor() {
asm("leave\njmp *%0" : : "r"(_imp__SetThreadIdealProcessor));
}

void _elfimplib_SetThreadLocale() asm("SetThreadLocale");
void *_imp__SetThreadLocale = NULL;
__attribute__((constructor)) void _elfimplib_init_SetThreadLocale() {
load_dll_kernel32();
_imp__SetThreadLocale = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadLocale");
}
void _elfimplib_SetThreadLocale() {
asm("leave\njmp *%0" : : "r"(_imp__SetThreadLocale));
}

void _elfimplib_SetThreadPriority() asm("SetThreadPriority");
void *_imp__SetThreadPriority = NULL;
__attribute__((constructor)) void _elfimplib_init_SetThreadPriority() {
load_dll_kernel32();
_imp__SetThreadPriority = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadPriority");
}
void _elfimplib_SetThreadPriority() {
asm("leave\njmp *%0" : : "r"(_imp__SetThreadPriority));
}

void _elfimplib_SetThreadPriorityBoost() asm("SetThreadPriorityBoost");
void *_imp__SetThreadPriorityBoost = NULL;
__attribute__((constructor)) void _elfimplib_init_SetThreadPriorityBoost() {
load_dll_kernel32();
_imp__SetThreadPriorityBoost = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadPriorityBoost");
}
void _elfimplib_SetThreadPriorityBoost() {
asm("leave\njmp *%0" : : "r"(_imp__SetThreadPriorityBoost));
}

void _elfimplib_SetThreadUILanguage() asm("SetThreadUILanguage");
void *_imp__SetThreadUILanguage = NULL;
__attribute__((constructor)) void _elfimplib_init_SetThreadUILanguage() {
load_dll_kernel32();
_imp__SetThreadUILanguage = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadUILanguage");
}
void _elfimplib_SetThreadUILanguage() {
asm("leave\njmp *%0" : : "r"(_imp__SetThreadUILanguage));
}

void _elfimplib_SetTimeZoneInformation() asm("SetTimeZoneInformation");
void *_imp__SetTimeZoneInformation = NULL;
__attribute__((constructor)) void _elfimplib_init_SetTimeZoneInformation() {
load_dll_kernel32();
_imp__SetTimeZoneInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "SetTimeZoneInformation");
}
void _elfimplib_SetTimeZoneInformation() {
asm("leave\njmp *%0" : : "r"(_imp__SetTimeZoneInformation));
}

void _elfimplib_SetTimerQueueTimer() asm("SetTimerQueueTimer");
void *_imp__SetTimerQueueTimer = NULL;
__attribute__((constructor)) void _elfimplib_init_SetTimerQueueTimer() {
load_dll_kernel32();
_imp__SetTimerQueueTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "SetTimerQueueTimer");
}
void _elfimplib_SetTimerQueueTimer() {
asm("leave\njmp *%0" : : "r"(_imp__SetTimerQueueTimer));
}

void _elfimplib_SetUnhandledExceptionFilter() asm("SetUnhandledExceptionFilter");
void *_imp__SetUnhandledExceptionFilter = NULL;
__attribute__((constructor)) void _elfimplib_init_SetUnhandledExceptionFilter() {
load_dll_kernel32();
_imp__SetUnhandledExceptionFilter = (void *) _elf_GetProcAddress(_dll_kernel32, "SetUnhandledExceptionFilter");
}
void _elfimplib_SetUnhandledExceptionFilter() {
asm("leave\njmp *%0" : : "r"(_imp__SetUnhandledExceptionFilter));
}

void _elfimplib_SetUserGeoID() asm("SetUserGeoID");
void *_imp__SetUserGeoID = NULL;
__attribute__((constructor)) void _elfimplib_init_SetUserGeoID() {
load_dll_kernel32();
_imp__SetUserGeoID = (void *) _elf_GetProcAddress(_dll_kernel32, "SetUserGeoID");
}
void _elfimplib_SetUserGeoID() {
asm("leave\njmp *%0" : : "r"(_imp__SetUserGeoID));
}

void _elfimplib_SetVDMCurrentDirectories() asm("SetVDMCurrentDirectories");
void *_imp__SetVDMCurrentDirectories = NULL;
__attribute__((constructor)) void _elfimplib_init_SetVDMCurrentDirectories() {
load_dll_kernel32();
_imp__SetVDMCurrentDirectories = (void *) _elf_GetProcAddress(_dll_kernel32, "SetVDMCurrentDirectories");
}
void _elfimplib_SetVDMCurrentDirectories() {
asm("leave\njmp *%0" : : "r"(_imp__SetVDMCurrentDirectories));
}

void _elfimplib_SetVolumeLabelA() asm("SetVolumeLabelA");
void *_imp__SetVolumeLabelA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetVolumeLabelA() {
load_dll_kernel32();
_imp__SetVolumeLabelA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetVolumeLabelA");
}
void _elfimplib_SetVolumeLabelA() {
asm("leave\njmp *%0" : : "r"(_imp__SetVolumeLabelA));
}

void _elfimplib_SetVolumeLabelW() asm("SetVolumeLabelW");
void *_imp__SetVolumeLabelW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetVolumeLabelW() {
load_dll_kernel32();
_imp__SetVolumeLabelW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetVolumeLabelW");
}
void _elfimplib_SetVolumeLabelW() {
asm("leave\njmp *%0" : : "r"(_imp__SetVolumeLabelW));
}

void _elfimplib_SetVolumeMountPointA() asm("SetVolumeMountPointA");
void *_imp__SetVolumeMountPointA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetVolumeMountPointA() {
load_dll_kernel32();
_imp__SetVolumeMountPointA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetVolumeMountPointA");
}
void _elfimplib_SetVolumeMountPointA() {
asm("leave\njmp *%0" : : "r"(_imp__SetVolumeMountPointA));
}

void _elfimplib_SetVolumeMountPointW() asm("SetVolumeMountPointW");
void *_imp__SetVolumeMountPointW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetVolumeMountPointW() {
load_dll_kernel32();
_imp__SetVolumeMountPointW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetVolumeMountPointW");
}
void _elfimplib_SetVolumeMountPointW() {
asm("leave\njmp *%0" : : "r"(_imp__SetVolumeMountPointW));
}

void _elfimplib_SetWaitableTimer() asm("SetWaitableTimer");
void *_imp__SetWaitableTimer = NULL;
__attribute__((constructor)) void _elfimplib_init_SetWaitableTimer() {
load_dll_kernel32();
_imp__SetWaitableTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "SetWaitableTimer");
}
void _elfimplib_SetWaitableTimer() {
asm("leave\njmp *%0" : : "r"(_imp__SetWaitableTimer));
}

void _elfimplib_SetupComm() asm("SetupComm");
void *_imp__SetupComm = NULL;
__attribute__((constructor)) void _elfimplib_init_SetupComm() {
load_dll_kernel32();
_imp__SetupComm = (void *) _elf_GetProcAddress(_dll_kernel32, "SetupComm");
}
void _elfimplib_SetupComm() {
asm("leave\njmp *%0" : : "r"(_imp__SetupComm));
}

void _elfimplib_ShowConsoleCursor() asm("ShowConsoleCursor");
void *_imp__ShowConsoleCursor = NULL;
__attribute__((constructor)) void _elfimplib_init_ShowConsoleCursor() {
load_dll_kernel32();
_imp__ShowConsoleCursor = (void *) _elf_GetProcAddress(_dll_kernel32, "ShowConsoleCursor");
}
void _elfimplib_ShowConsoleCursor() {
asm("leave\njmp *%0" : : "r"(_imp__ShowConsoleCursor));
}

void _elfimplib_SignalObjectAndWait() asm("SignalObjectAndWait");
void *_imp__SignalObjectAndWait = NULL;
__attribute__((constructor)) void _elfimplib_init_SignalObjectAndWait() {
load_dll_kernel32();
_imp__SignalObjectAndWait = (void *) _elf_GetProcAddress(_dll_kernel32, "SignalObjectAndWait");
}
void _elfimplib_SignalObjectAndWait() {
asm("leave\njmp *%0" : : "r"(_imp__SignalObjectAndWait));
}

void _elfimplib_SizeofResource() asm("SizeofResource");
void *_imp__SizeofResource = NULL;
__attribute__((constructor)) void _elfimplib_init_SizeofResource() {
load_dll_kernel32();
_imp__SizeofResource = (void *) _elf_GetProcAddress(_dll_kernel32, "SizeofResource");
}
void _elfimplib_SizeofResource() {
asm("leave\njmp *%0" : : "r"(_imp__SizeofResource));
}

void _elfimplib_Sleep() asm("Sleep");
void *_imp__Sleep = NULL;
__attribute__((constructor)) void _elfimplib_init_Sleep() {
load_dll_kernel32();
_imp__Sleep = (void *) _elf_GetProcAddress(_dll_kernel32, "Sleep");
}
void _elfimplib_Sleep() {
asm("leave\njmp *%0" : : "r"(_imp__Sleep));
}

void _elfimplib_SleepEx() asm("SleepEx");
void *_imp__SleepEx = NULL;
__attribute__((constructor)) void _elfimplib_init_SleepEx() {
load_dll_kernel32();
_imp__SleepEx = (void *) _elf_GetProcAddress(_dll_kernel32, "SleepEx");
}
void _elfimplib_SleepEx() {
asm("leave\njmp *%0" : : "r"(_imp__SleepEx));
}

void _elfimplib_SuspendThread() asm("SuspendThread");
void *_imp__SuspendThread = NULL;
__attribute__((constructor)) void _elfimplib_init_SuspendThread() {
load_dll_kernel32();
_imp__SuspendThread = (void *) _elf_GetProcAddress(_dll_kernel32, "SuspendThread");
}
void _elfimplib_SuspendThread() {
asm("leave\njmp *%0" : : "r"(_imp__SuspendThread));
}

void _elfimplib_SwitchToFiber() asm("SwitchToFiber");
void *_imp__SwitchToFiber = NULL;
__attribute__((constructor)) void _elfimplib_init_SwitchToFiber() {
load_dll_kernel32();
_imp__SwitchToFiber = (void *) _elf_GetProcAddress(_dll_kernel32, "SwitchToFiber");
}
void _elfimplib_SwitchToFiber() {
asm("leave\njmp *%0" : : "r"(_imp__SwitchToFiber));
}

void _elfimplib_SwitchToThread() asm("SwitchToThread");
void *_imp__SwitchToThread = NULL;
__attribute__((constructor)) void _elfimplib_init_SwitchToThread() {
load_dll_kernel32();
_imp__SwitchToThread = (void *) _elf_GetProcAddress(_dll_kernel32, "SwitchToThread");
}
void _elfimplib_SwitchToThread() {
asm("leave\njmp *%0" : : "r"(_imp__SwitchToThread));
}

void _elfimplib_SystemTimeToFileTime() asm("SystemTimeToFileTime");
void *_imp__SystemTimeToFileTime = NULL;
__attribute__((constructor)) void _elfimplib_init_SystemTimeToFileTime() {
load_dll_kernel32();
_imp__SystemTimeToFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "SystemTimeToFileTime");
}
void _elfimplib_SystemTimeToFileTime() {
asm("leave\njmp *%0" : : "r"(_imp__SystemTimeToFileTime));
}

void _elfimplib_SystemTimeToTzSpecificLocalTime() asm("SystemTimeToTzSpecificLocalTime");
void *_imp__SystemTimeToTzSpecificLocalTime = NULL;
__attribute__((constructor)) void _elfimplib_init_SystemTimeToTzSpecificLocalTime() {
load_dll_kernel32();
_imp__SystemTimeToTzSpecificLocalTime = (void *) _elf_GetProcAddress(_dll_kernel32, "SystemTimeToTzSpecificLocalTime");
}
void _elfimplib_SystemTimeToTzSpecificLocalTime() {
asm("leave\njmp *%0" : : "r"(_imp__SystemTimeToTzSpecificLocalTime));
}

void _elfimplib_TerminateJobObject() asm("TerminateJobObject");
void *_imp__TerminateJobObject = NULL;
__attribute__((constructor)) void _elfimplib_init_TerminateJobObject() {
load_dll_kernel32();
_imp__TerminateJobObject = (void *) _elf_GetProcAddress(_dll_kernel32, "TerminateJobObject");
}
void _elfimplib_TerminateJobObject() {
asm("leave\njmp *%0" : : "r"(_imp__TerminateJobObject));
}

void _elfimplib_TerminateProcess() asm("TerminateProcess");
void *_imp__TerminateProcess = NULL;
__attribute__((constructor)) void _elfimplib_init_TerminateProcess() {
load_dll_kernel32();
_imp__TerminateProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "TerminateProcess");
}
void _elfimplib_TerminateProcess() {
asm("leave\njmp *%0" : : "r"(_imp__TerminateProcess));
}

void _elfimplib_TerminateThread() asm("TerminateThread");
void *_imp__TerminateThread = NULL;
__attribute__((constructor)) void _elfimplib_init_TerminateThread() {
load_dll_kernel32();
_imp__TerminateThread = (void *) _elf_GetProcAddress(_dll_kernel32, "TerminateThread");
}
void _elfimplib_TerminateThread() {
asm("leave\njmp *%0" : : "r"(_imp__TerminateThread));
}

void _elfimplib_TermsrvAppInstallMode() asm("TermsrvAppInstallMode");
void *_imp__TermsrvAppInstallMode = NULL;
__attribute__((constructor)) void _elfimplib_init_TermsrvAppInstallMode() {
load_dll_kernel32();
_imp__TermsrvAppInstallMode = (void *) _elf_GetProcAddress(_dll_kernel32, "TermsrvAppInstallMode");
}
void _elfimplib_TermsrvAppInstallMode() {
asm("leave\njmp *%0" : : "r"(_imp__TermsrvAppInstallMode));
}

void _elfimplib_Thread32First() asm("Thread32First");
void *_imp__Thread32First = NULL;
__attribute__((constructor)) void _elfimplib_init_Thread32First() {
load_dll_kernel32();
_imp__Thread32First = (void *) _elf_GetProcAddress(_dll_kernel32, "Thread32First");
}
void _elfimplib_Thread32First() {
asm("leave\njmp *%0" : : "r"(_imp__Thread32First));
}

void _elfimplib_Thread32Next() asm("Thread32Next");
void *_imp__Thread32Next = NULL;
__attribute__((constructor)) void _elfimplib_init_Thread32Next() {
load_dll_kernel32();
_imp__Thread32Next = (void *) _elf_GetProcAddress(_dll_kernel32, "Thread32Next");
}
void _elfimplib_Thread32Next() {
asm("leave\njmp *%0" : : "r"(_imp__Thread32Next));
}

void _elfimplib_TlsAlloc() asm("TlsAlloc");
void *_imp__TlsAlloc = NULL;
__attribute__((constructor)) void _elfimplib_init_TlsAlloc() {
load_dll_kernel32();
_imp__TlsAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "TlsAlloc");
}
void _elfimplib_TlsAlloc() {
asm("leave\njmp *%0" : : "r"(_imp__TlsAlloc));
}

void _elfimplib_TlsFree() asm("TlsFree");
void *_imp__TlsFree = NULL;
__attribute__((constructor)) void _elfimplib_init_TlsFree() {
load_dll_kernel32();
_imp__TlsFree = (void *) _elf_GetProcAddress(_dll_kernel32, "TlsFree");
}
void _elfimplib_TlsFree() {
asm("leave\njmp *%0" : : "r"(_imp__TlsFree));
}

void _elfimplib_TlsGetValue() asm("TlsGetValue");
void *_imp__TlsGetValue = NULL;
__attribute__((constructor)) void _elfimplib_init_TlsGetValue() {
load_dll_kernel32();
_imp__TlsGetValue = (void *) _elf_GetProcAddress(_dll_kernel32, "TlsGetValue");
}
void _elfimplib_TlsGetValue() {
asm("leave\njmp *%0" : : "r"(_imp__TlsGetValue));
}

void _elfimplib_TlsSetValue() asm("TlsSetValue");
void *_imp__TlsSetValue = NULL;
__attribute__((constructor)) void _elfimplib_init_TlsSetValue() {
load_dll_kernel32();
_imp__TlsSetValue = (void *) _elf_GetProcAddress(_dll_kernel32, "TlsSetValue");
}
void _elfimplib_TlsSetValue() {
asm("leave\njmp *%0" : : "r"(_imp__TlsSetValue));
}

void _elfimplib_Toolhelp32ReadProcessMemory() asm("Toolhelp32ReadProcessMemory");
void *_imp__Toolhelp32ReadProcessMemory = NULL;
__attribute__((constructor)) void _elfimplib_init_Toolhelp32ReadProcessMemory() {
load_dll_kernel32();
_imp__Toolhelp32ReadProcessMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "Toolhelp32ReadProcessMemory");
}
void _elfimplib_Toolhelp32ReadProcessMemory() {
asm("leave\njmp *%0" : : "r"(_imp__Toolhelp32ReadProcessMemory));
}

void _elfimplib_TransactNamedPipe() asm("TransactNamedPipe");
void *_imp__TransactNamedPipe = NULL;
__attribute__((constructor)) void _elfimplib_init_TransactNamedPipe() {
load_dll_kernel32();
_imp__TransactNamedPipe = (void *) _elf_GetProcAddress(_dll_kernel32, "TransactNamedPipe");
}
void _elfimplib_TransactNamedPipe() {
asm("leave\njmp *%0" : : "r"(_imp__TransactNamedPipe));
}

void _elfimplib_TransmitCommChar() asm("TransmitCommChar");
void *_imp__TransmitCommChar = NULL;
__attribute__((constructor)) void _elfimplib_init_TransmitCommChar() {
load_dll_kernel32();
_imp__TransmitCommChar = (void *) _elf_GetProcAddress(_dll_kernel32, "TransmitCommChar");
}
void _elfimplib_TransmitCommChar() {
asm("leave\njmp *%0" : : "r"(_imp__TransmitCommChar));
}

void _elfimplib_TrimVirtualBuffer() asm("TrimVirtualBuffer");
void *_imp__TrimVirtualBuffer = NULL;
__attribute__((constructor)) void _elfimplib_init_TrimVirtualBuffer() {
load_dll_kernel32();
_imp__TrimVirtualBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "TrimVirtualBuffer");
}
void _elfimplib_TrimVirtualBuffer() {
asm("leave\njmp *%0" : : "r"(_imp__TrimVirtualBuffer));
}

void _elfimplib_TryEnterCriticalSection() asm("TryEnterCriticalSection");
void *_imp__TryEnterCriticalSection = NULL;
__attribute__((constructor)) void _elfimplib_init_TryEnterCriticalSection() {
load_dll_kernel32();
_imp__TryEnterCriticalSection = (void *) _elf_GetProcAddress(_dll_kernel32, "TryEnterCriticalSection");
}
void _elfimplib_TryEnterCriticalSection() {
asm("leave\njmp *%0" : : "r"(_imp__TryEnterCriticalSection));
}

void _elfimplib_TzSpecificLocalTimeToSystemTime() asm("TzSpecificLocalTimeToSystemTime");
void *_imp__TzSpecificLocalTimeToSystemTime = NULL;
__attribute__((constructor)) void _elfimplib_init_TzSpecificLocalTimeToSystemTime() {
load_dll_kernel32();
_imp__TzSpecificLocalTimeToSystemTime = (void *) _elf_GetProcAddress(_dll_kernel32, "TzSpecificLocalTimeToSystemTime");
}
void _elfimplib_TzSpecificLocalTimeToSystemTime() {
asm("leave\njmp *%0" : : "r"(_imp__TzSpecificLocalTimeToSystemTime));
}

void _elfimplib_UTRegister() asm("UTRegister");
void *_imp__UTRegister = NULL;
__attribute__((constructor)) void _elfimplib_init_UTRegister() {
load_dll_kernel32();
_imp__UTRegister = (void *) _elf_GetProcAddress(_dll_kernel32, "UTRegister");
}
void _elfimplib_UTRegister() {
asm("leave\njmp *%0" : : "r"(_imp__UTRegister));
}

void _elfimplib_UTUnRegister() asm("UTUnRegister");
void *_imp__UTUnRegister = NULL;
__attribute__((constructor)) void _elfimplib_init_UTUnRegister() {
load_dll_kernel32();
_imp__UTUnRegister = (void *) _elf_GetProcAddress(_dll_kernel32, "UTUnRegister");
}
void _elfimplib_UTUnRegister() {
asm("leave\njmp *%0" : : "r"(_imp__UTUnRegister));
}

void _elfimplib_UnhandledExceptionFilter() asm("UnhandledExceptionFilter");
void *_imp__UnhandledExceptionFilter = NULL;
__attribute__((constructor)) void _elfimplib_init_UnhandledExceptionFilter() {
load_dll_kernel32();
_imp__UnhandledExceptionFilter = (void *) _elf_GetProcAddress(_dll_kernel32, "UnhandledExceptionFilter");
}
void _elfimplib_UnhandledExceptionFilter() {
asm("leave\njmp *%0" : : "r"(_imp__UnhandledExceptionFilter));
}

void _elfimplib_UnlockFile() asm("UnlockFile");
void *_imp__UnlockFile = NULL;
__attribute__((constructor)) void _elfimplib_init_UnlockFile() {
load_dll_kernel32();
_imp__UnlockFile = (void *) _elf_GetProcAddress(_dll_kernel32, "UnlockFile");
}
void _elfimplib_UnlockFile() {
asm("leave\njmp *%0" : : "r"(_imp__UnlockFile));
}

void _elfimplib_UnlockFileEx() asm("UnlockFileEx");
void *_imp__UnlockFileEx = NULL;
__attribute__((constructor)) void _elfimplib_init_UnlockFileEx() {
load_dll_kernel32();
_imp__UnlockFileEx = (void *) _elf_GetProcAddress(_dll_kernel32, "UnlockFileEx");
}
void _elfimplib_UnlockFileEx() {
asm("leave\njmp *%0" : : "r"(_imp__UnlockFileEx));
}

void _elfimplib_UnmapViewOfFile() asm("UnmapViewOfFile");
void *_imp__UnmapViewOfFile = NULL;
__attribute__((constructor)) void _elfimplib_init_UnmapViewOfFile() {
load_dll_kernel32();
_imp__UnmapViewOfFile = (void *) _elf_GetProcAddress(_dll_kernel32, "UnmapViewOfFile");
}
void _elfimplib_UnmapViewOfFile() {
asm("leave\njmp *%0" : : "r"(_imp__UnmapViewOfFile));
}

void _elfimplib_UnregisterConsoleIME() asm("UnregisterConsoleIME");
void *_imp__UnregisterConsoleIME = NULL;
__attribute__((constructor)) void _elfimplib_init_UnregisterConsoleIME() {
load_dll_kernel32();
_imp__UnregisterConsoleIME = (void *) _elf_GetProcAddress(_dll_kernel32, "UnregisterConsoleIME");
}
void _elfimplib_UnregisterConsoleIME() {
asm("leave\njmp *%0" : : "r"(_imp__UnregisterConsoleIME));
}

void _elfimplib_UnregisterWait() asm("UnregisterWait");
void *_imp__UnregisterWait = NULL;
__attribute__((constructor)) void _elfimplib_init_UnregisterWait() {
load_dll_kernel32();
_imp__UnregisterWait = (void *) _elf_GetProcAddress(_dll_kernel32, "UnregisterWait");
}
void _elfimplib_UnregisterWait() {
asm("leave\njmp *%0" : : "r"(_imp__UnregisterWait));
}

void _elfimplib_UnregisterWaitEx() asm("UnregisterWaitEx");
void *_imp__UnregisterWaitEx = NULL;
__attribute__((constructor)) void _elfimplib_init_UnregisterWaitEx() {
load_dll_kernel32();
_imp__UnregisterWaitEx = (void *) _elf_GetProcAddress(_dll_kernel32, "UnregisterWaitEx");
}
void _elfimplib_UnregisterWaitEx() {
asm("leave\njmp *%0" : : "r"(_imp__UnregisterWaitEx));
}

void _elfimplib_UpdateResourceA() asm("UpdateResourceA");
void *_imp__UpdateResourceA = NULL;
__attribute__((constructor)) void _elfimplib_init_UpdateResourceA() {
load_dll_kernel32();
_imp__UpdateResourceA = (void *) _elf_GetProcAddress(_dll_kernel32, "UpdateResourceA");
}
void _elfimplib_UpdateResourceA() {
asm("leave\njmp *%0" : : "r"(_imp__UpdateResourceA));
}

void _elfimplib_UpdateResourceW() asm("UpdateResourceW");
void *_imp__UpdateResourceW = NULL;
__attribute__((constructor)) void _elfimplib_init_UpdateResourceW() {
load_dll_kernel32();
_imp__UpdateResourceW = (void *) _elf_GetProcAddress(_dll_kernel32, "UpdateResourceW");
}
void _elfimplib_UpdateResourceW() {
asm("leave\njmp *%0" : : "r"(_imp__UpdateResourceW));
}

void _elfimplib_VDMConsoleOperation() asm("VDMConsoleOperation");
void *_imp__VDMConsoleOperation = NULL;
__attribute__((constructor)) void _elfimplib_init_VDMConsoleOperation() {
load_dll_kernel32();
_imp__VDMConsoleOperation = (void *) _elf_GetProcAddress(_dll_kernel32, "VDMConsoleOperation");
}
void _elfimplib_VDMConsoleOperation() {
asm("leave\njmp *%0" : : "r"(_imp__VDMConsoleOperation));
}

void _elfimplib_VDMOperationStarted() asm("VDMOperationStarted");
void *_imp__VDMOperationStarted = NULL;
__attribute__((constructor)) void _elfimplib_init_VDMOperationStarted() {
load_dll_kernel32();
_imp__VDMOperationStarted = (void *) _elf_GetProcAddress(_dll_kernel32, "VDMOperationStarted");
}
void _elfimplib_VDMOperationStarted() {
asm("leave\njmp *%0" : : "r"(_imp__VDMOperationStarted));
}

void _elfimplib_ValidateLCType() asm("ValidateLCType");
void *_imp__ValidateLCType = NULL;
__attribute__((constructor)) void _elfimplib_init_ValidateLCType() {
load_dll_kernel32();
_imp__ValidateLCType = (void *) _elf_GetProcAddress(_dll_kernel32, "ValidateLCType");
}
void _elfimplib_ValidateLCType() {
asm("leave\njmp *%0" : : "r"(_imp__ValidateLCType));
}

void _elfimplib_ValidateLocale() asm("ValidateLocale");
void *_imp__ValidateLocale = NULL;
__attribute__((constructor)) void _elfimplib_init_ValidateLocale() {
load_dll_kernel32();
_imp__ValidateLocale = (void *) _elf_GetProcAddress(_dll_kernel32, "ValidateLocale");
}
void _elfimplib_ValidateLocale() {
asm("leave\njmp *%0" : : "r"(_imp__ValidateLocale));
}

void _elfimplib_VerLanguageNameA() asm("VerLanguageNameA");
void *_imp__VerLanguageNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_VerLanguageNameA() {
load_dll_kernel32();
_imp__VerLanguageNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "VerLanguageNameA");
}
void _elfimplib_VerLanguageNameA() {
asm("leave\njmp *%0" : : "r"(_imp__VerLanguageNameA));
}

void _elfimplib_VerLanguageNameW() asm("VerLanguageNameW");
void *_imp__VerLanguageNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_VerLanguageNameW() {
load_dll_kernel32();
_imp__VerLanguageNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "VerLanguageNameW");
}
void _elfimplib_VerLanguageNameW() {
asm("leave\njmp *%0" : : "r"(_imp__VerLanguageNameW));
}

void _elfimplib_VerSetConditionMask() asm("VerSetConditionMask");
void *_imp__VerSetConditionMask = NULL;
__attribute__((constructor)) void _elfimplib_init_VerSetConditionMask() {
load_dll_kernel32();
_imp__VerSetConditionMask = (void *) _elf_GetProcAddress(_dll_kernel32, "VerSetConditionMask");
}
void _elfimplib_VerSetConditionMask() {
asm("leave\njmp *%0" : : "r"(_imp__VerSetConditionMask));
}

void _elfimplib_VerifyConsoleIoHandle() asm("VerifyConsoleIoHandle");
void *_imp__VerifyConsoleIoHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_VerifyConsoleIoHandle() {
load_dll_kernel32();
_imp__VerifyConsoleIoHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "VerifyConsoleIoHandle");
}
void _elfimplib_VerifyConsoleIoHandle() {
asm("leave\njmp *%0" : : "r"(_imp__VerifyConsoleIoHandle));
}

void _elfimplib_VerifyVersionInfoA() asm("VerifyVersionInfoA");
void *_imp__VerifyVersionInfoA = NULL;
__attribute__((constructor)) void _elfimplib_init_VerifyVersionInfoA() {
load_dll_kernel32();
_imp__VerifyVersionInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "VerifyVersionInfoA");
}
void _elfimplib_VerifyVersionInfoA() {
asm("leave\njmp *%0" : : "r"(_imp__VerifyVersionInfoA));
}

void _elfimplib_VerifyVersionInfoW() asm("VerifyVersionInfoW");
void *_imp__VerifyVersionInfoW = NULL;
__attribute__((constructor)) void _elfimplib_init_VerifyVersionInfoW() {
load_dll_kernel32();
_imp__VerifyVersionInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "VerifyVersionInfoW");
}
void _elfimplib_VerifyVersionInfoW() {
asm("leave\njmp *%0" : : "r"(_imp__VerifyVersionInfoW));
}

void _elfimplib_VirtualAlloc() asm("VirtualAlloc");
void *_imp__VirtualAlloc = NULL;
__attribute__((constructor)) void _elfimplib_init_VirtualAlloc() {
load_dll_kernel32();
_imp__VirtualAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualAlloc");
}
void _elfimplib_VirtualAlloc() {
asm("leave\njmp *%0" : : "r"(_imp__VirtualAlloc));
}

void _elfimplib_VirtualAllocEx() asm("VirtualAllocEx");
void *_imp__VirtualAllocEx = NULL;
__attribute__((constructor)) void _elfimplib_init_VirtualAllocEx() {
load_dll_kernel32();
_imp__VirtualAllocEx = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualAllocEx");
}
void _elfimplib_VirtualAllocEx() {
asm("leave\njmp *%0" : : "r"(_imp__VirtualAllocEx));
}

void _elfimplib_VirtualBufferExceptionHandler() asm("VirtualBufferExceptionHandler");
void *_imp__VirtualBufferExceptionHandler = NULL;
__attribute__((constructor)) void _elfimplib_init_VirtualBufferExceptionHandler() {
load_dll_kernel32();
_imp__VirtualBufferExceptionHandler = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualBufferExceptionHandler");
}
void _elfimplib_VirtualBufferExceptionHandler() {
asm("leave\njmp *%0" : : "r"(_imp__VirtualBufferExceptionHandler));
}

void _elfimplib_VirtualFree() asm("VirtualFree");
void *_imp__VirtualFree = NULL;
__attribute__((constructor)) void _elfimplib_init_VirtualFree() {
load_dll_kernel32();
_imp__VirtualFree = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualFree");
}
void _elfimplib_VirtualFree() {
asm("leave\njmp *%0" : : "r"(_imp__VirtualFree));
}

void _elfimplib_VirtualFreeEx() asm("VirtualFreeEx");
void *_imp__VirtualFreeEx = NULL;
__attribute__((constructor)) void _elfimplib_init_VirtualFreeEx() {
load_dll_kernel32();
_imp__VirtualFreeEx = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualFreeEx");
}
void _elfimplib_VirtualFreeEx() {
asm("leave\njmp *%0" : : "r"(_imp__VirtualFreeEx));
}

void _elfimplib_VirtualLock() asm("VirtualLock");
void *_imp__VirtualLock = NULL;
__attribute__((constructor)) void _elfimplib_init_VirtualLock() {
load_dll_kernel32();
_imp__VirtualLock = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualLock");
}
void _elfimplib_VirtualLock() {
asm("leave\njmp *%0" : : "r"(_imp__VirtualLock));
}

void _elfimplib_VirtualProtect() asm("VirtualProtect");
void *_imp__VirtualProtect = NULL;
__attribute__((constructor)) void _elfimplib_init_VirtualProtect() {
load_dll_kernel32();
_imp__VirtualProtect = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualProtect");
}
void _elfimplib_VirtualProtect() {
asm("leave\njmp *%0" : : "r"(_imp__VirtualProtect));
}

void _elfimplib_VirtualProtectEx() asm("VirtualProtectEx");
void *_imp__VirtualProtectEx = NULL;
__attribute__((constructor)) void _elfimplib_init_VirtualProtectEx() {
load_dll_kernel32();
_imp__VirtualProtectEx = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualProtectEx");
}
void _elfimplib_VirtualProtectEx() {
asm("leave\njmp *%0" : : "r"(_imp__VirtualProtectEx));
}

void _elfimplib_VirtualQuery() asm("VirtualQuery");
void *_imp__VirtualQuery = NULL;
__attribute__((constructor)) void _elfimplib_init_VirtualQuery() {
load_dll_kernel32();
_imp__VirtualQuery = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualQuery");
}
void _elfimplib_VirtualQuery() {
asm("leave\njmp *%0" : : "r"(_imp__VirtualQuery));
}

void _elfimplib_VirtualQueryEx() asm("VirtualQueryEx");
void *_imp__VirtualQueryEx = NULL;
__attribute__((constructor)) void _elfimplib_init_VirtualQueryEx() {
load_dll_kernel32();
_imp__VirtualQueryEx = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualQueryEx");
}
void _elfimplib_VirtualQueryEx() {
asm("leave\njmp *%0" : : "r"(_imp__VirtualQueryEx));
}

void _elfimplib_VirtualUnlock() asm("VirtualUnlock");
void *_imp__VirtualUnlock = NULL;
__attribute__((constructor)) void _elfimplib_init_VirtualUnlock() {
load_dll_kernel32();
_imp__VirtualUnlock = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualUnlock");
}
void _elfimplib_VirtualUnlock() {
asm("leave\njmp *%0" : : "r"(_imp__VirtualUnlock));
}

void _elfimplib_WTSGetActiveConsoleSessionId() asm("WTSGetActiveConsoleSessionId");
void *_imp__WTSGetActiveConsoleSessionId = NULL;
__attribute__((constructor)) void _elfimplib_init_WTSGetActiveConsoleSessionId() {
load_dll_kernel32();
_imp__WTSGetActiveConsoleSessionId = (void *) _elf_GetProcAddress(_dll_kernel32, "WTSGetActiveConsoleSessionId");
}
void _elfimplib_WTSGetActiveConsoleSessionId() {
asm("leave\njmp *%0" : : "r"(_imp__WTSGetActiveConsoleSessionId));
}

void _elfimplib_WaitCommEvent() asm("WaitCommEvent");
void *_imp__WaitCommEvent = NULL;
__attribute__((constructor)) void _elfimplib_init_WaitCommEvent() {
load_dll_kernel32();
_imp__WaitCommEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitCommEvent");
}
void _elfimplib_WaitCommEvent() {
asm("leave\njmp *%0" : : "r"(_imp__WaitCommEvent));
}

void _elfimplib_WaitForDebugEvent() asm("WaitForDebugEvent");
void *_imp__WaitForDebugEvent = NULL;
__attribute__((constructor)) void _elfimplib_init_WaitForDebugEvent() {
load_dll_kernel32();
_imp__WaitForDebugEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitForDebugEvent");
}
void _elfimplib_WaitForDebugEvent() {
asm("leave\njmp *%0" : : "r"(_imp__WaitForDebugEvent));
}

void _elfimplib_WaitForMultipleObjects() asm("WaitForMultipleObjects");
void *_imp__WaitForMultipleObjects = NULL;
__attribute__((constructor)) void _elfimplib_init_WaitForMultipleObjects() {
load_dll_kernel32();
_imp__WaitForMultipleObjects = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitForMultipleObjects");
}
void _elfimplib_WaitForMultipleObjects() {
asm("leave\njmp *%0" : : "r"(_imp__WaitForMultipleObjects));
}

void _elfimplib_WaitForMultipleObjectsEx() asm("WaitForMultipleObjectsEx");
void *_imp__WaitForMultipleObjectsEx = NULL;
__attribute__((constructor)) void _elfimplib_init_WaitForMultipleObjectsEx() {
load_dll_kernel32();
_imp__WaitForMultipleObjectsEx = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitForMultipleObjectsEx");
}
void _elfimplib_WaitForMultipleObjectsEx() {
asm("leave\njmp *%0" : : "r"(_imp__WaitForMultipleObjectsEx));
}

void _elfimplib_WaitForSingleObject() asm("WaitForSingleObject");
void *_imp__WaitForSingleObject = NULL;
__attribute__((constructor)) void _elfimplib_init_WaitForSingleObject() {
load_dll_kernel32();
_imp__WaitForSingleObject = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitForSingleObject");
}
void _elfimplib_WaitForSingleObject() {
asm("leave\njmp *%0" : : "r"(_imp__WaitForSingleObject));
}

void _elfimplib_WaitForSingleObjectEx() asm("WaitForSingleObjectEx");
void *_imp__WaitForSingleObjectEx = NULL;
__attribute__((constructor)) void _elfimplib_init_WaitForSingleObjectEx() {
load_dll_kernel32();
_imp__WaitForSingleObjectEx = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitForSingleObjectEx");
}
void _elfimplib_WaitForSingleObjectEx() {
asm("leave\njmp *%0" : : "r"(_imp__WaitForSingleObjectEx));
}

void _elfimplib_WaitNamedPipeA() asm("WaitNamedPipeA");
void *_imp__WaitNamedPipeA = NULL;
__attribute__((constructor)) void _elfimplib_init_WaitNamedPipeA() {
load_dll_kernel32();
_imp__WaitNamedPipeA = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitNamedPipeA");
}
void _elfimplib_WaitNamedPipeA() {
asm("leave\njmp *%0" : : "r"(_imp__WaitNamedPipeA));
}

void _elfimplib_WaitNamedPipeW() asm("WaitNamedPipeW");
void *_imp__WaitNamedPipeW = NULL;
__attribute__((constructor)) void _elfimplib_init_WaitNamedPipeW() {
load_dll_kernel32();
_imp__WaitNamedPipeW = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitNamedPipeW");
}
void _elfimplib_WaitNamedPipeW() {
asm("leave\njmp *%0" : : "r"(_imp__WaitNamedPipeW));
}

void _elfimplib_WideCharToMultiByte() asm("WideCharToMultiByte");
void *_imp__WideCharToMultiByte = NULL;
__attribute__((constructor)) void _elfimplib_init_WideCharToMultiByte() {
load_dll_kernel32();
_imp__WideCharToMultiByte = (void *) _elf_GetProcAddress(_dll_kernel32, "WideCharToMultiByte");
}
void _elfimplib_WideCharToMultiByte() {
asm("leave\njmp *%0" : : "r"(_imp__WideCharToMultiByte));
}

void _elfimplib_WinExec() asm("WinExec");
void *_imp__WinExec = NULL;
__attribute__((constructor)) void _elfimplib_init_WinExec() {
load_dll_kernel32();
_imp__WinExec = (void *) _elf_GetProcAddress(_dll_kernel32, "WinExec");
}
void _elfimplib_WinExec() {
asm("leave\njmp *%0" : : "r"(_imp__WinExec));
}

void _elfimplib_WriteConsoleA() asm("WriteConsoleA");
void *_imp__WriteConsoleA = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteConsoleA() {
load_dll_kernel32();
_imp__WriteConsoleA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleA");
}
void _elfimplib_WriteConsoleA() {
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleA));
}

void _elfimplib_WriteConsoleInputA() asm("WriteConsoleInputA");
void *_imp__WriteConsoleInputA = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteConsoleInputA() {
load_dll_kernel32();
_imp__WriteConsoleInputA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleInputA");
}
void _elfimplib_WriteConsoleInputA() {
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleInputA));
}

void _elfimplib_WriteConsoleInputVDMA() asm("WriteConsoleInputVDMA");
void *_imp__WriteConsoleInputVDMA = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteConsoleInputVDMA() {
load_dll_kernel32();
_imp__WriteConsoleInputVDMA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleInputVDMA");
}
void _elfimplib_WriteConsoleInputVDMA() {
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleInputVDMA));
}

void _elfimplib_WriteConsoleInputVDMW() asm("WriteConsoleInputVDMW");
void *_imp__WriteConsoleInputVDMW = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteConsoleInputVDMW() {
load_dll_kernel32();
_imp__WriteConsoleInputVDMW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleInputVDMW");
}
void _elfimplib_WriteConsoleInputVDMW() {
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleInputVDMW));
}

void _elfimplib_WriteConsoleInputW() asm("WriteConsoleInputW");
void *_imp__WriteConsoleInputW = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteConsoleInputW() {
load_dll_kernel32();
_imp__WriteConsoleInputW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleInputW");
}
void _elfimplib_WriteConsoleInputW() {
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleInputW));
}

void _elfimplib_WriteConsoleOutputA() asm("WriteConsoleOutputA");
void *_imp__WriteConsoleOutputA = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteConsoleOutputA() {
load_dll_kernel32();
_imp__WriteConsoleOutputA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleOutputA");
}
void _elfimplib_WriteConsoleOutputA() {
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleOutputA));
}

void _elfimplib_WriteConsoleOutputAttribute() asm("WriteConsoleOutputAttribute");
void *_imp__WriteConsoleOutputAttribute = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteConsoleOutputAttribute() {
load_dll_kernel32();
_imp__WriteConsoleOutputAttribute = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleOutputAttribute");
}
void _elfimplib_WriteConsoleOutputAttribute() {
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleOutputAttribute));
}

void _elfimplib_WriteConsoleOutputCharacterA() asm("WriteConsoleOutputCharacterA");
void *_imp__WriteConsoleOutputCharacterA = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteConsoleOutputCharacterA() {
load_dll_kernel32();
_imp__WriteConsoleOutputCharacterA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleOutputCharacterA");
}
void _elfimplib_WriteConsoleOutputCharacterA() {
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleOutputCharacterA));
}

void _elfimplib_WriteConsoleOutputCharacterW() asm("WriteConsoleOutputCharacterW");
void *_imp__WriteConsoleOutputCharacterW = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteConsoleOutputCharacterW() {
load_dll_kernel32();
_imp__WriteConsoleOutputCharacterW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleOutputCharacterW");
}
void _elfimplib_WriteConsoleOutputCharacterW() {
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleOutputCharacterW));
}

void _elfimplib_WriteConsoleOutputW() asm("WriteConsoleOutputW");
void *_imp__WriteConsoleOutputW = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteConsoleOutputW() {
load_dll_kernel32();
_imp__WriteConsoleOutputW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleOutputW");
}
void _elfimplib_WriteConsoleOutputW() {
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleOutputW));
}

void _elfimplib_WriteConsoleW() asm("WriteConsoleW");
void *_imp__WriteConsoleW = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteConsoleW() {
load_dll_kernel32();
_imp__WriteConsoleW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleW");
}
void _elfimplib_WriteConsoleW() {
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleW));
}

void _elfimplib_WriteFile() asm("WriteFile");
void *_imp__WriteFile = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteFile() {
load_dll_kernel32();
_imp__WriteFile = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteFile");
}
void _elfimplib_WriteFile() {
asm("leave\njmp *%0" : : "r"(_imp__WriteFile));
}

void _elfimplib_WriteFileEx() asm("WriteFileEx");
void *_imp__WriteFileEx = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteFileEx() {
load_dll_kernel32();
_imp__WriteFileEx = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteFileEx");
}
void _elfimplib_WriteFileEx() {
asm("leave\njmp *%0" : : "r"(_imp__WriteFileEx));
}

void _elfimplib_WriteFileGather() asm("WriteFileGather");
void *_imp__WriteFileGather = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteFileGather() {
load_dll_kernel32();
_imp__WriteFileGather = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteFileGather");
}
void _elfimplib_WriteFileGather() {
asm("leave\njmp *%0" : : "r"(_imp__WriteFileGather));
}

void _elfimplib_WritePrivateProfileSectionA() asm("WritePrivateProfileSectionA");
void *_imp__WritePrivateProfileSectionA = NULL;
__attribute__((constructor)) void _elfimplib_init_WritePrivateProfileSectionA() {
load_dll_kernel32();
_imp__WritePrivateProfileSectionA = (void *) _elf_GetProcAddress(_dll_kernel32, "WritePrivateProfileSectionA");
}
void _elfimplib_WritePrivateProfileSectionA() {
asm("leave\njmp *%0" : : "r"(_imp__WritePrivateProfileSectionA));
}

void _elfimplib_WritePrivateProfileSectionW() asm("WritePrivateProfileSectionW");
void *_imp__WritePrivateProfileSectionW = NULL;
__attribute__((constructor)) void _elfimplib_init_WritePrivateProfileSectionW() {
load_dll_kernel32();
_imp__WritePrivateProfileSectionW = (void *) _elf_GetProcAddress(_dll_kernel32, "WritePrivateProfileSectionW");
}
void _elfimplib_WritePrivateProfileSectionW() {
asm("leave\njmp *%0" : : "r"(_imp__WritePrivateProfileSectionW));
}

void _elfimplib_WritePrivateProfileStringA() asm("WritePrivateProfileStringA");
void *_imp__WritePrivateProfileStringA = NULL;
__attribute__((constructor)) void _elfimplib_init_WritePrivateProfileStringA() {
load_dll_kernel32();
_imp__WritePrivateProfileStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "WritePrivateProfileStringA");
}
void _elfimplib_WritePrivateProfileStringA() {
asm("leave\njmp *%0" : : "r"(_imp__WritePrivateProfileStringA));
}

void _elfimplib_WritePrivateProfileStringW() asm("WritePrivateProfileStringW");
void *_imp__WritePrivateProfileStringW = NULL;
__attribute__((constructor)) void _elfimplib_init_WritePrivateProfileStringW() {
load_dll_kernel32();
_imp__WritePrivateProfileStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "WritePrivateProfileStringW");
}
void _elfimplib_WritePrivateProfileStringW() {
asm("leave\njmp *%0" : : "r"(_imp__WritePrivateProfileStringW));
}

void _elfimplib_WritePrivateProfileStructA() asm("WritePrivateProfileStructA");
void *_imp__WritePrivateProfileStructA = NULL;
__attribute__((constructor)) void _elfimplib_init_WritePrivateProfileStructA() {
load_dll_kernel32();
_imp__WritePrivateProfileStructA = (void *) _elf_GetProcAddress(_dll_kernel32, "WritePrivateProfileStructA");
}
void _elfimplib_WritePrivateProfileStructA() {
asm("leave\njmp *%0" : : "r"(_imp__WritePrivateProfileStructA));
}

void _elfimplib_WritePrivateProfileStructW() asm("WritePrivateProfileStructW");
void *_imp__WritePrivateProfileStructW = NULL;
__attribute__((constructor)) void _elfimplib_init_WritePrivateProfileStructW() {
load_dll_kernel32();
_imp__WritePrivateProfileStructW = (void *) _elf_GetProcAddress(_dll_kernel32, "WritePrivateProfileStructW");
}
void _elfimplib_WritePrivateProfileStructW() {
asm("leave\njmp *%0" : : "r"(_imp__WritePrivateProfileStructW));
}

void _elfimplib_WriteProcessMemory() asm("WriteProcessMemory");
void *_imp__WriteProcessMemory = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteProcessMemory() {
load_dll_kernel32();
_imp__WriteProcessMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteProcessMemory");
}
void _elfimplib_WriteProcessMemory() {
asm("leave\njmp *%0" : : "r"(_imp__WriteProcessMemory));
}

void _elfimplib_WriteProfileSectionA() asm("WriteProfileSectionA");
void *_imp__WriteProfileSectionA = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteProfileSectionA() {
load_dll_kernel32();
_imp__WriteProfileSectionA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteProfileSectionA");
}
void _elfimplib_WriteProfileSectionA() {
asm("leave\njmp *%0" : : "r"(_imp__WriteProfileSectionA));
}

void _elfimplib_WriteProfileSectionW() asm("WriteProfileSectionW");
void *_imp__WriteProfileSectionW = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteProfileSectionW() {
load_dll_kernel32();
_imp__WriteProfileSectionW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteProfileSectionW");
}
void _elfimplib_WriteProfileSectionW() {
asm("leave\njmp *%0" : : "r"(_imp__WriteProfileSectionW));
}

void _elfimplib_WriteProfileStringA() asm("WriteProfileStringA");
void *_imp__WriteProfileStringA = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteProfileStringA() {
load_dll_kernel32();
_imp__WriteProfileStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteProfileStringA");
}
void _elfimplib_WriteProfileStringA() {
asm("leave\njmp *%0" : : "r"(_imp__WriteProfileStringA));
}

void _elfimplib_WriteProfileStringW() asm("WriteProfileStringW");
void *_imp__WriteProfileStringW = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteProfileStringW() {
load_dll_kernel32();
_imp__WriteProfileStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteProfileStringW");
}
void _elfimplib_WriteProfileStringW() {
asm("leave\njmp *%0" : : "r"(_imp__WriteProfileStringW));
}

void _elfimplib_WriteTapemark() asm("WriteTapemark");
void *_imp__WriteTapemark = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteTapemark() {
load_dll_kernel32();
_imp__WriteTapemark = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteTapemark");
}
void _elfimplib_WriteTapemark() {
asm("leave\njmp *%0" : : "r"(_imp__WriteTapemark));
}

void _elfimplib_ZombifyActCtx() asm("ZombifyActCtx");
void *_imp__ZombifyActCtx = NULL;
__attribute__((constructor)) void _elfimplib_init_ZombifyActCtx() {
load_dll_kernel32();
_imp__ZombifyActCtx = (void *) _elf_GetProcAddress(_dll_kernel32, "ZombifyActCtx");
}
void _elfimplib_ZombifyActCtx() {
asm("leave\njmp *%0" : : "r"(_imp__ZombifyActCtx));
}

void _elfimplib__hread() asm("hread");
void *_imp___hread = NULL;
__attribute__((constructor)) void _elfimplib_init__hread() {
load_dll_kernel32();
_imp___hread = (void *) _elf_GetProcAddress(_dll_kernel32, "_hread");
}
void _elfimplib__hread() {
asm("leave\njmp *%0" : : "r"(_imp___hread));
}

void _elfimplib__hwrite() asm("hwrite");
void *_imp___hwrite = NULL;
__attribute__((constructor)) void _elfimplib_init__hwrite() {
load_dll_kernel32();
_imp___hwrite = (void *) _elf_GetProcAddress(_dll_kernel32, "_hwrite");
}
void _elfimplib__hwrite() {
asm("leave\njmp *%0" : : "r"(_imp___hwrite));
}

void _elfimplib__lclose() asm("lclose");
void *_imp___lclose = NULL;
__attribute__((constructor)) void _elfimplib_init__lclose() {
load_dll_kernel32();
_imp___lclose = (void *) _elf_GetProcAddress(_dll_kernel32, "_lclose");
}
void _elfimplib__lclose() {
asm("leave\njmp *%0" : : "r"(_imp___lclose));
}

void _elfimplib__lcreat() asm("lcreat");
void *_imp___lcreat = NULL;
__attribute__((constructor)) void _elfimplib_init__lcreat() {
load_dll_kernel32();
_imp___lcreat = (void *) _elf_GetProcAddress(_dll_kernel32, "_lcreat");
}
void _elfimplib__lcreat() {
asm("leave\njmp *%0" : : "r"(_imp___lcreat));
}

void _elfimplib__llseek() asm("llseek");
void *_imp___llseek = NULL;
__attribute__((constructor)) void _elfimplib_init__llseek() {
load_dll_kernel32();
_imp___llseek = (void *) _elf_GetProcAddress(_dll_kernel32, "_llseek");
}
void _elfimplib__llseek() {
asm("leave\njmp *%0" : : "r"(_imp___llseek));
}

void _elfimplib__lopen() asm("lopen");
void *_imp___lopen = NULL;
__attribute__((constructor)) void _elfimplib_init__lopen() {
load_dll_kernel32();
_imp___lopen = (void *) _elf_GetProcAddress(_dll_kernel32, "_lopen");
}
void _elfimplib__lopen() {
asm("leave\njmp *%0" : : "r"(_imp___lopen));
}

void _elfimplib__lread() asm("lread");
void *_imp___lread = NULL;
__attribute__((constructor)) void _elfimplib_init__lread() {
load_dll_kernel32();
_imp___lread = (void *) _elf_GetProcAddress(_dll_kernel32, "_lread");
}
void _elfimplib__lread() {
asm("leave\njmp *%0" : : "r"(_imp___lread));
}

void _elfimplib__lwrite() asm("lwrite");
void *_imp___lwrite = NULL;
__attribute__((constructor)) void _elfimplib_init__lwrite() {
load_dll_kernel32();
_imp___lwrite = (void *) _elf_GetProcAddress(_dll_kernel32, "_lwrite");
}
void _elfimplib__lwrite() {
asm("leave\njmp *%0" : : "r"(_imp___lwrite));
}

void _elfimplib_lstrcat() asm("lstrcat");
void *_imp__lstrcat = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcat() {
load_dll_kernel32();
_imp__lstrcat = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcat");
}
void _elfimplib_lstrcat() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcat));
}

void _elfimplib_lstrcatA() asm("lstrcatA");
void *_imp__lstrcatA = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcatA() {
load_dll_kernel32();
_imp__lstrcatA = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcatA");
}
void _elfimplib_lstrcatA() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcatA));
}

void _elfimplib_lstrcatW() asm("lstrcatW");
void *_imp__lstrcatW = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcatW() {
load_dll_kernel32();
_imp__lstrcatW = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcatW");
}
void _elfimplib_lstrcatW() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcatW));
}

void _elfimplib_lstrcmp() asm("lstrcmp");
void *_imp__lstrcmp = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcmp() {
load_dll_kernel32();
_imp__lstrcmp = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcmp");
}
void _elfimplib_lstrcmp() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcmp));
}

void _elfimplib_lstrcmpA() asm("lstrcmpA");
void *_imp__lstrcmpA = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcmpA() {
load_dll_kernel32();
_imp__lstrcmpA = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcmpA");
}
void _elfimplib_lstrcmpA() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcmpA));
}

void _elfimplib_lstrcmpW() asm("lstrcmpW");
void *_imp__lstrcmpW = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcmpW() {
load_dll_kernel32();
_imp__lstrcmpW = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcmpW");
}
void _elfimplib_lstrcmpW() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcmpW));
}

void _elfimplib_lstrcmpi() asm("lstrcmpi");
void *_imp__lstrcmpi = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcmpi() {
load_dll_kernel32();
_imp__lstrcmpi = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcmpi");
}
void _elfimplib_lstrcmpi() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcmpi));
}

void _elfimplib_lstrcmpiA() asm("lstrcmpiA");
void *_imp__lstrcmpiA = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcmpiA() {
load_dll_kernel32();
_imp__lstrcmpiA = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcmpiA");
}
void _elfimplib_lstrcmpiA() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcmpiA));
}

void _elfimplib_lstrcmpiW() asm("lstrcmpiW");
void *_imp__lstrcmpiW = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcmpiW() {
load_dll_kernel32();
_imp__lstrcmpiW = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcmpiW");
}
void _elfimplib_lstrcmpiW() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcmpiW));
}

void _elfimplib_lstrcpy() asm("lstrcpy");
void *_imp__lstrcpy = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcpy() {
load_dll_kernel32();
_imp__lstrcpy = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcpy");
}
void _elfimplib_lstrcpy() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcpy));
}

void _elfimplib_lstrcpyA() asm("lstrcpyA");
void *_imp__lstrcpyA = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcpyA() {
load_dll_kernel32();
_imp__lstrcpyA = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcpyA");
}
void _elfimplib_lstrcpyA() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcpyA));
}

void _elfimplib_lstrcpyW() asm("lstrcpyW");
void *_imp__lstrcpyW = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcpyW() {
load_dll_kernel32();
_imp__lstrcpyW = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcpyW");
}
void _elfimplib_lstrcpyW() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcpyW));
}

void _elfimplib_lstrcpyn() asm("lstrcpyn");
void *_imp__lstrcpyn = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcpyn() {
load_dll_kernel32();
_imp__lstrcpyn = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcpyn");
}
void _elfimplib_lstrcpyn() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcpyn));
}

void _elfimplib_lstrcpynA() asm("lstrcpynA");
void *_imp__lstrcpynA = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcpynA() {
load_dll_kernel32();
_imp__lstrcpynA = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcpynA");
}
void _elfimplib_lstrcpynA() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcpynA));
}

void _elfimplib_lstrcpynW() asm("lstrcpynW");
void *_imp__lstrcpynW = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrcpynW() {
load_dll_kernel32();
_imp__lstrcpynW = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcpynW");
}
void _elfimplib_lstrcpynW() {
asm("leave\njmp *%0" : : "r"(_imp__lstrcpynW));
}

void _elfimplib_lstrlen() asm("lstrlen");
void *_imp__lstrlen = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrlen() {
load_dll_kernel32();
_imp__lstrlen = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrlen");
}
void _elfimplib_lstrlen() {
asm("leave\njmp *%0" : : "r"(_imp__lstrlen));
}

void _elfimplib_lstrlenA() asm("lstrlenA");
void *_imp__lstrlenA = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrlenA() {
load_dll_kernel32();
_imp__lstrlenA = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrlenA");
}
void _elfimplib_lstrlenA() {
asm("leave\njmp *%0" : : "r"(_imp__lstrlenA));
}

void _elfimplib_lstrlenW() asm("lstrlenW");
void *_imp__lstrlenW = NULL;
__attribute__((constructor)) void _elfimplib_init_lstrlenW() {
load_dll_kernel32();
_imp__lstrlenW = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrlenW");
}
void _elfimplib_lstrlenW() {
asm("leave\njmp *%0" : : "r"(_imp__lstrlenW));
}

