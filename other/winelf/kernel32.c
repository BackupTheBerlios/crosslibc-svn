#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>

extern WINBASEAPI HMODULE WINAPI (*_elf_LoadLibraryA)(LPCSTR);
extern WINBASEAPI HMODULE WINAPI (*_elf_GetModuleHandleA)(LPCSTR);
extern WINBASEAPI FARPROC WINAPI (*_elf_GetProcAddress)(HMODULE,LPCSTR);

HMODULE _dll_kernel32 = NULL;

void load_dll_kernel32() {
if (!_dll_kernel32) {
_dll_kernel32 = _elf_LoadLibraryA("kernel32");
}
}

void _elf_ActivateActCtx() asm("ActivateActCtx");
void _elf_ActivateActCtx() {
static void *_vptr_ActivateActCtx = NULL;
load_dll_kernel32();
if (!_vptr_ActivateActCtx) {
_vptr_ActivateActCtx = (void *) _elf_GetProcAddress(_dll_kernel32, "ActivateActCtx");
}
asm("leave\njmp *%0" : : "r"(_vptr_ActivateActCtx));
}

void _elf_AddAtomA() asm("AddAtomA");
void _elf_AddAtomA() {
static void *_vptr_AddAtomA = NULL;
load_dll_kernel32();
if (!_vptr_AddAtomA) {
_vptr_AddAtomA = (void *) _elf_GetProcAddress(_dll_kernel32, "AddAtomA");
}
asm("leave\njmp *%0" : : "r"(_vptr_AddAtomA));
}

void _elf_AddAtomW() asm("AddAtomW");
void _elf_AddAtomW() {
static void *_vptr_AddAtomW = NULL;
load_dll_kernel32();
if (!_vptr_AddAtomW) {
_vptr_AddAtomW = (void *) _elf_GetProcAddress(_dll_kernel32, "AddAtomW");
}
asm("leave\njmp *%0" : : "r"(_vptr_AddAtomW));
}

void _elf_AddConsoleAliasA() asm("AddConsoleAliasA");
void _elf_AddConsoleAliasA() {
static void *_vptr_AddConsoleAliasA = NULL;
load_dll_kernel32();
if (!_vptr_AddConsoleAliasA) {
_vptr_AddConsoleAliasA = (void *) _elf_GetProcAddress(_dll_kernel32, "AddConsoleAliasA");
}
asm("leave\njmp *%0" : : "r"(_vptr_AddConsoleAliasA));
}

void _elf_AddConsoleAliasW() asm("AddConsoleAliasW");
void _elf_AddConsoleAliasW() {
static void *_vptr_AddConsoleAliasW = NULL;
load_dll_kernel32();
if (!_vptr_AddConsoleAliasW) {
_vptr_AddConsoleAliasW = (void *) _elf_GetProcAddress(_dll_kernel32, "AddConsoleAliasW");
}
asm("leave\njmp *%0" : : "r"(_vptr_AddConsoleAliasW));
}

void _elf_AddLocalAlternateComputerNameA() asm("AddLocalAlternateComputerNameA");
void _elf_AddLocalAlternateComputerNameA() {
static void *_vptr_AddLocalAlternateComputerNameA = NULL;
load_dll_kernel32();
if (!_vptr_AddLocalAlternateComputerNameA) {
_vptr_AddLocalAlternateComputerNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "AddLocalAlternateComputerNameA");
}
asm("leave\njmp *%0" : : "r"(_vptr_AddLocalAlternateComputerNameA));
}

void _elf_AddLocalAlternateComputerNameW() asm("AddLocalAlternateComputerNameW");
void _elf_AddLocalAlternateComputerNameW() {
static void *_vptr_AddLocalAlternateComputerNameW = NULL;
load_dll_kernel32();
if (!_vptr_AddLocalAlternateComputerNameW) {
_vptr_AddLocalAlternateComputerNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "AddLocalAlternateComputerNameW");
}
asm("leave\njmp *%0" : : "r"(_vptr_AddLocalAlternateComputerNameW));
}

void _elf_AddRefActCtx() asm("AddRefActCtx");
void _elf_AddRefActCtx() {
static void *_vptr_AddRefActCtx = NULL;
load_dll_kernel32();
if (!_vptr_AddRefActCtx) {
_vptr_AddRefActCtx = (void *) _elf_GetProcAddress(_dll_kernel32, "AddRefActCtx");
}
asm("leave\njmp *%0" : : "r"(_vptr_AddRefActCtx));
}

void _elf_AddVectoredExceptionHandler() asm("AddVectoredExceptionHandler");
void _elf_AddVectoredExceptionHandler() {
static void *_vptr_AddVectoredExceptionHandler = NULL;
load_dll_kernel32();
if (!_vptr_AddVectoredExceptionHandler) {
_vptr_AddVectoredExceptionHandler = (void *) _elf_GetProcAddress(_dll_kernel32, "AddVectoredExceptionHandler");
}
asm("leave\njmp *%0" : : "r"(_vptr_AddVectoredExceptionHandler));
}

void _elf_AllocConsole() asm("AllocConsole");
void _elf_AllocConsole() {
static void *_vptr_AllocConsole = NULL;
load_dll_kernel32();
if (!_vptr_AllocConsole) {
_vptr_AllocConsole = (void *) _elf_GetProcAddress(_dll_kernel32, "AllocConsole");
}
asm("leave\njmp *%0" : : "r"(_vptr_AllocConsole));
}

void _elf_AllocateUserPhysicalPages() asm("AllocateUserPhysicalPages");
void _elf_AllocateUserPhysicalPages() {
static void *_vptr_AllocateUserPhysicalPages = NULL;
load_dll_kernel32();
if (!_vptr_AllocateUserPhysicalPages) {
_vptr_AllocateUserPhysicalPages = (void *) _elf_GetProcAddress(_dll_kernel32, "AllocateUserPhysicalPages");
}
asm("leave\njmp *%0" : : "r"(_vptr_AllocateUserPhysicalPages));
}

void _elf_AreFileApisANSI() asm("AreFileApisANSI");
void _elf_AreFileApisANSI() {
static void *_vptr_AreFileApisANSI = NULL;
load_dll_kernel32();
if (!_vptr_AreFileApisANSI) {
_vptr_AreFileApisANSI = (void *) _elf_GetProcAddress(_dll_kernel32, "AreFileApisANSI");
}
asm("leave\njmp *%0" : : "r"(_vptr_AreFileApisANSI));
}

void _elf_AssignProcessToJobObject() asm("AssignProcessToJobObject");
void _elf_AssignProcessToJobObject() {
static void *_vptr_AssignProcessToJobObject = NULL;
load_dll_kernel32();
if (!_vptr_AssignProcessToJobObject) {
_vptr_AssignProcessToJobObject = (void *) _elf_GetProcAddress(_dll_kernel32, "AssignProcessToJobObject");
}
asm("leave\njmp *%0" : : "r"(_vptr_AssignProcessToJobObject));
}

void _elf_AttachConsole() asm("AttachConsole");
void _elf_AttachConsole() {
static void *_vptr_AttachConsole = NULL;
load_dll_kernel32();
if (!_vptr_AttachConsole) {
_vptr_AttachConsole = (void *) _elf_GetProcAddress(_dll_kernel32, "AttachConsole");
}
asm("leave\njmp *%0" : : "r"(_vptr_AttachConsole));
}

void _elf_BackupRead() asm("BackupRead");
void _elf_BackupRead() {
static void *_vptr_BackupRead = NULL;
load_dll_kernel32();
if (!_vptr_BackupRead) {
_vptr_BackupRead = (void *) _elf_GetProcAddress(_dll_kernel32, "BackupRead");
}
asm("leave\njmp *%0" : : "r"(_vptr_BackupRead));
}

void _elf_BackupSeek() asm("BackupSeek");
void _elf_BackupSeek() {
static void *_vptr_BackupSeek = NULL;
load_dll_kernel32();
if (!_vptr_BackupSeek) {
_vptr_BackupSeek = (void *) _elf_GetProcAddress(_dll_kernel32, "BackupSeek");
}
asm("leave\njmp *%0" : : "r"(_vptr_BackupSeek));
}

void _elf_BackupWrite() asm("BackupWrite");
void _elf_BackupWrite() {
static void *_vptr_BackupWrite = NULL;
load_dll_kernel32();
if (!_vptr_BackupWrite) {
_vptr_BackupWrite = (void *) _elf_GetProcAddress(_dll_kernel32, "BackupWrite");
}
asm("leave\njmp *%0" : : "r"(_vptr_BackupWrite));
}

void _elf_BaseCheckAppcompatCache() asm("BaseCheckAppcompatCache");
void _elf_BaseCheckAppcompatCache() {
static void *_vptr_BaseCheckAppcompatCache = NULL;
load_dll_kernel32();
if (!_vptr_BaseCheckAppcompatCache) {
_vptr_BaseCheckAppcompatCache = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseCheckAppcompatCache");
}
asm("leave\njmp *%0" : : "r"(_vptr_BaseCheckAppcompatCache));
}

void _elf_BaseCleanupAppcompatCache() asm("BaseCleanupAppcompatCache");
void _elf_BaseCleanupAppcompatCache() {
static void *_vptr_BaseCleanupAppcompatCache = NULL;
load_dll_kernel32();
if (!_vptr_BaseCleanupAppcompatCache) {
_vptr_BaseCleanupAppcompatCache = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseCleanupAppcompatCache");
}
asm("leave\njmp *%0" : : "r"(_vptr_BaseCleanupAppcompatCache));
}

void _elf_BaseCleanupAppcompatCacheSupport() asm("BaseCleanupAppcompatCacheSupport");
void _elf_BaseCleanupAppcompatCacheSupport() {
static void *_vptr_BaseCleanupAppcompatCacheSupport = NULL;
load_dll_kernel32();
if (!_vptr_BaseCleanupAppcompatCacheSupport) {
_vptr_BaseCleanupAppcompatCacheSupport = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseCleanupAppcompatCacheSupport");
}
asm("leave\njmp *%0" : : "r"(_vptr_BaseCleanupAppcompatCacheSupport));
}

void _elf_BaseDumpAppcompatCache() asm("BaseDumpAppcompatCache");
void _elf_BaseDumpAppcompatCache() {
static void *_vptr_BaseDumpAppcompatCache = NULL;
load_dll_kernel32();
if (!_vptr_BaseDumpAppcompatCache) {
_vptr_BaseDumpAppcompatCache = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseDumpAppcompatCache");
}
asm("leave\njmp *%0" : : "r"(_vptr_BaseDumpAppcompatCache));
}

void _elf_BaseFlushAppcompatCache() asm("BaseFlushAppcompatCache");
void _elf_BaseFlushAppcompatCache() {
static void *_vptr_BaseFlushAppcompatCache = NULL;
load_dll_kernel32();
if (!_vptr_BaseFlushAppcompatCache) {
_vptr_BaseFlushAppcompatCache = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseFlushAppcompatCache");
}
asm("leave\njmp *%0" : : "r"(_vptr_BaseFlushAppcompatCache));
}

void _elf_BaseInitAppcompatCache() asm("BaseInitAppcompatCache");
void _elf_BaseInitAppcompatCache() {
static void *_vptr_BaseInitAppcompatCache = NULL;
load_dll_kernel32();
if (!_vptr_BaseInitAppcompatCache) {
_vptr_BaseInitAppcompatCache = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseInitAppcompatCache");
}
asm("leave\njmp *%0" : : "r"(_vptr_BaseInitAppcompatCache));
}

void _elf_BaseInitAppcompatCacheSupport() asm("BaseInitAppcompatCacheSupport");
void _elf_BaseInitAppcompatCacheSupport() {
static void *_vptr_BaseInitAppcompatCacheSupport = NULL;
load_dll_kernel32();
if (!_vptr_BaseInitAppcompatCacheSupport) {
_vptr_BaseInitAppcompatCacheSupport = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseInitAppcompatCacheSupport");
}
asm("leave\njmp *%0" : : "r"(_vptr_BaseInitAppcompatCacheSupport));
}

void _elf_BaseProcessInitPostImport() asm("BaseProcessInitPostImport");
void _elf_BaseProcessInitPostImport() {
static void *_vptr_BaseProcessInitPostImport = NULL;
load_dll_kernel32();
if (!_vptr_BaseProcessInitPostImport) {
_vptr_BaseProcessInitPostImport = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseProcessInitPostImport");
}
asm("leave\njmp *%0" : : "r"(_vptr_BaseProcessInitPostImport));
}

void _elf_BaseUpdateAppcompatCache() asm("BaseUpdateAppcompatCache");
void _elf_BaseUpdateAppcompatCache() {
static void *_vptr_BaseUpdateAppcompatCache = NULL;
load_dll_kernel32();
if (!_vptr_BaseUpdateAppcompatCache) {
_vptr_BaseUpdateAppcompatCache = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseUpdateAppcompatCache");
}
asm("leave\njmp *%0" : : "r"(_vptr_BaseUpdateAppcompatCache));
}

void _elf_Beep() asm("Beep");
void _elf_Beep() {
static void *_vptr_Beep = NULL;
load_dll_kernel32();
if (!_vptr_Beep) {
_vptr_Beep = (void *) _elf_GetProcAddress(_dll_kernel32, "Beep");
}
asm("leave\njmp *%0" : : "r"(_vptr_Beep));
}

void _elf_BeginUpdateResourceA() asm("BeginUpdateResourceA");
void _elf_BeginUpdateResourceA() {
static void *_vptr_BeginUpdateResourceA = NULL;
load_dll_kernel32();
if (!_vptr_BeginUpdateResourceA) {
_vptr_BeginUpdateResourceA = (void *) _elf_GetProcAddress(_dll_kernel32, "BeginUpdateResourceA");
}
asm("leave\njmp *%0" : : "r"(_vptr_BeginUpdateResourceA));
}

void _elf_BeginUpdateResourceW() asm("BeginUpdateResourceW");
void _elf_BeginUpdateResourceW() {
static void *_vptr_BeginUpdateResourceW = NULL;
load_dll_kernel32();
if (!_vptr_BeginUpdateResourceW) {
_vptr_BeginUpdateResourceW = (void *) _elf_GetProcAddress(_dll_kernel32, "BeginUpdateResourceW");
}
asm("leave\njmp *%0" : : "r"(_vptr_BeginUpdateResourceW));
}

void _elf_BindIoCompletionCallback() asm("BindIoCompletionCallback");
void _elf_BindIoCompletionCallback() {
static void *_vptr_BindIoCompletionCallback = NULL;
load_dll_kernel32();
if (!_vptr_BindIoCompletionCallback) {
_vptr_BindIoCompletionCallback = (void *) _elf_GetProcAddress(_dll_kernel32, "BindIoCompletionCallback");
}
asm("leave\njmp *%0" : : "r"(_vptr_BindIoCompletionCallback));
}

void _elf_BuildCommDCBA() asm("BuildCommDCBA");
void _elf_BuildCommDCBA() {
static void *_vptr_BuildCommDCBA = NULL;
load_dll_kernel32();
if (!_vptr_BuildCommDCBA) {
_vptr_BuildCommDCBA = (void *) _elf_GetProcAddress(_dll_kernel32, "BuildCommDCBA");
}
asm("leave\njmp *%0" : : "r"(_vptr_BuildCommDCBA));
}

void _elf_BuildCommDCBAndTimeoutsA() asm("BuildCommDCBAndTimeoutsA");
void _elf_BuildCommDCBAndTimeoutsA() {
static void *_vptr_BuildCommDCBAndTimeoutsA = NULL;
load_dll_kernel32();
if (!_vptr_BuildCommDCBAndTimeoutsA) {
_vptr_BuildCommDCBAndTimeoutsA = (void *) _elf_GetProcAddress(_dll_kernel32, "BuildCommDCBAndTimeoutsA");
}
asm("leave\njmp *%0" : : "r"(_vptr_BuildCommDCBAndTimeoutsA));
}

void _elf_BuildCommDCBAndTimeoutsW() asm("BuildCommDCBAndTimeoutsW");
void _elf_BuildCommDCBAndTimeoutsW() {
static void *_vptr_BuildCommDCBAndTimeoutsW = NULL;
load_dll_kernel32();
if (!_vptr_BuildCommDCBAndTimeoutsW) {
_vptr_BuildCommDCBAndTimeoutsW = (void *) _elf_GetProcAddress(_dll_kernel32, "BuildCommDCBAndTimeoutsW");
}
asm("leave\njmp *%0" : : "r"(_vptr_BuildCommDCBAndTimeoutsW));
}

void _elf_BuildCommDCBW() asm("BuildCommDCBW");
void _elf_BuildCommDCBW() {
static void *_vptr_BuildCommDCBW = NULL;
load_dll_kernel32();
if (!_vptr_BuildCommDCBW) {
_vptr_BuildCommDCBW = (void *) _elf_GetProcAddress(_dll_kernel32, "BuildCommDCBW");
}
asm("leave\njmp *%0" : : "r"(_vptr_BuildCommDCBW));
}

void _elf_CallNamedPipeA() asm("CallNamedPipeA");
void _elf_CallNamedPipeA() {
static void *_vptr_CallNamedPipeA = NULL;
load_dll_kernel32();
if (!_vptr_CallNamedPipeA) {
_vptr_CallNamedPipeA = (void *) _elf_GetProcAddress(_dll_kernel32, "CallNamedPipeA");
}
asm("leave\njmp *%0" : : "r"(_vptr_CallNamedPipeA));
}

void _elf_CallNamedPipeW() asm("CallNamedPipeW");
void _elf_CallNamedPipeW() {
static void *_vptr_CallNamedPipeW = NULL;
load_dll_kernel32();
if (!_vptr_CallNamedPipeW) {
_vptr_CallNamedPipeW = (void *) _elf_GetProcAddress(_dll_kernel32, "CallNamedPipeW");
}
asm("leave\njmp *%0" : : "r"(_vptr_CallNamedPipeW));
}

void _elf_CancelDeviceWakeupRequest() asm("CancelDeviceWakeupRequest");
void _elf_CancelDeviceWakeupRequest() {
static void *_vptr_CancelDeviceWakeupRequest = NULL;
load_dll_kernel32();
if (!_vptr_CancelDeviceWakeupRequest) {
_vptr_CancelDeviceWakeupRequest = (void *) _elf_GetProcAddress(_dll_kernel32, "CancelDeviceWakeupRequest");
}
asm("leave\njmp *%0" : : "r"(_vptr_CancelDeviceWakeupRequest));
}

void _elf_CancelIo() asm("CancelIo");
void _elf_CancelIo() {
static void *_vptr_CancelIo = NULL;
load_dll_kernel32();
if (!_vptr_CancelIo) {
_vptr_CancelIo = (void *) _elf_GetProcAddress(_dll_kernel32, "CancelIo");
}
asm("leave\njmp *%0" : : "r"(_vptr_CancelIo));
}

void _elf_CancelTimerQueueTimer() asm("CancelTimerQueueTimer");
void _elf_CancelTimerQueueTimer() {
static void *_vptr_CancelTimerQueueTimer = NULL;
load_dll_kernel32();
if (!_vptr_CancelTimerQueueTimer) {
_vptr_CancelTimerQueueTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "CancelTimerQueueTimer");
}
asm("leave\njmp *%0" : : "r"(_vptr_CancelTimerQueueTimer));
}

void _elf_CancelWaitableTimer() asm("CancelWaitableTimer");
void _elf_CancelWaitableTimer() {
static void *_vptr_CancelWaitableTimer = NULL;
load_dll_kernel32();
if (!_vptr_CancelWaitableTimer) {
_vptr_CancelWaitableTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "CancelWaitableTimer");
}
asm("leave\njmp *%0" : : "r"(_vptr_CancelWaitableTimer));
}

void _elf_ChangeTimerQueueTimer() asm("ChangeTimerQueueTimer");
void _elf_ChangeTimerQueueTimer() {
static void *_vptr_ChangeTimerQueueTimer = NULL;
load_dll_kernel32();
if (!_vptr_ChangeTimerQueueTimer) {
_vptr_ChangeTimerQueueTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "ChangeTimerQueueTimer");
}
asm("leave\njmp *%0" : : "r"(_vptr_ChangeTimerQueueTimer));
}

void _elf_CheckNameLegalDOS8Dot3A() asm("CheckNameLegalDOS8Dot3A");
void _elf_CheckNameLegalDOS8Dot3A() {
static void *_vptr_CheckNameLegalDOS8Dot3A = NULL;
load_dll_kernel32();
if (!_vptr_CheckNameLegalDOS8Dot3A) {
_vptr_CheckNameLegalDOS8Dot3A = (void *) _elf_GetProcAddress(_dll_kernel32, "CheckNameLegalDOS8Dot3A");
}
asm("leave\njmp *%0" : : "r"(_vptr_CheckNameLegalDOS8Dot3A));
}

void _elf_CheckNameLegalDOS8Dot3W() asm("CheckNameLegalDOS8Dot3W");
void _elf_CheckNameLegalDOS8Dot3W() {
static void *_vptr_CheckNameLegalDOS8Dot3W = NULL;
load_dll_kernel32();
if (!_vptr_CheckNameLegalDOS8Dot3W) {
_vptr_CheckNameLegalDOS8Dot3W = (void *) _elf_GetProcAddress(_dll_kernel32, "CheckNameLegalDOS8Dot3W");
}
asm("leave\njmp *%0" : : "r"(_vptr_CheckNameLegalDOS8Dot3W));
}

void _elf_CheckRemoteDebuggerPresent() asm("CheckRemoteDebuggerPresent");
void _elf_CheckRemoteDebuggerPresent() {
static void *_vptr_CheckRemoteDebuggerPresent = NULL;
load_dll_kernel32();
if (!_vptr_CheckRemoteDebuggerPresent) {
_vptr_CheckRemoteDebuggerPresent = (void *) _elf_GetProcAddress(_dll_kernel32, "CheckRemoteDebuggerPresent");
}
asm("leave\njmp *%0" : : "r"(_vptr_CheckRemoteDebuggerPresent));
}

void _elf_ClearCommBreak() asm("ClearCommBreak");
void _elf_ClearCommBreak() {
static void *_vptr_ClearCommBreak = NULL;
load_dll_kernel32();
if (!_vptr_ClearCommBreak) {
_vptr_ClearCommBreak = (void *) _elf_GetProcAddress(_dll_kernel32, "ClearCommBreak");
}
asm("leave\njmp *%0" : : "r"(_vptr_ClearCommBreak));
}

void _elf_ClearCommError() asm("ClearCommError");
void _elf_ClearCommError() {
static void *_vptr_ClearCommError = NULL;
load_dll_kernel32();
if (!_vptr_ClearCommError) {
_vptr_ClearCommError = (void *) _elf_GetProcAddress(_dll_kernel32, "ClearCommError");
}
asm("leave\njmp *%0" : : "r"(_vptr_ClearCommError));
}

void _elf_CloseConsoleHandle() asm("CloseConsoleHandle");
void _elf_CloseConsoleHandle() {
static void *_vptr_CloseConsoleHandle = NULL;
load_dll_kernel32();
if (!_vptr_CloseConsoleHandle) {
_vptr_CloseConsoleHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "CloseConsoleHandle");
}
asm("leave\njmp *%0" : : "r"(_vptr_CloseConsoleHandle));
}

void _elf_CloseHandle() asm("CloseHandle");
void _elf_CloseHandle() {
static void *_vptr_CloseHandle = NULL;
load_dll_kernel32();
if (!_vptr_CloseHandle) {
_vptr_CloseHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "CloseHandle");
}
asm("leave\njmp *%0" : : "r"(_vptr_CloseHandle));
}

void _elf_CloseProfileUserMapping() asm("CloseProfileUserMapping");
void _elf_CloseProfileUserMapping() {
static void *_vptr_CloseProfileUserMapping = NULL;
load_dll_kernel32();
if (!_vptr_CloseProfileUserMapping) {
_vptr_CloseProfileUserMapping = (void *) _elf_GetProcAddress(_dll_kernel32, "CloseProfileUserMapping");
}
asm("leave\njmp *%0" : : "r"(_vptr_CloseProfileUserMapping));
}

void _elf_CmdBatNotification() asm("CmdBatNotification");
void _elf_CmdBatNotification() {
static void *_vptr_CmdBatNotification = NULL;
load_dll_kernel32();
if (!_vptr_CmdBatNotification) {
_vptr_CmdBatNotification = (void *) _elf_GetProcAddress(_dll_kernel32, "CmdBatNotification");
}
asm("leave\njmp *%0" : : "r"(_vptr_CmdBatNotification));
}

void _elf_CommConfigDialogA() asm("CommConfigDialogA");
void _elf_CommConfigDialogA() {
static void *_vptr_CommConfigDialogA = NULL;
load_dll_kernel32();
if (!_vptr_CommConfigDialogA) {
_vptr_CommConfigDialogA = (void *) _elf_GetProcAddress(_dll_kernel32, "CommConfigDialogA");
}
asm("leave\njmp *%0" : : "r"(_vptr_CommConfigDialogA));
}

void _elf_CommConfigDialogW() asm("CommConfigDialogW");
void _elf_CommConfigDialogW() {
static void *_vptr_CommConfigDialogW = NULL;
load_dll_kernel32();
if (!_vptr_CommConfigDialogW) {
_vptr_CommConfigDialogW = (void *) _elf_GetProcAddress(_dll_kernel32, "CommConfigDialogW");
}
asm("leave\njmp *%0" : : "r"(_vptr_CommConfigDialogW));
}

void _elf_CompareFileTime() asm("CompareFileTime");
void _elf_CompareFileTime() {
static void *_vptr_CompareFileTime = NULL;
load_dll_kernel32();
if (!_vptr_CompareFileTime) {
_vptr_CompareFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "CompareFileTime");
}
asm("leave\njmp *%0" : : "r"(_vptr_CompareFileTime));
}

void _elf_CompareStringA() asm("CompareStringA");
void _elf_CompareStringA() {
static void *_vptr_CompareStringA = NULL;
load_dll_kernel32();
if (!_vptr_CompareStringA) {
_vptr_CompareStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "CompareStringA");
}
asm("leave\njmp *%0" : : "r"(_vptr_CompareStringA));
}

void _elf_CompareStringW() asm("CompareStringW");
void _elf_CompareStringW() {
static void *_vptr_CompareStringW = NULL;
load_dll_kernel32();
if (!_vptr_CompareStringW) {
_vptr_CompareStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "CompareStringW");
}
asm("leave\njmp *%0" : : "r"(_vptr_CompareStringW));
}

void _elf_ConnectNamedPipe() asm("ConnectNamedPipe");
void _elf_ConnectNamedPipe() {
static void *_vptr_ConnectNamedPipe = NULL;
load_dll_kernel32();
if (!_vptr_ConnectNamedPipe) {
_vptr_ConnectNamedPipe = (void *) _elf_GetProcAddress(_dll_kernel32, "ConnectNamedPipe");
}
asm("leave\njmp *%0" : : "r"(_vptr_ConnectNamedPipe));
}

void _elf_ConsoleMenuControl() asm("ConsoleMenuControl");
void _elf_ConsoleMenuControl() {
static void *_vptr_ConsoleMenuControl = NULL;
load_dll_kernel32();
if (!_vptr_ConsoleMenuControl) {
_vptr_ConsoleMenuControl = (void *) _elf_GetProcAddress(_dll_kernel32, "ConsoleMenuControl");
}
asm("leave\njmp *%0" : : "r"(_vptr_ConsoleMenuControl));
}

void _elf_ContinueDebugEvent() asm("ContinueDebugEvent");
void _elf_ContinueDebugEvent() {
static void *_vptr_ContinueDebugEvent = NULL;
load_dll_kernel32();
if (!_vptr_ContinueDebugEvent) {
_vptr_ContinueDebugEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "ContinueDebugEvent");
}
asm("leave\njmp *%0" : : "r"(_vptr_ContinueDebugEvent));
}

void _elf_ConvertDefaultLocale() asm("ConvertDefaultLocale");
void _elf_ConvertDefaultLocale() {
static void *_vptr_ConvertDefaultLocale = NULL;
load_dll_kernel32();
if (!_vptr_ConvertDefaultLocale) {
_vptr_ConvertDefaultLocale = (void *) _elf_GetProcAddress(_dll_kernel32, "ConvertDefaultLocale");
}
asm("leave\njmp *%0" : : "r"(_vptr_ConvertDefaultLocale));
}

void _elf_ConvertFiberToThread() asm("ConvertFiberToThread");
void _elf_ConvertFiberToThread() {
static void *_vptr_ConvertFiberToThread = NULL;
load_dll_kernel32();
if (!_vptr_ConvertFiberToThread) {
_vptr_ConvertFiberToThread = (void *) _elf_GetProcAddress(_dll_kernel32, "ConvertFiberToThread");
}
asm("leave\njmp *%0" : : "r"(_vptr_ConvertFiberToThread));
}

void _elf_ConvertThreadToFiber() asm("ConvertThreadToFiber");
void _elf_ConvertThreadToFiber() {
static void *_vptr_ConvertThreadToFiber = NULL;
load_dll_kernel32();
if (!_vptr_ConvertThreadToFiber) {
_vptr_ConvertThreadToFiber = (void *) _elf_GetProcAddress(_dll_kernel32, "ConvertThreadToFiber");
}
asm("leave\njmp *%0" : : "r"(_vptr_ConvertThreadToFiber));
}

void _elf_CopyFileA() asm("CopyFileA");
void _elf_CopyFileA() {
static void *_vptr_CopyFileA = NULL;
load_dll_kernel32();
if (!_vptr_CopyFileA) {
_vptr_CopyFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "CopyFileA");
}
asm("leave\njmp *%0" : : "r"(_vptr_CopyFileA));
}

void _elf_CopyFileExA() asm("CopyFileExA");
void _elf_CopyFileExA() {
static void *_vptr_CopyFileExA = NULL;
load_dll_kernel32();
if (!_vptr_CopyFileExA) {
_vptr_CopyFileExA = (void *) _elf_GetProcAddress(_dll_kernel32, "CopyFileExA");
}
asm("leave\njmp *%0" : : "r"(_vptr_CopyFileExA));
}

void _elf_CopyFileExW() asm("CopyFileExW");
void _elf_CopyFileExW() {
static void *_vptr_CopyFileExW = NULL;
load_dll_kernel32();
if (!_vptr_CopyFileExW) {
_vptr_CopyFileExW = (void *) _elf_GetProcAddress(_dll_kernel32, "CopyFileExW");
}
asm("leave\njmp *%0" : : "r"(_vptr_CopyFileExW));
}

void _elf_CopyFileW() asm("CopyFileW");
void _elf_CopyFileW() {
static void *_vptr_CopyFileW = NULL;
load_dll_kernel32();
if (!_vptr_CopyFileW) {
_vptr_CopyFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "CopyFileW");
}
asm("leave\njmp *%0" : : "r"(_vptr_CopyFileW));
}

void _elf_CopyLZFile() asm("CopyLZFile");
void _elf_CopyLZFile() {
static void *_vptr_CopyLZFile = NULL;
load_dll_kernel32();
if (!_vptr_CopyLZFile) {
_vptr_CopyLZFile = (void *) _elf_GetProcAddress(_dll_kernel32, "CopyLZFile");
}
asm("leave\njmp *%0" : : "r"(_vptr_CopyLZFile));
}

void _elf_CreateActCtxA() asm("CreateActCtxA");
void _elf_CreateActCtxA() {
static void *_vptr_CreateActCtxA = NULL;
load_dll_kernel32();
if (!_vptr_CreateActCtxA) {
_vptr_CreateActCtxA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateActCtxA");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateActCtxA));
}

void _elf_CreateActCtxW() asm("CreateActCtxW");
void _elf_CreateActCtxW() {
static void *_vptr_CreateActCtxW = NULL;
load_dll_kernel32();
if (!_vptr_CreateActCtxW) {
_vptr_CreateActCtxW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateActCtxW");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateActCtxW));
}

void _elf_CreateConsoleScreenBuffer() asm("CreateConsoleScreenBuffer");
void _elf_CreateConsoleScreenBuffer() {
static void *_vptr_CreateConsoleScreenBuffer = NULL;
load_dll_kernel32();
if (!_vptr_CreateConsoleScreenBuffer) {
_vptr_CreateConsoleScreenBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateConsoleScreenBuffer");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateConsoleScreenBuffer));
}

void _elf_CreateDirectoryA() asm("CreateDirectoryA");
void _elf_CreateDirectoryA() {
static void *_vptr_CreateDirectoryA = NULL;
load_dll_kernel32();
if (!_vptr_CreateDirectoryA) {
_vptr_CreateDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateDirectoryA");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateDirectoryA));
}

void _elf_CreateDirectoryExA() asm("CreateDirectoryExA");
void _elf_CreateDirectoryExA() {
static void *_vptr_CreateDirectoryExA = NULL;
load_dll_kernel32();
if (!_vptr_CreateDirectoryExA) {
_vptr_CreateDirectoryExA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateDirectoryExA");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateDirectoryExA));
}

void _elf_CreateDirectoryExW() asm("CreateDirectoryExW");
void _elf_CreateDirectoryExW() {
static void *_vptr_CreateDirectoryExW = NULL;
load_dll_kernel32();
if (!_vptr_CreateDirectoryExW) {
_vptr_CreateDirectoryExW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateDirectoryExW");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateDirectoryExW));
}

void _elf_CreateDirectoryW() asm("CreateDirectoryW");
void _elf_CreateDirectoryW() {
static void *_vptr_CreateDirectoryW = NULL;
load_dll_kernel32();
if (!_vptr_CreateDirectoryW) {
_vptr_CreateDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateDirectoryW");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateDirectoryW));
}

void _elf_CreateEventA() asm("CreateEventA");
void _elf_CreateEventA() {
static void *_vptr_CreateEventA = NULL;
load_dll_kernel32();
if (!_vptr_CreateEventA) {
_vptr_CreateEventA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateEventA");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateEventA));
}

void _elf_CreateEventW() asm("CreateEventW");
void _elf_CreateEventW() {
static void *_vptr_CreateEventW = NULL;
load_dll_kernel32();
if (!_vptr_CreateEventW) {
_vptr_CreateEventW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateEventW");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateEventW));
}

void _elf_CreateFiber() asm("CreateFiber");
void _elf_CreateFiber() {
static void *_vptr_CreateFiber = NULL;
load_dll_kernel32();
if (!_vptr_CreateFiber) {
_vptr_CreateFiber = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateFiber");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateFiber));
}

void _elf_CreateFiberEx() asm("CreateFiberEx");
void _elf_CreateFiberEx() {
static void *_vptr_CreateFiberEx = NULL;
load_dll_kernel32();
if (!_vptr_CreateFiberEx) {
_vptr_CreateFiberEx = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateFiberEx");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateFiberEx));
}

void _elf_CreateFileA() asm("CreateFileA");
void _elf_CreateFileA() {
static void *_vptr_CreateFileA = NULL;
load_dll_kernel32();
if (!_vptr_CreateFileA) {
_vptr_CreateFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateFileA");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateFileA));
}

void _elf_CreateFileMappingA() asm("CreateFileMappingA");
void _elf_CreateFileMappingA() {
static void *_vptr_CreateFileMappingA = NULL;
load_dll_kernel32();
if (!_vptr_CreateFileMappingA) {
_vptr_CreateFileMappingA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateFileMappingA");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateFileMappingA));
}

void _elf_CreateFileMappingW() asm("CreateFileMappingW");
void _elf_CreateFileMappingW() {
static void *_vptr_CreateFileMappingW = NULL;
load_dll_kernel32();
if (!_vptr_CreateFileMappingW) {
_vptr_CreateFileMappingW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateFileMappingW");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateFileMappingW));
}

void _elf_CreateFileW() asm("CreateFileW");
void _elf_CreateFileW() {
static void *_vptr_CreateFileW = NULL;
load_dll_kernel32();
if (!_vptr_CreateFileW) {
_vptr_CreateFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateFileW");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateFileW));
}

void _elf_CreateHardLinkA() asm("CreateHardLinkA");
void _elf_CreateHardLinkA() {
static void *_vptr_CreateHardLinkA = NULL;
load_dll_kernel32();
if (!_vptr_CreateHardLinkA) {
_vptr_CreateHardLinkA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateHardLinkA");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateHardLinkA));
}

void _elf_CreateHardLinkW() asm("CreateHardLinkW");
void _elf_CreateHardLinkW() {
static void *_vptr_CreateHardLinkW = NULL;
load_dll_kernel32();
if (!_vptr_CreateHardLinkW) {
_vptr_CreateHardLinkW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateHardLinkW");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateHardLinkW));
}

void _elf_CreateIoCompletionPort() asm("CreateIoCompletionPort");
void _elf_CreateIoCompletionPort() {
static void *_vptr_CreateIoCompletionPort = NULL;
load_dll_kernel32();
if (!_vptr_CreateIoCompletionPort) {
_vptr_CreateIoCompletionPort = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateIoCompletionPort");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateIoCompletionPort));
}

void _elf_CreateJobObjectA() asm("CreateJobObjectA");
void _elf_CreateJobObjectA() {
static void *_vptr_CreateJobObjectA = NULL;
load_dll_kernel32();
if (!_vptr_CreateJobObjectA) {
_vptr_CreateJobObjectA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateJobObjectA");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateJobObjectA));
}

void _elf_CreateJobObjectW() asm("CreateJobObjectW");
void _elf_CreateJobObjectW() {
static void *_vptr_CreateJobObjectW = NULL;
load_dll_kernel32();
if (!_vptr_CreateJobObjectW) {
_vptr_CreateJobObjectW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateJobObjectW");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateJobObjectW));
}

void _elf_CreateJobSet() asm("CreateJobSet");
void _elf_CreateJobSet() {
static void *_vptr_CreateJobSet = NULL;
load_dll_kernel32();
if (!_vptr_CreateJobSet) {
_vptr_CreateJobSet = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateJobSet");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateJobSet));
}

void _elf_CreateMailslotA() asm("CreateMailslotA");
void _elf_CreateMailslotA() {
static void *_vptr_CreateMailslotA = NULL;
load_dll_kernel32();
if (!_vptr_CreateMailslotA) {
_vptr_CreateMailslotA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateMailslotA");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateMailslotA));
}

void _elf_CreateMailslotW() asm("CreateMailslotW");
void _elf_CreateMailslotW() {
static void *_vptr_CreateMailslotW = NULL;
load_dll_kernel32();
if (!_vptr_CreateMailslotW) {
_vptr_CreateMailslotW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateMailslotW");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateMailslotW));
}

void _elf_CreateMemoryResourceNotification() asm("CreateMemoryResourceNotification");
void _elf_CreateMemoryResourceNotification() {
static void *_vptr_CreateMemoryResourceNotification = NULL;
load_dll_kernel32();
if (!_vptr_CreateMemoryResourceNotification) {
_vptr_CreateMemoryResourceNotification = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateMemoryResourceNotification");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateMemoryResourceNotification));
}

void _elf_CreateMutexA() asm("CreateMutexA");
void _elf_CreateMutexA() {
static void *_vptr_CreateMutexA = NULL;
load_dll_kernel32();
if (!_vptr_CreateMutexA) {
_vptr_CreateMutexA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateMutexA");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateMutexA));
}

void _elf_CreateMutexW() asm("CreateMutexW");
void _elf_CreateMutexW() {
static void *_vptr_CreateMutexW = NULL;
load_dll_kernel32();
if (!_vptr_CreateMutexW) {
_vptr_CreateMutexW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateMutexW");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateMutexW));
}

void _elf_CreateNamedPipeA() asm("CreateNamedPipeA");
void _elf_CreateNamedPipeA() {
static void *_vptr_CreateNamedPipeA = NULL;
load_dll_kernel32();
if (!_vptr_CreateNamedPipeA) {
_vptr_CreateNamedPipeA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateNamedPipeA");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateNamedPipeA));
}

void _elf_CreateNamedPipeW() asm("CreateNamedPipeW");
void _elf_CreateNamedPipeW() {
static void *_vptr_CreateNamedPipeW = NULL;
load_dll_kernel32();
if (!_vptr_CreateNamedPipeW) {
_vptr_CreateNamedPipeW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateNamedPipeW");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateNamedPipeW));
}

void _elf_CreateNlsSecurityDescriptor() asm("CreateNlsSecurityDescriptor");
void _elf_CreateNlsSecurityDescriptor() {
static void *_vptr_CreateNlsSecurityDescriptor = NULL;
load_dll_kernel32();
if (!_vptr_CreateNlsSecurityDescriptor) {
_vptr_CreateNlsSecurityDescriptor = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateNlsSecurityDescriptor");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateNlsSecurityDescriptor));
}

void _elf_CreatePipe() asm("CreatePipe");
void _elf_CreatePipe() {
static void *_vptr_CreatePipe = NULL;
load_dll_kernel32();
if (!_vptr_CreatePipe) {
_vptr_CreatePipe = (void *) _elf_GetProcAddress(_dll_kernel32, "CreatePipe");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreatePipe));
}

void _elf_CreateProcessA() asm("CreateProcessA");
void _elf_CreateProcessA() {
static void *_vptr_CreateProcessA = NULL;
load_dll_kernel32();
if (!_vptr_CreateProcessA) {
_vptr_CreateProcessA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateProcessA");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateProcessA));
}

void _elf_CreateProcessInternalA() asm("CreateProcessInternalA");
void _elf_CreateProcessInternalA() {
static void *_vptr_CreateProcessInternalA = NULL;
load_dll_kernel32();
if (!_vptr_CreateProcessInternalA) {
_vptr_CreateProcessInternalA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateProcessInternalA");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateProcessInternalA));
}

void _elf_CreateProcessInternalW() asm("CreateProcessInternalW");
void _elf_CreateProcessInternalW() {
static void *_vptr_CreateProcessInternalW = NULL;
load_dll_kernel32();
if (!_vptr_CreateProcessInternalW) {
_vptr_CreateProcessInternalW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateProcessInternalW");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateProcessInternalW));
}

void _elf_CreateProcessW() asm("CreateProcessW");
void _elf_CreateProcessW() {
static void *_vptr_CreateProcessW = NULL;
load_dll_kernel32();
if (!_vptr_CreateProcessW) {
_vptr_CreateProcessW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateProcessW");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateProcessW));
}

void _elf_CreateRemoteThread() asm("CreateRemoteThread");
void _elf_CreateRemoteThread() {
static void *_vptr_CreateRemoteThread = NULL;
load_dll_kernel32();
if (!_vptr_CreateRemoteThread) {
_vptr_CreateRemoteThread = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateRemoteThread");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateRemoteThread));
}

void _elf_CreateSemaphoreA() asm("CreateSemaphoreA");
void _elf_CreateSemaphoreA() {
static void *_vptr_CreateSemaphoreA = NULL;
load_dll_kernel32();
if (!_vptr_CreateSemaphoreA) {
_vptr_CreateSemaphoreA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateSemaphoreA");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateSemaphoreA));
}

void _elf_CreateSemaphoreW() asm("CreateSemaphoreW");
void _elf_CreateSemaphoreW() {
static void *_vptr_CreateSemaphoreW = NULL;
load_dll_kernel32();
if (!_vptr_CreateSemaphoreW) {
_vptr_CreateSemaphoreW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateSemaphoreW");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateSemaphoreW));
}

void _elf_CreateSocketHandle() asm("CreateSocketHandle");
void _elf_CreateSocketHandle() {
static void *_vptr_CreateSocketHandle = NULL;
load_dll_kernel32();
if (!_vptr_CreateSocketHandle) {
_vptr_CreateSocketHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateSocketHandle");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateSocketHandle));
}

void _elf_CreateTapePartition() asm("CreateTapePartition");
void _elf_CreateTapePartition() {
static void *_vptr_CreateTapePartition = NULL;
load_dll_kernel32();
if (!_vptr_CreateTapePartition) {
_vptr_CreateTapePartition = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateTapePartition");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateTapePartition));
}

void _elf_CreateThread() asm("CreateThread");
void _elf_CreateThread() {
static void *_vptr_CreateThread = NULL;
load_dll_kernel32();
if (!_vptr_CreateThread) {
_vptr_CreateThread = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateThread");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateThread));
}

void _elf_CreateTimerQueue() asm("CreateTimerQueue");
void _elf_CreateTimerQueue() {
static void *_vptr_CreateTimerQueue = NULL;
load_dll_kernel32();
if (!_vptr_CreateTimerQueue) {
_vptr_CreateTimerQueue = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateTimerQueue");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateTimerQueue));
}

void _elf_CreateTimerQueueTimer() asm("CreateTimerQueueTimer");
void _elf_CreateTimerQueueTimer() {
static void *_vptr_CreateTimerQueueTimer = NULL;
load_dll_kernel32();
if (!_vptr_CreateTimerQueueTimer) {
_vptr_CreateTimerQueueTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateTimerQueueTimer");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateTimerQueueTimer));
}

void _elf_CreateToolhelp32Snapshot() asm("CreateToolhelp32Snapshot");
void _elf_CreateToolhelp32Snapshot() {
static void *_vptr_CreateToolhelp32Snapshot = NULL;
load_dll_kernel32();
if (!_vptr_CreateToolhelp32Snapshot) {
_vptr_CreateToolhelp32Snapshot = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateToolhelp32Snapshot");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateToolhelp32Snapshot));
}

void _elf_CreateVirtualBuffer() asm("CreateVirtualBuffer");
void _elf_CreateVirtualBuffer() {
static void *_vptr_CreateVirtualBuffer = NULL;
load_dll_kernel32();
if (!_vptr_CreateVirtualBuffer) {
_vptr_CreateVirtualBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateVirtualBuffer");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateVirtualBuffer));
}

void _elf_CreateWaitableTimerA() asm("CreateWaitableTimerA");
void _elf_CreateWaitableTimerA() {
static void *_vptr_CreateWaitableTimerA = NULL;
load_dll_kernel32();
if (!_vptr_CreateWaitableTimerA) {
_vptr_CreateWaitableTimerA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateWaitableTimerA");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateWaitableTimerA));
}

void _elf_CreateWaitableTimerW() asm("CreateWaitableTimerW");
void _elf_CreateWaitableTimerW() {
static void *_vptr_CreateWaitableTimerW = NULL;
load_dll_kernel32();
if (!_vptr_CreateWaitableTimerW) {
_vptr_CreateWaitableTimerW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateWaitableTimerW");
}
asm("leave\njmp *%0" : : "r"(_vptr_CreateWaitableTimerW));
}

void _elf_DeactivateActCtx() asm("DeactivateActCtx");
void _elf_DeactivateActCtx() {
static void *_vptr_DeactivateActCtx = NULL;
load_dll_kernel32();
if (!_vptr_DeactivateActCtx) {
_vptr_DeactivateActCtx = (void *) _elf_GetProcAddress(_dll_kernel32, "DeactivateActCtx");
}
asm("leave\njmp *%0" : : "r"(_vptr_DeactivateActCtx));
}

void _elf_DebugActiveProcess() asm("DebugActiveProcess");
void _elf_DebugActiveProcess() {
static void *_vptr_DebugActiveProcess = NULL;
load_dll_kernel32();
if (!_vptr_DebugActiveProcess) {
_vptr_DebugActiveProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "DebugActiveProcess");
}
asm("leave\njmp *%0" : : "r"(_vptr_DebugActiveProcess));
}

void _elf_DebugActiveProcessStop() asm("DebugActiveProcessStop");
void _elf_DebugActiveProcessStop() {
static void *_vptr_DebugActiveProcessStop = NULL;
load_dll_kernel32();
if (!_vptr_DebugActiveProcessStop) {
_vptr_DebugActiveProcessStop = (void *) _elf_GetProcAddress(_dll_kernel32, "DebugActiveProcessStop");
}
asm("leave\njmp *%0" : : "r"(_vptr_DebugActiveProcessStop));
}

void _elf_DebugBreak() asm("DebugBreak");
void _elf_DebugBreak() {
static void *_vptr_DebugBreak = NULL;
load_dll_kernel32();
if (!_vptr_DebugBreak) {
_vptr_DebugBreak = (void *) _elf_GetProcAddress(_dll_kernel32, "DebugBreak");
}
asm("leave\njmp *%0" : : "r"(_vptr_DebugBreak));
}

void _elf_DebugBreakProcess() asm("DebugBreakProcess");
void _elf_DebugBreakProcess() {
static void *_vptr_DebugBreakProcess = NULL;
load_dll_kernel32();
if (!_vptr_DebugBreakProcess) {
_vptr_DebugBreakProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "DebugBreakProcess");
}
asm("leave\njmp *%0" : : "r"(_vptr_DebugBreakProcess));
}

void _elf_DebugSetProcessKillOnExit() asm("DebugSetProcessKillOnExit");
void _elf_DebugSetProcessKillOnExit() {
static void *_vptr_DebugSetProcessKillOnExit = NULL;
load_dll_kernel32();
if (!_vptr_DebugSetProcessKillOnExit) {
_vptr_DebugSetProcessKillOnExit = (void *) _elf_GetProcAddress(_dll_kernel32, "DebugSetProcessKillOnExit");
}
asm("leave\njmp *%0" : : "r"(_vptr_DebugSetProcessKillOnExit));
}

void _elf_DefineDosDeviceA() asm("DefineDosDeviceA");
void _elf_DefineDosDeviceA() {
static void *_vptr_DefineDosDeviceA = NULL;
load_dll_kernel32();
if (!_vptr_DefineDosDeviceA) {
_vptr_DefineDosDeviceA = (void *) _elf_GetProcAddress(_dll_kernel32, "DefineDosDeviceA");
}
asm("leave\njmp *%0" : : "r"(_vptr_DefineDosDeviceA));
}

void _elf_DefineDosDeviceW() asm("DefineDosDeviceW");
void _elf_DefineDosDeviceW() {
static void *_vptr_DefineDosDeviceW = NULL;
load_dll_kernel32();
if (!_vptr_DefineDosDeviceW) {
_vptr_DefineDosDeviceW = (void *) _elf_GetProcAddress(_dll_kernel32, "DefineDosDeviceW");
}
asm("leave\njmp *%0" : : "r"(_vptr_DefineDosDeviceW));
}

void _elf_DelayLoadFailureHook() asm("DelayLoadFailureHook");
void _elf_DelayLoadFailureHook() {
static void *_vptr_DelayLoadFailureHook = NULL;
load_dll_kernel32();
if (!_vptr_DelayLoadFailureHook) {
_vptr_DelayLoadFailureHook = (void *) _elf_GetProcAddress(_dll_kernel32, "DelayLoadFailureHook");
}
asm("leave\njmp *%0" : : "r"(_vptr_DelayLoadFailureHook));
}

void _elf_DeleteAtom() asm("DeleteAtom");
void _elf_DeleteAtom() {
static void *_vptr_DeleteAtom = NULL;
load_dll_kernel32();
if (!_vptr_DeleteAtom) {
_vptr_DeleteAtom = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteAtom");
}
asm("leave\njmp *%0" : : "r"(_vptr_DeleteAtom));
}

void _elf_DeleteCriticalSection() asm("DeleteCriticalSection");
void _elf_DeleteCriticalSection() {
static void *_vptr_DeleteCriticalSection = NULL;
load_dll_kernel32();
if (!_vptr_DeleteCriticalSection) {
_vptr_DeleteCriticalSection = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteCriticalSection");
}
asm("leave\njmp *%0" : : "r"(_vptr_DeleteCriticalSection));
}

void _elf_DeleteFiber() asm("DeleteFiber");
void _elf_DeleteFiber() {
static void *_vptr_DeleteFiber = NULL;
load_dll_kernel32();
if (!_vptr_DeleteFiber) {
_vptr_DeleteFiber = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteFiber");
}
asm("leave\njmp *%0" : : "r"(_vptr_DeleteFiber));
}

void _elf_DeleteFileA() asm("DeleteFileA");
void _elf_DeleteFileA() {
static void *_vptr_DeleteFileA = NULL;
load_dll_kernel32();
if (!_vptr_DeleteFileA) {
_vptr_DeleteFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteFileA");
}
asm("leave\njmp *%0" : : "r"(_vptr_DeleteFileA));
}

void _elf_DeleteFileW() asm("DeleteFileW");
void _elf_DeleteFileW() {
static void *_vptr_DeleteFileW = NULL;
load_dll_kernel32();
if (!_vptr_DeleteFileW) {
_vptr_DeleteFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteFileW");
}
asm("leave\njmp *%0" : : "r"(_vptr_DeleteFileW));
}

void _elf_DeleteTimerQueue() asm("DeleteTimerQueue");
void _elf_DeleteTimerQueue() {
static void *_vptr_DeleteTimerQueue = NULL;
load_dll_kernel32();
if (!_vptr_DeleteTimerQueue) {
_vptr_DeleteTimerQueue = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteTimerQueue");
}
asm("leave\njmp *%0" : : "r"(_vptr_DeleteTimerQueue));
}

void _elf_DeleteTimerQueueEx() asm("DeleteTimerQueueEx");
void _elf_DeleteTimerQueueEx() {
static void *_vptr_DeleteTimerQueueEx = NULL;
load_dll_kernel32();
if (!_vptr_DeleteTimerQueueEx) {
_vptr_DeleteTimerQueueEx = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteTimerQueueEx");
}
asm("leave\njmp *%0" : : "r"(_vptr_DeleteTimerQueueEx));
}

void _elf_DeleteTimerQueueTimer() asm("DeleteTimerQueueTimer");
void _elf_DeleteTimerQueueTimer() {
static void *_vptr_DeleteTimerQueueTimer = NULL;
load_dll_kernel32();
if (!_vptr_DeleteTimerQueueTimer) {
_vptr_DeleteTimerQueueTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteTimerQueueTimer");
}
asm("leave\njmp *%0" : : "r"(_vptr_DeleteTimerQueueTimer));
}

void _elf_DeleteVolumeMountPointA() asm("DeleteVolumeMountPointA");
void _elf_DeleteVolumeMountPointA() {
static void *_vptr_DeleteVolumeMountPointA = NULL;
load_dll_kernel32();
if (!_vptr_DeleteVolumeMountPointA) {
_vptr_DeleteVolumeMountPointA = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteVolumeMountPointA");
}
asm("leave\njmp *%0" : : "r"(_vptr_DeleteVolumeMountPointA));
}

void _elf_DeleteVolumeMountPointW() asm("DeleteVolumeMountPointW");
void _elf_DeleteVolumeMountPointW() {
static void *_vptr_DeleteVolumeMountPointW = NULL;
load_dll_kernel32();
if (!_vptr_DeleteVolumeMountPointW) {
_vptr_DeleteVolumeMountPointW = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteVolumeMountPointW");
}
asm("leave\njmp *%0" : : "r"(_vptr_DeleteVolumeMountPointW));
}

void _elf_DeviceIoControl() asm("DeviceIoControl");
void _elf_DeviceIoControl() {
static void *_vptr_DeviceIoControl = NULL;
load_dll_kernel32();
if (!_vptr_DeviceIoControl) {
_vptr_DeviceIoControl = (void *) _elf_GetProcAddress(_dll_kernel32, "DeviceIoControl");
}
asm("leave\njmp *%0" : : "r"(_vptr_DeviceIoControl));
}

void _elf_DisableThreadLibraryCalls() asm("DisableThreadLibraryCalls");
void _elf_DisableThreadLibraryCalls() {
static void *_vptr_DisableThreadLibraryCalls = NULL;
load_dll_kernel32();
if (!_vptr_DisableThreadLibraryCalls) {
_vptr_DisableThreadLibraryCalls = (void *) _elf_GetProcAddress(_dll_kernel32, "DisableThreadLibraryCalls");
}
asm("leave\njmp *%0" : : "r"(_vptr_DisableThreadLibraryCalls));
}

void _elf_DisconnectNamedPipe() asm("DisconnectNamedPipe");
void _elf_DisconnectNamedPipe() {
static void *_vptr_DisconnectNamedPipe = NULL;
load_dll_kernel32();
if (!_vptr_DisconnectNamedPipe) {
_vptr_DisconnectNamedPipe = (void *) _elf_GetProcAddress(_dll_kernel32, "DisconnectNamedPipe");
}
asm("leave\njmp *%0" : : "r"(_vptr_DisconnectNamedPipe));
}

void _elf_DnsHostnameToComputerNameA() asm("DnsHostnameToComputerNameA");
void _elf_DnsHostnameToComputerNameA() {
static void *_vptr_DnsHostnameToComputerNameA = NULL;
load_dll_kernel32();
if (!_vptr_DnsHostnameToComputerNameA) {
_vptr_DnsHostnameToComputerNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "DnsHostnameToComputerNameA");
}
asm("leave\njmp *%0" : : "r"(_vptr_DnsHostnameToComputerNameA));
}

void _elf_DnsHostnameToComputerNameW() asm("DnsHostnameToComputerNameW");
void _elf_DnsHostnameToComputerNameW() {
static void *_vptr_DnsHostnameToComputerNameW = NULL;
load_dll_kernel32();
if (!_vptr_DnsHostnameToComputerNameW) {
_vptr_DnsHostnameToComputerNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "DnsHostnameToComputerNameW");
}
asm("leave\njmp *%0" : : "r"(_vptr_DnsHostnameToComputerNameW));
}

void _elf_DosDateTimeToFileTime() asm("DosDateTimeToFileTime");
void _elf_DosDateTimeToFileTime() {
static void *_vptr_DosDateTimeToFileTime = NULL;
load_dll_kernel32();
if (!_vptr_DosDateTimeToFileTime) {
_vptr_DosDateTimeToFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "DosDateTimeToFileTime");
}
asm("leave\njmp *%0" : : "r"(_vptr_DosDateTimeToFileTime));
}

void _elf_DosPathToSessionPathA() asm("DosPathToSessionPathA");
void _elf_DosPathToSessionPathA() {
static void *_vptr_DosPathToSessionPathA = NULL;
load_dll_kernel32();
if (!_vptr_DosPathToSessionPathA) {
_vptr_DosPathToSessionPathA = (void *) _elf_GetProcAddress(_dll_kernel32, "DosPathToSessionPathA");
}
asm("leave\njmp *%0" : : "r"(_vptr_DosPathToSessionPathA));
}

void _elf_DosPathToSessionPathW() asm("DosPathToSessionPathW");
void _elf_DosPathToSessionPathW() {
static void *_vptr_DosPathToSessionPathW = NULL;
load_dll_kernel32();
if (!_vptr_DosPathToSessionPathW) {
_vptr_DosPathToSessionPathW = (void *) _elf_GetProcAddress(_dll_kernel32, "DosPathToSessionPathW");
}
asm("leave\njmp *%0" : : "r"(_vptr_DosPathToSessionPathW));
}

void _elf_DuplicateConsoleHandle() asm("DuplicateConsoleHandle");
void _elf_DuplicateConsoleHandle() {
static void *_vptr_DuplicateConsoleHandle = NULL;
load_dll_kernel32();
if (!_vptr_DuplicateConsoleHandle) {
_vptr_DuplicateConsoleHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "DuplicateConsoleHandle");
}
asm("leave\njmp *%0" : : "r"(_vptr_DuplicateConsoleHandle));
}

void _elf_DuplicateHandle() asm("DuplicateHandle");
void _elf_DuplicateHandle() {
static void *_vptr_DuplicateHandle = NULL;
load_dll_kernel32();
if (!_vptr_DuplicateHandle) {
_vptr_DuplicateHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "DuplicateHandle");
}
asm("leave\njmp *%0" : : "r"(_vptr_DuplicateHandle));
}

void _elf_EndUpdateResourceA() asm("EndUpdateResourceA");
void _elf_EndUpdateResourceA() {
static void *_vptr_EndUpdateResourceA = NULL;
load_dll_kernel32();
if (!_vptr_EndUpdateResourceA) {
_vptr_EndUpdateResourceA = (void *) _elf_GetProcAddress(_dll_kernel32, "EndUpdateResourceA");
}
asm("leave\njmp *%0" : : "r"(_vptr_EndUpdateResourceA));
}

void _elf_EndUpdateResourceW() asm("EndUpdateResourceW");
void _elf_EndUpdateResourceW() {
static void *_vptr_EndUpdateResourceW = NULL;
load_dll_kernel32();
if (!_vptr_EndUpdateResourceW) {
_vptr_EndUpdateResourceW = (void *) _elf_GetProcAddress(_dll_kernel32, "EndUpdateResourceW");
}
asm("leave\njmp *%0" : : "r"(_vptr_EndUpdateResourceW));
}

void _elf_EnterCriticalSection() asm("EnterCriticalSection");
void _elf_EnterCriticalSection() {
static void *_vptr_EnterCriticalSection = NULL;
load_dll_kernel32();
if (!_vptr_EnterCriticalSection) {
_vptr_EnterCriticalSection = (void *) _elf_GetProcAddress(_dll_kernel32, "EnterCriticalSection");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnterCriticalSection));
}

void _elf_EnumCalendarInfoA() asm("EnumCalendarInfoA");
void _elf_EnumCalendarInfoA() {
static void *_vptr_EnumCalendarInfoA = NULL;
load_dll_kernel32();
if (!_vptr_EnumCalendarInfoA) {
_vptr_EnumCalendarInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumCalendarInfoA");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumCalendarInfoA));
}

void _elf_EnumCalendarInfoExA() asm("EnumCalendarInfoExA");
void _elf_EnumCalendarInfoExA() {
static void *_vptr_EnumCalendarInfoExA = NULL;
load_dll_kernel32();
if (!_vptr_EnumCalendarInfoExA) {
_vptr_EnumCalendarInfoExA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumCalendarInfoExA");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumCalendarInfoExA));
}

void _elf_EnumCalendarInfoExW() asm("EnumCalendarInfoExW");
void _elf_EnumCalendarInfoExW() {
static void *_vptr_EnumCalendarInfoExW = NULL;
load_dll_kernel32();
if (!_vptr_EnumCalendarInfoExW) {
_vptr_EnumCalendarInfoExW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumCalendarInfoExW");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumCalendarInfoExW));
}

void _elf_EnumCalendarInfoW() asm("EnumCalendarInfoW");
void _elf_EnumCalendarInfoW() {
static void *_vptr_EnumCalendarInfoW = NULL;
load_dll_kernel32();
if (!_vptr_EnumCalendarInfoW) {
_vptr_EnumCalendarInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumCalendarInfoW");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumCalendarInfoW));
}

void _elf_EnumDateFormatsA() asm("EnumDateFormatsA");
void _elf_EnumDateFormatsA() {
static void *_vptr_EnumDateFormatsA = NULL;
load_dll_kernel32();
if (!_vptr_EnumDateFormatsA) {
_vptr_EnumDateFormatsA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumDateFormatsA");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumDateFormatsA));
}

void _elf_EnumDateFormatsExA() asm("EnumDateFormatsExA");
void _elf_EnumDateFormatsExA() {
static void *_vptr_EnumDateFormatsExA = NULL;
load_dll_kernel32();
if (!_vptr_EnumDateFormatsExA) {
_vptr_EnumDateFormatsExA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumDateFormatsExA");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumDateFormatsExA));
}

void _elf_EnumDateFormatsExW() asm("EnumDateFormatsExW");
void _elf_EnumDateFormatsExW() {
static void *_vptr_EnumDateFormatsExW = NULL;
load_dll_kernel32();
if (!_vptr_EnumDateFormatsExW) {
_vptr_EnumDateFormatsExW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumDateFormatsExW");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumDateFormatsExW));
}

void _elf_EnumDateFormatsW() asm("EnumDateFormatsW");
void _elf_EnumDateFormatsW() {
static void *_vptr_EnumDateFormatsW = NULL;
load_dll_kernel32();
if (!_vptr_EnumDateFormatsW) {
_vptr_EnumDateFormatsW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumDateFormatsW");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumDateFormatsW));
}

void _elf_EnumLanguageGroupLocalesA() asm("EnumLanguageGroupLocalesA");
void _elf_EnumLanguageGroupLocalesA() {
static void *_vptr_EnumLanguageGroupLocalesA = NULL;
load_dll_kernel32();
if (!_vptr_EnumLanguageGroupLocalesA) {
_vptr_EnumLanguageGroupLocalesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumLanguageGroupLocalesA");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumLanguageGroupLocalesA));
}

void _elf_EnumLanguageGroupLocalesW() asm("EnumLanguageGroupLocalesW");
void _elf_EnumLanguageGroupLocalesW() {
static void *_vptr_EnumLanguageGroupLocalesW = NULL;
load_dll_kernel32();
if (!_vptr_EnumLanguageGroupLocalesW) {
_vptr_EnumLanguageGroupLocalesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumLanguageGroupLocalesW");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumLanguageGroupLocalesW));
}

void _elf_EnumResourceLanguagesA() asm("EnumResourceLanguagesA");
void _elf_EnumResourceLanguagesA() {
static void *_vptr_EnumResourceLanguagesA = NULL;
load_dll_kernel32();
if (!_vptr_EnumResourceLanguagesA) {
_vptr_EnumResourceLanguagesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumResourceLanguagesA");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumResourceLanguagesA));
}

void _elf_EnumResourceLanguagesW() asm("EnumResourceLanguagesW");
void _elf_EnumResourceLanguagesW() {
static void *_vptr_EnumResourceLanguagesW = NULL;
load_dll_kernel32();
if (!_vptr_EnumResourceLanguagesW) {
_vptr_EnumResourceLanguagesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumResourceLanguagesW");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumResourceLanguagesW));
}

void _elf_EnumResourceNamesA() asm("EnumResourceNamesA");
void _elf_EnumResourceNamesA() {
static void *_vptr_EnumResourceNamesA = NULL;
load_dll_kernel32();
if (!_vptr_EnumResourceNamesA) {
_vptr_EnumResourceNamesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumResourceNamesA");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumResourceNamesA));
}

void _elf_EnumResourceNamesW() asm("EnumResourceNamesW");
void _elf_EnumResourceNamesW() {
static void *_vptr_EnumResourceNamesW = NULL;
load_dll_kernel32();
if (!_vptr_EnumResourceNamesW) {
_vptr_EnumResourceNamesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumResourceNamesW");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumResourceNamesW));
}

void _elf_EnumResourceTypesA() asm("EnumResourceTypesA");
void _elf_EnumResourceTypesA() {
static void *_vptr_EnumResourceTypesA = NULL;
load_dll_kernel32();
if (!_vptr_EnumResourceTypesA) {
_vptr_EnumResourceTypesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumResourceTypesA");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumResourceTypesA));
}

void _elf_EnumResourceTypesW() asm("EnumResourceTypesW");
void _elf_EnumResourceTypesW() {
static void *_vptr_EnumResourceTypesW = NULL;
load_dll_kernel32();
if (!_vptr_EnumResourceTypesW) {
_vptr_EnumResourceTypesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumResourceTypesW");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumResourceTypesW));
}

void _elf_EnumSystemCodePagesA() asm("EnumSystemCodePagesA");
void _elf_EnumSystemCodePagesA() {
static void *_vptr_EnumSystemCodePagesA = NULL;
load_dll_kernel32();
if (!_vptr_EnumSystemCodePagesA) {
_vptr_EnumSystemCodePagesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemCodePagesA");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumSystemCodePagesA));
}

void _elf_EnumSystemCodePagesW() asm("EnumSystemCodePagesW");
void _elf_EnumSystemCodePagesW() {
static void *_vptr_EnumSystemCodePagesW = NULL;
load_dll_kernel32();
if (!_vptr_EnumSystemCodePagesW) {
_vptr_EnumSystemCodePagesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemCodePagesW");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumSystemCodePagesW));
}

void _elf_EnumSystemGeoID() asm("EnumSystemGeoID");
void _elf_EnumSystemGeoID() {
static void *_vptr_EnumSystemGeoID = NULL;
load_dll_kernel32();
if (!_vptr_EnumSystemGeoID) {
_vptr_EnumSystemGeoID = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemGeoID");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumSystemGeoID));
}

void _elf_EnumSystemLanguageGroupsA() asm("EnumSystemLanguageGroupsA");
void _elf_EnumSystemLanguageGroupsA() {
static void *_vptr_EnumSystemLanguageGroupsA = NULL;
load_dll_kernel32();
if (!_vptr_EnumSystemLanguageGroupsA) {
_vptr_EnumSystemLanguageGroupsA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemLanguageGroupsA");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumSystemLanguageGroupsA));
}

void _elf_EnumSystemLanguageGroupsW() asm("EnumSystemLanguageGroupsW");
void _elf_EnumSystemLanguageGroupsW() {
static void *_vptr_EnumSystemLanguageGroupsW = NULL;
load_dll_kernel32();
if (!_vptr_EnumSystemLanguageGroupsW) {
_vptr_EnumSystemLanguageGroupsW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemLanguageGroupsW");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumSystemLanguageGroupsW));
}

void _elf_EnumSystemLocalesA() asm("EnumSystemLocalesA");
void _elf_EnumSystemLocalesA() {
static void *_vptr_EnumSystemLocalesA = NULL;
load_dll_kernel32();
if (!_vptr_EnumSystemLocalesA) {
_vptr_EnumSystemLocalesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemLocalesA");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumSystemLocalesA));
}

void _elf_EnumSystemLocalesW() asm("EnumSystemLocalesW");
void _elf_EnumSystemLocalesW() {
static void *_vptr_EnumSystemLocalesW = NULL;
load_dll_kernel32();
if (!_vptr_EnumSystemLocalesW) {
_vptr_EnumSystemLocalesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemLocalesW");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumSystemLocalesW));
}

void _elf_EnumTimeFormatsA() asm("EnumTimeFormatsA");
void _elf_EnumTimeFormatsA() {
static void *_vptr_EnumTimeFormatsA = NULL;
load_dll_kernel32();
if (!_vptr_EnumTimeFormatsA) {
_vptr_EnumTimeFormatsA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumTimeFormatsA");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumTimeFormatsA));
}

void _elf_EnumTimeFormatsW() asm("EnumTimeFormatsW");
void _elf_EnumTimeFormatsW() {
static void *_vptr_EnumTimeFormatsW = NULL;
load_dll_kernel32();
if (!_vptr_EnumTimeFormatsW) {
_vptr_EnumTimeFormatsW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumTimeFormatsW");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumTimeFormatsW));
}

void _elf_EnumUILanguagesA() asm("EnumUILanguagesA");
void _elf_EnumUILanguagesA() {
static void *_vptr_EnumUILanguagesA = NULL;
load_dll_kernel32();
if (!_vptr_EnumUILanguagesA) {
_vptr_EnumUILanguagesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumUILanguagesA");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumUILanguagesA));
}

void _elf_EnumUILanguagesW() asm("EnumUILanguagesW");
void _elf_EnumUILanguagesW() {
static void *_vptr_EnumUILanguagesW = NULL;
load_dll_kernel32();
if (!_vptr_EnumUILanguagesW) {
_vptr_EnumUILanguagesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumUILanguagesW");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumUILanguagesW));
}

void _elf_EnumerateLocalComputerNamesA() asm("EnumerateLocalComputerNamesA");
void _elf_EnumerateLocalComputerNamesA() {
static void *_vptr_EnumerateLocalComputerNamesA = NULL;
load_dll_kernel32();
if (!_vptr_EnumerateLocalComputerNamesA) {
_vptr_EnumerateLocalComputerNamesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumerateLocalComputerNamesA");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumerateLocalComputerNamesA));
}

void _elf_EnumerateLocalComputerNamesW() asm("EnumerateLocalComputerNamesW");
void _elf_EnumerateLocalComputerNamesW() {
static void *_vptr_EnumerateLocalComputerNamesW = NULL;
load_dll_kernel32();
if (!_vptr_EnumerateLocalComputerNamesW) {
_vptr_EnumerateLocalComputerNamesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumerateLocalComputerNamesW");
}
asm("leave\njmp *%0" : : "r"(_vptr_EnumerateLocalComputerNamesW));
}

void _elf_EraseTape() asm("EraseTape");
void _elf_EraseTape() {
static void *_vptr_EraseTape = NULL;
load_dll_kernel32();
if (!_vptr_EraseTape) {
_vptr_EraseTape = (void *) _elf_GetProcAddress(_dll_kernel32, "EraseTape");
}
asm("leave\njmp *%0" : : "r"(_vptr_EraseTape));
}

void _elf_EscapeCommFunction() asm("EscapeCommFunction");
void _elf_EscapeCommFunction() {
static void *_vptr_EscapeCommFunction = NULL;
load_dll_kernel32();
if (!_vptr_EscapeCommFunction) {
_vptr_EscapeCommFunction = (void *) _elf_GetProcAddress(_dll_kernel32, "EscapeCommFunction");
}
asm("leave\njmp *%0" : : "r"(_vptr_EscapeCommFunction));
}

void _elf_ExitProcess() asm("ExitProcess");
void _elf_ExitProcess() {
static void *_vptr_ExitProcess = NULL;
load_dll_kernel32();
if (!_vptr_ExitProcess) {
_vptr_ExitProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "ExitProcess");
}
asm("leave\njmp *%0" : : "r"(_vptr_ExitProcess));
}

void _elf_ExitThread() asm("ExitThread");
void _elf_ExitThread() {
static void *_vptr_ExitThread = NULL;
load_dll_kernel32();
if (!_vptr_ExitThread) {
_vptr_ExitThread = (void *) _elf_GetProcAddress(_dll_kernel32, "ExitThread");
}
asm("leave\njmp *%0" : : "r"(_vptr_ExitThread));
}

void _elf_ExitVDM() asm("ExitVDM");
void _elf_ExitVDM() {
static void *_vptr_ExitVDM = NULL;
load_dll_kernel32();
if (!_vptr_ExitVDM) {
_vptr_ExitVDM = (void *) _elf_GetProcAddress(_dll_kernel32, "ExitVDM");
}
asm("leave\njmp *%0" : : "r"(_vptr_ExitVDM));
}

void _elf_ExpandEnvironmentStringsA() asm("ExpandEnvironmentStringsA");
void _elf_ExpandEnvironmentStringsA() {
static void *_vptr_ExpandEnvironmentStringsA = NULL;
load_dll_kernel32();
if (!_vptr_ExpandEnvironmentStringsA) {
_vptr_ExpandEnvironmentStringsA = (void *) _elf_GetProcAddress(_dll_kernel32, "ExpandEnvironmentStringsA");
}
asm("leave\njmp *%0" : : "r"(_vptr_ExpandEnvironmentStringsA));
}

void _elf_ExpandEnvironmentStringsW() asm("ExpandEnvironmentStringsW");
void _elf_ExpandEnvironmentStringsW() {
static void *_vptr_ExpandEnvironmentStringsW = NULL;
load_dll_kernel32();
if (!_vptr_ExpandEnvironmentStringsW) {
_vptr_ExpandEnvironmentStringsW = (void *) _elf_GetProcAddress(_dll_kernel32, "ExpandEnvironmentStringsW");
}
asm("leave\njmp *%0" : : "r"(_vptr_ExpandEnvironmentStringsW));
}

void _elf_ExpungeConsoleCommandHistoryA() asm("ExpungeConsoleCommandHistoryA");
void _elf_ExpungeConsoleCommandHistoryA() {
static void *_vptr_ExpungeConsoleCommandHistoryA = NULL;
load_dll_kernel32();
if (!_vptr_ExpungeConsoleCommandHistoryA) {
_vptr_ExpungeConsoleCommandHistoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "ExpungeConsoleCommandHistoryA");
}
asm("leave\njmp *%0" : : "r"(_vptr_ExpungeConsoleCommandHistoryA));
}

void _elf_ExpungeConsoleCommandHistoryW() asm("ExpungeConsoleCommandHistoryW");
void _elf_ExpungeConsoleCommandHistoryW() {
static void *_vptr_ExpungeConsoleCommandHistoryW = NULL;
load_dll_kernel32();
if (!_vptr_ExpungeConsoleCommandHistoryW) {
_vptr_ExpungeConsoleCommandHistoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "ExpungeConsoleCommandHistoryW");
}
asm("leave\njmp *%0" : : "r"(_vptr_ExpungeConsoleCommandHistoryW));
}

void _elf_ExtendVirtualBuffer() asm("ExtendVirtualBuffer");
void _elf_ExtendVirtualBuffer() {
static void *_vptr_ExtendVirtualBuffer = NULL;
load_dll_kernel32();
if (!_vptr_ExtendVirtualBuffer) {
_vptr_ExtendVirtualBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "ExtendVirtualBuffer");
}
asm("leave\njmp *%0" : : "r"(_vptr_ExtendVirtualBuffer));
}

void _elf_FatalAppExitA() asm("FatalAppExitA");
void _elf_FatalAppExitA() {
static void *_vptr_FatalAppExitA = NULL;
load_dll_kernel32();
if (!_vptr_FatalAppExitA) {
_vptr_FatalAppExitA = (void *) _elf_GetProcAddress(_dll_kernel32, "FatalAppExitA");
}
asm("leave\njmp *%0" : : "r"(_vptr_FatalAppExitA));
}

void _elf_FatalAppExitW() asm("FatalAppExitW");
void _elf_FatalAppExitW() {
static void *_vptr_FatalAppExitW = NULL;
load_dll_kernel32();
if (!_vptr_FatalAppExitW) {
_vptr_FatalAppExitW = (void *) _elf_GetProcAddress(_dll_kernel32, "FatalAppExitW");
}
asm("leave\njmp *%0" : : "r"(_vptr_FatalAppExitW));
}

void _elf_FatalExit() asm("FatalExit");
void _elf_FatalExit() {
static void *_vptr_FatalExit = NULL;
load_dll_kernel32();
if (!_vptr_FatalExit) {
_vptr_FatalExit = (void *) _elf_GetProcAddress(_dll_kernel32, "FatalExit");
}
asm("leave\njmp *%0" : : "r"(_vptr_FatalExit));
}

void _elf_FileTimeToDosDateTime() asm("FileTimeToDosDateTime");
void _elf_FileTimeToDosDateTime() {
static void *_vptr_FileTimeToDosDateTime = NULL;
load_dll_kernel32();
if (!_vptr_FileTimeToDosDateTime) {
_vptr_FileTimeToDosDateTime = (void *) _elf_GetProcAddress(_dll_kernel32, "FileTimeToDosDateTime");
}
asm("leave\njmp *%0" : : "r"(_vptr_FileTimeToDosDateTime));
}

void _elf_FileTimeToLocalFileTime() asm("FileTimeToLocalFileTime");
void _elf_FileTimeToLocalFileTime() {
static void *_vptr_FileTimeToLocalFileTime = NULL;
load_dll_kernel32();
if (!_vptr_FileTimeToLocalFileTime) {
_vptr_FileTimeToLocalFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "FileTimeToLocalFileTime");
}
asm("leave\njmp *%0" : : "r"(_vptr_FileTimeToLocalFileTime));
}

void _elf_FileTimeToSystemTime() asm("FileTimeToSystemTime");
void _elf_FileTimeToSystemTime() {
static void *_vptr_FileTimeToSystemTime = NULL;
load_dll_kernel32();
if (!_vptr_FileTimeToSystemTime) {
_vptr_FileTimeToSystemTime = (void *) _elf_GetProcAddress(_dll_kernel32, "FileTimeToSystemTime");
}
asm("leave\njmp *%0" : : "r"(_vptr_FileTimeToSystemTime));
}

void _elf_FillConsoleOutputAttribute() asm("FillConsoleOutputAttribute");
void _elf_FillConsoleOutputAttribute() {
static void *_vptr_FillConsoleOutputAttribute = NULL;
load_dll_kernel32();
if (!_vptr_FillConsoleOutputAttribute) {
_vptr_FillConsoleOutputAttribute = (void *) _elf_GetProcAddress(_dll_kernel32, "FillConsoleOutputAttribute");
}
asm("leave\njmp *%0" : : "r"(_vptr_FillConsoleOutputAttribute));
}

void _elf_FillConsoleOutputCharacterA() asm("FillConsoleOutputCharacterA");
void _elf_FillConsoleOutputCharacterA() {
static void *_vptr_FillConsoleOutputCharacterA = NULL;
load_dll_kernel32();
if (!_vptr_FillConsoleOutputCharacterA) {
_vptr_FillConsoleOutputCharacterA = (void *) _elf_GetProcAddress(_dll_kernel32, "FillConsoleOutputCharacterA");
}
asm("leave\njmp *%0" : : "r"(_vptr_FillConsoleOutputCharacterA));
}

void _elf_FillConsoleOutputCharacterW() asm("FillConsoleOutputCharacterW");
void _elf_FillConsoleOutputCharacterW() {
static void *_vptr_FillConsoleOutputCharacterW = NULL;
load_dll_kernel32();
if (!_vptr_FillConsoleOutputCharacterW) {
_vptr_FillConsoleOutputCharacterW = (void *) _elf_GetProcAddress(_dll_kernel32, "FillConsoleOutputCharacterW");
}
asm("leave\njmp *%0" : : "r"(_vptr_FillConsoleOutputCharacterW));
}

void _elf_FindActCtxSectionGuid() asm("FindActCtxSectionGuid");
void _elf_FindActCtxSectionGuid() {
static void *_vptr_FindActCtxSectionGuid = NULL;
load_dll_kernel32();
if (!_vptr_FindActCtxSectionGuid) {
_vptr_FindActCtxSectionGuid = (void *) _elf_GetProcAddress(_dll_kernel32, "FindActCtxSectionGuid");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindActCtxSectionGuid));
}

void _elf_FindActCtxSectionStringA() asm("FindActCtxSectionStringA");
void _elf_FindActCtxSectionStringA() {
static void *_vptr_FindActCtxSectionStringA = NULL;
load_dll_kernel32();
if (!_vptr_FindActCtxSectionStringA) {
_vptr_FindActCtxSectionStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindActCtxSectionStringA");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindActCtxSectionStringA));
}

void _elf_FindActCtxSectionStringW() asm("FindActCtxSectionStringW");
void _elf_FindActCtxSectionStringW() {
static void *_vptr_FindActCtxSectionStringW = NULL;
load_dll_kernel32();
if (!_vptr_FindActCtxSectionStringW) {
_vptr_FindActCtxSectionStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindActCtxSectionStringW");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindActCtxSectionStringW));
}

void _elf_FindAtomA() asm("FindAtomA");
void _elf_FindAtomA() {
static void *_vptr_FindAtomA = NULL;
load_dll_kernel32();
if (!_vptr_FindAtomA) {
_vptr_FindAtomA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindAtomA");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindAtomA));
}

void _elf_FindAtomW() asm("FindAtomW");
void _elf_FindAtomW() {
static void *_vptr_FindAtomW = NULL;
load_dll_kernel32();
if (!_vptr_FindAtomW) {
_vptr_FindAtomW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindAtomW");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindAtomW));
}

void _elf_FindClose() asm("FindClose");
void _elf_FindClose() {
static void *_vptr_FindClose = NULL;
load_dll_kernel32();
if (!_vptr_FindClose) {
_vptr_FindClose = (void *) _elf_GetProcAddress(_dll_kernel32, "FindClose");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindClose));
}

void _elf_FindCloseChangeNotification() asm("FindCloseChangeNotification");
void _elf_FindCloseChangeNotification() {
static void *_vptr_FindCloseChangeNotification = NULL;
load_dll_kernel32();
if (!_vptr_FindCloseChangeNotification) {
_vptr_FindCloseChangeNotification = (void *) _elf_GetProcAddress(_dll_kernel32, "FindCloseChangeNotification");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindCloseChangeNotification));
}

void _elf_FindFirstChangeNotificationA() asm("FindFirstChangeNotificationA");
void _elf_FindFirstChangeNotificationA() {
static void *_vptr_FindFirstChangeNotificationA = NULL;
load_dll_kernel32();
if (!_vptr_FindFirstChangeNotificationA) {
_vptr_FindFirstChangeNotificationA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstChangeNotificationA");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindFirstChangeNotificationA));
}

void _elf_FindFirstChangeNotificationW() asm("FindFirstChangeNotificationW");
void _elf_FindFirstChangeNotificationW() {
static void *_vptr_FindFirstChangeNotificationW = NULL;
load_dll_kernel32();
if (!_vptr_FindFirstChangeNotificationW) {
_vptr_FindFirstChangeNotificationW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstChangeNotificationW");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindFirstChangeNotificationW));
}

void _elf_FindFirstFileA() asm("FindFirstFileA");
void _elf_FindFirstFileA() {
static void *_vptr_FindFirstFileA = NULL;
load_dll_kernel32();
if (!_vptr_FindFirstFileA) {
_vptr_FindFirstFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstFileA");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindFirstFileA));
}

void _elf_FindFirstFileExA() asm("FindFirstFileExA");
void _elf_FindFirstFileExA() {
static void *_vptr_FindFirstFileExA = NULL;
load_dll_kernel32();
if (!_vptr_FindFirstFileExA) {
_vptr_FindFirstFileExA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstFileExA");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindFirstFileExA));
}

void _elf_FindFirstFileExW() asm("FindFirstFileExW");
void _elf_FindFirstFileExW() {
static void *_vptr_FindFirstFileExW = NULL;
load_dll_kernel32();
if (!_vptr_FindFirstFileExW) {
_vptr_FindFirstFileExW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstFileExW");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindFirstFileExW));
}

void _elf_FindFirstFileW() asm("FindFirstFileW");
void _elf_FindFirstFileW() {
static void *_vptr_FindFirstFileW = NULL;
load_dll_kernel32();
if (!_vptr_FindFirstFileW) {
_vptr_FindFirstFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstFileW");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindFirstFileW));
}

void _elf_FindFirstVolumeA() asm("FindFirstVolumeA");
void _elf_FindFirstVolumeA() {
static void *_vptr_FindFirstVolumeA = NULL;
load_dll_kernel32();
if (!_vptr_FindFirstVolumeA) {
_vptr_FindFirstVolumeA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstVolumeA");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindFirstVolumeA));
}

void _elf_FindFirstVolumeMountPointA() asm("FindFirstVolumeMountPointA");
void _elf_FindFirstVolumeMountPointA() {
static void *_vptr_FindFirstVolumeMountPointA = NULL;
load_dll_kernel32();
if (!_vptr_FindFirstVolumeMountPointA) {
_vptr_FindFirstVolumeMountPointA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstVolumeMountPointA");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindFirstVolumeMountPointA));
}

void _elf_FindFirstVolumeMountPointW() asm("FindFirstVolumeMountPointW");
void _elf_FindFirstVolumeMountPointW() {
static void *_vptr_FindFirstVolumeMountPointW = NULL;
load_dll_kernel32();
if (!_vptr_FindFirstVolumeMountPointW) {
_vptr_FindFirstVolumeMountPointW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstVolumeMountPointW");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindFirstVolumeMountPointW));
}

void _elf_FindFirstVolumeW() asm("FindFirstVolumeW");
void _elf_FindFirstVolumeW() {
static void *_vptr_FindFirstVolumeW = NULL;
load_dll_kernel32();
if (!_vptr_FindFirstVolumeW) {
_vptr_FindFirstVolumeW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstVolumeW");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindFirstVolumeW));
}

void _elf_FindNextChangeNotification() asm("FindNextChangeNotification");
void _elf_FindNextChangeNotification() {
static void *_vptr_FindNextChangeNotification = NULL;
load_dll_kernel32();
if (!_vptr_FindNextChangeNotification) {
_vptr_FindNextChangeNotification = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextChangeNotification");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindNextChangeNotification));
}

void _elf_FindNextFileA() asm("FindNextFileA");
void _elf_FindNextFileA() {
static void *_vptr_FindNextFileA = NULL;
load_dll_kernel32();
if (!_vptr_FindNextFileA) {
_vptr_FindNextFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextFileA");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindNextFileA));
}

void _elf_FindNextFileW() asm("FindNextFileW");
void _elf_FindNextFileW() {
static void *_vptr_FindNextFileW = NULL;
load_dll_kernel32();
if (!_vptr_FindNextFileW) {
_vptr_FindNextFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextFileW");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindNextFileW));
}

void _elf_FindNextVolumeA() asm("FindNextVolumeA");
void _elf_FindNextVolumeA() {
static void *_vptr_FindNextVolumeA = NULL;
load_dll_kernel32();
if (!_vptr_FindNextVolumeA) {
_vptr_FindNextVolumeA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextVolumeA");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindNextVolumeA));
}

void _elf_FindNextVolumeMountPointA() asm("FindNextVolumeMountPointA");
void _elf_FindNextVolumeMountPointA() {
static void *_vptr_FindNextVolumeMountPointA = NULL;
load_dll_kernel32();
if (!_vptr_FindNextVolumeMountPointA) {
_vptr_FindNextVolumeMountPointA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextVolumeMountPointA");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindNextVolumeMountPointA));
}

void _elf_FindNextVolumeMountPointW() asm("FindNextVolumeMountPointW");
void _elf_FindNextVolumeMountPointW() {
static void *_vptr_FindNextVolumeMountPointW = NULL;
load_dll_kernel32();
if (!_vptr_FindNextVolumeMountPointW) {
_vptr_FindNextVolumeMountPointW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextVolumeMountPointW");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindNextVolumeMountPointW));
}

void _elf_FindNextVolumeW() asm("FindNextVolumeW");
void _elf_FindNextVolumeW() {
static void *_vptr_FindNextVolumeW = NULL;
load_dll_kernel32();
if (!_vptr_FindNextVolumeW) {
_vptr_FindNextVolumeW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextVolumeW");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindNextVolumeW));
}

void _elf_FindResourceA() asm("FindResourceA");
void _elf_FindResourceA() {
static void *_vptr_FindResourceA = NULL;
load_dll_kernel32();
if (!_vptr_FindResourceA) {
_vptr_FindResourceA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindResourceA");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindResourceA));
}

void _elf_FindResourceExA() asm("FindResourceExA");
void _elf_FindResourceExA() {
static void *_vptr_FindResourceExA = NULL;
load_dll_kernel32();
if (!_vptr_FindResourceExA) {
_vptr_FindResourceExA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindResourceExA");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindResourceExA));
}

void _elf_FindResourceExW() asm("FindResourceExW");
void _elf_FindResourceExW() {
static void *_vptr_FindResourceExW = NULL;
load_dll_kernel32();
if (!_vptr_FindResourceExW) {
_vptr_FindResourceExW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindResourceExW");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindResourceExW));
}

void _elf_FindResourceW() asm("FindResourceW");
void _elf_FindResourceW() {
static void *_vptr_FindResourceW = NULL;
load_dll_kernel32();
if (!_vptr_FindResourceW) {
_vptr_FindResourceW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindResourceW");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindResourceW));
}

void _elf_FindVolumeClose() asm("FindVolumeClose");
void _elf_FindVolumeClose() {
static void *_vptr_FindVolumeClose = NULL;
load_dll_kernel32();
if (!_vptr_FindVolumeClose) {
_vptr_FindVolumeClose = (void *) _elf_GetProcAddress(_dll_kernel32, "FindVolumeClose");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindVolumeClose));
}

void _elf_FindVolumeMountPointClose() asm("FindVolumeMountPointClose");
void _elf_FindVolumeMountPointClose() {
static void *_vptr_FindVolumeMountPointClose = NULL;
load_dll_kernel32();
if (!_vptr_FindVolumeMountPointClose) {
_vptr_FindVolumeMountPointClose = (void *) _elf_GetProcAddress(_dll_kernel32, "FindVolumeMountPointClose");
}
asm("leave\njmp *%0" : : "r"(_vptr_FindVolumeMountPointClose));
}

void _elf_FlushConsoleInputBuffer() asm("FlushConsoleInputBuffer");
void _elf_FlushConsoleInputBuffer() {
static void *_vptr_FlushConsoleInputBuffer = NULL;
load_dll_kernel32();
if (!_vptr_FlushConsoleInputBuffer) {
_vptr_FlushConsoleInputBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "FlushConsoleInputBuffer");
}
asm("leave\njmp *%0" : : "r"(_vptr_FlushConsoleInputBuffer));
}

void _elf_FlushFileBuffers() asm("FlushFileBuffers");
void _elf_FlushFileBuffers() {
static void *_vptr_FlushFileBuffers = NULL;
load_dll_kernel32();
if (!_vptr_FlushFileBuffers) {
_vptr_FlushFileBuffers = (void *) _elf_GetProcAddress(_dll_kernel32, "FlushFileBuffers");
}
asm("leave\njmp *%0" : : "r"(_vptr_FlushFileBuffers));
}

void _elf_FlushInstructionCache() asm("FlushInstructionCache");
void _elf_FlushInstructionCache() {
static void *_vptr_FlushInstructionCache = NULL;
load_dll_kernel32();
if (!_vptr_FlushInstructionCache) {
_vptr_FlushInstructionCache = (void *) _elf_GetProcAddress(_dll_kernel32, "FlushInstructionCache");
}
asm("leave\njmp *%0" : : "r"(_vptr_FlushInstructionCache));
}

void _elf_FlushViewOfFile() asm("FlushViewOfFile");
void _elf_FlushViewOfFile() {
static void *_vptr_FlushViewOfFile = NULL;
load_dll_kernel32();
if (!_vptr_FlushViewOfFile) {
_vptr_FlushViewOfFile = (void *) _elf_GetProcAddress(_dll_kernel32, "FlushViewOfFile");
}
asm("leave\njmp *%0" : : "r"(_vptr_FlushViewOfFile));
}

void _elf_FoldStringA() asm("FoldStringA");
void _elf_FoldStringA() {
static void *_vptr_FoldStringA = NULL;
load_dll_kernel32();
if (!_vptr_FoldStringA) {
_vptr_FoldStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "FoldStringA");
}
asm("leave\njmp *%0" : : "r"(_vptr_FoldStringA));
}

void _elf_FoldStringW() asm("FoldStringW");
void _elf_FoldStringW() {
static void *_vptr_FoldStringW = NULL;
load_dll_kernel32();
if (!_vptr_FoldStringW) {
_vptr_FoldStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "FoldStringW");
}
asm("leave\njmp *%0" : : "r"(_vptr_FoldStringW));
}

void _elf_FormatMessageA() asm("FormatMessageA");
void _elf_FormatMessageA() {
static void *_vptr_FormatMessageA = NULL;
load_dll_kernel32();
if (!_vptr_FormatMessageA) {
_vptr_FormatMessageA = (void *) _elf_GetProcAddress(_dll_kernel32, "FormatMessageA");
}
asm("leave\njmp *%0" : : "r"(_vptr_FormatMessageA));
}

void _elf_FormatMessageW() asm("FormatMessageW");
void _elf_FormatMessageW() {
static void *_vptr_FormatMessageW = NULL;
load_dll_kernel32();
if (!_vptr_FormatMessageW) {
_vptr_FormatMessageW = (void *) _elf_GetProcAddress(_dll_kernel32, "FormatMessageW");
}
asm("leave\njmp *%0" : : "r"(_vptr_FormatMessageW));
}

void _elf_FreeConsole() asm("FreeConsole");
void _elf_FreeConsole() {
static void *_vptr_FreeConsole = NULL;
load_dll_kernel32();
if (!_vptr_FreeConsole) {
_vptr_FreeConsole = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeConsole");
}
asm("leave\njmp *%0" : : "r"(_vptr_FreeConsole));
}

void _elf_FreeEnvironmentStringsA() asm("FreeEnvironmentStringsA");
void _elf_FreeEnvironmentStringsA() {
static void *_vptr_FreeEnvironmentStringsA = NULL;
load_dll_kernel32();
if (!_vptr_FreeEnvironmentStringsA) {
_vptr_FreeEnvironmentStringsA = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeEnvironmentStringsA");
}
asm("leave\njmp *%0" : : "r"(_vptr_FreeEnvironmentStringsA));
}

void _elf_FreeEnvironmentStringsW() asm("FreeEnvironmentStringsW");
void _elf_FreeEnvironmentStringsW() {
static void *_vptr_FreeEnvironmentStringsW = NULL;
load_dll_kernel32();
if (!_vptr_FreeEnvironmentStringsW) {
_vptr_FreeEnvironmentStringsW = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeEnvironmentStringsW");
}
asm("leave\njmp *%0" : : "r"(_vptr_FreeEnvironmentStringsW));
}

void _elf_FreeLibrary() asm("FreeLibrary");
void _elf_FreeLibrary() {
static void *_vptr_FreeLibrary = NULL;
load_dll_kernel32();
if (!_vptr_FreeLibrary) {
_vptr_FreeLibrary = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeLibrary");
}
asm("leave\njmp *%0" : : "r"(_vptr_FreeLibrary));
}

void _elf_FreeLibraryAndExitThread() asm("FreeLibraryAndExitThread");
void _elf_FreeLibraryAndExitThread() {
static void *_vptr_FreeLibraryAndExitThread = NULL;
load_dll_kernel32();
if (!_vptr_FreeLibraryAndExitThread) {
_vptr_FreeLibraryAndExitThread = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeLibraryAndExitThread");
}
asm("leave\njmp *%0" : : "r"(_vptr_FreeLibraryAndExitThread));
}

void _elf_FreeResource() asm("FreeResource");
void _elf_FreeResource() {
static void *_vptr_FreeResource = NULL;
load_dll_kernel32();
if (!_vptr_FreeResource) {
_vptr_FreeResource = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeResource");
}
asm("leave\njmp *%0" : : "r"(_vptr_FreeResource));
}

void _elf_FreeUserPhysicalPages() asm("FreeUserPhysicalPages");
void _elf_FreeUserPhysicalPages() {
static void *_vptr_FreeUserPhysicalPages = NULL;
load_dll_kernel32();
if (!_vptr_FreeUserPhysicalPages) {
_vptr_FreeUserPhysicalPages = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeUserPhysicalPages");
}
asm("leave\njmp *%0" : : "r"(_vptr_FreeUserPhysicalPages));
}

void _elf_FreeVirtualBuffer() asm("FreeVirtualBuffer");
void _elf_FreeVirtualBuffer() {
static void *_vptr_FreeVirtualBuffer = NULL;
load_dll_kernel32();
if (!_vptr_FreeVirtualBuffer) {
_vptr_FreeVirtualBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeVirtualBuffer");
}
asm("leave\njmp *%0" : : "r"(_vptr_FreeVirtualBuffer));
}

void _elf_GenerateConsoleCtrlEvent() asm("GenerateConsoleCtrlEvent");
void _elf_GenerateConsoleCtrlEvent() {
static void *_vptr_GenerateConsoleCtrlEvent = NULL;
load_dll_kernel32();
if (!_vptr_GenerateConsoleCtrlEvent) {
_vptr_GenerateConsoleCtrlEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "GenerateConsoleCtrlEvent");
}
asm("leave\njmp *%0" : : "r"(_vptr_GenerateConsoleCtrlEvent));
}

void _elf_GetACP() asm("GetACP");
void _elf_GetACP() {
static void *_vptr_GetACP = NULL;
load_dll_kernel32();
if (!_vptr_GetACP) {
_vptr_GetACP = (void *) _elf_GetProcAddress(_dll_kernel32, "GetACP");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetACP));
}

void _elf_GetAtomNameA() asm("GetAtomNameA");
void _elf_GetAtomNameA() {
static void *_vptr_GetAtomNameA = NULL;
load_dll_kernel32();
if (!_vptr_GetAtomNameA) {
_vptr_GetAtomNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetAtomNameA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetAtomNameA));
}

void _elf_GetAtomNameW() asm("GetAtomNameW");
void _elf_GetAtomNameW() {
static void *_vptr_GetAtomNameW = NULL;
load_dll_kernel32();
if (!_vptr_GetAtomNameW) {
_vptr_GetAtomNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetAtomNameW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetAtomNameW));
}

void _elf_GetBinaryType() asm("GetBinaryType");
void _elf_GetBinaryType() {
static void *_vptr_GetBinaryType = NULL;
load_dll_kernel32();
if (!_vptr_GetBinaryType) {
_vptr_GetBinaryType = (void *) _elf_GetProcAddress(_dll_kernel32, "GetBinaryType");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetBinaryType));
}

void _elf_GetBinaryTypeA() asm("GetBinaryTypeA");
void _elf_GetBinaryTypeA() {
static void *_vptr_GetBinaryTypeA = NULL;
load_dll_kernel32();
if (!_vptr_GetBinaryTypeA) {
_vptr_GetBinaryTypeA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetBinaryTypeA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetBinaryTypeA));
}

void _elf_GetBinaryTypeW() asm("GetBinaryTypeW");
void _elf_GetBinaryTypeW() {
static void *_vptr_GetBinaryTypeW = NULL;
load_dll_kernel32();
if (!_vptr_GetBinaryTypeW) {
_vptr_GetBinaryTypeW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetBinaryTypeW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetBinaryTypeW));
}

void _elf_GetCPFileNameFromRegistry() asm("GetCPFileNameFromRegistry");
void _elf_GetCPFileNameFromRegistry() {
static void *_vptr_GetCPFileNameFromRegistry = NULL;
load_dll_kernel32();
if (!_vptr_GetCPFileNameFromRegistry) {
_vptr_GetCPFileNameFromRegistry = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCPFileNameFromRegistry");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCPFileNameFromRegistry));
}

void _elf_GetCPInfo() asm("GetCPInfo");
void _elf_GetCPInfo() {
static void *_vptr_GetCPInfo = NULL;
load_dll_kernel32();
if (!_vptr_GetCPInfo) {
_vptr_GetCPInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCPInfo");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCPInfo));
}

void _elf_GetCPInfoExA() asm("GetCPInfoExA");
void _elf_GetCPInfoExA() {
static void *_vptr_GetCPInfoExA = NULL;
load_dll_kernel32();
if (!_vptr_GetCPInfoExA) {
_vptr_GetCPInfoExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCPInfoExA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCPInfoExA));
}

void _elf_GetCPInfoExW() asm("GetCPInfoExW");
void _elf_GetCPInfoExW() {
static void *_vptr_GetCPInfoExW = NULL;
load_dll_kernel32();
if (!_vptr_GetCPInfoExW) {
_vptr_GetCPInfoExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCPInfoExW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCPInfoExW));
}

void _elf_GetCalendarInfoA() asm("GetCalendarInfoA");
void _elf_GetCalendarInfoA() {
static void *_vptr_GetCalendarInfoA = NULL;
load_dll_kernel32();
if (!_vptr_GetCalendarInfoA) {
_vptr_GetCalendarInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCalendarInfoA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCalendarInfoA));
}

void _elf_GetCalendarInfoW() asm("GetCalendarInfoW");
void _elf_GetCalendarInfoW() {
static void *_vptr_GetCalendarInfoW = NULL;
load_dll_kernel32();
if (!_vptr_GetCalendarInfoW) {
_vptr_GetCalendarInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCalendarInfoW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCalendarInfoW));
}

void _elf_GetComPlusPackageInstallStatus() asm("GetComPlusPackageInstallStatus");
void _elf_GetComPlusPackageInstallStatus() {
static void *_vptr_GetComPlusPackageInstallStatus = NULL;
load_dll_kernel32();
if (!_vptr_GetComPlusPackageInstallStatus) {
_vptr_GetComPlusPackageInstallStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "GetComPlusPackageInstallStatus");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetComPlusPackageInstallStatus));
}

void _elf_GetCommConfig() asm("GetCommConfig");
void _elf_GetCommConfig() {
static void *_vptr_GetCommConfig = NULL;
load_dll_kernel32();
if (!_vptr_GetCommConfig) {
_vptr_GetCommConfig = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommConfig");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCommConfig));
}

void _elf_GetCommMask() asm("GetCommMask");
void _elf_GetCommMask() {
static void *_vptr_GetCommMask = NULL;
load_dll_kernel32();
if (!_vptr_GetCommMask) {
_vptr_GetCommMask = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommMask");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCommMask));
}

void _elf_GetCommModemStatus() asm("GetCommModemStatus");
void _elf_GetCommModemStatus() {
static void *_vptr_GetCommModemStatus = NULL;
load_dll_kernel32();
if (!_vptr_GetCommModemStatus) {
_vptr_GetCommModemStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommModemStatus");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCommModemStatus));
}

void _elf_GetCommProperties() asm("GetCommProperties");
void _elf_GetCommProperties() {
static void *_vptr_GetCommProperties = NULL;
load_dll_kernel32();
if (!_vptr_GetCommProperties) {
_vptr_GetCommProperties = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommProperties");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCommProperties));
}

void _elf_GetCommState() asm("GetCommState");
void _elf_GetCommState() {
static void *_vptr_GetCommState = NULL;
load_dll_kernel32();
if (!_vptr_GetCommState) {
_vptr_GetCommState = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommState");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCommState));
}

void _elf_GetCommTimeouts() asm("GetCommTimeouts");
void _elf_GetCommTimeouts() {
static void *_vptr_GetCommTimeouts = NULL;
load_dll_kernel32();
if (!_vptr_GetCommTimeouts) {
_vptr_GetCommTimeouts = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommTimeouts");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCommTimeouts));
}

void _elf_GetCommandLineA() asm("GetCommandLineA");
void _elf_GetCommandLineA() {
static void *_vptr_GetCommandLineA = NULL;
load_dll_kernel32();
if (!_vptr_GetCommandLineA) {
_vptr_GetCommandLineA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommandLineA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCommandLineA));
}

void _elf_GetCommandLineW() asm("GetCommandLineW");
void _elf_GetCommandLineW() {
static void *_vptr_GetCommandLineW = NULL;
load_dll_kernel32();
if (!_vptr_GetCommandLineW) {
_vptr_GetCommandLineW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommandLineW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCommandLineW));
}

void _elf_GetCompressedFileSizeA() asm("GetCompressedFileSizeA");
void _elf_GetCompressedFileSizeA() {
static void *_vptr_GetCompressedFileSizeA = NULL;
load_dll_kernel32();
if (!_vptr_GetCompressedFileSizeA) {
_vptr_GetCompressedFileSizeA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCompressedFileSizeA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCompressedFileSizeA));
}

void _elf_GetCompressedFileSizeW() asm("GetCompressedFileSizeW");
void _elf_GetCompressedFileSizeW() {
static void *_vptr_GetCompressedFileSizeW = NULL;
load_dll_kernel32();
if (!_vptr_GetCompressedFileSizeW) {
_vptr_GetCompressedFileSizeW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCompressedFileSizeW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCompressedFileSizeW));
}

void _elf_GetComputerNameA() asm("GetComputerNameA");
void _elf_GetComputerNameA() {
static void *_vptr_GetComputerNameA = NULL;
load_dll_kernel32();
if (!_vptr_GetComputerNameA) {
_vptr_GetComputerNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetComputerNameA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetComputerNameA));
}

void _elf_GetComputerNameExA() asm("GetComputerNameExA");
void _elf_GetComputerNameExA() {
static void *_vptr_GetComputerNameExA = NULL;
load_dll_kernel32();
if (!_vptr_GetComputerNameExA) {
_vptr_GetComputerNameExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetComputerNameExA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetComputerNameExA));
}

void _elf_GetComputerNameExW() asm("GetComputerNameExW");
void _elf_GetComputerNameExW() {
static void *_vptr_GetComputerNameExW = NULL;
load_dll_kernel32();
if (!_vptr_GetComputerNameExW) {
_vptr_GetComputerNameExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetComputerNameExW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetComputerNameExW));
}

void _elf_GetComputerNameW() asm("GetComputerNameW");
void _elf_GetComputerNameW() {
static void *_vptr_GetComputerNameW = NULL;
load_dll_kernel32();
if (!_vptr_GetComputerNameW) {
_vptr_GetComputerNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetComputerNameW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetComputerNameW));
}

void _elf_GetConsoleAliasA() asm("GetConsoleAliasA");
void _elf_GetConsoleAliasA() {
static void *_vptr_GetConsoleAliasA = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleAliasA) {
_vptr_GetConsoleAliasA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleAliasA));
}

void _elf_GetConsoleAliasExesA() asm("GetConsoleAliasExesA");
void _elf_GetConsoleAliasExesA() {
static void *_vptr_GetConsoleAliasExesA = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleAliasExesA) {
_vptr_GetConsoleAliasExesA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasExesA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleAliasExesA));
}

void _elf_GetConsoleAliasExesLengthA() asm("GetConsoleAliasExesLengthA");
void _elf_GetConsoleAliasExesLengthA() {
static void *_vptr_GetConsoleAliasExesLengthA = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleAliasExesLengthA) {
_vptr_GetConsoleAliasExesLengthA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasExesLengthA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleAliasExesLengthA));
}

void _elf_GetConsoleAliasExesLengthW() asm("GetConsoleAliasExesLengthW");
void _elf_GetConsoleAliasExesLengthW() {
static void *_vptr_GetConsoleAliasExesLengthW = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleAliasExesLengthW) {
_vptr_GetConsoleAliasExesLengthW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasExesLengthW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleAliasExesLengthW));
}

void _elf_GetConsoleAliasExesW() asm("GetConsoleAliasExesW");
void _elf_GetConsoleAliasExesW() {
static void *_vptr_GetConsoleAliasExesW = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleAliasExesW) {
_vptr_GetConsoleAliasExesW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasExesW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleAliasExesW));
}

void _elf_GetConsoleAliasW() asm("GetConsoleAliasW");
void _elf_GetConsoleAliasW() {
static void *_vptr_GetConsoleAliasW = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleAliasW) {
_vptr_GetConsoleAliasW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleAliasW));
}

void _elf_GetConsoleAliasesA() asm("GetConsoleAliasesA");
void _elf_GetConsoleAliasesA() {
static void *_vptr_GetConsoleAliasesA = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleAliasesA) {
_vptr_GetConsoleAliasesA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasesA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleAliasesA));
}

void _elf_GetConsoleAliasesLengthA() asm("GetConsoleAliasesLengthA");
void _elf_GetConsoleAliasesLengthA() {
static void *_vptr_GetConsoleAliasesLengthA = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleAliasesLengthA) {
_vptr_GetConsoleAliasesLengthA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasesLengthA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleAliasesLengthA));
}

void _elf_GetConsoleAliasesLengthW() asm("GetConsoleAliasesLengthW");
void _elf_GetConsoleAliasesLengthW() {
static void *_vptr_GetConsoleAliasesLengthW = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleAliasesLengthW) {
_vptr_GetConsoleAliasesLengthW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasesLengthW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleAliasesLengthW));
}

void _elf_GetConsoleAliasesW() asm("GetConsoleAliasesW");
void _elf_GetConsoleAliasesW() {
static void *_vptr_GetConsoleAliasesW = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleAliasesW) {
_vptr_GetConsoleAliasesW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasesW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleAliasesW));
}

void _elf_GetConsoleCP() asm("GetConsoleCP");
void _elf_GetConsoleCP() {
static void *_vptr_GetConsoleCP = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleCP) {
_vptr_GetConsoleCP = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCP");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleCP));
}

void _elf_GetConsoleCharType() asm("GetConsoleCharType");
void _elf_GetConsoleCharType() {
static void *_vptr_GetConsoleCharType = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleCharType) {
_vptr_GetConsoleCharType = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCharType");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleCharType));
}

void _elf_GetConsoleCommandHistoryA() asm("GetConsoleCommandHistoryA");
void _elf_GetConsoleCommandHistoryA() {
static void *_vptr_GetConsoleCommandHistoryA = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleCommandHistoryA) {
_vptr_GetConsoleCommandHistoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCommandHistoryA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleCommandHistoryA));
}

void _elf_GetConsoleCommandHistoryLengthA() asm("GetConsoleCommandHistoryLengthA");
void _elf_GetConsoleCommandHistoryLengthA() {
static void *_vptr_GetConsoleCommandHistoryLengthA = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleCommandHistoryLengthA) {
_vptr_GetConsoleCommandHistoryLengthA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCommandHistoryLengthA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleCommandHistoryLengthA));
}

void _elf_GetConsoleCommandHistoryLengthW() asm("GetConsoleCommandHistoryLengthW");
void _elf_GetConsoleCommandHistoryLengthW() {
static void *_vptr_GetConsoleCommandHistoryLengthW = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleCommandHistoryLengthW) {
_vptr_GetConsoleCommandHistoryLengthW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCommandHistoryLengthW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleCommandHistoryLengthW));
}

void _elf_GetConsoleCommandHistoryW() asm("GetConsoleCommandHistoryW");
void _elf_GetConsoleCommandHistoryW() {
static void *_vptr_GetConsoleCommandHistoryW = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleCommandHistoryW) {
_vptr_GetConsoleCommandHistoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCommandHistoryW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleCommandHistoryW));
}

void _elf_GetConsoleCursorInfo() asm("GetConsoleCursorInfo");
void _elf_GetConsoleCursorInfo() {
static void *_vptr_GetConsoleCursorInfo = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleCursorInfo) {
_vptr_GetConsoleCursorInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCursorInfo");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleCursorInfo));
}

void _elf_GetConsoleCursorMode() asm("GetConsoleCursorMode");
void _elf_GetConsoleCursorMode() {
static void *_vptr_GetConsoleCursorMode = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleCursorMode) {
_vptr_GetConsoleCursorMode = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCursorMode");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleCursorMode));
}

void _elf_GetConsoleDisplayMode() asm("GetConsoleDisplayMode");
void _elf_GetConsoleDisplayMode() {
static void *_vptr_GetConsoleDisplayMode = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleDisplayMode) {
_vptr_GetConsoleDisplayMode = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleDisplayMode");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleDisplayMode));
}

void _elf_GetConsoleFontInfo() asm("GetConsoleFontInfo");
void _elf_GetConsoleFontInfo() {
static void *_vptr_GetConsoleFontInfo = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleFontInfo) {
_vptr_GetConsoleFontInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleFontInfo");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleFontInfo));
}

void _elf_GetConsoleFontSize() asm("GetConsoleFontSize");
void _elf_GetConsoleFontSize() {
static void *_vptr_GetConsoleFontSize = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleFontSize) {
_vptr_GetConsoleFontSize = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleFontSize");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleFontSize));
}

void _elf_GetConsoleHardwareState() asm("GetConsoleHardwareState");
void _elf_GetConsoleHardwareState() {
static void *_vptr_GetConsoleHardwareState = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleHardwareState) {
_vptr_GetConsoleHardwareState = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleHardwareState");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleHardwareState));
}

void _elf_GetConsoleInputExeNameA() asm("GetConsoleInputExeNameA");
void _elf_GetConsoleInputExeNameA() {
static void *_vptr_GetConsoleInputExeNameA = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleInputExeNameA) {
_vptr_GetConsoleInputExeNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleInputExeNameA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleInputExeNameA));
}

void _elf_GetConsoleInputExeNameW() asm("GetConsoleInputExeNameW");
void _elf_GetConsoleInputExeNameW() {
static void *_vptr_GetConsoleInputExeNameW = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleInputExeNameW) {
_vptr_GetConsoleInputExeNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleInputExeNameW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleInputExeNameW));
}

void _elf_GetConsoleInputWaitHandle() asm("GetConsoleInputWaitHandle");
void _elf_GetConsoleInputWaitHandle() {
static void *_vptr_GetConsoleInputWaitHandle = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleInputWaitHandle) {
_vptr_GetConsoleInputWaitHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleInputWaitHandle");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleInputWaitHandle));
}

void _elf_GetConsoleKeyboardLayoutNameA() asm("GetConsoleKeyboardLayoutNameA");
void _elf_GetConsoleKeyboardLayoutNameA() {
static void *_vptr_GetConsoleKeyboardLayoutNameA = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleKeyboardLayoutNameA) {
_vptr_GetConsoleKeyboardLayoutNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleKeyboardLayoutNameA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleKeyboardLayoutNameA));
}

void _elf_GetConsoleKeyboardLayoutNameW() asm("GetConsoleKeyboardLayoutNameW");
void _elf_GetConsoleKeyboardLayoutNameW() {
static void *_vptr_GetConsoleKeyboardLayoutNameW = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleKeyboardLayoutNameW) {
_vptr_GetConsoleKeyboardLayoutNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleKeyboardLayoutNameW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleKeyboardLayoutNameW));
}

void _elf_GetConsoleMode() asm("GetConsoleMode");
void _elf_GetConsoleMode() {
static void *_vptr_GetConsoleMode = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleMode) {
_vptr_GetConsoleMode = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleMode");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleMode));
}

void _elf_GetConsoleNlsMode() asm("GetConsoleNlsMode");
void _elf_GetConsoleNlsMode() {
static void *_vptr_GetConsoleNlsMode = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleNlsMode) {
_vptr_GetConsoleNlsMode = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleNlsMode");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleNlsMode));
}

void _elf_GetConsoleOutputCP() asm("GetConsoleOutputCP");
void _elf_GetConsoleOutputCP() {
static void *_vptr_GetConsoleOutputCP = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleOutputCP) {
_vptr_GetConsoleOutputCP = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleOutputCP");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleOutputCP));
}

void _elf_GetConsoleProcessList() asm("GetConsoleProcessList");
void _elf_GetConsoleProcessList() {
static void *_vptr_GetConsoleProcessList = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleProcessList) {
_vptr_GetConsoleProcessList = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleProcessList");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleProcessList));
}

void _elf_GetConsoleScreenBufferInfo() asm("GetConsoleScreenBufferInfo");
void _elf_GetConsoleScreenBufferInfo() {
static void *_vptr_GetConsoleScreenBufferInfo = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleScreenBufferInfo) {
_vptr_GetConsoleScreenBufferInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleScreenBufferInfo");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleScreenBufferInfo));
}

void _elf_GetConsoleSelectionInfo() asm("GetConsoleSelectionInfo");
void _elf_GetConsoleSelectionInfo() {
static void *_vptr_GetConsoleSelectionInfo = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleSelectionInfo) {
_vptr_GetConsoleSelectionInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleSelectionInfo");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleSelectionInfo));
}

void _elf_GetConsoleTitleA() asm("GetConsoleTitleA");
void _elf_GetConsoleTitleA() {
static void *_vptr_GetConsoleTitleA = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleTitleA) {
_vptr_GetConsoleTitleA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleTitleA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleTitleA));
}

void _elf_GetConsoleTitleW() asm("GetConsoleTitleW");
void _elf_GetConsoleTitleW() {
static void *_vptr_GetConsoleTitleW = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleTitleW) {
_vptr_GetConsoleTitleW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleTitleW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleTitleW));
}

void _elf_GetConsoleWindow() asm("GetConsoleWindow");
void _elf_GetConsoleWindow() {
static void *_vptr_GetConsoleWindow = NULL;
load_dll_kernel32();
if (!_vptr_GetConsoleWindow) {
_vptr_GetConsoleWindow = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleWindow");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetConsoleWindow));
}

void _elf_GetCurrencyFormatA() asm("GetCurrencyFormatA");
void _elf_GetCurrencyFormatA() {
static void *_vptr_GetCurrencyFormatA = NULL;
load_dll_kernel32();
if (!_vptr_GetCurrencyFormatA) {
_vptr_GetCurrencyFormatA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrencyFormatA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCurrencyFormatA));
}

void _elf_GetCurrencyFormatW() asm("GetCurrencyFormatW");
void _elf_GetCurrencyFormatW() {
static void *_vptr_GetCurrencyFormatW = NULL;
load_dll_kernel32();
if (!_vptr_GetCurrencyFormatW) {
_vptr_GetCurrencyFormatW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrencyFormatW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCurrencyFormatW));
}

void _elf_GetCurrentActCtx() asm("GetCurrentActCtx");
void _elf_GetCurrentActCtx() {
static void *_vptr_GetCurrentActCtx = NULL;
load_dll_kernel32();
if (!_vptr_GetCurrentActCtx) {
_vptr_GetCurrentActCtx = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentActCtx");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCurrentActCtx));
}

void _elf_GetCurrentConsoleFont() asm("GetCurrentConsoleFont");
void _elf_GetCurrentConsoleFont() {
static void *_vptr_GetCurrentConsoleFont = NULL;
load_dll_kernel32();
if (!_vptr_GetCurrentConsoleFont) {
_vptr_GetCurrentConsoleFont = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentConsoleFont");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCurrentConsoleFont));
}

void _elf_GetCurrentDirectoryA() asm("GetCurrentDirectoryA");
void _elf_GetCurrentDirectoryA() {
static void *_vptr_GetCurrentDirectoryA = NULL;
load_dll_kernel32();
if (!_vptr_GetCurrentDirectoryA) {
_vptr_GetCurrentDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentDirectoryA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCurrentDirectoryA));
}

void _elf_GetCurrentDirectoryW() asm("GetCurrentDirectoryW");
void _elf_GetCurrentDirectoryW() {
static void *_vptr_GetCurrentDirectoryW = NULL;
load_dll_kernel32();
if (!_vptr_GetCurrentDirectoryW) {
_vptr_GetCurrentDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentDirectoryW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCurrentDirectoryW));
}

void _elf_GetCurrentProcess() asm("GetCurrentProcess");
void _elf_GetCurrentProcess() {
static void *_vptr_GetCurrentProcess = NULL;
load_dll_kernel32();
if (!_vptr_GetCurrentProcess) {
_vptr_GetCurrentProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentProcess");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCurrentProcess));
}

void _elf_GetCurrentProcessId() asm("GetCurrentProcessId");
void _elf_GetCurrentProcessId() {
static void *_vptr_GetCurrentProcessId = NULL;
load_dll_kernel32();
if (!_vptr_GetCurrentProcessId) {
_vptr_GetCurrentProcessId = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentProcessId");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCurrentProcessId));
}

void _elf_GetCurrentThread() asm("GetCurrentThread");
void _elf_GetCurrentThread() {
static void *_vptr_GetCurrentThread = NULL;
load_dll_kernel32();
if (!_vptr_GetCurrentThread) {
_vptr_GetCurrentThread = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentThread");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCurrentThread));
}

void _elf_GetCurrentThreadId() asm("GetCurrentThreadId");
void _elf_GetCurrentThreadId() {
static void *_vptr_GetCurrentThreadId = NULL;
load_dll_kernel32();
if (!_vptr_GetCurrentThreadId) {
_vptr_GetCurrentThreadId = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentThreadId");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetCurrentThreadId));
}

void _elf_GetDateFormatA() asm("GetDateFormatA");
void _elf_GetDateFormatA() {
static void *_vptr_GetDateFormatA = NULL;
load_dll_kernel32();
if (!_vptr_GetDateFormatA) {
_vptr_GetDateFormatA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDateFormatA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetDateFormatA));
}

void _elf_GetDateFormatW() asm("GetDateFormatW");
void _elf_GetDateFormatW() {
static void *_vptr_GetDateFormatW = NULL;
load_dll_kernel32();
if (!_vptr_GetDateFormatW) {
_vptr_GetDateFormatW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDateFormatW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetDateFormatW));
}

void _elf_GetDefaultCommConfigA() asm("GetDefaultCommConfigA");
void _elf_GetDefaultCommConfigA() {
static void *_vptr_GetDefaultCommConfigA = NULL;
load_dll_kernel32();
if (!_vptr_GetDefaultCommConfigA) {
_vptr_GetDefaultCommConfigA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDefaultCommConfigA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetDefaultCommConfigA));
}

void _elf_GetDefaultCommConfigW() asm("GetDefaultCommConfigW");
void _elf_GetDefaultCommConfigW() {
static void *_vptr_GetDefaultCommConfigW = NULL;
load_dll_kernel32();
if (!_vptr_GetDefaultCommConfigW) {
_vptr_GetDefaultCommConfigW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDefaultCommConfigW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetDefaultCommConfigW));
}

void _elf_GetDefaultSortkeySize() asm("GetDefaultSortkeySize");
void _elf_GetDefaultSortkeySize() {
static void *_vptr_GetDefaultSortkeySize = NULL;
load_dll_kernel32();
if (!_vptr_GetDefaultSortkeySize) {
_vptr_GetDefaultSortkeySize = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDefaultSortkeySize");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetDefaultSortkeySize));
}

void _elf_GetDevicePowerState() asm("GetDevicePowerState");
void _elf_GetDevicePowerState() {
static void *_vptr_GetDevicePowerState = NULL;
load_dll_kernel32();
if (!_vptr_GetDevicePowerState) {
_vptr_GetDevicePowerState = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDevicePowerState");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetDevicePowerState));
}

void _elf_GetDiskFreeSpaceA() asm("GetDiskFreeSpaceA");
void _elf_GetDiskFreeSpaceA() {
static void *_vptr_GetDiskFreeSpaceA = NULL;
load_dll_kernel32();
if (!_vptr_GetDiskFreeSpaceA) {
_vptr_GetDiskFreeSpaceA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDiskFreeSpaceA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetDiskFreeSpaceA));
}

void _elf_GetDiskFreeSpaceExA() asm("GetDiskFreeSpaceExA");
void _elf_GetDiskFreeSpaceExA() {
static void *_vptr_GetDiskFreeSpaceExA = NULL;
load_dll_kernel32();
if (!_vptr_GetDiskFreeSpaceExA) {
_vptr_GetDiskFreeSpaceExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDiskFreeSpaceExA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetDiskFreeSpaceExA));
}

void _elf_GetDiskFreeSpaceExW() asm("GetDiskFreeSpaceExW");
void _elf_GetDiskFreeSpaceExW() {
static void *_vptr_GetDiskFreeSpaceExW = NULL;
load_dll_kernel32();
if (!_vptr_GetDiskFreeSpaceExW) {
_vptr_GetDiskFreeSpaceExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDiskFreeSpaceExW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetDiskFreeSpaceExW));
}

void _elf_GetDiskFreeSpaceW() asm("GetDiskFreeSpaceW");
void _elf_GetDiskFreeSpaceW() {
static void *_vptr_GetDiskFreeSpaceW = NULL;
load_dll_kernel32();
if (!_vptr_GetDiskFreeSpaceW) {
_vptr_GetDiskFreeSpaceW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDiskFreeSpaceW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetDiskFreeSpaceW));
}

void _elf_GetDllDirectoryA() asm("GetDllDirectoryA");
void _elf_GetDllDirectoryA() {
static void *_vptr_GetDllDirectoryA = NULL;
load_dll_kernel32();
if (!_vptr_GetDllDirectoryA) {
_vptr_GetDllDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDllDirectoryA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetDllDirectoryA));
}

void _elf_GetDllDirectoryW() asm("GetDllDirectoryW");
void _elf_GetDllDirectoryW() {
static void *_vptr_GetDllDirectoryW = NULL;
load_dll_kernel32();
if (!_vptr_GetDllDirectoryW) {
_vptr_GetDllDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDllDirectoryW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetDllDirectoryW));
}

void _elf_GetDriveTypeA() asm("GetDriveTypeA");
void _elf_GetDriveTypeA() {
static void *_vptr_GetDriveTypeA = NULL;
load_dll_kernel32();
if (!_vptr_GetDriveTypeA) {
_vptr_GetDriveTypeA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDriveTypeA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetDriveTypeA));
}

void _elf_GetDriveTypeW() asm("GetDriveTypeW");
void _elf_GetDriveTypeW() {
static void *_vptr_GetDriveTypeW = NULL;
load_dll_kernel32();
if (!_vptr_GetDriveTypeW) {
_vptr_GetDriveTypeW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDriveTypeW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetDriveTypeW));
}

void _elf_GetEnvironmentStrings() asm("GetEnvironmentStrings");
void _elf_GetEnvironmentStrings() {
static void *_vptr_GetEnvironmentStrings = NULL;
load_dll_kernel32();
if (!_vptr_GetEnvironmentStrings) {
_vptr_GetEnvironmentStrings = (void *) _elf_GetProcAddress(_dll_kernel32, "GetEnvironmentStrings");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetEnvironmentStrings));
}

void _elf_GetEnvironmentStringsA() asm("GetEnvironmentStringsA");
void _elf_GetEnvironmentStringsA() {
static void *_vptr_GetEnvironmentStringsA = NULL;
load_dll_kernel32();
if (!_vptr_GetEnvironmentStringsA) {
_vptr_GetEnvironmentStringsA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetEnvironmentStringsA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetEnvironmentStringsA));
}

void _elf_GetEnvironmentStringsW() asm("GetEnvironmentStringsW");
void _elf_GetEnvironmentStringsW() {
static void *_vptr_GetEnvironmentStringsW = NULL;
load_dll_kernel32();
if (!_vptr_GetEnvironmentStringsW) {
_vptr_GetEnvironmentStringsW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetEnvironmentStringsW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetEnvironmentStringsW));
}

void _elf_GetEnvironmentVariableA() asm("GetEnvironmentVariableA");
void _elf_GetEnvironmentVariableA() {
static void *_vptr_GetEnvironmentVariableA = NULL;
load_dll_kernel32();
if (!_vptr_GetEnvironmentVariableA) {
_vptr_GetEnvironmentVariableA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetEnvironmentVariableA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetEnvironmentVariableA));
}

void _elf_GetEnvironmentVariableW() asm("GetEnvironmentVariableW");
void _elf_GetEnvironmentVariableW() {
static void *_vptr_GetEnvironmentVariableW = NULL;
load_dll_kernel32();
if (!_vptr_GetEnvironmentVariableW) {
_vptr_GetEnvironmentVariableW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetEnvironmentVariableW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetEnvironmentVariableW));
}

void _elf_GetExitCodeProcess() asm("GetExitCodeProcess");
void _elf_GetExitCodeProcess() {
static void *_vptr_GetExitCodeProcess = NULL;
load_dll_kernel32();
if (!_vptr_GetExitCodeProcess) {
_vptr_GetExitCodeProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "GetExitCodeProcess");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetExitCodeProcess));
}

void _elf_GetExitCodeThread() asm("GetExitCodeThread");
void _elf_GetExitCodeThread() {
static void *_vptr_GetExitCodeThread = NULL;
load_dll_kernel32();
if (!_vptr_GetExitCodeThread) {
_vptr_GetExitCodeThread = (void *) _elf_GetProcAddress(_dll_kernel32, "GetExitCodeThread");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetExitCodeThread));
}

void _elf_GetExpandedNameA() asm("GetExpandedNameA");
void _elf_GetExpandedNameA() {
static void *_vptr_GetExpandedNameA = NULL;
load_dll_kernel32();
if (!_vptr_GetExpandedNameA) {
_vptr_GetExpandedNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetExpandedNameA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetExpandedNameA));
}

void _elf_GetExpandedNameW() asm("GetExpandedNameW");
void _elf_GetExpandedNameW() {
static void *_vptr_GetExpandedNameW = NULL;
load_dll_kernel32();
if (!_vptr_GetExpandedNameW) {
_vptr_GetExpandedNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetExpandedNameW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetExpandedNameW));
}

void _elf_GetFileAttributesA() asm("GetFileAttributesA");
void _elf_GetFileAttributesA() {
static void *_vptr_GetFileAttributesA = NULL;
load_dll_kernel32();
if (!_vptr_GetFileAttributesA) {
_vptr_GetFileAttributesA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileAttributesA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetFileAttributesA));
}

void _elf_GetFileAttributesExA() asm("GetFileAttributesExA");
void _elf_GetFileAttributesExA() {
static void *_vptr_GetFileAttributesExA = NULL;
load_dll_kernel32();
if (!_vptr_GetFileAttributesExA) {
_vptr_GetFileAttributesExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileAttributesExA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetFileAttributesExA));
}

void _elf_GetFileAttributesExW() asm("GetFileAttributesExW");
void _elf_GetFileAttributesExW() {
static void *_vptr_GetFileAttributesExW = NULL;
load_dll_kernel32();
if (!_vptr_GetFileAttributesExW) {
_vptr_GetFileAttributesExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileAttributesExW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetFileAttributesExW));
}

void _elf_GetFileAttributesW() asm("GetFileAttributesW");
void _elf_GetFileAttributesW() {
static void *_vptr_GetFileAttributesW = NULL;
load_dll_kernel32();
if (!_vptr_GetFileAttributesW) {
_vptr_GetFileAttributesW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileAttributesW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetFileAttributesW));
}

void _elf_GetFileInformationByHandle() asm("GetFileInformationByHandle");
void _elf_GetFileInformationByHandle() {
static void *_vptr_GetFileInformationByHandle = NULL;
load_dll_kernel32();
if (!_vptr_GetFileInformationByHandle) {
_vptr_GetFileInformationByHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileInformationByHandle");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetFileInformationByHandle));
}

void _elf_GetFileSize() asm("GetFileSize");
void _elf_GetFileSize() {
static void *_vptr_GetFileSize = NULL;
load_dll_kernel32();
if (!_vptr_GetFileSize) {
_vptr_GetFileSize = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileSize");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetFileSize));
}

void _elf_GetFileSizeEx() asm("GetFileSizeEx");
void _elf_GetFileSizeEx() {
static void *_vptr_GetFileSizeEx = NULL;
load_dll_kernel32();
if (!_vptr_GetFileSizeEx) {
_vptr_GetFileSizeEx = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileSizeEx");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetFileSizeEx));
}

void _elf_GetFileTime() asm("GetFileTime");
void _elf_GetFileTime() {
static void *_vptr_GetFileTime = NULL;
load_dll_kernel32();
if (!_vptr_GetFileTime) {
_vptr_GetFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileTime");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetFileTime));
}

void _elf_GetFileType() asm("GetFileType");
void _elf_GetFileType() {
static void *_vptr_GetFileType = NULL;
load_dll_kernel32();
if (!_vptr_GetFileType) {
_vptr_GetFileType = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileType");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetFileType));
}

void _elf_GetFirmwareEnvironmentVariableA() asm("GetFirmwareEnvironmentVariableA");
void _elf_GetFirmwareEnvironmentVariableA() {
static void *_vptr_GetFirmwareEnvironmentVariableA = NULL;
load_dll_kernel32();
if (!_vptr_GetFirmwareEnvironmentVariableA) {
_vptr_GetFirmwareEnvironmentVariableA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFirmwareEnvironmentVariableA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetFirmwareEnvironmentVariableA));
}

void _elf_GetFirmwareEnvironmentVariableW() asm("GetFirmwareEnvironmentVariableW");
void _elf_GetFirmwareEnvironmentVariableW() {
static void *_vptr_GetFirmwareEnvironmentVariableW = NULL;
load_dll_kernel32();
if (!_vptr_GetFirmwareEnvironmentVariableW) {
_vptr_GetFirmwareEnvironmentVariableW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFirmwareEnvironmentVariableW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetFirmwareEnvironmentVariableW));
}

void _elf_GetFullPathNameA() asm("GetFullPathNameA");
void _elf_GetFullPathNameA() {
static void *_vptr_GetFullPathNameA = NULL;
load_dll_kernel32();
if (!_vptr_GetFullPathNameA) {
_vptr_GetFullPathNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFullPathNameA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetFullPathNameA));
}

void _elf_GetFullPathNameW() asm("GetFullPathNameW");
void _elf_GetFullPathNameW() {
static void *_vptr_GetFullPathNameW = NULL;
load_dll_kernel32();
if (!_vptr_GetFullPathNameW) {
_vptr_GetFullPathNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFullPathNameW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetFullPathNameW));
}

void _elf_GetGeoInfoA() asm("GetGeoInfoA");
void _elf_GetGeoInfoA() {
static void *_vptr_GetGeoInfoA = NULL;
load_dll_kernel32();
if (!_vptr_GetGeoInfoA) {
_vptr_GetGeoInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetGeoInfoA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetGeoInfoA));
}

void _elf_GetGeoInfoW() asm("GetGeoInfoW");
void _elf_GetGeoInfoW() {
static void *_vptr_GetGeoInfoW = NULL;
load_dll_kernel32();
if (!_vptr_GetGeoInfoW) {
_vptr_GetGeoInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetGeoInfoW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetGeoInfoW));
}

void _elf_GetHandleContext() asm("GetHandleContext");
void _elf_GetHandleContext() {
static void *_vptr_GetHandleContext = NULL;
load_dll_kernel32();
if (!_vptr_GetHandleContext) {
_vptr_GetHandleContext = (void *) _elf_GetProcAddress(_dll_kernel32, "GetHandleContext");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetHandleContext));
}

void _elf_GetHandleInformation() asm("GetHandleInformation");
void _elf_GetHandleInformation() {
static void *_vptr_GetHandleInformation = NULL;
load_dll_kernel32();
if (!_vptr_GetHandleInformation) {
_vptr_GetHandleInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "GetHandleInformation");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetHandleInformation));
}

void _elf_GetLargestConsoleWindowSize() asm("GetLargestConsoleWindowSize");
void _elf_GetLargestConsoleWindowSize() {
static void *_vptr_GetLargestConsoleWindowSize = NULL;
load_dll_kernel32();
if (!_vptr_GetLargestConsoleWindowSize) {
_vptr_GetLargestConsoleWindowSize = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLargestConsoleWindowSize");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetLargestConsoleWindowSize));
}

void _elf_GetLastError() asm("GetLastError");
void _elf_GetLastError() {
static void *_vptr_GetLastError = NULL;
load_dll_kernel32();
if (!_vptr_GetLastError) {
_vptr_GetLastError = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLastError");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetLastError));
}

void _elf_GetLinguistLangSize() asm("GetLinguistLangSize");
void _elf_GetLinguistLangSize() {
static void *_vptr_GetLinguistLangSize = NULL;
load_dll_kernel32();
if (!_vptr_GetLinguistLangSize) {
_vptr_GetLinguistLangSize = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLinguistLangSize");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetLinguistLangSize));
}

void _elf_GetLocalTime() asm("GetLocalTime");
void _elf_GetLocalTime() {
static void *_vptr_GetLocalTime = NULL;
load_dll_kernel32();
if (!_vptr_GetLocalTime) {
_vptr_GetLocalTime = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLocalTime");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetLocalTime));
}

void _elf_GetLocaleInfoA() asm("GetLocaleInfoA");
void _elf_GetLocaleInfoA() {
static void *_vptr_GetLocaleInfoA = NULL;
load_dll_kernel32();
if (!_vptr_GetLocaleInfoA) {
_vptr_GetLocaleInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLocaleInfoA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetLocaleInfoA));
}

void _elf_GetLocaleInfoW() asm("GetLocaleInfoW");
void _elf_GetLocaleInfoW() {
static void *_vptr_GetLocaleInfoW = NULL;
load_dll_kernel32();
if (!_vptr_GetLocaleInfoW) {
_vptr_GetLocaleInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLocaleInfoW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetLocaleInfoW));
}

void _elf_GetLogicalDriveStringsA() asm("GetLogicalDriveStringsA");
void _elf_GetLogicalDriveStringsA() {
static void *_vptr_GetLogicalDriveStringsA = NULL;
load_dll_kernel32();
if (!_vptr_GetLogicalDriveStringsA) {
_vptr_GetLogicalDriveStringsA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLogicalDriveStringsA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetLogicalDriveStringsA));
}

void _elf_GetLogicalDriveStringsW() asm("GetLogicalDriveStringsW");
void _elf_GetLogicalDriveStringsW() {
static void *_vptr_GetLogicalDriveStringsW = NULL;
load_dll_kernel32();
if (!_vptr_GetLogicalDriveStringsW) {
_vptr_GetLogicalDriveStringsW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLogicalDriveStringsW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetLogicalDriveStringsW));
}

void _elf_GetLogicalDrives() asm("GetLogicalDrives");
void _elf_GetLogicalDrives() {
static void *_vptr_GetLogicalDrives = NULL;
load_dll_kernel32();
if (!_vptr_GetLogicalDrives) {
_vptr_GetLogicalDrives = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLogicalDrives");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetLogicalDrives));
}

void _elf_GetLongPathNameA() asm("GetLongPathNameA");
void _elf_GetLongPathNameA() {
static void *_vptr_GetLongPathNameA = NULL;
load_dll_kernel32();
if (!_vptr_GetLongPathNameA) {
_vptr_GetLongPathNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLongPathNameA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetLongPathNameA));
}

void _elf_GetLongPathNameW() asm("GetLongPathNameW");
void _elf_GetLongPathNameW() {
static void *_vptr_GetLongPathNameW = NULL;
load_dll_kernel32();
if (!_vptr_GetLongPathNameW) {
_vptr_GetLongPathNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLongPathNameW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetLongPathNameW));
}

void _elf_GetMailslotInfo() asm("GetMailslotInfo");
void _elf_GetMailslotInfo() {
static void *_vptr_GetMailslotInfo = NULL;
load_dll_kernel32();
if (!_vptr_GetMailslotInfo) {
_vptr_GetMailslotInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetMailslotInfo");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetMailslotInfo));
}

void _elf_GetModuleFileNameA() asm("GetModuleFileNameA");
void _elf_GetModuleFileNameA() {
static void *_vptr_GetModuleFileNameA = NULL;
load_dll_kernel32();
if (!_vptr_GetModuleFileNameA) {
_vptr_GetModuleFileNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetModuleFileNameA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetModuleFileNameA));
}

void _elf_GetModuleFileNameW() asm("GetModuleFileNameW");
void _elf_GetModuleFileNameW() {
static void *_vptr_GetModuleFileNameW = NULL;
load_dll_kernel32();
if (!_vptr_GetModuleFileNameW) {
_vptr_GetModuleFileNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetModuleFileNameW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetModuleFileNameW));
}

void _elf_GetModuleHandleExA() asm("GetModuleHandleExA");
void _elf_GetModuleHandleExA() {
static void *_vptr_GetModuleHandleExA = NULL;
load_dll_kernel32();
if (!_vptr_GetModuleHandleExA) {
_vptr_GetModuleHandleExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetModuleHandleExA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetModuleHandleExA));
}

void _elf_GetModuleHandleExW() asm("GetModuleHandleExW");
void _elf_GetModuleHandleExW() {
static void *_vptr_GetModuleHandleExW = NULL;
load_dll_kernel32();
if (!_vptr_GetModuleHandleExW) {
_vptr_GetModuleHandleExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetModuleHandleExW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetModuleHandleExW));
}

void _elf_GetModuleHandleW() asm("GetModuleHandleW");
void _elf_GetModuleHandleW() {
static void *_vptr_GetModuleHandleW = NULL;
load_dll_kernel32();
if (!_vptr_GetModuleHandleW) {
_vptr_GetModuleHandleW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetModuleHandleW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetModuleHandleW));
}

void _elf_GetNamedPipeHandleStateA() asm("GetNamedPipeHandleStateA");
void _elf_GetNamedPipeHandleStateA() {
static void *_vptr_GetNamedPipeHandleStateA = NULL;
load_dll_kernel32();
if (!_vptr_GetNamedPipeHandleStateA) {
_vptr_GetNamedPipeHandleStateA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNamedPipeHandleStateA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetNamedPipeHandleStateA));
}

void _elf_GetNamedPipeHandleStateW() asm("GetNamedPipeHandleStateW");
void _elf_GetNamedPipeHandleStateW() {
static void *_vptr_GetNamedPipeHandleStateW = NULL;
load_dll_kernel32();
if (!_vptr_GetNamedPipeHandleStateW) {
_vptr_GetNamedPipeHandleStateW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNamedPipeHandleStateW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetNamedPipeHandleStateW));
}

void _elf_GetNamedPipeInfo() asm("GetNamedPipeInfo");
void _elf_GetNamedPipeInfo() {
static void *_vptr_GetNamedPipeInfo = NULL;
load_dll_kernel32();
if (!_vptr_GetNamedPipeInfo) {
_vptr_GetNamedPipeInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNamedPipeInfo");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetNamedPipeInfo));
}

void _elf_GetNativeSystemInfo() asm("GetNativeSystemInfo");
void _elf_GetNativeSystemInfo() {
static void *_vptr_GetNativeSystemInfo = NULL;
load_dll_kernel32();
if (!_vptr_GetNativeSystemInfo) {
_vptr_GetNativeSystemInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNativeSystemInfo");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetNativeSystemInfo));
}

void _elf_GetNextVDMCommand() asm("GetNextVDMCommand");
void _elf_GetNextVDMCommand() {
static void *_vptr_GetNextVDMCommand = NULL;
load_dll_kernel32();
if (!_vptr_GetNextVDMCommand) {
_vptr_GetNextVDMCommand = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNextVDMCommand");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetNextVDMCommand));
}

void _elf_GetNlsSectionName() asm("GetNlsSectionName");
void _elf_GetNlsSectionName() {
static void *_vptr_GetNlsSectionName = NULL;
load_dll_kernel32();
if (!_vptr_GetNlsSectionName) {
_vptr_GetNlsSectionName = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNlsSectionName");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetNlsSectionName));
}

void _elf_GetNumaAvailableMemory() asm("GetNumaAvailableMemory");
void _elf_GetNumaAvailableMemory() {
static void *_vptr_GetNumaAvailableMemory = NULL;
load_dll_kernel32();
if (!_vptr_GetNumaAvailableMemory) {
_vptr_GetNumaAvailableMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumaAvailableMemory");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetNumaAvailableMemory));
}

void _elf_GetNumaAvailableMemoryNode() asm("GetNumaAvailableMemoryNode");
void _elf_GetNumaAvailableMemoryNode() {
static void *_vptr_GetNumaAvailableMemoryNode = NULL;
load_dll_kernel32();
if (!_vptr_GetNumaAvailableMemoryNode) {
_vptr_GetNumaAvailableMemoryNode = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumaAvailableMemoryNode");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetNumaAvailableMemoryNode));
}

void _elf_GetNumaHighestNodeNumber() asm("GetNumaHighestNodeNumber");
void _elf_GetNumaHighestNodeNumber() {
static void *_vptr_GetNumaHighestNodeNumber = NULL;
load_dll_kernel32();
if (!_vptr_GetNumaHighestNodeNumber) {
_vptr_GetNumaHighestNodeNumber = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumaHighestNodeNumber");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetNumaHighestNodeNumber));
}

void _elf_GetNumaNodeProcessorMask() asm("GetNumaNodeProcessorMask");
void _elf_GetNumaNodeProcessorMask() {
static void *_vptr_GetNumaNodeProcessorMask = NULL;
load_dll_kernel32();
if (!_vptr_GetNumaNodeProcessorMask) {
_vptr_GetNumaNodeProcessorMask = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumaNodeProcessorMask");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetNumaNodeProcessorMask));
}

void _elf_GetNumaProcessorMap() asm("GetNumaProcessorMap");
void _elf_GetNumaProcessorMap() {
static void *_vptr_GetNumaProcessorMap = NULL;
load_dll_kernel32();
if (!_vptr_GetNumaProcessorMap) {
_vptr_GetNumaProcessorMap = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumaProcessorMap");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetNumaProcessorMap));
}

void _elf_GetNumaProcessorNode() asm("GetNumaProcessorNode");
void _elf_GetNumaProcessorNode() {
static void *_vptr_GetNumaProcessorNode = NULL;
load_dll_kernel32();
if (!_vptr_GetNumaProcessorNode) {
_vptr_GetNumaProcessorNode = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumaProcessorNode");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetNumaProcessorNode));
}

void _elf_GetNumberFormatA() asm("GetNumberFormatA");
void _elf_GetNumberFormatA() {
static void *_vptr_GetNumberFormatA = NULL;
load_dll_kernel32();
if (!_vptr_GetNumberFormatA) {
_vptr_GetNumberFormatA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumberFormatA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetNumberFormatA));
}

void _elf_GetNumberFormatW() asm("GetNumberFormatW");
void _elf_GetNumberFormatW() {
static void *_vptr_GetNumberFormatW = NULL;
load_dll_kernel32();
if (!_vptr_GetNumberFormatW) {
_vptr_GetNumberFormatW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumberFormatW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetNumberFormatW));
}

void _elf_GetNumberOfConsoleFonts() asm("GetNumberOfConsoleFonts");
void _elf_GetNumberOfConsoleFonts() {
static void *_vptr_GetNumberOfConsoleFonts = NULL;
load_dll_kernel32();
if (!_vptr_GetNumberOfConsoleFonts) {
_vptr_GetNumberOfConsoleFonts = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumberOfConsoleFonts");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetNumberOfConsoleFonts));
}

void _elf_GetNumberOfConsoleInputEvents() asm("GetNumberOfConsoleInputEvents");
void _elf_GetNumberOfConsoleInputEvents() {
static void *_vptr_GetNumberOfConsoleInputEvents = NULL;
load_dll_kernel32();
if (!_vptr_GetNumberOfConsoleInputEvents) {
_vptr_GetNumberOfConsoleInputEvents = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumberOfConsoleInputEvents");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetNumberOfConsoleInputEvents));
}

void _elf_GetNumberOfConsoleMouseButtons() asm("GetNumberOfConsoleMouseButtons");
void _elf_GetNumberOfConsoleMouseButtons() {
static void *_vptr_GetNumberOfConsoleMouseButtons = NULL;
load_dll_kernel32();
if (!_vptr_GetNumberOfConsoleMouseButtons) {
_vptr_GetNumberOfConsoleMouseButtons = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumberOfConsoleMouseButtons");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetNumberOfConsoleMouseButtons));
}

void _elf_GetOEMCP() asm("GetOEMCP");
void _elf_GetOEMCP() {
static void *_vptr_GetOEMCP = NULL;
load_dll_kernel32();
if (!_vptr_GetOEMCP) {
_vptr_GetOEMCP = (void *) _elf_GetProcAddress(_dll_kernel32, "GetOEMCP");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetOEMCP));
}

void _elf_GetOverlappedResult() asm("GetOverlappedResult");
void _elf_GetOverlappedResult() {
static void *_vptr_GetOverlappedResult = NULL;
load_dll_kernel32();
if (!_vptr_GetOverlappedResult) {
_vptr_GetOverlappedResult = (void *) _elf_GetProcAddress(_dll_kernel32, "GetOverlappedResult");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetOverlappedResult));
}

void _elf_GetPriorityClass() asm("GetPriorityClass");
void _elf_GetPriorityClass() {
static void *_vptr_GetPriorityClass = NULL;
load_dll_kernel32();
if (!_vptr_GetPriorityClass) {
_vptr_GetPriorityClass = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPriorityClass");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetPriorityClass));
}

void _elf_GetPrivateProfileIntA() asm("GetPrivateProfileIntA");
void _elf_GetPrivateProfileIntA() {
static void *_vptr_GetPrivateProfileIntA = NULL;
load_dll_kernel32();
if (!_vptr_GetPrivateProfileIntA) {
_vptr_GetPrivateProfileIntA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileIntA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetPrivateProfileIntA));
}

void _elf_GetPrivateProfileIntW() asm("GetPrivateProfileIntW");
void _elf_GetPrivateProfileIntW() {
static void *_vptr_GetPrivateProfileIntW = NULL;
load_dll_kernel32();
if (!_vptr_GetPrivateProfileIntW) {
_vptr_GetPrivateProfileIntW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileIntW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetPrivateProfileIntW));
}

void _elf_GetPrivateProfileSectionA() asm("GetPrivateProfileSectionA");
void _elf_GetPrivateProfileSectionA() {
static void *_vptr_GetPrivateProfileSectionA = NULL;
load_dll_kernel32();
if (!_vptr_GetPrivateProfileSectionA) {
_vptr_GetPrivateProfileSectionA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileSectionA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetPrivateProfileSectionA));
}

void _elf_GetPrivateProfileSectionNamesA() asm("GetPrivateProfileSectionNamesA");
void _elf_GetPrivateProfileSectionNamesA() {
static void *_vptr_GetPrivateProfileSectionNamesA = NULL;
load_dll_kernel32();
if (!_vptr_GetPrivateProfileSectionNamesA) {
_vptr_GetPrivateProfileSectionNamesA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileSectionNamesA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetPrivateProfileSectionNamesA));
}

void _elf_GetPrivateProfileSectionNamesW() asm("GetPrivateProfileSectionNamesW");
void _elf_GetPrivateProfileSectionNamesW() {
static void *_vptr_GetPrivateProfileSectionNamesW = NULL;
load_dll_kernel32();
if (!_vptr_GetPrivateProfileSectionNamesW) {
_vptr_GetPrivateProfileSectionNamesW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileSectionNamesW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetPrivateProfileSectionNamesW));
}

void _elf_GetPrivateProfileSectionW() asm("GetPrivateProfileSectionW");
void _elf_GetPrivateProfileSectionW() {
static void *_vptr_GetPrivateProfileSectionW = NULL;
load_dll_kernel32();
if (!_vptr_GetPrivateProfileSectionW) {
_vptr_GetPrivateProfileSectionW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileSectionW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetPrivateProfileSectionW));
}

void _elf_GetPrivateProfileStringA() asm("GetPrivateProfileStringA");
void _elf_GetPrivateProfileStringA() {
static void *_vptr_GetPrivateProfileStringA = NULL;
load_dll_kernel32();
if (!_vptr_GetPrivateProfileStringA) {
_vptr_GetPrivateProfileStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileStringA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetPrivateProfileStringA));
}

void _elf_GetPrivateProfileStringW() asm("GetPrivateProfileStringW");
void _elf_GetPrivateProfileStringW() {
static void *_vptr_GetPrivateProfileStringW = NULL;
load_dll_kernel32();
if (!_vptr_GetPrivateProfileStringW) {
_vptr_GetPrivateProfileStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileStringW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetPrivateProfileStringW));
}

void _elf_GetPrivateProfileStructA() asm("GetPrivateProfileStructA");
void _elf_GetPrivateProfileStructA() {
static void *_vptr_GetPrivateProfileStructA = NULL;
load_dll_kernel32();
if (!_vptr_GetPrivateProfileStructA) {
_vptr_GetPrivateProfileStructA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileStructA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetPrivateProfileStructA));
}

void _elf_GetPrivateProfileStructW() asm("GetPrivateProfileStructW");
void _elf_GetPrivateProfileStructW() {
static void *_vptr_GetPrivateProfileStructW = NULL;
load_dll_kernel32();
if (!_vptr_GetPrivateProfileStructW) {
_vptr_GetPrivateProfileStructW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileStructW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetPrivateProfileStructW));
}

void _elf_GetProcessAffinityMask() asm("GetProcessAffinityMask");
void _elf_GetProcessAffinityMask() {
static void *_vptr_GetProcessAffinityMask = NULL;
load_dll_kernel32();
if (!_vptr_GetProcessAffinityMask) {
_vptr_GetProcessAffinityMask = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessAffinityMask");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetProcessAffinityMask));
}

void _elf_GetProcessHandleCount() asm("GetProcessHandleCount");
void _elf_GetProcessHandleCount() {
static void *_vptr_GetProcessHandleCount = NULL;
load_dll_kernel32();
if (!_vptr_GetProcessHandleCount) {
_vptr_GetProcessHandleCount = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessHandleCount");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetProcessHandleCount));
}

void _elf_GetProcessHeap() asm("GetProcessHeap");
void _elf_GetProcessHeap() {
static void *_vptr_GetProcessHeap = NULL;
load_dll_kernel32();
if (!_vptr_GetProcessHeap) {
_vptr_GetProcessHeap = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessHeap");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetProcessHeap));
}

void _elf_GetProcessHeaps() asm("GetProcessHeaps");
void _elf_GetProcessHeaps() {
static void *_vptr_GetProcessHeaps = NULL;
load_dll_kernel32();
if (!_vptr_GetProcessHeaps) {
_vptr_GetProcessHeaps = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessHeaps");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetProcessHeaps));
}

void _elf_GetProcessId() asm("GetProcessId");
void _elf_GetProcessId() {
static void *_vptr_GetProcessId = NULL;
load_dll_kernel32();
if (!_vptr_GetProcessId) {
_vptr_GetProcessId = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessId");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetProcessId));
}

void _elf_GetProcessIoCounters() asm("GetProcessIoCounters");
void _elf_GetProcessIoCounters() {
static void *_vptr_GetProcessIoCounters = NULL;
load_dll_kernel32();
if (!_vptr_GetProcessIoCounters) {
_vptr_GetProcessIoCounters = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessIoCounters");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetProcessIoCounters));
}

void _elf_GetProcessPriorityBoost() asm("GetProcessPriorityBoost");
void _elf_GetProcessPriorityBoost() {
static void *_vptr_GetProcessPriorityBoost = NULL;
load_dll_kernel32();
if (!_vptr_GetProcessPriorityBoost) {
_vptr_GetProcessPriorityBoost = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessPriorityBoost");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetProcessPriorityBoost));
}

void _elf_GetProcessShutdownParameters() asm("GetProcessShutdownParameters");
void _elf_GetProcessShutdownParameters() {
static void *_vptr_GetProcessShutdownParameters = NULL;
load_dll_kernel32();
if (!_vptr_GetProcessShutdownParameters) {
_vptr_GetProcessShutdownParameters = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessShutdownParameters");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetProcessShutdownParameters));
}

void _elf_GetProcessTimes() asm("GetProcessTimes");
void _elf_GetProcessTimes() {
static void *_vptr_GetProcessTimes = NULL;
load_dll_kernel32();
if (!_vptr_GetProcessTimes) {
_vptr_GetProcessTimes = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessTimes");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetProcessTimes));
}

void _elf_GetProcessVersion() asm("GetProcessVersion");
void _elf_GetProcessVersion() {
static void *_vptr_GetProcessVersion = NULL;
load_dll_kernel32();
if (!_vptr_GetProcessVersion) {
_vptr_GetProcessVersion = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessVersion");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetProcessVersion));
}

void _elf_GetProcessWorkingSetSize() asm("GetProcessWorkingSetSize");
void _elf_GetProcessWorkingSetSize() {
static void *_vptr_GetProcessWorkingSetSize = NULL;
load_dll_kernel32();
if (!_vptr_GetProcessWorkingSetSize) {
_vptr_GetProcessWorkingSetSize = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessWorkingSetSize");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetProcessWorkingSetSize));
}

void _elf_GetProfileIntA() asm("GetProfileIntA");
void _elf_GetProfileIntA() {
static void *_vptr_GetProfileIntA = NULL;
load_dll_kernel32();
if (!_vptr_GetProfileIntA) {
_vptr_GetProfileIntA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProfileIntA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetProfileIntA));
}

void _elf_GetProfileIntW() asm("GetProfileIntW");
void _elf_GetProfileIntW() {
static void *_vptr_GetProfileIntW = NULL;
load_dll_kernel32();
if (!_vptr_GetProfileIntW) {
_vptr_GetProfileIntW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProfileIntW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetProfileIntW));
}

void _elf_GetProfileSectionA() asm("GetProfileSectionA");
void _elf_GetProfileSectionA() {
static void *_vptr_GetProfileSectionA = NULL;
load_dll_kernel32();
if (!_vptr_GetProfileSectionA) {
_vptr_GetProfileSectionA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProfileSectionA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetProfileSectionA));
}

void _elf_GetProfileSectionW() asm("GetProfileSectionW");
void _elf_GetProfileSectionW() {
static void *_vptr_GetProfileSectionW = NULL;
load_dll_kernel32();
if (!_vptr_GetProfileSectionW) {
_vptr_GetProfileSectionW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProfileSectionW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetProfileSectionW));
}

void _elf_GetProfileStringA() asm("GetProfileStringA");
void _elf_GetProfileStringA() {
static void *_vptr_GetProfileStringA = NULL;
load_dll_kernel32();
if (!_vptr_GetProfileStringA) {
_vptr_GetProfileStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProfileStringA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetProfileStringA));
}

void _elf_GetProfileStringW() asm("GetProfileStringW");
void _elf_GetProfileStringW() {
static void *_vptr_GetProfileStringW = NULL;
load_dll_kernel32();
if (!_vptr_GetProfileStringW) {
_vptr_GetProfileStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProfileStringW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetProfileStringW));
}

void _elf_GetQueuedCompletionStatus() asm("GetQueuedCompletionStatus");
void _elf_GetQueuedCompletionStatus() {
static void *_vptr_GetQueuedCompletionStatus = NULL;
load_dll_kernel32();
if (!_vptr_GetQueuedCompletionStatus) {
_vptr_GetQueuedCompletionStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "GetQueuedCompletionStatus");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetQueuedCompletionStatus));
}

void _elf_GetShortPathNameA() asm("GetShortPathNameA");
void _elf_GetShortPathNameA() {
static void *_vptr_GetShortPathNameA = NULL;
load_dll_kernel32();
if (!_vptr_GetShortPathNameA) {
_vptr_GetShortPathNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetShortPathNameA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetShortPathNameA));
}

void _elf_GetShortPathNameW() asm("GetShortPathNameW");
void _elf_GetShortPathNameW() {
static void *_vptr_GetShortPathNameW = NULL;
load_dll_kernel32();
if (!_vptr_GetShortPathNameW) {
_vptr_GetShortPathNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetShortPathNameW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetShortPathNameW));
}

void _elf_GetStartupInfoA() asm("GetStartupInfoA");
void _elf_GetStartupInfoA() {
static void *_vptr_GetStartupInfoA = NULL;
load_dll_kernel32();
if (!_vptr_GetStartupInfoA) {
_vptr_GetStartupInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStartupInfoA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetStartupInfoA));
}

void _elf_GetStartupInfoW() asm("GetStartupInfoW");
void _elf_GetStartupInfoW() {
static void *_vptr_GetStartupInfoW = NULL;
load_dll_kernel32();
if (!_vptr_GetStartupInfoW) {
_vptr_GetStartupInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStartupInfoW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetStartupInfoW));
}

void _elf_GetStdHandle() asm("GetStdHandle");
void _elf_GetStdHandle() {
static void *_vptr_GetStdHandle = NULL;
load_dll_kernel32();
if (!_vptr_GetStdHandle) {
_vptr_GetStdHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStdHandle");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetStdHandle));
}

void _elf_GetStringTypeA() asm("GetStringTypeA");
void _elf_GetStringTypeA() {
static void *_vptr_GetStringTypeA = NULL;
load_dll_kernel32();
if (!_vptr_GetStringTypeA) {
_vptr_GetStringTypeA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStringTypeA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetStringTypeA));
}

void _elf_GetStringTypeExA() asm("GetStringTypeExA");
void _elf_GetStringTypeExA() {
static void *_vptr_GetStringTypeExA = NULL;
load_dll_kernel32();
if (!_vptr_GetStringTypeExA) {
_vptr_GetStringTypeExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStringTypeExA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetStringTypeExA));
}

void _elf_GetStringTypeExW() asm("GetStringTypeExW");
void _elf_GetStringTypeExW() {
static void *_vptr_GetStringTypeExW = NULL;
load_dll_kernel32();
if (!_vptr_GetStringTypeExW) {
_vptr_GetStringTypeExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStringTypeExW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetStringTypeExW));
}

void _elf_GetStringTypeW() asm("GetStringTypeW");
void _elf_GetStringTypeW() {
static void *_vptr_GetStringTypeW = NULL;
load_dll_kernel32();
if (!_vptr_GetStringTypeW) {
_vptr_GetStringTypeW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStringTypeW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetStringTypeW));
}

void _elf_GetSystemDefaultLCID() asm("GetSystemDefaultLCID");
void _elf_GetSystemDefaultLCID() {
static void *_vptr_GetSystemDefaultLCID = NULL;
load_dll_kernel32();
if (!_vptr_GetSystemDefaultLCID) {
_vptr_GetSystemDefaultLCID = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemDefaultLCID");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetSystemDefaultLCID));
}

void _elf_GetSystemDefaultLangID() asm("GetSystemDefaultLangID");
void _elf_GetSystemDefaultLangID() {
static void *_vptr_GetSystemDefaultLangID = NULL;
load_dll_kernel32();
if (!_vptr_GetSystemDefaultLangID) {
_vptr_GetSystemDefaultLangID = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemDefaultLangID");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetSystemDefaultLangID));
}

void _elf_GetSystemDefaultUILanguage() asm("GetSystemDefaultUILanguage");
void _elf_GetSystemDefaultUILanguage() {
static void *_vptr_GetSystemDefaultUILanguage = NULL;
load_dll_kernel32();
if (!_vptr_GetSystemDefaultUILanguage) {
_vptr_GetSystemDefaultUILanguage = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemDefaultUILanguage");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetSystemDefaultUILanguage));
}

void _elf_GetSystemDirectoryA() asm("GetSystemDirectoryA");
void _elf_GetSystemDirectoryA() {
static void *_vptr_GetSystemDirectoryA = NULL;
load_dll_kernel32();
if (!_vptr_GetSystemDirectoryA) {
_vptr_GetSystemDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemDirectoryA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetSystemDirectoryA));
}

void _elf_GetSystemDirectoryW() asm("GetSystemDirectoryW");
void _elf_GetSystemDirectoryW() {
static void *_vptr_GetSystemDirectoryW = NULL;
load_dll_kernel32();
if (!_vptr_GetSystemDirectoryW) {
_vptr_GetSystemDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemDirectoryW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetSystemDirectoryW));
}

void _elf_GetSystemInfo() asm("GetSystemInfo");
void _elf_GetSystemInfo() {
static void *_vptr_GetSystemInfo = NULL;
load_dll_kernel32();
if (!_vptr_GetSystemInfo) {
_vptr_GetSystemInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemInfo");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetSystemInfo));
}

void _elf_GetSystemPowerStatus() asm("GetSystemPowerStatus");
void _elf_GetSystemPowerStatus() {
static void *_vptr_GetSystemPowerStatus = NULL;
load_dll_kernel32();
if (!_vptr_GetSystemPowerStatus) {
_vptr_GetSystemPowerStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemPowerStatus");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetSystemPowerStatus));
}

void _elf_GetSystemRegistryQuota() asm("GetSystemRegistryQuota");
void _elf_GetSystemRegistryQuota() {
static void *_vptr_GetSystemRegistryQuota = NULL;
load_dll_kernel32();
if (!_vptr_GetSystemRegistryQuota) {
_vptr_GetSystemRegistryQuota = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemRegistryQuota");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetSystemRegistryQuota));
}

void _elf_GetSystemTime() asm("GetSystemTime");
void _elf_GetSystemTime() {
static void *_vptr_GetSystemTime = NULL;
load_dll_kernel32();
if (!_vptr_GetSystemTime) {
_vptr_GetSystemTime = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemTime");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetSystemTime));
}

void _elf_GetSystemTimeAdjustment() asm("GetSystemTimeAdjustment");
void _elf_GetSystemTimeAdjustment() {
static void *_vptr_GetSystemTimeAdjustment = NULL;
load_dll_kernel32();
if (!_vptr_GetSystemTimeAdjustment) {
_vptr_GetSystemTimeAdjustment = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemTimeAdjustment");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetSystemTimeAdjustment));
}

void _elf_GetSystemTimeAsFileTime() asm("GetSystemTimeAsFileTime");
void _elf_GetSystemTimeAsFileTime() {
static void *_vptr_GetSystemTimeAsFileTime = NULL;
load_dll_kernel32();
if (!_vptr_GetSystemTimeAsFileTime) {
_vptr_GetSystemTimeAsFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemTimeAsFileTime");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetSystemTimeAsFileTime));
}

void _elf_GetSystemTimes() asm("GetSystemTimes");
void _elf_GetSystemTimes() {
static void *_vptr_GetSystemTimes = NULL;
load_dll_kernel32();
if (!_vptr_GetSystemTimes) {
_vptr_GetSystemTimes = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemTimes");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetSystemTimes));
}

void _elf_GetSystemWindowsDirectoryA() asm("GetSystemWindowsDirectoryA");
void _elf_GetSystemWindowsDirectoryA() {
static void *_vptr_GetSystemWindowsDirectoryA = NULL;
load_dll_kernel32();
if (!_vptr_GetSystemWindowsDirectoryA) {
_vptr_GetSystemWindowsDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemWindowsDirectoryA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetSystemWindowsDirectoryA));
}

void _elf_GetSystemWindowsDirectoryW() asm("GetSystemWindowsDirectoryW");
void _elf_GetSystemWindowsDirectoryW() {
static void *_vptr_GetSystemWindowsDirectoryW = NULL;
load_dll_kernel32();
if (!_vptr_GetSystemWindowsDirectoryW) {
_vptr_GetSystemWindowsDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemWindowsDirectoryW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetSystemWindowsDirectoryW));
}

void _elf_GetSystemWow64DirectoryA() asm("GetSystemWow64DirectoryA");
void _elf_GetSystemWow64DirectoryA() {
static void *_vptr_GetSystemWow64DirectoryA = NULL;
load_dll_kernel32();
if (!_vptr_GetSystemWow64DirectoryA) {
_vptr_GetSystemWow64DirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemWow64DirectoryA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetSystemWow64DirectoryA));
}

void _elf_GetSystemWow64DirectoryW() asm("GetSystemWow64DirectoryW");
void _elf_GetSystemWow64DirectoryW() {
static void *_vptr_GetSystemWow64DirectoryW = NULL;
load_dll_kernel32();
if (!_vptr_GetSystemWow64DirectoryW) {
_vptr_GetSystemWow64DirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemWow64DirectoryW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetSystemWow64DirectoryW));
}

void _elf_GetTapeParameters() asm("GetTapeParameters");
void _elf_GetTapeParameters() {
static void *_vptr_GetTapeParameters = NULL;
load_dll_kernel32();
if (!_vptr_GetTapeParameters) {
_vptr_GetTapeParameters = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTapeParameters");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetTapeParameters));
}

void _elf_GetTapePosition() asm("GetTapePosition");
void _elf_GetTapePosition() {
static void *_vptr_GetTapePosition = NULL;
load_dll_kernel32();
if (!_vptr_GetTapePosition) {
_vptr_GetTapePosition = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTapePosition");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetTapePosition));
}

void _elf_GetTapeStatus() asm("GetTapeStatus");
void _elf_GetTapeStatus() {
static void *_vptr_GetTapeStatus = NULL;
load_dll_kernel32();
if (!_vptr_GetTapeStatus) {
_vptr_GetTapeStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTapeStatus");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetTapeStatus));
}

void _elf_GetTempFileNameA() asm("GetTempFileNameA");
void _elf_GetTempFileNameA() {
static void *_vptr_GetTempFileNameA = NULL;
load_dll_kernel32();
if (!_vptr_GetTempFileNameA) {
_vptr_GetTempFileNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTempFileNameA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetTempFileNameA));
}

void _elf_GetTempFileNameW() asm("GetTempFileNameW");
void _elf_GetTempFileNameW() {
static void *_vptr_GetTempFileNameW = NULL;
load_dll_kernel32();
if (!_vptr_GetTempFileNameW) {
_vptr_GetTempFileNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTempFileNameW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetTempFileNameW));
}

void _elf_GetTempPathA() asm("GetTempPathA");
void _elf_GetTempPathA() {
static void *_vptr_GetTempPathA = NULL;
load_dll_kernel32();
if (!_vptr_GetTempPathA) {
_vptr_GetTempPathA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTempPathA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetTempPathA));
}

void _elf_GetTempPathW() asm("GetTempPathW");
void _elf_GetTempPathW() {
static void *_vptr_GetTempPathW = NULL;
load_dll_kernel32();
if (!_vptr_GetTempPathW) {
_vptr_GetTempPathW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTempPathW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetTempPathW));
}

void _elf_GetThreadContext() asm("GetThreadContext");
void _elf_GetThreadContext() {
static void *_vptr_GetThreadContext = NULL;
load_dll_kernel32();
if (!_vptr_GetThreadContext) {
_vptr_GetThreadContext = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadContext");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetThreadContext));
}

void _elf_GetThreadIOPendingFlag() asm("GetThreadIOPendingFlag");
void _elf_GetThreadIOPendingFlag() {
static void *_vptr_GetThreadIOPendingFlag = NULL;
load_dll_kernel32();
if (!_vptr_GetThreadIOPendingFlag) {
_vptr_GetThreadIOPendingFlag = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadIOPendingFlag");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetThreadIOPendingFlag));
}

void _elf_GetThreadLocale() asm("GetThreadLocale");
void _elf_GetThreadLocale() {
static void *_vptr_GetThreadLocale = NULL;
load_dll_kernel32();
if (!_vptr_GetThreadLocale) {
_vptr_GetThreadLocale = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadLocale");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetThreadLocale));
}

void _elf_GetThreadPriority() asm("GetThreadPriority");
void _elf_GetThreadPriority() {
static void *_vptr_GetThreadPriority = NULL;
load_dll_kernel32();
if (!_vptr_GetThreadPriority) {
_vptr_GetThreadPriority = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadPriority");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetThreadPriority));
}

void _elf_GetThreadPriorityBoost() asm("GetThreadPriorityBoost");
void _elf_GetThreadPriorityBoost() {
static void *_vptr_GetThreadPriorityBoost = NULL;
load_dll_kernel32();
if (!_vptr_GetThreadPriorityBoost) {
_vptr_GetThreadPriorityBoost = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadPriorityBoost");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetThreadPriorityBoost));
}

void _elf_GetThreadSelectorEntry() asm("GetThreadSelectorEntry");
void _elf_GetThreadSelectorEntry() {
static void *_vptr_GetThreadSelectorEntry = NULL;
load_dll_kernel32();
if (!_vptr_GetThreadSelectorEntry) {
_vptr_GetThreadSelectorEntry = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadSelectorEntry");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetThreadSelectorEntry));
}

void _elf_GetThreadTimes() asm("GetThreadTimes");
void _elf_GetThreadTimes() {
static void *_vptr_GetThreadTimes = NULL;
load_dll_kernel32();
if (!_vptr_GetThreadTimes) {
_vptr_GetThreadTimes = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadTimes");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetThreadTimes));
}

void _elf_GetTickCount() asm("GetTickCount");
void _elf_GetTickCount() {
static void *_vptr_GetTickCount = NULL;
load_dll_kernel32();
if (!_vptr_GetTickCount) {
_vptr_GetTickCount = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTickCount");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetTickCount));
}

void _elf_GetTimeFormatA() asm("GetTimeFormatA");
void _elf_GetTimeFormatA() {
static void *_vptr_GetTimeFormatA = NULL;
load_dll_kernel32();
if (!_vptr_GetTimeFormatA) {
_vptr_GetTimeFormatA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTimeFormatA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetTimeFormatA));
}

void _elf_GetTimeFormatW() asm("GetTimeFormatW");
void _elf_GetTimeFormatW() {
static void *_vptr_GetTimeFormatW = NULL;
load_dll_kernel32();
if (!_vptr_GetTimeFormatW) {
_vptr_GetTimeFormatW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTimeFormatW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetTimeFormatW));
}

void _elf_GetTimeZoneInformation() asm("GetTimeZoneInformation");
void _elf_GetTimeZoneInformation() {
static void *_vptr_GetTimeZoneInformation = NULL;
load_dll_kernel32();
if (!_vptr_GetTimeZoneInformation) {
_vptr_GetTimeZoneInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTimeZoneInformation");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetTimeZoneInformation));
}

void _elf_GetUserDefaultLCID() asm("GetUserDefaultLCID");
void _elf_GetUserDefaultLCID() {
static void *_vptr_GetUserDefaultLCID = NULL;
load_dll_kernel32();
if (!_vptr_GetUserDefaultLCID) {
_vptr_GetUserDefaultLCID = (void *) _elf_GetProcAddress(_dll_kernel32, "GetUserDefaultLCID");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetUserDefaultLCID));
}

void _elf_GetUserDefaultLangID() asm("GetUserDefaultLangID");
void _elf_GetUserDefaultLangID() {
static void *_vptr_GetUserDefaultLangID = NULL;
load_dll_kernel32();
if (!_vptr_GetUserDefaultLangID) {
_vptr_GetUserDefaultLangID = (void *) _elf_GetProcAddress(_dll_kernel32, "GetUserDefaultLangID");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetUserDefaultLangID));
}

void _elf_GetUserDefaultUILanguage() asm("GetUserDefaultUILanguage");
void _elf_GetUserDefaultUILanguage() {
static void *_vptr_GetUserDefaultUILanguage = NULL;
load_dll_kernel32();
if (!_vptr_GetUserDefaultUILanguage) {
_vptr_GetUserDefaultUILanguage = (void *) _elf_GetProcAddress(_dll_kernel32, "GetUserDefaultUILanguage");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetUserDefaultUILanguage));
}

void _elf_GetUserGeoID() asm("GetUserGeoID");
void _elf_GetUserGeoID() {
static void *_vptr_GetUserGeoID = NULL;
load_dll_kernel32();
if (!_vptr_GetUserGeoID) {
_vptr_GetUserGeoID = (void *) _elf_GetProcAddress(_dll_kernel32, "GetUserGeoID");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetUserGeoID));
}

void _elf_GetVDMCurrentDirectories() asm("GetVDMCurrentDirectories");
void _elf_GetVDMCurrentDirectories() {
static void *_vptr_GetVDMCurrentDirectories = NULL;
load_dll_kernel32();
if (!_vptr_GetVDMCurrentDirectories) {
_vptr_GetVDMCurrentDirectories = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVDMCurrentDirectories");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetVDMCurrentDirectories));
}

void _elf_GetVersion() asm("GetVersion");
void _elf_GetVersion() {
static void *_vptr_GetVersion = NULL;
load_dll_kernel32();
if (!_vptr_GetVersion) {
_vptr_GetVersion = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVersion");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetVersion));
}

void _elf_GetVersionExA() asm("GetVersionExA");
void _elf_GetVersionExA() {
static void *_vptr_GetVersionExA = NULL;
load_dll_kernel32();
if (!_vptr_GetVersionExA) {
_vptr_GetVersionExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVersionExA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetVersionExA));
}

void _elf_GetVersionExW() asm("GetVersionExW");
void _elf_GetVersionExW() {
static void *_vptr_GetVersionExW = NULL;
load_dll_kernel32();
if (!_vptr_GetVersionExW) {
_vptr_GetVersionExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVersionExW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetVersionExW));
}

void _elf_GetVolumeInformationA() asm("GetVolumeInformationA");
void _elf_GetVolumeInformationA() {
static void *_vptr_GetVolumeInformationA = NULL;
load_dll_kernel32();
if (!_vptr_GetVolumeInformationA) {
_vptr_GetVolumeInformationA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumeInformationA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetVolumeInformationA));
}

void _elf_GetVolumeInformationW() asm("GetVolumeInformationW");
void _elf_GetVolumeInformationW() {
static void *_vptr_GetVolumeInformationW = NULL;
load_dll_kernel32();
if (!_vptr_GetVolumeInformationW) {
_vptr_GetVolumeInformationW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumeInformationW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetVolumeInformationW));
}

void _elf_GetVolumeNameForVolumeMountPointA() asm("GetVolumeNameForVolumeMountPointA");
void _elf_GetVolumeNameForVolumeMountPointA() {
static void *_vptr_GetVolumeNameForVolumeMountPointA = NULL;
load_dll_kernel32();
if (!_vptr_GetVolumeNameForVolumeMountPointA) {
_vptr_GetVolumeNameForVolumeMountPointA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumeNameForVolumeMountPointA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetVolumeNameForVolumeMountPointA));
}

void _elf_GetVolumeNameForVolumeMountPointW() asm("GetVolumeNameForVolumeMountPointW");
void _elf_GetVolumeNameForVolumeMountPointW() {
static void *_vptr_GetVolumeNameForVolumeMountPointW = NULL;
load_dll_kernel32();
if (!_vptr_GetVolumeNameForVolumeMountPointW) {
_vptr_GetVolumeNameForVolumeMountPointW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumeNameForVolumeMountPointW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetVolumeNameForVolumeMountPointW));
}

void _elf_GetVolumePathNameA() asm("GetVolumePathNameA");
void _elf_GetVolumePathNameA() {
static void *_vptr_GetVolumePathNameA = NULL;
load_dll_kernel32();
if (!_vptr_GetVolumePathNameA) {
_vptr_GetVolumePathNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumePathNameA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetVolumePathNameA));
}

void _elf_GetVolumePathNameW() asm("GetVolumePathNameW");
void _elf_GetVolumePathNameW() {
static void *_vptr_GetVolumePathNameW = NULL;
load_dll_kernel32();
if (!_vptr_GetVolumePathNameW) {
_vptr_GetVolumePathNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumePathNameW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetVolumePathNameW));
}

void _elf_GetVolumePathNamesForVolumeNameA() asm("GetVolumePathNamesForVolumeNameA");
void _elf_GetVolumePathNamesForVolumeNameA() {
static void *_vptr_GetVolumePathNamesForVolumeNameA = NULL;
load_dll_kernel32();
if (!_vptr_GetVolumePathNamesForVolumeNameA) {
_vptr_GetVolumePathNamesForVolumeNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumePathNamesForVolumeNameA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetVolumePathNamesForVolumeNameA));
}

void _elf_GetVolumePathNamesForVolumeNameW() asm("GetVolumePathNamesForVolumeNameW");
void _elf_GetVolumePathNamesForVolumeNameW() {
static void *_vptr_GetVolumePathNamesForVolumeNameW = NULL;
load_dll_kernel32();
if (!_vptr_GetVolumePathNamesForVolumeNameW) {
_vptr_GetVolumePathNamesForVolumeNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumePathNamesForVolumeNameW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetVolumePathNamesForVolumeNameW));
}

void _elf_GetWindowsDirectoryA() asm("GetWindowsDirectoryA");
void _elf_GetWindowsDirectoryA() {
static void *_vptr_GetWindowsDirectoryA = NULL;
load_dll_kernel32();
if (!_vptr_GetWindowsDirectoryA) {
_vptr_GetWindowsDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetWindowsDirectoryA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetWindowsDirectoryA));
}

void _elf_GetWindowsDirectoryW() asm("GetWindowsDirectoryW");
void _elf_GetWindowsDirectoryW() {
static void *_vptr_GetWindowsDirectoryW = NULL;
load_dll_kernel32();
if (!_vptr_GetWindowsDirectoryW) {
_vptr_GetWindowsDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetWindowsDirectoryW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetWindowsDirectoryW));
}

void _elf_GetWriteWatch() asm("GetWriteWatch");
void _elf_GetWriteWatch() {
static void *_vptr_GetWriteWatch = NULL;
load_dll_kernel32();
if (!_vptr_GetWriteWatch) {
_vptr_GetWriteWatch = (void *) _elf_GetProcAddress(_dll_kernel32, "GetWriteWatch");
}
asm("leave\njmp *%0" : : "r"(_vptr_GetWriteWatch));
}

void _elf_GlobalAddAtomA() asm("GlobalAddAtomA");
void _elf_GlobalAddAtomA() {
static void *_vptr_GlobalAddAtomA = NULL;
load_dll_kernel32();
if (!_vptr_GlobalAddAtomA) {
_vptr_GlobalAddAtomA = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalAddAtomA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GlobalAddAtomA));
}

void _elf_GlobalAddAtomW() asm("GlobalAddAtomW");
void _elf_GlobalAddAtomW() {
static void *_vptr_GlobalAddAtomW = NULL;
load_dll_kernel32();
if (!_vptr_GlobalAddAtomW) {
_vptr_GlobalAddAtomW = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalAddAtomW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GlobalAddAtomW));
}

void _elf_GlobalAlloc() asm("GlobalAlloc");
void _elf_GlobalAlloc() {
static void *_vptr_GlobalAlloc = NULL;
load_dll_kernel32();
if (!_vptr_GlobalAlloc) {
_vptr_GlobalAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalAlloc");
}
asm("leave\njmp *%0" : : "r"(_vptr_GlobalAlloc));
}

void _elf_GlobalCompact() asm("GlobalCompact");
void _elf_GlobalCompact() {
static void *_vptr_GlobalCompact = NULL;
load_dll_kernel32();
if (!_vptr_GlobalCompact) {
_vptr_GlobalCompact = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalCompact");
}
asm("leave\njmp *%0" : : "r"(_vptr_GlobalCompact));
}

void _elf_GlobalDeleteAtom() asm("GlobalDeleteAtom");
void _elf_GlobalDeleteAtom() {
static void *_vptr_GlobalDeleteAtom = NULL;
load_dll_kernel32();
if (!_vptr_GlobalDeleteAtom) {
_vptr_GlobalDeleteAtom = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalDeleteAtom");
}
asm("leave\njmp *%0" : : "r"(_vptr_GlobalDeleteAtom));
}

void _elf_GlobalFindAtomA() asm("GlobalFindAtomA");
void _elf_GlobalFindAtomA() {
static void *_vptr_GlobalFindAtomA = NULL;
load_dll_kernel32();
if (!_vptr_GlobalFindAtomA) {
_vptr_GlobalFindAtomA = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalFindAtomA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GlobalFindAtomA));
}

void _elf_GlobalFindAtomW() asm("GlobalFindAtomW");
void _elf_GlobalFindAtomW() {
static void *_vptr_GlobalFindAtomW = NULL;
load_dll_kernel32();
if (!_vptr_GlobalFindAtomW) {
_vptr_GlobalFindAtomW = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalFindAtomW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GlobalFindAtomW));
}

void _elf_GlobalFix() asm("GlobalFix");
void _elf_GlobalFix() {
static void *_vptr_GlobalFix = NULL;
load_dll_kernel32();
if (!_vptr_GlobalFix) {
_vptr_GlobalFix = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalFix");
}
asm("leave\njmp *%0" : : "r"(_vptr_GlobalFix));
}

void _elf_GlobalFlags() asm("GlobalFlags");
void _elf_GlobalFlags() {
static void *_vptr_GlobalFlags = NULL;
load_dll_kernel32();
if (!_vptr_GlobalFlags) {
_vptr_GlobalFlags = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalFlags");
}
asm("leave\njmp *%0" : : "r"(_vptr_GlobalFlags));
}

void _elf_GlobalFree() asm("GlobalFree");
void _elf_GlobalFree() {
static void *_vptr_GlobalFree = NULL;
load_dll_kernel32();
if (!_vptr_GlobalFree) {
_vptr_GlobalFree = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalFree");
}
asm("leave\njmp *%0" : : "r"(_vptr_GlobalFree));
}

void _elf_GlobalGetAtomNameA() asm("GlobalGetAtomNameA");
void _elf_GlobalGetAtomNameA() {
static void *_vptr_GlobalGetAtomNameA = NULL;
load_dll_kernel32();
if (!_vptr_GlobalGetAtomNameA) {
_vptr_GlobalGetAtomNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalGetAtomNameA");
}
asm("leave\njmp *%0" : : "r"(_vptr_GlobalGetAtomNameA));
}

void _elf_GlobalGetAtomNameW() asm("GlobalGetAtomNameW");
void _elf_GlobalGetAtomNameW() {
static void *_vptr_GlobalGetAtomNameW = NULL;
load_dll_kernel32();
if (!_vptr_GlobalGetAtomNameW) {
_vptr_GlobalGetAtomNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalGetAtomNameW");
}
asm("leave\njmp *%0" : : "r"(_vptr_GlobalGetAtomNameW));
}

void _elf_GlobalHandle() asm("GlobalHandle");
void _elf_GlobalHandle() {
static void *_vptr_GlobalHandle = NULL;
load_dll_kernel32();
if (!_vptr_GlobalHandle) {
_vptr_GlobalHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalHandle");
}
asm("leave\njmp *%0" : : "r"(_vptr_GlobalHandle));
}

void _elf_GlobalLock() asm("GlobalLock");
void _elf_GlobalLock() {
static void *_vptr_GlobalLock = NULL;
load_dll_kernel32();
if (!_vptr_GlobalLock) {
_vptr_GlobalLock = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalLock");
}
asm("leave\njmp *%0" : : "r"(_vptr_GlobalLock));
}

void _elf_GlobalMemoryStatus() asm("GlobalMemoryStatus");
void _elf_GlobalMemoryStatus() {
static void *_vptr_GlobalMemoryStatus = NULL;
load_dll_kernel32();
if (!_vptr_GlobalMemoryStatus) {
_vptr_GlobalMemoryStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalMemoryStatus");
}
asm("leave\njmp *%0" : : "r"(_vptr_GlobalMemoryStatus));
}

void _elf_GlobalMemoryStatusEx() asm("GlobalMemoryStatusEx");
void _elf_GlobalMemoryStatusEx() {
static void *_vptr_GlobalMemoryStatusEx = NULL;
load_dll_kernel32();
if (!_vptr_GlobalMemoryStatusEx) {
_vptr_GlobalMemoryStatusEx = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalMemoryStatusEx");
}
asm("leave\njmp *%0" : : "r"(_vptr_GlobalMemoryStatusEx));
}

void _elf_GlobalReAlloc() asm("GlobalReAlloc");
void _elf_GlobalReAlloc() {
static void *_vptr_GlobalReAlloc = NULL;
load_dll_kernel32();
if (!_vptr_GlobalReAlloc) {
_vptr_GlobalReAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalReAlloc");
}
asm("leave\njmp *%0" : : "r"(_vptr_GlobalReAlloc));
}

void _elf_GlobalSize() asm("GlobalSize");
void _elf_GlobalSize() {
static void *_vptr_GlobalSize = NULL;
load_dll_kernel32();
if (!_vptr_GlobalSize) {
_vptr_GlobalSize = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalSize");
}
asm("leave\njmp *%0" : : "r"(_vptr_GlobalSize));
}

void _elf_GlobalUnWire() asm("GlobalUnWire");
void _elf_GlobalUnWire() {
static void *_vptr_GlobalUnWire = NULL;
load_dll_kernel32();
if (!_vptr_GlobalUnWire) {
_vptr_GlobalUnWire = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalUnWire");
}
asm("leave\njmp *%0" : : "r"(_vptr_GlobalUnWire));
}

void _elf_GlobalUnfix() asm("GlobalUnfix");
void _elf_GlobalUnfix() {
static void *_vptr_GlobalUnfix = NULL;
load_dll_kernel32();
if (!_vptr_GlobalUnfix) {
_vptr_GlobalUnfix = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalUnfix");
}
asm("leave\njmp *%0" : : "r"(_vptr_GlobalUnfix));
}

void _elf_GlobalUnlock() asm("GlobalUnlock");
void _elf_GlobalUnlock() {
static void *_vptr_GlobalUnlock = NULL;
load_dll_kernel32();
if (!_vptr_GlobalUnlock) {
_vptr_GlobalUnlock = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalUnlock");
}
asm("leave\njmp *%0" : : "r"(_vptr_GlobalUnlock));
}

void _elf_GlobalWire() asm("GlobalWire");
void _elf_GlobalWire() {
static void *_vptr_GlobalWire = NULL;
load_dll_kernel32();
if (!_vptr_GlobalWire) {
_vptr_GlobalWire = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalWire");
}
asm("leave\njmp *%0" : : "r"(_vptr_GlobalWire));
}

void _elf_Heap32First() asm("Heap32First");
void _elf_Heap32First() {
static void *_vptr_Heap32First = NULL;
load_dll_kernel32();
if (!_vptr_Heap32First) {
_vptr_Heap32First = (void *) _elf_GetProcAddress(_dll_kernel32, "Heap32First");
}
asm("leave\njmp *%0" : : "r"(_vptr_Heap32First));
}

void _elf_Heap32ListFirst() asm("Heap32ListFirst");
void _elf_Heap32ListFirst() {
static void *_vptr_Heap32ListFirst = NULL;
load_dll_kernel32();
if (!_vptr_Heap32ListFirst) {
_vptr_Heap32ListFirst = (void *) _elf_GetProcAddress(_dll_kernel32, "Heap32ListFirst");
}
asm("leave\njmp *%0" : : "r"(_vptr_Heap32ListFirst));
}

void _elf_Heap32ListNext() asm("Heap32ListNext");
void _elf_Heap32ListNext() {
static void *_vptr_Heap32ListNext = NULL;
load_dll_kernel32();
if (!_vptr_Heap32ListNext) {
_vptr_Heap32ListNext = (void *) _elf_GetProcAddress(_dll_kernel32, "Heap32ListNext");
}
asm("leave\njmp *%0" : : "r"(_vptr_Heap32ListNext));
}

void _elf_Heap32Next() asm("Heap32Next");
void _elf_Heap32Next() {
static void *_vptr_Heap32Next = NULL;
load_dll_kernel32();
if (!_vptr_Heap32Next) {
_vptr_Heap32Next = (void *) _elf_GetProcAddress(_dll_kernel32, "Heap32Next");
}
asm("leave\njmp *%0" : : "r"(_vptr_Heap32Next));
}

void _elf_HeapAlloc() asm("HeapAlloc");
void _elf_HeapAlloc() {
static void *_vptr_HeapAlloc = NULL;
load_dll_kernel32();
if (!_vptr_HeapAlloc) {
_vptr_HeapAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapAlloc");
}
asm("leave\njmp *%0" : : "r"(_vptr_HeapAlloc));
}

void _elf_HeapCompact() asm("HeapCompact");
void _elf_HeapCompact() {
static void *_vptr_HeapCompact = NULL;
load_dll_kernel32();
if (!_vptr_HeapCompact) {
_vptr_HeapCompact = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapCompact");
}
asm("leave\njmp *%0" : : "r"(_vptr_HeapCompact));
}

void _elf_HeapCreate() asm("HeapCreate");
void _elf_HeapCreate() {
static void *_vptr_HeapCreate = NULL;
load_dll_kernel32();
if (!_vptr_HeapCreate) {
_vptr_HeapCreate = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapCreate");
}
asm("leave\njmp *%0" : : "r"(_vptr_HeapCreate));
}

void _elf_HeapCreateTagsW() asm("HeapCreateTagsW");
void _elf_HeapCreateTagsW() {
static void *_vptr_HeapCreateTagsW = NULL;
load_dll_kernel32();
if (!_vptr_HeapCreateTagsW) {
_vptr_HeapCreateTagsW = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapCreateTagsW");
}
asm("leave\njmp *%0" : : "r"(_vptr_HeapCreateTagsW));
}

void _elf_HeapDestroy() asm("HeapDestroy");
void _elf_HeapDestroy() {
static void *_vptr_HeapDestroy = NULL;
load_dll_kernel32();
if (!_vptr_HeapDestroy) {
_vptr_HeapDestroy = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapDestroy");
}
asm("leave\njmp *%0" : : "r"(_vptr_HeapDestroy));
}

void _elf_HeapExtend() asm("HeapExtend");
void _elf_HeapExtend() {
static void *_vptr_HeapExtend = NULL;
load_dll_kernel32();
if (!_vptr_HeapExtend) {
_vptr_HeapExtend = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapExtend");
}
asm("leave\njmp *%0" : : "r"(_vptr_HeapExtend));
}

void _elf_HeapFree() asm("HeapFree");
void _elf_HeapFree() {
static void *_vptr_HeapFree = NULL;
load_dll_kernel32();
if (!_vptr_HeapFree) {
_vptr_HeapFree = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapFree");
}
asm("leave\njmp *%0" : : "r"(_vptr_HeapFree));
}

void _elf_HeapLock() asm("HeapLock");
void _elf_HeapLock() {
static void *_vptr_HeapLock = NULL;
load_dll_kernel32();
if (!_vptr_HeapLock) {
_vptr_HeapLock = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapLock");
}
asm("leave\njmp *%0" : : "r"(_vptr_HeapLock));
}

void _elf_HeapQueryInformation() asm("HeapQueryInformation");
void _elf_HeapQueryInformation() {
static void *_vptr_HeapQueryInformation = NULL;
load_dll_kernel32();
if (!_vptr_HeapQueryInformation) {
_vptr_HeapQueryInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapQueryInformation");
}
asm("leave\njmp *%0" : : "r"(_vptr_HeapQueryInformation));
}

void _elf_HeapQueryTagW() asm("HeapQueryTagW");
void _elf_HeapQueryTagW() {
static void *_vptr_HeapQueryTagW = NULL;
load_dll_kernel32();
if (!_vptr_HeapQueryTagW) {
_vptr_HeapQueryTagW = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapQueryTagW");
}
asm("leave\njmp *%0" : : "r"(_vptr_HeapQueryTagW));
}

void _elf_HeapReAlloc() asm("HeapReAlloc");
void _elf_HeapReAlloc() {
static void *_vptr_HeapReAlloc = NULL;
load_dll_kernel32();
if (!_vptr_HeapReAlloc) {
_vptr_HeapReAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapReAlloc");
}
asm("leave\njmp *%0" : : "r"(_vptr_HeapReAlloc));
}

void _elf_HeapSetInformation() asm("HeapSetInformation");
void _elf_HeapSetInformation() {
static void *_vptr_HeapSetInformation = NULL;
load_dll_kernel32();
if (!_vptr_HeapSetInformation) {
_vptr_HeapSetInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapSetInformation");
}
asm("leave\njmp *%0" : : "r"(_vptr_HeapSetInformation));
}

void _elf_HeapSize() asm("HeapSize");
void _elf_HeapSize() {
static void *_vptr_HeapSize = NULL;
load_dll_kernel32();
if (!_vptr_HeapSize) {
_vptr_HeapSize = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapSize");
}
asm("leave\njmp *%0" : : "r"(_vptr_HeapSize));
}

void _elf_HeapSummary() asm("HeapSummary");
void _elf_HeapSummary() {
static void *_vptr_HeapSummary = NULL;
load_dll_kernel32();
if (!_vptr_HeapSummary) {
_vptr_HeapSummary = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapSummary");
}
asm("leave\njmp *%0" : : "r"(_vptr_HeapSummary));
}

void _elf_HeapUnlock() asm("HeapUnlock");
void _elf_HeapUnlock() {
static void *_vptr_HeapUnlock = NULL;
load_dll_kernel32();
if (!_vptr_HeapUnlock) {
_vptr_HeapUnlock = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapUnlock");
}
asm("leave\njmp *%0" : : "r"(_vptr_HeapUnlock));
}

void _elf_HeapUsage() asm("HeapUsage");
void _elf_HeapUsage() {
static void *_vptr_HeapUsage = NULL;
load_dll_kernel32();
if (!_vptr_HeapUsage) {
_vptr_HeapUsage = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapUsage");
}
asm("leave\njmp *%0" : : "r"(_vptr_HeapUsage));
}

void _elf_HeapValidate() asm("HeapValidate");
void _elf_HeapValidate() {
static void *_vptr_HeapValidate = NULL;
load_dll_kernel32();
if (!_vptr_HeapValidate) {
_vptr_HeapValidate = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapValidate");
}
asm("leave\njmp *%0" : : "r"(_vptr_HeapValidate));
}

void _elf_HeapWalk() asm("HeapWalk");
void _elf_HeapWalk() {
static void *_vptr_HeapWalk = NULL;
load_dll_kernel32();
if (!_vptr_HeapWalk) {
_vptr_HeapWalk = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapWalk");
}
asm("leave\njmp *%0" : : "r"(_vptr_HeapWalk));
}

void _elf_InitAtomTable() asm("InitAtomTable");
void _elf_InitAtomTable() {
static void *_vptr_InitAtomTable = NULL;
load_dll_kernel32();
if (!_vptr_InitAtomTable) {
_vptr_InitAtomTable = (void *) _elf_GetProcAddress(_dll_kernel32, "InitAtomTable");
}
asm("leave\njmp *%0" : : "r"(_vptr_InitAtomTable));
}

void _elf_InitializeCriticalSection() asm("InitializeCriticalSection");
void _elf_InitializeCriticalSection() {
static void *_vptr_InitializeCriticalSection = NULL;
load_dll_kernel32();
if (!_vptr_InitializeCriticalSection) {
_vptr_InitializeCriticalSection = (void *) _elf_GetProcAddress(_dll_kernel32, "InitializeCriticalSection");
}
asm("leave\njmp *%0" : : "r"(_vptr_InitializeCriticalSection));
}

void _elf_InitializeCriticalSectionAndSpinCount() asm("InitializeCriticalSectionAndSpinCount");
void _elf_InitializeCriticalSectionAndSpinCount() {
static void *_vptr_InitializeCriticalSectionAndSpinCount = NULL;
load_dll_kernel32();
if (!_vptr_InitializeCriticalSectionAndSpinCount) {
_vptr_InitializeCriticalSectionAndSpinCount = (void *) _elf_GetProcAddress(_dll_kernel32, "InitializeCriticalSectionAndSpinCount");
}
asm("leave\njmp *%0" : : "r"(_vptr_InitializeCriticalSectionAndSpinCount));
}

void _elf_InitializeSListHead() asm("InitializeSListHead");
void _elf_InitializeSListHead() {
static void *_vptr_InitializeSListHead = NULL;
load_dll_kernel32();
if (!_vptr_InitializeSListHead) {
_vptr_InitializeSListHead = (void *) _elf_GetProcAddress(_dll_kernel32, "InitializeSListHead");
}
asm("leave\njmp *%0" : : "r"(_vptr_InitializeSListHead));
}

void _elf_InterlockedCompareExchange() asm("InterlockedCompareExchange");
void _elf_InterlockedCompareExchange() {
static void *_vptr_InterlockedCompareExchange = NULL;
load_dll_kernel32();
if (!_vptr_InterlockedCompareExchange) {
_vptr_InterlockedCompareExchange = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedCompareExchange");
}
asm("leave\njmp *%0" : : "r"(_vptr_InterlockedCompareExchange));
}

void _elf_InterlockedDecrement() asm("InterlockedDecrement");
void _elf_InterlockedDecrement() {
static void *_vptr_InterlockedDecrement = NULL;
load_dll_kernel32();
if (!_vptr_InterlockedDecrement) {
_vptr_InterlockedDecrement = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedDecrement");
}
asm("leave\njmp *%0" : : "r"(_vptr_InterlockedDecrement));
}

void _elf_InterlockedExchange() asm("InterlockedExchange");
void _elf_InterlockedExchange() {
static void *_vptr_InterlockedExchange = NULL;
load_dll_kernel32();
if (!_vptr_InterlockedExchange) {
_vptr_InterlockedExchange = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedExchange");
}
asm("leave\njmp *%0" : : "r"(_vptr_InterlockedExchange));
}

void _elf_InterlockedExchangeAdd() asm("InterlockedExchangeAdd");
void _elf_InterlockedExchangeAdd() {
static void *_vptr_InterlockedExchangeAdd = NULL;
load_dll_kernel32();
if (!_vptr_InterlockedExchangeAdd) {
_vptr_InterlockedExchangeAdd = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedExchangeAdd");
}
asm("leave\njmp *%0" : : "r"(_vptr_InterlockedExchangeAdd));
}

void _elf_InterlockedFlushSList() asm("InterlockedFlushSList");
void _elf_InterlockedFlushSList() {
static void *_vptr_InterlockedFlushSList = NULL;
load_dll_kernel32();
if (!_vptr_InterlockedFlushSList) {
_vptr_InterlockedFlushSList = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedFlushSList");
}
asm("leave\njmp *%0" : : "r"(_vptr_InterlockedFlushSList));
}

void _elf_InterlockedIncrement() asm("InterlockedIncrement");
void _elf_InterlockedIncrement() {
static void *_vptr_InterlockedIncrement = NULL;
load_dll_kernel32();
if (!_vptr_InterlockedIncrement) {
_vptr_InterlockedIncrement = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedIncrement");
}
asm("leave\njmp *%0" : : "r"(_vptr_InterlockedIncrement));
}

void _elf_InterlockedPopEntrySList() asm("InterlockedPopEntrySList");
void _elf_InterlockedPopEntrySList() {
static void *_vptr_InterlockedPopEntrySList = NULL;
load_dll_kernel32();
if (!_vptr_InterlockedPopEntrySList) {
_vptr_InterlockedPopEntrySList = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedPopEntrySList");
}
asm("leave\njmp *%0" : : "r"(_vptr_InterlockedPopEntrySList));
}

void _elf_InterlockedPushEntrySList() asm("InterlockedPushEntrySList");
void _elf_InterlockedPushEntrySList() {
static void *_vptr_InterlockedPushEntrySList = NULL;
load_dll_kernel32();
if (!_vptr_InterlockedPushEntrySList) {
_vptr_InterlockedPushEntrySList = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedPushEntrySList");
}
asm("leave\njmp *%0" : : "r"(_vptr_InterlockedPushEntrySList));
}

void _elf_InvalidateConsoleDIBits() asm("InvalidateConsoleDIBits");
void _elf_InvalidateConsoleDIBits() {
static void *_vptr_InvalidateConsoleDIBits = NULL;
load_dll_kernel32();
if (!_vptr_InvalidateConsoleDIBits) {
_vptr_InvalidateConsoleDIBits = (void *) _elf_GetProcAddress(_dll_kernel32, "InvalidateConsoleDIBits");
}
asm("leave\njmp *%0" : : "r"(_vptr_InvalidateConsoleDIBits));
}

void _elf_IsBadCodePtr() asm("IsBadCodePtr");
void _elf_IsBadCodePtr() {
static void *_vptr_IsBadCodePtr = NULL;
load_dll_kernel32();
if (!_vptr_IsBadCodePtr) {
_vptr_IsBadCodePtr = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadCodePtr");
}
asm("leave\njmp *%0" : : "r"(_vptr_IsBadCodePtr));
}

void _elf_IsBadHugeReadPtr() asm("IsBadHugeReadPtr");
void _elf_IsBadHugeReadPtr() {
static void *_vptr_IsBadHugeReadPtr = NULL;
load_dll_kernel32();
if (!_vptr_IsBadHugeReadPtr) {
_vptr_IsBadHugeReadPtr = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadHugeReadPtr");
}
asm("leave\njmp *%0" : : "r"(_vptr_IsBadHugeReadPtr));
}

void _elf_IsBadHugeWritePtr() asm("IsBadHugeWritePtr");
void _elf_IsBadHugeWritePtr() {
static void *_vptr_IsBadHugeWritePtr = NULL;
load_dll_kernel32();
if (!_vptr_IsBadHugeWritePtr) {
_vptr_IsBadHugeWritePtr = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadHugeWritePtr");
}
asm("leave\njmp *%0" : : "r"(_vptr_IsBadHugeWritePtr));
}

void _elf_IsBadReadPtr() asm("IsBadReadPtr");
void _elf_IsBadReadPtr() {
static void *_vptr_IsBadReadPtr = NULL;
load_dll_kernel32();
if (!_vptr_IsBadReadPtr) {
_vptr_IsBadReadPtr = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadReadPtr");
}
asm("leave\njmp *%0" : : "r"(_vptr_IsBadReadPtr));
}

void _elf_IsBadStringPtrA() asm("IsBadStringPtrA");
void _elf_IsBadStringPtrA() {
static void *_vptr_IsBadStringPtrA = NULL;
load_dll_kernel32();
if (!_vptr_IsBadStringPtrA) {
_vptr_IsBadStringPtrA = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadStringPtrA");
}
asm("leave\njmp *%0" : : "r"(_vptr_IsBadStringPtrA));
}

void _elf_IsBadStringPtrW() asm("IsBadStringPtrW");
void _elf_IsBadStringPtrW() {
static void *_vptr_IsBadStringPtrW = NULL;
load_dll_kernel32();
if (!_vptr_IsBadStringPtrW) {
_vptr_IsBadStringPtrW = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadStringPtrW");
}
asm("leave\njmp *%0" : : "r"(_vptr_IsBadStringPtrW));
}

void _elf_IsBadWritePtr() asm("IsBadWritePtr");
void _elf_IsBadWritePtr() {
static void *_vptr_IsBadWritePtr = NULL;
load_dll_kernel32();
if (!_vptr_IsBadWritePtr) {
_vptr_IsBadWritePtr = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadWritePtr");
}
asm("leave\njmp *%0" : : "r"(_vptr_IsBadWritePtr));
}

void _elf_IsDBCSLeadByte() asm("IsDBCSLeadByte");
void _elf_IsDBCSLeadByte() {
static void *_vptr_IsDBCSLeadByte = NULL;
load_dll_kernel32();
if (!_vptr_IsDBCSLeadByte) {
_vptr_IsDBCSLeadByte = (void *) _elf_GetProcAddress(_dll_kernel32, "IsDBCSLeadByte");
}
asm("leave\njmp *%0" : : "r"(_vptr_IsDBCSLeadByte));
}

void _elf_IsDBCSLeadByteEx() asm("IsDBCSLeadByteEx");
void _elf_IsDBCSLeadByteEx() {
static void *_vptr_IsDBCSLeadByteEx = NULL;
load_dll_kernel32();
if (!_vptr_IsDBCSLeadByteEx) {
_vptr_IsDBCSLeadByteEx = (void *) _elf_GetProcAddress(_dll_kernel32, "IsDBCSLeadByteEx");
}
asm("leave\njmp *%0" : : "r"(_vptr_IsDBCSLeadByteEx));
}

void _elf_IsDebuggerPresent() asm("IsDebuggerPresent");
void _elf_IsDebuggerPresent() {
static void *_vptr_IsDebuggerPresent = NULL;
load_dll_kernel32();
if (!_vptr_IsDebuggerPresent) {
_vptr_IsDebuggerPresent = (void *) _elf_GetProcAddress(_dll_kernel32, "IsDebuggerPresent");
}
asm("leave\njmp *%0" : : "r"(_vptr_IsDebuggerPresent));
}

void _elf_IsProcessInJob() asm("IsProcessInJob");
void _elf_IsProcessInJob() {
static void *_vptr_IsProcessInJob = NULL;
load_dll_kernel32();
if (!_vptr_IsProcessInJob) {
_vptr_IsProcessInJob = (void *) _elf_GetProcAddress(_dll_kernel32, "IsProcessInJob");
}
asm("leave\njmp *%0" : : "r"(_vptr_IsProcessInJob));
}

void _elf_IsProcessorFeaturePresent() asm("IsProcessorFeaturePresent");
void _elf_IsProcessorFeaturePresent() {
static void *_vptr_IsProcessorFeaturePresent = NULL;
load_dll_kernel32();
if (!_vptr_IsProcessorFeaturePresent) {
_vptr_IsProcessorFeaturePresent = (void *) _elf_GetProcAddress(_dll_kernel32, "IsProcessorFeaturePresent");
}
asm("leave\njmp *%0" : : "r"(_vptr_IsProcessorFeaturePresent));
}

void _elf_IsSystemResumeAutomatic() asm("IsSystemResumeAutomatic");
void _elf_IsSystemResumeAutomatic() {
static void *_vptr_IsSystemResumeAutomatic = NULL;
load_dll_kernel32();
if (!_vptr_IsSystemResumeAutomatic) {
_vptr_IsSystemResumeAutomatic = (void *) _elf_GetProcAddress(_dll_kernel32, "IsSystemResumeAutomatic");
}
asm("leave\njmp *%0" : : "r"(_vptr_IsSystemResumeAutomatic));
}

void _elf_IsValidCodePage() asm("IsValidCodePage");
void _elf_IsValidCodePage() {
static void *_vptr_IsValidCodePage = NULL;
load_dll_kernel32();
if (!_vptr_IsValidCodePage) {
_vptr_IsValidCodePage = (void *) _elf_GetProcAddress(_dll_kernel32, "IsValidCodePage");
}
asm("leave\njmp *%0" : : "r"(_vptr_IsValidCodePage));
}

void _elf_IsValidLanguageGroup() asm("IsValidLanguageGroup");
void _elf_IsValidLanguageGroup() {
static void *_vptr_IsValidLanguageGroup = NULL;
load_dll_kernel32();
if (!_vptr_IsValidLanguageGroup) {
_vptr_IsValidLanguageGroup = (void *) _elf_GetProcAddress(_dll_kernel32, "IsValidLanguageGroup");
}
asm("leave\njmp *%0" : : "r"(_vptr_IsValidLanguageGroup));
}

void _elf_IsValidLocale() asm("IsValidLocale");
void _elf_IsValidLocale() {
static void *_vptr_IsValidLocale = NULL;
load_dll_kernel32();
if (!_vptr_IsValidLocale) {
_vptr_IsValidLocale = (void *) _elf_GetProcAddress(_dll_kernel32, "IsValidLocale");
}
asm("leave\njmp *%0" : : "r"(_vptr_IsValidLocale));
}

void _elf_IsValidUILanguage() asm("IsValidUILanguage");
void _elf_IsValidUILanguage() {
static void *_vptr_IsValidUILanguage = NULL;
load_dll_kernel32();
if (!_vptr_IsValidUILanguage) {
_vptr_IsValidUILanguage = (void *) _elf_GetProcAddress(_dll_kernel32, "IsValidUILanguage");
}
asm("leave\njmp *%0" : : "r"(_vptr_IsValidUILanguage));
}

void _elf_IsWow64Process() asm("IsWow64Process");
void _elf_IsWow64Process() {
static void *_vptr_IsWow64Process = NULL;
load_dll_kernel32();
if (!_vptr_IsWow64Process) {
_vptr_IsWow64Process = (void *) _elf_GetProcAddress(_dll_kernel32, "IsWow64Process");
}
asm("leave\njmp *%0" : : "r"(_vptr_IsWow64Process));
}

void _elf_LCMapStringA() asm("LCMapStringA");
void _elf_LCMapStringA() {
static void *_vptr_LCMapStringA = NULL;
load_dll_kernel32();
if (!_vptr_LCMapStringA) {
_vptr_LCMapStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "LCMapStringA");
}
asm("leave\njmp *%0" : : "r"(_vptr_LCMapStringA));
}

void _elf_LCMapStringW() asm("LCMapStringW");
void _elf_LCMapStringW() {
static void *_vptr_LCMapStringW = NULL;
load_dll_kernel32();
if (!_vptr_LCMapStringW) {
_vptr_LCMapStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "LCMapStringW");
}
asm("leave\njmp *%0" : : "r"(_vptr_LCMapStringW));
}

void _elf_LZClose() asm("LZClose");
void _elf_LZClose() {
static void *_vptr_LZClose = NULL;
load_dll_kernel32();
if (!_vptr_LZClose) {
_vptr_LZClose = (void *) _elf_GetProcAddress(_dll_kernel32, "LZClose");
}
asm("leave\njmp *%0" : : "r"(_vptr_LZClose));
}

void _elf_LZCloseFile() asm("LZCloseFile");
void _elf_LZCloseFile() {
static void *_vptr_LZCloseFile = NULL;
load_dll_kernel32();
if (!_vptr_LZCloseFile) {
_vptr_LZCloseFile = (void *) _elf_GetProcAddress(_dll_kernel32, "LZCloseFile");
}
asm("leave\njmp *%0" : : "r"(_vptr_LZCloseFile));
}

void _elf_LZCopy() asm("LZCopy");
void _elf_LZCopy() {
static void *_vptr_LZCopy = NULL;
load_dll_kernel32();
if (!_vptr_LZCopy) {
_vptr_LZCopy = (void *) _elf_GetProcAddress(_dll_kernel32, "LZCopy");
}
asm("leave\njmp *%0" : : "r"(_vptr_LZCopy));
}

void _elf_LZCreateFileW() asm("LZCreateFileW");
void _elf_LZCreateFileW() {
static void *_vptr_LZCreateFileW = NULL;
load_dll_kernel32();
if (!_vptr_LZCreateFileW) {
_vptr_LZCreateFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "LZCreateFileW");
}
asm("leave\njmp *%0" : : "r"(_vptr_LZCreateFileW));
}

void _elf_LZDone() asm("LZDone");
void _elf_LZDone() {
static void *_vptr_LZDone = NULL;
load_dll_kernel32();
if (!_vptr_LZDone) {
_vptr_LZDone = (void *) _elf_GetProcAddress(_dll_kernel32, "LZDone");
}
asm("leave\njmp *%0" : : "r"(_vptr_LZDone));
}

void _elf_LZInit() asm("LZInit");
void _elf_LZInit() {
static void *_vptr_LZInit = NULL;
load_dll_kernel32();
if (!_vptr_LZInit) {
_vptr_LZInit = (void *) _elf_GetProcAddress(_dll_kernel32, "LZInit");
}
asm("leave\njmp *%0" : : "r"(_vptr_LZInit));
}

void _elf_LZOpenFileA() asm("LZOpenFileA");
void _elf_LZOpenFileA() {
static void *_vptr_LZOpenFileA = NULL;
load_dll_kernel32();
if (!_vptr_LZOpenFileA) {
_vptr_LZOpenFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "LZOpenFileA");
}
asm("leave\njmp *%0" : : "r"(_vptr_LZOpenFileA));
}

void _elf_LZOpenFileW() asm("LZOpenFileW");
void _elf_LZOpenFileW() {
static void *_vptr_LZOpenFileW = NULL;
load_dll_kernel32();
if (!_vptr_LZOpenFileW) {
_vptr_LZOpenFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "LZOpenFileW");
}
asm("leave\njmp *%0" : : "r"(_vptr_LZOpenFileW));
}

void _elf_LZRead() asm("LZRead");
void _elf_LZRead() {
static void *_vptr_LZRead = NULL;
load_dll_kernel32();
if (!_vptr_LZRead) {
_vptr_LZRead = (void *) _elf_GetProcAddress(_dll_kernel32, "LZRead");
}
asm("leave\njmp *%0" : : "r"(_vptr_LZRead));
}

void _elf_LZSeek() asm("LZSeek");
void _elf_LZSeek() {
static void *_vptr_LZSeek = NULL;
load_dll_kernel32();
if (!_vptr_LZSeek) {
_vptr_LZSeek = (void *) _elf_GetProcAddress(_dll_kernel32, "LZSeek");
}
asm("leave\njmp *%0" : : "r"(_vptr_LZSeek));
}

void _elf_LZStart() asm("LZStart");
void _elf_LZStart() {
static void *_vptr_LZStart = NULL;
load_dll_kernel32();
if (!_vptr_LZStart) {
_vptr_LZStart = (void *) _elf_GetProcAddress(_dll_kernel32, "LZStart");
}
asm("leave\njmp *%0" : : "r"(_vptr_LZStart));
}

void _elf_LeaveCriticalSection() asm("LeaveCriticalSection");
void _elf_LeaveCriticalSection() {
static void *_vptr_LeaveCriticalSection = NULL;
load_dll_kernel32();
if (!_vptr_LeaveCriticalSection) {
_vptr_LeaveCriticalSection = (void *) _elf_GetProcAddress(_dll_kernel32, "LeaveCriticalSection");
}
asm("leave\njmp *%0" : : "r"(_vptr_LeaveCriticalSection));
}

void _elf_LoadLibraryExA() asm("LoadLibraryExA");
void _elf_LoadLibraryExA() {
static void *_vptr_LoadLibraryExA = NULL;
load_dll_kernel32();
if (!_vptr_LoadLibraryExA) {
_vptr_LoadLibraryExA = (void *) _elf_GetProcAddress(_dll_kernel32, "LoadLibraryExA");
}
asm("leave\njmp *%0" : : "r"(_vptr_LoadLibraryExA));
}

void _elf_LoadLibraryExW() asm("LoadLibraryExW");
void _elf_LoadLibraryExW() {
static void *_vptr_LoadLibraryExW = NULL;
load_dll_kernel32();
if (!_vptr_LoadLibraryExW) {
_vptr_LoadLibraryExW = (void *) _elf_GetProcAddress(_dll_kernel32, "LoadLibraryExW");
}
asm("leave\njmp *%0" : : "r"(_vptr_LoadLibraryExW));
}

void _elf_LoadLibraryW() asm("LoadLibraryW");
void _elf_LoadLibraryW() {
static void *_vptr_LoadLibraryW = NULL;
load_dll_kernel32();
if (!_vptr_LoadLibraryW) {
_vptr_LoadLibraryW = (void *) _elf_GetProcAddress(_dll_kernel32, "LoadLibraryW");
}
asm("leave\njmp *%0" : : "r"(_vptr_LoadLibraryW));
}

void _elf_LoadModule() asm("LoadModule");
void _elf_LoadModule() {
static void *_vptr_LoadModule = NULL;
load_dll_kernel32();
if (!_vptr_LoadModule) {
_vptr_LoadModule = (void *) _elf_GetProcAddress(_dll_kernel32, "LoadModule");
}
asm("leave\njmp *%0" : : "r"(_vptr_LoadModule));
}

void _elf_LoadResource() asm("LoadResource");
void _elf_LoadResource() {
static void *_vptr_LoadResource = NULL;
load_dll_kernel32();
if (!_vptr_LoadResource) {
_vptr_LoadResource = (void *) _elf_GetProcAddress(_dll_kernel32, "LoadResource");
}
asm("leave\njmp *%0" : : "r"(_vptr_LoadResource));
}

void _elf_LocalAlloc() asm("LocalAlloc");
void _elf_LocalAlloc() {
static void *_vptr_LocalAlloc = NULL;
load_dll_kernel32();
if (!_vptr_LocalAlloc) {
_vptr_LocalAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalAlloc");
}
asm("leave\njmp *%0" : : "r"(_vptr_LocalAlloc));
}

void _elf_LocalCompact() asm("LocalCompact");
void _elf_LocalCompact() {
static void *_vptr_LocalCompact = NULL;
load_dll_kernel32();
if (!_vptr_LocalCompact) {
_vptr_LocalCompact = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalCompact");
}
asm("leave\njmp *%0" : : "r"(_vptr_LocalCompact));
}

void _elf_LocalFileTimeToFileTime() asm("LocalFileTimeToFileTime");
void _elf_LocalFileTimeToFileTime() {
static void *_vptr_LocalFileTimeToFileTime = NULL;
load_dll_kernel32();
if (!_vptr_LocalFileTimeToFileTime) {
_vptr_LocalFileTimeToFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalFileTimeToFileTime");
}
asm("leave\njmp *%0" : : "r"(_vptr_LocalFileTimeToFileTime));
}

void _elf_LocalFlags() asm("LocalFlags");
void _elf_LocalFlags() {
static void *_vptr_LocalFlags = NULL;
load_dll_kernel32();
if (!_vptr_LocalFlags) {
_vptr_LocalFlags = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalFlags");
}
asm("leave\njmp *%0" : : "r"(_vptr_LocalFlags));
}

void _elf_LocalFree() asm("LocalFree");
void _elf_LocalFree() {
static void *_vptr_LocalFree = NULL;
load_dll_kernel32();
if (!_vptr_LocalFree) {
_vptr_LocalFree = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalFree");
}
asm("leave\njmp *%0" : : "r"(_vptr_LocalFree));
}

void _elf_LocalHandle() asm("LocalHandle");
void _elf_LocalHandle() {
static void *_vptr_LocalHandle = NULL;
load_dll_kernel32();
if (!_vptr_LocalHandle) {
_vptr_LocalHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalHandle");
}
asm("leave\njmp *%0" : : "r"(_vptr_LocalHandle));
}

void _elf_LocalLock() asm("LocalLock");
void _elf_LocalLock() {
static void *_vptr_LocalLock = NULL;
load_dll_kernel32();
if (!_vptr_LocalLock) {
_vptr_LocalLock = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalLock");
}
asm("leave\njmp *%0" : : "r"(_vptr_LocalLock));
}

void _elf_LocalReAlloc() asm("LocalReAlloc");
void _elf_LocalReAlloc() {
static void *_vptr_LocalReAlloc = NULL;
load_dll_kernel32();
if (!_vptr_LocalReAlloc) {
_vptr_LocalReAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalReAlloc");
}
asm("leave\njmp *%0" : : "r"(_vptr_LocalReAlloc));
}

void _elf_LocalShrink() asm("LocalShrink");
void _elf_LocalShrink() {
static void *_vptr_LocalShrink = NULL;
load_dll_kernel32();
if (!_vptr_LocalShrink) {
_vptr_LocalShrink = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalShrink");
}
asm("leave\njmp *%0" : : "r"(_vptr_LocalShrink));
}

void _elf_LocalSize() asm("LocalSize");
void _elf_LocalSize() {
static void *_vptr_LocalSize = NULL;
load_dll_kernel32();
if (!_vptr_LocalSize) {
_vptr_LocalSize = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalSize");
}
asm("leave\njmp *%0" : : "r"(_vptr_LocalSize));
}

void _elf_LocalUnlock() asm("LocalUnlock");
void _elf_LocalUnlock() {
static void *_vptr_LocalUnlock = NULL;
load_dll_kernel32();
if (!_vptr_LocalUnlock) {
_vptr_LocalUnlock = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalUnlock");
}
asm("leave\njmp *%0" : : "r"(_vptr_LocalUnlock));
}

void _elf_LockFile() asm("LockFile");
void _elf_LockFile() {
static void *_vptr_LockFile = NULL;
load_dll_kernel32();
if (!_vptr_LockFile) {
_vptr_LockFile = (void *) _elf_GetProcAddress(_dll_kernel32, "LockFile");
}
asm("leave\njmp *%0" : : "r"(_vptr_LockFile));
}

void _elf_LockFileEx() asm("LockFileEx");
void _elf_LockFileEx() {
static void *_vptr_LockFileEx = NULL;
load_dll_kernel32();
if (!_vptr_LockFileEx) {
_vptr_LockFileEx = (void *) _elf_GetProcAddress(_dll_kernel32, "LockFileEx");
}
asm("leave\njmp *%0" : : "r"(_vptr_LockFileEx));
}

void _elf_LockResource() asm("LockResource");
void _elf_LockResource() {
static void *_vptr_LockResource = NULL;
load_dll_kernel32();
if (!_vptr_LockResource) {
_vptr_LockResource = (void *) _elf_GetProcAddress(_dll_kernel32, "LockResource");
}
asm("leave\njmp *%0" : : "r"(_vptr_LockResource));
}

void _elf_MapUserPhysicalPages() asm("MapUserPhysicalPages");
void _elf_MapUserPhysicalPages() {
static void *_vptr_MapUserPhysicalPages = NULL;
load_dll_kernel32();
if (!_vptr_MapUserPhysicalPages) {
_vptr_MapUserPhysicalPages = (void *) _elf_GetProcAddress(_dll_kernel32, "MapUserPhysicalPages");
}
asm("leave\njmp *%0" : : "r"(_vptr_MapUserPhysicalPages));
}

void _elf_MapUserPhysicalPagesScatter() asm("MapUserPhysicalPagesScatter");
void _elf_MapUserPhysicalPagesScatter() {
static void *_vptr_MapUserPhysicalPagesScatter = NULL;
load_dll_kernel32();
if (!_vptr_MapUserPhysicalPagesScatter) {
_vptr_MapUserPhysicalPagesScatter = (void *) _elf_GetProcAddress(_dll_kernel32, "MapUserPhysicalPagesScatter");
}
asm("leave\njmp *%0" : : "r"(_vptr_MapUserPhysicalPagesScatter));
}

void _elf_MapViewOfFile() asm("MapViewOfFile");
void _elf_MapViewOfFile() {
static void *_vptr_MapViewOfFile = NULL;
load_dll_kernel32();
if (!_vptr_MapViewOfFile) {
_vptr_MapViewOfFile = (void *) _elf_GetProcAddress(_dll_kernel32, "MapViewOfFile");
}
asm("leave\njmp *%0" : : "r"(_vptr_MapViewOfFile));
}

void _elf_MapViewOfFileEx() asm("MapViewOfFileEx");
void _elf_MapViewOfFileEx() {
static void *_vptr_MapViewOfFileEx = NULL;
load_dll_kernel32();
if (!_vptr_MapViewOfFileEx) {
_vptr_MapViewOfFileEx = (void *) _elf_GetProcAddress(_dll_kernel32, "MapViewOfFileEx");
}
asm("leave\njmp *%0" : : "r"(_vptr_MapViewOfFileEx));
}

void _elf_Module32First() asm("Module32First");
void _elf_Module32First() {
static void *_vptr_Module32First = NULL;
load_dll_kernel32();
if (!_vptr_Module32First) {
_vptr_Module32First = (void *) _elf_GetProcAddress(_dll_kernel32, "Module32First");
}
asm("leave\njmp *%0" : : "r"(_vptr_Module32First));
}

void _elf_Module32FirstW() asm("Module32FirstW");
void _elf_Module32FirstW() {
static void *_vptr_Module32FirstW = NULL;
load_dll_kernel32();
if (!_vptr_Module32FirstW) {
_vptr_Module32FirstW = (void *) _elf_GetProcAddress(_dll_kernel32, "Module32FirstW");
}
asm("leave\njmp *%0" : : "r"(_vptr_Module32FirstW));
}

void _elf_Module32Next() asm("Module32Next");
void _elf_Module32Next() {
static void *_vptr_Module32Next = NULL;
load_dll_kernel32();
if (!_vptr_Module32Next) {
_vptr_Module32Next = (void *) _elf_GetProcAddress(_dll_kernel32, "Module32Next");
}
asm("leave\njmp *%0" : : "r"(_vptr_Module32Next));
}

void _elf_Module32NextW() asm("Module32NextW");
void _elf_Module32NextW() {
static void *_vptr_Module32NextW = NULL;
load_dll_kernel32();
if (!_vptr_Module32NextW) {
_vptr_Module32NextW = (void *) _elf_GetProcAddress(_dll_kernel32, "Module32NextW");
}
asm("leave\njmp *%0" : : "r"(_vptr_Module32NextW));
}

void _elf_MoveFileA() asm("MoveFileA");
void _elf_MoveFileA() {
static void *_vptr_MoveFileA = NULL;
load_dll_kernel32();
if (!_vptr_MoveFileA) {
_vptr_MoveFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "MoveFileA");
}
asm("leave\njmp *%0" : : "r"(_vptr_MoveFileA));
}

void _elf_MoveFileExA() asm("MoveFileExA");
void _elf_MoveFileExA() {
static void *_vptr_MoveFileExA = NULL;
load_dll_kernel32();
if (!_vptr_MoveFileExA) {
_vptr_MoveFileExA = (void *) _elf_GetProcAddress(_dll_kernel32, "MoveFileExA");
}
asm("leave\njmp *%0" : : "r"(_vptr_MoveFileExA));
}

void _elf_MoveFileExW() asm("MoveFileExW");
void _elf_MoveFileExW() {
static void *_vptr_MoveFileExW = NULL;
load_dll_kernel32();
if (!_vptr_MoveFileExW) {
_vptr_MoveFileExW = (void *) _elf_GetProcAddress(_dll_kernel32, "MoveFileExW");
}
asm("leave\njmp *%0" : : "r"(_vptr_MoveFileExW));
}

void _elf_MoveFileW() asm("MoveFileW");
void _elf_MoveFileW() {
static void *_vptr_MoveFileW = NULL;
load_dll_kernel32();
if (!_vptr_MoveFileW) {
_vptr_MoveFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "MoveFileW");
}
asm("leave\njmp *%0" : : "r"(_vptr_MoveFileW));
}

void _elf_MoveFileWithProgressA() asm("MoveFileWithProgressA");
void _elf_MoveFileWithProgressA() {
static void *_vptr_MoveFileWithProgressA = NULL;
load_dll_kernel32();
if (!_vptr_MoveFileWithProgressA) {
_vptr_MoveFileWithProgressA = (void *) _elf_GetProcAddress(_dll_kernel32, "MoveFileWithProgressA");
}
asm("leave\njmp *%0" : : "r"(_vptr_MoveFileWithProgressA));
}

void _elf_MoveFileWithProgressW() asm("MoveFileWithProgressW");
void _elf_MoveFileWithProgressW() {
static void *_vptr_MoveFileWithProgressW = NULL;
load_dll_kernel32();
if (!_vptr_MoveFileWithProgressW) {
_vptr_MoveFileWithProgressW = (void *) _elf_GetProcAddress(_dll_kernel32, "MoveFileWithProgressW");
}
asm("leave\njmp *%0" : : "r"(_vptr_MoveFileWithProgressW));
}

void _elf_MulDiv() asm("MulDiv");
void _elf_MulDiv() {
static void *_vptr_MulDiv = NULL;
load_dll_kernel32();
if (!_vptr_MulDiv) {
_vptr_MulDiv = (void *) _elf_GetProcAddress(_dll_kernel32, "MulDiv");
}
asm("leave\njmp *%0" : : "r"(_vptr_MulDiv));
}

void _elf_MultiByteToWideChar() asm("MultiByteToWideChar");
void _elf_MultiByteToWideChar() {
static void *_vptr_MultiByteToWideChar = NULL;
load_dll_kernel32();
if (!_vptr_MultiByteToWideChar) {
_vptr_MultiByteToWideChar = (void *) _elf_GetProcAddress(_dll_kernel32, "MultiByteToWideChar");
}
asm("leave\njmp *%0" : : "r"(_vptr_MultiByteToWideChar));
}

void _elf_NlsConvertIntegerToString() asm("NlsConvertIntegerToString");
void _elf_NlsConvertIntegerToString() {
static void *_vptr_NlsConvertIntegerToString = NULL;
load_dll_kernel32();
if (!_vptr_NlsConvertIntegerToString) {
_vptr_NlsConvertIntegerToString = (void *) _elf_GetProcAddress(_dll_kernel32, "NlsConvertIntegerToString");
}
asm("leave\njmp *%0" : : "r"(_vptr_NlsConvertIntegerToString));
}

void _elf_NlsGetCacheUpdateCount() asm("NlsGetCacheUpdateCount");
void _elf_NlsGetCacheUpdateCount() {
static void *_vptr_NlsGetCacheUpdateCount = NULL;
load_dll_kernel32();
if (!_vptr_NlsGetCacheUpdateCount) {
_vptr_NlsGetCacheUpdateCount = (void *) _elf_GetProcAddress(_dll_kernel32, "NlsGetCacheUpdateCount");
}
asm("leave\njmp *%0" : : "r"(_vptr_NlsGetCacheUpdateCount));
}

void _elf_NlsResetProcessLocale() asm("NlsResetProcessLocale");
void _elf_NlsResetProcessLocale() {
static void *_vptr_NlsResetProcessLocale = NULL;
load_dll_kernel32();
if (!_vptr_NlsResetProcessLocale) {
_vptr_NlsResetProcessLocale = (void *) _elf_GetProcAddress(_dll_kernel32, "NlsResetProcessLocale");
}
asm("leave\njmp *%0" : : "r"(_vptr_NlsResetProcessLocale));
}

void _elf_NumaVirtualQueryNode() asm("NumaVirtualQueryNode");
void _elf_NumaVirtualQueryNode() {
static void *_vptr_NumaVirtualQueryNode = NULL;
load_dll_kernel32();
if (!_vptr_NumaVirtualQueryNode) {
_vptr_NumaVirtualQueryNode = (void *) _elf_GetProcAddress(_dll_kernel32, "NumaVirtualQueryNode");
}
asm("leave\njmp *%0" : : "r"(_vptr_NumaVirtualQueryNode));
}

void _elf_OpenConsoleW() asm("OpenConsoleW");
void _elf_OpenConsoleW() {
static void *_vptr_OpenConsoleW = NULL;
load_dll_kernel32();
if (!_vptr_OpenConsoleW) {
_vptr_OpenConsoleW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenConsoleW");
}
asm("leave\njmp *%0" : : "r"(_vptr_OpenConsoleW));
}

void _elf_OpenDataFile() asm("OpenDataFile");
void _elf_OpenDataFile() {
static void *_vptr_OpenDataFile = NULL;
load_dll_kernel32();
if (!_vptr_OpenDataFile) {
_vptr_OpenDataFile = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenDataFile");
}
asm("leave\njmp *%0" : : "r"(_vptr_OpenDataFile));
}

void _elf_OpenEventA() asm("OpenEventA");
void _elf_OpenEventA() {
static void *_vptr_OpenEventA = NULL;
load_dll_kernel32();
if (!_vptr_OpenEventA) {
_vptr_OpenEventA = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenEventA");
}
asm("leave\njmp *%0" : : "r"(_vptr_OpenEventA));
}

void _elf_OpenEventW() asm("OpenEventW");
void _elf_OpenEventW() {
static void *_vptr_OpenEventW = NULL;
load_dll_kernel32();
if (!_vptr_OpenEventW) {
_vptr_OpenEventW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenEventW");
}
asm("leave\njmp *%0" : : "r"(_vptr_OpenEventW));
}

void _elf_OpenFile() asm("OpenFile");
void _elf_OpenFile() {
static void *_vptr_OpenFile = NULL;
load_dll_kernel32();
if (!_vptr_OpenFile) {
_vptr_OpenFile = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenFile");
}
asm("leave\njmp *%0" : : "r"(_vptr_OpenFile));
}

void _elf_OpenFileMappingA() asm("OpenFileMappingA");
void _elf_OpenFileMappingA() {
static void *_vptr_OpenFileMappingA = NULL;
load_dll_kernel32();
if (!_vptr_OpenFileMappingA) {
_vptr_OpenFileMappingA = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenFileMappingA");
}
asm("leave\njmp *%0" : : "r"(_vptr_OpenFileMappingA));
}

void _elf_OpenFileMappingW() asm("OpenFileMappingW");
void _elf_OpenFileMappingW() {
static void *_vptr_OpenFileMappingW = NULL;
load_dll_kernel32();
if (!_vptr_OpenFileMappingW) {
_vptr_OpenFileMappingW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenFileMappingW");
}
asm("leave\njmp *%0" : : "r"(_vptr_OpenFileMappingW));
}

void _elf_OpenJobObjectA() asm("OpenJobObjectA");
void _elf_OpenJobObjectA() {
static void *_vptr_OpenJobObjectA = NULL;
load_dll_kernel32();
if (!_vptr_OpenJobObjectA) {
_vptr_OpenJobObjectA = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenJobObjectA");
}
asm("leave\njmp *%0" : : "r"(_vptr_OpenJobObjectA));
}

void _elf_OpenJobObjectW() asm("OpenJobObjectW");
void _elf_OpenJobObjectW() {
static void *_vptr_OpenJobObjectW = NULL;
load_dll_kernel32();
if (!_vptr_OpenJobObjectW) {
_vptr_OpenJobObjectW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenJobObjectW");
}
asm("leave\njmp *%0" : : "r"(_vptr_OpenJobObjectW));
}

void _elf_OpenMutexA() asm("OpenMutexA");
void _elf_OpenMutexA() {
static void *_vptr_OpenMutexA = NULL;
load_dll_kernel32();
if (!_vptr_OpenMutexA) {
_vptr_OpenMutexA = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenMutexA");
}
asm("leave\njmp *%0" : : "r"(_vptr_OpenMutexA));
}

void _elf_OpenMutexW() asm("OpenMutexW");
void _elf_OpenMutexW() {
static void *_vptr_OpenMutexW = NULL;
load_dll_kernel32();
if (!_vptr_OpenMutexW) {
_vptr_OpenMutexW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenMutexW");
}
asm("leave\njmp *%0" : : "r"(_vptr_OpenMutexW));
}

void _elf_OpenProcess() asm("OpenProcess");
void _elf_OpenProcess() {
static void *_vptr_OpenProcess = NULL;
load_dll_kernel32();
if (!_vptr_OpenProcess) {
_vptr_OpenProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenProcess");
}
asm("leave\njmp *%0" : : "r"(_vptr_OpenProcess));
}

void _elf_OpenProfileUserMapping() asm("OpenProfileUserMapping");
void _elf_OpenProfileUserMapping() {
static void *_vptr_OpenProfileUserMapping = NULL;
load_dll_kernel32();
if (!_vptr_OpenProfileUserMapping) {
_vptr_OpenProfileUserMapping = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenProfileUserMapping");
}
asm("leave\njmp *%0" : : "r"(_vptr_OpenProfileUserMapping));
}

void _elf_OpenSemaphoreA() asm("OpenSemaphoreA");
void _elf_OpenSemaphoreA() {
static void *_vptr_OpenSemaphoreA = NULL;
load_dll_kernel32();
if (!_vptr_OpenSemaphoreA) {
_vptr_OpenSemaphoreA = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenSemaphoreA");
}
asm("leave\njmp *%0" : : "r"(_vptr_OpenSemaphoreA));
}

void _elf_OpenSemaphoreW() asm("OpenSemaphoreW");
void _elf_OpenSemaphoreW() {
static void *_vptr_OpenSemaphoreW = NULL;
load_dll_kernel32();
if (!_vptr_OpenSemaphoreW) {
_vptr_OpenSemaphoreW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenSemaphoreW");
}
asm("leave\njmp *%0" : : "r"(_vptr_OpenSemaphoreW));
}

void _elf_OpenThread() asm("OpenThread");
void _elf_OpenThread() {
static void *_vptr_OpenThread = NULL;
load_dll_kernel32();
if (!_vptr_OpenThread) {
_vptr_OpenThread = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenThread");
}
asm("leave\njmp *%0" : : "r"(_vptr_OpenThread));
}

void _elf_OpenWaitableTimerA() asm("OpenWaitableTimerA");
void _elf_OpenWaitableTimerA() {
static void *_vptr_OpenWaitableTimerA = NULL;
load_dll_kernel32();
if (!_vptr_OpenWaitableTimerA) {
_vptr_OpenWaitableTimerA = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenWaitableTimerA");
}
asm("leave\njmp *%0" : : "r"(_vptr_OpenWaitableTimerA));
}

void _elf_OpenWaitableTimerW() asm("OpenWaitableTimerW");
void _elf_OpenWaitableTimerW() {
static void *_vptr_OpenWaitableTimerW = NULL;
load_dll_kernel32();
if (!_vptr_OpenWaitableTimerW) {
_vptr_OpenWaitableTimerW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenWaitableTimerW");
}
asm("leave\njmp *%0" : : "r"(_vptr_OpenWaitableTimerW));
}

void _elf_OutputDebugStringA() asm("OutputDebugStringA");
void _elf_OutputDebugStringA() {
static void *_vptr_OutputDebugStringA = NULL;
load_dll_kernel32();
if (!_vptr_OutputDebugStringA) {
_vptr_OutputDebugStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "OutputDebugStringA");
}
asm("leave\njmp *%0" : : "r"(_vptr_OutputDebugStringA));
}

void _elf_OutputDebugStringW() asm("OutputDebugStringW");
void _elf_OutputDebugStringW() {
static void *_vptr_OutputDebugStringW = NULL;
load_dll_kernel32();
if (!_vptr_OutputDebugStringW) {
_vptr_OutputDebugStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "OutputDebugStringW");
}
asm("leave\njmp *%0" : : "r"(_vptr_OutputDebugStringW));
}

void _elf_PeekConsoleInputA() asm("PeekConsoleInputA");
void _elf_PeekConsoleInputA() {
static void *_vptr_PeekConsoleInputA = NULL;
load_dll_kernel32();
if (!_vptr_PeekConsoleInputA) {
_vptr_PeekConsoleInputA = (void *) _elf_GetProcAddress(_dll_kernel32, "PeekConsoleInputA");
}
asm("leave\njmp *%0" : : "r"(_vptr_PeekConsoleInputA));
}

void _elf_PeekConsoleInputW() asm("PeekConsoleInputW");
void _elf_PeekConsoleInputW() {
static void *_vptr_PeekConsoleInputW = NULL;
load_dll_kernel32();
if (!_vptr_PeekConsoleInputW) {
_vptr_PeekConsoleInputW = (void *) _elf_GetProcAddress(_dll_kernel32, "PeekConsoleInputW");
}
asm("leave\njmp *%0" : : "r"(_vptr_PeekConsoleInputW));
}

void _elf_PeekNamedPipe() asm("PeekNamedPipe");
void _elf_PeekNamedPipe() {
static void *_vptr_PeekNamedPipe = NULL;
load_dll_kernel32();
if (!_vptr_PeekNamedPipe) {
_vptr_PeekNamedPipe = (void *) _elf_GetProcAddress(_dll_kernel32, "PeekNamedPipe");
}
asm("leave\njmp *%0" : : "r"(_vptr_PeekNamedPipe));
}

void _elf_PostQueuedCompletionStatus() asm("PostQueuedCompletionStatus");
void _elf_PostQueuedCompletionStatus() {
static void *_vptr_PostQueuedCompletionStatus = NULL;
load_dll_kernel32();
if (!_vptr_PostQueuedCompletionStatus) {
_vptr_PostQueuedCompletionStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "PostQueuedCompletionStatus");
}
asm("leave\njmp *%0" : : "r"(_vptr_PostQueuedCompletionStatus));
}

void _elf_PrepareTape() asm("PrepareTape");
void _elf_PrepareTape() {
static void *_vptr_PrepareTape = NULL;
load_dll_kernel32();
if (!_vptr_PrepareTape) {
_vptr_PrepareTape = (void *) _elf_GetProcAddress(_dll_kernel32, "PrepareTape");
}
asm("leave\njmp *%0" : : "r"(_vptr_PrepareTape));
}

void _elf_PrivCopyFileExW() asm("PrivCopyFileExW");
void _elf_PrivCopyFileExW() {
static void *_vptr_PrivCopyFileExW = NULL;
load_dll_kernel32();
if (!_vptr_PrivCopyFileExW) {
_vptr_PrivCopyFileExW = (void *) _elf_GetProcAddress(_dll_kernel32, "PrivCopyFileExW");
}
asm("leave\njmp *%0" : : "r"(_vptr_PrivCopyFileExW));
}

void _elf_PrivMoveFileIdentityW() asm("PrivMoveFileIdentityW");
void _elf_PrivMoveFileIdentityW() {
static void *_vptr_PrivMoveFileIdentityW = NULL;
load_dll_kernel32();
if (!_vptr_PrivMoveFileIdentityW) {
_vptr_PrivMoveFileIdentityW = (void *) _elf_GetProcAddress(_dll_kernel32, "PrivMoveFileIdentityW");
}
asm("leave\njmp *%0" : : "r"(_vptr_PrivMoveFileIdentityW));
}

void _elf_Process32First() asm("Process32First");
void _elf_Process32First() {
static void *_vptr_Process32First = NULL;
load_dll_kernel32();
if (!_vptr_Process32First) {
_vptr_Process32First = (void *) _elf_GetProcAddress(_dll_kernel32, "Process32First");
}
asm("leave\njmp *%0" : : "r"(_vptr_Process32First));
}

void _elf_Process32FirstW() asm("Process32FirstW");
void _elf_Process32FirstW() {
static void *_vptr_Process32FirstW = NULL;
load_dll_kernel32();
if (!_vptr_Process32FirstW) {
_vptr_Process32FirstW = (void *) _elf_GetProcAddress(_dll_kernel32, "Process32FirstW");
}
asm("leave\njmp *%0" : : "r"(_vptr_Process32FirstW));
}

void _elf_Process32Next() asm("Process32Next");
void _elf_Process32Next() {
static void *_vptr_Process32Next = NULL;
load_dll_kernel32();
if (!_vptr_Process32Next) {
_vptr_Process32Next = (void *) _elf_GetProcAddress(_dll_kernel32, "Process32Next");
}
asm("leave\njmp *%0" : : "r"(_vptr_Process32Next));
}

void _elf_Process32NextW() asm("Process32NextW");
void _elf_Process32NextW() {
static void *_vptr_Process32NextW = NULL;
load_dll_kernel32();
if (!_vptr_Process32NextW) {
_vptr_Process32NextW = (void *) _elf_GetProcAddress(_dll_kernel32, "Process32NextW");
}
asm("leave\njmp *%0" : : "r"(_vptr_Process32NextW));
}

void _elf_ProcessIdToSessionId() asm("ProcessIdToSessionId");
void _elf_ProcessIdToSessionId() {
static void *_vptr_ProcessIdToSessionId = NULL;
load_dll_kernel32();
if (!_vptr_ProcessIdToSessionId) {
_vptr_ProcessIdToSessionId = (void *) _elf_GetProcAddress(_dll_kernel32, "ProcessIdToSessionId");
}
asm("leave\njmp *%0" : : "r"(_vptr_ProcessIdToSessionId));
}

void _elf_PulseEvent() asm("PulseEvent");
void _elf_PulseEvent() {
static void *_vptr_PulseEvent = NULL;
load_dll_kernel32();
if (!_vptr_PulseEvent) {
_vptr_PulseEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "PulseEvent");
}
asm("leave\njmp *%0" : : "r"(_vptr_PulseEvent));
}

void _elf_PurgeComm() asm("PurgeComm");
void _elf_PurgeComm() {
static void *_vptr_PurgeComm = NULL;
load_dll_kernel32();
if (!_vptr_PurgeComm) {
_vptr_PurgeComm = (void *) _elf_GetProcAddress(_dll_kernel32, "PurgeComm");
}
asm("leave\njmp *%0" : : "r"(_vptr_PurgeComm));
}

void _elf_QueryActCtxW() asm("QueryActCtxW");
void _elf_QueryActCtxW() {
static void *_vptr_QueryActCtxW = NULL;
load_dll_kernel32();
if (!_vptr_QueryActCtxW) {
_vptr_QueryActCtxW = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryActCtxW");
}
asm("leave\njmp *%0" : : "r"(_vptr_QueryActCtxW));
}

void _elf_QueryDepthSList() asm("QueryDepthSList");
void _elf_QueryDepthSList() {
static void *_vptr_QueryDepthSList = NULL;
load_dll_kernel32();
if (!_vptr_QueryDepthSList) {
_vptr_QueryDepthSList = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryDepthSList");
}
asm("leave\njmp *%0" : : "r"(_vptr_QueryDepthSList));
}

void _elf_QueryDosDeviceA() asm("QueryDosDeviceA");
void _elf_QueryDosDeviceA() {
static void *_vptr_QueryDosDeviceA = NULL;
load_dll_kernel32();
if (!_vptr_QueryDosDeviceA) {
_vptr_QueryDosDeviceA = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryDosDeviceA");
}
asm("leave\njmp *%0" : : "r"(_vptr_QueryDosDeviceA));
}

void _elf_QueryDosDeviceW() asm("QueryDosDeviceW");
void _elf_QueryDosDeviceW() {
static void *_vptr_QueryDosDeviceW = NULL;
load_dll_kernel32();
if (!_vptr_QueryDosDeviceW) {
_vptr_QueryDosDeviceW = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryDosDeviceW");
}
asm("leave\njmp *%0" : : "r"(_vptr_QueryDosDeviceW));
}

void _elf_QueryInformationJobObject() asm("QueryInformationJobObject");
void _elf_QueryInformationJobObject() {
static void *_vptr_QueryInformationJobObject = NULL;
load_dll_kernel32();
if (!_vptr_QueryInformationJobObject) {
_vptr_QueryInformationJobObject = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryInformationJobObject");
}
asm("leave\njmp *%0" : : "r"(_vptr_QueryInformationJobObject));
}

void _elf_QueryMemoryResourceNotification() asm("QueryMemoryResourceNotification");
void _elf_QueryMemoryResourceNotification() {
static void *_vptr_QueryMemoryResourceNotification = NULL;
load_dll_kernel32();
if (!_vptr_QueryMemoryResourceNotification) {
_vptr_QueryMemoryResourceNotification = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryMemoryResourceNotification");
}
asm("leave\njmp *%0" : : "r"(_vptr_QueryMemoryResourceNotification));
}

void _elf_QueryPerformanceCounter() asm("QueryPerformanceCounter");
void _elf_QueryPerformanceCounter() {
static void *_vptr_QueryPerformanceCounter = NULL;
load_dll_kernel32();
if (!_vptr_QueryPerformanceCounter) {
_vptr_QueryPerformanceCounter = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryPerformanceCounter");
}
asm("leave\njmp *%0" : : "r"(_vptr_QueryPerformanceCounter));
}

void _elf_QueryPerformanceFrequency() asm("QueryPerformanceFrequency");
void _elf_QueryPerformanceFrequency() {
static void *_vptr_QueryPerformanceFrequency = NULL;
load_dll_kernel32();
if (!_vptr_QueryPerformanceFrequency) {
_vptr_QueryPerformanceFrequency = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryPerformanceFrequency");
}
asm("leave\njmp *%0" : : "r"(_vptr_QueryPerformanceFrequency));
}

void _elf_QueryWin31IniFilesMappedToRegistry() asm("QueryWin31IniFilesMappedToRegistry");
void _elf_QueryWin31IniFilesMappedToRegistry() {
static void *_vptr_QueryWin31IniFilesMappedToRegistry = NULL;
load_dll_kernel32();
if (!_vptr_QueryWin31IniFilesMappedToRegistry) {
_vptr_QueryWin31IniFilesMappedToRegistry = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryWin31IniFilesMappedToRegistry");
}
asm("leave\njmp *%0" : : "r"(_vptr_QueryWin31IniFilesMappedToRegistry));
}

void _elf_QueueUserAPC() asm("QueueUserAPC");
void _elf_QueueUserAPC() {
static void *_vptr_QueueUserAPC = NULL;
load_dll_kernel32();
if (!_vptr_QueueUserAPC) {
_vptr_QueueUserAPC = (void *) _elf_GetProcAddress(_dll_kernel32, "QueueUserAPC");
}
asm("leave\njmp *%0" : : "r"(_vptr_QueueUserAPC));
}

void _elf_QueueUserWorkItem() asm("QueueUserWorkItem");
void _elf_QueueUserWorkItem() {
static void *_vptr_QueueUserWorkItem = NULL;
load_dll_kernel32();
if (!_vptr_QueueUserWorkItem) {
_vptr_QueueUserWorkItem = (void *) _elf_GetProcAddress(_dll_kernel32, "QueueUserWorkItem");
}
asm("leave\njmp *%0" : : "r"(_vptr_QueueUserWorkItem));
}

void _elf_RaiseException() asm("RaiseException");
void _elf_RaiseException() {
static void *_vptr_RaiseException = NULL;
load_dll_kernel32();
if (!_vptr_RaiseException) {
_vptr_RaiseException = (void *) _elf_GetProcAddress(_dll_kernel32, "RaiseException");
}
asm("leave\njmp *%0" : : "r"(_vptr_RaiseException));
}

void _elf_ReadConsoleA() asm("ReadConsoleA");
void _elf_ReadConsoleA() {
static void *_vptr_ReadConsoleA = NULL;
load_dll_kernel32();
if (!_vptr_ReadConsoleA) {
_vptr_ReadConsoleA = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleA");
}
asm("leave\njmp *%0" : : "r"(_vptr_ReadConsoleA));
}

void _elf_ReadConsoleInputA() asm("ReadConsoleInputA");
void _elf_ReadConsoleInputA() {
static void *_vptr_ReadConsoleInputA = NULL;
load_dll_kernel32();
if (!_vptr_ReadConsoleInputA) {
_vptr_ReadConsoleInputA = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleInputA");
}
asm("leave\njmp *%0" : : "r"(_vptr_ReadConsoleInputA));
}

void _elf_ReadConsoleInputExA() asm("ReadConsoleInputExA");
void _elf_ReadConsoleInputExA() {
static void *_vptr_ReadConsoleInputExA = NULL;
load_dll_kernel32();
if (!_vptr_ReadConsoleInputExA) {
_vptr_ReadConsoleInputExA = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleInputExA");
}
asm("leave\njmp *%0" : : "r"(_vptr_ReadConsoleInputExA));
}

void _elf_ReadConsoleInputExW() asm("ReadConsoleInputExW");
void _elf_ReadConsoleInputExW() {
static void *_vptr_ReadConsoleInputExW = NULL;
load_dll_kernel32();
if (!_vptr_ReadConsoleInputExW) {
_vptr_ReadConsoleInputExW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleInputExW");
}
asm("leave\njmp *%0" : : "r"(_vptr_ReadConsoleInputExW));
}

void _elf_ReadConsoleInputW() asm("ReadConsoleInputW");
void _elf_ReadConsoleInputW() {
static void *_vptr_ReadConsoleInputW = NULL;
load_dll_kernel32();
if (!_vptr_ReadConsoleInputW) {
_vptr_ReadConsoleInputW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleInputW");
}
asm("leave\njmp *%0" : : "r"(_vptr_ReadConsoleInputW));
}

void _elf_ReadConsoleOutputA() asm("ReadConsoleOutputA");
void _elf_ReadConsoleOutputA() {
static void *_vptr_ReadConsoleOutputA = NULL;
load_dll_kernel32();
if (!_vptr_ReadConsoleOutputA) {
_vptr_ReadConsoleOutputA = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleOutputA");
}
asm("leave\njmp *%0" : : "r"(_vptr_ReadConsoleOutputA));
}

void _elf_ReadConsoleOutputAttribute() asm("ReadConsoleOutputAttribute");
void _elf_ReadConsoleOutputAttribute() {
static void *_vptr_ReadConsoleOutputAttribute = NULL;
load_dll_kernel32();
if (!_vptr_ReadConsoleOutputAttribute) {
_vptr_ReadConsoleOutputAttribute = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleOutputAttribute");
}
asm("leave\njmp *%0" : : "r"(_vptr_ReadConsoleOutputAttribute));
}

void _elf_ReadConsoleOutputCharacterA() asm("ReadConsoleOutputCharacterA");
void _elf_ReadConsoleOutputCharacterA() {
static void *_vptr_ReadConsoleOutputCharacterA = NULL;
load_dll_kernel32();
if (!_vptr_ReadConsoleOutputCharacterA) {
_vptr_ReadConsoleOutputCharacterA = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleOutputCharacterA");
}
asm("leave\njmp *%0" : : "r"(_vptr_ReadConsoleOutputCharacterA));
}

void _elf_ReadConsoleOutputCharacterW() asm("ReadConsoleOutputCharacterW");
void _elf_ReadConsoleOutputCharacterW() {
static void *_vptr_ReadConsoleOutputCharacterW = NULL;
load_dll_kernel32();
if (!_vptr_ReadConsoleOutputCharacterW) {
_vptr_ReadConsoleOutputCharacterW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleOutputCharacterW");
}
asm("leave\njmp *%0" : : "r"(_vptr_ReadConsoleOutputCharacterW));
}

void _elf_ReadConsoleOutputW() asm("ReadConsoleOutputW");
void _elf_ReadConsoleOutputW() {
static void *_vptr_ReadConsoleOutputW = NULL;
load_dll_kernel32();
if (!_vptr_ReadConsoleOutputW) {
_vptr_ReadConsoleOutputW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleOutputW");
}
asm("leave\njmp *%0" : : "r"(_vptr_ReadConsoleOutputW));
}

void _elf_ReadConsoleW() asm("ReadConsoleW");
void _elf_ReadConsoleW() {
static void *_vptr_ReadConsoleW = NULL;
load_dll_kernel32();
if (!_vptr_ReadConsoleW) {
_vptr_ReadConsoleW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleW");
}
asm("leave\njmp *%0" : : "r"(_vptr_ReadConsoleW));
}

void _elf_ReadDirectoryChangesW() asm("ReadDirectoryChangesW");
void _elf_ReadDirectoryChangesW() {
static void *_vptr_ReadDirectoryChangesW = NULL;
load_dll_kernel32();
if (!_vptr_ReadDirectoryChangesW) {
_vptr_ReadDirectoryChangesW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadDirectoryChangesW");
}
asm("leave\njmp *%0" : : "r"(_vptr_ReadDirectoryChangesW));
}

void _elf_ReadFile() asm("ReadFile");
void _elf_ReadFile() {
static void *_vptr_ReadFile = NULL;
load_dll_kernel32();
if (!_vptr_ReadFile) {
_vptr_ReadFile = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadFile");
}
asm("leave\njmp *%0" : : "r"(_vptr_ReadFile));
}

void _elf_ReadFileEx() asm("ReadFileEx");
void _elf_ReadFileEx() {
static void *_vptr_ReadFileEx = NULL;
load_dll_kernel32();
if (!_vptr_ReadFileEx) {
_vptr_ReadFileEx = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadFileEx");
}
asm("leave\njmp *%0" : : "r"(_vptr_ReadFileEx));
}

void _elf_ReadFileScatter() asm("ReadFileScatter");
void _elf_ReadFileScatter() {
static void *_vptr_ReadFileScatter = NULL;
load_dll_kernel32();
if (!_vptr_ReadFileScatter) {
_vptr_ReadFileScatter = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadFileScatter");
}
asm("leave\njmp *%0" : : "r"(_vptr_ReadFileScatter));
}

void _elf_ReadProcessMemory() asm("ReadProcessMemory");
void _elf_ReadProcessMemory() {
static void *_vptr_ReadProcessMemory = NULL;
load_dll_kernel32();
if (!_vptr_ReadProcessMemory) {
_vptr_ReadProcessMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadProcessMemory");
}
asm("leave\njmp *%0" : : "r"(_vptr_ReadProcessMemory));
}

void _elf_RegisterConsoleIME() asm("RegisterConsoleIME");
void _elf_RegisterConsoleIME() {
static void *_vptr_RegisterConsoleIME = NULL;
load_dll_kernel32();
if (!_vptr_RegisterConsoleIME) {
_vptr_RegisterConsoleIME = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterConsoleIME");
}
asm("leave\njmp *%0" : : "r"(_vptr_RegisterConsoleIME));
}

void _elf_RegisterConsoleOS2() asm("RegisterConsoleOS2");
void _elf_RegisterConsoleOS2() {
static void *_vptr_RegisterConsoleOS2 = NULL;
load_dll_kernel32();
if (!_vptr_RegisterConsoleOS2) {
_vptr_RegisterConsoleOS2 = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterConsoleOS2");
}
asm("leave\njmp *%0" : : "r"(_vptr_RegisterConsoleOS2));
}

void _elf_RegisterConsoleVDM() asm("RegisterConsoleVDM");
void _elf_RegisterConsoleVDM() {
static void *_vptr_RegisterConsoleVDM = NULL;
load_dll_kernel32();
if (!_vptr_RegisterConsoleVDM) {
_vptr_RegisterConsoleVDM = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterConsoleVDM");
}
asm("leave\njmp *%0" : : "r"(_vptr_RegisterConsoleVDM));
}

void _elf_RegisterWaitForInputIdle() asm("RegisterWaitForInputIdle");
void _elf_RegisterWaitForInputIdle() {
static void *_vptr_RegisterWaitForInputIdle = NULL;
load_dll_kernel32();
if (!_vptr_RegisterWaitForInputIdle) {
_vptr_RegisterWaitForInputIdle = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterWaitForInputIdle");
}
asm("leave\njmp *%0" : : "r"(_vptr_RegisterWaitForInputIdle));
}

void _elf_RegisterWaitForSingleObject() asm("RegisterWaitForSingleObject");
void _elf_RegisterWaitForSingleObject() {
static void *_vptr_RegisterWaitForSingleObject = NULL;
load_dll_kernel32();
if (!_vptr_RegisterWaitForSingleObject) {
_vptr_RegisterWaitForSingleObject = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterWaitForSingleObject");
}
asm("leave\njmp *%0" : : "r"(_vptr_RegisterWaitForSingleObject));
}

void _elf_RegisterWaitForSingleObjectEx() asm("RegisterWaitForSingleObjectEx");
void _elf_RegisterWaitForSingleObjectEx() {
static void *_vptr_RegisterWaitForSingleObjectEx = NULL;
load_dll_kernel32();
if (!_vptr_RegisterWaitForSingleObjectEx) {
_vptr_RegisterWaitForSingleObjectEx = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterWaitForSingleObjectEx");
}
asm("leave\njmp *%0" : : "r"(_vptr_RegisterWaitForSingleObjectEx));
}

void _elf_RegisterWowBaseHandlers() asm("RegisterWowBaseHandlers");
void _elf_RegisterWowBaseHandlers() {
static void *_vptr_RegisterWowBaseHandlers = NULL;
load_dll_kernel32();
if (!_vptr_RegisterWowBaseHandlers) {
_vptr_RegisterWowBaseHandlers = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterWowBaseHandlers");
}
asm("leave\njmp *%0" : : "r"(_vptr_RegisterWowBaseHandlers));
}

void _elf_RegisterWowExec() asm("RegisterWowExec");
void _elf_RegisterWowExec() {
static void *_vptr_RegisterWowExec = NULL;
load_dll_kernel32();
if (!_vptr_RegisterWowExec) {
_vptr_RegisterWowExec = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterWowExec");
}
asm("leave\njmp *%0" : : "r"(_vptr_RegisterWowExec));
}

void _elf_ReleaseActCtx() asm("ReleaseActCtx");
void _elf_ReleaseActCtx() {
static void *_vptr_ReleaseActCtx = NULL;
load_dll_kernel32();
if (!_vptr_ReleaseActCtx) {
_vptr_ReleaseActCtx = (void *) _elf_GetProcAddress(_dll_kernel32, "ReleaseActCtx");
}
asm("leave\njmp *%0" : : "r"(_vptr_ReleaseActCtx));
}

void _elf_ReleaseMutex() asm("ReleaseMutex");
void _elf_ReleaseMutex() {
static void *_vptr_ReleaseMutex = NULL;
load_dll_kernel32();
if (!_vptr_ReleaseMutex) {
_vptr_ReleaseMutex = (void *) _elf_GetProcAddress(_dll_kernel32, "ReleaseMutex");
}
asm("leave\njmp *%0" : : "r"(_vptr_ReleaseMutex));
}

void _elf_ReleaseSemaphore() asm("ReleaseSemaphore");
void _elf_ReleaseSemaphore() {
static void *_vptr_ReleaseSemaphore = NULL;
load_dll_kernel32();
if (!_vptr_ReleaseSemaphore) {
_vptr_ReleaseSemaphore = (void *) _elf_GetProcAddress(_dll_kernel32, "ReleaseSemaphore");
}
asm("leave\njmp *%0" : : "r"(_vptr_ReleaseSemaphore));
}

void _elf_RemoveDirectoryA() asm("RemoveDirectoryA");
void _elf_RemoveDirectoryA() {
static void *_vptr_RemoveDirectoryA = NULL;
load_dll_kernel32();
if (!_vptr_RemoveDirectoryA) {
_vptr_RemoveDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "RemoveDirectoryA");
}
asm("leave\njmp *%0" : : "r"(_vptr_RemoveDirectoryA));
}

void _elf_RemoveDirectoryW() asm("RemoveDirectoryW");
void _elf_RemoveDirectoryW() {
static void *_vptr_RemoveDirectoryW = NULL;
load_dll_kernel32();
if (!_vptr_RemoveDirectoryW) {
_vptr_RemoveDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "RemoveDirectoryW");
}
asm("leave\njmp *%0" : : "r"(_vptr_RemoveDirectoryW));
}

void _elf_RemoveLocalAlternateComputerNameA() asm("RemoveLocalAlternateComputerNameA");
void _elf_RemoveLocalAlternateComputerNameA() {
static void *_vptr_RemoveLocalAlternateComputerNameA = NULL;
load_dll_kernel32();
if (!_vptr_RemoveLocalAlternateComputerNameA) {
_vptr_RemoveLocalAlternateComputerNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "RemoveLocalAlternateComputerNameA");
}
asm("leave\njmp *%0" : : "r"(_vptr_RemoveLocalAlternateComputerNameA));
}

void _elf_RemoveLocalAlternateComputerNameW() asm("RemoveLocalAlternateComputerNameW");
void _elf_RemoveLocalAlternateComputerNameW() {
static void *_vptr_RemoveLocalAlternateComputerNameW = NULL;
load_dll_kernel32();
if (!_vptr_RemoveLocalAlternateComputerNameW) {
_vptr_RemoveLocalAlternateComputerNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "RemoveLocalAlternateComputerNameW");
}
asm("leave\njmp *%0" : : "r"(_vptr_RemoveLocalAlternateComputerNameW));
}

void _elf_RemoveVectoredExceptionHandler() asm("RemoveVectoredExceptionHandler");
void _elf_RemoveVectoredExceptionHandler() {
static void *_vptr_RemoveVectoredExceptionHandler = NULL;
load_dll_kernel32();
if (!_vptr_RemoveVectoredExceptionHandler) {
_vptr_RemoveVectoredExceptionHandler = (void *) _elf_GetProcAddress(_dll_kernel32, "RemoveVectoredExceptionHandler");
}
asm("leave\njmp *%0" : : "r"(_vptr_RemoveVectoredExceptionHandler));
}

void _elf_ReplaceFile() asm("ReplaceFile");
void _elf_ReplaceFile() {
static void *_vptr_ReplaceFile = NULL;
load_dll_kernel32();
if (!_vptr_ReplaceFile) {
_vptr_ReplaceFile = (void *) _elf_GetProcAddress(_dll_kernel32, "ReplaceFile");
}
asm("leave\njmp *%0" : : "r"(_vptr_ReplaceFile));
}

void _elf_ReplaceFileA() asm("ReplaceFileA");
void _elf_ReplaceFileA() {
static void *_vptr_ReplaceFileA = NULL;
load_dll_kernel32();
if (!_vptr_ReplaceFileA) {
_vptr_ReplaceFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "ReplaceFileA");
}
asm("leave\njmp *%0" : : "r"(_vptr_ReplaceFileA));
}

void _elf_ReplaceFileW() asm("ReplaceFileW");
void _elf_ReplaceFileW() {
static void *_vptr_ReplaceFileW = NULL;
load_dll_kernel32();
if (!_vptr_ReplaceFileW) {
_vptr_ReplaceFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReplaceFileW");
}
asm("leave\njmp *%0" : : "r"(_vptr_ReplaceFileW));
}

void _elf_RequestDeviceWakeup() asm("RequestDeviceWakeup");
void _elf_RequestDeviceWakeup() {
static void *_vptr_RequestDeviceWakeup = NULL;
load_dll_kernel32();
if (!_vptr_RequestDeviceWakeup) {
_vptr_RequestDeviceWakeup = (void *) _elf_GetProcAddress(_dll_kernel32, "RequestDeviceWakeup");
}
asm("leave\njmp *%0" : : "r"(_vptr_RequestDeviceWakeup));
}

void _elf_RequestWakeupLatency() asm("RequestWakeupLatency");
void _elf_RequestWakeupLatency() {
static void *_vptr_RequestWakeupLatency = NULL;
load_dll_kernel32();
if (!_vptr_RequestWakeupLatency) {
_vptr_RequestWakeupLatency = (void *) _elf_GetProcAddress(_dll_kernel32, "RequestWakeupLatency");
}
asm("leave\njmp *%0" : : "r"(_vptr_RequestWakeupLatency));
}

void _elf_ResetEvent() asm("ResetEvent");
void _elf_ResetEvent() {
static void *_vptr_ResetEvent = NULL;
load_dll_kernel32();
if (!_vptr_ResetEvent) {
_vptr_ResetEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "ResetEvent");
}
asm("leave\njmp *%0" : : "r"(_vptr_ResetEvent));
}

void _elf_ResetWriteWatch() asm("ResetWriteWatch");
void _elf_ResetWriteWatch() {
static void *_vptr_ResetWriteWatch = NULL;
load_dll_kernel32();
if (!_vptr_ResetWriteWatch) {
_vptr_ResetWriteWatch = (void *) _elf_GetProcAddress(_dll_kernel32, "ResetWriteWatch");
}
asm("leave\njmp *%0" : : "r"(_vptr_ResetWriteWatch));
}

void _elf_RestoreLastError() asm("RestoreLastError");
void _elf_RestoreLastError() {
static void *_vptr_RestoreLastError = NULL;
load_dll_kernel32();
if (!_vptr_RestoreLastError) {
_vptr_RestoreLastError = (void *) _elf_GetProcAddress(_dll_kernel32, "RestoreLastError");
}
asm("leave\njmp *%0" : : "r"(_vptr_RestoreLastError));
}

void _elf_ResumeThread() asm("ResumeThread");
void _elf_ResumeThread() {
static void *_vptr_ResumeThread = NULL;
load_dll_kernel32();
if (!_vptr_ResumeThread) {
_vptr_ResumeThread = (void *) _elf_GetProcAddress(_dll_kernel32, "ResumeThread");
}
asm("leave\njmp *%0" : : "r"(_vptr_ResumeThread));
}

void _elf_RtlCaptureContext() asm("RtlCaptureContext");
void _elf_RtlCaptureContext() {
static void *_vptr_RtlCaptureContext = NULL;
load_dll_kernel32();
if (!_vptr_RtlCaptureContext) {
_vptr_RtlCaptureContext = (void *) _elf_GetProcAddress(_dll_kernel32, "RtlCaptureContext");
}
asm("leave\njmp *%0" : : "r"(_vptr_RtlCaptureContext));
}

void _elf_RtlCaptureStackBackTrace() asm("RtlCaptureStackBackTrace");
void _elf_RtlCaptureStackBackTrace() {
static void *_vptr_RtlCaptureStackBackTrace = NULL;
load_dll_kernel32();
if (!_vptr_RtlCaptureStackBackTrace) {
_vptr_RtlCaptureStackBackTrace = (void *) _elf_GetProcAddress(_dll_kernel32, "RtlCaptureStackBackTrace");
}
asm("leave\njmp *%0" : : "r"(_vptr_RtlCaptureStackBackTrace));
}

void _elf_RtlFillMemory() asm("RtlFillMemory");
void _elf_RtlFillMemory() {
static void *_vptr_RtlFillMemory = NULL;
load_dll_kernel32();
if (!_vptr_RtlFillMemory) {
_vptr_RtlFillMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "RtlFillMemory");
}
asm("leave\njmp *%0" : : "r"(_vptr_RtlFillMemory));
}

void _elf_RtlMoveMemory() asm("RtlMoveMemory");
void _elf_RtlMoveMemory() {
static void *_vptr_RtlMoveMemory = NULL;
load_dll_kernel32();
if (!_vptr_RtlMoveMemory) {
_vptr_RtlMoveMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "RtlMoveMemory");
}
asm("leave\njmp *%0" : : "r"(_vptr_RtlMoveMemory));
}

void _elf_RtlUnwind() asm("RtlUnwind");
void _elf_RtlUnwind() {
static void *_vptr_RtlUnwind = NULL;
load_dll_kernel32();
if (!_vptr_RtlUnwind) {
_vptr_RtlUnwind = (void *) _elf_GetProcAddress(_dll_kernel32, "RtlUnwind");
}
asm("leave\njmp *%0" : : "r"(_vptr_RtlUnwind));
}

void _elf_RtlZeroMemory() asm("RtlZeroMemory");
void _elf_RtlZeroMemory() {
static void *_vptr_RtlZeroMemory = NULL;
load_dll_kernel32();
if (!_vptr_RtlZeroMemory) {
_vptr_RtlZeroMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "RtlZeroMemory");
}
asm("leave\njmp *%0" : : "r"(_vptr_RtlZeroMemory));
}

void _elf_ScrollConsoleScreenBufferA() asm("ScrollConsoleScreenBufferA");
void _elf_ScrollConsoleScreenBufferA() {
static void *_vptr_ScrollConsoleScreenBufferA = NULL;
load_dll_kernel32();
if (!_vptr_ScrollConsoleScreenBufferA) {
_vptr_ScrollConsoleScreenBufferA = (void *) _elf_GetProcAddress(_dll_kernel32, "ScrollConsoleScreenBufferA");
}
asm("leave\njmp *%0" : : "r"(_vptr_ScrollConsoleScreenBufferA));
}

void _elf_ScrollConsoleScreenBufferW() asm("ScrollConsoleScreenBufferW");
void _elf_ScrollConsoleScreenBufferW() {
static void *_vptr_ScrollConsoleScreenBufferW = NULL;
load_dll_kernel32();
if (!_vptr_ScrollConsoleScreenBufferW) {
_vptr_ScrollConsoleScreenBufferW = (void *) _elf_GetProcAddress(_dll_kernel32, "ScrollConsoleScreenBufferW");
}
asm("leave\njmp *%0" : : "r"(_vptr_ScrollConsoleScreenBufferW));
}

void _elf_SearchPathA() asm("SearchPathA");
void _elf_SearchPathA() {
static void *_vptr_SearchPathA = NULL;
load_dll_kernel32();
if (!_vptr_SearchPathA) {
_vptr_SearchPathA = (void *) _elf_GetProcAddress(_dll_kernel32, "SearchPathA");
}
asm("leave\njmp *%0" : : "r"(_vptr_SearchPathA));
}

void _elf_SearchPathW() asm("SearchPathW");
void _elf_SearchPathW() {
static void *_vptr_SearchPathW = NULL;
load_dll_kernel32();
if (!_vptr_SearchPathW) {
_vptr_SearchPathW = (void *) _elf_GetProcAddress(_dll_kernel32, "SearchPathW");
}
asm("leave\njmp *%0" : : "r"(_vptr_SearchPathW));
}

void _elf_SetCPGlobal() asm("SetCPGlobal");
void _elf_SetCPGlobal() {
static void *_vptr_SetCPGlobal = NULL;
load_dll_kernel32();
if (!_vptr_SetCPGlobal) {
_vptr_SetCPGlobal = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCPGlobal");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetCPGlobal));
}

void _elf_SetCalendarInfoA() asm("SetCalendarInfoA");
void _elf_SetCalendarInfoA() {
static void *_vptr_SetCalendarInfoA = NULL;
load_dll_kernel32();
if (!_vptr_SetCalendarInfoA) {
_vptr_SetCalendarInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCalendarInfoA");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetCalendarInfoA));
}

void _elf_SetCalendarInfoW() asm("SetCalendarInfoW");
void _elf_SetCalendarInfoW() {
static void *_vptr_SetCalendarInfoW = NULL;
load_dll_kernel32();
if (!_vptr_SetCalendarInfoW) {
_vptr_SetCalendarInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCalendarInfoW");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetCalendarInfoW));
}

void _elf_SetClientTimeZoneInformation() asm("SetClientTimeZoneInformation");
void _elf_SetClientTimeZoneInformation() {
static void *_vptr_SetClientTimeZoneInformation = NULL;
load_dll_kernel32();
if (!_vptr_SetClientTimeZoneInformation) {
_vptr_SetClientTimeZoneInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "SetClientTimeZoneInformation");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetClientTimeZoneInformation));
}

void _elf_SetComPlusPackageInstallStatus() asm("SetComPlusPackageInstallStatus");
void _elf_SetComPlusPackageInstallStatus() {
static void *_vptr_SetComPlusPackageInstallStatus = NULL;
load_dll_kernel32();
if (!_vptr_SetComPlusPackageInstallStatus) {
_vptr_SetComPlusPackageInstallStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "SetComPlusPackageInstallStatus");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetComPlusPackageInstallStatus));
}

void _elf_SetCommBreak() asm("SetCommBreak");
void _elf_SetCommBreak() {
static void *_vptr_SetCommBreak = NULL;
load_dll_kernel32();
if (!_vptr_SetCommBreak) {
_vptr_SetCommBreak = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCommBreak");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetCommBreak));
}

void _elf_SetCommConfig() asm("SetCommConfig");
void _elf_SetCommConfig() {
static void *_vptr_SetCommConfig = NULL;
load_dll_kernel32();
if (!_vptr_SetCommConfig) {
_vptr_SetCommConfig = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCommConfig");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetCommConfig));
}

void _elf_SetCommMask() asm("SetCommMask");
void _elf_SetCommMask() {
static void *_vptr_SetCommMask = NULL;
load_dll_kernel32();
if (!_vptr_SetCommMask) {
_vptr_SetCommMask = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCommMask");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetCommMask));
}

void _elf_SetCommState() asm("SetCommState");
void _elf_SetCommState() {
static void *_vptr_SetCommState = NULL;
load_dll_kernel32();
if (!_vptr_SetCommState) {
_vptr_SetCommState = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCommState");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetCommState));
}

void _elf_SetCommTimeouts() asm("SetCommTimeouts");
void _elf_SetCommTimeouts() {
static void *_vptr_SetCommTimeouts = NULL;
load_dll_kernel32();
if (!_vptr_SetCommTimeouts) {
_vptr_SetCommTimeouts = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCommTimeouts");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetCommTimeouts));
}

void _elf_SetComputerNameA() asm("SetComputerNameA");
void _elf_SetComputerNameA() {
static void *_vptr_SetComputerNameA = NULL;
load_dll_kernel32();
if (!_vptr_SetComputerNameA) {
_vptr_SetComputerNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetComputerNameA");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetComputerNameA));
}

void _elf_SetComputerNameExA() asm("SetComputerNameExA");
void _elf_SetComputerNameExA() {
static void *_vptr_SetComputerNameExA = NULL;
load_dll_kernel32();
if (!_vptr_SetComputerNameExA) {
_vptr_SetComputerNameExA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetComputerNameExA");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetComputerNameExA));
}

void _elf_SetComputerNameExW() asm("SetComputerNameExW");
void _elf_SetComputerNameExW() {
static void *_vptr_SetComputerNameExW = NULL;
load_dll_kernel32();
if (!_vptr_SetComputerNameExW) {
_vptr_SetComputerNameExW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetComputerNameExW");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetComputerNameExW));
}

void _elf_SetComputerNameW() asm("SetComputerNameW");
void _elf_SetComputerNameW() {
static void *_vptr_SetComputerNameW = NULL;
load_dll_kernel32();
if (!_vptr_SetComputerNameW) {
_vptr_SetComputerNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetComputerNameW");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetComputerNameW));
}

void _elf_SetConsoleActiveScreenBuffer() asm("SetConsoleActiveScreenBuffer");
void _elf_SetConsoleActiveScreenBuffer() {
static void *_vptr_SetConsoleActiveScreenBuffer = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleActiveScreenBuffer) {
_vptr_SetConsoleActiveScreenBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleActiveScreenBuffer");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleActiveScreenBuffer));
}

void _elf_SetConsoleCP() asm("SetConsoleCP");
void _elf_SetConsoleCP() {
static void *_vptr_SetConsoleCP = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleCP) {
_vptr_SetConsoleCP = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCP");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleCP));
}

void _elf_SetConsoleCommandHistoryMode() asm("SetConsoleCommandHistoryMode");
void _elf_SetConsoleCommandHistoryMode() {
static void *_vptr_SetConsoleCommandHistoryMode = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleCommandHistoryMode) {
_vptr_SetConsoleCommandHistoryMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCommandHistoryMode");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleCommandHistoryMode));
}

void _elf_SetConsoleCtrlHandler() asm("SetConsoleCtrlHandler");
void _elf_SetConsoleCtrlHandler() {
static void *_vptr_SetConsoleCtrlHandler = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleCtrlHandler) {
_vptr_SetConsoleCtrlHandler = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCtrlHandler");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleCtrlHandler));
}

void _elf_SetConsoleCursor() asm("SetConsoleCursor");
void _elf_SetConsoleCursor() {
static void *_vptr_SetConsoleCursor = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleCursor) {
_vptr_SetConsoleCursor = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCursor");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleCursor));
}

void _elf_SetConsoleCursorInfo() asm("SetConsoleCursorInfo");
void _elf_SetConsoleCursorInfo() {
static void *_vptr_SetConsoleCursorInfo = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleCursorInfo) {
_vptr_SetConsoleCursorInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCursorInfo");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleCursorInfo));
}

void _elf_SetConsoleCursorMode() asm("SetConsoleCursorMode");
void _elf_SetConsoleCursorMode() {
static void *_vptr_SetConsoleCursorMode = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleCursorMode) {
_vptr_SetConsoleCursorMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCursorMode");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleCursorMode));
}

void _elf_SetConsoleCursorPosition() asm("SetConsoleCursorPosition");
void _elf_SetConsoleCursorPosition() {
static void *_vptr_SetConsoleCursorPosition = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleCursorPosition) {
_vptr_SetConsoleCursorPosition = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCursorPosition");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleCursorPosition));
}

void _elf_SetConsoleDisplayMode() asm("SetConsoleDisplayMode");
void _elf_SetConsoleDisplayMode() {
static void *_vptr_SetConsoleDisplayMode = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleDisplayMode) {
_vptr_SetConsoleDisplayMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleDisplayMode");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleDisplayMode));
}

void _elf_SetConsoleFont() asm("SetConsoleFont");
void _elf_SetConsoleFont() {
static void *_vptr_SetConsoleFont = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleFont) {
_vptr_SetConsoleFont = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleFont");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleFont));
}

void _elf_SetConsoleHardwareState() asm("SetConsoleHardwareState");
void _elf_SetConsoleHardwareState() {
static void *_vptr_SetConsoleHardwareState = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleHardwareState) {
_vptr_SetConsoleHardwareState = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleHardwareState");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleHardwareState));
}

void _elf_SetConsoleIcon() asm("SetConsoleIcon");
void _elf_SetConsoleIcon() {
static void *_vptr_SetConsoleIcon = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleIcon) {
_vptr_SetConsoleIcon = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleIcon");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleIcon));
}

void _elf_SetConsoleInputExeNameA() asm("SetConsoleInputExeNameA");
void _elf_SetConsoleInputExeNameA() {
static void *_vptr_SetConsoleInputExeNameA = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleInputExeNameA) {
_vptr_SetConsoleInputExeNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleInputExeNameA");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleInputExeNameA));
}

void _elf_SetConsoleInputExeNameW() asm("SetConsoleInputExeNameW");
void _elf_SetConsoleInputExeNameW() {
static void *_vptr_SetConsoleInputExeNameW = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleInputExeNameW) {
_vptr_SetConsoleInputExeNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleInputExeNameW");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleInputExeNameW));
}

void _elf_SetConsoleKeyShortcuts() asm("SetConsoleKeyShortcuts");
void _elf_SetConsoleKeyShortcuts() {
static void *_vptr_SetConsoleKeyShortcuts = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleKeyShortcuts) {
_vptr_SetConsoleKeyShortcuts = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleKeyShortcuts");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleKeyShortcuts));
}

void _elf_SetConsoleLocalEUDC() asm("SetConsoleLocalEUDC");
void _elf_SetConsoleLocalEUDC() {
static void *_vptr_SetConsoleLocalEUDC = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleLocalEUDC) {
_vptr_SetConsoleLocalEUDC = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleLocalEUDC");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleLocalEUDC));
}

void _elf_SetConsoleMaximumWindowSize() asm("SetConsoleMaximumWindowSize");
void _elf_SetConsoleMaximumWindowSize() {
static void *_vptr_SetConsoleMaximumWindowSize = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleMaximumWindowSize) {
_vptr_SetConsoleMaximumWindowSize = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleMaximumWindowSize");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleMaximumWindowSize));
}

void _elf_SetConsoleMenuClose() asm("SetConsoleMenuClose");
void _elf_SetConsoleMenuClose() {
static void *_vptr_SetConsoleMenuClose = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleMenuClose) {
_vptr_SetConsoleMenuClose = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleMenuClose");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleMenuClose));
}

void _elf_SetConsoleMode() asm("SetConsoleMode");
void _elf_SetConsoleMode() {
static void *_vptr_SetConsoleMode = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleMode) {
_vptr_SetConsoleMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleMode");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleMode));
}

void _elf_SetConsoleNlsMode() asm("SetConsoleNlsMode");
void _elf_SetConsoleNlsMode() {
static void *_vptr_SetConsoleNlsMode = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleNlsMode) {
_vptr_SetConsoleNlsMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleNlsMode");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleNlsMode));
}

void _elf_SetConsoleNumberOfCommandsA() asm("SetConsoleNumberOfCommandsA");
void _elf_SetConsoleNumberOfCommandsA() {
static void *_vptr_SetConsoleNumberOfCommandsA = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleNumberOfCommandsA) {
_vptr_SetConsoleNumberOfCommandsA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleNumberOfCommandsA");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleNumberOfCommandsA));
}

void _elf_SetConsoleNumberOfCommandsW() asm("SetConsoleNumberOfCommandsW");
void _elf_SetConsoleNumberOfCommandsW() {
static void *_vptr_SetConsoleNumberOfCommandsW = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleNumberOfCommandsW) {
_vptr_SetConsoleNumberOfCommandsW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleNumberOfCommandsW");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleNumberOfCommandsW));
}

void _elf_SetConsoleOS2OemFormat() asm("SetConsoleOS2OemFormat");
void _elf_SetConsoleOS2OemFormat() {
static void *_vptr_SetConsoleOS2OemFormat = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleOS2OemFormat) {
_vptr_SetConsoleOS2OemFormat = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleOS2OemFormat");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleOS2OemFormat));
}

void _elf_SetConsoleOutputCP() asm("SetConsoleOutputCP");
void _elf_SetConsoleOutputCP() {
static void *_vptr_SetConsoleOutputCP = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleOutputCP) {
_vptr_SetConsoleOutputCP = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleOutputCP");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleOutputCP));
}

void _elf_SetConsolePalette() asm("SetConsolePalette");
void _elf_SetConsolePalette() {
static void *_vptr_SetConsolePalette = NULL;
load_dll_kernel32();
if (!_vptr_SetConsolePalette) {
_vptr_SetConsolePalette = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsolePalette");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsolePalette));
}

void _elf_SetConsoleScreenBufferSize() asm("SetConsoleScreenBufferSize");
void _elf_SetConsoleScreenBufferSize() {
static void *_vptr_SetConsoleScreenBufferSize = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleScreenBufferSize) {
_vptr_SetConsoleScreenBufferSize = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleScreenBufferSize");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleScreenBufferSize));
}

void _elf_SetConsoleTextAttribute() asm("SetConsoleTextAttribute");
void _elf_SetConsoleTextAttribute() {
static void *_vptr_SetConsoleTextAttribute = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleTextAttribute) {
_vptr_SetConsoleTextAttribute = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleTextAttribute");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleTextAttribute));
}

void _elf_SetConsoleTitleA() asm("SetConsoleTitleA");
void _elf_SetConsoleTitleA() {
static void *_vptr_SetConsoleTitleA = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleTitleA) {
_vptr_SetConsoleTitleA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleTitleA");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleTitleA));
}

void _elf_SetConsoleTitleW() asm("SetConsoleTitleW");
void _elf_SetConsoleTitleW() {
static void *_vptr_SetConsoleTitleW = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleTitleW) {
_vptr_SetConsoleTitleW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleTitleW");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleTitleW));
}

void _elf_SetConsoleWindowInfo() asm("SetConsoleWindowInfo");
void _elf_SetConsoleWindowInfo() {
static void *_vptr_SetConsoleWindowInfo = NULL;
load_dll_kernel32();
if (!_vptr_SetConsoleWindowInfo) {
_vptr_SetConsoleWindowInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleWindowInfo");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetConsoleWindowInfo));
}

void _elf_SetCriticalSectionSpinCount() asm("SetCriticalSectionSpinCount");
void _elf_SetCriticalSectionSpinCount() {
static void *_vptr_SetCriticalSectionSpinCount = NULL;
load_dll_kernel32();
if (!_vptr_SetCriticalSectionSpinCount) {
_vptr_SetCriticalSectionSpinCount = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCriticalSectionSpinCount");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetCriticalSectionSpinCount));
}

void _elf_SetCurrentDirectoryA() asm("SetCurrentDirectoryA");
void _elf_SetCurrentDirectoryA() {
static void *_vptr_SetCurrentDirectoryA = NULL;
load_dll_kernel32();
if (!_vptr_SetCurrentDirectoryA) {
_vptr_SetCurrentDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCurrentDirectoryA");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetCurrentDirectoryA));
}

void _elf_SetCurrentDirectoryW() asm("SetCurrentDirectoryW");
void _elf_SetCurrentDirectoryW() {
static void *_vptr_SetCurrentDirectoryW = NULL;
load_dll_kernel32();
if (!_vptr_SetCurrentDirectoryW) {
_vptr_SetCurrentDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCurrentDirectoryW");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetCurrentDirectoryW));
}

void _elf_SetDefaultCommConfigA() asm("SetDefaultCommConfigA");
void _elf_SetDefaultCommConfigA() {
static void *_vptr_SetDefaultCommConfigA = NULL;
load_dll_kernel32();
if (!_vptr_SetDefaultCommConfigA) {
_vptr_SetDefaultCommConfigA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetDefaultCommConfigA");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetDefaultCommConfigA));
}

void _elf_SetDefaultCommConfigW() asm("SetDefaultCommConfigW");
void _elf_SetDefaultCommConfigW() {
static void *_vptr_SetDefaultCommConfigW = NULL;
load_dll_kernel32();
if (!_vptr_SetDefaultCommConfigW) {
_vptr_SetDefaultCommConfigW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetDefaultCommConfigW");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetDefaultCommConfigW));
}

void _elf_SetDllDirectoryA() asm("SetDllDirectoryA");
void _elf_SetDllDirectoryA() {
static void *_vptr_SetDllDirectoryA = NULL;
load_dll_kernel32();
if (!_vptr_SetDllDirectoryA) {
_vptr_SetDllDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetDllDirectoryA");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetDllDirectoryA));
}

void _elf_SetDllDirectoryW() asm("SetDllDirectoryW");
void _elf_SetDllDirectoryW() {
static void *_vptr_SetDllDirectoryW = NULL;
load_dll_kernel32();
if (!_vptr_SetDllDirectoryW) {
_vptr_SetDllDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetDllDirectoryW");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetDllDirectoryW));
}

void _elf_SetEndOfFile() asm("SetEndOfFile");
void _elf_SetEndOfFile() {
static void *_vptr_SetEndOfFile = NULL;
load_dll_kernel32();
if (!_vptr_SetEndOfFile) {
_vptr_SetEndOfFile = (void *) _elf_GetProcAddress(_dll_kernel32, "SetEndOfFile");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetEndOfFile));
}

void _elf_SetEnvironmentVariableA() asm("SetEnvironmentVariableA");
void _elf_SetEnvironmentVariableA() {
static void *_vptr_SetEnvironmentVariableA = NULL;
load_dll_kernel32();
if (!_vptr_SetEnvironmentVariableA) {
_vptr_SetEnvironmentVariableA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetEnvironmentVariableA");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetEnvironmentVariableA));
}

void _elf_SetEnvironmentVariableW() asm("SetEnvironmentVariableW");
void _elf_SetEnvironmentVariableW() {
static void *_vptr_SetEnvironmentVariableW = NULL;
load_dll_kernel32();
if (!_vptr_SetEnvironmentVariableW) {
_vptr_SetEnvironmentVariableW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetEnvironmentVariableW");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetEnvironmentVariableW));
}

void _elf_SetErrorMode() asm("SetErrorMode");
void _elf_SetErrorMode() {
static void *_vptr_SetErrorMode = NULL;
load_dll_kernel32();
if (!_vptr_SetErrorMode) {
_vptr_SetErrorMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetErrorMode");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetErrorMode));
}

void _elf_SetEvent() asm("SetEvent");
void _elf_SetEvent() {
static void *_vptr_SetEvent = NULL;
load_dll_kernel32();
if (!_vptr_SetEvent) {
_vptr_SetEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "SetEvent");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetEvent));
}

void _elf_SetFileApisToANSI() asm("SetFileApisToANSI");
void _elf_SetFileApisToANSI() {
static void *_vptr_SetFileApisToANSI = NULL;
load_dll_kernel32();
if (!_vptr_SetFileApisToANSI) {
_vptr_SetFileApisToANSI = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileApisToANSI");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetFileApisToANSI));
}

void _elf_SetFileApisToOEM() asm("SetFileApisToOEM");
void _elf_SetFileApisToOEM() {
static void *_vptr_SetFileApisToOEM = NULL;
load_dll_kernel32();
if (!_vptr_SetFileApisToOEM) {
_vptr_SetFileApisToOEM = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileApisToOEM");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetFileApisToOEM));
}

void _elf_SetFileAttributesA() asm("SetFileAttributesA");
void _elf_SetFileAttributesA() {
static void *_vptr_SetFileAttributesA = NULL;
load_dll_kernel32();
if (!_vptr_SetFileAttributesA) {
_vptr_SetFileAttributesA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileAttributesA");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetFileAttributesA));
}

void _elf_SetFileAttributesW() asm("SetFileAttributesW");
void _elf_SetFileAttributesW() {
static void *_vptr_SetFileAttributesW = NULL;
load_dll_kernel32();
if (!_vptr_SetFileAttributesW) {
_vptr_SetFileAttributesW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileAttributesW");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetFileAttributesW));
}

void _elf_SetFilePointer() asm("SetFilePointer");
void _elf_SetFilePointer() {
static void *_vptr_SetFilePointer = NULL;
load_dll_kernel32();
if (!_vptr_SetFilePointer) {
_vptr_SetFilePointer = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFilePointer");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetFilePointer));
}

void _elf_SetFilePointerEx() asm("SetFilePointerEx");
void _elf_SetFilePointerEx() {
static void *_vptr_SetFilePointerEx = NULL;
load_dll_kernel32();
if (!_vptr_SetFilePointerEx) {
_vptr_SetFilePointerEx = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFilePointerEx");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetFilePointerEx));
}

void _elf_SetFileShortNameA() asm("SetFileShortNameA");
void _elf_SetFileShortNameA() {
static void *_vptr_SetFileShortNameA = NULL;
load_dll_kernel32();
if (!_vptr_SetFileShortNameA) {
_vptr_SetFileShortNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileShortNameA");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetFileShortNameA));
}

void _elf_SetFileShortNameW() asm("SetFileShortNameW");
void _elf_SetFileShortNameW() {
static void *_vptr_SetFileShortNameW = NULL;
load_dll_kernel32();
if (!_vptr_SetFileShortNameW) {
_vptr_SetFileShortNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileShortNameW");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetFileShortNameW));
}

void _elf_SetFileTime() asm("SetFileTime");
void _elf_SetFileTime() {
static void *_vptr_SetFileTime = NULL;
load_dll_kernel32();
if (!_vptr_SetFileTime) {
_vptr_SetFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileTime");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetFileTime));
}

void _elf_SetFileValidData() asm("SetFileValidData");
void _elf_SetFileValidData() {
static void *_vptr_SetFileValidData = NULL;
load_dll_kernel32();
if (!_vptr_SetFileValidData) {
_vptr_SetFileValidData = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileValidData");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetFileValidData));
}

void _elf_SetFirmwareEnvironmentVariableA() asm("SetFirmwareEnvironmentVariableA");
void _elf_SetFirmwareEnvironmentVariableA() {
static void *_vptr_SetFirmwareEnvironmentVariableA = NULL;
load_dll_kernel32();
if (!_vptr_SetFirmwareEnvironmentVariableA) {
_vptr_SetFirmwareEnvironmentVariableA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFirmwareEnvironmentVariableA");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetFirmwareEnvironmentVariableA));
}

void _elf_SetFirmwareEnvironmentVariableW() asm("SetFirmwareEnvironmentVariableW");
void _elf_SetFirmwareEnvironmentVariableW() {
static void *_vptr_SetFirmwareEnvironmentVariableW = NULL;
load_dll_kernel32();
if (!_vptr_SetFirmwareEnvironmentVariableW) {
_vptr_SetFirmwareEnvironmentVariableW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFirmwareEnvironmentVariableW");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetFirmwareEnvironmentVariableW));
}

void _elf_SetHandleContext() asm("SetHandleContext");
void _elf_SetHandleContext() {
static void *_vptr_SetHandleContext = NULL;
load_dll_kernel32();
if (!_vptr_SetHandleContext) {
_vptr_SetHandleContext = (void *) _elf_GetProcAddress(_dll_kernel32, "SetHandleContext");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetHandleContext));
}

void _elf_SetHandleCount() asm("SetHandleCount");
void _elf_SetHandleCount() {
static void *_vptr_SetHandleCount = NULL;
load_dll_kernel32();
if (!_vptr_SetHandleCount) {
_vptr_SetHandleCount = (void *) _elf_GetProcAddress(_dll_kernel32, "SetHandleCount");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetHandleCount));
}

void _elf_SetHandleInformation() asm("SetHandleInformation");
void _elf_SetHandleInformation() {
static void *_vptr_SetHandleInformation = NULL;
load_dll_kernel32();
if (!_vptr_SetHandleInformation) {
_vptr_SetHandleInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "SetHandleInformation");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetHandleInformation));
}

void _elf_SetInformationJobObject() asm("SetInformationJobObject");
void _elf_SetInformationJobObject() {
static void *_vptr_SetInformationJobObject = NULL;
load_dll_kernel32();
if (!_vptr_SetInformationJobObject) {
_vptr_SetInformationJobObject = (void *) _elf_GetProcAddress(_dll_kernel32, "SetInformationJobObject");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetInformationJobObject));
}

void _elf_SetLastConsoleEventActive() asm("SetLastConsoleEventActive");
void _elf_SetLastConsoleEventActive() {
static void *_vptr_SetLastConsoleEventActive = NULL;
load_dll_kernel32();
if (!_vptr_SetLastConsoleEventActive) {
_vptr_SetLastConsoleEventActive = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLastConsoleEventActive");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetLastConsoleEventActive));
}

void _elf_SetLastError() asm("SetLastError");
void _elf_SetLastError() {
static void *_vptr_SetLastError = NULL;
load_dll_kernel32();
if (!_vptr_SetLastError) {
_vptr_SetLastError = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLastError");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetLastError));
}

void _elf_SetLocalPrimaryComputerNameA() asm("SetLocalPrimaryComputerNameA");
void _elf_SetLocalPrimaryComputerNameA() {
static void *_vptr_SetLocalPrimaryComputerNameA = NULL;
load_dll_kernel32();
if (!_vptr_SetLocalPrimaryComputerNameA) {
_vptr_SetLocalPrimaryComputerNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLocalPrimaryComputerNameA");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetLocalPrimaryComputerNameA));
}

void _elf_SetLocalPrimaryComputerNameW() asm("SetLocalPrimaryComputerNameW");
void _elf_SetLocalPrimaryComputerNameW() {
static void *_vptr_SetLocalPrimaryComputerNameW = NULL;
load_dll_kernel32();
if (!_vptr_SetLocalPrimaryComputerNameW) {
_vptr_SetLocalPrimaryComputerNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLocalPrimaryComputerNameW");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetLocalPrimaryComputerNameW));
}

void _elf_SetLocalTime() asm("SetLocalTime");
void _elf_SetLocalTime() {
static void *_vptr_SetLocalTime = NULL;
load_dll_kernel32();
if (!_vptr_SetLocalTime) {
_vptr_SetLocalTime = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLocalTime");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetLocalTime));
}

void _elf_SetLocaleInfoA() asm("SetLocaleInfoA");
void _elf_SetLocaleInfoA() {
static void *_vptr_SetLocaleInfoA = NULL;
load_dll_kernel32();
if (!_vptr_SetLocaleInfoA) {
_vptr_SetLocaleInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLocaleInfoA");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetLocaleInfoA));
}

void _elf_SetLocaleInfoW() asm("SetLocaleInfoW");
void _elf_SetLocaleInfoW() {
static void *_vptr_SetLocaleInfoW = NULL;
load_dll_kernel32();
if (!_vptr_SetLocaleInfoW) {
_vptr_SetLocaleInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLocaleInfoW");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetLocaleInfoW));
}

void _elf_SetMailslotInfo() asm("SetMailslotInfo");
void _elf_SetMailslotInfo() {
static void *_vptr_SetMailslotInfo = NULL;
load_dll_kernel32();
if (!_vptr_SetMailslotInfo) {
_vptr_SetMailslotInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "SetMailslotInfo");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetMailslotInfo));
}

void _elf_SetMessageWaitingIndicator() asm("SetMessageWaitingIndicator");
void _elf_SetMessageWaitingIndicator() {
static void *_vptr_SetMessageWaitingIndicator = NULL;
load_dll_kernel32();
if (!_vptr_SetMessageWaitingIndicator) {
_vptr_SetMessageWaitingIndicator = (void *) _elf_GetProcAddress(_dll_kernel32, "SetMessageWaitingIndicator");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetMessageWaitingIndicator));
}

void _elf_SetNamedPipeHandleState() asm("SetNamedPipeHandleState");
void _elf_SetNamedPipeHandleState() {
static void *_vptr_SetNamedPipeHandleState = NULL;
load_dll_kernel32();
if (!_vptr_SetNamedPipeHandleState) {
_vptr_SetNamedPipeHandleState = (void *) _elf_GetProcAddress(_dll_kernel32, "SetNamedPipeHandleState");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetNamedPipeHandleState));
}

void _elf_SetPriorityClass() asm("SetPriorityClass");
void _elf_SetPriorityClass() {
static void *_vptr_SetPriorityClass = NULL;
load_dll_kernel32();
if (!_vptr_SetPriorityClass) {
_vptr_SetPriorityClass = (void *) _elf_GetProcAddress(_dll_kernel32, "SetPriorityClass");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetPriorityClass));
}

void _elf_SetProcessAffinityMask() asm("SetProcessAffinityMask");
void _elf_SetProcessAffinityMask() {
static void *_vptr_SetProcessAffinityMask = NULL;
load_dll_kernel32();
if (!_vptr_SetProcessAffinityMask) {
_vptr_SetProcessAffinityMask = (void *) _elf_GetProcAddress(_dll_kernel32, "SetProcessAffinityMask");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetProcessAffinityMask));
}

void _elf_SetProcessPriorityBoost() asm("SetProcessPriorityBoost");
void _elf_SetProcessPriorityBoost() {
static void *_vptr_SetProcessPriorityBoost = NULL;
load_dll_kernel32();
if (!_vptr_SetProcessPriorityBoost) {
_vptr_SetProcessPriorityBoost = (void *) _elf_GetProcAddress(_dll_kernel32, "SetProcessPriorityBoost");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetProcessPriorityBoost));
}

void _elf_SetProcessShutdownParameters() asm("SetProcessShutdownParameters");
void _elf_SetProcessShutdownParameters() {
static void *_vptr_SetProcessShutdownParameters = NULL;
load_dll_kernel32();
if (!_vptr_SetProcessShutdownParameters) {
_vptr_SetProcessShutdownParameters = (void *) _elf_GetProcAddress(_dll_kernel32, "SetProcessShutdownParameters");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetProcessShutdownParameters));
}

void _elf_SetProcessWorkingSetSize() asm("SetProcessWorkingSetSize");
void _elf_SetProcessWorkingSetSize() {
static void *_vptr_SetProcessWorkingSetSize = NULL;
load_dll_kernel32();
if (!_vptr_SetProcessWorkingSetSize) {
_vptr_SetProcessWorkingSetSize = (void *) _elf_GetProcAddress(_dll_kernel32, "SetProcessWorkingSetSize");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetProcessWorkingSetSize));
}

void _elf_SetStdHandle() asm("SetStdHandle");
void _elf_SetStdHandle() {
static void *_vptr_SetStdHandle = NULL;
load_dll_kernel32();
if (!_vptr_SetStdHandle) {
_vptr_SetStdHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "SetStdHandle");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetStdHandle));
}

void _elf_SetSystemPowerState() asm("SetSystemPowerState");
void _elf_SetSystemPowerState() {
static void *_vptr_SetSystemPowerState = NULL;
load_dll_kernel32();
if (!_vptr_SetSystemPowerState) {
_vptr_SetSystemPowerState = (void *) _elf_GetProcAddress(_dll_kernel32, "SetSystemPowerState");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetSystemPowerState));
}

void _elf_SetSystemTime() asm("SetSystemTime");
void _elf_SetSystemTime() {
static void *_vptr_SetSystemTime = NULL;
load_dll_kernel32();
if (!_vptr_SetSystemTime) {
_vptr_SetSystemTime = (void *) _elf_GetProcAddress(_dll_kernel32, "SetSystemTime");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetSystemTime));
}

void _elf_SetSystemTimeAdjustment() asm("SetSystemTimeAdjustment");
void _elf_SetSystemTimeAdjustment() {
static void *_vptr_SetSystemTimeAdjustment = NULL;
load_dll_kernel32();
if (!_vptr_SetSystemTimeAdjustment) {
_vptr_SetSystemTimeAdjustment = (void *) _elf_GetProcAddress(_dll_kernel32, "SetSystemTimeAdjustment");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetSystemTimeAdjustment));
}

void _elf_SetTapeParameters() asm("SetTapeParameters");
void _elf_SetTapeParameters() {
static void *_vptr_SetTapeParameters = NULL;
load_dll_kernel32();
if (!_vptr_SetTapeParameters) {
_vptr_SetTapeParameters = (void *) _elf_GetProcAddress(_dll_kernel32, "SetTapeParameters");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetTapeParameters));
}

void _elf_SetTapePosition() asm("SetTapePosition");
void _elf_SetTapePosition() {
static void *_vptr_SetTapePosition = NULL;
load_dll_kernel32();
if (!_vptr_SetTapePosition) {
_vptr_SetTapePosition = (void *) _elf_GetProcAddress(_dll_kernel32, "SetTapePosition");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetTapePosition));
}

void _elf_SetTermsrvAppInstallMode() asm("SetTermsrvAppInstallMode");
void _elf_SetTermsrvAppInstallMode() {
static void *_vptr_SetTermsrvAppInstallMode = NULL;
load_dll_kernel32();
if (!_vptr_SetTermsrvAppInstallMode) {
_vptr_SetTermsrvAppInstallMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetTermsrvAppInstallMode");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetTermsrvAppInstallMode));
}

void _elf_SetThreadAffinityMask() asm("SetThreadAffinityMask");
void _elf_SetThreadAffinityMask() {
static void *_vptr_SetThreadAffinityMask = NULL;
load_dll_kernel32();
if (!_vptr_SetThreadAffinityMask) {
_vptr_SetThreadAffinityMask = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadAffinityMask");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetThreadAffinityMask));
}

void _elf_SetThreadContext() asm("SetThreadContext");
void _elf_SetThreadContext() {
static void *_vptr_SetThreadContext = NULL;
load_dll_kernel32();
if (!_vptr_SetThreadContext) {
_vptr_SetThreadContext = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadContext");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetThreadContext));
}

void _elf_SetThreadExecutionState() asm("SetThreadExecutionState");
void _elf_SetThreadExecutionState() {
static void *_vptr_SetThreadExecutionState = NULL;
load_dll_kernel32();
if (!_vptr_SetThreadExecutionState) {
_vptr_SetThreadExecutionState = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadExecutionState");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetThreadExecutionState));
}

void _elf_SetThreadIdealProcessor() asm("SetThreadIdealProcessor");
void _elf_SetThreadIdealProcessor() {
static void *_vptr_SetThreadIdealProcessor = NULL;
load_dll_kernel32();
if (!_vptr_SetThreadIdealProcessor) {
_vptr_SetThreadIdealProcessor = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadIdealProcessor");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetThreadIdealProcessor));
}

void _elf_SetThreadLocale() asm("SetThreadLocale");
void _elf_SetThreadLocale() {
static void *_vptr_SetThreadLocale = NULL;
load_dll_kernel32();
if (!_vptr_SetThreadLocale) {
_vptr_SetThreadLocale = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadLocale");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetThreadLocale));
}

void _elf_SetThreadPriority() asm("SetThreadPriority");
void _elf_SetThreadPriority() {
static void *_vptr_SetThreadPriority = NULL;
load_dll_kernel32();
if (!_vptr_SetThreadPriority) {
_vptr_SetThreadPriority = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadPriority");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetThreadPriority));
}

void _elf_SetThreadPriorityBoost() asm("SetThreadPriorityBoost");
void _elf_SetThreadPriorityBoost() {
static void *_vptr_SetThreadPriorityBoost = NULL;
load_dll_kernel32();
if (!_vptr_SetThreadPriorityBoost) {
_vptr_SetThreadPriorityBoost = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadPriorityBoost");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetThreadPriorityBoost));
}

void _elf_SetThreadUILanguage() asm("SetThreadUILanguage");
void _elf_SetThreadUILanguage() {
static void *_vptr_SetThreadUILanguage = NULL;
load_dll_kernel32();
if (!_vptr_SetThreadUILanguage) {
_vptr_SetThreadUILanguage = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadUILanguage");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetThreadUILanguage));
}

void _elf_SetTimeZoneInformation() asm("SetTimeZoneInformation");
void _elf_SetTimeZoneInformation() {
static void *_vptr_SetTimeZoneInformation = NULL;
load_dll_kernel32();
if (!_vptr_SetTimeZoneInformation) {
_vptr_SetTimeZoneInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "SetTimeZoneInformation");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetTimeZoneInformation));
}

void _elf_SetTimerQueueTimer() asm("SetTimerQueueTimer");
void _elf_SetTimerQueueTimer() {
static void *_vptr_SetTimerQueueTimer = NULL;
load_dll_kernel32();
if (!_vptr_SetTimerQueueTimer) {
_vptr_SetTimerQueueTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "SetTimerQueueTimer");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetTimerQueueTimer));
}

void _elf_SetUnhandledExceptionFilter() asm("SetUnhandledExceptionFilter");
void _elf_SetUnhandledExceptionFilter() {
static void *_vptr_SetUnhandledExceptionFilter = NULL;
load_dll_kernel32();
if (!_vptr_SetUnhandledExceptionFilter) {
_vptr_SetUnhandledExceptionFilter = (void *) _elf_GetProcAddress(_dll_kernel32, "SetUnhandledExceptionFilter");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetUnhandledExceptionFilter));
}

void _elf_SetUserGeoID() asm("SetUserGeoID");
void _elf_SetUserGeoID() {
static void *_vptr_SetUserGeoID = NULL;
load_dll_kernel32();
if (!_vptr_SetUserGeoID) {
_vptr_SetUserGeoID = (void *) _elf_GetProcAddress(_dll_kernel32, "SetUserGeoID");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetUserGeoID));
}

void _elf_SetVDMCurrentDirectories() asm("SetVDMCurrentDirectories");
void _elf_SetVDMCurrentDirectories() {
static void *_vptr_SetVDMCurrentDirectories = NULL;
load_dll_kernel32();
if (!_vptr_SetVDMCurrentDirectories) {
_vptr_SetVDMCurrentDirectories = (void *) _elf_GetProcAddress(_dll_kernel32, "SetVDMCurrentDirectories");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetVDMCurrentDirectories));
}

void _elf_SetVolumeLabelA() asm("SetVolumeLabelA");
void _elf_SetVolumeLabelA() {
static void *_vptr_SetVolumeLabelA = NULL;
load_dll_kernel32();
if (!_vptr_SetVolumeLabelA) {
_vptr_SetVolumeLabelA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetVolumeLabelA");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetVolumeLabelA));
}

void _elf_SetVolumeLabelW() asm("SetVolumeLabelW");
void _elf_SetVolumeLabelW() {
static void *_vptr_SetVolumeLabelW = NULL;
load_dll_kernel32();
if (!_vptr_SetVolumeLabelW) {
_vptr_SetVolumeLabelW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetVolumeLabelW");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetVolumeLabelW));
}

void _elf_SetVolumeMountPointA() asm("SetVolumeMountPointA");
void _elf_SetVolumeMountPointA() {
static void *_vptr_SetVolumeMountPointA = NULL;
load_dll_kernel32();
if (!_vptr_SetVolumeMountPointA) {
_vptr_SetVolumeMountPointA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetVolumeMountPointA");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetVolumeMountPointA));
}

void _elf_SetVolumeMountPointW() asm("SetVolumeMountPointW");
void _elf_SetVolumeMountPointW() {
static void *_vptr_SetVolumeMountPointW = NULL;
load_dll_kernel32();
if (!_vptr_SetVolumeMountPointW) {
_vptr_SetVolumeMountPointW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetVolumeMountPointW");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetVolumeMountPointW));
}

void _elf_SetWaitableTimer() asm("SetWaitableTimer");
void _elf_SetWaitableTimer() {
static void *_vptr_SetWaitableTimer = NULL;
load_dll_kernel32();
if (!_vptr_SetWaitableTimer) {
_vptr_SetWaitableTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "SetWaitableTimer");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetWaitableTimer));
}

void _elf_SetupComm() asm("SetupComm");
void _elf_SetupComm() {
static void *_vptr_SetupComm = NULL;
load_dll_kernel32();
if (!_vptr_SetupComm) {
_vptr_SetupComm = (void *) _elf_GetProcAddress(_dll_kernel32, "SetupComm");
}
asm("leave\njmp *%0" : : "r"(_vptr_SetupComm));
}

void _elf_ShowConsoleCursor() asm("ShowConsoleCursor");
void _elf_ShowConsoleCursor() {
static void *_vptr_ShowConsoleCursor = NULL;
load_dll_kernel32();
if (!_vptr_ShowConsoleCursor) {
_vptr_ShowConsoleCursor = (void *) _elf_GetProcAddress(_dll_kernel32, "ShowConsoleCursor");
}
asm("leave\njmp *%0" : : "r"(_vptr_ShowConsoleCursor));
}

void _elf_SignalObjectAndWait() asm("SignalObjectAndWait");
void _elf_SignalObjectAndWait() {
static void *_vptr_SignalObjectAndWait = NULL;
load_dll_kernel32();
if (!_vptr_SignalObjectAndWait) {
_vptr_SignalObjectAndWait = (void *) _elf_GetProcAddress(_dll_kernel32, "SignalObjectAndWait");
}
asm("leave\njmp *%0" : : "r"(_vptr_SignalObjectAndWait));
}

void _elf_SizeofResource() asm("SizeofResource");
void _elf_SizeofResource() {
static void *_vptr_SizeofResource = NULL;
load_dll_kernel32();
if (!_vptr_SizeofResource) {
_vptr_SizeofResource = (void *) _elf_GetProcAddress(_dll_kernel32, "SizeofResource");
}
asm("leave\njmp *%0" : : "r"(_vptr_SizeofResource));
}

void _elf_Sleep() asm("Sleep");
void _elf_Sleep() {
static void *_vptr_Sleep = NULL;
load_dll_kernel32();
if (!_vptr_Sleep) {
_vptr_Sleep = (void *) _elf_GetProcAddress(_dll_kernel32, "Sleep");
}
asm("leave\njmp *%0" : : "r"(_vptr_Sleep));
}

void _elf_SleepEx() asm("SleepEx");
void _elf_SleepEx() {
static void *_vptr_SleepEx = NULL;
load_dll_kernel32();
if (!_vptr_SleepEx) {
_vptr_SleepEx = (void *) _elf_GetProcAddress(_dll_kernel32, "SleepEx");
}
asm("leave\njmp *%0" : : "r"(_vptr_SleepEx));
}

void _elf_SuspendThread() asm("SuspendThread");
void _elf_SuspendThread() {
static void *_vptr_SuspendThread = NULL;
load_dll_kernel32();
if (!_vptr_SuspendThread) {
_vptr_SuspendThread = (void *) _elf_GetProcAddress(_dll_kernel32, "SuspendThread");
}
asm("leave\njmp *%0" : : "r"(_vptr_SuspendThread));
}

void _elf_SwitchToFiber() asm("SwitchToFiber");
void _elf_SwitchToFiber() {
static void *_vptr_SwitchToFiber = NULL;
load_dll_kernel32();
if (!_vptr_SwitchToFiber) {
_vptr_SwitchToFiber = (void *) _elf_GetProcAddress(_dll_kernel32, "SwitchToFiber");
}
asm("leave\njmp *%0" : : "r"(_vptr_SwitchToFiber));
}

void _elf_SwitchToThread() asm("SwitchToThread");
void _elf_SwitchToThread() {
static void *_vptr_SwitchToThread = NULL;
load_dll_kernel32();
if (!_vptr_SwitchToThread) {
_vptr_SwitchToThread = (void *) _elf_GetProcAddress(_dll_kernel32, "SwitchToThread");
}
asm("leave\njmp *%0" : : "r"(_vptr_SwitchToThread));
}

void _elf_SystemTimeToFileTime() asm("SystemTimeToFileTime");
void _elf_SystemTimeToFileTime() {
static void *_vptr_SystemTimeToFileTime = NULL;
load_dll_kernel32();
if (!_vptr_SystemTimeToFileTime) {
_vptr_SystemTimeToFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "SystemTimeToFileTime");
}
asm("leave\njmp *%0" : : "r"(_vptr_SystemTimeToFileTime));
}

void _elf_SystemTimeToTzSpecificLocalTime() asm("SystemTimeToTzSpecificLocalTime");
void _elf_SystemTimeToTzSpecificLocalTime() {
static void *_vptr_SystemTimeToTzSpecificLocalTime = NULL;
load_dll_kernel32();
if (!_vptr_SystemTimeToTzSpecificLocalTime) {
_vptr_SystemTimeToTzSpecificLocalTime = (void *) _elf_GetProcAddress(_dll_kernel32, "SystemTimeToTzSpecificLocalTime");
}
asm("leave\njmp *%0" : : "r"(_vptr_SystemTimeToTzSpecificLocalTime));
}

void _elf_TerminateJobObject() asm("TerminateJobObject");
void _elf_TerminateJobObject() {
static void *_vptr_TerminateJobObject = NULL;
load_dll_kernel32();
if (!_vptr_TerminateJobObject) {
_vptr_TerminateJobObject = (void *) _elf_GetProcAddress(_dll_kernel32, "TerminateJobObject");
}
asm("leave\njmp *%0" : : "r"(_vptr_TerminateJobObject));
}

void _elf_TerminateProcess() asm("TerminateProcess");
void _elf_TerminateProcess() {
static void *_vptr_TerminateProcess = NULL;
load_dll_kernel32();
if (!_vptr_TerminateProcess) {
_vptr_TerminateProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "TerminateProcess");
}
asm("leave\njmp *%0" : : "r"(_vptr_TerminateProcess));
}

void _elf_TerminateThread() asm("TerminateThread");
void _elf_TerminateThread() {
static void *_vptr_TerminateThread = NULL;
load_dll_kernel32();
if (!_vptr_TerminateThread) {
_vptr_TerminateThread = (void *) _elf_GetProcAddress(_dll_kernel32, "TerminateThread");
}
asm("leave\njmp *%0" : : "r"(_vptr_TerminateThread));
}

void _elf_TermsrvAppInstallMode() asm("TermsrvAppInstallMode");
void _elf_TermsrvAppInstallMode() {
static void *_vptr_TermsrvAppInstallMode = NULL;
load_dll_kernel32();
if (!_vptr_TermsrvAppInstallMode) {
_vptr_TermsrvAppInstallMode = (void *) _elf_GetProcAddress(_dll_kernel32, "TermsrvAppInstallMode");
}
asm("leave\njmp *%0" : : "r"(_vptr_TermsrvAppInstallMode));
}

void _elf_Thread32First() asm("Thread32First");
void _elf_Thread32First() {
static void *_vptr_Thread32First = NULL;
load_dll_kernel32();
if (!_vptr_Thread32First) {
_vptr_Thread32First = (void *) _elf_GetProcAddress(_dll_kernel32, "Thread32First");
}
asm("leave\njmp *%0" : : "r"(_vptr_Thread32First));
}

void _elf_Thread32Next() asm("Thread32Next");
void _elf_Thread32Next() {
static void *_vptr_Thread32Next = NULL;
load_dll_kernel32();
if (!_vptr_Thread32Next) {
_vptr_Thread32Next = (void *) _elf_GetProcAddress(_dll_kernel32, "Thread32Next");
}
asm("leave\njmp *%0" : : "r"(_vptr_Thread32Next));
}

void _elf_TlsAlloc() asm("TlsAlloc");
void _elf_TlsAlloc() {
static void *_vptr_TlsAlloc = NULL;
load_dll_kernel32();
if (!_vptr_TlsAlloc) {
_vptr_TlsAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "TlsAlloc");
}
asm("leave\njmp *%0" : : "r"(_vptr_TlsAlloc));
}

void _elf_TlsFree() asm("TlsFree");
void _elf_TlsFree() {
static void *_vptr_TlsFree = NULL;
load_dll_kernel32();
if (!_vptr_TlsFree) {
_vptr_TlsFree = (void *) _elf_GetProcAddress(_dll_kernel32, "TlsFree");
}
asm("leave\njmp *%0" : : "r"(_vptr_TlsFree));
}

void _elf_TlsGetValue() asm("TlsGetValue");
void _elf_TlsGetValue() {
static void *_vptr_TlsGetValue = NULL;
load_dll_kernel32();
if (!_vptr_TlsGetValue) {
_vptr_TlsGetValue = (void *) _elf_GetProcAddress(_dll_kernel32, "TlsGetValue");
}
asm("leave\njmp *%0" : : "r"(_vptr_TlsGetValue));
}

void _elf_TlsSetValue() asm("TlsSetValue");
void _elf_TlsSetValue() {
static void *_vptr_TlsSetValue = NULL;
load_dll_kernel32();
if (!_vptr_TlsSetValue) {
_vptr_TlsSetValue = (void *) _elf_GetProcAddress(_dll_kernel32, "TlsSetValue");
}
asm("leave\njmp *%0" : : "r"(_vptr_TlsSetValue));
}

void _elf_Toolhelp32ReadProcessMemory() asm("Toolhelp32ReadProcessMemory");
void _elf_Toolhelp32ReadProcessMemory() {
static void *_vptr_Toolhelp32ReadProcessMemory = NULL;
load_dll_kernel32();
if (!_vptr_Toolhelp32ReadProcessMemory) {
_vptr_Toolhelp32ReadProcessMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "Toolhelp32ReadProcessMemory");
}
asm("leave\njmp *%0" : : "r"(_vptr_Toolhelp32ReadProcessMemory));
}

void _elf_TransactNamedPipe() asm("TransactNamedPipe");
void _elf_TransactNamedPipe() {
static void *_vptr_TransactNamedPipe = NULL;
load_dll_kernel32();
if (!_vptr_TransactNamedPipe) {
_vptr_TransactNamedPipe = (void *) _elf_GetProcAddress(_dll_kernel32, "TransactNamedPipe");
}
asm("leave\njmp *%0" : : "r"(_vptr_TransactNamedPipe));
}

void _elf_TransmitCommChar() asm("TransmitCommChar");
void _elf_TransmitCommChar() {
static void *_vptr_TransmitCommChar = NULL;
load_dll_kernel32();
if (!_vptr_TransmitCommChar) {
_vptr_TransmitCommChar = (void *) _elf_GetProcAddress(_dll_kernel32, "TransmitCommChar");
}
asm("leave\njmp *%0" : : "r"(_vptr_TransmitCommChar));
}

void _elf_TrimVirtualBuffer() asm("TrimVirtualBuffer");
void _elf_TrimVirtualBuffer() {
static void *_vptr_TrimVirtualBuffer = NULL;
load_dll_kernel32();
if (!_vptr_TrimVirtualBuffer) {
_vptr_TrimVirtualBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "TrimVirtualBuffer");
}
asm("leave\njmp *%0" : : "r"(_vptr_TrimVirtualBuffer));
}

void _elf_TryEnterCriticalSection() asm("TryEnterCriticalSection");
void _elf_TryEnterCriticalSection() {
static void *_vptr_TryEnterCriticalSection = NULL;
load_dll_kernel32();
if (!_vptr_TryEnterCriticalSection) {
_vptr_TryEnterCriticalSection = (void *) _elf_GetProcAddress(_dll_kernel32, "TryEnterCriticalSection");
}
asm("leave\njmp *%0" : : "r"(_vptr_TryEnterCriticalSection));
}

void _elf_TzSpecificLocalTimeToSystemTime() asm("TzSpecificLocalTimeToSystemTime");
void _elf_TzSpecificLocalTimeToSystemTime() {
static void *_vptr_TzSpecificLocalTimeToSystemTime = NULL;
load_dll_kernel32();
if (!_vptr_TzSpecificLocalTimeToSystemTime) {
_vptr_TzSpecificLocalTimeToSystemTime = (void *) _elf_GetProcAddress(_dll_kernel32, "TzSpecificLocalTimeToSystemTime");
}
asm("leave\njmp *%0" : : "r"(_vptr_TzSpecificLocalTimeToSystemTime));
}

void _elf_UTRegister() asm("UTRegister");
void _elf_UTRegister() {
static void *_vptr_UTRegister = NULL;
load_dll_kernel32();
if (!_vptr_UTRegister) {
_vptr_UTRegister = (void *) _elf_GetProcAddress(_dll_kernel32, "UTRegister");
}
asm("leave\njmp *%0" : : "r"(_vptr_UTRegister));
}

void _elf_UTUnRegister() asm("UTUnRegister");
void _elf_UTUnRegister() {
static void *_vptr_UTUnRegister = NULL;
load_dll_kernel32();
if (!_vptr_UTUnRegister) {
_vptr_UTUnRegister = (void *) _elf_GetProcAddress(_dll_kernel32, "UTUnRegister");
}
asm("leave\njmp *%0" : : "r"(_vptr_UTUnRegister));
}

void _elf_UnhandledExceptionFilter() asm("UnhandledExceptionFilter");
void _elf_UnhandledExceptionFilter() {
static void *_vptr_UnhandledExceptionFilter = NULL;
load_dll_kernel32();
if (!_vptr_UnhandledExceptionFilter) {
_vptr_UnhandledExceptionFilter = (void *) _elf_GetProcAddress(_dll_kernel32, "UnhandledExceptionFilter");
}
asm("leave\njmp *%0" : : "r"(_vptr_UnhandledExceptionFilter));
}

void _elf_UnlockFile() asm("UnlockFile");
void _elf_UnlockFile() {
static void *_vptr_UnlockFile = NULL;
load_dll_kernel32();
if (!_vptr_UnlockFile) {
_vptr_UnlockFile = (void *) _elf_GetProcAddress(_dll_kernel32, "UnlockFile");
}
asm("leave\njmp *%0" : : "r"(_vptr_UnlockFile));
}

void _elf_UnlockFileEx() asm("UnlockFileEx");
void _elf_UnlockFileEx() {
static void *_vptr_UnlockFileEx = NULL;
load_dll_kernel32();
if (!_vptr_UnlockFileEx) {
_vptr_UnlockFileEx = (void *) _elf_GetProcAddress(_dll_kernel32, "UnlockFileEx");
}
asm("leave\njmp *%0" : : "r"(_vptr_UnlockFileEx));
}

void _elf_UnmapViewOfFile() asm("UnmapViewOfFile");
void _elf_UnmapViewOfFile() {
static void *_vptr_UnmapViewOfFile = NULL;
load_dll_kernel32();
if (!_vptr_UnmapViewOfFile) {
_vptr_UnmapViewOfFile = (void *) _elf_GetProcAddress(_dll_kernel32, "UnmapViewOfFile");
}
asm("leave\njmp *%0" : : "r"(_vptr_UnmapViewOfFile));
}

void _elf_UnregisterConsoleIME() asm("UnregisterConsoleIME");
void _elf_UnregisterConsoleIME() {
static void *_vptr_UnregisterConsoleIME = NULL;
load_dll_kernel32();
if (!_vptr_UnregisterConsoleIME) {
_vptr_UnregisterConsoleIME = (void *) _elf_GetProcAddress(_dll_kernel32, "UnregisterConsoleIME");
}
asm("leave\njmp *%0" : : "r"(_vptr_UnregisterConsoleIME));
}

void _elf_UnregisterWait() asm("UnregisterWait");
void _elf_UnregisterWait() {
static void *_vptr_UnregisterWait = NULL;
load_dll_kernel32();
if (!_vptr_UnregisterWait) {
_vptr_UnregisterWait = (void *) _elf_GetProcAddress(_dll_kernel32, "UnregisterWait");
}
asm("leave\njmp *%0" : : "r"(_vptr_UnregisterWait));
}

void _elf_UnregisterWaitEx() asm("UnregisterWaitEx");
void _elf_UnregisterWaitEx() {
static void *_vptr_UnregisterWaitEx = NULL;
load_dll_kernel32();
if (!_vptr_UnregisterWaitEx) {
_vptr_UnregisterWaitEx = (void *) _elf_GetProcAddress(_dll_kernel32, "UnregisterWaitEx");
}
asm("leave\njmp *%0" : : "r"(_vptr_UnregisterWaitEx));
}

void _elf_UpdateResourceA() asm("UpdateResourceA");
void _elf_UpdateResourceA() {
static void *_vptr_UpdateResourceA = NULL;
load_dll_kernel32();
if (!_vptr_UpdateResourceA) {
_vptr_UpdateResourceA = (void *) _elf_GetProcAddress(_dll_kernel32, "UpdateResourceA");
}
asm("leave\njmp *%0" : : "r"(_vptr_UpdateResourceA));
}

void _elf_UpdateResourceW() asm("UpdateResourceW");
void _elf_UpdateResourceW() {
static void *_vptr_UpdateResourceW = NULL;
load_dll_kernel32();
if (!_vptr_UpdateResourceW) {
_vptr_UpdateResourceW = (void *) _elf_GetProcAddress(_dll_kernel32, "UpdateResourceW");
}
asm("leave\njmp *%0" : : "r"(_vptr_UpdateResourceW));
}

void _elf_VDMConsoleOperation() asm("VDMConsoleOperation");
void _elf_VDMConsoleOperation() {
static void *_vptr_VDMConsoleOperation = NULL;
load_dll_kernel32();
if (!_vptr_VDMConsoleOperation) {
_vptr_VDMConsoleOperation = (void *) _elf_GetProcAddress(_dll_kernel32, "VDMConsoleOperation");
}
asm("leave\njmp *%0" : : "r"(_vptr_VDMConsoleOperation));
}

void _elf_VDMOperationStarted() asm("VDMOperationStarted");
void _elf_VDMOperationStarted() {
static void *_vptr_VDMOperationStarted = NULL;
load_dll_kernel32();
if (!_vptr_VDMOperationStarted) {
_vptr_VDMOperationStarted = (void *) _elf_GetProcAddress(_dll_kernel32, "VDMOperationStarted");
}
asm("leave\njmp *%0" : : "r"(_vptr_VDMOperationStarted));
}

void _elf_ValidateLCType() asm("ValidateLCType");
void _elf_ValidateLCType() {
static void *_vptr_ValidateLCType = NULL;
load_dll_kernel32();
if (!_vptr_ValidateLCType) {
_vptr_ValidateLCType = (void *) _elf_GetProcAddress(_dll_kernel32, "ValidateLCType");
}
asm("leave\njmp *%0" : : "r"(_vptr_ValidateLCType));
}

void _elf_ValidateLocale() asm("ValidateLocale");
void _elf_ValidateLocale() {
static void *_vptr_ValidateLocale = NULL;
load_dll_kernel32();
if (!_vptr_ValidateLocale) {
_vptr_ValidateLocale = (void *) _elf_GetProcAddress(_dll_kernel32, "ValidateLocale");
}
asm("leave\njmp *%0" : : "r"(_vptr_ValidateLocale));
}

void _elf_VerLanguageNameA() asm("VerLanguageNameA");
void _elf_VerLanguageNameA() {
static void *_vptr_VerLanguageNameA = NULL;
load_dll_kernel32();
if (!_vptr_VerLanguageNameA) {
_vptr_VerLanguageNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "VerLanguageNameA");
}
asm("leave\njmp *%0" : : "r"(_vptr_VerLanguageNameA));
}

void _elf_VerLanguageNameW() asm("VerLanguageNameW");
void _elf_VerLanguageNameW() {
static void *_vptr_VerLanguageNameW = NULL;
load_dll_kernel32();
if (!_vptr_VerLanguageNameW) {
_vptr_VerLanguageNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "VerLanguageNameW");
}
asm("leave\njmp *%0" : : "r"(_vptr_VerLanguageNameW));
}

void _elf_VerSetConditionMask() asm("VerSetConditionMask");
void _elf_VerSetConditionMask() {
static void *_vptr_VerSetConditionMask = NULL;
load_dll_kernel32();
if (!_vptr_VerSetConditionMask) {
_vptr_VerSetConditionMask = (void *) _elf_GetProcAddress(_dll_kernel32, "VerSetConditionMask");
}
asm("leave\njmp *%0" : : "r"(_vptr_VerSetConditionMask));
}

void _elf_VerifyConsoleIoHandle() asm("VerifyConsoleIoHandle");
void _elf_VerifyConsoleIoHandle() {
static void *_vptr_VerifyConsoleIoHandle = NULL;
load_dll_kernel32();
if (!_vptr_VerifyConsoleIoHandle) {
_vptr_VerifyConsoleIoHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "VerifyConsoleIoHandle");
}
asm("leave\njmp *%0" : : "r"(_vptr_VerifyConsoleIoHandle));
}

void _elf_VerifyVersionInfoA() asm("VerifyVersionInfoA");
void _elf_VerifyVersionInfoA() {
static void *_vptr_VerifyVersionInfoA = NULL;
load_dll_kernel32();
if (!_vptr_VerifyVersionInfoA) {
_vptr_VerifyVersionInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "VerifyVersionInfoA");
}
asm("leave\njmp *%0" : : "r"(_vptr_VerifyVersionInfoA));
}

void _elf_VerifyVersionInfoW() asm("VerifyVersionInfoW");
void _elf_VerifyVersionInfoW() {
static void *_vptr_VerifyVersionInfoW = NULL;
load_dll_kernel32();
if (!_vptr_VerifyVersionInfoW) {
_vptr_VerifyVersionInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "VerifyVersionInfoW");
}
asm("leave\njmp *%0" : : "r"(_vptr_VerifyVersionInfoW));
}

void _elf_VirtualAlloc() asm("VirtualAlloc");
void _elf_VirtualAlloc() {
static void *_vptr_VirtualAlloc = NULL;
load_dll_kernel32();
if (!_vptr_VirtualAlloc) {
_vptr_VirtualAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualAlloc");
}
asm("leave\njmp *%0" : : "r"(_vptr_VirtualAlloc));
}

void _elf_VirtualAllocEx() asm("VirtualAllocEx");
void _elf_VirtualAllocEx() {
static void *_vptr_VirtualAllocEx = NULL;
load_dll_kernel32();
if (!_vptr_VirtualAllocEx) {
_vptr_VirtualAllocEx = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualAllocEx");
}
asm("leave\njmp *%0" : : "r"(_vptr_VirtualAllocEx));
}

void _elf_VirtualBufferExceptionHandler() asm("VirtualBufferExceptionHandler");
void _elf_VirtualBufferExceptionHandler() {
static void *_vptr_VirtualBufferExceptionHandler = NULL;
load_dll_kernel32();
if (!_vptr_VirtualBufferExceptionHandler) {
_vptr_VirtualBufferExceptionHandler = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualBufferExceptionHandler");
}
asm("leave\njmp *%0" : : "r"(_vptr_VirtualBufferExceptionHandler));
}

void _elf_VirtualFree() asm("VirtualFree");
void _elf_VirtualFree() {
static void *_vptr_VirtualFree = NULL;
load_dll_kernel32();
if (!_vptr_VirtualFree) {
_vptr_VirtualFree = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualFree");
}
asm("leave\njmp *%0" : : "r"(_vptr_VirtualFree));
}

void _elf_VirtualFreeEx() asm("VirtualFreeEx");
void _elf_VirtualFreeEx() {
static void *_vptr_VirtualFreeEx = NULL;
load_dll_kernel32();
if (!_vptr_VirtualFreeEx) {
_vptr_VirtualFreeEx = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualFreeEx");
}
asm("leave\njmp *%0" : : "r"(_vptr_VirtualFreeEx));
}

void _elf_VirtualLock() asm("VirtualLock");
void _elf_VirtualLock() {
static void *_vptr_VirtualLock = NULL;
load_dll_kernel32();
if (!_vptr_VirtualLock) {
_vptr_VirtualLock = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualLock");
}
asm("leave\njmp *%0" : : "r"(_vptr_VirtualLock));
}

void _elf_VirtualProtect() asm("VirtualProtect");
void _elf_VirtualProtect() {
static void *_vptr_VirtualProtect = NULL;
load_dll_kernel32();
if (!_vptr_VirtualProtect) {
_vptr_VirtualProtect = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualProtect");
}
asm("leave\njmp *%0" : : "r"(_vptr_VirtualProtect));
}

void _elf_VirtualProtectEx() asm("VirtualProtectEx");
void _elf_VirtualProtectEx() {
static void *_vptr_VirtualProtectEx = NULL;
load_dll_kernel32();
if (!_vptr_VirtualProtectEx) {
_vptr_VirtualProtectEx = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualProtectEx");
}
asm("leave\njmp *%0" : : "r"(_vptr_VirtualProtectEx));
}

void _elf_VirtualQuery() asm("VirtualQuery");
void _elf_VirtualQuery() {
static void *_vptr_VirtualQuery = NULL;
load_dll_kernel32();
if (!_vptr_VirtualQuery) {
_vptr_VirtualQuery = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualQuery");
}
asm("leave\njmp *%0" : : "r"(_vptr_VirtualQuery));
}

void _elf_VirtualQueryEx() asm("VirtualQueryEx");
void _elf_VirtualQueryEx() {
static void *_vptr_VirtualQueryEx = NULL;
load_dll_kernel32();
if (!_vptr_VirtualQueryEx) {
_vptr_VirtualQueryEx = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualQueryEx");
}
asm("leave\njmp *%0" : : "r"(_vptr_VirtualQueryEx));
}

void _elf_VirtualUnlock() asm("VirtualUnlock");
void _elf_VirtualUnlock() {
static void *_vptr_VirtualUnlock = NULL;
load_dll_kernel32();
if (!_vptr_VirtualUnlock) {
_vptr_VirtualUnlock = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualUnlock");
}
asm("leave\njmp *%0" : : "r"(_vptr_VirtualUnlock));
}

void _elf_WTSGetActiveConsoleSessionId() asm("WTSGetActiveConsoleSessionId");
void _elf_WTSGetActiveConsoleSessionId() {
static void *_vptr_WTSGetActiveConsoleSessionId = NULL;
load_dll_kernel32();
if (!_vptr_WTSGetActiveConsoleSessionId) {
_vptr_WTSGetActiveConsoleSessionId = (void *) _elf_GetProcAddress(_dll_kernel32, "WTSGetActiveConsoleSessionId");
}
asm("leave\njmp *%0" : : "r"(_vptr_WTSGetActiveConsoleSessionId));
}

void _elf_WaitCommEvent() asm("WaitCommEvent");
void _elf_WaitCommEvent() {
static void *_vptr_WaitCommEvent = NULL;
load_dll_kernel32();
if (!_vptr_WaitCommEvent) {
_vptr_WaitCommEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitCommEvent");
}
asm("leave\njmp *%0" : : "r"(_vptr_WaitCommEvent));
}

void _elf_WaitForDebugEvent() asm("WaitForDebugEvent");
void _elf_WaitForDebugEvent() {
static void *_vptr_WaitForDebugEvent = NULL;
load_dll_kernel32();
if (!_vptr_WaitForDebugEvent) {
_vptr_WaitForDebugEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitForDebugEvent");
}
asm("leave\njmp *%0" : : "r"(_vptr_WaitForDebugEvent));
}

void _elf_WaitForMultipleObjects() asm("WaitForMultipleObjects");
void _elf_WaitForMultipleObjects() {
static void *_vptr_WaitForMultipleObjects = NULL;
load_dll_kernel32();
if (!_vptr_WaitForMultipleObjects) {
_vptr_WaitForMultipleObjects = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitForMultipleObjects");
}
asm("leave\njmp *%0" : : "r"(_vptr_WaitForMultipleObjects));
}

void _elf_WaitForMultipleObjectsEx() asm("WaitForMultipleObjectsEx");
void _elf_WaitForMultipleObjectsEx() {
static void *_vptr_WaitForMultipleObjectsEx = NULL;
load_dll_kernel32();
if (!_vptr_WaitForMultipleObjectsEx) {
_vptr_WaitForMultipleObjectsEx = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitForMultipleObjectsEx");
}
asm("leave\njmp *%0" : : "r"(_vptr_WaitForMultipleObjectsEx));
}

void _elf_WaitForSingleObject() asm("WaitForSingleObject");
void _elf_WaitForSingleObject() {
static void *_vptr_WaitForSingleObject = NULL;
load_dll_kernel32();
if (!_vptr_WaitForSingleObject) {
_vptr_WaitForSingleObject = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitForSingleObject");
}
asm("leave\njmp *%0" : : "r"(_vptr_WaitForSingleObject));
}

void _elf_WaitForSingleObjectEx() asm("WaitForSingleObjectEx");
void _elf_WaitForSingleObjectEx() {
static void *_vptr_WaitForSingleObjectEx = NULL;
load_dll_kernel32();
if (!_vptr_WaitForSingleObjectEx) {
_vptr_WaitForSingleObjectEx = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitForSingleObjectEx");
}
asm("leave\njmp *%0" : : "r"(_vptr_WaitForSingleObjectEx));
}

void _elf_WaitNamedPipeA() asm("WaitNamedPipeA");
void _elf_WaitNamedPipeA() {
static void *_vptr_WaitNamedPipeA = NULL;
load_dll_kernel32();
if (!_vptr_WaitNamedPipeA) {
_vptr_WaitNamedPipeA = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitNamedPipeA");
}
asm("leave\njmp *%0" : : "r"(_vptr_WaitNamedPipeA));
}

void _elf_WaitNamedPipeW() asm("WaitNamedPipeW");
void _elf_WaitNamedPipeW() {
static void *_vptr_WaitNamedPipeW = NULL;
load_dll_kernel32();
if (!_vptr_WaitNamedPipeW) {
_vptr_WaitNamedPipeW = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitNamedPipeW");
}
asm("leave\njmp *%0" : : "r"(_vptr_WaitNamedPipeW));
}

void _elf_WideCharToMultiByte() asm("WideCharToMultiByte");
void _elf_WideCharToMultiByte() {
static void *_vptr_WideCharToMultiByte = NULL;
load_dll_kernel32();
if (!_vptr_WideCharToMultiByte) {
_vptr_WideCharToMultiByte = (void *) _elf_GetProcAddress(_dll_kernel32, "WideCharToMultiByte");
}
asm("leave\njmp *%0" : : "r"(_vptr_WideCharToMultiByte));
}

void _elf_WinExec() asm("WinExec");
void _elf_WinExec() {
static void *_vptr_WinExec = NULL;
load_dll_kernel32();
if (!_vptr_WinExec) {
_vptr_WinExec = (void *) _elf_GetProcAddress(_dll_kernel32, "WinExec");
}
asm("leave\njmp *%0" : : "r"(_vptr_WinExec));
}

void _elf_WriteConsoleA() asm("WriteConsoleA");
void _elf_WriteConsoleA() {
static void *_vptr_WriteConsoleA = NULL;
load_dll_kernel32();
if (!_vptr_WriteConsoleA) {
_vptr_WriteConsoleA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleA");
}
asm("leave\njmp *%0" : : "r"(_vptr_WriteConsoleA));
}

void _elf_WriteConsoleInputA() asm("WriteConsoleInputA");
void _elf_WriteConsoleInputA() {
static void *_vptr_WriteConsoleInputA = NULL;
load_dll_kernel32();
if (!_vptr_WriteConsoleInputA) {
_vptr_WriteConsoleInputA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleInputA");
}
asm("leave\njmp *%0" : : "r"(_vptr_WriteConsoleInputA));
}

void _elf_WriteConsoleInputVDMA() asm("WriteConsoleInputVDMA");
void _elf_WriteConsoleInputVDMA() {
static void *_vptr_WriteConsoleInputVDMA = NULL;
load_dll_kernel32();
if (!_vptr_WriteConsoleInputVDMA) {
_vptr_WriteConsoleInputVDMA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleInputVDMA");
}
asm("leave\njmp *%0" : : "r"(_vptr_WriteConsoleInputVDMA));
}

void _elf_WriteConsoleInputVDMW() asm("WriteConsoleInputVDMW");
void _elf_WriteConsoleInputVDMW() {
static void *_vptr_WriteConsoleInputVDMW = NULL;
load_dll_kernel32();
if (!_vptr_WriteConsoleInputVDMW) {
_vptr_WriteConsoleInputVDMW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleInputVDMW");
}
asm("leave\njmp *%0" : : "r"(_vptr_WriteConsoleInputVDMW));
}

void _elf_WriteConsoleInputW() asm("WriteConsoleInputW");
void _elf_WriteConsoleInputW() {
static void *_vptr_WriteConsoleInputW = NULL;
load_dll_kernel32();
if (!_vptr_WriteConsoleInputW) {
_vptr_WriteConsoleInputW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleInputW");
}
asm("leave\njmp *%0" : : "r"(_vptr_WriteConsoleInputW));
}

void _elf_WriteConsoleOutputA() asm("WriteConsoleOutputA");
void _elf_WriteConsoleOutputA() {
static void *_vptr_WriteConsoleOutputA = NULL;
load_dll_kernel32();
if (!_vptr_WriteConsoleOutputA) {
_vptr_WriteConsoleOutputA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleOutputA");
}
asm("leave\njmp *%0" : : "r"(_vptr_WriteConsoleOutputA));
}

void _elf_WriteConsoleOutputAttribute() asm("WriteConsoleOutputAttribute");
void _elf_WriteConsoleOutputAttribute() {
static void *_vptr_WriteConsoleOutputAttribute = NULL;
load_dll_kernel32();
if (!_vptr_WriteConsoleOutputAttribute) {
_vptr_WriteConsoleOutputAttribute = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleOutputAttribute");
}
asm("leave\njmp *%0" : : "r"(_vptr_WriteConsoleOutputAttribute));
}

void _elf_WriteConsoleOutputCharacterA() asm("WriteConsoleOutputCharacterA");
void _elf_WriteConsoleOutputCharacterA() {
static void *_vptr_WriteConsoleOutputCharacterA = NULL;
load_dll_kernel32();
if (!_vptr_WriteConsoleOutputCharacterA) {
_vptr_WriteConsoleOutputCharacterA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleOutputCharacterA");
}
asm("leave\njmp *%0" : : "r"(_vptr_WriteConsoleOutputCharacterA));
}

void _elf_WriteConsoleOutputCharacterW() asm("WriteConsoleOutputCharacterW");
void _elf_WriteConsoleOutputCharacterW() {
static void *_vptr_WriteConsoleOutputCharacterW = NULL;
load_dll_kernel32();
if (!_vptr_WriteConsoleOutputCharacterW) {
_vptr_WriteConsoleOutputCharacterW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleOutputCharacterW");
}
asm("leave\njmp *%0" : : "r"(_vptr_WriteConsoleOutputCharacterW));
}

void _elf_WriteConsoleOutputW() asm("WriteConsoleOutputW");
void _elf_WriteConsoleOutputW() {
static void *_vptr_WriteConsoleOutputW = NULL;
load_dll_kernel32();
if (!_vptr_WriteConsoleOutputW) {
_vptr_WriteConsoleOutputW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleOutputW");
}
asm("leave\njmp *%0" : : "r"(_vptr_WriteConsoleOutputW));
}

void _elf_WriteConsoleW() asm("WriteConsoleW");
void _elf_WriteConsoleW() {
static void *_vptr_WriteConsoleW = NULL;
load_dll_kernel32();
if (!_vptr_WriteConsoleW) {
_vptr_WriteConsoleW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleW");
}
asm("leave\njmp *%0" : : "r"(_vptr_WriteConsoleW));
}

void _elf_WriteFile() asm("WriteFile");
void _elf_WriteFile() {
static void *_vptr_WriteFile = NULL;
load_dll_kernel32();
if (!_vptr_WriteFile) {
_vptr_WriteFile = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteFile");
}
asm("leave\njmp *%0" : : "r"(_vptr_WriteFile));
}

void _elf_WriteFileEx() asm("WriteFileEx");
void _elf_WriteFileEx() {
static void *_vptr_WriteFileEx = NULL;
load_dll_kernel32();
if (!_vptr_WriteFileEx) {
_vptr_WriteFileEx = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteFileEx");
}
asm("leave\njmp *%0" : : "r"(_vptr_WriteFileEx));
}

void _elf_WriteFileGather() asm("WriteFileGather");
void _elf_WriteFileGather() {
static void *_vptr_WriteFileGather = NULL;
load_dll_kernel32();
if (!_vptr_WriteFileGather) {
_vptr_WriteFileGather = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteFileGather");
}
asm("leave\njmp *%0" : : "r"(_vptr_WriteFileGather));
}

void _elf_WritePrivateProfileSectionA() asm("WritePrivateProfileSectionA");
void _elf_WritePrivateProfileSectionA() {
static void *_vptr_WritePrivateProfileSectionA = NULL;
load_dll_kernel32();
if (!_vptr_WritePrivateProfileSectionA) {
_vptr_WritePrivateProfileSectionA = (void *) _elf_GetProcAddress(_dll_kernel32, "WritePrivateProfileSectionA");
}
asm("leave\njmp *%0" : : "r"(_vptr_WritePrivateProfileSectionA));
}

void _elf_WritePrivateProfileSectionW() asm("WritePrivateProfileSectionW");
void _elf_WritePrivateProfileSectionW() {
static void *_vptr_WritePrivateProfileSectionW = NULL;
load_dll_kernel32();
if (!_vptr_WritePrivateProfileSectionW) {
_vptr_WritePrivateProfileSectionW = (void *) _elf_GetProcAddress(_dll_kernel32, "WritePrivateProfileSectionW");
}
asm("leave\njmp *%0" : : "r"(_vptr_WritePrivateProfileSectionW));
}

void _elf_WritePrivateProfileStringA() asm("WritePrivateProfileStringA");
void _elf_WritePrivateProfileStringA() {
static void *_vptr_WritePrivateProfileStringA = NULL;
load_dll_kernel32();
if (!_vptr_WritePrivateProfileStringA) {
_vptr_WritePrivateProfileStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "WritePrivateProfileStringA");
}
asm("leave\njmp *%0" : : "r"(_vptr_WritePrivateProfileStringA));
}

void _elf_WritePrivateProfileStringW() asm("WritePrivateProfileStringW");
void _elf_WritePrivateProfileStringW() {
static void *_vptr_WritePrivateProfileStringW = NULL;
load_dll_kernel32();
if (!_vptr_WritePrivateProfileStringW) {
_vptr_WritePrivateProfileStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "WritePrivateProfileStringW");
}
asm("leave\njmp *%0" : : "r"(_vptr_WritePrivateProfileStringW));
}

void _elf_WritePrivateProfileStructA() asm("WritePrivateProfileStructA");
void _elf_WritePrivateProfileStructA() {
static void *_vptr_WritePrivateProfileStructA = NULL;
load_dll_kernel32();
if (!_vptr_WritePrivateProfileStructA) {
_vptr_WritePrivateProfileStructA = (void *) _elf_GetProcAddress(_dll_kernel32, "WritePrivateProfileStructA");
}
asm("leave\njmp *%0" : : "r"(_vptr_WritePrivateProfileStructA));
}

void _elf_WritePrivateProfileStructW() asm("WritePrivateProfileStructW");
void _elf_WritePrivateProfileStructW() {
static void *_vptr_WritePrivateProfileStructW = NULL;
load_dll_kernel32();
if (!_vptr_WritePrivateProfileStructW) {
_vptr_WritePrivateProfileStructW = (void *) _elf_GetProcAddress(_dll_kernel32, "WritePrivateProfileStructW");
}
asm("leave\njmp *%0" : : "r"(_vptr_WritePrivateProfileStructW));
}

void _elf_WriteProcessMemory() asm("WriteProcessMemory");
void _elf_WriteProcessMemory() {
static void *_vptr_WriteProcessMemory = NULL;
load_dll_kernel32();
if (!_vptr_WriteProcessMemory) {
_vptr_WriteProcessMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteProcessMemory");
}
asm("leave\njmp *%0" : : "r"(_vptr_WriteProcessMemory));
}

void _elf_WriteProfileSectionA() asm("WriteProfileSectionA");
void _elf_WriteProfileSectionA() {
static void *_vptr_WriteProfileSectionA = NULL;
load_dll_kernel32();
if (!_vptr_WriteProfileSectionA) {
_vptr_WriteProfileSectionA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteProfileSectionA");
}
asm("leave\njmp *%0" : : "r"(_vptr_WriteProfileSectionA));
}

void _elf_WriteProfileSectionW() asm("WriteProfileSectionW");
void _elf_WriteProfileSectionW() {
static void *_vptr_WriteProfileSectionW = NULL;
load_dll_kernel32();
if (!_vptr_WriteProfileSectionW) {
_vptr_WriteProfileSectionW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteProfileSectionW");
}
asm("leave\njmp *%0" : : "r"(_vptr_WriteProfileSectionW));
}

void _elf_WriteProfileStringA() asm("WriteProfileStringA");
void _elf_WriteProfileStringA() {
static void *_vptr_WriteProfileStringA = NULL;
load_dll_kernel32();
if (!_vptr_WriteProfileStringA) {
_vptr_WriteProfileStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteProfileStringA");
}
asm("leave\njmp *%0" : : "r"(_vptr_WriteProfileStringA));
}

void _elf_WriteProfileStringW() asm("WriteProfileStringW");
void _elf_WriteProfileStringW() {
static void *_vptr_WriteProfileStringW = NULL;
load_dll_kernel32();
if (!_vptr_WriteProfileStringW) {
_vptr_WriteProfileStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteProfileStringW");
}
asm("leave\njmp *%0" : : "r"(_vptr_WriteProfileStringW));
}

void _elf_WriteTapemark() asm("WriteTapemark");
void _elf_WriteTapemark() {
static void *_vptr_WriteTapemark = NULL;
load_dll_kernel32();
if (!_vptr_WriteTapemark) {
_vptr_WriteTapemark = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteTapemark");
}
asm("leave\njmp *%0" : : "r"(_vptr_WriteTapemark));
}

void _elf_ZombifyActCtx() asm("ZombifyActCtx");
void _elf_ZombifyActCtx() {
static void *_vptr_ZombifyActCtx = NULL;
load_dll_kernel32();
if (!_vptr_ZombifyActCtx) {
_vptr_ZombifyActCtx = (void *) _elf_GetProcAddress(_dll_kernel32, "ZombifyActCtx");
}
asm("leave\njmp *%0" : : "r"(_vptr_ZombifyActCtx));
}

void _elf__hread() asm("_hread");
void _elf__hread() {
static void *_vptr__hread = NULL;
load_dll_kernel32();
if (!_vptr__hread) {
_vptr__hread = (void *) _elf_GetProcAddress(_dll_kernel32, "_hread");
}
asm("leave\njmp *%0" : : "r"(_vptr__hread));
}

void _elf__hwrite() asm("_hwrite");
void _elf__hwrite() {
static void *_vptr__hwrite = NULL;
load_dll_kernel32();
if (!_vptr__hwrite) {
_vptr__hwrite = (void *) _elf_GetProcAddress(_dll_kernel32, "_hwrite");
}
asm("leave\njmp *%0" : : "r"(_vptr__hwrite));
}

void _elf__lclose() asm("_lclose");
void _elf__lclose() {
static void *_vptr__lclose = NULL;
load_dll_kernel32();
if (!_vptr__lclose) {
_vptr__lclose = (void *) _elf_GetProcAddress(_dll_kernel32, "_lclose");
}
asm("leave\njmp *%0" : : "r"(_vptr__lclose));
}

void _elf__lcreat() asm("_lcreat");
void _elf__lcreat() {
static void *_vptr__lcreat = NULL;
load_dll_kernel32();
if (!_vptr__lcreat) {
_vptr__lcreat = (void *) _elf_GetProcAddress(_dll_kernel32, "_lcreat");
}
asm("leave\njmp *%0" : : "r"(_vptr__lcreat));
}

void _elf__llseek() asm("_llseek");
void _elf__llseek() {
static void *_vptr__llseek = NULL;
load_dll_kernel32();
if (!_vptr__llseek) {
_vptr__llseek = (void *) _elf_GetProcAddress(_dll_kernel32, "_llseek");
}
asm("leave\njmp *%0" : : "r"(_vptr__llseek));
}

void _elf__lopen() asm("_lopen");
void _elf__lopen() {
static void *_vptr__lopen = NULL;
load_dll_kernel32();
if (!_vptr__lopen) {
_vptr__lopen = (void *) _elf_GetProcAddress(_dll_kernel32, "_lopen");
}
asm("leave\njmp *%0" : : "r"(_vptr__lopen));
}

void _elf__lread() asm("_lread");
void _elf__lread() {
static void *_vptr__lread = NULL;
load_dll_kernel32();
if (!_vptr__lread) {
_vptr__lread = (void *) _elf_GetProcAddress(_dll_kernel32, "_lread");
}
asm("leave\njmp *%0" : : "r"(_vptr__lread));
}

void _elf__lwrite() asm("_lwrite");
void _elf__lwrite() {
static void *_vptr__lwrite = NULL;
load_dll_kernel32();
if (!_vptr__lwrite) {
_vptr__lwrite = (void *) _elf_GetProcAddress(_dll_kernel32, "_lwrite");
}
asm("leave\njmp *%0" : : "r"(_vptr__lwrite));
}

void _elf_lstrcat() asm("lstrcat");
void _elf_lstrcat() {
static void *_vptr_lstrcat = NULL;
load_dll_kernel32();
if (!_vptr_lstrcat) {
_vptr_lstrcat = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcat");
}
asm("leave\njmp *%0" : : "r"(_vptr_lstrcat));
}

void _elf_lstrcatA() asm("lstrcatA");
void _elf_lstrcatA() {
static void *_vptr_lstrcatA = NULL;
load_dll_kernel32();
if (!_vptr_lstrcatA) {
_vptr_lstrcatA = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcatA");
}
asm("leave\njmp *%0" : : "r"(_vptr_lstrcatA));
}

void _elf_lstrcatW() asm("lstrcatW");
void _elf_lstrcatW() {
static void *_vptr_lstrcatW = NULL;
load_dll_kernel32();
if (!_vptr_lstrcatW) {
_vptr_lstrcatW = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcatW");
}
asm("leave\njmp *%0" : : "r"(_vptr_lstrcatW));
}

void _elf_lstrcmp() asm("lstrcmp");
void _elf_lstrcmp() {
static void *_vptr_lstrcmp = NULL;
load_dll_kernel32();
if (!_vptr_lstrcmp) {
_vptr_lstrcmp = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcmp");
}
asm("leave\njmp *%0" : : "r"(_vptr_lstrcmp));
}

void _elf_lstrcmpA() asm("lstrcmpA");
void _elf_lstrcmpA() {
static void *_vptr_lstrcmpA = NULL;
load_dll_kernel32();
if (!_vptr_lstrcmpA) {
_vptr_lstrcmpA = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcmpA");
}
asm("leave\njmp *%0" : : "r"(_vptr_lstrcmpA));
}

void _elf_lstrcmpW() asm("lstrcmpW");
void _elf_lstrcmpW() {
static void *_vptr_lstrcmpW = NULL;
load_dll_kernel32();
if (!_vptr_lstrcmpW) {
_vptr_lstrcmpW = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcmpW");
}
asm("leave\njmp *%0" : : "r"(_vptr_lstrcmpW));
}

void _elf_lstrcmpi() asm("lstrcmpi");
void _elf_lstrcmpi() {
static void *_vptr_lstrcmpi = NULL;
load_dll_kernel32();
if (!_vptr_lstrcmpi) {
_vptr_lstrcmpi = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcmpi");
}
asm("leave\njmp *%0" : : "r"(_vptr_lstrcmpi));
}

void _elf_lstrcmpiA() asm("lstrcmpiA");
void _elf_lstrcmpiA() {
static void *_vptr_lstrcmpiA = NULL;
load_dll_kernel32();
if (!_vptr_lstrcmpiA) {
_vptr_lstrcmpiA = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcmpiA");
}
asm("leave\njmp *%0" : : "r"(_vptr_lstrcmpiA));
}

void _elf_lstrcmpiW() asm("lstrcmpiW");
void _elf_lstrcmpiW() {
static void *_vptr_lstrcmpiW = NULL;
load_dll_kernel32();
if (!_vptr_lstrcmpiW) {
_vptr_lstrcmpiW = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcmpiW");
}
asm("leave\njmp *%0" : : "r"(_vptr_lstrcmpiW));
}

void _elf_lstrcpy() asm("lstrcpy");
void _elf_lstrcpy() {
static void *_vptr_lstrcpy = NULL;
load_dll_kernel32();
if (!_vptr_lstrcpy) {
_vptr_lstrcpy = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcpy");
}
asm("leave\njmp *%0" : : "r"(_vptr_lstrcpy));
}

void _elf_lstrcpyA() asm("lstrcpyA");
void _elf_lstrcpyA() {
static void *_vptr_lstrcpyA = NULL;
load_dll_kernel32();
if (!_vptr_lstrcpyA) {
_vptr_lstrcpyA = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcpyA");
}
asm("leave\njmp *%0" : : "r"(_vptr_lstrcpyA));
}

void _elf_lstrcpyW() asm("lstrcpyW");
void _elf_lstrcpyW() {
static void *_vptr_lstrcpyW = NULL;
load_dll_kernel32();
if (!_vptr_lstrcpyW) {
_vptr_lstrcpyW = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcpyW");
}
asm("leave\njmp *%0" : : "r"(_vptr_lstrcpyW));
}

void _elf_lstrcpyn() asm("lstrcpyn");
void _elf_lstrcpyn() {
static void *_vptr_lstrcpyn = NULL;
load_dll_kernel32();
if (!_vptr_lstrcpyn) {
_vptr_lstrcpyn = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcpyn");
}
asm("leave\njmp *%0" : : "r"(_vptr_lstrcpyn));
}

void _elf_lstrcpynA() asm("lstrcpynA");
void _elf_lstrcpynA() {
static void *_vptr_lstrcpynA = NULL;
load_dll_kernel32();
if (!_vptr_lstrcpynA) {
_vptr_lstrcpynA = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcpynA");
}
asm("leave\njmp *%0" : : "r"(_vptr_lstrcpynA));
}

void _elf_lstrcpynW() asm("lstrcpynW");
void _elf_lstrcpynW() {
static void *_vptr_lstrcpynW = NULL;
load_dll_kernel32();
if (!_vptr_lstrcpynW) {
_vptr_lstrcpynW = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcpynW");
}
asm("leave\njmp *%0" : : "r"(_vptr_lstrcpynW));
}

void _elf_lstrlen() asm("lstrlen");
void _elf_lstrlen() {
static void *_vptr_lstrlen = NULL;
load_dll_kernel32();
if (!_vptr_lstrlen) {
_vptr_lstrlen = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrlen");
}
asm("leave\njmp *%0" : : "r"(_vptr_lstrlen));
}

void _elf_lstrlenA() asm("lstrlenA");
void _elf_lstrlenA() {
static void *_vptr_lstrlenA = NULL;
load_dll_kernel32();
if (!_vptr_lstrlenA) {
_vptr_lstrlenA = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrlenA");
}
asm("leave\njmp *%0" : : "r"(_vptr_lstrlenA));
}

void _elf_lstrlenW() asm("lstrlenW");
void _elf_lstrlenW() {
static void *_vptr_lstrlenW = NULL;
load_dll_kernel32();
if (!_vptr_lstrlenW) {
_vptr_lstrlenW = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrlenW");
}
asm("leave\njmp *%0" : : "r"(_vptr_lstrlenW));
}

