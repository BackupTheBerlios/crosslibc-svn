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

void _elf_ActivateActCtx() asm("ActivateActCtx");
void *_imp__ActivateActCtx = NULL;
void _elf_ActivateActCtx() {
load_dll_kernel32();
if (!_imp__ActivateActCtx) {
_imp__ActivateActCtx = (void *) _elf_GetProcAddress(_dll_kernel32, "ActivateActCtx");
}
asm("leave\njmp *%0" : : "r"(_imp__ActivateActCtx));
}

void _elf_AddAtomA() asm("AddAtomA");
void *_imp__AddAtomA = NULL;
void _elf_AddAtomA() {
load_dll_kernel32();
if (!_imp__AddAtomA) {
_imp__AddAtomA = (void *) _elf_GetProcAddress(_dll_kernel32, "AddAtomA");
}
asm("leave\njmp *%0" : : "r"(_imp__AddAtomA));
}

void _elf_AddAtomW() asm("AddAtomW");
void *_imp__AddAtomW = NULL;
void _elf_AddAtomW() {
load_dll_kernel32();
if (!_imp__AddAtomW) {
_imp__AddAtomW = (void *) _elf_GetProcAddress(_dll_kernel32, "AddAtomW");
}
asm("leave\njmp *%0" : : "r"(_imp__AddAtomW));
}

void _elf_AddConsoleAliasA() asm("AddConsoleAliasA");
void *_imp__AddConsoleAliasA = NULL;
void _elf_AddConsoleAliasA() {
load_dll_kernel32();
if (!_imp__AddConsoleAliasA) {
_imp__AddConsoleAliasA = (void *) _elf_GetProcAddress(_dll_kernel32, "AddConsoleAliasA");
}
asm("leave\njmp *%0" : : "r"(_imp__AddConsoleAliasA));
}

void _elf_AddConsoleAliasW() asm("AddConsoleAliasW");
void *_imp__AddConsoleAliasW = NULL;
void _elf_AddConsoleAliasW() {
load_dll_kernel32();
if (!_imp__AddConsoleAliasW) {
_imp__AddConsoleAliasW = (void *) _elf_GetProcAddress(_dll_kernel32, "AddConsoleAliasW");
}
asm("leave\njmp *%0" : : "r"(_imp__AddConsoleAliasW));
}

void _elf_AddLocalAlternateComputerNameA() asm("AddLocalAlternateComputerNameA");
void *_imp__AddLocalAlternateComputerNameA = NULL;
void _elf_AddLocalAlternateComputerNameA() {
load_dll_kernel32();
if (!_imp__AddLocalAlternateComputerNameA) {
_imp__AddLocalAlternateComputerNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "AddLocalAlternateComputerNameA");
}
asm("leave\njmp *%0" : : "r"(_imp__AddLocalAlternateComputerNameA));
}

void _elf_AddLocalAlternateComputerNameW() asm("AddLocalAlternateComputerNameW");
void *_imp__AddLocalAlternateComputerNameW = NULL;
void _elf_AddLocalAlternateComputerNameW() {
load_dll_kernel32();
if (!_imp__AddLocalAlternateComputerNameW) {
_imp__AddLocalAlternateComputerNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "AddLocalAlternateComputerNameW");
}
asm("leave\njmp *%0" : : "r"(_imp__AddLocalAlternateComputerNameW));
}

void _elf_AddRefActCtx() asm("AddRefActCtx");
void *_imp__AddRefActCtx = NULL;
void _elf_AddRefActCtx() {
load_dll_kernel32();
if (!_imp__AddRefActCtx) {
_imp__AddRefActCtx = (void *) _elf_GetProcAddress(_dll_kernel32, "AddRefActCtx");
}
asm("leave\njmp *%0" : : "r"(_imp__AddRefActCtx));
}

void _elf_AddVectoredExceptionHandler() asm("AddVectoredExceptionHandler");
void *_imp__AddVectoredExceptionHandler = NULL;
void _elf_AddVectoredExceptionHandler() {
load_dll_kernel32();
if (!_imp__AddVectoredExceptionHandler) {
_imp__AddVectoredExceptionHandler = (void *) _elf_GetProcAddress(_dll_kernel32, "AddVectoredExceptionHandler");
}
asm("leave\njmp *%0" : : "r"(_imp__AddVectoredExceptionHandler));
}

void _elf_AllocConsole() asm("AllocConsole");
void *_imp__AllocConsole = NULL;
void _elf_AllocConsole() {
load_dll_kernel32();
if (!_imp__AllocConsole) {
_imp__AllocConsole = (void *) _elf_GetProcAddress(_dll_kernel32, "AllocConsole");
}
asm("leave\njmp *%0" : : "r"(_imp__AllocConsole));
}

void _elf_AllocateUserPhysicalPages() asm("AllocateUserPhysicalPages");
void *_imp__AllocateUserPhysicalPages = NULL;
void _elf_AllocateUserPhysicalPages() {
load_dll_kernel32();
if (!_imp__AllocateUserPhysicalPages) {
_imp__AllocateUserPhysicalPages = (void *) _elf_GetProcAddress(_dll_kernel32, "AllocateUserPhysicalPages");
}
asm("leave\njmp *%0" : : "r"(_imp__AllocateUserPhysicalPages));
}

void _elf_AreFileApisANSI() asm("AreFileApisANSI");
void *_imp__AreFileApisANSI = NULL;
void _elf_AreFileApisANSI() {
load_dll_kernel32();
if (!_imp__AreFileApisANSI) {
_imp__AreFileApisANSI = (void *) _elf_GetProcAddress(_dll_kernel32, "AreFileApisANSI");
}
asm("leave\njmp *%0" : : "r"(_imp__AreFileApisANSI));
}

void _elf_AssignProcessToJobObject() asm("AssignProcessToJobObject");
void *_imp__AssignProcessToJobObject = NULL;
void _elf_AssignProcessToJobObject() {
load_dll_kernel32();
if (!_imp__AssignProcessToJobObject) {
_imp__AssignProcessToJobObject = (void *) _elf_GetProcAddress(_dll_kernel32, "AssignProcessToJobObject");
}
asm("leave\njmp *%0" : : "r"(_imp__AssignProcessToJobObject));
}

void _elf_AttachConsole() asm("AttachConsole");
void *_imp__AttachConsole = NULL;
void _elf_AttachConsole() {
load_dll_kernel32();
if (!_imp__AttachConsole) {
_imp__AttachConsole = (void *) _elf_GetProcAddress(_dll_kernel32, "AttachConsole");
}
asm("leave\njmp *%0" : : "r"(_imp__AttachConsole));
}

void _elf_BackupRead() asm("BackupRead");
void *_imp__BackupRead = NULL;
void _elf_BackupRead() {
load_dll_kernel32();
if (!_imp__BackupRead) {
_imp__BackupRead = (void *) _elf_GetProcAddress(_dll_kernel32, "BackupRead");
}
asm("leave\njmp *%0" : : "r"(_imp__BackupRead));
}

void _elf_BackupSeek() asm("BackupSeek");
void *_imp__BackupSeek = NULL;
void _elf_BackupSeek() {
load_dll_kernel32();
if (!_imp__BackupSeek) {
_imp__BackupSeek = (void *) _elf_GetProcAddress(_dll_kernel32, "BackupSeek");
}
asm("leave\njmp *%0" : : "r"(_imp__BackupSeek));
}

void _elf_BackupWrite() asm("BackupWrite");
void *_imp__BackupWrite = NULL;
void _elf_BackupWrite() {
load_dll_kernel32();
if (!_imp__BackupWrite) {
_imp__BackupWrite = (void *) _elf_GetProcAddress(_dll_kernel32, "BackupWrite");
}
asm("leave\njmp *%0" : : "r"(_imp__BackupWrite));
}

void _elf_BaseCheckAppcompatCache() asm("BaseCheckAppcompatCache");
void *_imp__BaseCheckAppcompatCache = NULL;
void _elf_BaseCheckAppcompatCache() {
load_dll_kernel32();
if (!_imp__BaseCheckAppcompatCache) {
_imp__BaseCheckAppcompatCache = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseCheckAppcompatCache");
}
asm("leave\njmp *%0" : : "r"(_imp__BaseCheckAppcompatCache));
}

void _elf_BaseCleanupAppcompatCache() asm("BaseCleanupAppcompatCache");
void *_imp__BaseCleanupAppcompatCache = NULL;
void _elf_BaseCleanupAppcompatCache() {
load_dll_kernel32();
if (!_imp__BaseCleanupAppcompatCache) {
_imp__BaseCleanupAppcompatCache = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseCleanupAppcompatCache");
}
asm("leave\njmp *%0" : : "r"(_imp__BaseCleanupAppcompatCache));
}

void _elf_BaseCleanupAppcompatCacheSupport() asm("BaseCleanupAppcompatCacheSupport");
void *_imp__BaseCleanupAppcompatCacheSupport = NULL;
void _elf_BaseCleanupAppcompatCacheSupport() {
load_dll_kernel32();
if (!_imp__BaseCleanupAppcompatCacheSupport) {
_imp__BaseCleanupAppcompatCacheSupport = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseCleanupAppcompatCacheSupport");
}
asm("leave\njmp *%0" : : "r"(_imp__BaseCleanupAppcompatCacheSupport));
}

void _elf_BaseDumpAppcompatCache() asm("BaseDumpAppcompatCache");
void *_imp__BaseDumpAppcompatCache = NULL;
void _elf_BaseDumpAppcompatCache() {
load_dll_kernel32();
if (!_imp__BaseDumpAppcompatCache) {
_imp__BaseDumpAppcompatCache = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseDumpAppcompatCache");
}
asm("leave\njmp *%0" : : "r"(_imp__BaseDumpAppcompatCache));
}

void _elf_BaseFlushAppcompatCache() asm("BaseFlushAppcompatCache");
void *_imp__BaseFlushAppcompatCache = NULL;
void _elf_BaseFlushAppcompatCache() {
load_dll_kernel32();
if (!_imp__BaseFlushAppcompatCache) {
_imp__BaseFlushAppcompatCache = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseFlushAppcompatCache");
}
asm("leave\njmp *%0" : : "r"(_imp__BaseFlushAppcompatCache));
}

void _elf_BaseInitAppcompatCache() asm("BaseInitAppcompatCache");
void *_imp__BaseInitAppcompatCache = NULL;
void _elf_BaseInitAppcompatCache() {
load_dll_kernel32();
if (!_imp__BaseInitAppcompatCache) {
_imp__BaseInitAppcompatCache = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseInitAppcompatCache");
}
asm("leave\njmp *%0" : : "r"(_imp__BaseInitAppcompatCache));
}

void _elf_BaseInitAppcompatCacheSupport() asm("BaseInitAppcompatCacheSupport");
void *_imp__BaseInitAppcompatCacheSupport = NULL;
void _elf_BaseInitAppcompatCacheSupport() {
load_dll_kernel32();
if (!_imp__BaseInitAppcompatCacheSupport) {
_imp__BaseInitAppcompatCacheSupport = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseInitAppcompatCacheSupport");
}
asm("leave\njmp *%0" : : "r"(_imp__BaseInitAppcompatCacheSupport));
}

void _elf_BaseProcessInitPostImport() asm("BaseProcessInitPostImport");
void *_imp__BaseProcessInitPostImport = NULL;
void _elf_BaseProcessInitPostImport() {
load_dll_kernel32();
if (!_imp__BaseProcessInitPostImport) {
_imp__BaseProcessInitPostImport = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseProcessInitPostImport");
}
asm("leave\njmp *%0" : : "r"(_imp__BaseProcessInitPostImport));
}

void _elf_BaseUpdateAppcompatCache() asm("BaseUpdateAppcompatCache");
void *_imp__BaseUpdateAppcompatCache = NULL;
void _elf_BaseUpdateAppcompatCache() {
load_dll_kernel32();
if (!_imp__BaseUpdateAppcompatCache) {
_imp__BaseUpdateAppcompatCache = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseUpdateAppcompatCache");
}
asm("leave\njmp *%0" : : "r"(_imp__BaseUpdateAppcompatCache));
}

void _elf_Beep() asm("Beep");
void *_imp__Beep = NULL;
void _elf_Beep() {
load_dll_kernel32();
if (!_imp__Beep) {
_imp__Beep = (void *) _elf_GetProcAddress(_dll_kernel32, "Beep");
}
asm("leave\njmp *%0" : : "r"(_imp__Beep));
}

void _elf_BeginUpdateResourceA() asm("BeginUpdateResourceA");
void *_imp__BeginUpdateResourceA = NULL;
void _elf_BeginUpdateResourceA() {
load_dll_kernel32();
if (!_imp__BeginUpdateResourceA) {
_imp__BeginUpdateResourceA = (void *) _elf_GetProcAddress(_dll_kernel32, "BeginUpdateResourceA");
}
asm("leave\njmp *%0" : : "r"(_imp__BeginUpdateResourceA));
}

void _elf_BeginUpdateResourceW() asm("BeginUpdateResourceW");
void *_imp__BeginUpdateResourceW = NULL;
void _elf_BeginUpdateResourceW() {
load_dll_kernel32();
if (!_imp__BeginUpdateResourceW) {
_imp__BeginUpdateResourceW = (void *) _elf_GetProcAddress(_dll_kernel32, "BeginUpdateResourceW");
}
asm("leave\njmp *%0" : : "r"(_imp__BeginUpdateResourceW));
}

void _elf_BindIoCompletionCallback() asm("BindIoCompletionCallback");
void *_imp__BindIoCompletionCallback = NULL;
void _elf_BindIoCompletionCallback() {
load_dll_kernel32();
if (!_imp__BindIoCompletionCallback) {
_imp__BindIoCompletionCallback = (void *) _elf_GetProcAddress(_dll_kernel32, "BindIoCompletionCallback");
}
asm("leave\njmp *%0" : : "r"(_imp__BindIoCompletionCallback));
}

void _elf_BuildCommDCBA() asm("BuildCommDCBA");
void *_imp__BuildCommDCBA = NULL;
void _elf_BuildCommDCBA() {
load_dll_kernel32();
if (!_imp__BuildCommDCBA) {
_imp__BuildCommDCBA = (void *) _elf_GetProcAddress(_dll_kernel32, "BuildCommDCBA");
}
asm("leave\njmp *%0" : : "r"(_imp__BuildCommDCBA));
}

void _elf_BuildCommDCBAndTimeoutsA() asm("BuildCommDCBAndTimeoutsA");
void *_imp__BuildCommDCBAndTimeoutsA = NULL;
void _elf_BuildCommDCBAndTimeoutsA() {
load_dll_kernel32();
if (!_imp__BuildCommDCBAndTimeoutsA) {
_imp__BuildCommDCBAndTimeoutsA = (void *) _elf_GetProcAddress(_dll_kernel32, "BuildCommDCBAndTimeoutsA");
}
asm("leave\njmp *%0" : : "r"(_imp__BuildCommDCBAndTimeoutsA));
}

void _elf_BuildCommDCBAndTimeoutsW() asm("BuildCommDCBAndTimeoutsW");
void *_imp__BuildCommDCBAndTimeoutsW = NULL;
void _elf_BuildCommDCBAndTimeoutsW() {
load_dll_kernel32();
if (!_imp__BuildCommDCBAndTimeoutsW) {
_imp__BuildCommDCBAndTimeoutsW = (void *) _elf_GetProcAddress(_dll_kernel32, "BuildCommDCBAndTimeoutsW");
}
asm("leave\njmp *%0" : : "r"(_imp__BuildCommDCBAndTimeoutsW));
}

void _elf_BuildCommDCBW() asm("BuildCommDCBW");
void *_imp__BuildCommDCBW = NULL;
void _elf_BuildCommDCBW() {
load_dll_kernel32();
if (!_imp__BuildCommDCBW) {
_imp__BuildCommDCBW = (void *) _elf_GetProcAddress(_dll_kernel32, "BuildCommDCBW");
}
asm("leave\njmp *%0" : : "r"(_imp__BuildCommDCBW));
}

void _elf_CallNamedPipeA() asm("CallNamedPipeA");
void *_imp__CallNamedPipeA = NULL;
void _elf_CallNamedPipeA() {
load_dll_kernel32();
if (!_imp__CallNamedPipeA) {
_imp__CallNamedPipeA = (void *) _elf_GetProcAddress(_dll_kernel32, "CallNamedPipeA");
}
asm("leave\njmp *%0" : : "r"(_imp__CallNamedPipeA));
}

void _elf_CallNamedPipeW() asm("CallNamedPipeW");
void *_imp__CallNamedPipeW = NULL;
void _elf_CallNamedPipeW() {
load_dll_kernel32();
if (!_imp__CallNamedPipeW) {
_imp__CallNamedPipeW = (void *) _elf_GetProcAddress(_dll_kernel32, "CallNamedPipeW");
}
asm("leave\njmp *%0" : : "r"(_imp__CallNamedPipeW));
}

void _elf_CancelDeviceWakeupRequest() asm("CancelDeviceWakeupRequest");
void *_imp__CancelDeviceWakeupRequest = NULL;
void _elf_CancelDeviceWakeupRequest() {
load_dll_kernel32();
if (!_imp__CancelDeviceWakeupRequest) {
_imp__CancelDeviceWakeupRequest = (void *) _elf_GetProcAddress(_dll_kernel32, "CancelDeviceWakeupRequest");
}
asm("leave\njmp *%0" : : "r"(_imp__CancelDeviceWakeupRequest));
}

void _elf_CancelIo() asm("CancelIo");
void *_imp__CancelIo = NULL;
void _elf_CancelIo() {
load_dll_kernel32();
if (!_imp__CancelIo) {
_imp__CancelIo = (void *) _elf_GetProcAddress(_dll_kernel32, "CancelIo");
}
asm("leave\njmp *%0" : : "r"(_imp__CancelIo));
}

void _elf_CancelTimerQueueTimer() asm("CancelTimerQueueTimer");
void *_imp__CancelTimerQueueTimer = NULL;
void _elf_CancelTimerQueueTimer() {
load_dll_kernel32();
if (!_imp__CancelTimerQueueTimer) {
_imp__CancelTimerQueueTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "CancelTimerQueueTimer");
}
asm("leave\njmp *%0" : : "r"(_imp__CancelTimerQueueTimer));
}

void _elf_CancelWaitableTimer() asm("CancelWaitableTimer");
void *_imp__CancelWaitableTimer = NULL;
void _elf_CancelWaitableTimer() {
load_dll_kernel32();
if (!_imp__CancelWaitableTimer) {
_imp__CancelWaitableTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "CancelWaitableTimer");
}
asm("leave\njmp *%0" : : "r"(_imp__CancelWaitableTimer));
}

void _elf_ChangeTimerQueueTimer() asm("ChangeTimerQueueTimer");
void *_imp__ChangeTimerQueueTimer = NULL;
void _elf_ChangeTimerQueueTimer() {
load_dll_kernel32();
if (!_imp__ChangeTimerQueueTimer) {
_imp__ChangeTimerQueueTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "ChangeTimerQueueTimer");
}
asm("leave\njmp *%0" : : "r"(_imp__ChangeTimerQueueTimer));
}

void _elf_CheckNameLegalDOS8Dot3A() asm("CheckNameLegalDOS8Dot3A");
void *_imp__CheckNameLegalDOS8Dot3A = NULL;
void _elf_CheckNameLegalDOS8Dot3A() {
load_dll_kernel32();
if (!_imp__CheckNameLegalDOS8Dot3A) {
_imp__CheckNameLegalDOS8Dot3A = (void *) _elf_GetProcAddress(_dll_kernel32, "CheckNameLegalDOS8Dot3A");
}
asm("leave\njmp *%0" : : "r"(_imp__CheckNameLegalDOS8Dot3A));
}

void _elf_CheckNameLegalDOS8Dot3W() asm("CheckNameLegalDOS8Dot3W");
void *_imp__CheckNameLegalDOS8Dot3W = NULL;
void _elf_CheckNameLegalDOS8Dot3W() {
load_dll_kernel32();
if (!_imp__CheckNameLegalDOS8Dot3W) {
_imp__CheckNameLegalDOS8Dot3W = (void *) _elf_GetProcAddress(_dll_kernel32, "CheckNameLegalDOS8Dot3W");
}
asm("leave\njmp *%0" : : "r"(_imp__CheckNameLegalDOS8Dot3W));
}

void _elf_CheckRemoteDebuggerPresent() asm("CheckRemoteDebuggerPresent");
void *_imp__CheckRemoteDebuggerPresent = NULL;
void _elf_CheckRemoteDebuggerPresent() {
load_dll_kernel32();
if (!_imp__CheckRemoteDebuggerPresent) {
_imp__CheckRemoteDebuggerPresent = (void *) _elf_GetProcAddress(_dll_kernel32, "CheckRemoteDebuggerPresent");
}
asm("leave\njmp *%0" : : "r"(_imp__CheckRemoteDebuggerPresent));
}

void _elf_ClearCommBreak() asm("ClearCommBreak");
void *_imp__ClearCommBreak = NULL;
void _elf_ClearCommBreak() {
load_dll_kernel32();
if (!_imp__ClearCommBreak) {
_imp__ClearCommBreak = (void *) _elf_GetProcAddress(_dll_kernel32, "ClearCommBreak");
}
asm("leave\njmp *%0" : : "r"(_imp__ClearCommBreak));
}

void _elf_ClearCommError() asm("ClearCommError");
void *_imp__ClearCommError = NULL;
void _elf_ClearCommError() {
load_dll_kernel32();
if (!_imp__ClearCommError) {
_imp__ClearCommError = (void *) _elf_GetProcAddress(_dll_kernel32, "ClearCommError");
}
asm("leave\njmp *%0" : : "r"(_imp__ClearCommError));
}

void _elf_CloseConsoleHandle() asm("CloseConsoleHandle");
void *_imp__CloseConsoleHandle = NULL;
void _elf_CloseConsoleHandle() {
load_dll_kernel32();
if (!_imp__CloseConsoleHandle) {
_imp__CloseConsoleHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "CloseConsoleHandle");
}
asm("leave\njmp *%0" : : "r"(_imp__CloseConsoleHandle));
}

void _elf_CloseHandle() asm("CloseHandle");
void *_imp__CloseHandle = NULL;
void _elf_CloseHandle() {
load_dll_kernel32();
if (!_imp__CloseHandle) {
_imp__CloseHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "CloseHandle");
}
asm("leave\njmp *%0" : : "r"(_imp__CloseHandle));
}

void _elf_CloseProfileUserMapping() asm("CloseProfileUserMapping");
void *_imp__CloseProfileUserMapping = NULL;
void _elf_CloseProfileUserMapping() {
load_dll_kernel32();
if (!_imp__CloseProfileUserMapping) {
_imp__CloseProfileUserMapping = (void *) _elf_GetProcAddress(_dll_kernel32, "CloseProfileUserMapping");
}
asm("leave\njmp *%0" : : "r"(_imp__CloseProfileUserMapping));
}

void _elf_CmdBatNotification() asm("CmdBatNotification");
void *_imp__CmdBatNotification = NULL;
void _elf_CmdBatNotification() {
load_dll_kernel32();
if (!_imp__CmdBatNotification) {
_imp__CmdBatNotification = (void *) _elf_GetProcAddress(_dll_kernel32, "CmdBatNotification");
}
asm("leave\njmp *%0" : : "r"(_imp__CmdBatNotification));
}

void _elf_CommConfigDialogA() asm("CommConfigDialogA");
void *_imp__CommConfigDialogA = NULL;
void _elf_CommConfigDialogA() {
load_dll_kernel32();
if (!_imp__CommConfigDialogA) {
_imp__CommConfigDialogA = (void *) _elf_GetProcAddress(_dll_kernel32, "CommConfigDialogA");
}
asm("leave\njmp *%0" : : "r"(_imp__CommConfigDialogA));
}

void _elf_CommConfigDialogW() asm("CommConfigDialogW");
void *_imp__CommConfigDialogW = NULL;
void _elf_CommConfigDialogW() {
load_dll_kernel32();
if (!_imp__CommConfigDialogW) {
_imp__CommConfigDialogW = (void *) _elf_GetProcAddress(_dll_kernel32, "CommConfigDialogW");
}
asm("leave\njmp *%0" : : "r"(_imp__CommConfigDialogW));
}

void _elf_CompareFileTime() asm("CompareFileTime");
void *_imp__CompareFileTime = NULL;
void _elf_CompareFileTime() {
load_dll_kernel32();
if (!_imp__CompareFileTime) {
_imp__CompareFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "CompareFileTime");
}
asm("leave\njmp *%0" : : "r"(_imp__CompareFileTime));
}

void _elf_CompareStringA() asm("CompareStringA");
void *_imp__CompareStringA = NULL;
void _elf_CompareStringA() {
load_dll_kernel32();
if (!_imp__CompareStringA) {
_imp__CompareStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "CompareStringA");
}
asm("leave\njmp *%0" : : "r"(_imp__CompareStringA));
}

void _elf_CompareStringW() asm("CompareStringW");
void *_imp__CompareStringW = NULL;
void _elf_CompareStringW() {
load_dll_kernel32();
if (!_imp__CompareStringW) {
_imp__CompareStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "CompareStringW");
}
asm("leave\njmp *%0" : : "r"(_imp__CompareStringW));
}

void _elf_ConnectNamedPipe() asm("ConnectNamedPipe");
void *_imp__ConnectNamedPipe = NULL;
void _elf_ConnectNamedPipe() {
load_dll_kernel32();
if (!_imp__ConnectNamedPipe) {
_imp__ConnectNamedPipe = (void *) _elf_GetProcAddress(_dll_kernel32, "ConnectNamedPipe");
}
asm("leave\njmp *%0" : : "r"(_imp__ConnectNamedPipe));
}

void _elf_ConsoleMenuControl() asm("ConsoleMenuControl");
void *_imp__ConsoleMenuControl = NULL;
void _elf_ConsoleMenuControl() {
load_dll_kernel32();
if (!_imp__ConsoleMenuControl) {
_imp__ConsoleMenuControl = (void *) _elf_GetProcAddress(_dll_kernel32, "ConsoleMenuControl");
}
asm("leave\njmp *%0" : : "r"(_imp__ConsoleMenuControl));
}

void _elf_ContinueDebugEvent() asm("ContinueDebugEvent");
void *_imp__ContinueDebugEvent = NULL;
void _elf_ContinueDebugEvent() {
load_dll_kernel32();
if (!_imp__ContinueDebugEvent) {
_imp__ContinueDebugEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "ContinueDebugEvent");
}
asm("leave\njmp *%0" : : "r"(_imp__ContinueDebugEvent));
}

void _elf_ConvertDefaultLocale() asm("ConvertDefaultLocale");
void *_imp__ConvertDefaultLocale = NULL;
void _elf_ConvertDefaultLocale() {
load_dll_kernel32();
if (!_imp__ConvertDefaultLocale) {
_imp__ConvertDefaultLocale = (void *) _elf_GetProcAddress(_dll_kernel32, "ConvertDefaultLocale");
}
asm("leave\njmp *%0" : : "r"(_imp__ConvertDefaultLocale));
}

void _elf_ConvertFiberToThread() asm("ConvertFiberToThread");
void *_imp__ConvertFiberToThread = NULL;
void _elf_ConvertFiberToThread() {
load_dll_kernel32();
if (!_imp__ConvertFiberToThread) {
_imp__ConvertFiberToThread = (void *) _elf_GetProcAddress(_dll_kernel32, "ConvertFiberToThread");
}
asm("leave\njmp *%0" : : "r"(_imp__ConvertFiberToThread));
}

void _elf_ConvertThreadToFiber() asm("ConvertThreadToFiber");
void *_imp__ConvertThreadToFiber = NULL;
void _elf_ConvertThreadToFiber() {
load_dll_kernel32();
if (!_imp__ConvertThreadToFiber) {
_imp__ConvertThreadToFiber = (void *) _elf_GetProcAddress(_dll_kernel32, "ConvertThreadToFiber");
}
asm("leave\njmp *%0" : : "r"(_imp__ConvertThreadToFiber));
}

void _elf_CopyFileA() asm("CopyFileA");
void *_imp__CopyFileA = NULL;
void _elf_CopyFileA() {
load_dll_kernel32();
if (!_imp__CopyFileA) {
_imp__CopyFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "CopyFileA");
}
asm("leave\njmp *%0" : : "r"(_imp__CopyFileA));
}

void _elf_CopyFileExA() asm("CopyFileExA");
void *_imp__CopyFileExA = NULL;
void _elf_CopyFileExA() {
load_dll_kernel32();
if (!_imp__CopyFileExA) {
_imp__CopyFileExA = (void *) _elf_GetProcAddress(_dll_kernel32, "CopyFileExA");
}
asm("leave\njmp *%0" : : "r"(_imp__CopyFileExA));
}

void _elf_CopyFileExW() asm("CopyFileExW");
void *_imp__CopyFileExW = NULL;
void _elf_CopyFileExW() {
load_dll_kernel32();
if (!_imp__CopyFileExW) {
_imp__CopyFileExW = (void *) _elf_GetProcAddress(_dll_kernel32, "CopyFileExW");
}
asm("leave\njmp *%0" : : "r"(_imp__CopyFileExW));
}

void _elf_CopyFileW() asm("CopyFileW");
void *_imp__CopyFileW = NULL;
void _elf_CopyFileW() {
load_dll_kernel32();
if (!_imp__CopyFileW) {
_imp__CopyFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "CopyFileW");
}
asm("leave\njmp *%0" : : "r"(_imp__CopyFileW));
}

void _elf_CopyLZFile() asm("CopyLZFile");
void *_imp__CopyLZFile = NULL;
void _elf_CopyLZFile() {
load_dll_kernel32();
if (!_imp__CopyLZFile) {
_imp__CopyLZFile = (void *) _elf_GetProcAddress(_dll_kernel32, "CopyLZFile");
}
asm("leave\njmp *%0" : : "r"(_imp__CopyLZFile));
}

void _elf_CreateActCtxA() asm("CreateActCtxA");
void *_imp__CreateActCtxA = NULL;
void _elf_CreateActCtxA() {
load_dll_kernel32();
if (!_imp__CreateActCtxA) {
_imp__CreateActCtxA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateActCtxA");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateActCtxA));
}

void _elf_CreateActCtxW() asm("CreateActCtxW");
void *_imp__CreateActCtxW = NULL;
void _elf_CreateActCtxW() {
load_dll_kernel32();
if (!_imp__CreateActCtxW) {
_imp__CreateActCtxW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateActCtxW");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateActCtxW));
}

void _elf_CreateConsoleScreenBuffer() asm("CreateConsoleScreenBuffer");
void *_imp__CreateConsoleScreenBuffer = NULL;
void _elf_CreateConsoleScreenBuffer() {
load_dll_kernel32();
if (!_imp__CreateConsoleScreenBuffer) {
_imp__CreateConsoleScreenBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateConsoleScreenBuffer");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateConsoleScreenBuffer));
}

void _elf_CreateDirectoryA() asm("CreateDirectoryA");
void *_imp__CreateDirectoryA = NULL;
void _elf_CreateDirectoryA() {
load_dll_kernel32();
if (!_imp__CreateDirectoryA) {
_imp__CreateDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateDirectoryA");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateDirectoryA));
}

void _elf_CreateDirectoryExA() asm("CreateDirectoryExA");
void *_imp__CreateDirectoryExA = NULL;
void _elf_CreateDirectoryExA() {
load_dll_kernel32();
if (!_imp__CreateDirectoryExA) {
_imp__CreateDirectoryExA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateDirectoryExA");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateDirectoryExA));
}

void _elf_CreateDirectoryExW() asm("CreateDirectoryExW");
void *_imp__CreateDirectoryExW = NULL;
void _elf_CreateDirectoryExW() {
load_dll_kernel32();
if (!_imp__CreateDirectoryExW) {
_imp__CreateDirectoryExW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateDirectoryExW");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateDirectoryExW));
}

void _elf_CreateDirectoryW() asm("CreateDirectoryW");
void *_imp__CreateDirectoryW = NULL;
void _elf_CreateDirectoryW() {
load_dll_kernel32();
if (!_imp__CreateDirectoryW) {
_imp__CreateDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateDirectoryW");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateDirectoryW));
}

void _elf_CreateEventA() asm("CreateEventA");
void *_imp__CreateEventA = NULL;
void _elf_CreateEventA() {
load_dll_kernel32();
if (!_imp__CreateEventA) {
_imp__CreateEventA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateEventA");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateEventA));
}

void _elf_CreateEventW() asm("CreateEventW");
void *_imp__CreateEventW = NULL;
void _elf_CreateEventW() {
load_dll_kernel32();
if (!_imp__CreateEventW) {
_imp__CreateEventW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateEventW");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateEventW));
}

void _elf_CreateFiber() asm("CreateFiber");
void *_imp__CreateFiber = NULL;
void _elf_CreateFiber() {
load_dll_kernel32();
if (!_imp__CreateFiber) {
_imp__CreateFiber = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateFiber");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateFiber));
}

void _elf_CreateFiberEx() asm("CreateFiberEx");
void *_imp__CreateFiberEx = NULL;
void _elf_CreateFiberEx() {
load_dll_kernel32();
if (!_imp__CreateFiberEx) {
_imp__CreateFiberEx = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateFiberEx");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateFiberEx));
}

void _elf_CreateFileA() asm("CreateFileA");
void *_imp__CreateFileA = NULL;
void _elf_CreateFileA() {
load_dll_kernel32();
if (!_imp__CreateFileA) {
_imp__CreateFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateFileA");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateFileA));
}

void _elf_CreateFileMappingA() asm("CreateFileMappingA");
void *_imp__CreateFileMappingA = NULL;
void _elf_CreateFileMappingA() {
load_dll_kernel32();
if (!_imp__CreateFileMappingA) {
_imp__CreateFileMappingA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateFileMappingA");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateFileMappingA));
}

void _elf_CreateFileMappingW() asm("CreateFileMappingW");
void *_imp__CreateFileMappingW = NULL;
void _elf_CreateFileMappingW() {
load_dll_kernel32();
if (!_imp__CreateFileMappingW) {
_imp__CreateFileMappingW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateFileMappingW");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateFileMappingW));
}

void _elf_CreateFileW() asm("CreateFileW");
void *_imp__CreateFileW = NULL;
void _elf_CreateFileW() {
load_dll_kernel32();
if (!_imp__CreateFileW) {
_imp__CreateFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateFileW");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateFileW));
}

void _elf_CreateHardLinkA() asm("CreateHardLinkA");
void *_imp__CreateHardLinkA = NULL;
void _elf_CreateHardLinkA() {
load_dll_kernel32();
if (!_imp__CreateHardLinkA) {
_imp__CreateHardLinkA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateHardLinkA");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateHardLinkA));
}

void _elf_CreateHardLinkW() asm("CreateHardLinkW");
void *_imp__CreateHardLinkW = NULL;
void _elf_CreateHardLinkW() {
load_dll_kernel32();
if (!_imp__CreateHardLinkW) {
_imp__CreateHardLinkW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateHardLinkW");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateHardLinkW));
}

void _elf_CreateIoCompletionPort() asm("CreateIoCompletionPort");
void *_imp__CreateIoCompletionPort = NULL;
void _elf_CreateIoCompletionPort() {
load_dll_kernel32();
if (!_imp__CreateIoCompletionPort) {
_imp__CreateIoCompletionPort = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateIoCompletionPort");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateIoCompletionPort));
}

void _elf_CreateJobObjectA() asm("CreateJobObjectA");
void *_imp__CreateJobObjectA = NULL;
void _elf_CreateJobObjectA() {
load_dll_kernel32();
if (!_imp__CreateJobObjectA) {
_imp__CreateJobObjectA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateJobObjectA");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateJobObjectA));
}

void _elf_CreateJobObjectW() asm("CreateJobObjectW");
void *_imp__CreateJobObjectW = NULL;
void _elf_CreateJobObjectW() {
load_dll_kernel32();
if (!_imp__CreateJobObjectW) {
_imp__CreateJobObjectW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateJobObjectW");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateJobObjectW));
}

void _elf_CreateJobSet() asm("CreateJobSet");
void *_imp__CreateJobSet = NULL;
void _elf_CreateJobSet() {
load_dll_kernel32();
if (!_imp__CreateJobSet) {
_imp__CreateJobSet = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateJobSet");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateJobSet));
}

void _elf_CreateMailslotA() asm("CreateMailslotA");
void *_imp__CreateMailslotA = NULL;
void _elf_CreateMailslotA() {
load_dll_kernel32();
if (!_imp__CreateMailslotA) {
_imp__CreateMailslotA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateMailslotA");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateMailslotA));
}

void _elf_CreateMailslotW() asm("CreateMailslotW");
void *_imp__CreateMailslotW = NULL;
void _elf_CreateMailslotW() {
load_dll_kernel32();
if (!_imp__CreateMailslotW) {
_imp__CreateMailslotW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateMailslotW");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateMailslotW));
}

void _elf_CreateMemoryResourceNotification() asm("CreateMemoryResourceNotification");
void *_imp__CreateMemoryResourceNotification = NULL;
void _elf_CreateMemoryResourceNotification() {
load_dll_kernel32();
if (!_imp__CreateMemoryResourceNotification) {
_imp__CreateMemoryResourceNotification = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateMemoryResourceNotification");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateMemoryResourceNotification));
}

void _elf_CreateMutexA() asm("CreateMutexA");
void *_imp__CreateMutexA = NULL;
void _elf_CreateMutexA() {
load_dll_kernel32();
if (!_imp__CreateMutexA) {
_imp__CreateMutexA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateMutexA");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateMutexA));
}

void _elf_CreateMutexW() asm("CreateMutexW");
void *_imp__CreateMutexW = NULL;
void _elf_CreateMutexW() {
load_dll_kernel32();
if (!_imp__CreateMutexW) {
_imp__CreateMutexW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateMutexW");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateMutexW));
}

void _elf_CreateNamedPipeA() asm("CreateNamedPipeA");
void *_imp__CreateNamedPipeA = NULL;
void _elf_CreateNamedPipeA() {
load_dll_kernel32();
if (!_imp__CreateNamedPipeA) {
_imp__CreateNamedPipeA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateNamedPipeA");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateNamedPipeA));
}

void _elf_CreateNamedPipeW() asm("CreateNamedPipeW");
void *_imp__CreateNamedPipeW = NULL;
void _elf_CreateNamedPipeW() {
load_dll_kernel32();
if (!_imp__CreateNamedPipeW) {
_imp__CreateNamedPipeW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateNamedPipeW");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateNamedPipeW));
}

void _elf_CreateNlsSecurityDescriptor() asm("CreateNlsSecurityDescriptor");
void *_imp__CreateNlsSecurityDescriptor = NULL;
void _elf_CreateNlsSecurityDescriptor() {
load_dll_kernel32();
if (!_imp__CreateNlsSecurityDescriptor) {
_imp__CreateNlsSecurityDescriptor = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateNlsSecurityDescriptor");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateNlsSecurityDescriptor));
}

void _elf_CreatePipe() asm("CreatePipe");
void *_imp__CreatePipe = NULL;
void _elf_CreatePipe() {
load_dll_kernel32();
if (!_imp__CreatePipe) {
_imp__CreatePipe = (void *) _elf_GetProcAddress(_dll_kernel32, "CreatePipe");
}
asm("leave\njmp *%0" : : "r"(_imp__CreatePipe));
}

void _elf_CreateProcessA() asm("CreateProcessA");
void *_imp__CreateProcessA = NULL;
void _elf_CreateProcessA() {
load_dll_kernel32();
if (!_imp__CreateProcessA) {
_imp__CreateProcessA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateProcessA");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateProcessA));
}

void _elf_CreateProcessInternalA() asm("CreateProcessInternalA");
void *_imp__CreateProcessInternalA = NULL;
void _elf_CreateProcessInternalA() {
load_dll_kernel32();
if (!_imp__CreateProcessInternalA) {
_imp__CreateProcessInternalA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateProcessInternalA");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateProcessInternalA));
}

void _elf_CreateProcessInternalW() asm("CreateProcessInternalW");
void *_imp__CreateProcessInternalW = NULL;
void _elf_CreateProcessInternalW() {
load_dll_kernel32();
if (!_imp__CreateProcessInternalW) {
_imp__CreateProcessInternalW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateProcessInternalW");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateProcessInternalW));
}

void _elf_CreateProcessW() asm("CreateProcessW");
void *_imp__CreateProcessW = NULL;
void _elf_CreateProcessW() {
load_dll_kernel32();
if (!_imp__CreateProcessW) {
_imp__CreateProcessW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateProcessW");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateProcessW));
}

void _elf_CreateRemoteThread() asm("CreateRemoteThread");
void *_imp__CreateRemoteThread = NULL;
void _elf_CreateRemoteThread() {
load_dll_kernel32();
if (!_imp__CreateRemoteThread) {
_imp__CreateRemoteThread = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateRemoteThread");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateRemoteThread));
}

void _elf_CreateSemaphoreA() asm("CreateSemaphoreA");
void *_imp__CreateSemaphoreA = NULL;
void _elf_CreateSemaphoreA() {
load_dll_kernel32();
if (!_imp__CreateSemaphoreA) {
_imp__CreateSemaphoreA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateSemaphoreA");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateSemaphoreA));
}

void _elf_CreateSemaphoreW() asm("CreateSemaphoreW");
void *_imp__CreateSemaphoreW = NULL;
void _elf_CreateSemaphoreW() {
load_dll_kernel32();
if (!_imp__CreateSemaphoreW) {
_imp__CreateSemaphoreW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateSemaphoreW");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateSemaphoreW));
}

void _elf_CreateSocketHandle() asm("CreateSocketHandle");
void *_imp__CreateSocketHandle = NULL;
void _elf_CreateSocketHandle() {
load_dll_kernel32();
if (!_imp__CreateSocketHandle) {
_imp__CreateSocketHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateSocketHandle");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateSocketHandle));
}

void _elf_CreateTapePartition() asm("CreateTapePartition");
void *_imp__CreateTapePartition = NULL;
void _elf_CreateTapePartition() {
load_dll_kernel32();
if (!_imp__CreateTapePartition) {
_imp__CreateTapePartition = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateTapePartition");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateTapePartition));
}

void _elf_CreateThread() asm("CreateThread");
void *_imp__CreateThread = NULL;
void _elf_CreateThread() {
load_dll_kernel32();
if (!_imp__CreateThread) {
_imp__CreateThread = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateThread");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateThread));
}

void _elf_CreateTimerQueue() asm("CreateTimerQueue");
void *_imp__CreateTimerQueue = NULL;
void _elf_CreateTimerQueue() {
load_dll_kernel32();
if (!_imp__CreateTimerQueue) {
_imp__CreateTimerQueue = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateTimerQueue");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateTimerQueue));
}

void _elf_CreateTimerQueueTimer() asm("CreateTimerQueueTimer");
void *_imp__CreateTimerQueueTimer = NULL;
void _elf_CreateTimerQueueTimer() {
load_dll_kernel32();
if (!_imp__CreateTimerQueueTimer) {
_imp__CreateTimerQueueTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateTimerQueueTimer");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateTimerQueueTimer));
}

void _elf_CreateToolhelp32Snapshot() asm("CreateToolhelp32Snapshot");
void *_imp__CreateToolhelp32Snapshot = NULL;
void _elf_CreateToolhelp32Snapshot() {
load_dll_kernel32();
if (!_imp__CreateToolhelp32Snapshot) {
_imp__CreateToolhelp32Snapshot = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateToolhelp32Snapshot");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateToolhelp32Snapshot));
}

void _elf_CreateVirtualBuffer() asm("CreateVirtualBuffer");
void *_imp__CreateVirtualBuffer = NULL;
void _elf_CreateVirtualBuffer() {
load_dll_kernel32();
if (!_imp__CreateVirtualBuffer) {
_imp__CreateVirtualBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateVirtualBuffer");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateVirtualBuffer));
}

void _elf_CreateWaitableTimerA() asm("CreateWaitableTimerA");
void *_imp__CreateWaitableTimerA = NULL;
void _elf_CreateWaitableTimerA() {
load_dll_kernel32();
if (!_imp__CreateWaitableTimerA) {
_imp__CreateWaitableTimerA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateWaitableTimerA");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateWaitableTimerA));
}

void _elf_CreateWaitableTimerW() asm("CreateWaitableTimerW");
void *_imp__CreateWaitableTimerW = NULL;
void _elf_CreateWaitableTimerW() {
load_dll_kernel32();
if (!_imp__CreateWaitableTimerW) {
_imp__CreateWaitableTimerW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateWaitableTimerW");
}
asm("leave\njmp *%0" : : "r"(_imp__CreateWaitableTimerW));
}

void _elf_DeactivateActCtx() asm("DeactivateActCtx");
void *_imp__DeactivateActCtx = NULL;
void _elf_DeactivateActCtx() {
load_dll_kernel32();
if (!_imp__DeactivateActCtx) {
_imp__DeactivateActCtx = (void *) _elf_GetProcAddress(_dll_kernel32, "DeactivateActCtx");
}
asm("leave\njmp *%0" : : "r"(_imp__DeactivateActCtx));
}

void _elf_DebugActiveProcess() asm("DebugActiveProcess");
void *_imp__DebugActiveProcess = NULL;
void _elf_DebugActiveProcess() {
load_dll_kernel32();
if (!_imp__DebugActiveProcess) {
_imp__DebugActiveProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "DebugActiveProcess");
}
asm("leave\njmp *%0" : : "r"(_imp__DebugActiveProcess));
}

void _elf_DebugActiveProcessStop() asm("DebugActiveProcessStop");
void *_imp__DebugActiveProcessStop = NULL;
void _elf_DebugActiveProcessStop() {
load_dll_kernel32();
if (!_imp__DebugActiveProcessStop) {
_imp__DebugActiveProcessStop = (void *) _elf_GetProcAddress(_dll_kernel32, "DebugActiveProcessStop");
}
asm("leave\njmp *%0" : : "r"(_imp__DebugActiveProcessStop));
}

void _elf_DebugBreak() asm("DebugBreak");
void *_imp__DebugBreak = NULL;
void _elf_DebugBreak() {
load_dll_kernel32();
if (!_imp__DebugBreak) {
_imp__DebugBreak = (void *) _elf_GetProcAddress(_dll_kernel32, "DebugBreak");
}
asm("leave\njmp *%0" : : "r"(_imp__DebugBreak));
}

void _elf_DebugBreakProcess() asm("DebugBreakProcess");
void *_imp__DebugBreakProcess = NULL;
void _elf_DebugBreakProcess() {
load_dll_kernel32();
if (!_imp__DebugBreakProcess) {
_imp__DebugBreakProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "DebugBreakProcess");
}
asm("leave\njmp *%0" : : "r"(_imp__DebugBreakProcess));
}

void _elf_DebugSetProcessKillOnExit() asm("DebugSetProcessKillOnExit");
void *_imp__DebugSetProcessKillOnExit = NULL;
void _elf_DebugSetProcessKillOnExit() {
load_dll_kernel32();
if (!_imp__DebugSetProcessKillOnExit) {
_imp__DebugSetProcessKillOnExit = (void *) _elf_GetProcAddress(_dll_kernel32, "DebugSetProcessKillOnExit");
}
asm("leave\njmp *%0" : : "r"(_imp__DebugSetProcessKillOnExit));
}

void _elf_DefineDosDeviceA() asm("DefineDosDeviceA");
void *_imp__DefineDosDeviceA = NULL;
void _elf_DefineDosDeviceA() {
load_dll_kernel32();
if (!_imp__DefineDosDeviceA) {
_imp__DefineDosDeviceA = (void *) _elf_GetProcAddress(_dll_kernel32, "DefineDosDeviceA");
}
asm("leave\njmp *%0" : : "r"(_imp__DefineDosDeviceA));
}

void _elf_DefineDosDeviceW() asm("DefineDosDeviceW");
void *_imp__DefineDosDeviceW = NULL;
void _elf_DefineDosDeviceW() {
load_dll_kernel32();
if (!_imp__DefineDosDeviceW) {
_imp__DefineDosDeviceW = (void *) _elf_GetProcAddress(_dll_kernel32, "DefineDosDeviceW");
}
asm("leave\njmp *%0" : : "r"(_imp__DefineDosDeviceW));
}

void _elf_DelayLoadFailureHook() asm("DelayLoadFailureHook");
void *_imp__DelayLoadFailureHook = NULL;
void _elf_DelayLoadFailureHook() {
load_dll_kernel32();
if (!_imp__DelayLoadFailureHook) {
_imp__DelayLoadFailureHook = (void *) _elf_GetProcAddress(_dll_kernel32, "DelayLoadFailureHook");
}
asm("leave\njmp *%0" : : "r"(_imp__DelayLoadFailureHook));
}

void _elf_DeleteAtom() asm("DeleteAtom");
void *_imp__DeleteAtom = NULL;
void _elf_DeleteAtom() {
load_dll_kernel32();
if (!_imp__DeleteAtom) {
_imp__DeleteAtom = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteAtom");
}
asm("leave\njmp *%0" : : "r"(_imp__DeleteAtom));
}

void _elf_DeleteCriticalSection() asm("DeleteCriticalSection");
void *_imp__DeleteCriticalSection = NULL;
void _elf_DeleteCriticalSection() {
load_dll_kernel32();
if (!_imp__DeleteCriticalSection) {
_imp__DeleteCriticalSection = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteCriticalSection");
}
asm("leave\njmp *%0" : : "r"(_imp__DeleteCriticalSection));
}

void _elf_DeleteFiber() asm("DeleteFiber");
void *_imp__DeleteFiber = NULL;
void _elf_DeleteFiber() {
load_dll_kernel32();
if (!_imp__DeleteFiber) {
_imp__DeleteFiber = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteFiber");
}
asm("leave\njmp *%0" : : "r"(_imp__DeleteFiber));
}

void _elf_DeleteFileA() asm("DeleteFileA");
void *_imp__DeleteFileA = NULL;
void _elf_DeleteFileA() {
load_dll_kernel32();
if (!_imp__DeleteFileA) {
_imp__DeleteFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteFileA");
}
asm("leave\njmp *%0" : : "r"(_imp__DeleteFileA));
}

void _elf_DeleteFileW() asm("DeleteFileW");
void *_imp__DeleteFileW = NULL;
void _elf_DeleteFileW() {
load_dll_kernel32();
if (!_imp__DeleteFileW) {
_imp__DeleteFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteFileW");
}
asm("leave\njmp *%0" : : "r"(_imp__DeleteFileW));
}

void _elf_DeleteTimerQueue() asm("DeleteTimerQueue");
void *_imp__DeleteTimerQueue = NULL;
void _elf_DeleteTimerQueue() {
load_dll_kernel32();
if (!_imp__DeleteTimerQueue) {
_imp__DeleteTimerQueue = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteTimerQueue");
}
asm("leave\njmp *%0" : : "r"(_imp__DeleteTimerQueue));
}

void _elf_DeleteTimerQueueEx() asm("DeleteTimerQueueEx");
void *_imp__DeleteTimerQueueEx = NULL;
void _elf_DeleteTimerQueueEx() {
load_dll_kernel32();
if (!_imp__DeleteTimerQueueEx) {
_imp__DeleteTimerQueueEx = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteTimerQueueEx");
}
asm("leave\njmp *%0" : : "r"(_imp__DeleteTimerQueueEx));
}

void _elf_DeleteTimerQueueTimer() asm("DeleteTimerQueueTimer");
void *_imp__DeleteTimerQueueTimer = NULL;
void _elf_DeleteTimerQueueTimer() {
load_dll_kernel32();
if (!_imp__DeleteTimerQueueTimer) {
_imp__DeleteTimerQueueTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteTimerQueueTimer");
}
asm("leave\njmp *%0" : : "r"(_imp__DeleteTimerQueueTimer));
}

void _elf_DeleteVolumeMountPointA() asm("DeleteVolumeMountPointA");
void *_imp__DeleteVolumeMountPointA = NULL;
void _elf_DeleteVolumeMountPointA() {
load_dll_kernel32();
if (!_imp__DeleteVolumeMountPointA) {
_imp__DeleteVolumeMountPointA = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteVolumeMountPointA");
}
asm("leave\njmp *%0" : : "r"(_imp__DeleteVolumeMountPointA));
}

void _elf_DeleteVolumeMountPointW() asm("DeleteVolumeMountPointW");
void *_imp__DeleteVolumeMountPointW = NULL;
void _elf_DeleteVolumeMountPointW() {
load_dll_kernel32();
if (!_imp__DeleteVolumeMountPointW) {
_imp__DeleteVolumeMountPointW = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteVolumeMountPointW");
}
asm("leave\njmp *%0" : : "r"(_imp__DeleteVolumeMountPointW));
}

void _elf_DeviceIoControl() asm("DeviceIoControl");
void *_imp__DeviceIoControl = NULL;
void _elf_DeviceIoControl() {
load_dll_kernel32();
if (!_imp__DeviceIoControl) {
_imp__DeviceIoControl = (void *) _elf_GetProcAddress(_dll_kernel32, "DeviceIoControl");
}
asm("leave\njmp *%0" : : "r"(_imp__DeviceIoControl));
}

void _elf_DisableThreadLibraryCalls() asm("DisableThreadLibraryCalls");
void *_imp__DisableThreadLibraryCalls = NULL;
void _elf_DisableThreadLibraryCalls() {
load_dll_kernel32();
if (!_imp__DisableThreadLibraryCalls) {
_imp__DisableThreadLibraryCalls = (void *) _elf_GetProcAddress(_dll_kernel32, "DisableThreadLibraryCalls");
}
asm("leave\njmp *%0" : : "r"(_imp__DisableThreadLibraryCalls));
}

void _elf_DisconnectNamedPipe() asm("DisconnectNamedPipe");
void *_imp__DisconnectNamedPipe = NULL;
void _elf_DisconnectNamedPipe() {
load_dll_kernel32();
if (!_imp__DisconnectNamedPipe) {
_imp__DisconnectNamedPipe = (void *) _elf_GetProcAddress(_dll_kernel32, "DisconnectNamedPipe");
}
asm("leave\njmp *%0" : : "r"(_imp__DisconnectNamedPipe));
}

void _elf_DnsHostnameToComputerNameA() asm("DnsHostnameToComputerNameA");
void *_imp__DnsHostnameToComputerNameA = NULL;
void _elf_DnsHostnameToComputerNameA() {
load_dll_kernel32();
if (!_imp__DnsHostnameToComputerNameA) {
_imp__DnsHostnameToComputerNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "DnsHostnameToComputerNameA");
}
asm("leave\njmp *%0" : : "r"(_imp__DnsHostnameToComputerNameA));
}

void _elf_DnsHostnameToComputerNameW() asm("DnsHostnameToComputerNameW");
void *_imp__DnsHostnameToComputerNameW = NULL;
void _elf_DnsHostnameToComputerNameW() {
load_dll_kernel32();
if (!_imp__DnsHostnameToComputerNameW) {
_imp__DnsHostnameToComputerNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "DnsHostnameToComputerNameW");
}
asm("leave\njmp *%0" : : "r"(_imp__DnsHostnameToComputerNameW));
}

void _elf_DosDateTimeToFileTime() asm("DosDateTimeToFileTime");
void *_imp__DosDateTimeToFileTime = NULL;
void _elf_DosDateTimeToFileTime() {
load_dll_kernel32();
if (!_imp__DosDateTimeToFileTime) {
_imp__DosDateTimeToFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "DosDateTimeToFileTime");
}
asm("leave\njmp *%0" : : "r"(_imp__DosDateTimeToFileTime));
}

void _elf_DosPathToSessionPathA() asm("DosPathToSessionPathA");
void *_imp__DosPathToSessionPathA = NULL;
void _elf_DosPathToSessionPathA() {
load_dll_kernel32();
if (!_imp__DosPathToSessionPathA) {
_imp__DosPathToSessionPathA = (void *) _elf_GetProcAddress(_dll_kernel32, "DosPathToSessionPathA");
}
asm("leave\njmp *%0" : : "r"(_imp__DosPathToSessionPathA));
}

void _elf_DosPathToSessionPathW() asm("DosPathToSessionPathW");
void *_imp__DosPathToSessionPathW = NULL;
void _elf_DosPathToSessionPathW() {
load_dll_kernel32();
if (!_imp__DosPathToSessionPathW) {
_imp__DosPathToSessionPathW = (void *) _elf_GetProcAddress(_dll_kernel32, "DosPathToSessionPathW");
}
asm("leave\njmp *%0" : : "r"(_imp__DosPathToSessionPathW));
}

void _elf_DuplicateConsoleHandle() asm("DuplicateConsoleHandle");
void *_imp__DuplicateConsoleHandle = NULL;
void _elf_DuplicateConsoleHandle() {
load_dll_kernel32();
if (!_imp__DuplicateConsoleHandle) {
_imp__DuplicateConsoleHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "DuplicateConsoleHandle");
}
asm("leave\njmp *%0" : : "r"(_imp__DuplicateConsoleHandle));
}

void _elf_DuplicateHandle() asm("DuplicateHandle");
void *_imp__DuplicateHandle = NULL;
void _elf_DuplicateHandle() {
load_dll_kernel32();
if (!_imp__DuplicateHandle) {
_imp__DuplicateHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "DuplicateHandle");
}
asm("leave\njmp *%0" : : "r"(_imp__DuplicateHandle));
}

void _elf_EndUpdateResourceA() asm("EndUpdateResourceA");
void *_imp__EndUpdateResourceA = NULL;
void _elf_EndUpdateResourceA() {
load_dll_kernel32();
if (!_imp__EndUpdateResourceA) {
_imp__EndUpdateResourceA = (void *) _elf_GetProcAddress(_dll_kernel32, "EndUpdateResourceA");
}
asm("leave\njmp *%0" : : "r"(_imp__EndUpdateResourceA));
}

void _elf_EndUpdateResourceW() asm("EndUpdateResourceW");
void *_imp__EndUpdateResourceW = NULL;
void _elf_EndUpdateResourceW() {
load_dll_kernel32();
if (!_imp__EndUpdateResourceW) {
_imp__EndUpdateResourceW = (void *) _elf_GetProcAddress(_dll_kernel32, "EndUpdateResourceW");
}
asm("leave\njmp *%0" : : "r"(_imp__EndUpdateResourceW));
}

void _elf_EnterCriticalSection() asm("EnterCriticalSection");
void *_imp__EnterCriticalSection = NULL;
void _elf_EnterCriticalSection() {
load_dll_kernel32();
if (!_imp__EnterCriticalSection) {
_imp__EnterCriticalSection = (void *) _elf_GetProcAddress(_dll_kernel32, "EnterCriticalSection");
}
asm("leave\njmp *%0" : : "r"(_imp__EnterCriticalSection));
}

void _elf_EnumCalendarInfoA() asm("EnumCalendarInfoA");
void *_imp__EnumCalendarInfoA = NULL;
void _elf_EnumCalendarInfoA() {
load_dll_kernel32();
if (!_imp__EnumCalendarInfoA) {
_imp__EnumCalendarInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumCalendarInfoA");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumCalendarInfoA));
}

void _elf_EnumCalendarInfoExA() asm("EnumCalendarInfoExA");
void *_imp__EnumCalendarInfoExA = NULL;
void _elf_EnumCalendarInfoExA() {
load_dll_kernel32();
if (!_imp__EnumCalendarInfoExA) {
_imp__EnumCalendarInfoExA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumCalendarInfoExA");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumCalendarInfoExA));
}

void _elf_EnumCalendarInfoExW() asm("EnumCalendarInfoExW");
void *_imp__EnumCalendarInfoExW = NULL;
void _elf_EnumCalendarInfoExW() {
load_dll_kernel32();
if (!_imp__EnumCalendarInfoExW) {
_imp__EnumCalendarInfoExW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumCalendarInfoExW");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumCalendarInfoExW));
}

void _elf_EnumCalendarInfoW() asm("EnumCalendarInfoW");
void *_imp__EnumCalendarInfoW = NULL;
void _elf_EnumCalendarInfoW() {
load_dll_kernel32();
if (!_imp__EnumCalendarInfoW) {
_imp__EnumCalendarInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumCalendarInfoW");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumCalendarInfoW));
}

void _elf_EnumDateFormatsA() asm("EnumDateFormatsA");
void *_imp__EnumDateFormatsA = NULL;
void _elf_EnumDateFormatsA() {
load_dll_kernel32();
if (!_imp__EnumDateFormatsA) {
_imp__EnumDateFormatsA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumDateFormatsA");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumDateFormatsA));
}

void _elf_EnumDateFormatsExA() asm("EnumDateFormatsExA");
void *_imp__EnumDateFormatsExA = NULL;
void _elf_EnumDateFormatsExA() {
load_dll_kernel32();
if (!_imp__EnumDateFormatsExA) {
_imp__EnumDateFormatsExA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumDateFormatsExA");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumDateFormatsExA));
}

void _elf_EnumDateFormatsExW() asm("EnumDateFormatsExW");
void *_imp__EnumDateFormatsExW = NULL;
void _elf_EnumDateFormatsExW() {
load_dll_kernel32();
if (!_imp__EnumDateFormatsExW) {
_imp__EnumDateFormatsExW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumDateFormatsExW");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumDateFormatsExW));
}

void _elf_EnumDateFormatsW() asm("EnumDateFormatsW");
void *_imp__EnumDateFormatsW = NULL;
void _elf_EnumDateFormatsW() {
load_dll_kernel32();
if (!_imp__EnumDateFormatsW) {
_imp__EnumDateFormatsW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumDateFormatsW");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumDateFormatsW));
}

void _elf_EnumLanguageGroupLocalesA() asm("EnumLanguageGroupLocalesA");
void *_imp__EnumLanguageGroupLocalesA = NULL;
void _elf_EnumLanguageGroupLocalesA() {
load_dll_kernel32();
if (!_imp__EnumLanguageGroupLocalesA) {
_imp__EnumLanguageGroupLocalesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumLanguageGroupLocalesA");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumLanguageGroupLocalesA));
}

void _elf_EnumLanguageGroupLocalesW() asm("EnumLanguageGroupLocalesW");
void *_imp__EnumLanguageGroupLocalesW = NULL;
void _elf_EnumLanguageGroupLocalesW() {
load_dll_kernel32();
if (!_imp__EnumLanguageGroupLocalesW) {
_imp__EnumLanguageGroupLocalesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumLanguageGroupLocalesW");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumLanguageGroupLocalesW));
}

void _elf_EnumResourceLanguagesA() asm("EnumResourceLanguagesA");
void *_imp__EnumResourceLanguagesA = NULL;
void _elf_EnumResourceLanguagesA() {
load_dll_kernel32();
if (!_imp__EnumResourceLanguagesA) {
_imp__EnumResourceLanguagesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumResourceLanguagesA");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumResourceLanguagesA));
}

void _elf_EnumResourceLanguagesW() asm("EnumResourceLanguagesW");
void *_imp__EnumResourceLanguagesW = NULL;
void _elf_EnumResourceLanguagesW() {
load_dll_kernel32();
if (!_imp__EnumResourceLanguagesW) {
_imp__EnumResourceLanguagesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumResourceLanguagesW");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumResourceLanguagesW));
}

void _elf_EnumResourceNamesA() asm("EnumResourceNamesA");
void *_imp__EnumResourceNamesA = NULL;
void _elf_EnumResourceNamesA() {
load_dll_kernel32();
if (!_imp__EnumResourceNamesA) {
_imp__EnumResourceNamesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumResourceNamesA");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumResourceNamesA));
}

void _elf_EnumResourceNamesW() asm("EnumResourceNamesW");
void *_imp__EnumResourceNamesW = NULL;
void _elf_EnumResourceNamesW() {
load_dll_kernel32();
if (!_imp__EnumResourceNamesW) {
_imp__EnumResourceNamesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumResourceNamesW");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumResourceNamesW));
}

void _elf_EnumResourceTypesA() asm("EnumResourceTypesA");
void *_imp__EnumResourceTypesA = NULL;
void _elf_EnumResourceTypesA() {
load_dll_kernel32();
if (!_imp__EnumResourceTypesA) {
_imp__EnumResourceTypesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumResourceTypesA");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumResourceTypesA));
}

void _elf_EnumResourceTypesW() asm("EnumResourceTypesW");
void *_imp__EnumResourceTypesW = NULL;
void _elf_EnumResourceTypesW() {
load_dll_kernel32();
if (!_imp__EnumResourceTypesW) {
_imp__EnumResourceTypesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumResourceTypesW");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumResourceTypesW));
}

void _elf_EnumSystemCodePagesA() asm("EnumSystemCodePagesA");
void *_imp__EnumSystemCodePagesA = NULL;
void _elf_EnumSystemCodePagesA() {
load_dll_kernel32();
if (!_imp__EnumSystemCodePagesA) {
_imp__EnumSystemCodePagesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemCodePagesA");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumSystemCodePagesA));
}

void _elf_EnumSystemCodePagesW() asm("EnumSystemCodePagesW");
void *_imp__EnumSystemCodePagesW = NULL;
void _elf_EnumSystemCodePagesW() {
load_dll_kernel32();
if (!_imp__EnumSystemCodePagesW) {
_imp__EnumSystemCodePagesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemCodePagesW");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumSystemCodePagesW));
}

void _elf_EnumSystemGeoID() asm("EnumSystemGeoID");
void *_imp__EnumSystemGeoID = NULL;
void _elf_EnumSystemGeoID() {
load_dll_kernel32();
if (!_imp__EnumSystemGeoID) {
_imp__EnumSystemGeoID = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemGeoID");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumSystemGeoID));
}

void _elf_EnumSystemLanguageGroupsA() asm("EnumSystemLanguageGroupsA");
void *_imp__EnumSystemLanguageGroupsA = NULL;
void _elf_EnumSystemLanguageGroupsA() {
load_dll_kernel32();
if (!_imp__EnumSystemLanguageGroupsA) {
_imp__EnumSystemLanguageGroupsA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemLanguageGroupsA");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumSystemLanguageGroupsA));
}

void _elf_EnumSystemLanguageGroupsW() asm("EnumSystemLanguageGroupsW");
void *_imp__EnumSystemLanguageGroupsW = NULL;
void _elf_EnumSystemLanguageGroupsW() {
load_dll_kernel32();
if (!_imp__EnumSystemLanguageGroupsW) {
_imp__EnumSystemLanguageGroupsW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemLanguageGroupsW");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumSystemLanguageGroupsW));
}

void _elf_EnumSystemLocalesA() asm("EnumSystemLocalesA");
void *_imp__EnumSystemLocalesA = NULL;
void _elf_EnumSystemLocalesA() {
load_dll_kernel32();
if (!_imp__EnumSystemLocalesA) {
_imp__EnumSystemLocalesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemLocalesA");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumSystemLocalesA));
}

void _elf_EnumSystemLocalesW() asm("EnumSystemLocalesW");
void *_imp__EnumSystemLocalesW = NULL;
void _elf_EnumSystemLocalesW() {
load_dll_kernel32();
if (!_imp__EnumSystemLocalesW) {
_imp__EnumSystemLocalesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumSystemLocalesW");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumSystemLocalesW));
}

void _elf_EnumTimeFormatsA() asm("EnumTimeFormatsA");
void *_imp__EnumTimeFormatsA = NULL;
void _elf_EnumTimeFormatsA() {
load_dll_kernel32();
if (!_imp__EnumTimeFormatsA) {
_imp__EnumTimeFormatsA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumTimeFormatsA");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumTimeFormatsA));
}

void _elf_EnumTimeFormatsW() asm("EnumTimeFormatsW");
void *_imp__EnumTimeFormatsW = NULL;
void _elf_EnumTimeFormatsW() {
load_dll_kernel32();
if (!_imp__EnumTimeFormatsW) {
_imp__EnumTimeFormatsW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumTimeFormatsW");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumTimeFormatsW));
}

void _elf_EnumUILanguagesA() asm("EnumUILanguagesA");
void *_imp__EnumUILanguagesA = NULL;
void _elf_EnumUILanguagesA() {
load_dll_kernel32();
if (!_imp__EnumUILanguagesA) {
_imp__EnumUILanguagesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumUILanguagesA");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumUILanguagesA));
}

void _elf_EnumUILanguagesW() asm("EnumUILanguagesW");
void *_imp__EnumUILanguagesW = NULL;
void _elf_EnumUILanguagesW() {
load_dll_kernel32();
if (!_imp__EnumUILanguagesW) {
_imp__EnumUILanguagesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumUILanguagesW");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumUILanguagesW));
}

void _elf_EnumerateLocalComputerNamesA() asm("EnumerateLocalComputerNamesA");
void *_imp__EnumerateLocalComputerNamesA = NULL;
void _elf_EnumerateLocalComputerNamesA() {
load_dll_kernel32();
if (!_imp__EnumerateLocalComputerNamesA) {
_imp__EnumerateLocalComputerNamesA = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumerateLocalComputerNamesA");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumerateLocalComputerNamesA));
}

void _elf_EnumerateLocalComputerNamesW() asm("EnumerateLocalComputerNamesW");
void *_imp__EnumerateLocalComputerNamesW = NULL;
void _elf_EnumerateLocalComputerNamesW() {
load_dll_kernel32();
if (!_imp__EnumerateLocalComputerNamesW) {
_imp__EnumerateLocalComputerNamesW = (void *) _elf_GetProcAddress(_dll_kernel32, "EnumerateLocalComputerNamesW");
}
asm("leave\njmp *%0" : : "r"(_imp__EnumerateLocalComputerNamesW));
}

void _elf_EraseTape() asm("EraseTape");
void *_imp__EraseTape = NULL;
void _elf_EraseTape() {
load_dll_kernel32();
if (!_imp__EraseTape) {
_imp__EraseTape = (void *) _elf_GetProcAddress(_dll_kernel32, "EraseTape");
}
asm("leave\njmp *%0" : : "r"(_imp__EraseTape));
}

void _elf_EscapeCommFunction() asm("EscapeCommFunction");
void *_imp__EscapeCommFunction = NULL;
void _elf_EscapeCommFunction() {
load_dll_kernel32();
if (!_imp__EscapeCommFunction) {
_imp__EscapeCommFunction = (void *) _elf_GetProcAddress(_dll_kernel32, "EscapeCommFunction");
}
asm("leave\njmp *%0" : : "r"(_imp__EscapeCommFunction));
}

void _elf_ExitProcess() asm("ExitProcess");
void *_imp__ExitProcess = NULL;
void _elf_ExitProcess() {
load_dll_kernel32();
if (!_imp__ExitProcess) {
_imp__ExitProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "ExitProcess");
}
asm("leave\njmp *%0" : : "r"(_imp__ExitProcess));
}

void _elf_ExitThread() asm("ExitThread");
void *_imp__ExitThread = NULL;
void _elf_ExitThread() {
load_dll_kernel32();
if (!_imp__ExitThread) {
_imp__ExitThread = (void *) _elf_GetProcAddress(_dll_kernel32, "ExitThread");
}
asm("leave\njmp *%0" : : "r"(_imp__ExitThread));
}

void _elf_ExitVDM() asm("ExitVDM");
void *_imp__ExitVDM = NULL;
void _elf_ExitVDM() {
load_dll_kernel32();
if (!_imp__ExitVDM) {
_imp__ExitVDM = (void *) _elf_GetProcAddress(_dll_kernel32, "ExitVDM");
}
asm("leave\njmp *%0" : : "r"(_imp__ExitVDM));
}

void _elf_ExpandEnvironmentStringsA() asm("ExpandEnvironmentStringsA");
void *_imp__ExpandEnvironmentStringsA = NULL;
void _elf_ExpandEnvironmentStringsA() {
load_dll_kernel32();
if (!_imp__ExpandEnvironmentStringsA) {
_imp__ExpandEnvironmentStringsA = (void *) _elf_GetProcAddress(_dll_kernel32, "ExpandEnvironmentStringsA");
}
asm("leave\njmp *%0" : : "r"(_imp__ExpandEnvironmentStringsA));
}

void _elf_ExpandEnvironmentStringsW() asm("ExpandEnvironmentStringsW");
void *_imp__ExpandEnvironmentStringsW = NULL;
void _elf_ExpandEnvironmentStringsW() {
load_dll_kernel32();
if (!_imp__ExpandEnvironmentStringsW) {
_imp__ExpandEnvironmentStringsW = (void *) _elf_GetProcAddress(_dll_kernel32, "ExpandEnvironmentStringsW");
}
asm("leave\njmp *%0" : : "r"(_imp__ExpandEnvironmentStringsW));
}

void _elf_ExpungeConsoleCommandHistoryA() asm("ExpungeConsoleCommandHistoryA");
void *_imp__ExpungeConsoleCommandHistoryA = NULL;
void _elf_ExpungeConsoleCommandHistoryA() {
load_dll_kernel32();
if (!_imp__ExpungeConsoleCommandHistoryA) {
_imp__ExpungeConsoleCommandHistoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "ExpungeConsoleCommandHistoryA");
}
asm("leave\njmp *%0" : : "r"(_imp__ExpungeConsoleCommandHistoryA));
}

void _elf_ExpungeConsoleCommandHistoryW() asm("ExpungeConsoleCommandHistoryW");
void *_imp__ExpungeConsoleCommandHistoryW = NULL;
void _elf_ExpungeConsoleCommandHistoryW() {
load_dll_kernel32();
if (!_imp__ExpungeConsoleCommandHistoryW) {
_imp__ExpungeConsoleCommandHistoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "ExpungeConsoleCommandHistoryW");
}
asm("leave\njmp *%0" : : "r"(_imp__ExpungeConsoleCommandHistoryW));
}

void _elf_ExtendVirtualBuffer() asm("ExtendVirtualBuffer");
void *_imp__ExtendVirtualBuffer = NULL;
void _elf_ExtendVirtualBuffer() {
load_dll_kernel32();
if (!_imp__ExtendVirtualBuffer) {
_imp__ExtendVirtualBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "ExtendVirtualBuffer");
}
asm("leave\njmp *%0" : : "r"(_imp__ExtendVirtualBuffer));
}

void _elf_FatalAppExitA() asm("FatalAppExitA");
void *_imp__FatalAppExitA = NULL;
void _elf_FatalAppExitA() {
load_dll_kernel32();
if (!_imp__FatalAppExitA) {
_imp__FatalAppExitA = (void *) _elf_GetProcAddress(_dll_kernel32, "FatalAppExitA");
}
asm("leave\njmp *%0" : : "r"(_imp__FatalAppExitA));
}

void _elf_FatalAppExitW() asm("FatalAppExitW");
void *_imp__FatalAppExitW = NULL;
void _elf_FatalAppExitW() {
load_dll_kernel32();
if (!_imp__FatalAppExitW) {
_imp__FatalAppExitW = (void *) _elf_GetProcAddress(_dll_kernel32, "FatalAppExitW");
}
asm("leave\njmp *%0" : : "r"(_imp__FatalAppExitW));
}

void _elf_FatalExit() asm("FatalExit");
void *_imp__FatalExit = NULL;
void _elf_FatalExit() {
load_dll_kernel32();
if (!_imp__FatalExit) {
_imp__FatalExit = (void *) _elf_GetProcAddress(_dll_kernel32, "FatalExit");
}
asm("leave\njmp *%0" : : "r"(_imp__FatalExit));
}

void _elf_FileTimeToDosDateTime() asm("FileTimeToDosDateTime");
void *_imp__FileTimeToDosDateTime = NULL;
void _elf_FileTimeToDosDateTime() {
load_dll_kernel32();
if (!_imp__FileTimeToDosDateTime) {
_imp__FileTimeToDosDateTime = (void *) _elf_GetProcAddress(_dll_kernel32, "FileTimeToDosDateTime");
}
asm("leave\njmp *%0" : : "r"(_imp__FileTimeToDosDateTime));
}

void _elf_FileTimeToLocalFileTime() asm("FileTimeToLocalFileTime");
void *_imp__FileTimeToLocalFileTime = NULL;
void _elf_FileTimeToLocalFileTime() {
load_dll_kernel32();
if (!_imp__FileTimeToLocalFileTime) {
_imp__FileTimeToLocalFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "FileTimeToLocalFileTime");
}
asm("leave\njmp *%0" : : "r"(_imp__FileTimeToLocalFileTime));
}

void _elf_FileTimeToSystemTime() asm("FileTimeToSystemTime");
void *_imp__FileTimeToSystemTime = NULL;
void _elf_FileTimeToSystemTime() {
load_dll_kernel32();
if (!_imp__FileTimeToSystemTime) {
_imp__FileTimeToSystemTime = (void *) _elf_GetProcAddress(_dll_kernel32, "FileTimeToSystemTime");
}
asm("leave\njmp *%0" : : "r"(_imp__FileTimeToSystemTime));
}

void _elf_FillConsoleOutputAttribute() asm("FillConsoleOutputAttribute");
void *_imp__FillConsoleOutputAttribute = NULL;
void _elf_FillConsoleOutputAttribute() {
load_dll_kernel32();
if (!_imp__FillConsoleOutputAttribute) {
_imp__FillConsoleOutputAttribute = (void *) _elf_GetProcAddress(_dll_kernel32, "FillConsoleOutputAttribute");
}
asm("leave\njmp *%0" : : "r"(_imp__FillConsoleOutputAttribute));
}

void _elf_FillConsoleOutputCharacterA() asm("FillConsoleOutputCharacterA");
void *_imp__FillConsoleOutputCharacterA = NULL;
void _elf_FillConsoleOutputCharacterA() {
load_dll_kernel32();
if (!_imp__FillConsoleOutputCharacterA) {
_imp__FillConsoleOutputCharacterA = (void *) _elf_GetProcAddress(_dll_kernel32, "FillConsoleOutputCharacterA");
}
asm("leave\njmp *%0" : : "r"(_imp__FillConsoleOutputCharacterA));
}

void _elf_FillConsoleOutputCharacterW() asm("FillConsoleOutputCharacterW");
void *_imp__FillConsoleOutputCharacterW = NULL;
void _elf_FillConsoleOutputCharacterW() {
load_dll_kernel32();
if (!_imp__FillConsoleOutputCharacterW) {
_imp__FillConsoleOutputCharacterW = (void *) _elf_GetProcAddress(_dll_kernel32, "FillConsoleOutputCharacterW");
}
asm("leave\njmp *%0" : : "r"(_imp__FillConsoleOutputCharacterW));
}

void _elf_FindActCtxSectionGuid() asm("FindActCtxSectionGuid");
void *_imp__FindActCtxSectionGuid = NULL;
void _elf_FindActCtxSectionGuid() {
load_dll_kernel32();
if (!_imp__FindActCtxSectionGuid) {
_imp__FindActCtxSectionGuid = (void *) _elf_GetProcAddress(_dll_kernel32, "FindActCtxSectionGuid");
}
asm("leave\njmp *%0" : : "r"(_imp__FindActCtxSectionGuid));
}

void _elf_FindActCtxSectionStringA() asm("FindActCtxSectionStringA");
void *_imp__FindActCtxSectionStringA = NULL;
void _elf_FindActCtxSectionStringA() {
load_dll_kernel32();
if (!_imp__FindActCtxSectionStringA) {
_imp__FindActCtxSectionStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindActCtxSectionStringA");
}
asm("leave\njmp *%0" : : "r"(_imp__FindActCtxSectionStringA));
}

void _elf_FindActCtxSectionStringW() asm("FindActCtxSectionStringW");
void *_imp__FindActCtxSectionStringW = NULL;
void _elf_FindActCtxSectionStringW() {
load_dll_kernel32();
if (!_imp__FindActCtxSectionStringW) {
_imp__FindActCtxSectionStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindActCtxSectionStringW");
}
asm("leave\njmp *%0" : : "r"(_imp__FindActCtxSectionStringW));
}

void _elf_FindAtomA() asm("FindAtomA");
void *_imp__FindAtomA = NULL;
void _elf_FindAtomA() {
load_dll_kernel32();
if (!_imp__FindAtomA) {
_imp__FindAtomA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindAtomA");
}
asm("leave\njmp *%0" : : "r"(_imp__FindAtomA));
}

void _elf_FindAtomW() asm("FindAtomW");
void *_imp__FindAtomW = NULL;
void _elf_FindAtomW() {
load_dll_kernel32();
if (!_imp__FindAtomW) {
_imp__FindAtomW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindAtomW");
}
asm("leave\njmp *%0" : : "r"(_imp__FindAtomW));
}

void _elf_FindClose() asm("FindClose");
void *_imp__FindClose = NULL;
void _elf_FindClose() {
load_dll_kernel32();
if (!_imp__FindClose) {
_imp__FindClose = (void *) _elf_GetProcAddress(_dll_kernel32, "FindClose");
}
asm("leave\njmp *%0" : : "r"(_imp__FindClose));
}

void _elf_FindCloseChangeNotification() asm("FindCloseChangeNotification");
void *_imp__FindCloseChangeNotification = NULL;
void _elf_FindCloseChangeNotification() {
load_dll_kernel32();
if (!_imp__FindCloseChangeNotification) {
_imp__FindCloseChangeNotification = (void *) _elf_GetProcAddress(_dll_kernel32, "FindCloseChangeNotification");
}
asm("leave\njmp *%0" : : "r"(_imp__FindCloseChangeNotification));
}

void _elf_FindFirstChangeNotificationA() asm("FindFirstChangeNotificationA");
void *_imp__FindFirstChangeNotificationA = NULL;
void _elf_FindFirstChangeNotificationA() {
load_dll_kernel32();
if (!_imp__FindFirstChangeNotificationA) {
_imp__FindFirstChangeNotificationA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstChangeNotificationA");
}
asm("leave\njmp *%0" : : "r"(_imp__FindFirstChangeNotificationA));
}

void _elf_FindFirstChangeNotificationW() asm("FindFirstChangeNotificationW");
void *_imp__FindFirstChangeNotificationW = NULL;
void _elf_FindFirstChangeNotificationW() {
load_dll_kernel32();
if (!_imp__FindFirstChangeNotificationW) {
_imp__FindFirstChangeNotificationW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstChangeNotificationW");
}
asm("leave\njmp *%0" : : "r"(_imp__FindFirstChangeNotificationW));
}

void _elf_FindFirstFileA() asm("FindFirstFileA");
void *_imp__FindFirstFileA = NULL;
void _elf_FindFirstFileA() {
load_dll_kernel32();
if (!_imp__FindFirstFileA) {
_imp__FindFirstFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstFileA");
}
asm("leave\njmp *%0" : : "r"(_imp__FindFirstFileA));
}

void _elf_FindFirstFileExA() asm("FindFirstFileExA");
void *_imp__FindFirstFileExA = NULL;
void _elf_FindFirstFileExA() {
load_dll_kernel32();
if (!_imp__FindFirstFileExA) {
_imp__FindFirstFileExA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstFileExA");
}
asm("leave\njmp *%0" : : "r"(_imp__FindFirstFileExA));
}

void _elf_FindFirstFileExW() asm("FindFirstFileExW");
void *_imp__FindFirstFileExW = NULL;
void _elf_FindFirstFileExW() {
load_dll_kernel32();
if (!_imp__FindFirstFileExW) {
_imp__FindFirstFileExW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstFileExW");
}
asm("leave\njmp *%0" : : "r"(_imp__FindFirstFileExW));
}

void _elf_FindFirstFileW() asm("FindFirstFileW");
void *_imp__FindFirstFileW = NULL;
void _elf_FindFirstFileW() {
load_dll_kernel32();
if (!_imp__FindFirstFileW) {
_imp__FindFirstFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstFileW");
}
asm("leave\njmp *%0" : : "r"(_imp__FindFirstFileW));
}

void _elf_FindFirstVolumeA() asm("FindFirstVolumeA");
void *_imp__FindFirstVolumeA = NULL;
void _elf_FindFirstVolumeA() {
load_dll_kernel32();
if (!_imp__FindFirstVolumeA) {
_imp__FindFirstVolumeA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstVolumeA");
}
asm("leave\njmp *%0" : : "r"(_imp__FindFirstVolumeA));
}

void _elf_FindFirstVolumeMountPointA() asm("FindFirstVolumeMountPointA");
void *_imp__FindFirstVolumeMountPointA = NULL;
void _elf_FindFirstVolumeMountPointA() {
load_dll_kernel32();
if (!_imp__FindFirstVolumeMountPointA) {
_imp__FindFirstVolumeMountPointA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstVolumeMountPointA");
}
asm("leave\njmp *%0" : : "r"(_imp__FindFirstVolumeMountPointA));
}

void _elf_FindFirstVolumeMountPointW() asm("FindFirstVolumeMountPointW");
void *_imp__FindFirstVolumeMountPointW = NULL;
void _elf_FindFirstVolumeMountPointW() {
load_dll_kernel32();
if (!_imp__FindFirstVolumeMountPointW) {
_imp__FindFirstVolumeMountPointW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstVolumeMountPointW");
}
asm("leave\njmp *%0" : : "r"(_imp__FindFirstVolumeMountPointW));
}

void _elf_FindFirstVolumeW() asm("FindFirstVolumeW");
void *_imp__FindFirstVolumeW = NULL;
void _elf_FindFirstVolumeW() {
load_dll_kernel32();
if (!_imp__FindFirstVolumeW) {
_imp__FindFirstVolumeW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstVolumeW");
}
asm("leave\njmp *%0" : : "r"(_imp__FindFirstVolumeW));
}

void _elf_FindNextChangeNotification() asm("FindNextChangeNotification");
void *_imp__FindNextChangeNotification = NULL;
void _elf_FindNextChangeNotification() {
load_dll_kernel32();
if (!_imp__FindNextChangeNotification) {
_imp__FindNextChangeNotification = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextChangeNotification");
}
asm("leave\njmp *%0" : : "r"(_imp__FindNextChangeNotification));
}

void _elf_FindNextFileA() asm("FindNextFileA");
void *_imp__FindNextFileA = NULL;
void _elf_FindNextFileA() {
load_dll_kernel32();
if (!_imp__FindNextFileA) {
_imp__FindNextFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextFileA");
}
asm("leave\njmp *%0" : : "r"(_imp__FindNextFileA));
}

void _elf_FindNextFileW() asm("FindNextFileW");
void *_imp__FindNextFileW = NULL;
void _elf_FindNextFileW() {
load_dll_kernel32();
if (!_imp__FindNextFileW) {
_imp__FindNextFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextFileW");
}
asm("leave\njmp *%0" : : "r"(_imp__FindNextFileW));
}

void _elf_FindNextVolumeA() asm("FindNextVolumeA");
void *_imp__FindNextVolumeA = NULL;
void _elf_FindNextVolumeA() {
load_dll_kernel32();
if (!_imp__FindNextVolumeA) {
_imp__FindNextVolumeA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextVolumeA");
}
asm("leave\njmp *%0" : : "r"(_imp__FindNextVolumeA));
}

void _elf_FindNextVolumeMountPointA() asm("FindNextVolumeMountPointA");
void *_imp__FindNextVolumeMountPointA = NULL;
void _elf_FindNextVolumeMountPointA() {
load_dll_kernel32();
if (!_imp__FindNextVolumeMountPointA) {
_imp__FindNextVolumeMountPointA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextVolumeMountPointA");
}
asm("leave\njmp *%0" : : "r"(_imp__FindNextVolumeMountPointA));
}

void _elf_FindNextVolumeMountPointW() asm("FindNextVolumeMountPointW");
void *_imp__FindNextVolumeMountPointW = NULL;
void _elf_FindNextVolumeMountPointW() {
load_dll_kernel32();
if (!_imp__FindNextVolumeMountPointW) {
_imp__FindNextVolumeMountPointW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextVolumeMountPointW");
}
asm("leave\njmp *%0" : : "r"(_imp__FindNextVolumeMountPointW));
}

void _elf_FindNextVolumeW() asm("FindNextVolumeW");
void *_imp__FindNextVolumeW = NULL;
void _elf_FindNextVolumeW() {
load_dll_kernel32();
if (!_imp__FindNextVolumeW) {
_imp__FindNextVolumeW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextVolumeW");
}
asm("leave\njmp *%0" : : "r"(_imp__FindNextVolumeW));
}

void _elf_FindResourceA() asm("FindResourceA");
void *_imp__FindResourceA = NULL;
void _elf_FindResourceA() {
load_dll_kernel32();
if (!_imp__FindResourceA) {
_imp__FindResourceA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindResourceA");
}
asm("leave\njmp *%0" : : "r"(_imp__FindResourceA));
}

void _elf_FindResourceExA() asm("FindResourceExA");
void *_imp__FindResourceExA = NULL;
void _elf_FindResourceExA() {
load_dll_kernel32();
if (!_imp__FindResourceExA) {
_imp__FindResourceExA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindResourceExA");
}
asm("leave\njmp *%0" : : "r"(_imp__FindResourceExA));
}

void _elf_FindResourceExW() asm("FindResourceExW");
void *_imp__FindResourceExW = NULL;
void _elf_FindResourceExW() {
load_dll_kernel32();
if (!_imp__FindResourceExW) {
_imp__FindResourceExW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindResourceExW");
}
asm("leave\njmp *%0" : : "r"(_imp__FindResourceExW));
}

void _elf_FindResourceW() asm("FindResourceW");
void *_imp__FindResourceW = NULL;
void _elf_FindResourceW() {
load_dll_kernel32();
if (!_imp__FindResourceW) {
_imp__FindResourceW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindResourceW");
}
asm("leave\njmp *%0" : : "r"(_imp__FindResourceW));
}

void _elf_FindVolumeClose() asm("FindVolumeClose");
void *_imp__FindVolumeClose = NULL;
void _elf_FindVolumeClose() {
load_dll_kernel32();
if (!_imp__FindVolumeClose) {
_imp__FindVolumeClose = (void *) _elf_GetProcAddress(_dll_kernel32, "FindVolumeClose");
}
asm("leave\njmp *%0" : : "r"(_imp__FindVolumeClose));
}

void _elf_FindVolumeMountPointClose() asm("FindVolumeMountPointClose");
void *_imp__FindVolumeMountPointClose = NULL;
void _elf_FindVolumeMountPointClose() {
load_dll_kernel32();
if (!_imp__FindVolumeMountPointClose) {
_imp__FindVolumeMountPointClose = (void *) _elf_GetProcAddress(_dll_kernel32, "FindVolumeMountPointClose");
}
asm("leave\njmp *%0" : : "r"(_imp__FindVolumeMountPointClose));
}

void _elf_FlushConsoleInputBuffer() asm("FlushConsoleInputBuffer");
void *_imp__FlushConsoleInputBuffer = NULL;
void _elf_FlushConsoleInputBuffer() {
load_dll_kernel32();
if (!_imp__FlushConsoleInputBuffer) {
_imp__FlushConsoleInputBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "FlushConsoleInputBuffer");
}
asm("leave\njmp *%0" : : "r"(_imp__FlushConsoleInputBuffer));
}

void _elf_FlushFileBuffers() asm("FlushFileBuffers");
void *_imp__FlushFileBuffers = NULL;
void _elf_FlushFileBuffers() {
load_dll_kernel32();
if (!_imp__FlushFileBuffers) {
_imp__FlushFileBuffers = (void *) _elf_GetProcAddress(_dll_kernel32, "FlushFileBuffers");
}
asm("leave\njmp *%0" : : "r"(_imp__FlushFileBuffers));
}

void _elf_FlushInstructionCache() asm("FlushInstructionCache");
void *_imp__FlushInstructionCache = NULL;
void _elf_FlushInstructionCache() {
load_dll_kernel32();
if (!_imp__FlushInstructionCache) {
_imp__FlushInstructionCache = (void *) _elf_GetProcAddress(_dll_kernel32, "FlushInstructionCache");
}
asm("leave\njmp *%0" : : "r"(_imp__FlushInstructionCache));
}

void _elf_FlushViewOfFile() asm("FlushViewOfFile");
void *_imp__FlushViewOfFile = NULL;
void _elf_FlushViewOfFile() {
load_dll_kernel32();
if (!_imp__FlushViewOfFile) {
_imp__FlushViewOfFile = (void *) _elf_GetProcAddress(_dll_kernel32, "FlushViewOfFile");
}
asm("leave\njmp *%0" : : "r"(_imp__FlushViewOfFile));
}

void _elf_FoldStringA() asm("FoldStringA");
void *_imp__FoldStringA = NULL;
void _elf_FoldStringA() {
load_dll_kernel32();
if (!_imp__FoldStringA) {
_imp__FoldStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "FoldStringA");
}
asm("leave\njmp *%0" : : "r"(_imp__FoldStringA));
}

void _elf_FoldStringW() asm("FoldStringW");
void *_imp__FoldStringW = NULL;
void _elf_FoldStringW() {
load_dll_kernel32();
if (!_imp__FoldStringW) {
_imp__FoldStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "FoldStringW");
}
asm("leave\njmp *%0" : : "r"(_imp__FoldStringW));
}

void _elf_FormatMessageA() asm("FormatMessageA");
void *_imp__FormatMessageA = NULL;
void _elf_FormatMessageA() {
load_dll_kernel32();
if (!_imp__FormatMessageA) {
_imp__FormatMessageA = (void *) _elf_GetProcAddress(_dll_kernel32, "FormatMessageA");
}
asm("leave\njmp *%0" : : "r"(_imp__FormatMessageA));
}

void _elf_FormatMessageW() asm("FormatMessageW");
void *_imp__FormatMessageW = NULL;
void _elf_FormatMessageW() {
load_dll_kernel32();
if (!_imp__FormatMessageW) {
_imp__FormatMessageW = (void *) _elf_GetProcAddress(_dll_kernel32, "FormatMessageW");
}
asm("leave\njmp *%0" : : "r"(_imp__FormatMessageW));
}

void _elf_FreeConsole() asm("FreeConsole");
void *_imp__FreeConsole = NULL;
void _elf_FreeConsole() {
load_dll_kernel32();
if (!_imp__FreeConsole) {
_imp__FreeConsole = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeConsole");
}
asm("leave\njmp *%0" : : "r"(_imp__FreeConsole));
}

void _elf_FreeEnvironmentStringsA() asm("FreeEnvironmentStringsA");
void *_imp__FreeEnvironmentStringsA = NULL;
void _elf_FreeEnvironmentStringsA() {
load_dll_kernel32();
if (!_imp__FreeEnvironmentStringsA) {
_imp__FreeEnvironmentStringsA = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeEnvironmentStringsA");
}
asm("leave\njmp *%0" : : "r"(_imp__FreeEnvironmentStringsA));
}

void _elf_FreeEnvironmentStringsW() asm("FreeEnvironmentStringsW");
void *_imp__FreeEnvironmentStringsW = NULL;
void _elf_FreeEnvironmentStringsW() {
load_dll_kernel32();
if (!_imp__FreeEnvironmentStringsW) {
_imp__FreeEnvironmentStringsW = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeEnvironmentStringsW");
}
asm("leave\njmp *%0" : : "r"(_imp__FreeEnvironmentStringsW));
}

void _elf_FreeLibrary() asm("FreeLibrary");
void *_imp__FreeLibrary = NULL;
void _elf_FreeLibrary() {
load_dll_kernel32();
if (!_imp__FreeLibrary) {
_imp__FreeLibrary = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeLibrary");
}
asm("leave\njmp *%0" : : "r"(_imp__FreeLibrary));
}

void _elf_FreeLibraryAndExitThread() asm("FreeLibraryAndExitThread");
void *_imp__FreeLibraryAndExitThread = NULL;
void _elf_FreeLibraryAndExitThread() {
load_dll_kernel32();
if (!_imp__FreeLibraryAndExitThread) {
_imp__FreeLibraryAndExitThread = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeLibraryAndExitThread");
}
asm("leave\njmp *%0" : : "r"(_imp__FreeLibraryAndExitThread));
}

void _elf_FreeResource() asm("FreeResource");
void *_imp__FreeResource = NULL;
void _elf_FreeResource() {
load_dll_kernel32();
if (!_imp__FreeResource) {
_imp__FreeResource = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeResource");
}
asm("leave\njmp *%0" : : "r"(_imp__FreeResource));
}

void _elf_FreeUserPhysicalPages() asm("FreeUserPhysicalPages");
void *_imp__FreeUserPhysicalPages = NULL;
void _elf_FreeUserPhysicalPages() {
load_dll_kernel32();
if (!_imp__FreeUserPhysicalPages) {
_imp__FreeUserPhysicalPages = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeUserPhysicalPages");
}
asm("leave\njmp *%0" : : "r"(_imp__FreeUserPhysicalPages));
}

void _elf_FreeVirtualBuffer() asm("FreeVirtualBuffer");
void *_imp__FreeVirtualBuffer = NULL;
void _elf_FreeVirtualBuffer() {
load_dll_kernel32();
if (!_imp__FreeVirtualBuffer) {
_imp__FreeVirtualBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeVirtualBuffer");
}
asm("leave\njmp *%0" : : "r"(_imp__FreeVirtualBuffer));
}

void _elf_GenerateConsoleCtrlEvent() asm("GenerateConsoleCtrlEvent");
void *_imp__GenerateConsoleCtrlEvent = NULL;
void _elf_GenerateConsoleCtrlEvent() {
load_dll_kernel32();
if (!_imp__GenerateConsoleCtrlEvent) {
_imp__GenerateConsoleCtrlEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "GenerateConsoleCtrlEvent");
}
asm("leave\njmp *%0" : : "r"(_imp__GenerateConsoleCtrlEvent));
}

void _elf_GetACP() asm("GetACP");
void *_imp__GetACP = NULL;
void _elf_GetACP() {
load_dll_kernel32();
if (!_imp__GetACP) {
_imp__GetACP = (void *) _elf_GetProcAddress(_dll_kernel32, "GetACP");
}
asm("leave\njmp *%0" : : "r"(_imp__GetACP));
}

void _elf_GetAtomNameA() asm("GetAtomNameA");
void *_imp__GetAtomNameA = NULL;
void _elf_GetAtomNameA() {
load_dll_kernel32();
if (!_imp__GetAtomNameA) {
_imp__GetAtomNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetAtomNameA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetAtomNameA));
}

void _elf_GetAtomNameW() asm("GetAtomNameW");
void *_imp__GetAtomNameW = NULL;
void _elf_GetAtomNameW() {
load_dll_kernel32();
if (!_imp__GetAtomNameW) {
_imp__GetAtomNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetAtomNameW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetAtomNameW));
}

void _elf_GetBinaryType() asm("GetBinaryType");
void *_imp__GetBinaryType = NULL;
void _elf_GetBinaryType() {
load_dll_kernel32();
if (!_imp__GetBinaryType) {
_imp__GetBinaryType = (void *) _elf_GetProcAddress(_dll_kernel32, "GetBinaryType");
}
asm("leave\njmp *%0" : : "r"(_imp__GetBinaryType));
}

void _elf_GetBinaryTypeA() asm("GetBinaryTypeA");
void *_imp__GetBinaryTypeA = NULL;
void _elf_GetBinaryTypeA() {
load_dll_kernel32();
if (!_imp__GetBinaryTypeA) {
_imp__GetBinaryTypeA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetBinaryTypeA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetBinaryTypeA));
}

void _elf_GetBinaryTypeW() asm("GetBinaryTypeW");
void *_imp__GetBinaryTypeW = NULL;
void _elf_GetBinaryTypeW() {
load_dll_kernel32();
if (!_imp__GetBinaryTypeW) {
_imp__GetBinaryTypeW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetBinaryTypeW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetBinaryTypeW));
}

void _elf_GetCPFileNameFromRegistry() asm("GetCPFileNameFromRegistry");
void *_imp__GetCPFileNameFromRegistry = NULL;
void _elf_GetCPFileNameFromRegistry() {
load_dll_kernel32();
if (!_imp__GetCPFileNameFromRegistry) {
_imp__GetCPFileNameFromRegistry = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCPFileNameFromRegistry");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCPFileNameFromRegistry));
}

void _elf_GetCPInfo() asm("GetCPInfo");
void *_imp__GetCPInfo = NULL;
void _elf_GetCPInfo() {
load_dll_kernel32();
if (!_imp__GetCPInfo) {
_imp__GetCPInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCPInfo");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCPInfo));
}

void _elf_GetCPInfoExA() asm("GetCPInfoExA");
void *_imp__GetCPInfoExA = NULL;
void _elf_GetCPInfoExA() {
load_dll_kernel32();
if (!_imp__GetCPInfoExA) {
_imp__GetCPInfoExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCPInfoExA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCPInfoExA));
}

void _elf_GetCPInfoExW() asm("GetCPInfoExW");
void *_imp__GetCPInfoExW = NULL;
void _elf_GetCPInfoExW() {
load_dll_kernel32();
if (!_imp__GetCPInfoExW) {
_imp__GetCPInfoExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCPInfoExW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCPInfoExW));
}

void _elf_GetCalendarInfoA() asm("GetCalendarInfoA");
void *_imp__GetCalendarInfoA = NULL;
void _elf_GetCalendarInfoA() {
load_dll_kernel32();
if (!_imp__GetCalendarInfoA) {
_imp__GetCalendarInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCalendarInfoA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCalendarInfoA));
}

void _elf_GetCalendarInfoW() asm("GetCalendarInfoW");
void *_imp__GetCalendarInfoW = NULL;
void _elf_GetCalendarInfoW() {
load_dll_kernel32();
if (!_imp__GetCalendarInfoW) {
_imp__GetCalendarInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCalendarInfoW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCalendarInfoW));
}

void _elf_GetComPlusPackageInstallStatus() asm("GetComPlusPackageInstallStatus");
void *_imp__GetComPlusPackageInstallStatus = NULL;
void _elf_GetComPlusPackageInstallStatus() {
load_dll_kernel32();
if (!_imp__GetComPlusPackageInstallStatus) {
_imp__GetComPlusPackageInstallStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "GetComPlusPackageInstallStatus");
}
asm("leave\njmp *%0" : : "r"(_imp__GetComPlusPackageInstallStatus));
}

void _elf_GetCommConfig() asm("GetCommConfig");
void *_imp__GetCommConfig = NULL;
void _elf_GetCommConfig() {
load_dll_kernel32();
if (!_imp__GetCommConfig) {
_imp__GetCommConfig = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommConfig");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCommConfig));
}

void _elf_GetCommMask() asm("GetCommMask");
void *_imp__GetCommMask = NULL;
void _elf_GetCommMask() {
load_dll_kernel32();
if (!_imp__GetCommMask) {
_imp__GetCommMask = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommMask");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCommMask));
}

void _elf_GetCommModemStatus() asm("GetCommModemStatus");
void *_imp__GetCommModemStatus = NULL;
void _elf_GetCommModemStatus() {
load_dll_kernel32();
if (!_imp__GetCommModemStatus) {
_imp__GetCommModemStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommModemStatus");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCommModemStatus));
}

void _elf_GetCommProperties() asm("GetCommProperties");
void *_imp__GetCommProperties = NULL;
void _elf_GetCommProperties() {
load_dll_kernel32();
if (!_imp__GetCommProperties) {
_imp__GetCommProperties = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommProperties");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCommProperties));
}

void _elf_GetCommState() asm("GetCommState");
void *_imp__GetCommState = NULL;
void _elf_GetCommState() {
load_dll_kernel32();
if (!_imp__GetCommState) {
_imp__GetCommState = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommState");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCommState));
}

void _elf_GetCommTimeouts() asm("GetCommTimeouts");
void *_imp__GetCommTimeouts = NULL;
void _elf_GetCommTimeouts() {
load_dll_kernel32();
if (!_imp__GetCommTimeouts) {
_imp__GetCommTimeouts = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommTimeouts");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCommTimeouts));
}

void _elf_GetCommandLineA() asm("GetCommandLineA");
void *_imp__GetCommandLineA = NULL;
void _elf_GetCommandLineA() {
load_dll_kernel32();
if (!_imp__GetCommandLineA) {
_imp__GetCommandLineA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommandLineA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCommandLineA));
}

void _elf_GetCommandLineW() asm("GetCommandLineW");
void *_imp__GetCommandLineW = NULL;
void _elf_GetCommandLineW() {
load_dll_kernel32();
if (!_imp__GetCommandLineW) {
_imp__GetCommandLineW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCommandLineW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCommandLineW));
}

void _elf_GetCompressedFileSizeA() asm("GetCompressedFileSizeA");
void *_imp__GetCompressedFileSizeA = NULL;
void _elf_GetCompressedFileSizeA() {
load_dll_kernel32();
if (!_imp__GetCompressedFileSizeA) {
_imp__GetCompressedFileSizeA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCompressedFileSizeA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCompressedFileSizeA));
}

void _elf_GetCompressedFileSizeW() asm("GetCompressedFileSizeW");
void *_imp__GetCompressedFileSizeW = NULL;
void _elf_GetCompressedFileSizeW() {
load_dll_kernel32();
if (!_imp__GetCompressedFileSizeW) {
_imp__GetCompressedFileSizeW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCompressedFileSizeW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCompressedFileSizeW));
}

void _elf_GetComputerNameA() asm("GetComputerNameA");
void *_imp__GetComputerNameA = NULL;
void _elf_GetComputerNameA() {
load_dll_kernel32();
if (!_imp__GetComputerNameA) {
_imp__GetComputerNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetComputerNameA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetComputerNameA));
}

void _elf_GetComputerNameExA() asm("GetComputerNameExA");
void *_imp__GetComputerNameExA = NULL;
void _elf_GetComputerNameExA() {
load_dll_kernel32();
if (!_imp__GetComputerNameExA) {
_imp__GetComputerNameExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetComputerNameExA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetComputerNameExA));
}

void _elf_GetComputerNameExW() asm("GetComputerNameExW");
void *_imp__GetComputerNameExW = NULL;
void _elf_GetComputerNameExW() {
load_dll_kernel32();
if (!_imp__GetComputerNameExW) {
_imp__GetComputerNameExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetComputerNameExW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetComputerNameExW));
}

void _elf_GetComputerNameW() asm("GetComputerNameW");
void *_imp__GetComputerNameW = NULL;
void _elf_GetComputerNameW() {
load_dll_kernel32();
if (!_imp__GetComputerNameW) {
_imp__GetComputerNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetComputerNameW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetComputerNameW));
}

void _elf_GetConsoleAliasA() asm("GetConsoleAliasA");
void *_imp__GetConsoleAliasA = NULL;
void _elf_GetConsoleAliasA() {
load_dll_kernel32();
if (!_imp__GetConsoleAliasA) {
_imp__GetConsoleAliasA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasA));
}

void _elf_GetConsoleAliasExesA() asm("GetConsoleAliasExesA");
void *_imp__GetConsoleAliasExesA = NULL;
void _elf_GetConsoleAliasExesA() {
load_dll_kernel32();
if (!_imp__GetConsoleAliasExesA) {
_imp__GetConsoleAliasExesA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasExesA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasExesA));
}

void _elf_GetConsoleAliasExesLengthA() asm("GetConsoleAliasExesLengthA");
void *_imp__GetConsoleAliasExesLengthA = NULL;
void _elf_GetConsoleAliasExesLengthA() {
load_dll_kernel32();
if (!_imp__GetConsoleAliasExesLengthA) {
_imp__GetConsoleAliasExesLengthA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasExesLengthA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasExesLengthA));
}

void _elf_GetConsoleAliasExesLengthW() asm("GetConsoleAliasExesLengthW");
void *_imp__GetConsoleAliasExesLengthW = NULL;
void _elf_GetConsoleAliasExesLengthW() {
load_dll_kernel32();
if (!_imp__GetConsoleAliasExesLengthW) {
_imp__GetConsoleAliasExesLengthW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasExesLengthW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasExesLengthW));
}

void _elf_GetConsoleAliasExesW() asm("GetConsoleAliasExesW");
void *_imp__GetConsoleAliasExesW = NULL;
void _elf_GetConsoleAliasExesW() {
load_dll_kernel32();
if (!_imp__GetConsoleAliasExesW) {
_imp__GetConsoleAliasExesW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasExesW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasExesW));
}

void _elf_GetConsoleAliasW() asm("GetConsoleAliasW");
void *_imp__GetConsoleAliasW = NULL;
void _elf_GetConsoleAliasW() {
load_dll_kernel32();
if (!_imp__GetConsoleAliasW) {
_imp__GetConsoleAliasW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasW));
}

void _elf_GetConsoleAliasesA() asm("GetConsoleAliasesA");
void *_imp__GetConsoleAliasesA = NULL;
void _elf_GetConsoleAliasesA() {
load_dll_kernel32();
if (!_imp__GetConsoleAliasesA) {
_imp__GetConsoleAliasesA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasesA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasesA));
}

void _elf_GetConsoleAliasesLengthA() asm("GetConsoleAliasesLengthA");
void *_imp__GetConsoleAliasesLengthA = NULL;
void _elf_GetConsoleAliasesLengthA() {
load_dll_kernel32();
if (!_imp__GetConsoleAliasesLengthA) {
_imp__GetConsoleAliasesLengthA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasesLengthA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasesLengthA));
}

void _elf_GetConsoleAliasesLengthW() asm("GetConsoleAliasesLengthW");
void *_imp__GetConsoleAliasesLengthW = NULL;
void _elf_GetConsoleAliasesLengthW() {
load_dll_kernel32();
if (!_imp__GetConsoleAliasesLengthW) {
_imp__GetConsoleAliasesLengthW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasesLengthW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasesLengthW));
}

void _elf_GetConsoleAliasesW() asm("GetConsoleAliasesW");
void *_imp__GetConsoleAliasesW = NULL;
void _elf_GetConsoleAliasesW() {
load_dll_kernel32();
if (!_imp__GetConsoleAliasesW) {
_imp__GetConsoleAliasesW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleAliasesW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleAliasesW));
}

void _elf_GetConsoleCP() asm("GetConsoleCP");
void *_imp__GetConsoleCP = NULL;
void _elf_GetConsoleCP() {
load_dll_kernel32();
if (!_imp__GetConsoleCP) {
_imp__GetConsoleCP = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCP");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleCP));
}

void _elf_GetConsoleCharType() asm("GetConsoleCharType");
void *_imp__GetConsoleCharType = NULL;
void _elf_GetConsoleCharType() {
load_dll_kernel32();
if (!_imp__GetConsoleCharType) {
_imp__GetConsoleCharType = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCharType");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleCharType));
}

void _elf_GetConsoleCommandHistoryA() asm("GetConsoleCommandHistoryA");
void *_imp__GetConsoleCommandHistoryA = NULL;
void _elf_GetConsoleCommandHistoryA() {
load_dll_kernel32();
if (!_imp__GetConsoleCommandHistoryA) {
_imp__GetConsoleCommandHistoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCommandHistoryA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleCommandHistoryA));
}

void _elf_GetConsoleCommandHistoryLengthA() asm("GetConsoleCommandHistoryLengthA");
void *_imp__GetConsoleCommandHistoryLengthA = NULL;
void _elf_GetConsoleCommandHistoryLengthA() {
load_dll_kernel32();
if (!_imp__GetConsoleCommandHistoryLengthA) {
_imp__GetConsoleCommandHistoryLengthA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCommandHistoryLengthA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleCommandHistoryLengthA));
}

void _elf_GetConsoleCommandHistoryLengthW() asm("GetConsoleCommandHistoryLengthW");
void *_imp__GetConsoleCommandHistoryLengthW = NULL;
void _elf_GetConsoleCommandHistoryLengthW() {
load_dll_kernel32();
if (!_imp__GetConsoleCommandHistoryLengthW) {
_imp__GetConsoleCommandHistoryLengthW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCommandHistoryLengthW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleCommandHistoryLengthW));
}

void _elf_GetConsoleCommandHistoryW() asm("GetConsoleCommandHistoryW");
void *_imp__GetConsoleCommandHistoryW = NULL;
void _elf_GetConsoleCommandHistoryW() {
load_dll_kernel32();
if (!_imp__GetConsoleCommandHistoryW) {
_imp__GetConsoleCommandHistoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCommandHistoryW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleCommandHistoryW));
}

void _elf_GetConsoleCursorInfo() asm("GetConsoleCursorInfo");
void *_imp__GetConsoleCursorInfo = NULL;
void _elf_GetConsoleCursorInfo() {
load_dll_kernel32();
if (!_imp__GetConsoleCursorInfo) {
_imp__GetConsoleCursorInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCursorInfo");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleCursorInfo));
}

void _elf_GetConsoleCursorMode() asm("GetConsoleCursorMode");
void *_imp__GetConsoleCursorMode = NULL;
void _elf_GetConsoleCursorMode() {
load_dll_kernel32();
if (!_imp__GetConsoleCursorMode) {
_imp__GetConsoleCursorMode = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleCursorMode");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleCursorMode));
}

void _elf_GetConsoleDisplayMode() asm("GetConsoleDisplayMode");
void *_imp__GetConsoleDisplayMode = NULL;
void _elf_GetConsoleDisplayMode() {
load_dll_kernel32();
if (!_imp__GetConsoleDisplayMode) {
_imp__GetConsoleDisplayMode = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleDisplayMode");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleDisplayMode));
}

void _elf_GetConsoleFontInfo() asm("GetConsoleFontInfo");
void *_imp__GetConsoleFontInfo = NULL;
void _elf_GetConsoleFontInfo() {
load_dll_kernel32();
if (!_imp__GetConsoleFontInfo) {
_imp__GetConsoleFontInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleFontInfo");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleFontInfo));
}

void _elf_GetConsoleFontSize() asm("GetConsoleFontSize");
void *_imp__GetConsoleFontSize = NULL;
void _elf_GetConsoleFontSize() {
load_dll_kernel32();
if (!_imp__GetConsoleFontSize) {
_imp__GetConsoleFontSize = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleFontSize");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleFontSize));
}

void _elf_GetConsoleHardwareState() asm("GetConsoleHardwareState");
void *_imp__GetConsoleHardwareState = NULL;
void _elf_GetConsoleHardwareState() {
load_dll_kernel32();
if (!_imp__GetConsoleHardwareState) {
_imp__GetConsoleHardwareState = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleHardwareState");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleHardwareState));
}

void _elf_GetConsoleInputExeNameA() asm("GetConsoleInputExeNameA");
void *_imp__GetConsoleInputExeNameA = NULL;
void _elf_GetConsoleInputExeNameA() {
load_dll_kernel32();
if (!_imp__GetConsoleInputExeNameA) {
_imp__GetConsoleInputExeNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleInputExeNameA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleInputExeNameA));
}

void _elf_GetConsoleInputExeNameW() asm("GetConsoleInputExeNameW");
void *_imp__GetConsoleInputExeNameW = NULL;
void _elf_GetConsoleInputExeNameW() {
load_dll_kernel32();
if (!_imp__GetConsoleInputExeNameW) {
_imp__GetConsoleInputExeNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleInputExeNameW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleInputExeNameW));
}

void _elf_GetConsoleInputWaitHandle() asm("GetConsoleInputWaitHandle");
void *_imp__GetConsoleInputWaitHandle = NULL;
void _elf_GetConsoleInputWaitHandle() {
load_dll_kernel32();
if (!_imp__GetConsoleInputWaitHandle) {
_imp__GetConsoleInputWaitHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleInputWaitHandle");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleInputWaitHandle));
}

void _elf_GetConsoleKeyboardLayoutNameA() asm("GetConsoleKeyboardLayoutNameA");
void *_imp__GetConsoleKeyboardLayoutNameA = NULL;
void _elf_GetConsoleKeyboardLayoutNameA() {
load_dll_kernel32();
if (!_imp__GetConsoleKeyboardLayoutNameA) {
_imp__GetConsoleKeyboardLayoutNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleKeyboardLayoutNameA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleKeyboardLayoutNameA));
}

void _elf_GetConsoleKeyboardLayoutNameW() asm("GetConsoleKeyboardLayoutNameW");
void *_imp__GetConsoleKeyboardLayoutNameW = NULL;
void _elf_GetConsoleKeyboardLayoutNameW() {
load_dll_kernel32();
if (!_imp__GetConsoleKeyboardLayoutNameW) {
_imp__GetConsoleKeyboardLayoutNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleKeyboardLayoutNameW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleKeyboardLayoutNameW));
}

void _elf_GetConsoleMode() asm("GetConsoleMode");
void *_imp__GetConsoleMode = NULL;
void _elf_GetConsoleMode() {
load_dll_kernel32();
if (!_imp__GetConsoleMode) {
_imp__GetConsoleMode = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleMode");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleMode));
}

void _elf_GetConsoleNlsMode() asm("GetConsoleNlsMode");
void *_imp__GetConsoleNlsMode = NULL;
void _elf_GetConsoleNlsMode() {
load_dll_kernel32();
if (!_imp__GetConsoleNlsMode) {
_imp__GetConsoleNlsMode = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleNlsMode");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleNlsMode));
}

void _elf_GetConsoleOutputCP() asm("GetConsoleOutputCP");
void *_imp__GetConsoleOutputCP = NULL;
void _elf_GetConsoleOutputCP() {
load_dll_kernel32();
if (!_imp__GetConsoleOutputCP) {
_imp__GetConsoleOutputCP = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleOutputCP");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleOutputCP));
}

void _elf_GetConsoleProcessList() asm("GetConsoleProcessList");
void *_imp__GetConsoleProcessList = NULL;
void _elf_GetConsoleProcessList() {
load_dll_kernel32();
if (!_imp__GetConsoleProcessList) {
_imp__GetConsoleProcessList = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleProcessList");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleProcessList));
}

void _elf_GetConsoleScreenBufferInfo() asm("GetConsoleScreenBufferInfo");
void *_imp__GetConsoleScreenBufferInfo = NULL;
void _elf_GetConsoleScreenBufferInfo() {
load_dll_kernel32();
if (!_imp__GetConsoleScreenBufferInfo) {
_imp__GetConsoleScreenBufferInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleScreenBufferInfo");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleScreenBufferInfo));
}

void _elf_GetConsoleSelectionInfo() asm("GetConsoleSelectionInfo");
void *_imp__GetConsoleSelectionInfo = NULL;
void _elf_GetConsoleSelectionInfo() {
load_dll_kernel32();
if (!_imp__GetConsoleSelectionInfo) {
_imp__GetConsoleSelectionInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleSelectionInfo");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleSelectionInfo));
}

void _elf_GetConsoleTitleA() asm("GetConsoleTitleA");
void *_imp__GetConsoleTitleA = NULL;
void _elf_GetConsoleTitleA() {
load_dll_kernel32();
if (!_imp__GetConsoleTitleA) {
_imp__GetConsoleTitleA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleTitleA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleTitleA));
}

void _elf_GetConsoleTitleW() asm("GetConsoleTitleW");
void *_imp__GetConsoleTitleW = NULL;
void _elf_GetConsoleTitleW() {
load_dll_kernel32();
if (!_imp__GetConsoleTitleW) {
_imp__GetConsoleTitleW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleTitleW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleTitleW));
}

void _elf_GetConsoleWindow() asm("GetConsoleWindow");
void *_imp__GetConsoleWindow = NULL;
void _elf_GetConsoleWindow() {
load_dll_kernel32();
if (!_imp__GetConsoleWindow) {
_imp__GetConsoleWindow = (void *) _elf_GetProcAddress(_dll_kernel32, "GetConsoleWindow");
}
asm("leave\njmp *%0" : : "r"(_imp__GetConsoleWindow));
}

void _elf_GetCurrencyFormatA() asm("GetCurrencyFormatA");
void *_imp__GetCurrencyFormatA = NULL;
void _elf_GetCurrencyFormatA() {
load_dll_kernel32();
if (!_imp__GetCurrencyFormatA) {
_imp__GetCurrencyFormatA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrencyFormatA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCurrencyFormatA));
}

void _elf_GetCurrencyFormatW() asm("GetCurrencyFormatW");
void *_imp__GetCurrencyFormatW = NULL;
void _elf_GetCurrencyFormatW() {
load_dll_kernel32();
if (!_imp__GetCurrencyFormatW) {
_imp__GetCurrencyFormatW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrencyFormatW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCurrencyFormatW));
}

void _elf_GetCurrentActCtx() asm("GetCurrentActCtx");
void *_imp__GetCurrentActCtx = NULL;
void _elf_GetCurrentActCtx() {
load_dll_kernel32();
if (!_imp__GetCurrentActCtx) {
_imp__GetCurrentActCtx = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentActCtx");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCurrentActCtx));
}

void _elf_GetCurrentConsoleFont() asm("GetCurrentConsoleFont");
void *_imp__GetCurrentConsoleFont = NULL;
void _elf_GetCurrentConsoleFont() {
load_dll_kernel32();
if (!_imp__GetCurrentConsoleFont) {
_imp__GetCurrentConsoleFont = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentConsoleFont");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCurrentConsoleFont));
}

void _elf_GetCurrentDirectoryA() asm("GetCurrentDirectoryA");
void *_imp__GetCurrentDirectoryA = NULL;
void _elf_GetCurrentDirectoryA() {
load_dll_kernel32();
if (!_imp__GetCurrentDirectoryA) {
_imp__GetCurrentDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentDirectoryA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCurrentDirectoryA));
}

void _elf_GetCurrentDirectoryW() asm("GetCurrentDirectoryW");
void *_imp__GetCurrentDirectoryW = NULL;
void _elf_GetCurrentDirectoryW() {
load_dll_kernel32();
if (!_imp__GetCurrentDirectoryW) {
_imp__GetCurrentDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentDirectoryW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCurrentDirectoryW));
}

void _elf_GetCurrentProcess() asm("GetCurrentProcess");
void *_imp__GetCurrentProcess = NULL;
void _elf_GetCurrentProcess() {
load_dll_kernel32();
if (!_imp__GetCurrentProcess) {
_imp__GetCurrentProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentProcess");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCurrentProcess));
}

void _elf_GetCurrentProcessId() asm("GetCurrentProcessId");
void *_imp__GetCurrentProcessId = NULL;
void _elf_GetCurrentProcessId() {
load_dll_kernel32();
if (!_imp__GetCurrentProcessId) {
_imp__GetCurrentProcessId = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentProcessId");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCurrentProcessId));
}

void _elf_GetCurrentThread() asm("GetCurrentThread");
void *_imp__GetCurrentThread = NULL;
void _elf_GetCurrentThread() {
load_dll_kernel32();
if (!_imp__GetCurrentThread) {
_imp__GetCurrentThread = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentThread");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCurrentThread));
}

void _elf_GetCurrentThreadId() asm("GetCurrentThreadId");
void *_imp__GetCurrentThreadId = NULL;
void _elf_GetCurrentThreadId() {
load_dll_kernel32();
if (!_imp__GetCurrentThreadId) {
_imp__GetCurrentThreadId = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentThreadId");
}
asm("leave\njmp *%0" : : "r"(_imp__GetCurrentThreadId));
}

void _elf_GetDateFormatA() asm("GetDateFormatA");
void *_imp__GetDateFormatA = NULL;
void _elf_GetDateFormatA() {
load_dll_kernel32();
if (!_imp__GetDateFormatA) {
_imp__GetDateFormatA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDateFormatA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetDateFormatA));
}

void _elf_GetDateFormatW() asm("GetDateFormatW");
void *_imp__GetDateFormatW = NULL;
void _elf_GetDateFormatW() {
load_dll_kernel32();
if (!_imp__GetDateFormatW) {
_imp__GetDateFormatW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDateFormatW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetDateFormatW));
}

void _elf_GetDefaultCommConfigA() asm("GetDefaultCommConfigA");
void *_imp__GetDefaultCommConfigA = NULL;
void _elf_GetDefaultCommConfigA() {
load_dll_kernel32();
if (!_imp__GetDefaultCommConfigA) {
_imp__GetDefaultCommConfigA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDefaultCommConfigA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetDefaultCommConfigA));
}

void _elf_GetDefaultCommConfigW() asm("GetDefaultCommConfigW");
void *_imp__GetDefaultCommConfigW = NULL;
void _elf_GetDefaultCommConfigW() {
load_dll_kernel32();
if (!_imp__GetDefaultCommConfigW) {
_imp__GetDefaultCommConfigW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDefaultCommConfigW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetDefaultCommConfigW));
}

void _elf_GetDefaultSortkeySize() asm("GetDefaultSortkeySize");
void *_imp__GetDefaultSortkeySize = NULL;
void _elf_GetDefaultSortkeySize() {
load_dll_kernel32();
if (!_imp__GetDefaultSortkeySize) {
_imp__GetDefaultSortkeySize = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDefaultSortkeySize");
}
asm("leave\njmp *%0" : : "r"(_imp__GetDefaultSortkeySize));
}

void _elf_GetDevicePowerState() asm("GetDevicePowerState");
void *_imp__GetDevicePowerState = NULL;
void _elf_GetDevicePowerState() {
load_dll_kernel32();
if (!_imp__GetDevicePowerState) {
_imp__GetDevicePowerState = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDevicePowerState");
}
asm("leave\njmp *%0" : : "r"(_imp__GetDevicePowerState));
}

void _elf_GetDiskFreeSpaceA() asm("GetDiskFreeSpaceA");
void *_imp__GetDiskFreeSpaceA = NULL;
void _elf_GetDiskFreeSpaceA() {
load_dll_kernel32();
if (!_imp__GetDiskFreeSpaceA) {
_imp__GetDiskFreeSpaceA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDiskFreeSpaceA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetDiskFreeSpaceA));
}

void _elf_GetDiskFreeSpaceExA() asm("GetDiskFreeSpaceExA");
void *_imp__GetDiskFreeSpaceExA = NULL;
void _elf_GetDiskFreeSpaceExA() {
load_dll_kernel32();
if (!_imp__GetDiskFreeSpaceExA) {
_imp__GetDiskFreeSpaceExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDiskFreeSpaceExA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetDiskFreeSpaceExA));
}

void _elf_GetDiskFreeSpaceExW() asm("GetDiskFreeSpaceExW");
void *_imp__GetDiskFreeSpaceExW = NULL;
void _elf_GetDiskFreeSpaceExW() {
load_dll_kernel32();
if (!_imp__GetDiskFreeSpaceExW) {
_imp__GetDiskFreeSpaceExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDiskFreeSpaceExW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetDiskFreeSpaceExW));
}

void _elf_GetDiskFreeSpaceW() asm("GetDiskFreeSpaceW");
void *_imp__GetDiskFreeSpaceW = NULL;
void _elf_GetDiskFreeSpaceW() {
load_dll_kernel32();
if (!_imp__GetDiskFreeSpaceW) {
_imp__GetDiskFreeSpaceW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDiskFreeSpaceW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetDiskFreeSpaceW));
}

void _elf_GetDllDirectoryA() asm("GetDllDirectoryA");
void *_imp__GetDllDirectoryA = NULL;
void _elf_GetDllDirectoryA() {
load_dll_kernel32();
if (!_imp__GetDllDirectoryA) {
_imp__GetDllDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDllDirectoryA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetDllDirectoryA));
}

void _elf_GetDllDirectoryW() asm("GetDllDirectoryW");
void *_imp__GetDllDirectoryW = NULL;
void _elf_GetDllDirectoryW() {
load_dll_kernel32();
if (!_imp__GetDllDirectoryW) {
_imp__GetDllDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDllDirectoryW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetDllDirectoryW));
}

void _elf_GetDriveTypeA() asm("GetDriveTypeA");
void *_imp__GetDriveTypeA = NULL;
void _elf_GetDriveTypeA() {
load_dll_kernel32();
if (!_imp__GetDriveTypeA) {
_imp__GetDriveTypeA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDriveTypeA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetDriveTypeA));
}

void _elf_GetDriveTypeW() asm("GetDriveTypeW");
void *_imp__GetDriveTypeW = NULL;
void _elf_GetDriveTypeW() {
load_dll_kernel32();
if (!_imp__GetDriveTypeW) {
_imp__GetDriveTypeW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDriveTypeW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetDriveTypeW));
}

void _elf_GetEnvironmentStrings() asm("GetEnvironmentStrings");
void *_imp__GetEnvironmentStrings = NULL;
void _elf_GetEnvironmentStrings() {
load_dll_kernel32();
if (!_imp__GetEnvironmentStrings) {
_imp__GetEnvironmentStrings = (void *) _elf_GetProcAddress(_dll_kernel32, "GetEnvironmentStrings");
}
asm("leave\njmp *%0" : : "r"(_imp__GetEnvironmentStrings));
}

void _elf_GetEnvironmentStringsA() asm("GetEnvironmentStringsA");
void *_imp__GetEnvironmentStringsA = NULL;
void _elf_GetEnvironmentStringsA() {
load_dll_kernel32();
if (!_imp__GetEnvironmentStringsA) {
_imp__GetEnvironmentStringsA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetEnvironmentStringsA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetEnvironmentStringsA));
}

void _elf_GetEnvironmentStringsW() asm("GetEnvironmentStringsW");
void *_imp__GetEnvironmentStringsW = NULL;
void _elf_GetEnvironmentStringsW() {
load_dll_kernel32();
if (!_imp__GetEnvironmentStringsW) {
_imp__GetEnvironmentStringsW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetEnvironmentStringsW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetEnvironmentStringsW));
}

void _elf_GetEnvironmentVariableA() asm("GetEnvironmentVariableA");
void *_imp__GetEnvironmentVariableA = NULL;
void _elf_GetEnvironmentVariableA() {
load_dll_kernel32();
if (!_imp__GetEnvironmentVariableA) {
_imp__GetEnvironmentVariableA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetEnvironmentVariableA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetEnvironmentVariableA));
}

void _elf_GetEnvironmentVariableW() asm("GetEnvironmentVariableW");
void *_imp__GetEnvironmentVariableW = NULL;
void _elf_GetEnvironmentVariableW() {
load_dll_kernel32();
if (!_imp__GetEnvironmentVariableW) {
_imp__GetEnvironmentVariableW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetEnvironmentVariableW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetEnvironmentVariableW));
}

void _elf_GetExitCodeProcess() asm("GetExitCodeProcess");
void *_imp__GetExitCodeProcess = NULL;
void _elf_GetExitCodeProcess() {
load_dll_kernel32();
if (!_imp__GetExitCodeProcess) {
_imp__GetExitCodeProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "GetExitCodeProcess");
}
asm("leave\njmp *%0" : : "r"(_imp__GetExitCodeProcess));
}

void _elf_GetExitCodeThread() asm("GetExitCodeThread");
void *_imp__GetExitCodeThread = NULL;
void _elf_GetExitCodeThread() {
load_dll_kernel32();
if (!_imp__GetExitCodeThread) {
_imp__GetExitCodeThread = (void *) _elf_GetProcAddress(_dll_kernel32, "GetExitCodeThread");
}
asm("leave\njmp *%0" : : "r"(_imp__GetExitCodeThread));
}

void _elf_GetExpandedNameA() asm("GetExpandedNameA");
void *_imp__GetExpandedNameA = NULL;
void _elf_GetExpandedNameA() {
load_dll_kernel32();
if (!_imp__GetExpandedNameA) {
_imp__GetExpandedNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetExpandedNameA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetExpandedNameA));
}

void _elf_GetExpandedNameW() asm("GetExpandedNameW");
void *_imp__GetExpandedNameW = NULL;
void _elf_GetExpandedNameW() {
load_dll_kernel32();
if (!_imp__GetExpandedNameW) {
_imp__GetExpandedNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetExpandedNameW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetExpandedNameW));
}

void _elf_GetFileAttributesA() asm("GetFileAttributesA");
void *_imp__GetFileAttributesA = NULL;
void _elf_GetFileAttributesA() {
load_dll_kernel32();
if (!_imp__GetFileAttributesA) {
_imp__GetFileAttributesA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileAttributesA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetFileAttributesA));
}

void _elf_GetFileAttributesExA() asm("GetFileAttributesExA");
void *_imp__GetFileAttributesExA = NULL;
void _elf_GetFileAttributesExA() {
load_dll_kernel32();
if (!_imp__GetFileAttributesExA) {
_imp__GetFileAttributesExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileAttributesExA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetFileAttributesExA));
}

void _elf_GetFileAttributesExW() asm("GetFileAttributesExW");
void *_imp__GetFileAttributesExW = NULL;
void _elf_GetFileAttributesExW() {
load_dll_kernel32();
if (!_imp__GetFileAttributesExW) {
_imp__GetFileAttributesExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileAttributesExW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetFileAttributesExW));
}

void _elf_GetFileAttributesW() asm("GetFileAttributesW");
void *_imp__GetFileAttributesW = NULL;
void _elf_GetFileAttributesW() {
load_dll_kernel32();
if (!_imp__GetFileAttributesW) {
_imp__GetFileAttributesW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileAttributesW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetFileAttributesW));
}

void _elf_GetFileInformationByHandle() asm("GetFileInformationByHandle");
void *_imp__GetFileInformationByHandle = NULL;
void _elf_GetFileInformationByHandle() {
load_dll_kernel32();
if (!_imp__GetFileInformationByHandle) {
_imp__GetFileInformationByHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileInformationByHandle");
}
asm("leave\njmp *%0" : : "r"(_imp__GetFileInformationByHandle));
}

void _elf_GetFileSize() asm("GetFileSize");
void *_imp__GetFileSize = NULL;
void _elf_GetFileSize() {
load_dll_kernel32();
if (!_imp__GetFileSize) {
_imp__GetFileSize = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileSize");
}
asm("leave\njmp *%0" : : "r"(_imp__GetFileSize));
}

void _elf_GetFileSizeEx() asm("GetFileSizeEx");
void *_imp__GetFileSizeEx = NULL;
void _elf_GetFileSizeEx() {
load_dll_kernel32();
if (!_imp__GetFileSizeEx) {
_imp__GetFileSizeEx = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileSizeEx");
}
asm("leave\njmp *%0" : : "r"(_imp__GetFileSizeEx));
}

void _elf_GetFileTime() asm("GetFileTime");
void *_imp__GetFileTime = NULL;
void _elf_GetFileTime() {
load_dll_kernel32();
if (!_imp__GetFileTime) {
_imp__GetFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileTime");
}
asm("leave\njmp *%0" : : "r"(_imp__GetFileTime));
}

void _elf_GetFileType() asm("GetFileType");
void *_imp__GetFileType = NULL;
void _elf_GetFileType() {
load_dll_kernel32();
if (!_imp__GetFileType) {
_imp__GetFileType = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileType");
}
asm("leave\njmp *%0" : : "r"(_imp__GetFileType));
}

void _elf_GetFirmwareEnvironmentVariableA() asm("GetFirmwareEnvironmentVariableA");
void *_imp__GetFirmwareEnvironmentVariableA = NULL;
void _elf_GetFirmwareEnvironmentVariableA() {
load_dll_kernel32();
if (!_imp__GetFirmwareEnvironmentVariableA) {
_imp__GetFirmwareEnvironmentVariableA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFirmwareEnvironmentVariableA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetFirmwareEnvironmentVariableA));
}

void _elf_GetFirmwareEnvironmentVariableW() asm("GetFirmwareEnvironmentVariableW");
void *_imp__GetFirmwareEnvironmentVariableW = NULL;
void _elf_GetFirmwareEnvironmentVariableW() {
load_dll_kernel32();
if (!_imp__GetFirmwareEnvironmentVariableW) {
_imp__GetFirmwareEnvironmentVariableW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFirmwareEnvironmentVariableW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetFirmwareEnvironmentVariableW));
}

void _elf_GetFullPathNameA() asm("GetFullPathNameA");
void *_imp__GetFullPathNameA = NULL;
void _elf_GetFullPathNameA() {
load_dll_kernel32();
if (!_imp__GetFullPathNameA) {
_imp__GetFullPathNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFullPathNameA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetFullPathNameA));
}

void _elf_GetFullPathNameW() asm("GetFullPathNameW");
void *_imp__GetFullPathNameW = NULL;
void _elf_GetFullPathNameW() {
load_dll_kernel32();
if (!_imp__GetFullPathNameW) {
_imp__GetFullPathNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFullPathNameW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetFullPathNameW));
}

void _elf_GetGeoInfoA() asm("GetGeoInfoA");
void *_imp__GetGeoInfoA = NULL;
void _elf_GetGeoInfoA() {
load_dll_kernel32();
if (!_imp__GetGeoInfoA) {
_imp__GetGeoInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetGeoInfoA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetGeoInfoA));
}

void _elf_GetGeoInfoW() asm("GetGeoInfoW");
void *_imp__GetGeoInfoW = NULL;
void _elf_GetGeoInfoW() {
load_dll_kernel32();
if (!_imp__GetGeoInfoW) {
_imp__GetGeoInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetGeoInfoW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetGeoInfoW));
}

void _elf_GetHandleContext() asm("GetHandleContext");
void *_imp__GetHandleContext = NULL;
void _elf_GetHandleContext() {
load_dll_kernel32();
if (!_imp__GetHandleContext) {
_imp__GetHandleContext = (void *) _elf_GetProcAddress(_dll_kernel32, "GetHandleContext");
}
asm("leave\njmp *%0" : : "r"(_imp__GetHandleContext));
}

void _elf_GetHandleInformation() asm("GetHandleInformation");
void *_imp__GetHandleInformation = NULL;
void _elf_GetHandleInformation() {
load_dll_kernel32();
if (!_imp__GetHandleInformation) {
_imp__GetHandleInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "GetHandleInformation");
}
asm("leave\njmp *%0" : : "r"(_imp__GetHandleInformation));
}

void _elf_GetLargestConsoleWindowSize() asm("GetLargestConsoleWindowSize");
void *_imp__GetLargestConsoleWindowSize = NULL;
void _elf_GetLargestConsoleWindowSize() {
load_dll_kernel32();
if (!_imp__GetLargestConsoleWindowSize) {
_imp__GetLargestConsoleWindowSize = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLargestConsoleWindowSize");
}
asm("leave\njmp *%0" : : "r"(_imp__GetLargestConsoleWindowSize));
}

void _elf_GetLastError() asm("GetLastError");
void *_imp__GetLastError = NULL;
void _elf_GetLastError() {
load_dll_kernel32();
if (!_imp__GetLastError) {
_imp__GetLastError = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLastError");
}
asm("leave\njmp *%0" : : "r"(_imp__GetLastError));
}

void _elf_GetLinguistLangSize() asm("GetLinguistLangSize");
void *_imp__GetLinguistLangSize = NULL;
void _elf_GetLinguistLangSize() {
load_dll_kernel32();
if (!_imp__GetLinguistLangSize) {
_imp__GetLinguistLangSize = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLinguistLangSize");
}
asm("leave\njmp *%0" : : "r"(_imp__GetLinguistLangSize));
}

void _elf_GetLocalTime() asm("GetLocalTime");
void *_imp__GetLocalTime = NULL;
void _elf_GetLocalTime() {
load_dll_kernel32();
if (!_imp__GetLocalTime) {
_imp__GetLocalTime = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLocalTime");
}
asm("leave\njmp *%0" : : "r"(_imp__GetLocalTime));
}

void _elf_GetLocaleInfoA() asm("GetLocaleInfoA");
void *_imp__GetLocaleInfoA = NULL;
void _elf_GetLocaleInfoA() {
load_dll_kernel32();
if (!_imp__GetLocaleInfoA) {
_imp__GetLocaleInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLocaleInfoA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetLocaleInfoA));
}

void _elf_GetLocaleInfoW() asm("GetLocaleInfoW");
void *_imp__GetLocaleInfoW = NULL;
void _elf_GetLocaleInfoW() {
load_dll_kernel32();
if (!_imp__GetLocaleInfoW) {
_imp__GetLocaleInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLocaleInfoW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetLocaleInfoW));
}

void _elf_GetLogicalDriveStringsA() asm("GetLogicalDriveStringsA");
void *_imp__GetLogicalDriveStringsA = NULL;
void _elf_GetLogicalDriveStringsA() {
load_dll_kernel32();
if (!_imp__GetLogicalDriveStringsA) {
_imp__GetLogicalDriveStringsA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLogicalDriveStringsA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetLogicalDriveStringsA));
}

void _elf_GetLogicalDriveStringsW() asm("GetLogicalDriveStringsW");
void *_imp__GetLogicalDriveStringsW = NULL;
void _elf_GetLogicalDriveStringsW() {
load_dll_kernel32();
if (!_imp__GetLogicalDriveStringsW) {
_imp__GetLogicalDriveStringsW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLogicalDriveStringsW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetLogicalDriveStringsW));
}

void _elf_GetLogicalDrives() asm("GetLogicalDrives");
void *_imp__GetLogicalDrives = NULL;
void _elf_GetLogicalDrives() {
load_dll_kernel32();
if (!_imp__GetLogicalDrives) {
_imp__GetLogicalDrives = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLogicalDrives");
}
asm("leave\njmp *%0" : : "r"(_imp__GetLogicalDrives));
}

void _elf_GetLongPathNameA() asm("GetLongPathNameA");
void *_imp__GetLongPathNameA = NULL;
void _elf_GetLongPathNameA() {
load_dll_kernel32();
if (!_imp__GetLongPathNameA) {
_imp__GetLongPathNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLongPathNameA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetLongPathNameA));
}

void _elf_GetLongPathNameW() asm("GetLongPathNameW");
void *_imp__GetLongPathNameW = NULL;
void _elf_GetLongPathNameW() {
load_dll_kernel32();
if (!_imp__GetLongPathNameW) {
_imp__GetLongPathNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLongPathNameW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetLongPathNameW));
}

void _elf_GetMailslotInfo() asm("GetMailslotInfo");
void *_imp__GetMailslotInfo = NULL;
void _elf_GetMailslotInfo() {
load_dll_kernel32();
if (!_imp__GetMailslotInfo) {
_imp__GetMailslotInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetMailslotInfo");
}
asm("leave\njmp *%0" : : "r"(_imp__GetMailslotInfo));
}

void _elf_GetModuleFileNameA() asm("GetModuleFileNameA");
void *_imp__GetModuleFileNameA = NULL;
void _elf_GetModuleFileNameA() {
load_dll_kernel32();
if (!_imp__GetModuleFileNameA) {
_imp__GetModuleFileNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetModuleFileNameA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetModuleFileNameA));
}

void _elf_GetModuleFileNameW() asm("GetModuleFileNameW");
void *_imp__GetModuleFileNameW = NULL;
void _elf_GetModuleFileNameW() {
load_dll_kernel32();
if (!_imp__GetModuleFileNameW) {
_imp__GetModuleFileNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetModuleFileNameW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetModuleFileNameW));
}

void _elf_GetModuleHandleExA() asm("GetModuleHandleExA");
void *_imp__GetModuleHandleExA = NULL;
void _elf_GetModuleHandleExA() {
load_dll_kernel32();
if (!_imp__GetModuleHandleExA) {
_imp__GetModuleHandleExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetModuleHandleExA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetModuleHandleExA));
}

void _elf_GetModuleHandleExW() asm("GetModuleHandleExW");
void *_imp__GetModuleHandleExW = NULL;
void _elf_GetModuleHandleExW() {
load_dll_kernel32();
if (!_imp__GetModuleHandleExW) {
_imp__GetModuleHandleExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetModuleHandleExW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetModuleHandleExW));
}

void _elf_GetModuleHandleW() asm("GetModuleHandleW");
void *_imp__GetModuleHandleW = NULL;
void _elf_GetModuleHandleW() {
load_dll_kernel32();
if (!_imp__GetModuleHandleW) {
_imp__GetModuleHandleW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetModuleHandleW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetModuleHandleW));
}

void _elf_GetNamedPipeHandleStateA() asm("GetNamedPipeHandleStateA");
void *_imp__GetNamedPipeHandleStateA = NULL;
void _elf_GetNamedPipeHandleStateA() {
load_dll_kernel32();
if (!_imp__GetNamedPipeHandleStateA) {
_imp__GetNamedPipeHandleStateA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNamedPipeHandleStateA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetNamedPipeHandleStateA));
}

void _elf_GetNamedPipeHandleStateW() asm("GetNamedPipeHandleStateW");
void *_imp__GetNamedPipeHandleStateW = NULL;
void _elf_GetNamedPipeHandleStateW() {
load_dll_kernel32();
if (!_imp__GetNamedPipeHandleStateW) {
_imp__GetNamedPipeHandleStateW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNamedPipeHandleStateW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetNamedPipeHandleStateW));
}

void _elf_GetNamedPipeInfo() asm("GetNamedPipeInfo");
void *_imp__GetNamedPipeInfo = NULL;
void _elf_GetNamedPipeInfo() {
load_dll_kernel32();
if (!_imp__GetNamedPipeInfo) {
_imp__GetNamedPipeInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNamedPipeInfo");
}
asm("leave\njmp *%0" : : "r"(_imp__GetNamedPipeInfo));
}

void _elf_GetNativeSystemInfo() asm("GetNativeSystemInfo");
void *_imp__GetNativeSystemInfo = NULL;
void _elf_GetNativeSystemInfo() {
load_dll_kernel32();
if (!_imp__GetNativeSystemInfo) {
_imp__GetNativeSystemInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNativeSystemInfo");
}
asm("leave\njmp *%0" : : "r"(_imp__GetNativeSystemInfo));
}

void _elf_GetNextVDMCommand() asm("GetNextVDMCommand");
void *_imp__GetNextVDMCommand = NULL;
void _elf_GetNextVDMCommand() {
load_dll_kernel32();
if (!_imp__GetNextVDMCommand) {
_imp__GetNextVDMCommand = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNextVDMCommand");
}
asm("leave\njmp *%0" : : "r"(_imp__GetNextVDMCommand));
}

void _elf_GetNlsSectionName() asm("GetNlsSectionName");
void *_imp__GetNlsSectionName = NULL;
void _elf_GetNlsSectionName() {
load_dll_kernel32();
if (!_imp__GetNlsSectionName) {
_imp__GetNlsSectionName = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNlsSectionName");
}
asm("leave\njmp *%0" : : "r"(_imp__GetNlsSectionName));
}

void _elf_GetNumaAvailableMemory() asm("GetNumaAvailableMemory");
void *_imp__GetNumaAvailableMemory = NULL;
void _elf_GetNumaAvailableMemory() {
load_dll_kernel32();
if (!_imp__GetNumaAvailableMemory) {
_imp__GetNumaAvailableMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumaAvailableMemory");
}
asm("leave\njmp *%0" : : "r"(_imp__GetNumaAvailableMemory));
}

void _elf_GetNumaAvailableMemoryNode() asm("GetNumaAvailableMemoryNode");
void *_imp__GetNumaAvailableMemoryNode = NULL;
void _elf_GetNumaAvailableMemoryNode() {
load_dll_kernel32();
if (!_imp__GetNumaAvailableMemoryNode) {
_imp__GetNumaAvailableMemoryNode = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumaAvailableMemoryNode");
}
asm("leave\njmp *%0" : : "r"(_imp__GetNumaAvailableMemoryNode));
}

void _elf_GetNumaHighestNodeNumber() asm("GetNumaHighestNodeNumber");
void *_imp__GetNumaHighestNodeNumber = NULL;
void _elf_GetNumaHighestNodeNumber() {
load_dll_kernel32();
if (!_imp__GetNumaHighestNodeNumber) {
_imp__GetNumaHighestNodeNumber = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumaHighestNodeNumber");
}
asm("leave\njmp *%0" : : "r"(_imp__GetNumaHighestNodeNumber));
}

void _elf_GetNumaNodeProcessorMask() asm("GetNumaNodeProcessorMask");
void *_imp__GetNumaNodeProcessorMask = NULL;
void _elf_GetNumaNodeProcessorMask() {
load_dll_kernel32();
if (!_imp__GetNumaNodeProcessorMask) {
_imp__GetNumaNodeProcessorMask = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumaNodeProcessorMask");
}
asm("leave\njmp *%0" : : "r"(_imp__GetNumaNodeProcessorMask));
}

void _elf_GetNumaProcessorMap() asm("GetNumaProcessorMap");
void *_imp__GetNumaProcessorMap = NULL;
void _elf_GetNumaProcessorMap() {
load_dll_kernel32();
if (!_imp__GetNumaProcessorMap) {
_imp__GetNumaProcessorMap = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumaProcessorMap");
}
asm("leave\njmp *%0" : : "r"(_imp__GetNumaProcessorMap));
}

void _elf_GetNumaProcessorNode() asm("GetNumaProcessorNode");
void *_imp__GetNumaProcessorNode = NULL;
void _elf_GetNumaProcessorNode() {
load_dll_kernel32();
if (!_imp__GetNumaProcessorNode) {
_imp__GetNumaProcessorNode = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumaProcessorNode");
}
asm("leave\njmp *%0" : : "r"(_imp__GetNumaProcessorNode));
}

void _elf_GetNumberFormatA() asm("GetNumberFormatA");
void *_imp__GetNumberFormatA = NULL;
void _elf_GetNumberFormatA() {
load_dll_kernel32();
if (!_imp__GetNumberFormatA) {
_imp__GetNumberFormatA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumberFormatA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetNumberFormatA));
}

void _elf_GetNumberFormatW() asm("GetNumberFormatW");
void *_imp__GetNumberFormatW = NULL;
void _elf_GetNumberFormatW() {
load_dll_kernel32();
if (!_imp__GetNumberFormatW) {
_imp__GetNumberFormatW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumberFormatW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetNumberFormatW));
}

void _elf_GetNumberOfConsoleFonts() asm("GetNumberOfConsoleFonts");
void *_imp__GetNumberOfConsoleFonts = NULL;
void _elf_GetNumberOfConsoleFonts() {
load_dll_kernel32();
if (!_imp__GetNumberOfConsoleFonts) {
_imp__GetNumberOfConsoleFonts = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumberOfConsoleFonts");
}
asm("leave\njmp *%0" : : "r"(_imp__GetNumberOfConsoleFonts));
}

void _elf_GetNumberOfConsoleInputEvents() asm("GetNumberOfConsoleInputEvents");
void *_imp__GetNumberOfConsoleInputEvents = NULL;
void _elf_GetNumberOfConsoleInputEvents() {
load_dll_kernel32();
if (!_imp__GetNumberOfConsoleInputEvents) {
_imp__GetNumberOfConsoleInputEvents = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumberOfConsoleInputEvents");
}
asm("leave\njmp *%0" : : "r"(_imp__GetNumberOfConsoleInputEvents));
}

void _elf_GetNumberOfConsoleMouseButtons() asm("GetNumberOfConsoleMouseButtons");
void *_imp__GetNumberOfConsoleMouseButtons = NULL;
void _elf_GetNumberOfConsoleMouseButtons() {
load_dll_kernel32();
if (!_imp__GetNumberOfConsoleMouseButtons) {
_imp__GetNumberOfConsoleMouseButtons = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumberOfConsoleMouseButtons");
}
asm("leave\njmp *%0" : : "r"(_imp__GetNumberOfConsoleMouseButtons));
}

void _elf_GetOEMCP() asm("GetOEMCP");
void *_imp__GetOEMCP = NULL;
void _elf_GetOEMCP() {
load_dll_kernel32();
if (!_imp__GetOEMCP) {
_imp__GetOEMCP = (void *) _elf_GetProcAddress(_dll_kernel32, "GetOEMCP");
}
asm("leave\njmp *%0" : : "r"(_imp__GetOEMCP));
}

void _elf_GetOverlappedResult() asm("GetOverlappedResult");
void *_imp__GetOverlappedResult = NULL;
void _elf_GetOverlappedResult() {
load_dll_kernel32();
if (!_imp__GetOverlappedResult) {
_imp__GetOverlappedResult = (void *) _elf_GetProcAddress(_dll_kernel32, "GetOverlappedResult");
}
asm("leave\njmp *%0" : : "r"(_imp__GetOverlappedResult));
}

void _elf_GetPriorityClass() asm("GetPriorityClass");
void *_imp__GetPriorityClass = NULL;
void _elf_GetPriorityClass() {
load_dll_kernel32();
if (!_imp__GetPriorityClass) {
_imp__GetPriorityClass = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPriorityClass");
}
asm("leave\njmp *%0" : : "r"(_imp__GetPriorityClass));
}

void _elf_GetPrivateProfileIntA() asm("GetPrivateProfileIntA");
void *_imp__GetPrivateProfileIntA = NULL;
void _elf_GetPrivateProfileIntA() {
load_dll_kernel32();
if (!_imp__GetPrivateProfileIntA) {
_imp__GetPrivateProfileIntA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileIntA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileIntA));
}

void _elf_GetPrivateProfileIntW() asm("GetPrivateProfileIntW");
void *_imp__GetPrivateProfileIntW = NULL;
void _elf_GetPrivateProfileIntW() {
load_dll_kernel32();
if (!_imp__GetPrivateProfileIntW) {
_imp__GetPrivateProfileIntW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileIntW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileIntW));
}

void _elf_GetPrivateProfileSectionA() asm("GetPrivateProfileSectionA");
void *_imp__GetPrivateProfileSectionA = NULL;
void _elf_GetPrivateProfileSectionA() {
load_dll_kernel32();
if (!_imp__GetPrivateProfileSectionA) {
_imp__GetPrivateProfileSectionA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileSectionA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileSectionA));
}

void _elf_GetPrivateProfileSectionNamesA() asm("GetPrivateProfileSectionNamesA");
void *_imp__GetPrivateProfileSectionNamesA = NULL;
void _elf_GetPrivateProfileSectionNamesA() {
load_dll_kernel32();
if (!_imp__GetPrivateProfileSectionNamesA) {
_imp__GetPrivateProfileSectionNamesA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileSectionNamesA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileSectionNamesA));
}

void _elf_GetPrivateProfileSectionNamesW() asm("GetPrivateProfileSectionNamesW");
void *_imp__GetPrivateProfileSectionNamesW = NULL;
void _elf_GetPrivateProfileSectionNamesW() {
load_dll_kernel32();
if (!_imp__GetPrivateProfileSectionNamesW) {
_imp__GetPrivateProfileSectionNamesW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileSectionNamesW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileSectionNamesW));
}

void _elf_GetPrivateProfileSectionW() asm("GetPrivateProfileSectionW");
void *_imp__GetPrivateProfileSectionW = NULL;
void _elf_GetPrivateProfileSectionW() {
load_dll_kernel32();
if (!_imp__GetPrivateProfileSectionW) {
_imp__GetPrivateProfileSectionW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileSectionW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileSectionW));
}

void _elf_GetPrivateProfileStringA() asm("GetPrivateProfileStringA");
void *_imp__GetPrivateProfileStringA = NULL;
void _elf_GetPrivateProfileStringA() {
load_dll_kernel32();
if (!_imp__GetPrivateProfileStringA) {
_imp__GetPrivateProfileStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileStringA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileStringA));
}

void _elf_GetPrivateProfileStringW() asm("GetPrivateProfileStringW");
void *_imp__GetPrivateProfileStringW = NULL;
void _elf_GetPrivateProfileStringW() {
load_dll_kernel32();
if (!_imp__GetPrivateProfileStringW) {
_imp__GetPrivateProfileStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileStringW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileStringW));
}

void _elf_GetPrivateProfileStructA() asm("GetPrivateProfileStructA");
void *_imp__GetPrivateProfileStructA = NULL;
void _elf_GetPrivateProfileStructA() {
load_dll_kernel32();
if (!_imp__GetPrivateProfileStructA) {
_imp__GetPrivateProfileStructA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileStructA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileStructA));
}

void _elf_GetPrivateProfileStructW() asm("GetPrivateProfileStructW");
void *_imp__GetPrivateProfileStructW = NULL;
void _elf_GetPrivateProfileStructW() {
load_dll_kernel32();
if (!_imp__GetPrivateProfileStructW) {
_imp__GetPrivateProfileStructW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileStructW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileStructW));
}

void _elf_GetProcessAffinityMask() asm("GetProcessAffinityMask");
void *_imp__GetProcessAffinityMask = NULL;
void _elf_GetProcessAffinityMask() {
load_dll_kernel32();
if (!_imp__GetProcessAffinityMask) {
_imp__GetProcessAffinityMask = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessAffinityMask");
}
asm("leave\njmp *%0" : : "r"(_imp__GetProcessAffinityMask));
}

void _elf_GetProcessHandleCount() asm("GetProcessHandleCount");
void *_imp__GetProcessHandleCount = NULL;
void _elf_GetProcessHandleCount() {
load_dll_kernel32();
if (!_imp__GetProcessHandleCount) {
_imp__GetProcessHandleCount = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessHandleCount");
}
asm("leave\njmp *%0" : : "r"(_imp__GetProcessHandleCount));
}

void _elf_GetProcessHeap() asm("GetProcessHeap");
void *_imp__GetProcessHeap = NULL;
void _elf_GetProcessHeap() {
load_dll_kernel32();
if (!_imp__GetProcessHeap) {
_imp__GetProcessHeap = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessHeap");
}
asm("leave\njmp *%0" : : "r"(_imp__GetProcessHeap));
}

void _elf_GetProcessHeaps() asm("GetProcessHeaps");
void *_imp__GetProcessHeaps = NULL;
void _elf_GetProcessHeaps() {
load_dll_kernel32();
if (!_imp__GetProcessHeaps) {
_imp__GetProcessHeaps = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessHeaps");
}
asm("leave\njmp *%0" : : "r"(_imp__GetProcessHeaps));
}

void _elf_GetProcessId() asm("GetProcessId");
void *_imp__GetProcessId = NULL;
void _elf_GetProcessId() {
load_dll_kernel32();
if (!_imp__GetProcessId) {
_imp__GetProcessId = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessId");
}
asm("leave\njmp *%0" : : "r"(_imp__GetProcessId));
}

void _elf_GetProcessIoCounters() asm("GetProcessIoCounters");
void *_imp__GetProcessIoCounters = NULL;
void _elf_GetProcessIoCounters() {
load_dll_kernel32();
if (!_imp__GetProcessIoCounters) {
_imp__GetProcessIoCounters = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessIoCounters");
}
asm("leave\njmp *%0" : : "r"(_imp__GetProcessIoCounters));
}

void _elf_GetProcessPriorityBoost() asm("GetProcessPriorityBoost");
void *_imp__GetProcessPriorityBoost = NULL;
void _elf_GetProcessPriorityBoost() {
load_dll_kernel32();
if (!_imp__GetProcessPriorityBoost) {
_imp__GetProcessPriorityBoost = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessPriorityBoost");
}
asm("leave\njmp *%0" : : "r"(_imp__GetProcessPriorityBoost));
}

void _elf_GetProcessShutdownParameters() asm("GetProcessShutdownParameters");
void *_imp__GetProcessShutdownParameters = NULL;
void _elf_GetProcessShutdownParameters() {
load_dll_kernel32();
if (!_imp__GetProcessShutdownParameters) {
_imp__GetProcessShutdownParameters = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessShutdownParameters");
}
asm("leave\njmp *%0" : : "r"(_imp__GetProcessShutdownParameters));
}

void _elf_GetProcessTimes() asm("GetProcessTimes");
void *_imp__GetProcessTimes = NULL;
void _elf_GetProcessTimes() {
load_dll_kernel32();
if (!_imp__GetProcessTimes) {
_imp__GetProcessTimes = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessTimes");
}
asm("leave\njmp *%0" : : "r"(_imp__GetProcessTimes));
}

void _elf_GetProcessVersion() asm("GetProcessVersion");
void *_imp__GetProcessVersion = NULL;
void _elf_GetProcessVersion() {
load_dll_kernel32();
if (!_imp__GetProcessVersion) {
_imp__GetProcessVersion = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessVersion");
}
asm("leave\njmp *%0" : : "r"(_imp__GetProcessVersion));
}

void _elf_GetProcessWorkingSetSize() asm("GetProcessWorkingSetSize");
void *_imp__GetProcessWorkingSetSize = NULL;
void _elf_GetProcessWorkingSetSize() {
load_dll_kernel32();
if (!_imp__GetProcessWorkingSetSize) {
_imp__GetProcessWorkingSetSize = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessWorkingSetSize");
}
asm("leave\njmp *%0" : : "r"(_imp__GetProcessWorkingSetSize));
}

void _elf_GetProfileIntA() asm("GetProfileIntA");
void *_imp__GetProfileIntA = NULL;
void _elf_GetProfileIntA() {
load_dll_kernel32();
if (!_imp__GetProfileIntA) {
_imp__GetProfileIntA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProfileIntA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetProfileIntA));
}

void _elf_GetProfileIntW() asm("GetProfileIntW");
void *_imp__GetProfileIntW = NULL;
void _elf_GetProfileIntW() {
load_dll_kernel32();
if (!_imp__GetProfileIntW) {
_imp__GetProfileIntW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProfileIntW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetProfileIntW));
}

void _elf_GetProfileSectionA() asm("GetProfileSectionA");
void *_imp__GetProfileSectionA = NULL;
void _elf_GetProfileSectionA() {
load_dll_kernel32();
if (!_imp__GetProfileSectionA) {
_imp__GetProfileSectionA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProfileSectionA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetProfileSectionA));
}

void _elf_GetProfileSectionW() asm("GetProfileSectionW");
void *_imp__GetProfileSectionW = NULL;
void _elf_GetProfileSectionW() {
load_dll_kernel32();
if (!_imp__GetProfileSectionW) {
_imp__GetProfileSectionW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProfileSectionW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetProfileSectionW));
}

void _elf_GetProfileStringA() asm("GetProfileStringA");
void *_imp__GetProfileStringA = NULL;
void _elf_GetProfileStringA() {
load_dll_kernel32();
if (!_imp__GetProfileStringA) {
_imp__GetProfileStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProfileStringA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetProfileStringA));
}

void _elf_GetProfileStringW() asm("GetProfileStringW");
void *_imp__GetProfileStringW = NULL;
void _elf_GetProfileStringW() {
load_dll_kernel32();
if (!_imp__GetProfileStringW) {
_imp__GetProfileStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProfileStringW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetProfileStringW));
}

void _elf_GetQueuedCompletionStatus() asm("GetQueuedCompletionStatus");
void *_imp__GetQueuedCompletionStatus = NULL;
void _elf_GetQueuedCompletionStatus() {
load_dll_kernel32();
if (!_imp__GetQueuedCompletionStatus) {
_imp__GetQueuedCompletionStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "GetQueuedCompletionStatus");
}
asm("leave\njmp *%0" : : "r"(_imp__GetQueuedCompletionStatus));
}

void _elf_GetShortPathNameA() asm("GetShortPathNameA");
void *_imp__GetShortPathNameA = NULL;
void _elf_GetShortPathNameA() {
load_dll_kernel32();
if (!_imp__GetShortPathNameA) {
_imp__GetShortPathNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetShortPathNameA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetShortPathNameA));
}

void _elf_GetShortPathNameW() asm("GetShortPathNameW");
void *_imp__GetShortPathNameW = NULL;
void _elf_GetShortPathNameW() {
load_dll_kernel32();
if (!_imp__GetShortPathNameW) {
_imp__GetShortPathNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetShortPathNameW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetShortPathNameW));
}

void _elf_GetStartupInfoA() asm("GetStartupInfoA");
void *_imp__GetStartupInfoA = NULL;
void _elf_GetStartupInfoA() {
load_dll_kernel32();
if (!_imp__GetStartupInfoA) {
_imp__GetStartupInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStartupInfoA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetStartupInfoA));
}

void _elf_GetStartupInfoW() asm("GetStartupInfoW");
void *_imp__GetStartupInfoW = NULL;
void _elf_GetStartupInfoW() {
load_dll_kernel32();
if (!_imp__GetStartupInfoW) {
_imp__GetStartupInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStartupInfoW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetStartupInfoW));
}

void _elf_GetStdHandle() asm("GetStdHandle");
void *_imp__GetStdHandle = NULL;
void _elf_GetStdHandle() {
load_dll_kernel32();
if (!_imp__GetStdHandle) {
_imp__GetStdHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStdHandle");
}
asm("leave\njmp *%0" : : "r"(_imp__GetStdHandle));
}

void _elf_GetStringTypeA() asm("GetStringTypeA");
void *_imp__GetStringTypeA = NULL;
void _elf_GetStringTypeA() {
load_dll_kernel32();
if (!_imp__GetStringTypeA) {
_imp__GetStringTypeA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStringTypeA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetStringTypeA));
}

void _elf_GetStringTypeExA() asm("GetStringTypeExA");
void *_imp__GetStringTypeExA = NULL;
void _elf_GetStringTypeExA() {
load_dll_kernel32();
if (!_imp__GetStringTypeExA) {
_imp__GetStringTypeExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStringTypeExA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetStringTypeExA));
}

void _elf_GetStringTypeExW() asm("GetStringTypeExW");
void *_imp__GetStringTypeExW = NULL;
void _elf_GetStringTypeExW() {
load_dll_kernel32();
if (!_imp__GetStringTypeExW) {
_imp__GetStringTypeExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStringTypeExW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetStringTypeExW));
}

void _elf_GetStringTypeW() asm("GetStringTypeW");
void *_imp__GetStringTypeW = NULL;
void _elf_GetStringTypeW() {
load_dll_kernel32();
if (!_imp__GetStringTypeW) {
_imp__GetStringTypeW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetStringTypeW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetStringTypeW));
}

void _elf_GetSystemDefaultLCID() asm("GetSystemDefaultLCID");
void *_imp__GetSystemDefaultLCID = NULL;
void _elf_GetSystemDefaultLCID() {
load_dll_kernel32();
if (!_imp__GetSystemDefaultLCID) {
_imp__GetSystemDefaultLCID = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemDefaultLCID");
}
asm("leave\njmp *%0" : : "r"(_imp__GetSystemDefaultLCID));
}

void _elf_GetSystemDefaultLangID() asm("GetSystemDefaultLangID");
void *_imp__GetSystemDefaultLangID = NULL;
void _elf_GetSystemDefaultLangID() {
load_dll_kernel32();
if (!_imp__GetSystemDefaultLangID) {
_imp__GetSystemDefaultLangID = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemDefaultLangID");
}
asm("leave\njmp *%0" : : "r"(_imp__GetSystemDefaultLangID));
}

void _elf_GetSystemDefaultUILanguage() asm("GetSystemDefaultUILanguage");
void *_imp__GetSystemDefaultUILanguage = NULL;
void _elf_GetSystemDefaultUILanguage() {
load_dll_kernel32();
if (!_imp__GetSystemDefaultUILanguage) {
_imp__GetSystemDefaultUILanguage = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemDefaultUILanguage");
}
asm("leave\njmp *%0" : : "r"(_imp__GetSystemDefaultUILanguage));
}

void _elf_GetSystemDirectoryA() asm("GetSystemDirectoryA");
void *_imp__GetSystemDirectoryA = NULL;
void _elf_GetSystemDirectoryA() {
load_dll_kernel32();
if (!_imp__GetSystemDirectoryA) {
_imp__GetSystemDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemDirectoryA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetSystemDirectoryA));
}

void _elf_GetSystemDirectoryW() asm("GetSystemDirectoryW");
void *_imp__GetSystemDirectoryW = NULL;
void _elf_GetSystemDirectoryW() {
load_dll_kernel32();
if (!_imp__GetSystemDirectoryW) {
_imp__GetSystemDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemDirectoryW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetSystemDirectoryW));
}

void _elf_GetSystemInfo() asm("GetSystemInfo");
void *_imp__GetSystemInfo = NULL;
void _elf_GetSystemInfo() {
load_dll_kernel32();
if (!_imp__GetSystemInfo) {
_imp__GetSystemInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemInfo");
}
asm("leave\njmp *%0" : : "r"(_imp__GetSystemInfo));
}

void _elf_GetSystemPowerStatus() asm("GetSystemPowerStatus");
void *_imp__GetSystemPowerStatus = NULL;
void _elf_GetSystemPowerStatus() {
load_dll_kernel32();
if (!_imp__GetSystemPowerStatus) {
_imp__GetSystemPowerStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemPowerStatus");
}
asm("leave\njmp *%0" : : "r"(_imp__GetSystemPowerStatus));
}

void _elf_GetSystemRegistryQuota() asm("GetSystemRegistryQuota");
void *_imp__GetSystemRegistryQuota = NULL;
void _elf_GetSystemRegistryQuota() {
load_dll_kernel32();
if (!_imp__GetSystemRegistryQuota) {
_imp__GetSystemRegistryQuota = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemRegistryQuota");
}
asm("leave\njmp *%0" : : "r"(_imp__GetSystemRegistryQuota));
}

void _elf_GetSystemTime() asm("GetSystemTime");
void *_imp__GetSystemTime = NULL;
void _elf_GetSystemTime() {
load_dll_kernel32();
if (!_imp__GetSystemTime) {
_imp__GetSystemTime = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemTime");
}
asm("leave\njmp *%0" : : "r"(_imp__GetSystemTime));
}

void _elf_GetSystemTimeAdjustment() asm("GetSystemTimeAdjustment");
void *_imp__GetSystemTimeAdjustment = NULL;
void _elf_GetSystemTimeAdjustment() {
load_dll_kernel32();
if (!_imp__GetSystemTimeAdjustment) {
_imp__GetSystemTimeAdjustment = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemTimeAdjustment");
}
asm("leave\njmp *%0" : : "r"(_imp__GetSystemTimeAdjustment));
}

void _elf_GetSystemTimeAsFileTime() asm("GetSystemTimeAsFileTime");
void *_imp__GetSystemTimeAsFileTime = NULL;
void _elf_GetSystemTimeAsFileTime() {
load_dll_kernel32();
if (!_imp__GetSystemTimeAsFileTime) {
_imp__GetSystemTimeAsFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemTimeAsFileTime");
}
asm("leave\njmp *%0" : : "r"(_imp__GetSystemTimeAsFileTime));
}

void _elf_GetSystemTimes() asm("GetSystemTimes");
void *_imp__GetSystemTimes = NULL;
void _elf_GetSystemTimes() {
load_dll_kernel32();
if (!_imp__GetSystemTimes) {
_imp__GetSystemTimes = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemTimes");
}
asm("leave\njmp *%0" : : "r"(_imp__GetSystemTimes));
}

void _elf_GetSystemWindowsDirectoryA() asm("GetSystemWindowsDirectoryA");
void *_imp__GetSystemWindowsDirectoryA = NULL;
void _elf_GetSystemWindowsDirectoryA() {
load_dll_kernel32();
if (!_imp__GetSystemWindowsDirectoryA) {
_imp__GetSystemWindowsDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemWindowsDirectoryA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetSystemWindowsDirectoryA));
}

void _elf_GetSystemWindowsDirectoryW() asm("GetSystemWindowsDirectoryW");
void *_imp__GetSystemWindowsDirectoryW = NULL;
void _elf_GetSystemWindowsDirectoryW() {
load_dll_kernel32();
if (!_imp__GetSystemWindowsDirectoryW) {
_imp__GetSystemWindowsDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemWindowsDirectoryW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetSystemWindowsDirectoryW));
}

void _elf_GetSystemWow64DirectoryA() asm("GetSystemWow64DirectoryA");
void *_imp__GetSystemWow64DirectoryA = NULL;
void _elf_GetSystemWow64DirectoryA() {
load_dll_kernel32();
if (!_imp__GetSystemWow64DirectoryA) {
_imp__GetSystemWow64DirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemWow64DirectoryA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetSystemWow64DirectoryA));
}

void _elf_GetSystemWow64DirectoryW() asm("GetSystemWow64DirectoryW");
void *_imp__GetSystemWow64DirectoryW = NULL;
void _elf_GetSystemWow64DirectoryW() {
load_dll_kernel32();
if (!_imp__GetSystemWow64DirectoryW) {
_imp__GetSystemWow64DirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemWow64DirectoryW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetSystemWow64DirectoryW));
}

void _elf_GetTapeParameters() asm("GetTapeParameters");
void *_imp__GetTapeParameters = NULL;
void _elf_GetTapeParameters() {
load_dll_kernel32();
if (!_imp__GetTapeParameters) {
_imp__GetTapeParameters = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTapeParameters");
}
asm("leave\njmp *%0" : : "r"(_imp__GetTapeParameters));
}

void _elf_GetTapePosition() asm("GetTapePosition");
void *_imp__GetTapePosition = NULL;
void _elf_GetTapePosition() {
load_dll_kernel32();
if (!_imp__GetTapePosition) {
_imp__GetTapePosition = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTapePosition");
}
asm("leave\njmp *%0" : : "r"(_imp__GetTapePosition));
}

void _elf_GetTapeStatus() asm("GetTapeStatus");
void *_imp__GetTapeStatus = NULL;
void _elf_GetTapeStatus() {
load_dll_kernel32();
if (!_imp__GetTapeStatus) {
_imp__GetTapeStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTapeStatus");
}
asm("leave\njmp *%0" : : "r"(_imp__GetTapeStatus));
}

void _elf_GetTempFileNameA() asm("GetTempFileNameA");
void *_imp__GetTempFileNameA = NULL;
void _elf_GetTempFileNameA() {
load_dll_kernel32();
if (!_imp__GetTempFileNameA) {
_imp__GetTempFileNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTempFileNameA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetTempFileNameA));
}

void _elf_GetTempFileNameW() asm("GetTempFileNameW");
void *_imp__GetTempFileNameW = NULL;
void _elf_GetTempFileNameW() {
load_dll_kernel32();
if (!_imp__GetTempFileNameW) {
_imp__GetTempFileNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTempFileNameW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetTempFileNameW));
}

void _elf_GetTempPathA() asm("GetTempPathA");
void *_imp__GetTempPathA = NULL;
void _elf_GetTempPathA() {
load_dll_kernel32();
if (!_imp__GetTempPathA) {
_imp__GetTempPathA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTempPathA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetTempPathA));
}

void _elf_GetTempPathW() asm("GetTempPathW");
void *_imp__GetTempPathW = NULL;
void _elf_GetTempPathW() {
load_dll_kernel32();
if (!_imp__GetTempPathW) {
_imp__GetTempPathW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTempPathW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetTempPathW));
}

void _elf_GetThreadContext() asm("GetThreadContext");
void *_imp__GetThreadContext = NULL;
void _elf_GetThreadContext() {
load_dll_kernel32();
if (!_imp__GetThreadContext) {
_imp__GetThreadContext = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadContext");
}
asm("leave\njmp *%0" : : "r"(_imp__GetThreadContext));
}

void _elf_GetThreadIOPendingFlag() asm("GetThreadIOPendingFlag");
void *_imp__GetThreadIOPendingFlag = NULL;
void _elf_GetThreadIOPendingFlag() {
load_dll_kernel32();
if (!_imp__GetThreadIOPendingFlag) {
_imp__GetThreadIOPendingFlag = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadIOPendingFlag");
}
asm("leave\njmp *%0" : : "r"(_imp__GetThreadIOPendingFlag));
}

void _elf_GetThreadLocale() asm("GetThreadLocale");
void *_imp__GetThreadLocale = NULL;
void _elf_GetThreadLocale() {
load_dll_kernel32();
if (!_imp__GetThreadLocale) {
_imp__GetThreadLocale = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadLocale");
}
asm("leave\njmp *%0" : : "r"(_imp__GetThreadLocale));
}

void _elf_GetThreadPriority() asm("GetThreadPriority");
void *_imp__GetThreadPriority = NULL;
void _elf_GetThreadPriority() {
load_dll_kernel32();
if (!_imp__GetThreadPriority) {
_imp__GetThreadPriority = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadPriority");
}
asm("leave\njmp *%0" : : "r"(_imp__GetThreadPriority));
}

void _elf_GetThreadPriorityBoost() asm("GetThreadPriorityBoost");
void *_imp__GetThreadPriorityBoost = NULL;
void _elf_GetThreadPriorityBoost() {
load_dll_kernel32();
if (!_imp__GetThreadPriorityBoost) {
_imp__GetThreadPriorityBoost = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadPriorityBoost");
}
asm("leave\njmp *%0" : : "r"(_imp__GetThreadPriorityBoost));
}

void _elf_GetThreadSelectorEntry() asm("GetThreadSelectorEntry");
void *_imp__GetThreadSelectorEntry = NULL;
void _elf_GetThreadSelectorEntry() {
load_dll_kernel32();
if (!_imp__GetThreadSelectorEntry) {
_imp__GetThreadSelectorEntry = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadSelectorEntry");
}
asm("leave\njmp *%0" : : "r"(_imp__GetThreadSelectorEntry));
}

void _elf_GetThreadTimes() asm("GetThreadTimes");
void *_imp__GetThreadTimes = NULL;
void _elf_GetThreadTimes() {
load_dll_kernel32();
if (!_imp__GetThreadTimes) {
_imp__GetThreadTimes = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadTimes");
}
asm("leave\njmp *%0" : : "r"(_imp__GetThreadTimes));
}

void _elf_GetTickCount() asm("GetTickCount");
void *_imp__GetTickCount = NULL;
void _elf_GetTickCount() {
load_dll_kernel32();
if (!_imp__GetTickCount) {
_imp__GetTickCount = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTickCount");
}
asm("leave\njmp *%0" : : "r"(_imp__GetTickCount));
}

void _elf_GetTimeFormatA() asm("GetTimeFormatA");
void *_imp__GetTimeFormatA = NULL;
void _elf_GetTimeFormatA() {
load_dll_kernel32();
if (!_imp__GetTimeFormatA) {
_imp__GetTimeFormatA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTimeFormatA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetTimeFormatA));
}

void _elf_GetTimeFormatW() asm("GetTimeFormatW");
void *_imp__GetTimeFormatW = NULL;
void _elf_GetTimeFormatW() {
load_dll_kernel32();
if (!_imp__GetTimeFormatW) {
_imp__GetTimeFormatW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTimeFormatW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetTimeFormatW));
}

void _elf_GetTimeZoneInformation() asm("GetTimeZoneInformation");
void *_imp__GetTimeZoneInformation = NULL;
void _elf_GetTimeZoneInformation() {
load_dll_kernel32();
if (!_imp__GetTimeZoneInformation) {
_imp__GetTimeZoneInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "GetTimeZoneInformation");
}
asm("leave\njmp *%0" : : "r"(_imp__GetTimeZoneInformation));
}

void _elf_GetUserDefaultLCID() asm("GetUserDefaultLCID");
void *_imp__GetUserDefaultLCID = NULL;
void _elf_GetUserDefaultLCID() {
load_dll_kernel32();
if (!_imp__GetUserDefaultLCID) {
_imp__GetUserDefaultLCID = (void *) _elf_GetProcAddress(_dll_kernel32, "GetUserDefaultLCID");
}
asm("leave\njmp *%0" : : "r"(_imp__GetUserDefaultLCID));
}

void _elf_GetUserDefaultLangID() asm("GetUserDefaultLangID");
void *_imp__GetUserDefaultLangID = NULL;
void _elf_GetUserDefaultLangID() {
load_dll_kernel32();
if (!_imp__GetUserDefaultLangID) {
_imp__GetUserDefaultLangID = (void *) _elf_GetProcAddress(_dll_kernel32, "GetUserDefaultLangID");
}
asm("leave\njmp *%0" : : "r"(_imp__GetUserDefaultLangID));
}

void _elf_GetUserDefaultUILanguage() asm("GetUserDefaultUILanguage");
void *_imp__GetUserDefaultUILanguage = NULL;
void _elf_GetUserDefaultUILanguage() {
load_dll_kernel32();
if (!_imp__GetUserDefaultUILanguage) {
_imp__GetUserDefaultUILanguage = (void *) _elf_GetProcAddress(_dll_kernel32, "GetUserDefaultUILanguage");
}
asm("leave\njmp *%0" : : "r"(_imp__GetUserDefaultUILanguage));
}

void _elf_GetUserGeoID() asm("GetUserGeoID");
void *_imp__GetUserGeoID = NULL;
void _elf_GetUserGeoID() {
load_dll_kernel32();
if (!_imp__GetUserGeoID) {
_imp__GetUserGeoID = (void *) _elf_GetProcAddress(_dll_kernel32, "GetUserGeoID");
}
asm("leave\njmp *%0" : : "r"(_imp__GetUserGeoID));
}

void _elf_GetVDMCurrentDirectories() asm("GetVDMCurrentDirectories");
void *_imp__GetVDMCurrentDirectories = NULL;
void _elf_GetVDMCurrentDirectories() {
load_dll_kernel32();
if (!_imp__GetVDMCurrentDirectories) {
_imp__GetVDMCurrentDirectories = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVDMCurrentDirectories");
}
asm("leave\njmp *%0" : : "r"(_imp__GetVDMCurrentDirectories));
}

void _elf_GetVersion() asm("GetVersion");
void *_imp__GetVersion = NULL;
void _elf_GetVersion() {
load_dll_kernel32();
if (!_imp__GetVersion) {
_imp__GetVersion = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVersion");
}
asm("leave\njmp *%0" : : "r"(_imp__GetVersion));
}

void _elf_GetVersionExA() asm("GetVersionExA");
void *_imp__GetVersionExA = NULL;
void _elf_GetVersionExA() {
load_dll_kernel32();
if (!_imp__GetVersionExA) {
_imp__GetVersionExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVersionExA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetVersionExA));
}

void _elf_GetVersionExW() asm("GetVersionExW");
void *_imp__GetVersionExW = NULL;
void _elf_GetVersionExW() {
load_dll_kernel32();
if (!_imp__GetVersionExW) {
_imp__GetVersionExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVersionExW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetVersionExW));
}

void _elf_GetVolumeInformationA() asm("GetVolumeInformationA");
void *_imp__GetVolumeInformationA = NULL;
void _elf_GetVolumeInformationA() {
load_dll_kernel32();
if (!_imp__GetVolumeInformationA) {
_imp__GetVolumeInformationA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumeInformationA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetVolumeInformationA));
}

void _elf_GetVolumeInformationW() asm("GetVolumeInformationW");
void *_imp__GetVolumeInformationW = NULL;
void _elf_GetVolumeInformationW() {
load_dll_kernel32();
if (!_imp__GetVolumeInformationW) {
_imp__GetVolumeInformationW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumeInformationW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetVolumeInformationW));
}

void _elf_GetVolumeNameForVolumeMountPointA() asm("GetVolumeNameForVolumeMountPointA");
void *_imp__GetVolumeNameForVolumeMountPointA = NULL;
void _elf_GetVolumeNameForVolumeMountPointA() {
load_dll_kernel32();
if (!_imp__GetVolumeNameForVolumeMountPointA) {
_imp__GetVolumeNameForVolumeMountPointA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumeNameForVolumeMountPointA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetVolumeNameForVolumeMountPointA));
}

void _elf_GetVolumeNameForVolumeMountPointW() asm("GetVolumeNameForVolumeMountPointW");
void *_imp__GetVolumeNameForVolumeMountPointW = NULL;
void _elf_GetVolumeNameForVolumeMountPointW() {
load_dll_kernel32();
if (!_imp__GetVolumeNameForVolumeMountPointW) {
_imp__GetVolumeNameForVolumeMountPointW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumeNameForVolumeMountPointW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetVolumeNameForVolumeMountPointW));
}

void _elf_GetVolumePathNameA() asm("GetVolumePathNameA");
void *_imp__GetVolumePathNameA = NULL;
void _elf_GetVolumePathNameA() {
load_dll_kernel32();
if (!_imp__GetVolumePathNameA) {
_imp__GetVolumePathNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumePathNameA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetVolumePathNameA));
}

void _elf_GetVolumePathNameW() asm("GetVolumePathNameW");
void *_imp__GetVolumePathNameW = NULL;
void _elf_GetVolumePathNameW() {
load_dll_kernel32();
if (!_imp__GetVolumePathNameW) {
_imp__GetVolumePathNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumePathNameW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetVolumePathNameW));
}

void _elf_GetVolumePathNamesForVolumeNameA() asm("GetVolumePathNamesForVolumeNameA");
void *_imp__GetVolumePathNamesForVolumeNameA = NULL;
void _elf_GetVolumePathNamesForVolumeNameA() {
load_dll_kernel32();
if (!_imp__GetVolumePathNamesForVolumeNameA) {
_imp__GetVolumePathNamesForVolumeNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumePathNamesForVolumeNameA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetVolumePathNamesForVolumeNameA));
}

void _elf_GetVolumePathNamesForVolumeNameW() asm("GetVolumePathNamesForVolumeNameW");
void *_imp__GetVolumePathNamesForVolumeNameW = NULL;
void _elf_GetVolumePathNamesForVolumeNameW() {
load_dll_kernel32();
if (!_imp__GetVolumePathNamesForVolumeNameW) {
_imp__GetVolumePathNamesForVolumeNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumePathNamesForVolumeNameW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetVolumePathNamesForVolumeNameW));
}

void _elf_GetWindowsDirectoryA() asm("GetWindowsDirectoryA");
void *_imp__GetWindowsDirectoryA = NULL;
void _elf_GetWindowsDirectoryA() {
load_dll_kernel32();
if (!_imp__GetWindowsDirectoryA) {
_imp__GetWindowsDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetWindowsDirectoryA");
}
asm("leave\njmp *%0" : : "r"(_imp__GetWindowsDirectoryA));
}

void _elf_GetWindowsDirectoryW() asm("GetWindowsDirectoryW");
void *_imp__GetWindowsDirectoryW = NULL;
void _elf_GetWindowsDirectoryW() {
load_dll_kernel32();
if (!_imp__GetWindowsDirectoryW) {
_imp__GetWindowsDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetWindowsDirectoryW");
}
asm("leave\njmp *%0" : : "r"(_imp__GetWindowsDirectoryW));
}

void _elf_GetWriteWatch() asm("GetWriteWatch");
void *_imp__GetWriteWatch = NULL;
void _elf_GetWriteWatch() {
load_dll_kernel32();
if (!_imp__GetWriteWatch) {
_imp__GetWriteWatch = (void *) _elf_GetProcAddress(_dll_kernel32, "GetWriteWatch");
}
asm("leave\njmp *%0" : : "r"(_imp__GetWriteWatch));
}

void _elf_GlobalAddAtomA() asm("GlobalAddAtomA");
void *_imp__GlobalAddAtomA = NULL;
void _elf_GlobalAddAtomA() {
load_dll_kernel32();
if (!_imp__GlobalAddAtomA) {
_imp__GlobalAddAtomA = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalAddAtomA");
}
asm("leave\njmp *%0" : : "r"(_imp__GlobalAddAtomA));
}

void _elf_GlobalAddAtomW() asm("GlobalAddAtomW");
void *_imp__GlobalAddAtomW = NULL;
void _elf_GlobalAddAtomW() {
load_dll_kernel32();
if (!_imp__GlobalAddAtomW) {
_imp__GlobalAddAtomW = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalAddAtomW");
}
asm("leave\njmp *%0" : : "r"(_imp__GlobalAddAtomW));
}

void _elf_GlobalAlloc() asm("GlobalAlloc");
void *_imp__GlobalAlloc = NULL;
void _elf_GlobalAlloc() {
load_dll_kernel32();
if (!_imp__GlobalAlloc) {
_imp__GlobalAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalAlloc");
}
asm("leave\njmp *%0" : : "r"(_imp__GlobalAlloc));
}

void _elf_GlobalCompact() asm("GlobalCompact");
void *_imp__GlobalCompact = NULL;
void _elf_GlobalCompact() {
load_dll_kernel32();
if (!_imp__GlobalCompact) {
_imp__GlobalCompact = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalCompact");
}
asm("leave\njmp *%0" : : "r"(_imp__GlobalCompact));
}

void _elf_GlobalDeleteAtom() asm("GlobalDeleteAtom");
void *_imp__GlobalDeleteAtom = NULL;
void _elf_GlobalDeleteAtom() {
load_dll_kernel32();
if (!_imp__GlobalDeleteAtom) {
_imp__GlobalDeleteAtom = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalDeleteAtom");
}
asm("leave\njmp *%0" : : "r"(_imp__GlobalDeleteAtom));
}

void _elf_GlobalFindAtomA() asm("GlobalFindAtomA");
void *_imp__GlobalFindAtomA = NULL;
void _elf_GlobalFindAtomA() {
load_dll_kernel32();
if (!_imp__GlobalFindAtomA) {
_imp__GlobalFindAtomA = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalFindAtomA");
}
asm("leave\njmp *%0" : : "r"(_imp__GlobalFindAtomA));
}

void _elf_GlobalFindAtomW() asm("GlobalFindAtomW");
void *_imp__GlobalFindAtomW = NULL;
void _elf_GlobalFindAtomW() {
load_dll_kernel32();
if (!_imp__GlobalFindAtomW) {
_imp__GlobalFindAtomW = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalFindAtomW");
}
asm("leave\njmp *%0" : : "r"(_imp__GlobalFindAtomW));
}

void _elf_GlobalFix() asm("GlobalFix");
void *_imp__GlobalFix = NULL;
void _elf_GlobalFix() {
load_dll_kernel32();
if (!_imp__GlobalFix) {
_imp__GlobalFix = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalFix");
}
asm("leave\njmp *%0" : : "r"(_imp__GlobalFix));
}

void _elf_GlobalFlags() asm("GlobalFlags");
void *_imp__GlobalFlags = NULL;
void _elf_GlobalFlags() {
load_dll_kernel32();
if (!_imp__GlobalFlags) {
_imp__GlobalFlags = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalFlags");
}
asm("leave\njmp *%0" : : "r"(_imp__GlobalFlags));
}

void _elf_GlobalFree() asm("GlobalFree");
void *_imp__GlobalFree = NULL;
void _elf_GlobalFree() {
load_dll_kernel32();
if (!_imp__GlobalFree) {
_imp__GlobalFree = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalFree");
}
asm("leave\njmp *%0" : : "r"(_imp__GlobalFree));
}

void _elf_GlobalGetAtomNameA() asm("GlobalGetAtomNameA");
void *_imp__GlobalGetAtomNameA = NULL;
void _elf_GlobalGetAtomNameA() {
load_dll_kernel32();
if (!_imp__GlobalGetAtomNameA) {
_imp__GlobalGetAtomNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalGetAtomNameA");
}
asm("leave\njmp *%0" : : "r"(_imp__GlobalGetAtomNameA));
}

void _elf_GlobalGetAtomNameW() asm("GlobalGetAtomNameW");
void *_imp__GlobalGetAtomNameW = NULL;
void _elf_GlobalGetAtomNameW() {
load_dll_kernel32();
if (!_imp__GlobalGetAtomNameW) {
_imp__GlobalGetAtomNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalGetAtomNameW");
}
asm("leave\njmp *%0" : : "r"(_imp__GlobalGetAtomNameW));
}

void _elf_GlobalHandle() asm("GlobalHandle");
void *_imp__GlobalHandle = NULL;
void _elf_GlobalHandle() {
load_dll_kernel32();
if (!_imp__GlobalHandle) {
_imp__GlobalHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalHandle");
}
asm("leave\njmp *%0" : : "r"(_imp__GlobalHandle));
}

void _elf_GlobalLock() asm("GlobalLock");
void *_imp__GlobalLock = NULL;
void _elf_GlobalLock() {
load_dll_kernel32();
if (!_imp__GlobalLock) {
_imp__GlobalLock = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalLock");
}
asm("leave\njmp *%0" : : "r"(_imp__GlobalLock));
}

void _elf_GlobalMemoryStatus() asm("GlobalMemoryStatus");
void *_imp__GlobalMemoryStatus = NULL;
void _elf_GlobalMemoryStatus() {
load_dll_kernel32();
if (!_imp__GlobalMemoryStatus) {
_imp__GlobalMemoryStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalMemoryStatus");
}
asm("leave\njmp *%0" : : "r"(_imp__GlobalMemoryStatus));
}

void _elf_GlobalMemoryStatusEx() asm("GlobalMemoryStatusEx");
void *_imp__GlobalMemoryStatusEx = NULL;
void _elf_GlobalMemoryStatusEx() {
load_dll_kernel32();
if (!_imp__GlobalMemoryStatusEx) {
_imp__GlobalMemoryStatusEx = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalMemoryStatusEx");
}
asm("leave\njmp *%0" : : "r"(_imp__GlobalMemoryStatusEx));
}

void _elf_GlobalReAlloc() asm("GlobalReAlloc");
void *_imp__GlobalReAlloc = NULL;
void _elf_GlobalReAlloc() {
load_dll_kernel32();
if (!_imp__GlobalReAlloc) {
_imp__GlobalReAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalReAlloc");
}
asm("leave\njmp *%0" : : "r"(_imp__GlobalReAlloc));
}

void _elf_GlobalSize() asm("GlobalSize");
void *_imp__GlobalSize = NULL;
void _elf_GlobalSize() {
load_dll_kernel32();
if (!_imp__GlobalSize) {
_imp__GlobalSize = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalSize");
}
asm("leave\njmp *%0" : : "r"(_imp__GlobalSize));
}

void _elf_GlobalUnWire() asm("GlobalUnWire");
void *_imp__GlobalUnWire = NULL;
void _elf_GlobalUnWire() {
load_dll_kernel32();
if (!_imp__GlobalUnWire) {
_imp__GlobalUnWire = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalUnWire");
}
asm("leave\njmp *%0" : : "r"(_imp__GlobalUnWire));
}

void _elf_GlobalUnfix() asm("GlobalUnfix");
void *_imp__GlobalUnfix = NULL;
void _elf_GlobalUnfix() {
load_dll_kernel32();
if (!_imp__GlobalUnfix) {
_imp__GlobalUnfix = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalUnfix");
}
asm("leave\njmp *%0" : : "r"(_imp__GlobalUnfix));
}

void _elf_GlobalUnlock() asm("GlobalUnlock");
void *_imp__GlobalUnlock = NULL;
void _elf_GlobalUnlock() {
load_dll_kernel32();
if (!_imp__GlobalUnlock) {
_imp__GlobalUnlock = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalUnlock");
}
asm("leave\njmp *%0" : : "r"(_imp__GlobalUnlock));
}

void _elf_GlobalWire() asm("GlobalWire");
void *_imp__GlobalWire = NULL;
void _elf_GlobalWire() {
load_dll_kernel32();
if (!_imp__GlobalWire) {
_imp__GlobalWire = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalWire");
}
asm("leave\njmp *%0" : : "r"(_imp__GlobalWire));
}

void _elf_Heap32First() asm("Heap32First");
void *_imp__Heap32First = NULL;
void _elf_Heap32First() {
load_dll_kernel32();
if (!_imp__Heap32First) {
_imp__Heap32First = (void *) _elf_GetProcAddress(_dll_kernel32, "Heap32First");
}
asm("leave\njmp *%0" : : "r"(_imp__Heap32First));
}

void _elf_Heap32ListFirst() asm("Heap32ListFirst");
void *_imp__Heap32ListFirst = NULL;
void _elf_Heap32ListFirst() {
load_dll_kernel32();
if (!_imp__Heap32ListFirst) {
_imp__Heap32ListFirst = (void *) _elf_GetProcAddress(_dll_kernel32, "Heap32ListFirst");
}
asm("leave\njmp *%0" : : "r"(_imp__Heap32ListFirst));
}

void _elf_Heap32ListNext() asm("Heap32ListNext");
void *_imp__Heap32ListNext = NULL;
void _elf_Heap32ListNext() {
load_dll_kernel32();
if (!_imp__Heap32ListNext) {
_imp__Heap32ListNext = (void *) _elf_GetProcAddress(_dll_kernel32, "Heap32ListNext");
}
asm("leave\njmp *%0" : : "r"(_imp__Heap32ListNext));
}

void _elf_Heap32Next() asm("Heap32Next");
void *_imp__Heap32Next = NULL;
void _elf_Heap32Next() {
load_dll_kernel32();
if (!_imp__Heap32Next) {
_imp__Heap32Next = (void *) _elf_GetProcAddress(_dll_kernel32, "Heap32Next");
}
asm("leave\njmp *%0" : : "r"(_imp__Heap32Next));
}

void _elf_HeapAlloc() asm("HeapAlloc");
void *_imp__HeapAlloc = NULL;
void _elf_HeapAlloc() {
load_dll_kernel32();
if (!_imp__HeapAlloc) {
_imp__HeapAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapAlloc");
}
asm("leave\njmp *%0" : : "r"(_imp__HeapAlloc));
}

void _elf_HeapCompact() asm("HeapCompact");
void *_imp__HeapCompact = NULL;
void _elf_HeapCompact() {
load_dll_kernel32();
if (!_imp__HeapCompact) {
_imp__HeapCompact = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapCompact");
}
asm("leave\njmp *%0" : : "r"(_imp__HeapCompact));
}

void _elf_HeapCreate() asm("HeapCreate");
void *_imp__HeapCreate = NULL;
void _elf_HeapCreate() {
load_dll_kernel32();
if (!_imp__HeapCreate) {
_imp__HeapCreate = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapCreate");
}
asm("leave\njmp *%0" : : "r"(_imp__HeapCreate));
}

void _elf_HeapCreateTagsW() asm("HeapCreateTagsW");
void *_imp__HeapCreateTagsW = NULL;
void _elf_HeapCreateTagsW() {
load_dll_kernel32();
if (!_imp__HeapCreateTagsW) {
_imp__HeapCreateTagsW = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapCreateTagsW");
}
asm("leave\njmp *%0" : : "r"(_imp__HeapCreateTagsW));
}

void _elf_HeapDestroy() asm("HeapDestroy");
void *_imp__HeapDestroy = NULL;
void _elf_HeapDestroy() {
load_dll_kernel32();
if (!_imp__HeapDestroy) {
_imp__HeapDestroy = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapDestroy");
}
asm("leave\njmp *%0" : : "r"(_imp__HeapDestroy));
}

void _elf_HeapExtend() asm("HeapExtend");
void *_imp__HeapExtend = NULL;
void _elf_HeapExtend() {
load_dll_kernel32();
if (!_imp__HeapExtend) {
_imp__HeapExtend = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapExtend");
}
asm("leave\njmp *%0" : : "r"(_imp__HeapExtend));
}

void _elf_HeapFree() asm("HeapFree");
void *_imp__HeapFree = NULL;
void _elf_HeapFree() {
load_dll_kernel32();
if (!_imp__HeapFree) {
_imp__HeapFree = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapFree");
}
asm("leave\njmp *%0" : : "r"(_imp__HeapFree));
}

void _elf_HeapLock() asm("HeapLock");
void *_imp__HeapLock = NULL;
void _elf_HeapLock() {
load_dll_kernel32();
if (!_imp__HeapLock) {
_imp__HeapLock = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapLock");
}
asm("leave\njmp *%0" : : "r"(_imp__HeapLock));
}

void _elf_HeapQueryInformation() asm("HeapQueryInformation");
void *_imp__HeapQueryInformation = NULL;
void _elf_HeapQueryInformation() {
load_dll_kernel32();
if (!_imp__HeapQueryInformation) {
_imp__HeapQueryInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapQueryInformation");
}
asm("leave\njmp *%0" : : "r"(_imp__HeapQueryInformation));
}

void _elf_HeapQueryTagW() asm("HeapQueryTagW");
void *_imp__HeapQueryTagW = NULL;
void _elf_HeapQueryTagW() {
load_dll_kernel32();
if (!_imp__HeapQueryTagW) {
_imp__HeapQueryTagW = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapQueryTagW");
}
asm("leave\njmp *%0" : : "r"(_imp__HeapQueryTagW));
}

void _elf_HeapReAlloc() asm("HeapReAlloc");
void *_imp__HeapReAlloc = NULL;
void _elf_HeapReAlloc() {
load_dll_kernel32();
if (!_imp__HeapReAlloc) {
_imp__HeapReAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapReAlloc");
}
asm("leave\njmp *%0" : : "r"(_imp__HeapReAlloc));
}

void _elf_HeapSetInformation() asm("HeapSetInformation");
void *_imp__HeapSetInformation = NULL;
void _elf_HeapSetInformation() {
load_dll_kernel32();
if (!_imp__HeapSetInformation) {
_imp__HeapSetInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapSetInformation");
}
asm("leave\njmp *%0" : : "r"(_imp__HeapSetInformation));
}

void _elf_HeapSize() asm("HeapSize");
void *_imp__HeapSize = NULL;
void _elf_HeapSize() {
load_dll_kernel32();
if (!_imp__HeapSize) {
_imp__HeapSize = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapSize");
}
asm("leave\njmp *%0" : : "r"(_imp__HeapSize));
}

void _elf_HeapSummary() asm("HeapSummary");
void *_imp__HeapSummary = NULL;
void _elf_HeapSummary() {
load_dll_kernel32();
if (!_imp__HeapSummary) {
_imp__HeapSummary = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapSummary");
}
asm("leave\njmp *%0" : : "r"(_imp__HeapSummary));
}

void _elf_HeapUnlock() asm("HeapUnlock");
void *_imp__HeapUnlock = NULL;
void _elf_HeapUnlock() {
load_dll_kernel32();
if (!_imp__HeapUnlock) {
_imp__HeapUnlock = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapUnlock");
}
asm("leave\njmp *%0" : : "r"(_imp__HeapUnlock));
}

void _elf_HeapUsage() asm("HeapUsage");
void *_imp__HeapUsage = NULL;
void _elf_HeapUsage() {
load_dll_kernel32();
if (!_imp__HeapUsage) {
_imp__HeapUsage = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapUsage");
}
asm("leave\njmp *%0" : : "r"(_imp__HeapUsage));
}

void _elf_HeapValidate() asm("HeapValidate");
void *_imp__HeapValidate = NULL;
void _elf_HeapValidate() {
load_dll_kernel32();
if (!_imp__HeapValidate) {
_imp__HeapValidate = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapValidate");
}
asm("leave\njmp *%0" : : "r"(_imp__HeapValidate));
}

void _elf_HeapWalk() asm("HeapWalk");
void *_imp__HeapWalk = NULL;
void _elf_HeapWalk() {
load_dll_kernel32();
if (!_imp__HeapWalk) {
_imp__HeapWalk = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapWalk");
}
asm("leave\njmp *%0" : : "r"(_imp__HeapWalk));
}

void _elf_InitAtomTable() asm("InitAtomTable");
void *_imp__InitAtomTable = NULL;
void _elf_InitAtomTable() {
load_dll_kernel32();
if (!_imp__InitAtomTable) {
_imp__InitAtomTable = (void *) _elf_GetProcAddress(_dll_kernel32, "InitAtomTable");
}
asm("leave\njmp *%0" : : "r"(_imp__InitAtomTable));
}

void _elf_InitializeCriticalSection() asm("InitializeCriticalSection");
void *_imp__InitializeCriticalSection = NULL;
void _elf_InitializeCriticalSection() {
load_dll_kernel32();
if (!_imp__InitializeCriticalSection) {
_imp__InitializeCriticalSection = (void *) _elf_GetProcAddress(_dll_kernel32, "InitializeCriticalSection");
}
asm("leave\njmp *%0" : : "r"(_imp__InitializeCriticalSection));
}

void _elf_InitializeCriticalSectionAndSpinCount() asm("InitializeCriticalSectionAndSpinCount");
void *_imp__InitializeCriticalSectionAndSpinCount = NULL;
void _elf_InitializeCriticalSectionAndSpinCount() {
load_dll_kernel32();
if (!_imp__InitializeCriticalSectionAndSpinCount) {
_imp__InitializeCriticalSectionAndSpinCount = (void *) _elf_GetProcAddress(_dll_kernel32, "InitializeCriticalSectionAndSpinCount");
}
asm("leave\njmp *%0" : : "r"(_imp__InitializeCriticalSectionAndSpinCount));
}

void _elf_InitializeSListHead() asm("InitializeSListHead");
void *_imp__InitializeSListHead = NULL;
void _elf_InitializeSListHead() {
load_dll_kernel32();
if (!_imp__InitializeSListHead) {
_imp__InitializeSListHead = (void *) _elf_GetProcAddress(_dll_kernel32, "InitializeSListHead");
}
asm("leave\njmp *%0" : : "r"(_imp__InitializeSListHead));
}

void _elf_InterlockedCompareExchange() asm("InterlockedCompareExchange");
void *_imp__InterlockedCompareExchange = NULL;
void _elf_InterlockedCompareExchange() {
load_dll_kernel32();
if (!_imp__InterlockedCompareExchange) {
_imp__InterlockedCompareExchange = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedCompareExchange");
}
asm("leave\njmp *%0" : : "r"(_imp__InterlockedCompareExchange));
}

void _elf_InterlockedDecrement() asm("InterlockedDecrement");
void *_imp__InterlockedDecrement = NULL;
void _elf_InterlockedDecrement() {
load_dll_kernel32();
if (!_imp__InterlockedDecrement) {
_imp__InterlockedDecrement = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedDecrement");
}
asm("leave\njmp *%0" : : "r"(_imp__InterlockedDecrement));
}

void _elf_InterlockedExchange() asm("InterlockedExchange");
void *_imp__InterlockedExchange = NULL;
void _elf_InterlockedExchange() {
load_dll_kernel32();
if (!_imp__InterlockedExchange) {
_imp__InterlockedExchange = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedExchange");
}
asm("leave\njmp *%0" : : "r"(_imp__InterlockedExchange));
}

void _elf_InterlockedExchangeAdd() asm("InterlockedExchangeAdd");
void *_imp__InterlockedExchangeAdd = NULL;
void _elf_InterlockedExchangeAdd() {
load_dll_kernel32();
if (!_imp__InterlockedExchangeAdd) {
_imp__InterlockedExchangeAdd = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedExchangeAdd");
}
asm("leave\njmp *%0" : : "r"(_imp__InterlockedExchangeAdd));
}

void _elf_InterlockedFlushSList() asm("InterlockedFlushSList");
void *_imp__InterlockedFlushSList = NULL;
void _elf_InterlockedFlushSList() {
load_dll_kernel32();
if (!_imp__InterlockedFlushSList) {
_imp__InterlockedFlushSList = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedFlushSList");
}
asm("leave\njmp *%0" : : "r"(_imp__InterlockedFlushSList));
}

void _elf_InterlockedIncrement() asm("InterlockedIncrement");
void *_imp__InterlockedIncrement = NULL;
void _elf_InterlockedIncrement() {
load_dll_kernel32();
if (!_imp__InterlockedIncrement) {
_imp__InterlockedIncrement = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedIncrement");
}
asm("leave\njmp *%0" : : "r"(_imp__InterlockedIncrement));
}

void _elf_InterlockedPopEntrySList() asm("InterlockedPopEntrySList");
void *_imp__InterlockedPopEntrySList = NULL;
void _elf_InterlockedPopEntrySList() {
load_dll_kernel32();
if (!_imp__InterlockedPopEntrySList) {
_imp__InterlockedPopEntrySList = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedPopEntrySList");
}
asm("leave\njmp *%0" : : "r"(_imp__InterlockedPopEntrySList));
}

void _elf_InterlockedPushEntrySList() asm("InterlockedPushEntrySList");
void *_imp__InterlockedPushEntrySList = NULL;
void _elf_InterlockedPushEntrySList() {
load_dll_kernel32();
if (!_imp__InterlockedPushEntrySList) {
_imp__InterlockedPushEntrySList = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedPushEntrySList");
}
asm("leave\njmp *%0" : : "r"(_imp__InterlockedPushEntrySList));
}

void _elf_InvalidateConsoleDIBits() asm("InvalidateConsoleDIBits");
void *_imp__InvalidateConsoleDIBits = NULL;
void _elf_InvalidateConsoleDIBits() {
load_dll_kernel32();
if (!_imp__InvalidateConsoleDIBits) {
_imp__InvalidateConsoleDIBits = (void *) _elf_GetProcAddress(_dll_kernel32, "InvalidateConsoleDIBits");
}
asm("leave\njmp *%0" : : "r"(_imp__InvalidateConsoleDIBits));
}

void _elf_IsBadCodePtr() asm("IsBadCodePtr");
void *_imp__IsBadCodePtr = NULL;
void _elf_IsBadCodePtr() {
load_dll_kernel32();
if (!_imp__IsBadCodePtr) {
_imp__IsBadCodePtr = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadCodePtr");
}
asm("leave\njmp *%0" : : "r"(_imp__IsBadCodePtr));
}

void _elf_IsBadHugeReadPtr() asm("IsBadHugeReadPtr");
void *_imp__IsBadHugeReadPtr = NULL;
void _elf_IsBadHugeReadPtr() {
load_dll_kernel32();
if (!_imp__IsBadHugeReadPtr) {
_imp__IsBadHugeReadPtr = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadHugeReadPtr");
}
asm("leave\njmp *%0" : : "r"(_imp__IsBadHugeReadPtr));
}

void _elf_IsBadHugeWritePtr() asm("IsBadHugeWritePtr");
void *_imp__IsBadHugeWritePtr = NULL;
void _elf_IsBadHugeWritePtr() {
load_dll_kernel32();
if (!_imp__IsBadHugeWritePtr) {
_imp__IsBadHugeWritePtr = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadHugeWritePtr");
}
asm("leave\njmp *%0" : : "r"(_imp__IsBadHugeWritePtr));
}

void _elf_IsBadReadPtr() asm("IsBadReadPtr");
void *_imp__IsBadReadPtr = NULL;
void _elf_IsBadReadPtr() {
load_dll_kernel32();
if (!_imp__IsBadReadPtr) {
_imp__IsBadReadPtr = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadReadPtr");
}
asm("leave\njmp *%0" : : "r"(_imp__IsBadReadPtr));
}

void _elf_IsBadStringPtrA() asm("IsBadStringPtrA");
void *_imp__IsBadStringPtrA = NULL;
void _elf_IsBadStringPtrA() {
load_dll_kernel32();
if (!_imp__IsBadStringPtrA) {
_imp__IsBadStringPtrA = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadStringPtrA");
}
asm("leave\njmp *%0" : : "r"(_imp__IsBadStringPtrA));
}

void _elf_IsBadStringPtrW() asm("IsBadStringPtrW");
void *_imp__IsBadStringPtrW = NULL;
void _elf_IsBadStringPtrW() {
load_dll_kernel32();
if (!_imp__IsBadStringPtrW) {
_imp__IsBadStringPtrW = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadStringPtrW");
}
asm("leave\njmp *%0" : : "r"(_imp__IsBadStringPtrW));
}

void _elf_IsBadWritePtr() asm("IsBadWritePtr");
void *_imp__IsBadWritePtr = NULL;
void _elf_IsBadWritePtr() {
load_dll_kernel32();
if (!_imp__IsBadWritePtr) {
_imp__IsBadWritePtr = (void *) _elf_GetProcAddress(_dll_kernel32, "IsBadWritePtr");
}
asm("leave\njmp *%0" : : "r"(_imp__IsBadWritePtr));
}

void _elf_IsDBCSLeadByte() asm("IsDBCSLeadByte");
void *_imp__IsDBCSLeadByte = NULL;
void _elf_IsDBCSLeadByte() {
load_dll_kernel32();
if (!_imp__IsDBCSLeadByte) {
_imp__IsDBCSLeadByte = (void *) _elf_GetProcAddress(_dll_kernel32, "IsDBCSLeadByte");
}
asm("leave\njmp *%0" : : "r"(_imp__IsDBCSLeadByte));
}

void _elf_IsDBCSLeadByteEx() asm("IsDBCSLeadByteEx");
void *_imp__IsDBCSLeadByteEx = NULL;
void _elf_IsDBCSLeadByteEx() {
load_dll_kernel32();
if (!_imp__IsDBCSLeadByteEx) {
_imp__IsDBCSLeadByteEx = (void *) _elf_GetProcAddress(_dll_kernel32, "IsDBCSLeadByteEx");
}
asm("leave\njmp *%0" : : "r"(_imp__IsDBCSLeadByteEx));
}

void _elf_IsDebuggerPresent() asm("IsDebuggerPresent");
void *_imp__IsDebuggerPresent = NULL;
void _elf_IsDebuggerPresent() {
load_dll_kernel32();
if (!_imp__IsDebuggerPresent) {
_imp__IsDebuggerPresent = (void *) _elf_GetProcAddress(_dll_kernel32, "IsDebuggerPresent");
}
asm("leave\njmp *%0" : : "r"(_imp__IsDebuggerPresent));
}

void _elf_IsProcessInJob() asm("IsProcessInJob");
void *_imp__IsProcessInJob = NULL;
void _elf_IsProcessInJob() {
load_dll_kernel32();
if (!_imp__IsProcessInJob) {
_imp__IsProcessInJob = (void *) _elf_GetProcAddress(_dll_kernel32, "IsProcessInJob");
}
asm("leave\njmp *%0" : : "r"(_imp__IsProcessInJob));
}

void _elf_IsProcessorFeaturePresent() asm("IsProcessorFeaturePresent");
void *_imp__IsProcessorFeaturePresent = NULL;
void _elf_IsProcessorFeaturePresent() {
load_dll_kernel32();
if (!_imp__IsProcessorFeaturePresent) {
_imp__IsProcessorFeaturePresent = (void *) _elf_GetProcAddress(_dll_kernel32, "IsProcessorFeaturePresent");
}
asm("leave\njmp *%0" : : "r"(_imp__IsProcessorFeaturePresent));
}

void _elf_IsSystemResumeAutomatic() asm("IsSystemResumeAutomatic");
void *_imp__IsSystemResumeAutomatic = NULL;
void _elf_IsSystemResumeAutomatic() {
load_dll_kernel32();
if (!_imp__IsSystemResumeAutomatic) {
_imp__IsSystemResumeAutomatic = (void *) _elf_GetProcAddress(_dll_kernel32, "IsSystemResumeAutomatic");
}
asm("leave\njmp *%0" : : "r"(_imp__IsSystemResumeAutomatic));
}

void _elf_IsValidCodePage() asm("IsValidCodePage");
void *_imp__IsValidCodePage = NULL;
void _elf_IsValidCodePage() {
load_dll_kernel32();
if (!_imp__IsValidCodePage) {
_imp__IsValidCodePage = (void *) _elf_GetProcAddress(_dll_kernel32, "IsValidCodePage");
}
asm("leave\njmp *%0" : : "r"(_imp__IsValidCodePage));
}

void _elf_IsValidLanguageGroup() asm("IsValidLanguageGroup");
void *_imp__IsValidLanguageGroup = NULL;
void _elf_IsValidLanguageGroup() {
load_dll_kernel32();
if (!_imp__IsValidLanguageGroup) {
_imp__IsValidLanguageGroup = (void *) _elf_GetProcAddress(_dll_kernel32, "IsValidLanguageGroup");
}
asm("leave\njmp *%0" : : "r"(_imp__IsValidLanguageGroup));
}

void _elf_IsValidLocale() asm("IsValidLocale");
void *_imp__IsValidLocale = NULL;
void _elf_IsValidLocale() {
load_dll_kernel32();
if (!_imp__IsValidLocale) {
_imp__IsValidLocale = (void *) _elf_GetProcAddress(_dll_kernel32, "IsValidLocale");
}
asm("leave\njmp *%0" : : "r"(_imp__IsValidLocale));
}

void _elf_IsValidUILanguage() asm("IsValidUILanguage");
void *_imp__IsValidUILanguage = NULL;
void _elf_IsValidUILanguage() {
load_dll_kernel32();
if (!_imp__IsValidUILanguage) {
_imp__IsValidUILanguage = (void *) _elf_GetProcAddress(_dll_kernel32, "IsValidUILanguage");
}
asm("leave\njmp *%0" : : "r"(_imp__IsValidUILanguage));
}

void _elf_IsWow64Process() asm("IsWow64Process");
void *_imp__IsWow64Process = NULL;
void _elf_IsWow64Process() {
load_dll_kernel32();
if (!_imp__IsWow64Process) {
_imp__IsWow64Process = (void *) _elf_GetProcAddress(_dll_kernel32, "IsWow64Process");
}
asm("leave\njmp *%0" : : "r"(_imp__IsWow64Process));
}

void _elf_LCMapStringA() asm("LCMapStringA");
void *_imp__LCMapStringA = NULL;
void _elf_LCMapStringA() {
load_dll_kernel32();
if (!_imp__LCMapStringA) {
_imp__LCMapStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "LCMapStringA");
}
asm("leave\njmp *%0" : : "r"(_imp__LCMapStringA));
}

void _elf_LCMapStringW() asm("LCMapStringW");
void *_imp__LCMapStringW = NULL;
void _elf_LCMapStringW() {
load_dll_kernel32();
if (!_imp__LCMapStringW) {
_imp__LCMapStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "LCMapStringW");
}
asm("leave\njmp *%0" : : "r"(_imp__LCMapStringW));
}

void _elf_LZClose() asm("LZClose");
void *_imp__LZClose = NULL;
void _elf_LZClose() {
load_dll_kernel32();
if (!_imp__LZClose) {
_imp__LZClose = (void *) _elf_GetProcAddress(_dll_kernel32, "LZClose");
}
asm("leave\njmp *%0" : : "r"(_imp__LZClose));
}

void _elf_LZCloseFile() asm("LZCloseFile");
void *_imp__LZCloseFile = NULL;
void _elf_LZCloseFile() {
load_dll_kernel32();
if (!_imp__LZCloseFile) {
_imp__LZCloseFile = (void *) _elf_GetProcAddress(_dll_kernel32, "LZCloseFile");
}
asm("leave\njmp *%0" : : "r"(_imp__LZCloseFile));
}

void _elf_LZCopy() asm("LZCopy");
void *_imp__LZCopy = NULL;
void _elf_LZCopy() {
load_dll_kernel32();
if (!_imp__LZCopy) {
_imp__LZCopy = (void *) _elf_GetProcAddress(_dll_kernel32, "LZCopy");
}
asm("leave\njmp *%0" : : "r"(_imp__LZCopy));
}

void _elf_LZCreateFileW() asm("LZCreateFileW");
void *_imp__LZCreateFileW = NULL;
void _elf_LZCreateFileW() {
load_dll_kernel32();
if (!_imp__LZCreateFileW) {
_imp__LZCreateFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "LZCreateFileW");
}
asm("leave\njmp *%0" : : "r"(_imp__LZCreateFileW));
}

void _elf_LZDone() asm("LZDone");
void *_imp__LZDone = NULL;
void _elf_LZDone() {
load_dll_kernel32();
if (!_imp__LZDone) {
_imp__LZDone = (void *) _elf_GetProcAddress(_dll_kernel32, "LZDone");
}
asm("leave\njmp *%0" : : "r"(_imp__LZDone));
}

void _elf_LZInit() asm("LZInit");
void *_imp__LZInit = NULL;
void _elf_LZInit() {
load_dll_kernel32();
if (!_imp__LZInit) {
_imp__LZInit = (void *) _elf_GetProcAddress(_dll_kernel32, "LZInit");
}
asm("leave\njmp *%0" : : "r"(_imp__LZInit));
}

void _elf_LZOpenFileA() asm("LZOpenFileA");
void *_imp__LZOpenFileA = NULL;
void _elf_LZOpenFileA() {
load_dll_kernel32();
if (!_imp__LZOpenFileA) {
_imp__LZOpenFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "LZOpenFileA");
}
asm("leave\njmp *%0" : : "r"(_imp__LZOpenFileA));
}

void _elf_LZOpenFileW() asm("LZOpenFileW");
void *_imp__LZOpenFileW = NULL;
void _elf_LZOpenFileW() {
load_dll_kernel32();
if (!_imp__LZOpenFileW) {
_imp__LZOpenFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "LZOpenFileW");
}
asm("leave\njmp *%0" : : "r"(_imp__LZOpenFileW));
}

void _elf_LZRead() asm("LZRead");
void *_imp__LZRead = NULL;
void _elf_LZRead() {
load_dll_kernel32();
if (!_imp__LZRead) {
_imp__LZRead = (void *) _elf_GetProcAddress(_dll_kernel32, "LZRead");
}
asm("leave\njmp *%0" : : "r"(_imp__LZRead));
}

void _elf_LZSeek() asm("LZSeek");
void *_imp__LZSeek = NULL;
void _elf_LZSeek() {
load_dll_kernel32();
if (!_imp__LZSeek) {
_imp__LZSeek = (void *) _elf_GetProcAddress(_dll_kernel32, "LZSeek");
}
asm("leave\njmp *%0" : : "r"(_imp__LZSeek));
}

void _elf_LZStart() asm("LZStart");
void *_imp__LZStart = NULL;
void _elf_LZStart() {
load_dll_kernel32();
if (!_imp__LZStart) {
_imp__LZStart = (void *) _elf_GetProcAddress(_dll_kernel32, "LZStart");
}
asm("leave\njmp *%0" : : "r"(_imp__LZStart));
}

void _elf_LeaveCriticalSection() asm("LeaveCriticalSection");
void *_imp__LeaveCriticalSection = NULL;
void _elf_LeaveCriticalSection() {
load_dll_kernel32();
if (!_imp__LeaveCriticalSection) {
_imp__LeaveCriticalSection = (void *) _elf_GetProcAddress(_dll_kernel32, "LeaveCriticalSection");
}
asm("leave\njmp *%0" : : "r"(_imp__LeaveCriticalSection));
}

void _elf_LoadLibraryExA() asm("LoadLibraryExA");
void *_imp__LoadLibraryExA = NULL;
void _elf_LoadLibraryExA() {
load_dll_kernel32();
if (!_imp__LoadLibraryExA) {
_imp__LoadLibraryExA = (void *) _elf_GetProcAddress(_dll_kernel32, "LoadLibraryExA");
}
asm("leave\njmp *%0" : : "r"(_imp__LoadLibraryExA));
}

void _elf_LoadLibraryExW() asm("LoadLibraryExW");
void *_imp__LoadLibraryExW = NULL;
void _elf_LoadLibraryExW() {
load_dll_kernel32();
if (!_imp__LoadLibraryExW) {
_imp__LoadLibraryExW = (void *) _elf_GetProcAddress(_dll_kernel32, "LoadLibraryExW");
}
asm("leave\njmp *%0" : : "r"(_imp__LoadLibraryExW));
}

void _elf_LoadLibraryW() asm("LoadLibraryW");
void *_imp__LoadLibraryW = NULL;
void _elf_LoadLibraryW() {
load_dll_kernel32();
if (!_imp__LoadLibraryW) {
_imp__LoadLibraryW = (void *) _elf_GetProcAddress(_dll_kernel32, "LoadLibraryW");
}
asm("leave\njmp *%0" : : "r"(_imp__LoadLibraryW));
}

void _elf_LoadModule() asm("LoadModule");
void *_imp__LoadModule = NULL;
void _elf_LoadModule() {
load_dll_kernel32();
if (!_imp__LoadModule) {
_imp__LoadModule = (void *) _elf_GetProcAddress(_dll_kernel32, "LoadModule");
}
asm("leave\njmp *%0" : : "r"(_imp__LoadModule));
}

void _elf_LoadResource() asm("LoadResource");
void *_imp__LoadResource = NULL;
void _elf_LoadResource() {
load_dll_kernel32();
if (!_imp__LoadResource) {
_imp__LoadResource = (void *) _elf_GetProcAddress(_dll_kernel32, "LoadResource");
}
asm("leave\njmp *%0" : : "r"(_imp__LoadResource));
}

void _elf_LocalAlloc() asm("LocalAlloc");
void *_imp__LocalAlloc = NULL;
void _elf_LocalAlloc() {
load_dll_kernel32();
if (!_imp__LocalAlloc) {
_imp__LocalAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalAlloc");
}
asm("leave\njmp *%0" : : "r"(_imp__LocalAlloc));
}

void _elf_LocalCompact() asm("LocalCompact");
void *_imp__LocalCompact = NULL;
void _elf_LocalCompact() {
load_dll_kernel32();
if (!_imp__LocalCompact) {
_imp__LocalCompact = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalCompact");
}
asm("leave\njmp *%0" : : "r"(_imp__LocalCompact));
}

void _elf_LocalFileTimeToFileTime() asm("LocalFileTimeToFileTime");
void *_imp__LocalFileTimeToFileTime = NULL;
void _elf_LocalFileTimeToFileTime() {
load_dll_kernel32();
if (!_imp__LocalFileTimeToFileTime) {
_imp__LocalFileTimeToFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalFileTimeToFileTime");
}
asm("leave\njmp *%0" : : "r"(_imp__LocalFileTimeToFileTime));
}

void _elf_LocalFlags() asm("LocalFlags");
void *_imp__LocalFlags = NULL;
void _elf_LocalFlags() {
load_dll_kernel32();
if (!_imp__LocalFlags) {
_imp__LocalFlags = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalFlags");
}
asm("leave\njmp *%0" : : "r"(_imp__LocalFlags));
}

void _elf_LocalFree() asm("LocalFree");
void *_imp__LocalFree = NULL;
void _elf_LocalFree() {
load_dll_kernel32();
if (!_imp__LocalFree) {
_imp__LocalFree = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalFree");
}
asm("leave\njmp *%0" : : "r"(_imp__LocalFree));
}

void _elf_LocalHandle() asm("LocalHandle");
void *_imp__LocalHandle = NULL;
void _elf_LocalHandle() {
load_dll_kernel32();
if (!_imp__LocalHandle) {
_imp__LocalHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalHandle");
}
asm("leave\njmp *%0" : : "r"(_imp__LocalHandle));
}

void _elf_LocalLock() asm("LocalLock");
void *_imp__LocalLock = NULL;
void _elf_LocalLock() {
load_dll_kernel32();
if (!_imp__LocalLock) {
_imp__LocalLock = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalLock");
}
asm("leave\njmp *%0" : : "r"(_imp__LocalLock));
}

void _elf_LocalReAlloc() asm("LocalReAlloc");
void *_imp__LocalReAlloc = NULL;
void _elf_LocalReAlloc() {
load_dll_kernel32();
if (!_imp__LocalReAlloc) {
_imp__LocalReAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalReAlloc");
}
asm("leave\njmp *%0" : : "r"(_imp__LocalReAlloc));
}

void _elf_LocalShrink() asm("LocalShrink");
void *_imp__LocalShrink = NULL;
void _elf_LocalShrink() {
load_dll_kernel32();
if (!_imp__LocalShrink) {
_imp__LocalShrink = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalShrink");
}
asm("leave\njmp *%0" : : "r"(_imp__LocalShrink));
}

void _elf_LocalSize() asm("LocalSize");
void *_imp__LocalSize = NULL;
void _elf_LocalSize() {
load_dll_kernel32();
if (!_imp__LocalSize) {
_imp__LocalSize = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalSize");
}
asm("leave\njmp *%0" : : "r"(_imp__LocalSize));
}

void _elf_LocalUnlock() asm("LocalUnlock");
void *_imp__LocalUnlock = NULL;
void _elf_LocalUnlock() {
load_dll_kernel32();
if (!_imp__LocalUnlock) {
_imp__LocalUnlock = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalUnlock");
}
asm("leave\njmp *%0" : : "r"(_imp__LocalUnlock));
}

void _elf_LockFile() asm("LockFile");
void *_imp__LockFile = NULL;
void _elf_LockFile() {
load_dll_kernel32();
if (!_imp__LockFile) {
_imp__LockFile = (void *) _elf_GetProcAddress(_dll_kernel32, "LockFile");
}
asm("leave\njmp *%0" : : "r"(_imp__LockFile));
}

void _elf_LockFileEx() asm("LockFileEx");
void *_imp__LockFileEx = NULL;
void _elf_LockFileEx() {
load_dll_kernel32();
if (!_imp__LockFileEx) {
_imp__LockFileEx = (void *) _elf_GetProcAddress(_dll_kernel32, "LockFileEx");
}
asm("leave\njmp *%0" : : "r"(_imp__LockFileEx));
}

void _elf_LockResource() asm("LockResource");
void *_imp__LockResource = NULL;
void _elf_LockResource() {
load_dll_kernel32();
if (!_imp__LockResource) {
_imp__LockResource = (void *) _elf_GetProcAddress(_dll_kernel32, "LockResource");
}
asm("leave\njmp *%0" : : "r"(_imp__LockResource));
}

void _elf_MapUserPhysicalPages() asm("MapUserPhysicalPages");
void *_imp__MapUserPhysicalPages = NULL;
void _elf_MapUserPhysicalPages() {
load_dll_kernel32();
if (!_imp__MapUserPhysicalPages) {
_imp__MapUserPhysicalPages = (void *) _elf_GetProcAddress(_dll_kernel32, "MapUserPhysicalPages");
}
asm("leave\njmp *%0" : : "r"(_imp__MapUserPhysicalPages));
}

void _elf_MapUserPhysicalPagesScatter() asm("MapUserPhysicalPagesScatter");
void *_imp__MapUserPhysicalPagesScatter = NULL;
void _elf_MapUserPhysicalPagesScatter() {
load_dll_kernel32();
if (!_imp__MapUserPhysicalPagesScatter) {
_imp__MapUserPhysicalPagesScatter = (void *) _elf_GetProcAddress(_dll_kernel32, "MapUserPhysicalPagesScatter");
}
asm("leave\njmp *%0" : : "r"(_imp__MapUserPhysicalPagesScatter));
}

void _elf_MapViewOfFile() asm("MapViewOfFile");
void *_imp__MapViewOfFile = NULL;
void _elf_MapViewOfFile() {
load_dll_kernel32();
if (!_imp__MapViewOfFile) {
_imp__MapViewOfFile = (void *) _elf_GetProcAddress(_dll_kernel32, "MapViewOfFile");
}
asm("leave\njmp *%0" : : "r"(_imp__MapViewOfFile));
}

void _elf_MapViewOfFileEx() asm("MapViewOfFileEx");
void *_imp__MapViewOfFileEx = NULL;
void _elf_MapViewOfFileEx() {
load_dll_kernel32();
if (!_imp__MapViewOfFileEx) {
_imp__MapViewOfFileEx = (void *) _elf_GetProcAddress(_dll_kernel32, "MapViewOfFileEx");
}
asm("leave\njmp *%0" : : "r"(_imp__MapViewOfFileEx));
}

void _elf_Module32First() asm("Module32First");
void *_imp__Module32First = NULL;
void _elf_Module32First() {
load_dll_kernel32();
if (!_imp__Module32First) {
_imp__Module32First = (void *) _elf_GetProcAddress(_dll_kernel32, "Module32First");
}
asm("leave\njmp *%0" : : "r"(_imp__Module32First));
}

void _elf_Module32FirstW() asm("Module32FirstW");
void *_imp__Module32FirstW = NULL;
void _elf_Module32FirstW() {
load_dll_kernel32();
if (!_imp__Module32FirstW) {
_imp__Module32FirstW = (void *) _elf_GetProcAddress(_dll_kernel32, "Module32FirstW");
}
asm("leave\njmp *%0" : : "r"(_imp__Module32FirstW));
}

void _elf_Module32Next() asm("Module32Next");
void *_imp__Module32Next = NULL;
void _elf_Module32Next() {
load_dll_kernel32();
if (!_imp__Module32Next) {
_imp__Module32Next = (void *) _elf_GetProcAddress(_dll_kernel32, "Module32Next");
}
asm("leave\njmp *%0" : : "r"(_imp__Module32Next));
}

void _elf_Module32NextW() asm("Module32NextW");
void *_imp__Module32NextW = NULL;
void _elf_Module32NextW() {
load_dll_kernel32();
if (!_imp__Module32NextW) {
_imp__Module32NextW = (void *) _elf_GetProcAddress(_dll_kernel32, "Module32NextW");
}
asm("leave\njmp *%0" : : "r"(_imp__Module32NextW));
}

void _elf_MoveFileA() asm("MoveFileA");
void *_imp__MoveFileA = NULL;
void _elf_MoveFileA() {
load_dll_kernel32();
if (!_imp__MoveFileA) {
_imp__MoveFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "MoveFileA");
}
asm("leave\njmp *%0" : : "r"(_imp__MoveFileA));
}

void _elf_MoveFileExA() asm("MoveFileExA");
void *_imp__MoveFileExA = NULL;
void _elf_MoveFileExA() {
load_dll_kernel32();
if (!_imp__MoveFileExA) {
_imp__MoveFileExA = (void *) _elf_GetProcAddress(_dll_kernel32, "MoveFileExA");
}
asm("leave\njmp *%0" : : "r"(_imp__MoveFileExA));
}

void _elf_MoveFileExW() asm("MoveFileExW");
void *_imp__MoveFileExW = NULL;
void _elf_MoveFileExW() {
load_dll_kernel32();
if (!_imp__MoveFileExW) {
_imp__MoveFileExW = (void *) _elf_GetProcAddress(_dll_kernel32, "MoveFileExW");
}
asm("leave\njmp *%0" : : "r"(_imp__MoveFileExW));
}

void _elf_MoveFileW() asm("MoveFileW");
void *_imp__MoveFileW = NULL;
void _elf_MoveFileW() {
load_dll_kernel32();
if (!_imp__MoveFileW) {
_imp__MoveFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "MoveFileW");
}
asm("leave\njmp *%0" : : "r"(_imp__MoveFileW));
}

void _elf_MoveFileWithProgressA() asm("MoveFileWithProgressA");
void *_imp__MoveFileWithProgressA = NULL;
void _elf_MoveFileWithProgressA() {
load_dll_kernel32();
if (!_imp__MoveFileWithProgressA) {
_imp__MoveFileWithProgressA = (void *) _elf_GetProcAddress(_dll_kernel32, "MoveFileWithProgressA");
}
asm("leave\njmp *%0" : : "r"(_imp__MoveFileWithProgressA));
}

void _elf_MoveFileWithProgressW() asm("MoveFileWithProgressW");
void *_imp__MoveFileWithProgressW = NULL;
void _elf_MoveFileWithProgressW() {
load_dll_kernel32();
if (!_imp__MoveFileWithProgressW) {
_imp__MoveFileWithProgressW = (void *) _elf_GetProcAddress(_dll_kernel32, "MoveFileWithProgressW");
}
asm("leave\njmp *%0" : : "r"(_imp__MoveFileWithProgressW));
}

void _elf_MulDiv() asm("MulDiv");
void *_imp__MulDiv = NULL;
void _elf_MulDiv() {
load_dll_kernel32();
if (!_imp__MulDiv) {
_imp__MulDiv = (void *) _elf_GetProcAddress(_dll_kernel32, "MulDiv");
}
asm("leave\njmp *%0" : : "r"(_imp__MulDiv));
}

void _elf_MultiByteToWideChar() asm("MultiByteToWideChar");
void *_imp__MultiByteToWideChar = NULL;
void _elf_MultiByteToWideChar() {
load_dll_kernel32();
if (!_imp__MultiByteToWideChar) {
_imp__MultiByteToWideChar = (void *) _elf_GetProcAddress(_dll_kernel32, "MultiByteToWideChar");
}
asm("leave\njmp *%0" : : "r"(_imp__MultiByteToWideChar));
}

void _elf_NlsConvertIntegerToString() asm("NlsConvertIntegerToString");
void *_imp__NlsConvertIntegerToString = NULL;
void _elf_NlsConvertIntegerToString() {
load_dll_kernel32();
if (!_imp__NlsConvertIntegerToString) {
_imp__NlsConvertIntegerToString = (void *) _elf_GetProcAddress(_dll_kernel32, "NlsConvertIntegerToString");
}
asm("leave\njmp *%0" : : "r"(_imp__NlsConvertIntegerToString));
}

void _elf_NlsGetCacheUpdateCount() asm("NlsGetCacheUpdateCount");
void *_imp__NlsGetCacheUpdateCount = NULL;
void _elf_NlsGetCacheUpdateCount() {
load_dll_kernel32();
if (!_imp__NlsGetCacheUpdateCount) {
_imp__NlsGetCacheUpdateCount = (void *) _elf_GetProcAddress(_dll_kernel32, "NlsGetCacheUpdateCount");
}
asm("leave\njmp *%0" : : "r"(_imp__NlsGetCacheUpdateCount));
}

void _elf_NlsResetProcessLocale() asm("NlsResetProcessLocale");
void *_imp__NlsResetProcessLocale = NULL;
void _elf_NlsResetProcessLocale() {
load_dll_kernel32();
if (!_imp__NlsResetProcessLocale) {
_imp__NlsResetProcessLocale = (void *) _elf_GetProcAddress(_dll_kernel32, "NlsResetProcessLocale");
}
asm("leave\njmp *%0" : : "r"(_imp__NlsResetProcessLocale));
}

void _elf_NumaVirtualQueryNode() asm("NumaVirtualQueryNode");
void *_imp__NumaVirtualQueryNode = NULL;
void _elf_NumaVirtualQueryNode() {
load_dll_kernel32();
if (!_imp__NumaVirtualQueryNode) {
_imp__NumaVirtualQueryNode = (void *) _elf_GetProcAddress(_dll_kernel32, "NumaVirtualQueryNode");
}
asm("leave\njmp *%0" : : "r"(_imp__NumaVirtualQueryNode));
}

void _elf_OpenConsoleW() asm("OpenConsoleW");
void *_imp__OpenConsoleW = NULL;
void _elf_OpenConsoleW() {
load_dll_kernel32();
if (!_imp__OpenConsoleW) {
_imp__OpenConsoleW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenConsoleW");
}
asm("leave\njmp *%0" : : "r"(_imp__OpenConsoleW));
}

void _elf_OpenDataFile() asm("OpenDataFile");
void *_imp__OpenDataFile = NULL;
void _elf_OpenDataFile() {
load_dll_kernel32();
if (!_imp__OpenDataFile) {
_imp__OpenDataFile = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenDataFile");
}
asm("leave\njmp *%0" : : "r"(_imp__OpenDataFile));
}

void _elf_OpenEventA() asm("OpenEventA");
void *_imp__OpenEventA = NULL;
void _elf_OpenEventA() {
load_dll_kernel32();
if (!_imp__OpenEventA) {
_imp__OpenEventA = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenEventA");
}
asm("leave\njmp *%0" : : "r"(_imp__OpenEventA));
}

void _elf_OpenEventW() asm("OpenEventW");
void *_imp__OpenEventW = NULL;
void _elf_OpenEventW() {
load_dll_kernel32();
if (!_imp__OpenEventW) {
_imp__OpenEventW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenEventW");
}
asm("leave\njmp *%0" : : "r"(_imp__OpenEventW));
}

void _elf_OpenFile() asm("OpenFile");
void *_imp__OpenFile = NULL;
void _elf_OpenFile() {
load_dll_kernel32();
if (!_imp__OpenFile) {
_imp__OpenFile = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenFile");
}
asm("leave\njmp *%0" : : "r"(_imp__OpenFile));
}

void _elf_OpenFileMappingA() asm("OpenFileMappingA");
void *_imp__OpenFileMappingA = NULL;
void _elf_OpenFileMappingA() {
load_dll_kernel32();
if (!_imp__OpenFileMappingA) {
_imp__OpenFileMappingA = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenFileMappingA");
}
asm("leave\njmp *%0" : : "r"(_imp__OpenFileMappingA));
}

void _elf_OpenFileMappingW() asm("OpenFileMappingW");
void *_imp__OpenFileMappingW = NULL;
void _elf_OpenFileMappingW() {
load_dll_kernel32();
if (!_imp__OpenFileMappingW) {
_imp__OpenFileMappingW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenFileMappingW");
}
asm("leave\njmp *%0" : : "r"(_imp__OpenFileMappingW));
}

void _elf_OpenJobObjectA() asm("OpenJobObjectA");
void *_imp__OpenJobObjectA = NULL;
void _elf_OpenJobObjectA() {
load_dll_kernel32();
if (!_imp__OpenJobObjectA) {
_imp__OpenJobObjectA = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenJobObjectA");
}
asm("leave\njmp *%0" : : "r"(_imp__OpenJobObjectA));
}

void _elf_OpenJobObjectW() asm("OpenJobObjectW");
void *_imp__OpenJobObjectW = NULL;
void _elf_OpenJobObjectW() {
load_dll_kernel32();
if (!_imp__OpenJobObjectW) {
_imp__OpenJobObjectW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenJobObjectW");
}
asm("leave\njmp *%0" : : "r"(_imp__OpenJobObjectW));
}

void _elf_OpenMutexA() asm("OpenMutexA");
void *_imp__OpenMutexA = NULL;
void _elf_OpenMutexA() {
load_dll_kernel32();
if (!_imp__OpenMutexA) {
_imp__OpenMutexA = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenMutexA");
}
asm("leave\njmp *%0" : : "r"(_imp__OpenMutexA));
}

void _elf_OpenMutexW() asm("OpenMutexW");
void *_imp__OpenMutexW = NULL;
void _elf_OpenMutexW() {
load_dll_kernel32();
if (!_imp__OpenMutexW) {
_imp__OpenMutexW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenMutexW");
}
asm("leave\njmp *%0" : : "r"(_imp__OpenMutexW));
}

void _elf_OpenProcess() asm("OpenProcess");
void *_imp__OpenProcess = NULL;
void _elf_OpenProcess() {
load_dll_kernel32();
if (!_imp__OpenProcess) {
_imp__OpenProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenProcess");
}
asm("leave\njmp *%0" : : "r"(_imp__OpenProcess));
}

void _elf_OpenProfileUserMapping() asm("OpenProfileUserMapping");
void *_imp__OpenProfileUserMapping = NULL;
void _elf_OpenProfileUserMapping() {
load_dll_kernel32();
if (!_imp__OpenProfileUserMapping) {
_imp__OpenProfileUserMapping = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenProfileUserMapping");
}
asm("leave\njmp *%0" : : "r"(_imp__OpenProfileUserMapping));
}

void _elf_OpenSemaphoreA() asm("OpenSemaphoreA");
void *_imp__OpenSemaphoreA = NULL;
void _elf_OpenSemaphoreA() {
load_dll_kernel32();
if (!_imp__OpenSemaphoreA) {
_imp__OpenSemaphoreA = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenSemaphoreA");
}
asm("leave\njmp *%0" : : "r"(_imp__OpenSemaphoreA));
}

void _elf_OpenSemaphoreW() asm("OpenSemaphoreW");
void *_imp__OpenSemaphoreW = NULL;
void _elf_OpenSemaphoreW() {
load_dll_kernel32();
if (!_imp__OpenSemaphoreW) {
_imp__OpenSemaphoreW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenSemaphoreW");
}
asm("leave\njmp *%0" : : "r"(_imp__OpenSemaphoreW));
}

void _elf_OpenThread() asm("OpenThread");
void *_imp__OpenThread = NULL;
void _elf_OpenThread() {
load_dll_kernel32();
if (!_imp__OpenThread) {
_imp__OpenThread = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenThread");
}
asm("leave\njmp *%0" : : "r"(_imp__OpenThread));
}

void _elf_OpenWaitableTimerA() asm("OpenWaitableTimerA");
void *_imp__OpenWaitableTimerA = NULL;
void _elf_OpenWaitableTimerA() {
load_dll_kernel32();
if (!_imp__OpenWaitableTimerA) {
_imp__OpenWaitableTimerA = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenWaitableTimerA");
}
asm("leave\njmp *%0" : : "r"(_imp__OpenWaitableTimerA));
}

void _elf_OpenWaitableTimerW() asm("OpenWaitableTimerW");
void *_imp__OpenWaitableTimerW = NULL;
void _elf_OpenWaitableTimerW() {
load_dll_kernel32();
if (!_imp__OpenWaitableTimerW) {
_imp__OpenWaitableTimerW = (void *) _elf_GetProcAddress(_dll_kernel32, "OpenWaitableTimerW");
}
asm("leave\njmp *%0" : : "r"(_imp__OpenWaitableTimerW));
}

void _elf_OutputDebugStringA() asm("OutputDebugStringA");
void *_imp__OutputDebugStringA = NULL;
void _elf_OutputDebugStringA() {
load_dll_kernel32();
if (!_imp__OutputDebugStringA) {
_imp__OutputDebugStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "OutputDebugStringA");
}
asm("leave\njmp *%0" : : "r"(_imp__OutputDebugStringA));
}

void _elf_OutputDebugStringW() asm("OutputDebugStringW");
void *_imp__OutputDebugStringW = NULL;
void _elf_OutputDebugStringW() {
load_dll_kernel32();
if (!_imp__OutputDebugStringW) {
_imp__OutputDebugStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "OutputDebugStringW");
}
asm("leave\njmp *%0" : : "r"(_imp__OutputDebugStringW));
}

void _elf_PeekConsoleInputA() asm("PeekConsoleInputA");
void *_imp__PeekConsoleInputA = NULL;
void _elf_PeekConsoleInputA() {
load_dll_kernel32();
if (!_imp__PeekConsoleInputA) {
_imp__PeekConsoleInputA = (void *) _elf_GetProcAddress(_dll_kernel32, "PeekConsoleInputA");
}
asm("leave\njmp *%0" : : "r"(_imp__PeekConsoleInputA));
}

void _elf_PeekConsoleInputW() asm("PeekConsoleInputW");
void *_imp__PeekConsoleInputW = NULL;
void _elf_PeekConsoleInputW() {
load_dll_kernel32();
if (!_imp__PeekConsoleInputW) {
_imp__PeekConsoleInputW = (void *) _elf_GetProcAddress(_dll_kernel32, "PeekConsoleInputW");
}
asm("leave\njmp *%0" : : "r"(_imp__PeekConsoleInputW));
}

void _elf_PeekNamedPipe() asm("PeekNamedPipe");
void *_imp__PeekNamedPipe = NULL;
void _elf_PeekNamedPipe() {
load_dll_kernel32();
if (!_imp__PeekNamedPipe) {
_imp__PeekNamedPipe = (void *) _elf_GetProcAddress(_dll_kernel32, "PeekNamedPipe");
}
asm("leave\njmp *%0" : : "r"(_imp__PeekNamedPipe));
}

void _elf_PostQueuedCompletionStatus() asm("PostQueuedCompletionStatus");
void *_imp__PostQueuedCompletionStatus = NULL;
void _elf_PostQueuedCompletionStatus() {
load_dll_kernel32();
if (!_imp__PostQueuedCompletionStatus) {
_imp__PostQueuedCompletionStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "PostQueuedCompletionStatus");
}
asm("leave\njmp *%0" : : "r"(_imp__PostQueuedCompletionStatus));
}

void _elf_PrepareTape() asm("PrepareTape");
void *_imp__PrepareTape = NULL;
void _elf_PrepareTape() {
load_dll_kernel32();
if (!_imp__PrepareTape) {
_imp__PrepareTape = (void *) _elf_GetProcAddress(_dll_kernel32, "PrepareTape");
}
asm("leave\njmp *%0" : : "r"(_imp__PrepareTape));
}

void _elf_PrivCopyFileExW() asm("PrivCopyFileExW");
void *_imp__PrivCopyFileExW = NULL;
void _elf_PrivCopyFileExW() {
load_dll_kernel32();
if (!_imp__PrivCopyFileExW) {
_imp__PrivCopyFileExW = (void *) _elf_GetProcAddress(_dll_kernel32, "PrivCopyFileExW");
}
asm("leave\njmp *%0" : : "r"(_imp__PrivCopyFileExW));
}

void _elf_PrivMoveFileIdentityW() asm("PrivMoveFileIdentityW");
void *_imp__PrivMoveFileIdentityW = NULL;
void _elf_PrivMoveFileIdentityW() {
load_dll_kernel32();
if (!_imp__PrivMoveFileIdentityW) {
_imp__PrivMoveFileIdentityW = (void *) _elf_GetProcAddress(_dll_kernel32, "PrivMoveFileIdentityW");
}
asm("leave\njmp *%0" : : "r"(_imp__PrivMoveFileIdentityW));
}

void _elf_Process32First() asm("Process32First");
void *_imp__Process32First = NULL;
void _elf_Process32First() {
load_dll_kernel32();
if (!_imp__Process32First) {
_imp__Process32First = (void *) _elf_GetProcAddress(_dll_kernel32, "Process32First");
}
asm("leave\njmp *%0" : : "r"(_imp__Process32First));
}

void _elf_Process32FirstW() asm("Process32FirstW");
void *_imp__Process32FirstW = NULL;
void _elf_Process32FirstW() {
load_dll_kernel32();
if (!_imp__Process32FirstW) {
_imp__Process32FirstW = (void *) _elf_GetProcAddress(_dll_kernel32, "Process32FirstW");
}
asm("leave\njmp *%0" : : "r"(_imp__Process32FirstW));
}

void _elf_Process32Next() asm("Process32Next");
void *_imp__Process32Next = NULL;
void _elf_Process32Next() {
load_dll_kernel32();
if (!_imp__Process32Next) {
_imp__Process32Next = (void *) _elf_GetProcAddress(_dll_kernel32, "Process32Next");
}
asm("leave\njmp *%0" : : "r"(_imp__Process32Next));
}

void _elf_Process32NextW() asm("Process32NextW");
void *_imp__Process32NextW = NULL;
void _elf_Process32NextW() {
load_dll_kernel32();
if (!_imp__Process32NextW) {
_imp__Process32NextW = (void *) _elf_GetProcAddress(_dll_kernel32, "Process32NextW");
}
asm("leave\njmp *%0" : : "r"(_imp__Process32NextW));
}

void _elf_ProcessIdToSessionId() asm("ProcessIdToSessionId");
void *_imp__ProcessIdToSessionId = NULL;
void _elf_ProcessIdToSessionId() {
load_dll_kernel32();
if (!_imp__ProcessIdToSessionId) {
_imp__ProcessIdToSessionId = (void *) _elf_GetProcAddress(_dll_kernel32, "ProcessIdToSessionId");
}
asm("leave\njmp *%0" : : "r"(_imp__ProcessIdToSessionId));
}

void _elf_PulseEvent() asm("PulseEvent");
void *_imp__PulseEvent = NULL;
void _elf_PulseEvent() {
load_dll_kernel32();
if (!_imp__PulseEvent) {
_imp__PulseEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "PulseEvent");
}
asm("leave\njmp *%0" : : "r"(_imp__PulseEvent));
}

void _elf_PurgeComm() asm("PurgeComm");
void *_imp__PurgeComm = NULL;
void _elf_PurgeComm() {
load_dll_kernel32();
if (!_imp__PurgeComm) {
_imp__PurgeComm = (void *) _elf_GetProcAddress(_dll_kernel32, "PurgeComm");
}
asm("leave\njmp *%0" : : "r"(_imp__PurgeComm));
}

void _elf_QueryActCtxW() asm("QueryActCtxW");
void *_imp__QueryActCtxW = NULL;
void _elf_QueryActCtxW() {
load_dll_kernel32();
if (!_imp__QueryActCtxW) {
_imp__QueryActCtxW = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryActCtxW");
}
asm("leave\njmp *%0" : : "r"(_imp__QueryActCtxW));
}

void _elf_QueryDepthSList() asm("QueryDepthSList");
void *_imp__QueryDepthSList = NULL;
void _elf_QueryDepthSList() {
load_dll_kernel32();
if (!_imp__QueryDepthSList) {
_imp__QueryDepthSList = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryDepthSList");
}
asm("leave\njmp *%0" : : "r"(_imp__QueryDepthSList));
}

void _elf_QueryDosDeviceA() asm("QueryDosDeviceA");
void *_imp__QueryDosDeviceA = NULL;
void _elf_QueryDosDeviceA() {
load_dll_kernel32();
if (!_imp__QueryDosDeviceA) {
_imp__QueryDosDeviceA = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryDosDeviceA");
}
asm("leave\njmp *%0" : : "r"(_imp__QueryDosDeviceA));
}

void _elf_QueryDosDeviceW() asm("QueryDosDeviceW");
void *_imp__QueryDosDeviceW = NULL;
void _elf_QueryDosDeviceW() {
load_dll_kernel32();
if (!_imp__QueryDosDeviceW) {
_imp__QueryDosDeviceW = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryDosDeviceW");
}
asm("leave\njmp *%0" : : "r"(_imp__QueryDosDeviceW));
}

void _elf_QueryInformationJobObject() asm("QueryInformationJobObject");
void *_imp__QueryInformationJobObject = NULL;
void _elf_QueryInformationJobObject() {
load_dll_kernel32();
if (!_imp__QueryInformationJobObject) {
_imp__QueryInformationJobObject = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryInformationJobObject");
}
asm("leave\njmp *%0" : : "r"(_imp__QueryInformationJobObject));
}

void _elf_QueryMemoryResourceNotification() asm("QueryMemoryResourceNotification");
void *_imp__QueryMemoryResourceNotification = NULL;
void _elf_QueryMemoryResourceNotification() {
load_dll_kernel32();
if (!_imp__QueryMemoryResourceNotification) {
_imp__QueryMemoryResourceNotification = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryMemoryResourceNotification");
}
asm("leave\njmp *%0" : : "r"(_imp__QueryMemoryResourceNotification));
}

void _elf_QueryPerformanceCounter() asm("QueryPerformanceCounter");
void *_imp__QueryPerformanceCounter = NULL;
void _elf_QueryPerformanceCounter() {
load_dll_kernel32();
if (!_imp__QueryPerformanceCounter) {
_imp__QueryPerformanceCounter = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryPerformanceCounter");
}
asm("leave\njmp *%0" : : "r"(_imp__QueryPerformanceCounter));
}

void _elf_QueryPerformanceFrequency() asm("QueryPerformanceFrequency");
void *_imp__QueryPerformanceFrequency = NULL;
void _elf_QueryPerformanceFrequency() {
load_dll_kernel32();
if (!_imp__QueryPerformanceFrequency) {
_imp__QueryPerformanceFrequency = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryPerformanceFrequency");
}
asm("leave\njmp *%0" : : "r"(_imp__QueryPerformanceFrequency));
}

void _elf_QueryWin31IniFilesMappedToRegistry() asm("QueryWin31IniFilesMappedToRegistry");
void *_imp__QueryWin31IniFilesMappedToRegistry = NULL;
void _elf_QueryWin31IniFilesMappedToRegistry() {
load_dll_kernel32();
if (!_imp__QueryWin31IniFilesMappedToRegistry) {
_imp__QueryWin31IniFilesMappedToRegistry = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryWin31IniFilesMappedToRegistry");
}
asm("leave\njmp *%0" : : "r"(_imp__QueryWin31IniFilesMappedToRegistry));
}

void _elf_QueueUserAPC() asm("QueueUserAPC");
void *_imp__QueueUserAPC = NULL;
void _elf_QueueUserAPC() {
load_dll_kernel32();
if (!_imp__QueueUserAPC) {
_imp__QueueUserAPC = (void *) _elf_GetProcAddress(_dll_kernel32, "QueueUserAPC");
}
asm("leave\njmp *%0" : : "r"(_imp__QueueUserAPC));
}

void _elf_QueueUserWorkItem() asm("QueueUserWorkItem");
void *_imp__QueueUserWorkItem = NULL;
void _elf_QueueUserWorkItem() {
load_dll_kernel32();
if (!_imp__QueueUserWorkItem) {
_imp__QueueUserWorkItem = (void *) _elf_GetProcAddress(_dll_kernel32, "QueueUserWorkItem");
}
asm("leave\njmp *%0" : : "r"(_imp__QueueUserWorkItem));
}

void _elf_RaiseException() asm("RaiseException");
void *_imp__RaiseException = NULL;
void _elf_RaiseException() {
load_dll_kernel32();
if (!_imp__RaiseException) {
_imp__RaiseException = (void *) _elf_GetProcAddress(_dll_kernel32, "RaiseException");
}
asm("leave\njmp *%0" : : "r"(_imp__RaiseException));
}

void _elf_ReadConsoleA() asm("ReadConsoleA");
void *_imp__ReadConsoleA = NULL;
void _elf_ReadConsoleA() {
load_dll_kernel32();
if (!_imp__ReadConsoleA) {
_imp__ReadConsoleA = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleA");
}
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleA));
}

void _elf_ReadConsoleInputA() asm("ReadConsoleInputA");
void *_imp__ReadConsoleInputA = NULL;
void _elf_ReadConsoleInputA() {
load_dll_kernel32();
if (!_imp__ReadConsoleInputA) {
_imp__ReadConsoleInputA = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleInputA");
}
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleInputA));
}

void _elf_ReadConsoleInputExA() asm("ReadConsoleInputExA");
void *_imp__ReadConsoleInputExA = NULL;
void _elf_ReadConsoleInputExA() {
load_dll_kernel32();
if (!_imp__ReadConsoleInputExA) {
_imp__ReadConsoleInputExA = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleInputExA");
}
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleInputExA));
}

void _elf_ReadConsoleInputExW() asm("ReadConsoleInputExW");
void *_imp__ReadConsoleInputExW = NULL;
void _elf_ReadConsoleInputExW() {
load_dll_kernel32();
if (!_imp__ReadConsoleInputExW) {
_imp__ReadConsoleInputExW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleInputExW");
}
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleInputExW));
}

void _elf_ReadConsoleInputW() asm("ReadConsoleInputW");
void *_imp__ReadConsoleInputW = NULL;
void _elf_ReadConsoleInputW() {
load_dll_kernel32();
if (!_imp__ReadConsoleInputW) {
_imp__ReadConsoleInputW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleInputW");
}
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleInputW));
}

void _elf_ReadConsoleOutputA() asm("ReadConsoleOutputA");
void *_imp__ReadConsoleOutputA = NULL;
void _elf_ReadConsoleOutputA() {
load_dll_kernel32();
if (!_imp__ReadConsoleOutputA) {
_imp__ReadConsoleOutputA = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleOutputA");
}
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleOutputA));
}

void _elf_ReadConsoleOutputAttribute() asm("ReadConsoleOutputAttribute");
void *_imp__ReadConsoleOutputAttribute = NULL;
void _elf_ReadConsoleOutputAttribute() {
load_dll_kernel32();
if (!_imp__ReadConsoleOutputAttribute) {
_imp__ReadConsoleOutputAttribute = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleOutputAttribute");
}
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleOutputAttribute));
}

void _elf_ReadConsoleOutputCharacterA() asm("ReadConsoleOutputCharacterA");
void *_imp__ReadConsoleOutputCharacterA = NULL;
void _elf_ReadConsoleOutputCharacterA() {
load_dll_kernel32();
if (!_imp__ReadConsoleOutputCharacterA) {
_imp__ReadConsoleOutputCharacterA = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleOutputCharacterA");
}
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleOutputCharacterA));
}

void _elf_ReadConsoleOutputCharacterW() asm("ReadConsoleOutputCharacterW");
void *_imp__ReadConsoleOutputCharacterW = NULL;
void _elf_ReadConsoleOutputCharacterW() {
load_dll_kernel32();
if (!_imp__ReadConsoleOutputCharacterW) {
_imp__ReadConsoleOutputCharacterW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleOutputCharacterW");
}
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleOutputCharacterW));
}

void _elf_ReadConsoleOutputW() asm("ReadConsoleOutputW");
void *_imp__ReadConsoleOutputW = NULL;
void _elf_ReadConsoleOutputW() {
load_dll_kernel32();
if (!_imp__ReadConsoleOutputW) {
_imp__ReadConsoleOutputW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleOutputW");
}
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleOutputW));
}

void _elf_ReadConsoleW() asm("ReadConsoleW");
void *_imp__ReadConsoleW = NULL;
void _elf_ReadConsoleW() {
load_dll_kernel32();
if (!_imp__ReadConsoleW) {
_imp__ReadConsoleW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadConsoleW");
}
asm("leave\njmp *%0" : : "r"(_imp__ReadConsoleW));
}

void _elf_ReadDirectoryChangesW() asm("ReadDirectoryChangesW");
void *_imp__ReadDirectoryChangesW = NULL;
void _elf_ReadDirectoryChangesW() {
load_dll_kernel32();
if (!_imp__ReadDirectoryChangesW) {
_imp__ReadDirectoryChangesW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadDirectoryChangesW");
}
asm("leave\njmp *%0" : : "r"(_imp__ReadDirectoryChangesW));
}

void _elf_ReadFile() asm("ReadFile");
void *_imp__ReadFile = NULL;
void _elf_ReadFile() {
load_dll_kernel32();
if (!_imp__ReadFile) {
_imp__ReadFile = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadFile");
}
asm("leave\njmp *%0" : : "r"(_imp__ReadFile));
}

void _elf_ReadFileEx() asm("ReadFileEx");
void *_imp__ReadFileEx = NULL;
void _elf_ReadFileEx() {
load_dll_kernel32();
if (!_imp__ReadFileEx) {
_imp__ReadFileEx = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadFileEx");
}
asm("leave\njmp *%0" : : "r"(_imp__ReadFileEx));
}

void _elf_ReadFileScatter() asm("ReadFileScatter");
void *_imp__ReadFileScatter = NULL;
void _elf_ReadFileScatter() {
load_dll_kernel32();
if (!_imp__ReadFileScatter) {
_imp__ReadFileScatter = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadFileScatter");
}
asm("leave\njmp *%0" : : "r"(_imp__ReadFileScatter));
}

void _elf_ReadProcessMemory() asm("ReadProcessMemory");
void *_imp__ReadProcessMemory = NULL;
void _elf_ReadProcessMemory() {
load_dll_kernel32();
if (!_imp__ReadProcessMemory) {
_imp__ReadProcessMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "ReadProcessMemory");
}
asm("leave\njmp *%0" : : "r"(_imp__ReadProcessMemory));
}

void _elf_RegisterConsoleIME() asm("RegisterConsoleIME");
void *_imp__RegisterConsoleIME = NULL;
void _elf_RegisterConsoleIME() {
load_dll_kernel32();
if (!_imp__RegisterConsoleIME) {
_imp__RegisterConsoleIME = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterConsoleIME");
}
asm("leave\njmp *%0" : : "r"(_imp__RegisterConsoleIME));
}

void _elf_RegisterConsoleOS2() asm("RegisterConsoleOS2");
void *_imp__RegisterConsoleOS2 = NULL;
void _elf_RegisterConsoleOS2() {
load_dll_kernel32();
if (!_imp__RegisterConsoleOS2) {
_imp__RegisterConsoleOS2 = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterConsoleOS2");
}
asm("leave\njmp *%0" : : "r"(_imp__RegisterConsoleOS2));
}

void _elf_RegisterConsoleVDM() asm("RegisterConsoleVDM");
void *_imp__RegisterConsoleVDM = NULL;
void _elf_RegisterConsoleVDM() {
load_dll_kernel32();
if (!_imp__RegisterConsoleVDM) {
_imp__RegisterConsoleVDM = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterConsoleVDM");
}
asm("leave\njmp *%0" : : "r"(_imp__RegisterConsoleVDM));
}

void _elf_RegisterWaitForInputIdle() asm("RegisterWaitForInputIdle");
void *_imp__RegisterWaitForInputIdle = NULL;
void _elf_RegisterWaitForInputIdle() {
load_dll_kernel32();
if (!_imp__RegisterWaitForInputIdle) {
_imp__RegisterWaitForInputIdle = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterWaitForInputIdle");
}
asm("leave\njmp *%0" : : "r"(_imp__RegisterWaitForInputIdle));
}

void _elf_RegisterWaitForSingleObject() asm("RegisterWaitForSingleObject");
void *_imp__RegisterWaitForSingleObject = NULL;
void _elf_RegisterWaitForSingleObject() {
load_dll_kernel32();
if (!_imp__RegisterWaitForSingleObject) {
_imp__RegisterWaitForSingleObject = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterWaitForSingleObject");
}
asm("leave\njmp *%0" : : "r"(_imp__RegisterWaitForSingleObject));
}

void _elf_RegisterWaitForSingleObjectEx() asm("RegisterWaitForSingleObjectEx");
void *_imp__RegisterWaitForSingleObjectEx = NULL;
void _elf_RegisterWaitForSingleObjectEx() {
load_dll_kernel32();
if (!_imp__RegisterWaitForSingleObjectEx) {
_imp__RegisterWaitForSingleObjectEx = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterWaitForSingleObjectEx");
}
asm("leave\njmp *%0" : : "r"(_imp__RegisterWaitForSingleObjectEx));
}

void _elf_RegisterWowBaseHandlers() asm("RegisterWowBaseHandlers");
void *_imp__RegisterWowBaseHandlers = NULL;
void _elf_RegisterWowBaseHandlers() {
load_dll_kernel32();
if (!_imp__RegisterWowBaseHandlers) {
_imp__RegisterWowBaseHandlers = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterWowBaseHandlers");
}
asm("leave\njmp *%0" : : "r"(_imp__RegisterWowBaseHandlers));
}

void _elf_RegisterWowExec() asm("RegisterWowExec");
void *_imp__RegisterWowExec = NULL;
void _elf_RegisterWowExec() {
load_dll_kernel32();
if (!_imp__RegisterWowExec) {
_imp__RegisterWowExec = (void *) _elf_GetProcAddress(_dll_kernel32, "RegisterWowExec");
}
asm("leave\njmp *%0" : : "r"(_imp__RegisterWowExec));
}

void _elf_ReleaseActCtx() asm("ReleaseActCtx");
void *_imp__ReleaseActCtx = NULL;
void _elf_ReleaseActCtx() {
load_dll_kernel32();
if (!_imp__ReleaseActCtx) {
_imp__ReleaseActCtx = (void *) _elf_GetProcAddress(_dll_kernel32, "ReleaseActCtx");
}
asm("leave\njmp *%0" : : "r"(_imp__ReleaseActCtx));
}

void _elf_ReleaseMutex() asm("ReleaseMutex");
void *_imp__ReleaseMutex = NULL;
void _elf_ReleaseMutex() {
load_dll_kernel32();
if (!_imp__ReleaseMutex) {
_imp__ReleaseMutex = (void *) _elf_GetProcAddress(_dll_kernel32, "ReleaseMutex");
}
asm("leave\njmp *%0" : : "r"(_imp__ReleaseMutex));
}

void _elf_ReleaseSemaphore() asm("ReleaseSemaphore");
void *_imp__ReleaseSemaphore = NULL;
void _elf_ReleaseSemaphore() {
load_dll_kernel32();
if (!_imp__ReleaseSemaphore) {
_imp__ReleaseSemaphore = (void *) _elf_GetProcAddress(_dll_kernel32, "ReleaseSemaphore");
}
asm("leave\njmp *%0" : : "r"(_imp__ReleaseSemaphore));
}

void _elf_RemoveDirectoryA() asm("RemoveDirectoryA");
void *_imp__RemoveDirectoryA = NULL;
void _elf_RemoveDirectoryA() {
load_dll_kernel32();
if (!_imp__RemoveDirectoryA) {
_imp__RemoveDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "RemoveDirectoryA");
}
asm("leave\njmp *%0" : : "r"(_imp__RemoveDirectoryA));
}

void _elf_RemoveDirectoryW() asm("RemoveDirectoryW");
void *_imp__RemoveDirectoryW = NULL;
void _elf_RemoveDirectoryW() {
load_dll_kernel32();
if (!_imp__RemoveDirectoryW) {
_imp__RemoveDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "RemoveDirectoryW");
}
asm("leave\njmp *%0" : : "r"(_imp__RemoveDirectoryW));
}

void _elf_RemoveLocalAlternateComputerNameA() asm("RemoveLocalAlternateComputerNameA");
void *_imp__RemoveLocalAlternateComputerNameA = NULL;
void _elf_RemoveLocalAlternateComputerNameA() {
load_dll_kernel32();
if (!_imp__RemoveLocalAlternateComputerNameA) {
_imp__RemoveLocalAlternateComputerNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "RemoveLocalAlternateComputerNameA");
}
asm("leave\njmp *%0" : : "r"(_imp__RemoveLocalAlternateComputerNameA));
}

void _elf_RemoveLocalAlternateComputerNameW() asm("RemoveLocalAlternateComputerNameW");
void *_imp__RemoveLocalAlternateComputerNameW = NULL;
void _elf_RemoveLocalAlternateComputerNameW() {
load_dll_kernel32();
if (!_imp__RemoveLocalAlternateComputerNameW) {
_imp__RemoveLocalAlternateComputerNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "RemoveLocalAlternateComputerNameW");
}
asm("leave\njmp *%0" : : "r"(_imp__RemoveLocalAlternateComputerNameW));
}

void _elf_RemoveVectoredExceptionHandler() asm("RemoveVectoredExceptionHandler");
void *_imp__RemoveVectoredExceptionHandler = NULL;
void _elf_RemoveVectoredExceptionHandler() {
load_dll_kernel32();
if (!_imp__RemoveVectoredExceptionHandler) {
_imp__RemoveVectoredExceptionHandler = (void *) _elf_GetProcAddress(_dll_kernel32, "RemoveVectoredExceptionHandler");
}
asm("leave\njmp *%0" : : "r"(_imp__RemoveVectoredExceptionHandler));
}

void _elf_ReplaceFile() asm("ReplaceFile");
void *_imp__ReplaceFile = NULL;
void _elf_ReplaceFile() {
load_dll_kernel32();
if (!_imp__ReplaceFile) {
_imp__ReplaceFile = (void *) _elf_GetProcAddress(_dll_kernel32, "ReplaceFile");
}
asm("leave\njmp *%0" : : "r"(_imp__ReplaceFile));
}

void _elf_ReplaceFileA() asm("ReplaceFileA");
void *_imp__ReplaceFileA = NULL;
void _elf_ReplaceFileA() {
load_dll_kernel32();
if (!_imp__ReplaceFileA) {
_imp__ReplaceFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "ReplaceFileA");
}
asm("leave\njmp *%0" : : "r"(_imp__ReplaceFileA));
}

void _elf_ReplaceFileW() asm("ReplaceFileW");
void *_imp__ReplaceFileW = NULL;
void _elf_ReplaceFileW() {
load_dll_kernel32();
if (!_imp__ReplaceFileW) {
_imp__ReplaceFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "ReplaceFileW");
}
asm("leave\njmp *%0" : : "r"(_imp__ReplaceFileW));
}

void _elf_RequestDeviceWakeup() asm("RequestDeviceWakeup");
void *_imp__RequestDeviceWakeup = NULL;
void _elf_RequestDeviceWakeup() {
load_dll_kernel32();
if (!_imp__RequestDeviceWakeup) {
_imp__RequestDeviceWakeup = (void *) _elf_GetProcAddress(_dll_kernel32, "RequestDeviceWakeup");
}
asm("leave\njmp *%0" : : "r"(_imp__RequestDeviceWakeup));
}

void _elf_RequestWakeupLatency() asm("RequestWakeupLatency");
void *_imp__RequestWakeupLatency = NULL;
void _elf_RequestWakeupLatency() {
load_dll_kernel32();
if (!_imp__RequestWakeupLatency) {
_imp__RequestWakeupLatency = (void *) _elf_GetProcAddress(_dll_kernel32, "RequestWakeupLatency");
}
asm("leave\njmp *%0" : : "r"(_imp__RequestWakeupLatency));
}

void _elf_ResetEvent() asm("ResetEvent");
void *_imp__ResetEvent = NULL;
void _elf_ResetEvent() {
load_dll_kernel32();
if (!_imp__ResetEvent) {
_imp__ResetEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "ResetEvent");
}
asm("leave\njmp *%0" : : "r"(_imp__ResetEvent));
}

void _elf_ResetWriteWatch() asm("ResetWriteWatch");
void *_imp__ResetWriteWatch = NULL;
void _elf_ResetWriteWatch() {
load_dll_kernel32();
if (!_imp__ResetWriteWatch) {
_imp__ResetWriteWatch = (void *) _elf_GetProcAddress(_dll_kernel32, "ResetWriteWatch");
}
asm("leave\njmp *%0" : : "r"(_imp__ResetWriteWatch));
}

void _elf_RestoreLastError() asm("RestoreLastError");
void *_imp__RestoreLastError = NULL;
void _elf_RestoreLastError() {
load_dll_kernel32();
if (!_imp__RestoreLastError) {
_imp__RestoreLastError = (void *) _elf_GetProcAddress(_dll_kernel32, "RestoreLastError");
}
asm("leave\njmp *%0" : : "r"(_imp__RestoreLastError));
}

void _elf_ResumeThread() asm("ResumeThread");
void *_imp__ResumeThread = NULL;
void _elf_ResumeThread() {
load_dll_kernel32();
if (!_imp__ResumeThread) {
_imp__ResumeThread = (void *) _elf_GetProcAddress(_dll_kernel32, "ResumeThread");
}
asm("leave\njmp *%0" : : "r"(_imp__ResumeThread));
}

void _elf_RtlCaptureContext() asm("RtlCaptureContext");
void *_imp__RtlCaptureContext = NULL;
void _elf_RtlCaptureContext() {
load_dll_kernel32();
if (!_imp__RtlCaptureContext) {
_imp__RtlCaptureContext = (void *) _elf_GetProcAddress(_dll_kernel32, "RtlCaptureContext");
}
asm("leave\njmp *%0" : : "r"(_imp__RtlCaptureContext));
}

void _elf_RtlCaptureStackBackTrace() asm("RtlCaptureStackBackTrace");
void *_imp__RtlCaptureStackBackTrace = NULL;
void _elf_RtlCaptureStackBackTrace() {
load_dll_kernel32();
if (!_imp__RtlCaptureStackBackTrace) {
_imp__RtlCaptureStackBackTrace = (void *) _elf_GetProcAddress(_dll_kernel32, "RtlCaptureStackBackTrace");
}
asm("leave\njmp *%0" : : "r"(_imp__RtlCaptureStackBackTrace));
}

void _elf_RtlFillMemory() asm("RtlFillMemory");
void *_imp__RtlFillMemory = NULL;
void _elf_RtlFillMemory() {
load_dll_kernel32();
if (!_imp__RtlFillMemory) {
_imp__RtlFillMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "RtlFillMemory");
}
asm("leave\njmp *%0" : : "r"(_imp__RtlFillMemory));
}

void _elf_RtlMoveMemory() asm("RtlMoveMemory");
void *_imp__RtlMoveMemory = NULL;
void _elf_RtlMoveMemory() {
load_dll_kernel32();
if (!_imp__RtlMoveMemory) {
_imp__RtlMoveMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "RtlMoveMemory");
}
asm("leave\njmp *%0" : : "r"(_imp__RtlMoveMemory));
}

void _elf_RtlUnwind() asm("RtlUnwind");
void *_imp__RtlUnwind = NULL;
void _elf_RtlUnwind() {
load_dll_kernel32();
if (!_imp__RtlUnwind) {
_imp__RtlUnwind = (void *) _elf_GetProcAddress(_dll_kernel32, "RtlUnwind");
}
asm("leave\njmp *%0" : : "r"(_imp__RtlUnwind));
}

void _elf_RtlZeroMemory() asm("RtlZeroMemory");
void *_imp__RtlZeroMemory = NULL;
void _elf_RtlZeroMemory() {
load_dll_kernel32();
if (!_imp__RtlZeroMemory) {
_imp__RtlZeroMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "RtlZeroMemory");
}
asm("leave\njmp *%0" : : "r"(_imp__RtlZeroMemory));
}

void _elf_ScrollConsoleScreenBufferA() asm("ScrollConsoleScreenBufferA");
void *_imp__ScrollConsoleScreenBufferA = NULL;
void _elf_ScrollConsoleScreenBufferA() {
load_dll_kernel32();
if (!_imp__ScrollConsoleScreenBufferA) {
_imp__ScrollConsoleScreenBufferA = (void *) _elf_GetProcAddress(_dll_kernel32, "ScrollConsoleScreenBufferA");
}
asm("leave\njmp *%0" : : "r"(_imp__ScrollConsoleScreenBufferA));
}

void _elf_ScrollConsoleScreenBufferW() asm("ScrollConsoleScreenBufferW");
void *_imp__ScrollConsoleScreenBufferW = NULL;
void _elf_ScrollConsoleScreenBufferW() {
load_dll_kernel32();
if (!_imp__ScrollConsoleScreenBufferW) {
_imp__ScrollConsoleScreenBufferW = (void *) _elf_GetProcAddress(_dll_kernel32, "ScrollConsoleScreenBufferW");
}
asm("leave\njmp *%0" : : "r"(_imp__ScrollConsoleScreenBufferW));
}

void _elf_SearchPathA() asm("SearchPathA");
void *_imp__SearchPathA = NULL;
void _elf_SearchPathA() {
load_dll_kernel32();
if (!_imp__SearchPathA) {
_imp__SearchPathA = (void *) _elf_GetProcAddress(_dll_kernel32, "SearchPathA");
}
asm("leave\njmp *%0" : : "r"(_imp__SearchPathA));
}

void _elf_SearchPathW() asm("SearchPathW");
void *_imp__SearchPathW = NULL;
void _elf_SearchPathW() {
load_dll_kernel32();
if (!_imp__SearchPathW) {
_imp__SearchPathW = (void *) _elf_GetProcAddress(_dll_kernel32, "SearchPathW");
}
asm("leave\njmp *%0" : : "r"(_imp__SearchPathW));
}

void _elf_SetCPGlobal() asm("SetCPGlobal");
void *_imp__SetCPGlobal = NULL;
void _elf_SetCPGlobal() {
load_dll_kernel32();
if (!_imp__SetCPGlobal) {
_imp__SetCPGlobal = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCPGlobal");
}
asm("leave\njmp *%0" : : "r"(_imp__SetCPGlobal));
}

void _elf_SetCalendarInfoA() asm("SetCalendarInfoA");
void *_imp__SetCalendarInfoA = NULL;
void _elf_SetCalendarInfoA() {
load_dll_kernel32();
if (!_imp__SetCalendarInfoA) {
_imp__SetCalendarInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCalendarInfoA");
}
asm("leave\njmp *%0" : : "r"(_imp__SetCalendarInfoA));
}

void _elf_SetCalendarInfoW() asm("SetCalendarInfoW");
void *_imp__SetCalendarInfoW = NULL;
void _elf_SetCalendarInfoW() {
load_dll_kernel32();
if (!_imp__SetCalendarInfoW) {
_imp__SetCalendarInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCalendarInfoW");
}
asm("leave\njmp *%0" : : "r"(_imp__SetCalendarInfoW));
}

void _elf_SetClientTimeZoneInformation() asm("SetClientTimeZoneInformation");
void *_imp__SetClientTimeZoneInformation = NULL;
void _elf_SetClientTimeZoneInformation() {
load_dll_kernel32();
if (!_imp__SetClientTimeZoneInformation) {
_imp__SetClientTimeZoneInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "SetClientTimeZoneInformation");
}
asm("leave\njmp *%0" : : "r"(_imp__SetClientTimeZoneInformation));
}

void _elf_SetComPlusPackageInstallStatus() asm("SetComPlusPackageInstallStatus");
void *_imp__SetComPlusPackageInstallStatus = NULL;
void _elf_SetComPlusPackageInstallStatus() {
load_dll_kernel32();
if (!_imp__SetComPlusPackageInstallStatus) {
_imp__SetComPlusPackageInstallStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "SetComPlusPackageInstallStatus");
}
asm("leave\njmp *%0" : : "r"(_imp__SetComPlusPackageInstallStatus));
}

void _elf_SetCommBreak() asm("SetCommBreak");
void *_imp__SetCommBreak = NULL;
void _elf_SetCommBreak() {
load_dll_kernel32();
if (!_imp__SetCommBreak) {
_imp__SetCommBreak = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCommBreak");
}
asm("leave\njmp *%0" : : "r"(_imp__SetCommBreak));
}

void _elf_SetCommConfig() asm("SetCommConfig");
void *_imp__SetCommConfig = NULL;
void _elf_SetCommConfig() {
load_dll_kernel32();
if (!_imp__SetCommConfig) {
_imp__SetCommConfig = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCommConfig");
}
asm("leave\njmp *%0" : : "r"(_imp__SetCommConfig));
}

void _elf_SetCommMask() asm("SetCommMask");
void *_imp__SetCommMask = NULL;
void _elf_SetCommMask() {
load_dll_kernel32();
if (!_imp__SetCommMask) {
_imp__SetCommMask = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCommMask");
}
asm("leave\njmp *%0" : : "r"(_imp__SetCommMask));
}

void _elf_SetCommState() asm("SetCommState");
void *_imp__SetCommState = NULL;
void _elf_SetCommState() {
load_dll_kernel32();
if (!_imp__SetCommState) {
_imp__SetCommState = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCommState");
}
asm("leave\njmp *%0" : : "r"(_imp__SetCommState));
}

void _elf_SetCommTimeouts() asm("SetCommTimeouts");
void *_imp__SetCommTimeouts = NULL;
void _elf_SetCommTimeouts() {
load_dll_kernel32();
if (!_imp__SetCommTimeouts) {
_imp__SetCommTimeouts = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCommTimeouts");
}
asm("leave\njmp *%0" : : "r"(_imp__SetCommTimeouts));
}

void _elf_SetComputerNameA() asm("SetComputerNameA");
void *_imp__SetComputerNameA = NULL;
void _elf_SetComputerNameA() {
load_dll_kernel32();
if (!_imp__SetComputerNameA) {
_imp__SetComputerNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetComputerNameA");
}
asm("leave\njmp *%0" : : "r"(_imp__SetComputerNameA));
}

void _elf_SetComputerNameExA() asm("SetComputerNameExA");
void *_imp__SetComputerNameExA = NULL;
void _elf_SetComputerNameExA() {
load_dll_kernel32();
if (!_imp__SetComputerNameExA) {
_imp__SetComputerNameExA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetComputerNameExA");
}
asm("leave\njmp *%0" : : "r"(_imp__SetComputerNameExA));
}

void _elf_SetComputerNameExW() asm("SetComputerNameExW");
void *_imp__SetComputerNameExW = NULL;
void _elf_SetComputerNameExW() {
load_dll_kernel32();
if (!_imp__SetComputerNameExW) {
_imp__SetComputerNameExW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetComputerNameExW");
}
asm("leave\njmp *%0" : : "r"(_imp__SetComputerNameExW));
}

void _elf_SetComputerNameW() asm("SetComputerNameW");
void *_imp__SetComputerNameW = NULL;
void _elf_SetComputerNameW() {
load_dll_kernel32();
if (!_imp__SetComputerNameW) {
_imp__SetComputerNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetComputerNameW");
}
asm("leave\njmp *%0" : : "r"(_imp__SetComputerNameW));
}

void _elf_SetConsoleActiveScreenBuffer() asm("SetConsoleActiveScreenBuffer");
void *_imp__SetConsoleActiveScreenBuffer = NULL;
void _elf_SetConsoleActiveScreenBuffer() {
load_dll_kernel32();
if (!_imp__SetConsoleActiveScreenBuffer) {
_imp__SetConsoleActiveScreenBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleActiveScreenBuffer");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleActiveScreenBuffer));
}

void _elf_SetConsoleCP() asm("SetConsoleCP");
void *_imp__SetConsoleCP = NULL;
void _elf_SetConsoleCP() {
load_dll_kernel32();
if (!_imp__SetConsoleCP) {
_imp__SetConsoleCP = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCP");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleCP));
}

void _elf_SetConsoleCommandHistoryMode() asm("SetConsoleCommandHistoryMode");
void *_imp__SetConsoleCommandHistoryMode = NULL;
void _elf_SetConsoleCommandHistoryMode() {
load_dll_kernel32();
if (!_imp__SetConsoleCommandHistoryMode) {
_imp__SetConsoleCommandHistoryMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCommandHistoryMode");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleCommandHistoryMode));
}

void _elf_SetConsoleCtrlHandler() asm("SetConsoleCtrlHandler");
void *_imp__SetConsoleCtrlHandler = NULL;
void _elf_SetConsoleCtrlHandler() {
load_dll_kernel32();
if (!_imp__SetConsoleCtrlHandler) {
_imp__SetConsoleCtrlHandler = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCtrlHandler");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleCtrlHandler));
}

void _elf_SetConsoleCursor() asm("SetConsoleCursor");
void *_imp__SetConsoleCursor = NULL;
void _elf_SetConsoleCursor() {
load_dll_kernel32();
if (!_imp__SetConsoleCursor) {
_imp__SetConsoleCursor = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCursor");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleCursor));
}

void _elf_SetConsoleCursorInfo() asm("SetConsoleCursorInfo");
void *_imp__SetConsoleCursorInfo = NULL;
void _elf_SetConsoleCursorInfo() {
load_dll_kernel32();
if (!_imp__SetConsoleCursorInfo) {
_imp__SetConsoleCursorInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCursorInfo");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleCursorInfo));
}

void _elf_SetConsoleCursorMode() asm("SetConsoleCursorMode");
void *_imp__SetConsoleCursorMode = NULL;
void _elf_SetConsoleCursorMode() {
load_dll_kernel32();
if (!_imp__SetConsoleCursorMode) {
_imp__SetConsoleCursorMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCursorMode");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleCursorMode));
}

void _elf_SetConsoleCursorPosition() asm("SetConsoleCursorPosition");
void *_imp__SetConsoleCursorPosition = NULL;
void _elf_SetConsoleCursorPosition() {
load_dll_kernel32();
if (!_imp__SetConsoleCursorPosition) {
_imp__SetConsoleCursorPosition = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleCursorPosition");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleCursorPosition));
}

void _elf_SetConsoleDisplayMode() asm("SetConsoleDisplayMode");
void *_imp__SetConsoleDisplayMode = NULL;
void _elf_SetConsoleDisplayMode() {
load_dll_kernel32();
if (!_imp__SetConsoleDisplayMode) {
_imp__SetConsoleDisplayMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleDisplayMode");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleDisplayMode));
}

void _elf_SetConsoleFont() asm("SetConsoleFont");
void *_imp__SetConsoleFont = NULL;
void _elf_SetConsoleFont() {
load_dll_kernel32();
if (!_imp__SetConsoleFont) {
_imp__SetConsoleFont = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleFont");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleFont));
}

void _elf_SetConsoleHardwareState() asm("SetConsoleHardwareState");
void *_imp__SetConsoleHardwareState = NULL;
void _elf_SetConsoleHardwareState() {
load_dll_kernel32();
if (!_imp__SetConsoleHardwareState) {
_imp__SetConsoleHardwareState = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleHardwareState");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleHardwareState));
}

void _elf_SetConsoleIcon() asm("SetConsoleIcon");
void *_imp__SetConsoleIcon = NULL;
void _elf_SetConsoleIcon() {
load_dll_kernel32();
if (!_imp__SetConsoleIcon) {
_imp__SetConsoleIcon = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleIcon");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleIcon));
}

void _elf_SetConsoleInputExeNameA() asm("SetConsoleInputExeNameA");
void *_imp__SetConsoleInputExeNameA = NULL;
void _elf_SetConsoleInputExeNameA() {
load_dll_kernel32();
if (!_imp__SetConsoleInputExeNameA) {
_imp__SetConsoleInputExeNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleInputExeNameA");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleInputExeNameA));
}

void _elf_SetConsoleInputExeNameW() asm("SetConsoleInputExeNameW");
void *_imp__SetConsoleInputExeNameW = NULL;
void _elf_SetConsoleInputExeNameW() {
load_dll_kernel32();
if (!_imp__SetConsoleInputExeNameW) {
_imp__SetConsoleInputExeNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleInputExeNameW");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleInputExeNameW));
}

void _elf_SetConsoleKeyShortcuts() asm("SetConsoleKeyShortcuts");
void *_imp__SetConsoleKeyShortcuts = NULL;
void _elf_SetConsoleKeyShortcuts() {
load_dll_kernel32();
if (!_imp__SetConsoleKeyShortcuts) {
_imp__SetConsoleKeyShortcuts = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleKeyShortcuts");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleKeyShortcuts));
}

void _elf_SetConsoleLocalEUDC() asm("SetConsoleLocalEUDC");
void *_imp__SetConsoleLocalEUDC = NULL;
void _elf_SetConsoleLocalEUDC() {
load_dll_kernel32();
if (!_imp__SetConsoleLocalEUDC) {
_imp__SetConsoleLocalEUDC = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleLocalEUDC");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleLocalEUDC));
}

void _elf_SetConsoleMaximumWindowSize() asm("SetConsoleMaximumWindowSize");
void *_imp__SetConsoleMaximumWindowSize = NULL;
void _elf_SetConsoleMaximumWindowSize() {
load_dll_kernel32();
if (!_imp__SetConsoleMaximumWindowSize) {
_imp__SetConsoleMaximumWindowSize = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleMaximumWindowSize");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleMaximumWindowSize));
}

void _elf_SetConsoleMenuClose() asm("SetConsoleMenuClose");
void *_imp__SetConsoleMenuClose = NULL;
void _elf_SetConsoleMenuClose() {
load_dll_kernel32();
if (!_imp__SetConsoleMenuClose) {
_imp__SetConsoleMenuClose = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleMenuClose");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleMenuClose));
}

void _elf_SetConsoleMode() asm("SetConsoleMode");
void *_imp__SetConsoleMode = NULL;
void _elf_SetConsoleMode() {
load_dll_kernel32();
if (!_imp__SetConsoleMode) {
_imp__SetConsoleMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleMode");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleMode));
}

void _elf_SetConsoleNlsMode() asm("SetConsoleNlsMode");
void *_imp__SetConsoleNlsMode = NULL;
void _elf_SetConsoleNlsMode() {
load_dll_kernel32();
if (!_imp__SetConsoleNlsMode) {
_imp__SetConsoleNlsMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleNlsMode");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleNlsMode));
}

void _elf_SetConsoleNumberOfCommandsA() asm("SetConsoleNumberOfCommandsA");
void *_imp__SetConsoleNumberOfCommandsA = NULL;
void _elf_SetConsoleNumberOfCommandsA() {
load_dll_kernel32();
if (!_imp__SetConsoleNumberOfCommandsA) {
_imp__SetConsoleNumberOfCommandsA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleNumberOfCommandsA");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleNumberOfCommandsA));
}

void _elf_SetConsoleNumberOfCommandsW() asm("SetConsoleNumberOfCommandsW");
void *_imp__SetConsoleNumberOfCommandsW = NULL;
void _elf_SetConsoleNumberOfCommandsW() {
load_dll_kernel32();
if (!_imp__SetConsoleNumberOfCommandsW) {
_imp__SetConsoleNumberOfCommandsW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleNumberOfCommandsW");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleNumberOfCommandsW));
}

void _elf_SetConsoleOS2OemFormat() asm("SetConsoleOS2OemFormat");
void *_imp__SetConsoleOS2OemFormat = NULL;
void _elf_SetConsoleOS2OemFormat() {
load_dll_kernel32();
if (!_imp__SetConsoleOS2OemFormat) {
_imp__SetConsoleOS2OemFormat = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleOS2OemFormat");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleOS2OemFormat));
}

void _elf_SetConsoleOutputCP() asm("SetConsoleOutputCP");
void *_imp__SetConsoleOutputCP = NULL;
void _elf_SetConsoleOutputCP() {
load_dll_kernel32();
if (!_imp__SetConsoleOutputCP) {
_imp__SetConsoleOutputCP = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleOutputCP");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleOutputCP));
}

void _elf_SetConsolePalette() asm("SetConsolePalette");
void *_imp__SetConsolePalette = NULL;
void _elf_SetConsolePalette() {
load_dll_kernel32();
if (!_imp__SetConsolePalette) {
_imp__SetConsolePalette = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsolePalette");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsolePalette));
}

void _elf_SetConsoleScreenBufferSize() asm("SetConsoleScreenBufferSize");
void *_imp__SetConsoleScreenBufferSize = NULL;
void _elf_SetConsoleScreenBufferSize() {
load_dll_kernel32();
if (!_imp__SetConsoleScreenBufferSize) {
_imp__SetConsoleScreenBufferSize = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleScreenBufferSize");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleScreenBufferSize));
}

void _elf_SetConsoleTextAttribute() asm("SetConsoleTextAttribute");
void *_imp__SetConsoleTextAttribute = NULL;
void _elf_SetConsoleTextAttribute() {
load_dll_kernel32();
if (!_imp__SetConsoleTextAttribute) {
_imp__SetConsoleTextAttribute = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleTextAttribute");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleTextAttribute));
}

void _elf_SetConsoleTitleA() asm("SetConsoleTitleA");
void *_imp__SetConsoleTitleA = NULL;
void _elf_SetConsoleTitleA() {
load_dll_kernel32();
if (!_imp__SetConsoleTitleA) {
_imp__SetConsoleTitleA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleTitleA");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleTitleA));
}

void _elf_SetConsoleTitleW() asm("SetConsoleTitleW");
void *_imp__SetConsoleTitleW = NULL;
void _elf_SetConsoleTitleW() {
load_dll_kernel32();
if (!_imp__SetConsoleTitleW) {
_imp__SetConsoleTitleW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleTitleW");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleTitleW));
}

void _elf_SetConsoleWindowInfo() asm("SetConsoleWindowInfo");
void *_imp__SetConsoleWindowInfo = NULL;
void _elf_SetConsoleWindowInfo() {
load_dll_kernel32();
if (!_imp__SetConsoleWindowInfo) {
_imp__SetConsoleWindowInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "SetConsoleWindowInfo");
}
asm("leave\njmp *%0" : : "r"(_imp__SetConsoleWindowInfo));
}

void _elf_SetCriticalSectionSpinCount() asm("SetCriticalSectionSpinCount");
void *_imp__SetCriticalSectionSpinCount = NULL;
void _elf_SetCriticalSectionSpinCount() {
load_dll_kernel32();
if (!_imp__SetCriticalSectionSpinCount) {
_imp__SetCriticalSectionSpinCount = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCriticalSectionSpinCount");
}
asm("leave\njmp *%0" : : "r"(_imp__SetCriticalSectionSpinCount));
}

void _elf_SetCurrentDirectoryA() asm("SetCurrentDirectoryA");
void *_imp__SetCurrentDirectoryA = NULL;
void _elf_SetCurrentDirectoryA() {
load_dll_kernel32();
if (!_imp__SetCurrentDirectoryA) {
_imp__SetCurrentDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCurrentDirectoryA");
}
asm("leave\njmp *%0" : : "r"(_imp__SetCurrentDirectoryA));
}

void _elf_SetCurrentDirectoryW() asm("SetCurrentDirectoryW");
void *_imp__SetCurrentDirectoryW = NULL;
void _elf_SetCurrentDirectoryW() {
load_dll_kernel32();
if (!_imp__SetCurrentDirectoryW) {
_imp__SetCurrentDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCurrentDirectoryW");
}
asm("leave\njmp *%0" : : "r"(_imp__SetCurrentDirectoryW));
}

void _elf_SetDefaultCommConfigA() asm("SetDefaultCommConfigA");
void *_imp__SetDefaultCommConfigA = NULL;
void _elf_SetDefaultCommConfigA() {
load_dll_kernel32();
if (!_imp__SetDefaultCommConfigA) {
_imp__SetDefaultCommConfigA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetDefaultCommConfigA");
}
asm("leave\njmp *%0" : : "r"(_imp__SetDefaultCommConfigA));
}

void _elf_SetDefaultCommConfigW() asm("SetDefaultCommConfigW");
void *_imp__SetDefaultCommConfigW = NULL;
void _elf_SetDefaultCommConfigW() {
load_dll_kernel32();
if (!_imp__SetDefaultCommConfigW) {
_imp__SetDefaultCommConfigW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetDefaultCommConfigW");
}
asm("leave\njmp *%0" : : "r"(_imp__SetDefaultCommConfigW));
}

void _elf_SetDllDirectoryA() asm("SetDllDirectoryA");
void *_imp__SetDllDirectoryA = NULL;
void _elf_SetDllDirectoryA() {
load_dll_kernel32();
if (!_imp__SetDllDirectoryA) {
_imp__SetDllDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetDllDirectoryA");
}
asm("leave\njmp *%0" : : "r"(_imp__SetDllDirectoryA));
}

void _elf_SetDllDirectoryW() asm("SetDllDirectoryW");
void *_imp__SetDllDirectoryW = NULL;
void _elf_SetDllDirectoryW() {
load_dll_kernel32();
if (!_imp__SetDllDirectoryW) {
_imp__SetDllDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetDllDirectoryW");
}
asm("leave\njmp *%0" : : "r"(_imp__SetDllDirectoryW));
}

void _elf_SetEndOfFile() asm("SetEndOfFile");
void *_imp__SetEndOfFile = NULL;
void _elf_SetEndOfFile() {
load_dll_kernel32();
if (!_imp__SetEndOfFile) {
_imp__SetEndOfFile = (void *) _elf_GetProcAddress(_dll_kernel32, "SetEndOfFile");
}
asm("leave\njmp *%0" : : "r"(_imp__SetEndOfFile));
}

void _elf_SetEnvironmentVariableA() asm("SetEnvironmentVariableA");
void *_imp__SetEnvironmentVariableA = NULL;
void _elf_SetEnvironmentVariableA() {
load_dll_kernel32();
if (!_imp__SetEnvironmentVariableA) {
_imp__SetEnvironmentVariableA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetEnvironmentVariableA");
}
asm("leave\njmp *%0" : : "r"(_imp__SetEnvironmentVariableA));
}

void _elf_SetEnvironmentVariableW() asm("SetEnvironmentVariableW");
void *_imp__SetEnvironmentVariableW = NULL;
void _elf_SetEnvironmentVariableW() {
load_dll_kernel32();
if (!_imp__SetEnvironmentVariableW) {
_imp__SetEnvironmentVariableW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetEnvironmentVariableW");
}
asm("leave\njmp *%0" : : "r"(_imp__SetEnvironmentVariableW));
}

void _elf_SetErrorMode() asm("SetErrorMode");
void *_imp__SetErrorMode = NULL;
void _elf_SetErrorMode() {
load_dll_kernel32();
if (!_imp__SetErrorMode) {
_imp__SetErrorMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetErrorMode");
}
asm("leave\njmp *%0" : : "r"(_imp__SetErrorMode));
}

void _elf_SetEvent() asm("SetEvent");
void *_imp__SetEvent = NULL;
void _elf_SetEvent() {
load_dll_kernel32();
if (!_imp__SetEvent) {
_imp__SetEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "SetEvent");
}
asm("leave\njmp *%0" : : "r"(_imp__SetEvent));
}

void _elf_SetFileApisToANSI() asm("SetFileApisToANSI");
void *_imp__SetFileApisToANSI = NULL;
void _elf_SetFileApisToANSI() {
load_dll_kernel32();
if (!_imp__SetFileApisToANSI) {
_imp__SetFileApisToANSI = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileApisToANSI");
}
asm("leave\njmp *%0" : : "r"(_imp__SetFileApisToANSI));
}

void _elf_SetFileApisToOEM() asm("SetFileApisToOEM");
void *_imp__SetFileApisToOEM = NULL;
void _elf_SetFileApisToOEM() {
load_dll_kernel32();
if (!_imp__SetFileApisToOEM) {
_imp__SetFileApisToOEM = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileApisToOEM");
}
asm("leave\njmp *%0" : : "r"(_imp__SetFileApisToOEM));
}

void _elf_SetFileAttributesA() asm("SetFileAttributesA");
void *_imp__SetFileAttributesA = NULL;
void _elf_SetFileAttributesA() {
load_dll_kernel32();
if (!_imp__SetFileAttributesA) {
_imp__SetFileAttributesA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileAttributesA");
}
asm("leave\njmp *%0" : : "r"(_imp__SetFileAttributesA));
}

void _elf_SetFileAttributesW() asm("SetFileAttributesW");
void *_imp__SetFileAttributesW = NULL;
void _elf_SetFileAttributesW() {
load_dll_kernel32();
if (!_imp__SetFileAttributesW) {
_imp__SetFileAttributesW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileAttributesW");
}
asm("leave\njmp *%0" : : "r"(_imp__SetFileAttributesW));
}

void _elf_SetFilePointer() asm("SetFilePointer");
void *_imp__SetFilePointer = NULL;
void _elf_SetFilePointer() {
load_dll_kernel32();
if (!_imp__SetFilePointer) {
_imp__SetFilePointer = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFilePointer");
}
asm("leave\njmp *%0" : : "r"(_imp__SetFilePointer));
}

void _elf_SetFilePointerEx() asm("SetFilePointerEx");
void *_imp__SetFilePointerEx = NULL;
void _elf_SetFilePointerEx() {
load_dll_kernel32();
if (!_imp__SetFilePointerEx) {
_imp__SetFilePointerEx = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFilePointerEx");
}
asm("leave\njmp *%0" : : "r"(_imp__SetFilePointerEx));
}

void _elf_SetFileShortNameA() asm("SetFileShortNameA");
void *_imp__SetFileShortNameA = NULL;
void _elf_SetFileShortNameA() {
load_dll_kernel32();
if (!_imp__SetFileShortNameA) {
_imp__SetFileShortNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileShortNameA");
}
asm("leave\njmp *%0" : : "r"(_imp__SetFileShortNameA));
}

void _elf_SetFileShortNameW() asm("SetFileShortNameW");
void *_imp__SetFileShortNameW = NULL;
void _elf_SetFileShortNameW() {
load_dll_kernel32();
if (!_imp__SetFileShortNameW) {
_imp__SetFileShortNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileShortNameW");
}
asm("leave\njmp *%0" : : "r"(_imp__SetFileShortNameW));
}

void _elf_SetFileTime() asm("SetFileTime");
void *_imp__SetFileTime = NULL;
void _elf_SetFileTime() {
load_dll_kernel32();
if (!_imp__SetFileTime) {
_imp__SetFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileTime");
}
asm("leave\njmp *%0" : : "r"(_imp__SetFileTime));
}

void _elf_SetFileValidData() asm("SetFileValidData");
void *_imp__SetFileValidData = NULL;
void _elf_SetFileValidData() {
load_dll_kernel32();
if (!_imp__SetFileValidData) {
_imp__SetFileValidData = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileValidData");
}
asm("leave\njmp *%0" : : "r"(_imp__SetFileValidData));
}

void _elf_SetFirmwareEnvironmentVariableA() asm("SetFirmwareEnvironmentVariableA");
void *_imp__SetFirmwareEnvironmentVariableA = NULL;
void _elf_SetFirmwareEnvironmentVariableA() {
load_dll_kernel32();
if (!_imp__SetFirmwareEnvironmentVariableA) {
_imp__SetFirmwareEnvironmentVariableA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFirmwareEnvironmentVariableA");
}
asm("leave\njmp *%0" : : "r"(_imp__SetFirmwareEnvironmentVariableA));
}

void _elf_SetFirmwareEnvironmentVariableW() asm("SetFirmwareEnvironmentVariableW");
void *_imp__SetFirmwareEnvironmentVariableW = NULL;
void _elf_SetFirmwareEnvironmentVariableW() {
load_dll_kernel32();
if (!_imp__SetFirmwareEnvironmentVariableW) {
_imp__SetFirmwareEnvironmentVariableW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFirmwareEnvironmentVariableW");
}
asm("leave\njmp *%0" : : "r"(_imp__SetFirmwareEnvironmentVariableW));
}

void _elf_SetHandleContext() asm("SetHandleContext");
void *_imp__SetHandleContext = NULL;
void _elf_SetHandleContext() {
load_dll_kernel32();
if (!_imp__SetHandleContext) {
_imp__SetHandleContext = (void *) _elf_GetProcAddress(_dll_kernel32, "SetHandleContext");
}
asm("leave\njmp *%0" : : "r"(_imp__SetHandleContext));
}

void _elf_SetHandleCount() asm("SetHandleCount");
void *_imp__SetHandleCount = NULL;
void _elf_SetHandleCount() {
load_dll_kernel32();
if (!_imp__SetHandleCount) {
_imp__SetHandleCount = (void *) _elf_GetProcAddress(_dll_kernel32, "SetHandleCount");
}
asm("leave\njmp *%0" : : "r"(_imp__SetHandleCount));
}

void _elf_SetHandleInformation() asm("SetHandleInformation");
void *_imp__SetHandleInformation = NULL;
void _elf_SetHandleInformation() {
load_dll_kernel32();
if (!_imp__SetHandleInformation) {
_imp__SetHandleInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "SetHandleInformation");
}
asm("leave\njmp *%0" : : "r"(_imp__SetHandleInformation));
}

void _elf_SetInformationJobObject() asm("SetInformationJobObject");
void *_imp__SetInformationJobObject = NULL;
void _elf_SetInformationJobObject() {
load_dll_kernel32();
if (!_imp__SetInformationJobObject) {
_imp__SetInformationJobObject = (void *) _elf_GetProcAddress(_dll_kernel32, "SetInformationJobObject");
}
asm("leave\njmp *%0" : : "r"(_imp__SetInformationJobObject));
}

void _elf_SetLastConsoleEventActive() asm("SetLastConsoleEventActive");
void *_imp__SetLastConsoleEventActive = NULL;
void _elf_SetLastConsoleEventActive() {
load_dll_kernel32();
if (!_imp__SetLastConsoleEventActive) {
_imp__SetLastConsoleEventActive = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLastConsoleEventActive");
}
asm("leave\njmp *%0" : : "r"(_imp__SetLastConsoleEventActive));
}

void _elf_SetLastError() asm("SetLastError");
void *_imp__SetLastError = NULL;
void _elf_SetLastError() {
load_dll_kernel32();
if (!_imp__SetLastError) {
_imp__SetLastError = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLastError");
}
asm("leave\njmp *%0" : : "r"(_imp__SetLastError));
}

void _elf_SetLocalPrimaryComputerNameA() asm("SetLocalPrimaryComputerNameA");
void *_imp__SetLocalPrimaryComputerNameA = NULL;
void _elf_SetLocalPrimaryComputerNameA() {
load_dll_kernel32();
if (!_imp__SetLocalPrimaryComputerNameA) {
_imp__SetLocalPrimaryComputerNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLocalPrimaryComputerNameA");
}
asm("leave\njmp *%0" : : "r"(_imp__SetLocalPrimaryComputerNameA));
}

void _elf_SetLocalPrimaryComputerNameW() asm("SetLocalPrimaryComputerNameW");
void *_imp__SetLocalPrimaryComputerNameW = NULL;
void _elf_SetLocalPrimaryComputerNameW() {
load_dll_kernel32();
if (!_imp__SetLocalPrimaryComputerNameW) {
_imp__SetLocalPrimaryComputerNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLocalPrimaryComputerNameW");
}
asm("leave\njmp *%0" : : "r"(_imp__SetLocalPrimaryComputerNameW));
}

void _elf_SetLocalTime() asm("SetLocalTime");
void *_imp__SetLocalTime = NULL;
void _elf_SetLocalTime() {
load_dll_kernel32();
if (!_imp__SetLocalTime) {
_imp__SetLocalTime = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLocalTime");
}
asm("leave\njmp *%0" : : "r"(_imp__SetLocalTime));
}

void _elf_SetLocaleInfoA() asm("SetLocaleInfoA");
void *_imp__SetLocaleInfoA = NULL;
void _elf_SetLocaleInfoA() {
load_dll_kernel32();
if (!_imp__SetLocaleInfoA) {
_imp__SetLocaleInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLocaleInfoA");
}
asm("leave\njmp *%0" : : "r"(_imp__SetLocaleInfoA));
}

void _elf_SetLocaleInfoW() asm("SetLocaleInfoW");
void *_imp__SetLocaleInfoW = NULL;
void _elf_SetLocaleInfoW() {
load_dll_kernel32();
if (!_imp__SetLocaleInfoW) {
_imp__SetLocaleInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetLocaleInfoW");
}
asm("leave\njmp *%0" : : "r"(_imp__SetLocaleInfoW));
}

void _elf_SetMailslotInfo() asm("SetMailslotInfo");
void *_imp__SetMailslotInfo = NULL;
void _elf_SetMailslotInfo() {
load_dll_kernel32();
if (!_imp__SetMailslotInfo) {
_imp__SetMailslotInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "SetMailslotInfo");
}
asm("leave\njmp *%0" : : "r"(_imp__SetMailslotInfo));
}

void _elf_SetMessageWaitingIndicator() asm("SetMessageWaitingIndicator");
void *_imp__SetMessageWaitingIndicator = NULL;
void _elf_SetMessageWaitingIndicator() {
load_dll_kernel32();
if (!_imp__SetMessageWaitingIndicator) {
_imp__SetMessageWaitingIndicator = (void *) _elf_GetProcAddress(_dll_kernel32, "SetMessageWaitingIndicator");
}
asm("leave\njmp *%0" : : "r"(_imp__SetMessageWaitingIndicator));
}

void _elf_SetNamedPipeHandleState() asm("SetNamedPipeHandleState");
void *_imp__SetNamedPipeHandleState = NULL;
void _elf_SetNamedPipeHandleState() {
load_dll_kernel32();
if (!_imp__SetNamedPipeHandleState) {
_imp__SetNamedPipeHandleState = (void *) _elf_GetProcAddress(_dll_kernel32, "SetNamedPipeHandleState");
}
asm("leave\njmp *%0" : : "r"(_imp__SetNamedPipeHandleState));
}

void _elf_SetPriorityClass() asm("SetPriorityClass");
void *_imp__SetPriorityClass = NULL;
void _elf_SetPriorityClass() {
load_dll_kernel32();
if (!_imp__SetPriorityClass) {
_imp__SetPriorityClass = (void *) _elf_GetProcAddress(_dll_kernel32, "SetPriorityClass");
}
asm("leave\njmp *%0" : : "r"(_imp__SetPriorityClass));
}

void _elf_SetProcessAffinityMask() asm("SetProcessAffinityMask");
void *_imp__SetProcessAffinityMask = NULL;
void _elf_SetProcessAffinityMask() {
load_dll_kernel32();
if (!_imp__SetProcessAffinityMask) {
_imp__SetProcessAffinityMask = (void *) _elf_GetProcAddress(_dll_kernel32, "SetProcessAffinityMask");
}
asm("leave\njmp *%0" : : "r"(_imp__SetProcessAffinityMask));
}

void _elf_SetProcessPriorityBoost() asm("SetProcessPriorityBoost");
void *_imp__SetProcessPriorityBoost = NULL;
void _elf_SetProcessPriorityBoost() {
load_dll_kernel32();
if (!_imp__SetProcessPriorityBoost) {
_imp__SetProcessPriorityBoost = (void *) _elf_GetProcAddress(_dll_kernel32, "SetProcessPriorityBoost");
}
asm("leave\njmp *%0" : : "r"(_imp__SetProcessPriorityBoost));
}

void _elf_SetProcessShutdownParameters() asm("SetProcessShutdownParameters");
void *_imp__SetProcessShutdownParameters = NULL;
void _elf_SetProcessShutdownParameters() {
load_dll_kernel32();
if (!_imp__SetProcessShutdownParameters) {
_imp__SetProcessShutdownParameters = (void *) _elf_GetProcAddress(_dll_kernel32, "SetProcessShutdownParameters");
}
asm("leave\njmp *%0" : : "r"(_imp__SetProcessShutdownParameters));
}

void _elf_SetProcessWorkingSetSize() asm("SetProcessWorkingSetSize");
void *_imp__SetProcessWorkingSetSize = NULL;
void _elf_SetProcessWorkingSetSize() {
load_dll_kernel32();
if (!_imp__SetProcessWorkingSetSize) {
_imp__SetProcessWorkingSetSize = (void *) _elf_GetProcAddress(_dll_kernel32, "SetProcessWorkingSetSize");
}
asm("leave\njmp *%0" : : "r"(_imp__SetProcessWorkingSetSize));
}

void _elf_SetStdHandle() asm("SetStdHandle");
void *_imp__SetStdHandle = NULL;
void _elf_SetStdHandle() {
load_dll_kernel32();
if (!_imp__SetStdHandle) {
_imp__SetStdHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "SetStdHandle");
}
asm("leave\njmp *%0" : : "r"(_imp__SetStdHandle));
}

void _elf_SetSystemPowerState() asm("SetSystemPowerState");
void *_imp__SetSystemPowerState = NULL;
void _elf_SetSystemPowerState() {
load_dll_kernel32();
if (!_imp__SetSystemPowerState) {
_imp__SetSystemPowerState = (void *) _elf_GetProcAddress(_dll_kernel32, "SetSystemPowerState");
}
asm("leave\njmp *%0" : : "r"(_imp__SetSystemPowerState));
}

void _elf_SetSystemTime() asm("SetSystemTime");
void *_imp__SetSystemTime = NULL;
void _elf_SetSystemTime() {
load_dll_kernel32();
if (!_imp__SetSystemTime) {
_imp__SetSystemTime = (void *) _elf_GetProcAddress(_dll_kernel32, "SetSystemTime");
}
asm("leave\njmp *%0" : : "r"(_imp__SetSystemTime));
}

void _elf_SetSystemTimeAdjustment() asm("SetSystemTimeAdjustment");
void *_imp__SetSystemTimeAdjustment = NULL;
void _elf_SetSystemTimeAdjustment() {
load_dll_kernel32();
if (!_imp__SetSystemTimeAdjustment) {
_imp__SetSystemTimeAdjustment = (void *) _elf_GetProcAddress(_dll_kernel32, "SetSystemTimeAdjustment");
}
asm("leave\njmp *%0" : : "r"(_imp__SetSystemTimeAdjustment));
}

void _elf_SetTapeParameters() asm("SetTapeParameters");
void *_imp__SetTapeParameters = NULL;
void _elf_SetTapeParameters() {
load_dll_kernel32();
if (!_imp__SetTapeParameters) {
_imp__SetTapeParameters = (void *) _elf_GetProcAddress(_dll_kernel32, "SetTapeParameters");
}
asm("leave\njmp *%0" : : "r"(_imp__SetTapeParameters));
}

void _elf_SetTapePosition() asm("SetTapePosition");
void *_imp__SetTapePosition = NULL;
void _elf_SetTapePosition() {
load_dll_kernel32();
if (!_imp__SetTapePosition) {
_imp__SetTapePosition = (void *) _elf_GetProcAddress(_dll_kernel32, "SetTapePosition");
}
asm("leave\njmp *%0" : : "r"(_imp__SetTapePosition));
}

void _elf_SetTermsrvAppInstallMode() asm("SetTermsrvAppInstallMode");
void *_imp__SetTermsrvAppInstallMode = NULL;
void _elf_SetTermsrvAppInstallMode() {
load_dll_kernel32();
if (!_imp__SetTermsrvAppInstallMode) {
_imp__SetTermsrvAppInstallMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetTermsrvAppInstallMode");
}
asm("leave\njmp *%0" : : "r"(_imp__SetTermsrvAppInstallMode));
}

void _elf_SetThreadAffinityMask() asm("SetThreadAffinityMask");
void *_imp__SetThreadAffinityMask = NULL;
void _elf_SetThreadAffinityMask() {
load_dll_kernel32();
if (!_imp__SetThreadAffinityMask) {
_imp__SetThreadAffinityMask = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadAffinityMask");
}
asm("leave\njmp *%0" : : "r"(_imp__SetThreadAffinityMask));
}

void _elf_SetThreadContext() asm("SetThreadContext");
void *_imp__SetThreadContext = NULL;
void _elf_SetThreadContext() {
load_dll_kernel32();
if (!_imp__SetThreadContext) {
_imp__SetThreadContext = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadContext");
}
asm("leave\njmp *%0" : : "r"(_imp__SetThreadContext));
}

void _elf_SetThreadExecutionState() asm("SetThreadExecutionState");
void *_imp__SetThreadExecutionState = NULL;
void _elf_SetThreadExecutionState() {
load_dll_kernel32();
if (!_imp__SetThreadExecutionState) {
_imp__SetThreadExecutionState = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadExecutionState");
}
asm("leave\njmp *%0" : : "r"(_imp__SetThreadExecutionState));
}

void _elf_SetThreadIdealProcessor() asm("SetThreadIdealProcessor");
void *_imp__SetThreadIdealProcessor = NULL;
void _elf_SetThreadIdealProcessor() {
load_dll_kernel32();
if (!_imp__SetThreadIdealProcessor) {
_imp__SetThreadIdealProcessor = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadIdealProcessor");
}
asm("leave\njmp *%0" : : "r"(_imp__SetThreadIdealProcessor));
}

void _elf_SetThreadLocale() asm("SetThreadLocale");
void *_imp__SetThreadLocale = NULL;
void _elf_SetThreadLocale() {
load_dll_kernel32();
if (!_imp__SetThreadLocale) {
_imp__SetThreadLocale = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadLocale");
}
asm("leave\njmp *%0" : : "r"(_imp__SetThreadLocale));
}

void _elf_SetThreadPriority() asm("SetThreadPriority");
void *_imp__SetThreadPriority = NULL;
void _elf_SetThreadPriority() {
load_dll_kernel32();
if (!_imp__SetThreadPriority) {
_imp__SetThreadPriority = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadPriority");
}
asm("leave\njmp *%0" : : "r"(_imp__SetThreadPriority));
}

void _elf_SetThreadPriorityBoost() asm("SetThreadPriorityBoost");
void *_imp__SetThreadPriorityBoost = NULL;
void _elf_SetThreadPriorityBoost() {
load_dll_kernel32();
if (!_imp__SetThreadPriorityBoost) {
_imp__SetThreadPriorityBoost = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadPriorityBoost");
}
asm("leave\njmp *%0" : : "r"(_imp__SetThreadPriorityBoost));
}

void _elf_SetThreadUILanguage() asm("SetThreadUILanguage");
void *_imp__SetThreadUILanguage = NULL;
void _elf_SetThreadUILanguage() {
load_dll_kernel32();
if (!_imp__SetThreadUILanguage) {
_imp__SetThreadUILanguage = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadUILanguage");
}
asm("leave\njmp *%0" : : "r"(_imp__SetThreadUILanguage));
}

void _elf_SetTimeZoneInformation() asm("SetTimeZoneInformation");
void *_imp__SetTimeZoneInformation = NULL;
void _elf_SetTimeZoneInformation() {
load_dll_kernel32();
if (!_imp__SetTimeZoneInformation) {
_imp__SetTimeZoneInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "SetTimeZoneInformation");
}
asm("leave\njmp *%0" : : "r"(_imp__SetTimeZoneInformation));
}

void _elf_SetTimerQueueTimer() asm("SetTimerQueueTimer");
void *_imp__SetTimerQueueTimer = NULL;
void _elf_SetTimerQueueTimer() {
load_dll_kernel32();
if (!_imp__SetTimerQueueTimer) {
_imp__SetTimerQueueTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "SetTimerQueueTimer");
}
asm("leave\njmp *%0" : : "r"(_imp__SetTimerQueueTimer));
}

void _elf_SetUnhandledExceptionFilter() asm("SetUnhandledExceptionFilter");
void *_imp__SetUnhandledExceptionFilter = NULL;
void _elf_SetUnhandledExceptionFilter() {
load_dll_kernel32();
if (!_imp__SetUnhandledExceptionFilter) {
_imp__SetUnhandledExceptionFilter = (void *) _elf_GetProcAddress(_dll_kernel32, "SetUnhandledExceptionFilter");
}
asm("leave\njmp *%0" : : "r"(_imp__SetUnhandledExceptionFilter));
}

void _elf_SetUserGeoID() asm("SetUserGeoID");
void *_imp__SetUserGeoID = NULL;
void _elf_SetUserGeoID() {
load_dll_kernel32();
if (!_imp__SetUserGeoID) {
_imp__SetUserGeoID = (void *) _elf_GetProcAddress(_dll_kernel32, "SetUserGeoID");
}
asm("leave\njmp *%0" : : "r"(_imp__SetUserGeoID));
}

void _elf_SetVDMCurrentDirectories() asm("SetVDMCurrentDirectories");
void *_imp__SetVDMCurrentDirectories = NULL;
void _elf_SetVDMCurrentDirectories() {
load_dll_kernel32();
if (!_imp__SetVDMCurrentDirectories) {
_imp__SetVDMCurrentDirectories = (void *) _elf_GetProcAddress(_dll_kernel32, "SetVDMCurrentDirectories");
}
asm("leave\njmp *%0" : : "r"(_imp__SetVDMCurrentDirectories));
}

void _elf_SetVolumeLabelA() asm("SetVolumeLabelA");
void *_imp__SetVolumeLabelA = NULL;
void _elf_SetVolumeLabelA() {
load_dll_kernel32();
if (!_imp__SetVolumeLabelA) {
_imp__SetVolumeLabelA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetVolumeLabelA");
}
asm("leave\njmp *%0" : : "r"(_imp__SetVolumeLabelA));
}

void _elf_SetVolumeLabelW() asm("SetVolumeLabelW");
void *_imp__SetVolumeLabelW = NULL;
void _elf_SetVolumeLabelW() {
load_dll_kernel32();
if (!_imp__SetVolumeLabelW) {
_imp__SetVolumeLabelW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetVolumeLabelW");
}
asm("leave\njmp *%0" : : "r"(_imp__SetVolumeLabelW));
}

void _elf_SetVolumeMountPointA() asm("SetVolumeMountPointA");
void *_imp__SetVolumeMountPointA = NULL;
void _elf_SetVolumeMountPointA() {
load_dll_kernel32();
if (!_imp__SetVolumeMountPointA) {
_imp__SetVolumeMountPointA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetVolumeMountPointA");
}
asm("leave\njmp *%0" : : "r"(_imp__SetVolumeMountPointA));
}

void _elf_SetVolumeMountPointW() asm("SetVolumeMountPointW");
void *_imp__SetVolumeMountPointW = NULL;
void _elf_SetVolumeMountPointW() {
load_dll_kernel32();
if (!_imp__SetVolumeMountPointW) {
_imp__SetVolumeMountPointW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetVolumeMountPointW");
}
asm("leave\njmp *%0" : : "r"(_imp__SetVolumeMountPointW));
}

void _elf_SetWaitableTimer() asm("SetWaitableTimer");
void *_imp__SetWaitableTimer = NULL;
void _elf_SetWaitableTimer() {
load_dll_kernel32();
if (!_imp__SetWaitableTimer) {
_imp__SetWaitableTimer = (void *) _elf_GetProcAddress(_dll_kernel32, "SetWaitableTimer");
}
asm("leave\njmp *%0" : : "r"(_imp__SetWaitableTimer));
}

void _elf_SetupComm() asm("SetupComm");
void *_imp__SetupComm = NULL;
void _elf_SetupComm() {
load_dll_kernel32();
if (!_imp__SetupComm) {
_imp__SetupComm = (void *) _elf_GetProcAddress(_dll_kernel32, "SetupComm");
}
asm("leave\njmp *%0" : : "r"(_imp__SetupComm));
}

void _elf_ShowConsoleCursor() asm("ShowConsoleCursor");
void *_imp__ShowConsoleCursor = NULL;
void _elf_ShowConsoleCursor() {
load_dll_kernel32();
if (!_imp__ShowConsoleCursor) {
_imp__ShowConsoleCursor = (void *) _elf_GetProcAddress(_dll_kernel32, "ShowConsoleCursor");
}
asm("leave\njmp *%0" : : "r"(_imp__ShowConsoleCursor));
}

void _elf_SignalObjectAndWait() asm("SignalObjectAndWait");
void *_imp__SignalObjectAndWait = NULL;
void _elf_SignalObjectAndWait() {
load_dll_kernel32();
if (!_imp__SignalObjectAndWait) {
_imp__SignalObjectAndWait = (void *) _elf_GetProcAddress(_dll_kernel32, "SignalObjectAndWait");
}
asm("leave\njmp *%0" : : "r"(_imp__SignalObjectAndWait));
}

void _elf_SizeofResource() asm("SizeofResource");
void *_imp__SizeofResource = NULL;
void _elf_SizeofResource() {
load_dll_kernel32();
if (!_imp__SizeofResource) {
_imp__SizeofResource = (void *) _elf_GetProcAddress(_dll_kernel32, "SizeofResource");
}
asm("leave\njmp *%0" : : "r"(_imp__SizeofResource));
}

void _elf_Sleep() asm("Sleep");
void *_imp__Sleep = NULL;
void _elf_Sleep() {
load_dll_kernel32();
if (!_imp__Sleep) {
_imp__Sleep = (void *) _elf_GetProcAddress(_dll_kernel32, "Sleep");
}
asm("leave\njmp *%0" : : "r"(_imp__Sleep));
}

void _elf_SleepEx() asm("SleepEx");
void *_imp__SleepEx = NULL;
void _elf_SleepEx() {
load_dll_kernel32();
if (!_imp__SleepEx) {
_imp__SleepEx = (void *) _elf_GetProcAddress(_dll_kernel32, "SleepEx");
}
asm("leave\njmp *%0" : : "r"(_imp__SleepEx));
}

void _elf_SuspendThread() asm("SuspendThread");
void *_imp__SuspendThread = NULL;
void _elf_SuspendThread() {
load_dll_kernel32();
if (!_imp__SuspendThread) {
_imp__SuspendThread = (void *) _elf_GetProcAddress(_dll_kernel32, "SuspendThread");
}
asm("leave\njmp *%0" : : "r"(_imp__SuspendThread));
}

void _elf_SwitchToFiber() asm("SwitchToFiber");
void *_imp__SwitchToFiber = NULL;
void _elf_SwitchToFiber() {
load_dll_kernel32();
if (!_imp__SwitchToFiber) {
_imp__SwitchToFiber = (void *) _elf_GetProcAddress(_dll_kernel32, "SwitchToFiber");
}
asm("leave\njmp *%0" : : "r"(_imp__SwitchToFiber));
}

void _elf_SwitchToThread() asm("SwitchToThread");
void *_imp__SwitchToThread = NULL;
void _elf_SwitchToThread() {
load_dll_kernel32();
if (!_imp__SwitchToThread) {
_imp__SwitchToThread = (void *) _elf_GetProcAddress(_dll_kernel32, "SwitchToThread");
}
asm("leave\njmp *%0" : : "r"(_imp__SwitchToThread));
}

void _elf_SystemTimeToFileTime() asm("SystemTimeToFileTime");
void *_imp__SystemTimeToFileTime = NULL;
void _elf_SystemTimeToFileTime() {
load_dll_kernel32();
if (!_imp__SystemTimeToFileTime) {
_imp__SystemTimeToFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "SystemTimeToFileTime");
}
asm("leave\njmp *%0" : : "r"(_imp__SystemTimeToFileTime));
}

void _elf_SystemTimeToTzSpecificLocalTime() asm("SystemTimeToTzSpecificLocalTime");
void *_imp__SystemTimeToTzSpecificLocalTime = NULL;
void _elf_SystemTimeToTzSpecificLocalTime() {
load_dll_kernel32();
if (!_imp__SystemTimeToTzSpecificLocalTime) {
_imp__SystemTimeToTzSpecificLocalTime = (void *) _elf_GetProcAddress(_dll_kernel32, "SystemTimeToTzSpecificLocalTime");
}
asm("leave\njmp *%0" : : "r"(_imp__SystemTimeToTzSpecificLocalTime));
}

void _elf_TerminateJobObject() asm("TerminateJobObject");
void *_imp__TerminateJobObject = NULL;
void _elf_TerminateJobObject() {
load_dll_kernel32();
if (!_imp__TerminateJobObject) {
_imp__TerminateJobObject = (void *) _elf_GetProcAddress(_dll_kernel32, "TerminateJobObject");
}
asm("leave\njmp *%0" : : "r"(_imp__TerminateJobObject));
}

void _elf_TerminateProcess() asm("TerminateProcess");
void *_imp__TerminateProcess = NULL;
void _elf_TerminateProcess() {
load_dll_kernel32();
if (!_imp__TerminateProcess) {
_imp__TerminateProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "TerminateProcess");
}
asm("leave\njmp *%0" : : "r"(_imp__TerminateProcess));
}

void _elf_TerminateThread() asm("TerminateThread");
void *_imp__TerminateThread = NULL;
void _elf_TerminateThread() {
load_dll_kernel32();
if (!_imp__TerminateThread) {
_imp__TerminateThread = (void *) _elf_GetProcAddress(_dll_kernel32, "TerminateThread");
}
asm("leave\njmp *%0" : : "r"(_imp__TerminateThread));
}

void _elf_TermsrvAppInstallMode() asm("TermsrvAppInstallMode");
void *_imp__TermsrvAppInstallMode = NULL;
void _elf_TermsrvAppInstallMode() {
load_dll_kernel32();
if (!_imp__TermsrvAppInstallMode) {
_imp__TermsrvAppInstallMode = (void *) _elf_GetProcAddress(_dll_kernel32, "TermsrvAppInstallMode");
}
asm("leave\njmp *%0" : : "r"(_imp__TermsrvAppInstallMode));
}

void _elf_Thread32First() asm("Thread32First");
void *_imp__Thread32First = NULL;
void _elf_Thread32First() {
load_dll_kernel32();
if (!_imp__Thread32First) {
_imp__Thread32First = (void *) _elf_GetProcAddress(_dll_kernel32, "Thread32First");
}
asm("leave\njmp *%0" : : "r"(_imp__Thread32First));
}

void _elf_Thread32Next() asm("Thread32Next");
void *_imp__Thread32Next = NULL;
void _elf_Thread32Next() {
load_dll_kernel32();
if (!_imp__Thread32Next) {
_imp__Thread32Next = (void *) _elf_GetProcAddress(_dll_kernel32, "Thread32Next");
}
asm("leave\njmp *%0" : : "r"(_imp__Thread32Next));
}

void _elf_TlsAlloc() asm("TlsAlloc");
void *_imp__TlsAlloc = NULL;
void _elf_TlsAlloc() {
load_dll_kernel32();
if (!_imp__TlsAlloc) {
_imp__TlsAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "TlsAlloc");
}
asm("leave\njmp *%0" : : "r"(_imp__TlsAlloc));
}

void _elf_TlsFree() asm("TlsFree");
void *_imp__TlsFree = NULL;
void _elf_TlsFree() {
load_dll_kernel32();
if (!_imp__TlsFree) {
_imp__TlsFree = (void *) _elf_GetProcAddress(_dll_kernel32, "TlsFree");
}
asm("leave\njmp *%0" : : "r"(_imp__TlsFree));
}

void _elf_TlsGetValue() asm("TlsGetValue");
void *_imp__TlsGetValue = NULL;
void _elf_TlsGetValue() {
load_dll_kernel32();
if (!_imp__TlsGetValue) {
_imp__TlsGetValue = (void *) _elf_GetProcAddress(_dll_kernel32, "TlsGetValue");
}
asm("leave\njmp *%0" : : "r"(_imp__TlsGetValue));
}

void _elf_TlsSetValue() asm("TlsSetValue");
void *_imp__TlsSetValue = NULL;
void _elf_TlsSetValue() {
load_dll_kernel32();
if (!_imp__TlsSetValue) {
_imp__TlsSetValue = (void *) _elf_GetProcAddress(_dll_kernel32, "TlsSetValue");
}
asm("leave\njmp *%0" : : "r"(_imp__TlsSetValue));
}

void _elf_Toolhelp32ReadProcessMemory() asm("Toolhelp32ReadProcessMemory");
void *_imp__Toolhelp32ReadProcessMemory = NULL;
void _elf_Toolhelp32ReadProcessMemory() {
load_dll_kernel32();
if (!_imp__Toolhelp32ReadProcessMemory) {
_imp__Toolhelp32ReadProcessMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "Toolhelp32ReadProcessMemory");
}
asm("leave\njmp *%0" : : "r"(_imp__Toolhelp32ReadProcessMemory));
}

void _elf_TransactNamedPipe() asm("TransactNamedPipe");
void *_imp__TransactNamedPipe = NULL;
void _elf_TransactNamedPipe() {
load_dll_kernel32();
if (!_imp__TransactNamedPipe) {
_imp__TransactNamedPipe = (void *) _elf_GetProcAddress(_dll_kernel32, "TransactNamedPipe");
}
asm("leave\njmp *%0" : : "r"(_imp__TransactNamedPipe));
}

void _elf_TransmitCommChar() asm("TransmitCommChar");
void *_imp__TransmitCommChar = NULL;
void _elf_TransmitCommChar() {
load_dll_kernel32();
if (!_imp__TransmitCommChar) {
_imp__TransmitCommChar = (void *) _elf_GetProcAddress(_dll_kernel32, "TransmitCommChar");
}
asm("leave\njmp *%0" : : "r"(_imp__TransmitCommChar));
}

void _elf_TrimVirtualBuffer() asm("TrimVirtualBuffer");
void *_imp__TrimVirtualBuffer = NULL;
void _elf_TrimVirtualBuffer() {
load_dll_kernel32();
if (!_imp__TrimVirtualBuffer) {
_imp__TrimVirtualBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "TrimVirtualBuffer");
}
asm("leave\njmp *%0" : : "r"(_imp__TrimVirtualBuffer));
}

void _elf_TryEnterCriticalSection() asm("TryEnterCriticalSection");
void *_imp__TryEnterCriticalSection = NULL;
void _elf_TryEnterCriticalSection() {
load_dll_kernel32();
if (!_imp__TryEnterCriticalSection) {
_imp__TryEnterCriticalSection = (void *) _elf_GetProcAddress(_dll_kernel32, "TryEnterCriticalSection");
}
asm("leave\njmp *%0" : : "r"(_imp__TryEnterCriticalSection));
}

void _elf_TzSpecificLocalTimeToSystemTime() asm("TzSpecificLocalTimeToSystemTime");
void *_imp__TzSpecificLocalTimeToSystemTime = NULL;
void _elf_TzSpecificLocalTimeToSystemTime() {
load_dll_kernel32();
if (!_imp__TzSpecificLocalTimeToSystemTime) {
_imp__TzSpecificLocalTimeToSystemTime = (void *) _elf_GetProcAddress(_dll_kernel32, "TzSpecificLocalTimeToSystemTime");
}
asm("leave\njmp *%0" : : "r"(_imp__TzSpecificLocalTimeToSystemTime));
}

void _elf_UTRegister() asm("UTRegister");
void *_imp__UTRegister = NULL;
void _elf_UTRegister() {
load_dll_kernel32();
if (!_imp__UTRegister) {
_imp__UTRegister = (void *) _elf_GetProcAddress(_dll_kernel32, "UTRegister");
}
asm("leave\njmp *%0" : : "r"(_imp__UTRegister));
}

void _elf_UTUnRegister() asm("UTUnRegister");
void *_imp__UTUnRegister = NULL;
void _elf_UTUnRegister() {
load_dll_kernel32();
if (!_imp__UTUnRegister) {
_imp__UTUnRegister = (void *) _elf_GetProcAddress(_dll_kernel32, "UTUnRegister");
}
asm("leave\njmp *%0" : : "r"(_imp__UTUnRegister));
}

void _elf_UnhandledExceptionFilter() asm("UnhandledExceptionFilter");
void *_imp__UnhandledExceptionFilter = NULL;
void _elf_UnhandledExceptionFilter() {
load_dll_kernel32();
if (!_imp__UnhandledExceptionFilter) {
_imp__UnhandledExceptionFilter = (void *) _elf_GetProcAddress(_dll_kernel32, "UnhandledExceptionFilter");
}
asm("leave\njmp *%0" : : "r"(_imp__UnhandledExceptionFilter));
}

void _elf_UnlockFile() asm("UnlockFile");
void *_imp__UnlockFile = NULL;
void _elf_UnlockFile() {
load_dll_kernel32();
if (!_imp__UnlockFile) {
_imp__UnlockFile = (void *) _elf_GetProcAddress(_dll_kernel32, "UnlockFile");
}
asm("leave\njmp *%0" : : "r"(_imp__UnlockFile));
}

void _elf_UnlockFileEx() asm("UnlockFileEx");
void *_imp__UnlockFileEx = NULL;
void _elf_UnlockFileEx() {
load_dll_kernel32();
if (!_imp__UnlockFileEx) {
_imp__UnlockFileEx = (void *) _elf_GetProcAddress(_dll_kernel32, "UnlockFileEx");
}
asm("leave\njmp *%0" : : "r"(_imp__UnlockFileEx));
}

void _elf_UnmapViewOfFile() asm("UnmapViewOfFile");
void *_imp__UnmapViewOfFile = NULL;
void _elf_UnmapViewOfFile() {
load_dll_kernel32();
if (!_imp__UnmapViewOfFile) {
_imp__UnmapViewOfFile = (void *) _elf_GetProcAddress(_dll_kernel32, "UnmapViewOfFile");
}
asm("leave\njmp *%0" : : "r"(_imp__UnmapViewOfFile));
}

void _elf_UnregisterConsoleIME() asm("UnregisterConsoleIME");
void *_imp__UnregisterConsoleIME = NULL;
void _elf_UnregisterConsoleIME() {
load_dll_kernel32();
if (!_imp__UnregisterConsoleIME) {
_imp__UnregisterConsoleIME = (void *) _elf_GetProcAddress(_dll_kernel32, "UnregisterConsoleIME");
}
asm("leave\njmp *%0" : : "r"(_imp__UnregisterConsoleIME));
}

void _elf_UnregisterWait() asm("UnregisterWait");
void *_imp__UnregisterWait = NULL;
void _elf_UnregisterWait() {
load_dll_kernel32();
if (!_imp__UnregisterWait) {
_imp__UnregisterWait = (void *) _elf_GetProcAddress(_dll_kernel32, "UnregisterWait");
}
asm("leave\njmp *%0" : : "r"(_imp__UnregisterWait));
}

void _elf_UnregisterWaitEx() asm("UnregisterWaitEx");
void *_imp__UnregisterWaitEx = NULL;
void _elf_UnregisterWaitEx() {
load_dll_kernel32();
if (!_imp__UnregisterWaitEx) {
_imp__UnregisterWaitEx = (void *) _elf_GetProcAddress(_dll_kernel32, "UnregisterWaitEx");
}
asm("leave\njmp *%0" : : "r"(_imp__UnregisterWaitEx));
}

void _elf_UpdateResourceA() asm("UpdateResourceA");
void *_imp__UpdateResourceA = NULL;
void _elf_UpdateResourceA() {
load_dll_kernel32();
if (!_imp__UpdateResourceA) {
_imp__UpdateResourceA = (void *) _elf_GetProcAddress(_dll_kernel32, "UpdateResourceA");
}
asm("leave\njmp *%0" : : "r"(_imp__UpdateResourceA));
}

void _elf_UpdateResourceW() asm("UpdateResourceW");
void *_imp__UpdateResourceW = NULL;
void _elf_UpdateResourceW() {
load_dll_kernel32();
if (!_imp__UpdateResourceW) {
_imp__UpdateResourceW = (void *) _elf_GetProcAddress(_dll_kernel32, "UpdateResourceW");
}
asm("leave\njmp *%0" : : "r"(_imp__UpdateResourceW));
}

void _elf_VDMConsoleOperation() asm("VDMConsoleOperation");
void *_imp__VDMConsoleOperation = NULL;
void _elf_VDMConsoleOperation() {
load_dll_kernel32();
if (!_imp__VDMConsoleOperation) {
_imp__VDMConsoleOperation = (void *) _elf_GetProcAddress(_dll_kernel32, "VDMConsoleOperation");
}
asm("leave\njmp *%0" : : "r"(_imp__VDMConsoleOperation));
}

void _elf_VDMOperationStarted() asm("VDMOperationStarted");
void *_imp__VDMOperationStarted = NULL;
void _elf_VDMOperationStarted() {
load_dll_kernel32();
if (!_imp__VDMOperationStarted) {
_imp__VDMOperationStarted = (void *) _elf_GetProcAddress(_dll_kernel32, "VDMOperationStarted");
}
asm("leave\njmp *%0" : : "r"(_imp__VDMOperationStarted));
}

void _elf_ValidateLCType() asm("ValidateLCType");
void *_imp__ValidateLCType = NULL;
void _elf_ValidateLCType() {
load_dll_kernel32();
if (!_imp__ValidateLCType) {
_imp__ValidateLCType = (void *) _elf_GetProcAddress(_dll_kernel32, "ValidateLCType");
}
asm("leave\njmp *%0" : : "r"(_imp__ValidateLCType));
}

void _elf_ValidateLocale() asm("ValidateLocale");
void *_imp__ValidateLocale = NULL;
void _elf_ValidateLocale() {
load_dll_kernel32();
if (!_imp__ValidateLocale) {
_imp__ValidateLocale = (void *) _elf_GetProcAddress(_dll_kernel32, "ValidateLocale");
}
asm("leave\njmp *%0" : : "r"(_imp__ValidateLocale));
}

void _elf_VerLanguageNameA() asm("VerLanguageNameA");
void *_imp__VerLanguageNameA = NULL;
void _elf_VerLanguageNameA() {
load_dll_kernel32();
if (!_imp__VerLanguageNameA) {
_imp__VerLanguageNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "VerLanguageNameA");
}
asm("leave\njmp *%0" : : "r"(_imp__VerLanguageNameA));
}

void _elf_VerLanguageNameW() asm("VerLanguageNameW");
void *_imp__VerLanguageNameW = NULL;
void _elf_VerLanguageNameW() {
load_dll_kernel32();
if (!_imp__VerLanguageNameW) {
_imp__VerLanguageNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "VerLanguageNameW");
}
asm("leave\njmp *%0" : : "r"(_imp__VerLanguageNameW));
}

void _elf_VerSetConditionMask() asm("VerSetConditionMask");
void *_imp__VerSetConditionMask = NULL;
void _elf_VerSetConditionMask() {
load_dll_kernel32();
if (!_imp__VerSetConditionMask) {
_imp__VerSetConditionMask = (void *) _elf_GetProcAddress(_dll_kernel32, "VerSetConditionMask");
}
asm("leave\njmp *%0" : : "r"(_imp__VerSetConditionMask));
}

void _elf_VerifyConsoleIoHandle() asm("VerifyConsoleIoHandle");
void *_imp__VerifyConsoleIoHandle = NULL;
void _elf_VerifyConsoleIoHandle() {
load_dll_kernel32();
if (!_imp__VerifyConsoleIoHandle) {
_imp__VerifyConsoleIoHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "VerifyConsoleIoHandle");
}
asm("leave\njmp *%0" : : "r"(_imp__VerifyConsoleIoHandle));
}

void _elf_VerifyVersionInfoA() asm("VerifyVersionInfoA");
void *_imp__VerifyVersionInfoA = NULL;
void _elf_VerifyVersionInfoA() {
load_dll_kernel32();
if (!_imp__VerifyVersionInfoA) {
_imp__VerifyVersionInfoA = (void *) _elf_GetProcAddress(_dll_kernel32, "VerifyVersionInfoA");
}
asm("leave\njmp *%0" : : "r"(_imp__VerifyVersionInfoA));
}

void _elf_VerifyVersionInfoW() asm("VerifyVersionInfoW");
void *_imp__VerifyVersionInfoW = NULL;
void _elf_VerifyVersionInfoW() {
load_dll_kernel32();
if (!_imp__VerifyVersionInfoW) {
_imp__VerifyVersionInfoW = (void *) _elf_GetProcAddress(_dll_kernel32, "VerifyVersionInfoW");
}
asm("leave\njmp *%0" : : "r"(_imp__VerifyVersionInfoW));
}

void _elf_VirtualAlloc() asm("VirtualAlloc");
void *_imp__VirtualAlloc = NULL;
void _elf_VirtualAlloc() {
load_dll_kernel32();
if (!_imp__VirtualAlloc) {
_imp__VirtualAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualAlloc");
}
asm("leave\njmp *%0" : : "r"(_imp__VirtualAlloc));
}

void _elf_VirtualAllocEx() asm("VirtualAllocEx");
void *_imp__VirtualAllocEx = NULL;
void _elf_VirtualAllocEx() {
load_dll_kernel32();
if (!_imp__VirtualAllocEx) {
_imp__VirtualAllocEx = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualAllocEx");
}
asm("leave\njmp *%0" : : "r"(_imp__VirtualAllocEx));
}

void _elf_VirtualBufferExceptionHandler() asm("VirtualBufferExceptionHandler");
void *_imp__VirtualBufferExceptionHandler = NULL;
void _elf_VirtualBufferExceptionHandler() {
load_dll_kernel32();
if (!_imp__VirtualBufferExceptionHandler) {
_imp__VirtualBufferExceptionHandler = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualBufferExceptionHandler");
}
asm("leave\njmp *%0" : : "r"(_imp__VirtualBufferExceptionHandler));
}

void _elf_VirtualFree() asm("VirtualFree");
void *_imp__VirtualFree = NULL;
void _elf_VirtualFree() {
load_dll_kernel32();
if (!_imp__VirtualFree) {
_imp__VirtualFree = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualFree");
}
asm("leave\njmp *%0" : : "r"(_imp__VirtualFree));
}

void _elf_VirtualFreeEx() asm("VirtualFreeEx");
void *_imp__VirtualFreeEx = NULL;
void _elf_VirtualFreeEx() {
load_dll_kernel32();
if (!_imp__VirtualFreeEx) {
_imp__VirtualFreeEx = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualFreeEx");
}
asm("leave\njmp *%0" : : "r"(_imp__VirtualFreeEx));
}

void _elf_VirtualLock() asm("VirtualLock");
void *_imp__VirtualLock = NULL;
void _elf_VirtualLock() {
load_dll_kernel32();
if (!_imp__VirtualLock) {
_imp__VirtualLock = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualLock");
}
asm("leave\njmp *%0" : : "r"(_imp__VirtualLock));
}

void _elf_VirtualProtect() asm("VirtualProtect");
void *_imp__VirtualProtect = NULL;
void _elf_VirtualProtect() {
load_dll_kernel32();
if (!_imp__VirtualProtect) {
_imp__VirtualProtect = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualProtect");
}
asm("leave\njmp *%0" : : "r"(_imp__VirtualProtect));
}

void _elf_VirtualProtectEx() asm("VirtualProtectEx");
void *_imp__VirtualProtectEx = NULL;
void _elf_VirtualProtectEx() {
load_dll_kernel32();
if (!_imp__VirtualProtectEx) {
_imp__VirtualProtectEx = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualProtectEx");
}
asm("leave\njmp *%0" : : "r"(_imp__VirtualProtectEx));
}

void _elf_VirtualQuery() asm("VirtualQuery");
void *_imp__VirtualQuery = NULL;
void _elf_VirtualQuery() {
load_dll_kernel32();
if (!_imp__VirtualQuery) {
_imp__VirtualQuery = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualQuery");
}
asm("leave\njmp *%0" : : "r"(_imp__VirtualQuery));
}

void _elf_VirtualQueryEx() asm("VirtualQueryEx");
void *_imp__VirtualQueryEx = NULL;
void _elf_VirtualQueryEx() {
load_dll_kernel32();
if (!_imp__VirtualQueryEx) {
_imp__VirtualQueryEx = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualQueryEx");
}
asm("leave\njmp *%0" : : "r"(_imp__VirtualQueryEx));
}

void _elf_VirtualUnlock() asm("VirtualUnlock");
void *_imp__VirtualUnlock = NULL;
void _elf_VirtualUnlock() {
load_dll_kernel32();
if (!_imp__VirtualUnlock) {
_imp__VirtualUnlock = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualUnlock");
}
asm("leave\njmp *%0" : : "r"(_imp__VirtualUnlock));
}

void _elf_WTSGetActiveConsoleSessionId() asm("WTSGetActiveConsoleSessionId");
void *_imp__WTSGetActiveConsoleSessionId = NULL;
void _elf_WTSGetActiveConsoleSessionId() {
load_dll_kernel32();
if (!_imp__WTSGetActiveConsoleSessionId) {
_imp__WTSGetActiveConsoleSessionId = (void *) _elf_GetProcAddress(_dll_kernel32, "WTSGetActiveConsoleSessionId");
}
asm("leave\njmp *%0" : : "r"(_imp__WTSGetActiveConsoleSessionId));
}

void _elf_WaitCommEvent() asm("WaitCommEvent");
void *_imp__WaitCommEvent = NULL;
void _elf_WaitCommEvent() {
load_dll_kernel32();
if (!_imp__WaitCommEvent) {
_imp__WaitCommEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitCommEvent");
}
asm("leave\njmp *%0" : : "r"(_imp__WaitCommEvent));
}

void _elf_WaitForDebugEvent() asm("WaitForDebugEvent");
void *_imp__WaitForDebugEvent = NULL;
void _elf_WaitForDebugEvent() {
load_dll_kernel32();
if (!_imp__WaitForDebugEvent) {
_imp__WaitForDebugEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitForDebugEvent");
}
asm("leave\njmp *%0" : : "r"(_imp__WaitForDebugEvent));
}

void _elf_WaitForMultipleObjects() asm("WaitForMultipleObjects");
void *_imp__WaitForMultipleObjects = NULL;
void _elf_WaitForMultipleObjects() {
load_dll_kernel32();
if (!_imp__WaitForMultipleObjects) {
_imp__WaitForMultipleObjects = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitForMultipleObjects");
}
asm("leave\njmp *%0" : : "r"(_imp__WaitForMultipleObjects));
}

void _elf_WaitForMultipleObjectsEx() asm("WaitForMultipleObjectsEx");
void *_imp__WaitForMultipleObjectsEx = NULL;
void _elf_WaitForMultipleObjectsEx() {
load_dll_kernel32();
if (!_imp__WaitForMultipleObjectsEx) {
_imp__WaitForMultipleObjectsEx = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitForMultipleObjectsEx");
}
asm("leave\njmp *%0" : : "r"(_imp__WaitForMultipleObjectsEx));
}

void _elf_WaitForSingleObject() asm("WaitForSingleObject");
void *_imp__WaitForSingleObject = NULL;
void _elf_WaitForSingleObject() {
load_dll_kernel32();
if (!_imp__WaitForSingleObject) {
_imp__WaitForSingleObject = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitForSingleObject");
}
asm("leave\njmp *%0" : : "r"(_imp__WaitForSingleObject));
}

void _elf_WaitForSingleObjectEx() asm("WaitForSingleObjectEx");
void *_imp__WaitForSingleObjectEx = NULL;
void _elf_WaitForSingleObjectEx() {
load_dll_kernel32();
if (!_imp__WaitForSingleObjectEx) {
_imp__WaitForSingleObjectEx = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitForSingleObjectEx");
}
asm("leave\njmp *%0" : : "r"(_imp__WaitForSingleObjectEx));
}

void _elf_WaitNamedPipeA() asm("WaitNamedPipeA");
void *_imp__WaitNamedPipeA = NULL;
void _elf_WaitNamedPipeA() {
load_dll_kernel32();
if (!_imp__WaitNamedPipeA) {
_imp__WaitNamedPipeA = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitNamedPipeA");
}
asm("leave\njmp *%0" : : "r"(_imp__WaitNamedPipeA));
}

void _elf_WaitNamedPipeW() asm("WaitNamedPipeW");
void *_imp__WaitNamedPipeW = NULL;
void _elf_WaitNamedPipeW() {
load_dll_kernel32();
if (!_imp__WaitNamedPipeW) {
_imp__WaitNamedPipeW = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitNamedPipeW");
}
asm("leave\njmp *%0" : : "r"(_imp__WaitNamedPipeW));
}

void _elf_WideCharToMultiByte() asm("WideCharToMultiByte");
void *_imp__WideCharToMultiByte = NULL;
void _elf_WideCharToMultiByte() {
load_dll_kernel32();
if (!_imp__WideCharToMultiByte) {
_imp__WideCharToMultiByte = (void *) _elf_GetProcAddress(_dll_kernel32, "WideCharToMultiByte");
}
asm("leave\njmp *%0" : : "r"(_imp__WideCharToMultiByte));
}

void _elf_WinExec() asm("WinExec");
void *_imp__WinExec = NULL;
void _elf_WinExec() {
load_dll_kernel32();
if (!_imp__WinExec) {
_imp__WinExec = (void *) _elf_GetProcAddress(_dll_kernel32, "WinExec");
}
asm("leave\njmp *%0" : : "r"(_imp__WinExec));
}

void _elf_WriteConsoleA() asm("WriteConsoleA");
void *_imp__WriteConsoleA = NULL;
void _elf_WriteConsoleA() {
load_dll_kernel32();
if (!_imp__WriteConsoleA) {
_imp__WriteConsoleA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleA");
}
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleA));
}

void _elf_WriteConsoleInputA() asm("WriteConsoleInputA");
void *_imp__WriteConsoleInputA = NULL;
void _elf_WriteConsoleInputA() {
load_dll_kernel32();
if (!_imp__WriteConsoleInputA) {
_imp__WriteConsoleInputA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleInputA");
}
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleInputA));
}

void _elf_WriteConsoleInputVDMA() asm("WriteConsoleInputVDMA");
void *_imp__WriteConsoleInputVDMA = NULL;
void _elf_WriteConsoleInputVDMA() {
load_dll_kernel32();
if (!_imp__WriteConsoleInputVDMA) {
_imp__WriteConsoleInputVDMA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleInputVDMA");
}
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleInputVDMA));
}

void _elf_WriteConsoleInputVDMW() asm("WriteConsoleInputVDMW");
void *_imp__WriteConsoleInputVDMW = NULL;
void _elf_WriteConsoleInputVDMW() {
load_dll_kernel32();
if (!_imp__WriteConsoleInputVDMW) {
_imp__WriteConsoleInputVDMW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleInputVDMW");
}
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleInputVDMW));
}

void _elf_WriteConsoleInputW() asm("WriteConsoleInputW");
void *_imp__WriteConsoleInputW = NULL;
void _elf_WriteConsoleInputW() {
load_dll_kernel32();
if (!_imp__WriteConsoleInputW) {
_imp__WriteConsoleInputW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleInputW");
}
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleInputW));
}

void _elf_WriteConsoleOutputA() asm("WriteConsoleOutputA");
void *_imp__WriteConsoleOutputA = NULL;
void _elf_WriteConsoleOutputA() {
load_dll_kernel32();
if (!_imp__WriteConsoleOutputA) {
_imp__WriteConsoleOutputA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleOutputA");
}
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleOutputA));
}

void _elf_WriteConsoleOutputAttribute() asm("WriteConsoleOutputAttribute");
void *_imp__WriteConsoleOutputAttribute = NULL;
void _elf_WriteConsoleOutputAttribute() {
load_dll_kernel32();
if (!_imp__WriteConsoleOutputAttribute) {
_imp__WriteConsoleOutputAttribute = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleOutputAttribute");
}
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleOutputAttribute));
}

void _elf_WriteConsoleOutputCharacterA() asm("WriteConsoleOutputCharacterA");
void *_imp__WriteConsoleOutputCharacterA = NULL;
void _elf_WriteConsoleOutputCharacterA() {
load_dll_kernel32();
if (!_imp__WriteConsoleOutputCharacterA) {
_imp__WriteConsoleOutputCharacterA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleOutputCharacterA");
}
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleOutputCharacterA));
}

void _elf_WriteConsoleOutputCharacterW() asm("WriteConsoleOutputCharacterW");
void *_imp__WriteConsoleOutputCharacterW = NULL;
void _elf_WriteConsoleOutputCharacterW() {
load_dll_kernel32();
if (!_imp__WriteConsoleOutputCharacterW) {
_imp__WriteConsoleOutputCharacterW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleOutputCharacterW");
}
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleOutputCharacterW));
}

void _elf_WriteConsoleOutputW() asm("WriteConsoleOutputW");
void *_imp__WriteConsoleOutputW = NULL;
void _elf_WriteConsoleOutputW() {
load_dll_kernel32();
if (!_imp__WriteConsoleOutputW) {
_imp__WriteConsoleOutputW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleOutputW");
}
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleOutputW));
}

void _elf_WriteConsoleW() asm("WriteConsoleW");
void *_imp__WriteConsoleW = NULL;
void _elf_WriteConsoleW() {
load_dll_kernel32();
if (!_imp__WriteConsoleW) {
_imp__WriteConsoleW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteConsoleW");
}
asm("leave\njmp *%0" : : "r"(_imp__WriteConsoleW));
}

void _elf_WriteFile() asm("WriteFile");
void *_imp__WriteFile = NULL;
void _elf_WriteFile() {
load_dll_kernel32();
if (!_imp__WriteFile) {
_imp__WriteFile = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteFile");
}
asm("leave\njmp *%0" : : "r"(_imp__WriteFile));
}

void _elf_WriteFileEx() asm("WriteFileEx");
void *_imp__WriteFileEx = NULL;
void _elf_WriteFileEx() {
load_dll_kernel32();
if (!_imp__WriteFileEx) {
_imp__WriteFileEx = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteFileEx");
}
asm("leave\njmp *%0" : : "r"(_imp__WriteFileEx));
}

void _elf_WriteFileGather() asm("WriteFileGather");
void *_imp__WriteFileGather = NULL;
void _elf_WriteFileGather() {
load_dll_kernel32();
if (!_imp__WriteFileGather) {
_imp__WriteFileGather = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteFileGather");
}
asm("leave\njmp *%0" : : "r"(_imp__WriteFileGather));
}

void _elf_WritePrivateProfileSectionA() asm("WritePrivateProfileSectionA");
void *_imp__WritePrivateProfileSectionA = NULL;
void _elf_WritePrivateProfileSectionA() {
load_dll_kernel32();
if (!_imp__WritePrivateProfileSectionA) {
_imp__WritePrivateProfileSectionA = (void *) _elf_GetProcAddress(_dll_kernel32, "WritePrivateProfileSectionA");
}
asm("leave\njmp *%0" : : "r"(_imp__WritePrivateProfileSectionA));
}

void _elf_WritePrivateProfileSectionW() asm("WritePrivateProfileSectionW");
void *_imp__WritePrivateProfileSectionW = NULL;
void _elf_WritePrivateProfileSectionW() {
load_dll_kernel32();
if (!_imp__WritePrivateProfileSectionW) {
_imp__WritePrivateProfileSectionW = (void *) _elf_GetProcAddress(_dll_kernel32, "WritePrivateProfileSectionW");
}
asm("leave\njmp *%0" : : "r"(_imp__WritePrivateProfileSectionW));
}

void _elf_WritePrivateProfileStringA() asm("WritePrivateProfileStringA");
void *_imp__WritePrivateProfileStringA = NULL;
void _elf_WritePrivateProfileStringA() {
load_dll_kernel32();
if (!_imp__WritePrivateProfileStringA) {
_imp__WritePrivateProfileStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "WritePrivateProfileStringA");
}
asm("leave\njmp *%0" : : "r"(_imp__WritePrivateProfileStringA));
}

void _elf_WritePrivateProfileStringW() asm("WritePrivateProfileStringW");
void *_imp__WritePrivateProfileStringW = NULL;
void _elf_WritePrivateProfileStringW() {
load_dll_kernel32();
if (!_imp__WritePrivateProfileStringW) {
_imp__WritePrivateProfileStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "WritePrivateProfileStringW");
}
asm("leave\njmp *%0" : : "r"(_imp__WritePrivateProfileStringW));
}

void _elf_WritePrivateProfileStructA() asm("WritePrivateProfileStructA");
void *_imp__WritePrivateProfileStructA = NULL;
void _elf_WritePrivateProfileStructA() {
load_dll_kernel32();
if (!_imp__WritePrivateProfileStructA) {
_imp__WritePrivateProfileStructA = (void *) _elf_GetProcAddress(_dll_kernel32, "WritePrivateProfileStructA");
}
asm("leave\njmp *%0" : : "r"(_imp__WritePrivateProfileStructA));
}

void _elf_WritePrivateProfileStructW() asm("WritePrivateProfileStructW");
void *_imp__WritePrivateProfileStructW = NULL;
void _elf_WritePrivateProfileStructW() {
load_dll_kernel32();
if (!_imp__WritePrivateProfileStructW) {
_imp__WritePrivateProfileStructW = (void *) _elf_GetProcAddress(_dll_kernel32, "WritePrivateProfileStructW");
}
asm("leave\njmp *%0" : : "r"(_imp__WritePrivateProfileStructW));
}

void _elf_WriteProcessMemory() asm("WriteProcessMemory");
void *_imp__WriteProcessMemory = NULL;
void _elf_WriteProcessMemory() {
load_dll_kernel32();
if (!_imp__WriteProcessMemory) {
_imp__WriteProcessMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteProcessMemory");
}
asm("leave\njmp *%0" : : "r"(_imp__WriteProcessMemory));
}

void _elf_WriteProfileSectionA() asm("WriteProfileSectionA");
void *_imp__WriteProfileSectionA = NULL;
void _elf_WriteProfileSectionA() {
load_dll_kernel32();
if (!_imp__WriteProfileSectionA) {
_imp__WriteProfileSectionA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteProfileSectionA");
}
asm("leave\njmp *%0" : : "r"(_imp__WriteProfileSectionA));
}

void _elf_WriteProfileSectionW() asm("WriteProfileSectionW");
void *_imp__WriteProfileSectionW = NULL;
void _elf_WriteProfileSectionW() {
load_dll_kernel32();
if (!_imp__WriteProfileSectionW) {
_imp__WriteProfileSectionW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteProfileSectionW");
}
asm("leave\njmp *%0" : : "r"(_imp__WriteProfileSectionW));
}

void _elf_WriteProfileStringA() asm("WriteProfileStringA");
void *_imp__WriteProfileStringA = NULL;
void _elf_WriteProfileStringA() {
load_dll_kernel32();
if (!_imp__WriteProfileStringA) {
_imp__WriteProfileStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteProfileStringA");
}
asm("leave\njmp *%0" : : "r"(_imp__WriteProfileStringA));
}

void _elf_WriteProfileStringW() asm("WriteProfileStringW");
void *_imp__WriteProfileStringW = NULL;
void _elf_WriteProfileStringW() {
load_dll_kernel32();
if (!_imp__WriteProfileStringW) {
_imp__WriteProfileStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteProfileStringW");
}
asm("leave\njmp *%0" : : "r"(_imp__WriteProfileStringW));
}

void _elf_WriteTapemark() asm("WriteTapemark");
void *_imp__WriteTapemark = NULL;
void _elf_WriteTapemark() {
load_dll_kernel32();
if (!_imp__WriteTapemark) {
_imp__WriteTapemark = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteTapemark");
}
asm("leave\njmp *%0" : : "r"(_imp__WriteTapemark));
}

void _elf_ZombifyActCtx() asm("ZombifyActCtx");
void *_imp__ZombifyActCtx = NULL;
void _elf_ZombifyActCtx() {
load_dll_kernel32();
if (!_imp__ZombifyActCtx) {
_imp__ZombifyActCtx = (void *) _elf_GetProcAddress(_dll_kernel32, "ZombifyActCtx");
}
asm("leave\njmp *%0" : : "r"(_imp__ZombifyActCtx));
}

void _elf__hread() asm("hread");
void *_imp___hread = NULL;
void _elf__hread() {
load_dll_kernel32();
if (!_imp___hread) {
_imp___hread = (void *) _elf_GetProcAddress(_dll_kernel32, "_hread");
}
asm("leave\njmp *%0" : : "r"(_imp___hread));
}

void _elf__hwrite() asm("hwrite");
void *_imp___hwrite = NULL;
void _elf__hwrite() {
load_dll_kernel32();
if (!_imp___hwrite) {
_imp___hwrite = (void *) _elf_GetProcAddress(_dll_kernel32, "_hwrite");
}
asm("leave\njmp *%0" : : "r"(_imp___hwrite));
}

void _elf__lclose() asm("lclose");
void *_imp___lclose = NULL;
void _elf__lclose() {
load_dll_kernel32();
if (!_imp___lclose) {
_imp___lclose = (void *) _elf_GetProcAddress(_dll_kernel32, "_lclose");
}
asm("leave\njmp *%0" : : "r"(_imp___lclose));
}

void _elf__lcreat() asm("lcreat");
void *_imp___lcreat = NULL;
void _elf__lcreat() {
load_dll_kernel32();
if (!_imp___lcreat) {
_imp___lcreat = (void *) _elf_GetProcAddress(_dll_kernel32, "_lcreat");
}
asm("leave\njmp *%0" : : "r"(_imp___lcreat));
}

void _elf__llseek() asm("llseek");
void *_imp___llseek = NULL;
void _elf__llseek() {
load_dll_kernel32();
if (!_imp___llseek) {
_imp___llseek = (void *) _elf_GetProcAddress(_dll_kernel32, "_llseek");
}
asm("leave\njmp *%0" : : "r"(_imp___llseek));
}

void _elf__lopen() asm("lopen");
void *_imp___lopen = NULL;
void _elf__lopen() {
load_dll_kernel32();
if (!_imp___lopen) {
_imp___lopen = (void *) _elf_GetProcAddress(_dll_kernel32, "_lopen");
}
asm("leave\njmp *%0" : : "r"(_imp___lopen));
}

void _elf__lread() asm("lread");
void *_imp___lread = NULL;
void _elf__lread() {
load_dll_kernel32();
if (!_imp___lread) {
_imp___lread = (void *) _elf_GetProcAddress(_dll_kernel32, "_lread");
}
asm("leave\njmp *%0" : : "r"(_imp___lread));
}

void _elf__lwrite() asm("lwrite");
void *_imp___lwrite = NULL;
void _elf__lwrite() {
load_dll_kernel32();
if (!_imp___lwrite) {
_imp___lwrite = (void *) _elf_GetProcAddress(_dll_kernel32, "_lwrite");
}
asm("leave\njmp *%0" : : "r"(_imp___lwrite));
}

void _elf_lstrcat() asm("lstrcat");
void *_imp__lstrcat = NULL;
void _elf_lstrcat() {
load_dll_kernel32();
if (!_imp__lstrcat) {
_imp__lstrcat = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcat");
}
asm("leave\njmp *%0" : : "r"(_imp__lstrcat));
}

void _elf_lstrcatA() asm("lstrcatA");
void *_imp__lstrcatA = NULL;
void _elf_lstrcatA() {
load_dll_kernel32();
if (!_imp__lstrcatA) {
_imp__lstrcatA = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcatA");
}
asm("leave\njmp *%0" : : "r"(_imp__lstrcatA));
}

void _elf_lstrcatW() asm("lstrcatW");
void *_imp__lstrcatW = NULL;
void _elf_lstrcatW() {
load_dll_kernel32();
if (!_imp__lstrcatW) {
_imp__lstrcatW = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcatW");
}
asm("leave\njmp *%0" : : "r"(_imp__lstrcatW));
}

void _elf_lstrcmp() asm("lstrcmp");
void *_imp__lstrcmp = NULL;
void _elf_lstrcmp() {
load_dll_kernel32();
if (!_imp__lstrcmp) {
_imp__lstrcmp = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcmp");
}
asm("leave\njmp *%0" : : "r"(_imp__lstrcmp));
}

void _elf_lstrcmpA() asm("lstrcmpA");
void *_imp__lstrcmpA = NULL;
void _elf_lstrcmpA() {
load_dll_kernel32();
if (!_imp__lstrcmpA) {
_imp__lstrcmpA = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcmpA");
}
asm("leave\njmp *%0" : : "r"(_imp__lstrcmpA));
}

void _elf_lstrcmpW() asm("lstrcmpW");
void *_imp__lstrcmpW = NULL;
void _elf_lstrcmpW() {
load_dll_kernel32();
if (!_imp__lstrcmpW) {
_imp__lstrcmpW = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcmpW");
}
asm("leave\njmp *%0" : : "r"(_imp__lstrcmpW));
}

void _elf_lstrcmpi() asm("lstrcmpi");
void *_imp__lstrcmpi = NULL;
void _elf_lstrcmpi() {
load_dll_kernel32();
if (!_imp__lstrcmpi) {
_imp__lstrcmpi = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcmpi");
}
asm("leave\njmp *%0" : : "r"(_imp__lstrcmpi));
}

void _elf_lstrcmpiA() asm("lstrcmpiA");
void *_imp__lstrcmpiA = NULL;
void _elf_lstrcmpiA() {
load_dll_kernel32();
if (!_imp__lstrcmpiA) {
_imp__lstrcmpiA = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcmpiA");
}
asm("leave\njmp *%0" : : "r"(_imp__lstrcmpiA));
}

void _elf_lstrcmpiW() asm("lstrcmpiW");
void *_imp__lstrcmpiW = NULL;
void _elf_lstrcmpiW() {
load_dll_kernel32();
if (!_imp__lstrcmpiW) {
_imp__lstrcmpiW = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcmpiW");
}
asm("leave\njmp *%0" : : "r"(_imp__lstrcmpiW));
}

void _elf_lstrcpy() asm("lstrcpy");
void *_imp__lstrcpy = NULL;
void _elf_lstrcpy() {
load_dll_kernel32();
if (!_imp__lstrcpy) {
_imp__lstrcpy = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcpy");
}
asm("leave\njmp *%0" : : "r"(_imp__lstrcpy));
}

void _elf_lstrcpyA() asm("lstrcpyA");
void *_imp__lstrcpyA = NULL;
void _elf_lstrcpyA() {
load_dll_kernel32();
if (!_imp__lstrcpyA) {
_imp__lstrcpyA = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcpyA");
}
asm("leave\njmp *%0" : : "r"(_imp__lstrcpyA));
}

void _elf_lstrcpyW() asm("lstrcpyW");
void *_imp__lstrcpyW = NULL;
void _elf_lstrcpyW() {
load_dll_kernel32();
if (!_imp__lstrcpyW) {
_imp__lstrcpyW = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcpyW");
}
asm("leave\njmp *%0" : : "r"(_imp__lstrcpyW));
}

void _elf_lstrcpyn() asm("lstrcpyn");
void *_imp__lstrcpyn = NULL;
void _elf_lstrcpyn() {
load_dll_kernel32();
if (!_imp__lstrcpyn) {
_imp__lstrcpyn = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcpyn");
}
asm("leave\njmp *%0" : : "r"(_imp__lstrcpyn));
}

void _elf_lstrcpynA() asm("lstrcpynA");
void *_imp__lstrcpynA = NULL;
void _elf_lstrcpynA() {
load_dll_kernel32();
if (!_imp__lstrcpynA) {
_imp__lstrcpynA = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcpynA");
}
asm("leave\njmp *%0" : : "r"(_imp__lstrcpynA));
}

void _elf_lstrcpynW() asm("lstrcpynW");
void *_imp__lstrcpynW = NULL;
void _elf_lstrcpynW() {
load_dll_kernel32();
if (!_imp__lstrcpynW) {
_imp__lstrcpynW = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrcpynW");
}
asm("leave\njmp *%0" : : "r"(_imp__lstrcpynW));
}

void _elf_lstrlen() asm("lstrlen");
void *_imp__lstrlen = NULL;
void _elf_lstrlen() {
load_dll_kernel32();
if (!_imp__lstrlen) {
_imp__lstrlen = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrlen");
}
asm("leave\njmp *%0" : : "r"(_imp__lstrlen));
}

void _elf_lstrlenA() asm("lstrlenA");
void *_imp__lstrlenA = NULL;
void _elf_lstrlenA() {
load_dll_kernel32();
if (!_imp__lstrlenA) {
_imp__lstrlenA = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrlenA");
}
asm("leave\njmp *%0" : : "r"(_imp__lstrlenA));
}

void _elf_lstrlenW() asm("lstrlenW");
void *_imp__lstrlenW = NULL;
void _elf_lstrlenW() {
load_dll_kernel32();
if (!_imp__lstrlenW) {
_imp__lstrlenW = (void *) _elf_GetProcAddress(_dll_kernel32, "lstrlenW");
}
asm("leave\njmp *%0" : : "r"(_imp__lstrlenW));
}

