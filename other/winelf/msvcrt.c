#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>

extern WINBASEAPI HMODULE WINAPI (*_elf_LoadLibraryA)(LPCSTR);
extern WINBASEAPI HMODULE WINAPI (*_elf_GetModuleHandleA)(LPCSTR);
extern WINBASEAPI FARPROC WINAPI (*_elf_GetProcAddress)(HMODULE,LPCSTR);

HMODULE _dll_msvcrt = NULL;

void load_dll_msvcrt() {
if (!_dll_msvcrt) {
_dll_msvcrt = _elf_LoadLibraryA("msvcrt");
}
}

void _elf__CIacos() asm("_CIacos");
void _elf__CIacos() {
static void *_vptr__CIacos = NULL;
load_dll_msvcrt();
if (!_vptr__CIacos) {
_vptr__CIacos = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIacos");
}
asm("leave\njmp *%0" : : "r"(_vptr__CIacos));
}

void _elf__CIasin() asm("_CIasin");
void _elf__CIasin() {
static void *_vptr__CIasin = NULL;
load_dll_msvcrt();
if (!_vptr__CIasin) {
_vptr__CIasin = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIasin");
}
asm("leave\njmp *%0" : : "r"(_vptr__CIasin));
}

void _elf__CIatan() asm("_CIatan");
void _elf__CIatan() {
static void *_vptr__CIatan = NULL;
load_dll_msvcrt();
if (!_vptr__CIatan) {
_vptr__CIatan = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIatan");
}
asm("leave\njmp *%0" : : "r"(_vptr__CIatan));
}

void _elf__CIatan2() asm("_CIatan2");
void _elf__CIatan2() {
static void *_vptr__CIatan2 = NULL;
load_dll_msvcrt();
if (!_vptr__CIatan2) {
_vptr__CIatan2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIatan2");
}
asm("leave\njmp *%0" : : "r"(_vptr__CIatan2));
}

void _elf__CIcos() asm("_CIcos");
void _elf__CIcos() {
static void *_vptr__CIcos = NULL;
load_dll_msvcrt();
if (!_vptr__CIcos) {
_vptr__CIcos = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIcos");
}
asm("leave\njmp *%0" : : "r"(_vptr__CIcos));
}

void _elf__CIcosh() asm("_CIcosh");
void _elf__CIcosh() {
static void *_vptr__CIcosh = NULL;
load_dll_msvcrt();
if (!_vptr__CIcosh) {
_vptr__CIcosh = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIcosh");
}
asm("leave\njmp *%0" : : "r"(_vptr__CIcosh));
}

void _elf__CIexp() asm("_CIexp");
void _elf__CIexp() {
static void *_vptr__CIexp = NULL;
load_dll_msvcrt();
if (!_vptr__CIexp) {
_vptr__CIexp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIexp");
}
asm("leave\njmp *%0" : : "r"(_vptr__CIexp));
}

void _elf__CIfmod() asm("_CIfmod");
void _elf__CIfmod() {
static void *_vptr__CIfmod = NULL;
load_dll_msvcrt();
if (!_vptr__CIfmod) {
_vptr__CIfmod = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIfmod");
}
asm("leave\njmp *%0" : : "r"(_vptr__CIfmod));
}

void _elf__CIlog() asm("_CIlog");
void _elf__CIlog() {
static void *_vptr__CIlog = NULL;
load_dll_msvcrt();
if (!_vptr__CIlog) {
_vptr__CIlog = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIlog");
}
asm("leave\njmp *%0" : : "r"(_vptr__CIlog));
}

void _elf__CIlog10() asm("_CIlog10");
void _elf__CIlog10() {
static void *_vptr__CIlog10 = NULL;
load_dll_msvcrt();
if (!_vptr__CIlog10) {
_vptr__CIlog10 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIlog10");
}
asm("leave\njmp *%0" : : "r"(_vptr__CIlog10));
}

void _elf__CIpow() asm("_CIpow");
void _elf__CIpow() {
static void *_vptr__CIpow = NULL;
load_dll_msvcrt();
if (!_vptr__CIpow) {
_vptr__CIpow = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIpow");
}
asm("leave\njmp *%0" : : "r"(_vptr__CIpow));
}

void _elf__CIsin() asm("_CIsin");
void _elf__CIsin() {
static void *_vptr__CIsin = NULL;
load_dll_msvcrt();
if (!_vptr__CIsin) {
_vptr__CIsin = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIsin");
}
asm("leave\njmp *%0" : : "r"(_vptr__CIsin));
}

void _elf__CIsinh() asm("_CIsinh");
void _elf__CIsinh() {
static void *_vptr__CIsinh = NULL;
load_dll_msvcrt();
if (!_vptr__CIsinh) {
_vptr__CIsinh = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIsinh");
}
asm("leave\njmp *%0" : : "r"(_vptr__CIsinh));
}

void _elf__CIsqrt() asm("_CIsqrt");
void _elf__CIsqrt() {
static void *_vptr__CIsqrt = NULL;
load_dll_msvcrt();
if (!_vptr__CIsqrt) {
_vptr__CIsqrt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIsqrt");
}
asm("leave\njmp *%0" : : "r"(_vptr__CIsqrt));
}

void _elf__CItan() asm("_CItan");
void _elf__CItan() {
static void *_vptr__CItan = NULL;
load_dll_msvcrt();
if (!_vptr__CItan) {
_vptr__CItan = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CItan");
}
asm("leave\njmp *%0" : : "r"(_vptr__CItan));
}

void _elf__CItanh() asm("_CItanh");
void _elf__CItanh() {
static void *_vptr__CItanh = NULL;
load_dll_msvcrt();
if (!_vptr__CItanh) {
_vptr__CItanh = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CItanh");
}
asm("leave\njmp *%0" : : "r"(_vptr__CItanh));
}

void _elf__CxxThrowException() asm("_CxxThrowException");
void _elf__CxxThrowException() {
static void *_vptr__CxxThrowException = NULL;
load_dll_msvcrt();
if (!_vptr__CxxThrowException) {
_vptr__CxxThrowException = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CxxThrowException");
}
asm("leave\njmp *%0" : : "r"(_vptr__CxxThrowException));
}

void _elf__EH_prolog() asm("_EH_prolog");
void _elf__EH_prolog() {
static void *_vptr__EH_prolog = NULL;
load_dll_msvcrt();
if (!_vptr__EH_prolog) {
_vptr__EH_prolog = (void *) _elf_GetProcAddress(_dll_msvcrt, "_EH_prolog");
}
asm("leave\njmp *%0" : : "r"(_vptr__EH_prolog));
}

void _elf__Getdays() asm("_Getdays");
void _elf__Getdays() {
static void *_vptr__Getdays = NULL;
load_dll_msvcrt();
if (!_vptr__Getdays) {
_vptr__Getdays = (void *) _elf_GetProcAddress(_dll_msvcrt, "_Getdays");
}
asm("leave\njmp *%0" : : "r"(_vptr__Getdays));
}

void _elf__Getmonths() asm("_Getmonths");
void _elf__Getmonths() {
static void *_vptr__Getmonths = NULL;
load_dll_msvcrt();
if (!_vptr__Getmonths) {
_vptr__Getmonths = (void *) _elf_GetProcAddress(_dll_msvcrt, "_Getmonths");
}
asm("leave\njmp *%0" : : "r"(_vptr__Getmonths));
}

void _elf__Gettnames() asm("_Gettnames");
void _elf__Gettnames() {
static void *_vptr__Gettnames = NULL;
load_dll_msvcrt();
if (!_vptr__Gettnames) {
_vptr__Gettnames = (void *) _elf_GetProcAddress(_dll_msvcrt, "_Gettnames");
}
asm("leave\njmp *%0" : : "r"(_vptr__Gettnames));
}

void _elf__HUGE() asm("_HUGE");
void _elf__HUGE() {
static void *_vptr__HUGE = NULL;
load_dll_msvcrt();
if (!_vptr__HUGE) {
_vptr__HUGE = (void *) _elf_GetProcAddress(_dll_msvcrt, "_HUGE");
}
asm("leave\njmp *%0" : : "r"(_vptr__HUGE));
}

void _elf__Strftime() asm("_Strftime");
void _elf__Strftime() {
static void *_vptr__Strftime = NULL;
load_dll_msvcrt();
if (!_vptr__Strftime) {
_vptr__Strftime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_Strftime");
}
asm("leave\njmp *%0" : : "r"(_vptr__Strftime));
}

void _elf__XcptFilter() asm("_XcptFilter");
void _elf__XcptFilter() {
static void *_vptr__XcptFilter = NULL;
load_dll_msvcrt();
if (!_vptr__XcptFilter) {
_vptr__XcptFilter = (void *) _elf_GetProcAddress(_dll_msvcrt, "_XcptFilter");
}
asm("leave\njmp *%0" : : "r"(_vptr__XcptFilter));
}

void _elf___CxxCallUnwindDtor() asm("__CxxCallUnwindDtor");
void _elf___CxxCallUnwindDtor() {
static void *_vptr___CxxCallUnwindDtor = NULL;
load_dll_msvcrt();
if (!_vptr___CxxCallUnwindDtor) {
_vptr___CxxCallUnwindDtor = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxCallUnwindDtor");
}
asm("leave\njmp *%0" : : "r"(_vptr___CxxCallUnwindDtor));
}

void _elf___CxxDetectRethrow() asm("__CxxDetectRethrow");
void _elf___CxxDetectRethrow() {
static void *_vptr___CxxDetectRethrow = NULL;
load_dll_msvcrt();
if (!_vptr___CxxDetectRethrow) {
_vptr___CxxDetectRethrow = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxDetectRethrow");
}
asm("leave\njmp *%0" : : "r"(_vptr___CxxDetectRethrow));
}

void _elf___CxxExceptionFilter() asm("__CxxExceptionFilter");
void _elf___CxxExceptionFilter() {
static void *_vptr___CxxExceptionFilter = NULL;
load_dll_msvcrt();
if (!_vptr___CxxExceptionFilter) {
_vptr___CxxExceptionFilter = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxExceptionFilter");
}
asm("leave\njmp *%0" : : "r"(_vptr___CxxExceptionFilter));
}

void _elf___CxxFrameHandler() asm("__CxxFrameHandler");
void _elf___CxxFrameHandler() {
static void *_vptr___CxxFrameHandler = NULL;
load_dll_msvcrt();
if (!_vptr___CxxFrameHandler) {
_vptr___CxxFrameHandler = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxFrameHandler");
}
asm("leave\njmp *%0" : : "r"(_vptr___CxxFrameHandler));
}

void _elf___CxxLongjmpUnwind() asm("__CxxLongjmpUnwind");
void _elf___CxxLongjmpUnwind() {
static void *_vptr___CxxLongjmpUnwind = NULL;
load_dll_msvcrt();
if (!_vptr___CxxLongjmpUnwind) {
_vptr___CxxLongjmpUnwind = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxLongjmpUnwind");
}
asm("leave\njmp *%0" : : "r"(_vptr___CxxLongjmpUnwind));
}

void _elf___CxxQueryExceptionSize() asm("__CxxQueryExceptionSize");
void _elf___CxxQueryExceptionSize() {
static void *_vptr___CxxQueryExceptionSize = NULL;
load_dll_msvcrt();
if (!_vptr___CxxQueryExceptionSize) {
_vptr___CxxQueryExceptionSize = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxQueryExceptionSize");
}
asm("leave\njmp *%0" : : "r"(_vptr___CxxQueryExceptionSize));
}

void _elf___CxxRegisterExceptionObject() asm("__CxxRegisterExceptionObject");
void _elf___CxxRegisterExceptionObject() {
static void *_vptr___CxxRegisterExceptionObject = NULL;
load_dll_msvcrt();
if (!_vptr___CxxRegisterExceptionObject) {
_vptr___CxxRegisterExceptionObject = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxRegisterExceptionObject");
}
asm("leave\njmp *%0" : : "r"(_vptr___CxxRegisterExceptionObject));
}

void _elf___CxxUnregisterExceptionObject() asm("__CxxUnregisterExceptionObject");
void _elf___CxxUnregisterExceptionObject() {
static void *_vptr___CxxUnregisterExceptionObject = NULL;
load_dll_msvcrt();
if (!_vptr___CxxUnregisterExceptionObject) {
_vptr___CxxUnregisterExceptionObject = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxUnregisterExceptionObject");
}
asm("leave\njmp *%0" : : "r"(_vptr___CxxUnregisterExceptionObject));
}

void _elf___DestructExceptionObject() asm("__DestructExceptionObject");
void _elf___DestructExceptionObject() {
static void *_vptr___DestructExceptionObject = NULL;
load_dll_msvcrt();
if (!_vptr___DestructExceptionObject) {
_vptr___DestructExceptionObject = (void *) _elf_GetProcAddress(_dll_msvcrt, "__DestructExceptionObject");
}
asm("leave\njmp *%0" : : "r"(_vptr___DestructExceptionObject));
}

void _elf___RTCastToVoid() asm("__RTCastToVoid");
void _elf___RTCastToVoid() {
static void *_vptr___RTCastToVoid = NULL;
load_dll_msvcrt();
if (!_vptr___RTCastToVoid) {
_vptr___RTCastToVoid = (void *) _elf_GetProcAddress(_dll_msvcrt, "__RTCastToVoid");
}
asm("leave\njmp *%0" : : "r"(_vptr___RTCastToVoid));
}

void _elf___RTDynamicCast() asm("__RTDynamicCast");
void _elf___RTDynamicCast() {
static void *_vptr___RTDynamicCast = NULL;
load_dll_msvcrt();
if (!_vptr___RTDynamicCast) {
_vptr___RTDynamicCast = (void *) _elf_GetProcAddress(_dll_msvcrt, "__RTDynamicCast");
}
asm("leave\njmp *%0" : : "r"(_vptr___RTDynamicCast));
}

void _elf___RTtypeid() asm("__RTtypeid");
void _elf___RTtypeid() {
static void *_vptr___RTtypeid = NULL;
load_dll_msvcrt();
if (!_vptr___RTtypeid) {
_vptr___RTtypeid = (void *) _elf_GetProcAddress(_dll_msvcrt, "__RTtypeid");
}
asm("leave\njmp *%0" : : "r"(_vptr___RTtypeid));
}

void _elf___STRINGTOLD() asm("__STRINGTOLD");
void _elf___STRINGTOLD() {
static void *_vptr___STRINGTOLD = NULL;
load_dll_msvcrt();
if (!_vptr___STRINGTOLD) {
_vptr___STRINGTOLD = (void *) _elf_GetProcAddress(_dll_msvcrt, "__STRINGTOLD");
}
asm("leave\njmp *%0" : : "r"(_vptr___STRINGTOLD));
}

void _elf____lc_codepage_func() asm("___lc_codepage_func");
void _elf____lc_codepage_func() {
static void *_vptr____lc_codepage_func = NULL;
load_dll_msvcrt();
if (!_vptr____lc_codepage_func) {
_vptr____lc_codepage_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "___lc_codepage_func");
}
asm("leave\njmp *%0" : : "r"(_vptr____lc_codepage_func));
}

void _elf____lc_handle_func() asm("___lc_handle_func");
void _elf____lc_handle_func() {
static void *_vptr____lc_handle_func = NULL;
load_dll_msvcrt();
if (!_vptr____lc_handle_func) {
_vptr____lc_handle_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "___lc_handle_func");
}
asm("leave\njmp *%0" : : "r"(_vptr____lc_handle_func));
}

void _elf____mb_cur_max_func() asm("___mb_cur_max_func");
void _elf____mb_cur_max_func() {
static void *_vptr____mb_cur_max_func = NULL;
load_dll_msvcrt();
if (!_vptr____mb_cur_max_func) {
_vptr____mb_cur_max_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "___mb_cur_max_func");
}
asm("leave\njmp *%0" : : "r"(_vptr____mb_cur_max_func));
}

void _elf____setlc_active_func() asm("___setlc_active_func");
void _elf____setlc_active_func() {
static void *_vptr____setlc_active_func = NULL;
load_dll_msvcrt();
if (!_vptr____setlc_active_func) {
_vptr____setlc_active_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "___setlc_active_func");
}
asm("leave\njmp *%0" : : "r"(_vptr____setlc_active_func));
}

void _elf____unguarded_readlc_active_add_func() asm("___unguarded_readlc_active_add_func");
void _elf____unguarded_readlc_active_add_func() {
static void *_vptr____unguarded_readlc_active_add_func = NULL;
load_dll_msvcrt();
if (!_vptr____unguarded_readlc_active_add_func) {
_vptr____unguarded_readlc_active_add_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "___unguarded_readlc_active_add_func");
}
asm("leave\njmp *%0" : : "r"(_vptr____unguarded_readlc_active_add_func));
}

void _elf___argc() asm("__argc");
void _elf___argc() {
static void *_vptr___argc = NULL;
load_dll_msvcrt();
if (!_vptr___argc) {
_vptr___argc = (void *) _elf_GetProcAddress(_dll_msvcrt, "__argc");
}
asm("leave\njmp *%0" : : "r"(_vptr___argc));
}

void _elf___argv() asm("__argv");
void _elf___argv() {
static void *_vptr___argv = NULL;
load_dll_msvcrt();
if (!_vptr___argv) {
_vptr___argv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__argv");
}
asm("leave\njmp *%0" : : "r"(_vptr___argv));
}

void _elf___badioinfo() asm("__badioinfo");
void _elf___badioinfo() {
static void *_vptr___badioinfo = NULL;
load_dll_msvcrt();
if (!_vptr___badioinfo) {
_vptr___badioinfo = (void *) _elf_GetProcAddress(_dll_msvcrt, "__badioinfo");
}
asm("leave\njmp *%0" : : "r"(_vptr___badioinfo));
}

void _elf___crtCompareStringA() asm("__crtCompareStringA");
void _elf___crtCompareStringA() {
static void *_vptr___crtCompareStringA = NULL;
load_dll_msvcrt();
if (!_vptr___crtCompareStringA) {
_vptr___crtCompareStringA = (void *) _elf_GetProcAddress(_dll_msvcrt, "__crtCompareStringA");
}
asm("leave\njmp *%0" : : "r"(_vptr___crtCompareStringA));
}

void _elf___crtCompareStringW() asm("__crtCompareStringW");
void _elf___crtCompareStringW() {
static void *_vptr___crtCompareStringW = NULL;
load_dll_msvcrt();
if (!_vptr___crtCompareStringW) {
_vptr___crtCompareStringW = (void *) _elf_GetProcAddress(_dll_msvcrt, "__crtCompareStringW");
}
asm("leave\njmp *%0" : : "r"(_vptr___crtCompareStringW));
}

void _elf___crtGetLocaleInfoW() asm("__crtGetLocaleInfoW");
void _elf___crtGetLocaleInfoW() {
static void *_vptr___crtGetLocaleInfoW = NULL;
load_dll_msvcrt();
if (!_vptr___crtGetLocaleInfoW) {
_vptr___crtGetLocaleInfoW = (void *) _elf_GetProcAddress(_dll_msvcrt, "__crtGetLocaleInfoW");
}
asm("leave\njmp *%0" : : "r"(_vptr___crtGetLocaleInfoW));
}

void _elf___crtGetStringTypeW() asm("__crtGetStringTypeW");
void _elf___crtGetStringTypeW() {
static void *_vptr___crtGetStringTypeW = NULL;
load_dll_msvcrt();
if (!_vptr___crtGetStringTypeW) {
_vptr___crtGetStringTypeW = (void *) _elf_GetProcAddress(_dll_msvcrt, "__crtGetStringTypeW");
}
asm("leave\njmp *%0" : : "r"(_vptr___crtGetStringTypeW));
}

void _elf___crtLCMapStringA() asm("__crtLCMapStringA");
void _elf___crtLCMapStringA() {
static void *_vptr___crtLCMapStringA = NULL;
load_dll_msvcrt();
if (!_vptr___crtLCMapStringA) {
_vptr___crtLCMapStringA = (void *) _elf_GetProcAddress(_dll_msvcrt, "__crtLCMapStringA");
}
asm("leave\njmp *%0" : : "r"(_vptr___crtLCMapStringA));
}

void _elf___crtLCMapStringW() asm("__crtLCMapStringW");
void _elf___crtLCMapStringW() {
static void *_vptr___crtLCMapStringW = NULL;
load_dll_msvcrt();
if (!_vptr___crtLCMapStringW) {
_vptr___crtLCMapStringW = (void *) _elf_GetProcAddress(_dll_msvcrt, "__crtLCMapStringW");
}
asm("leave\njmp *%0" : : "r"(_vptr___crtLCMapStringW));
}

void _elf___dllonexit() asm("__dllonexit");
void _elf___dllonexit() {
static void *_vptr___dllonexit = NULL;
load_dll_msvcrt();
if (!_vptr___dllonexit) {
_vptr___dllonexit = (void *) _elf_GetProcAddress(_dll_msvcrt, "__dllonexit");
}
asm("leave\njmp *%0" : : "r"(_vptr___dllonexit));
}

void _elf___doserrno() asm("__doserrno");
void _elf___doserrno() {
static void *_vptr___doserrno = NULL;
load_dll_msvcrt();
if (!_vptr___doserrno) {
_vptr___doserrno = (void *) _elf_GetProcAddress(_dll_msvcrt, "__doserrno");
}
asm("leave\njmp *%0" : : "r"(_vptr___doserrno));
}

void _elf___fpecode() asm("__fpecode");
void _elf___fpecode() {
static void *_vptr___fpecode = NULL;
load_dll_msvcrt();
if (!_vptr___fpecode) {
_vptr___fpecode = (void *) _elf_GetProcAddress(_dll_msvcrt, "__fpecode");
}
asm("leave\njmp *%0" : : "r"(_vptr___fpecode));
}

void _elf___getmainargs() asm("__getmainargs");
void _elf___getmainargs() {
static void *_vptr___getmainargs = NULL;
load_dll_msvcrt();
if (!_vptr___getmainargs) {
_vptr___getmainargs = (void *) _elf_GetProcAddress(_dll_msvcrt, "__getmainargs");
}
asm("leave\njmp *%0" : : "r"(_vptr___getmainargs));
}

void _elf___initenv() asm("__initenv");
void _elf___initenv() {
static void *_vptr___initenv = NULL;
load_dll_msvcrt();
if (!_vptr___initenv) {
_vptr___initenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__initenv");
}
asm("leave\njmp *%0" : : "r"(_vptr___initenv));
}

void _elf___iob_func() asm("__iob_func");
void _elf___iob_func() {
static void *_vptr___iob_func = NULL;
load_dll_msvcrt();
if (!_vptr___iob_func) {
_vptr___iob_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "__iob_func");
}
asm("leave\njmp *%0" : : "r"(_vptr___iob_func));
}

void _elf___isascii() asm("__isascii");
void _elf___isascii() {
static void *_vptr___isascii = NULL;
load_dll_msvcrt();
if (!_vptr___isascii) {
_vptr___isascii = (void *) _elf_GetProcAddress(_dll_msvcrt, "__isascii");
}
asm("leave\njmp *%0" : : "r"(_vptr___isascii));
}

void _elf___iscsym() asm("__iscsym");
void _elf___iscsym() {
static void *_vptr___iscsym = NULL;
load_dll_msvcrt();
if (!_vptr___iscsym) {
_vptr___iscsym = (void *) _elf_GetProcAddress(_dll_msvcrt, "__iscsym");
}
asm("leave\njmp *%0" : : "r"(_vptr___iscsym));
}

void _elf___iscsymf() asm("__iscsymf");
void _elf___iscsymf() {
static void *_vptr___iscsymf = NULL;
load_dll_msvcrt();
if (!_vptr___iscsymf) {
_vptr___iscsymf = (void *) _elf_GetProcAddress(_dll_msvcrt, "__iscsymf");
}
asm("leave\njmp *%0" : : "r"(_vptr___iscsymf));
}

void _elf___lc_codepage() asm("__lc_codepage");
void _elf___lc_codepage() {
static void *_vptr___lc_codepage = NULL;
load_dll_msvcrt();
if (!_vptr___lc_codepage) {
_vptr___lc_codepage = (void *) _elf_GetProcAddress(_dll_msvcrt, "__lc_codepage");
}
asm("leave\njmp *%0" : : "r"(_vptr___lc_codepage));
}

void _elf___lc_collate_cp() asm("__lc_collate_cp");
void _elf___lc_collate_cp() {
static void *_vptr___lc_collate_cp = NULL;
load_dll_msvcrt();
if (!_vptr___lc_collate_cp) {
_vptr___lc_collate_cp = (void *) _elf_GetProcAddress(_dll_msvcrt, "__lc_collate_cp");
}
asm("leave\njmp *%0" : : "r"(_vptr___lc_collate_cp));
}

void _elf___lc_handle() asm("__lc_handle");
void _elf___lc_handle() {
static void *_vptr___lc_handle = NULL;
load_dll_msvcrt();
if (!_vptr___lc_handle) {
_vptr___lc_handle = (void *) _elf_GetProcAddress(_dll_msvcrt, "__lc_handle");
}
asm("leave\njmp *%0" : : "r"(_vptr___lc_handle));
}

void _elf___lconv_init() asm("__lconv_init");
void _elf___lconv_init() {
static void *_vptr___lconv_init = NULL;
load_dll_msvcrt();
if (!_vptr___lconv_init) {
_vptr___lconv_init = (void *) _elf_GetProcAddress(_dll_msvcrt, "__lconv_init");
}
asm("leave\njmp *%0" : : "r"(_vptr___lconv_init));
}

void _elf___mb_cur_max() asm("__mb_cur_max");
void _elf___mb_cur_max() {
static void *_vptr___mb_cur_max = NULL;
load_dll_msvcrt();
if (!_vptr___mb_cur_max) {
_vptr___mb_cur_max = (void *) _elf_GetProcAddress(_dll_msvcrt, "__mb_cur_max");
}
asm("leave\njmp *%0" : : "r"(_vptr___mb_cur_max));
}

void _elf___p___argc() asm("__p___argc");
void _elf___p___argc() {
static void *_vptr___p___argc = NULL;
load_dll_msvcrt();
if (!_vptr___p___argc) {
_vptr___p___argc = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p___argc");
}
asm("leave\njmp *%0" : : "r"(_vptr___p___argc));
}

void _elf___p___argv() asm("__p___argv");
void _elf___p___argv() {
static void *_vptr___p___argv = NULL;
load_dll_msvcrt();
if (!_vptr___p___argv) {
_vptr___p___argv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p___argv");
}
asm("leave\njmp *%0" : : "r"(_vptr___p___argv));
}

void _elf___p___initenv() asm("__p___initenv");
void _elf___p___initenv() {
static void *_vptr___p___initenv = NULL;
load_dll_msvcrt();
if (!_vptr___p___initenv) {
_vptr___p___initenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p___initenv");
}
asm("leave\njmp *%0" : : "r"(_vptr___p___initenv));
}

void _elf___p___mb_cur_max() asm("__p___mb_cur_max");
void _elf___p___mb_cur_max() {
static void *_vptr___p___mb_cur_max = NULL;
load_dll_msvcrt();
if (!_vptr___p___mb_cur_max) {
_vptr___p___mb_cur_max = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p___mb_cur_max");
}
asm("leave\njmp *%0" : : "r"(_vptr___p___mb_cur_max));
}

void _elf___p___wargv() asm("__p___wargv");
void _elf___p___wargv() {
static void *_vptr___p___wargv = NULL;
load_dll_msvcrt();
if (!_vptr___p___wargv) {
_vptr___p___wargv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p___wargv");
}
asm("leave\njmp *%0" : : "r"(_vptr___p___wargv));
}

void _elf___p___winitenv() asm("__p___winitenv");
void _elf___p___winitenv() {
static void *_vptr___p___winitenv = NULL;
load_dll_msvcrt();
if (!_vptr___p___winitenv) {
_vptr___p___winitenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p___winitenv");
}
asm("leave\njmp *%0" : : "r"(_vptr___p___winitenv));
}

void _elf___p__acmdln() asm("__p__acmdln");
void _elf___p__acmdln() {
static void *_vptr___p__acmdln = NULL;
load_dll_msvcrt();
if (!_vptr___p__acmdln) {
_vptr___p__acmdln = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__acmdln");
}
asm("leave\njmp *%0" : : "r"(_vptr___p__acmdln));
}

void _elf___p__amblksiz() asm("__p__amblksiz");
void _elf___p__amblksiz() {
static void *_vptr___p__amblksiz = NULL;
load_dll_msvcrt();
if (!_vptr___p__amblksiz) {
_vptr___p__amblksiz = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__amblksiz");
}
asm("leave\njmp *%0" : : "r"(_vptr___p__amblksiz));
}

void _elf___p__commode() asm("__p__commode");
void _elf___p__commode() {
static void *_vptr___p__commode = NULL;
load_dll_msvcrt();
if (!_vptr___p__commode) {
_vptr___p__commode = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__commode");
}
asm("leave\njmp *%0" : : "r"(_vptr___p__commode));
}

void _elf___p__daylight() asm("__p__daylight");
void _elf___p__daylight() {
static void *_vptr___p__daylight = NULL;
load_dll_msvcrt();
if (!_vptr___p__daylight) {
_vptr___p__daylight = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__daylight");
}
asm("leave\njmp *%0" : : "r"(_vptr___p__daylight));
}

void _elf___p__dstbias() asm("__p__dstbias");
void _elf___p__dstbias() {
static void *_vptr___p__dstbias = NULL;
load_dll_msvcrt();
if (!_vptr___p__dstbias) {
_vptr___p__dstbias = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__dstbias");
}
asm("leave\njmp *%0" : : "r"(_vptr___p__dstbias));
}

void _elf___p__environ() asm("__p__environ");
void _elf___p__environ() {
static void *_vptr___p__environ = NULL;
load_dll_msvcrt();
if (!_vptr___p__environ) {
_vptr___p__environ = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__environ");
}
asm("leave\njmp *%0" : : "r"(_vptr___p__environ));
}

void _elf___p__fileinfo() asm("__p__fileinfo");
void _elf___p__fileinfo() {
static void *_vptr___p__fileinfo = NULL;
load_dll_msvcrt();
if (!_vptr___p__fileinfo) {
_vptr___p__fileinfo = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__fileinfo");
}
asm("leave\njmp *%0" : : "r"(_vptr___p__fileinfo));
}

void _elf___p__fmode() asm("__p__fmode");
void _elf___p__fmode() {
static void *_vptr___p__fmode = NULL;
load_dll_msvcrt();
if (!_vptr___p__fmode) {
_vptr___p__fmode = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__fmode");
}
asm("leave\njmp *%0" : : "r"(_vptr___p__fmode));
}

void _elf___p__iob() asm("__p__iob");
void _elf___p__iob() {
static void *_vptr___p__iob = NULL;
load_dll_msvcrt();
if (!_vptr___p__iob) {
_vptr___p__iob = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__iob");
}
asm("leave\njmp *%0" : : "r"(_vptr___p__iob));
}

void _elf___p__mbcasemap() asm("__p__mbcasemap");
void _elf___p__mbcasemap() {
static void *_vptr___p__mbcasemap = NULL;
load_dll_msvcrt();
if (!_vptr___p__mbcasemap) {
_vptr___p__mbcasemap = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__mbcasemap");
}
asm("leave\njmp *%0" : : "r"(_vptr___p__mbcasemap));
}

void _elf___p__mbctype() asm("__p__mbctype");
void _elf___p__mbctype() {
static void *_vptr___p__mbctype = NULL;
load_dll_msvcrt();
if (!_vptr___p__mbctype) {
_vptr___p__mbctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__mbctype");
}
asm("leave\njmp *%0" : : "r"(_vptr___p__mbctype));
}

void _elf___p__osver() asm("__p__osver");
void _elf___p__osver() {
static void *_vptr___p__osver = NULL;
load_dll_msvcrt();
if (!_vptr___p__osver) {
_vptr___p__osver = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__osver");
}
asm("leave\njmp *%0" : : "r"(_vptr___p__osver));
}

void _elf___p__pctype() asm("__p__pctype");
void _elf___p__pctype() {
static void *_vptr___p__pctype = NULL;
load_dll_msvcrt();
if (!_vptr___p__pctype) {
_vptr___p__pctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__pctype");
}
asm("leave\njmp *%0" : : "r"(_vptr___p__pctype));
}

void _elf___p__pgmptr() asm("__p__pgmptr");
void _elf___p__pgmptr() {
static void *_vptr___p__pgmptr = NULL;
load_dll_msvcrt();
if (!_vptr___p__pgmptr) {
_vptr___p__pgmptr = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__pgmptr");
}
asm("leave\njmp *%0" : : "r"(_vptr___p__pgmptr));
}

void _elf___p__pwctype() asm("__p__pwctype");
void _elf___p__pwctype() {
static void *_vptr___p__pwctype = NULL;
load_dll_msvcrt();
if (!_vptr___p__pwctype) {
_vptr___p__pwctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__pwctype");
}
asm("leave\njmp *%0" : : "r"(_vptr___p__pwctype));
}

void _elf___p__timezone() asm("__p__timezone");
void _elf___p__timezone() {
static void *_vptr___p__timezone = NULL;
load_dll_msvcrt();
if (!_vptr___p__timezone) {
_vptr___p__timezone = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__timezone");
}
asm("leave\njmp *%0" : : "r"(_vptr___p__timezone));
}

void _elf___p__tzname() asm("__p__tzname");
void _elf___p__tzname() {
static void *_vptr___p__tzname = NULL;
load_dll_msvcrt();
if (!_vptr___p__tzname) {
_vptr___p__tzname = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__tzname");
}
asm("leave\njmp *%0" : : "r"(_vptr___p__tzname));
}

void _elf___p__wcmdln() asm("__p__wcmdln");
void _elf___p__wcmdln() {
static void *_vptr___p__wcmdln = NULL;
load_dll_msvcrt();
if (!_vptr___p__wcmdln) {
_vptr___p__wcmdln = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__wcmdln");
}
asm("leave\njmp *%0" : : "r"(_vptr___p__wcmdln));
}

void _elf___p__wenviron() asm("__p__wenviron");
void _elf___p__wenviron() {
static void *_vptr___p__wenviron = NULL;
load_dll_msvcrt();
if (!_vptr___p__wenviron) {
_vptr___p__wenviron = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__wenviron");
}
asm("leave\njmp *%0" : : "r"(_vptr___p__wenviron));
}

void _elf___p__winmajor() asm("__p__winmajor");
void _elf___p__winmajor() {
static void *_vptr___p__winmajor = NULL;
load_dll_msvcrt();
if (!_vptr___p__winmajor) {
_vptr___p__winmajor = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__winmajor");
}
asm("leave\njmp *%0" : : "r"(_vptr___p__winmajor));
}

void _elf___p__winminor() asm("__p__winminor");
void _elf___p__winminor() {
static void *_vptr___p__winminor = NULL;
load_dll_msvcrt();
if (!_vptr___p__winminor) {
_vptr___p__winminor = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__winminor");
}
asm("leave\njmp *%0" : : "r"(_vptr___p__winminor));
}

void _elf___p__winver() asm("__p__winver");
void _elf___p__winver() {
static void *_vptr___p__winver = NULL;
load_dll_msvcrt();
if (!_vptr___p__winver) {
_vptr___p__winver = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__winver");
}
asm("leave\njmp *%0" : : "r"(_vptr___p__winver));
}

void _elf___p__wpgmptr() asm("__p__wpgmptr");
void _elf___p__wpgmptr() {
static void *_vptr___p__wpgmptr = NULL;
load_dll_msvcrt();
if (!_vptr___p__wpgmptr) {
_vptr___p__wpgmptr = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__wpgmptr");
}
asm("leave\njmp *%0" : : "r"(_vptr___p__wpgmptr));
}

void _elf___pctype_func() asm("__pctype_func");
void _elf___pctype_func() {
static void *_vptr___pctype_func = NULL;
load_dll_msvcrt();
if (!_vptr___pctype_func) {
_vptr___pctype_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "__pctype_func");
}
asm("leave\njmp *%0" : : "r"(_vptr___pctype_func));
}

void _elf___pioinfo() asm("__pioinfo");
void _elf___pioinfo() {
static void *_vptr___pioinfo = NULL;
load_dll_msvcrt();
if (!_vptr___pioinfo) {
_vptr___pioinfo = (void *) _elf_GetProcAddress(_dll_msvcrt, "__pioinfo");
}
asm("leave\njmp *%0" : : "r"(_vptr___pioinfo));
}

void _elf___pxcptinfoptrs() asm("__pxcptinfoptrs");
void _elf___pxcptinfoptrs() {
static void *_vptr___pxcptinfoptrs = NULL;
load_dll_msvcrt();
if (!_vptr___pxcptinfoptrs) {
_vptr___pxcptinfoptrs = (void *) _elf_GetProcAddress(_dll_msvcrt, "__pxcptinfoptrs");
}
asm("leave\njmp *%0" : : "r"(_vptr___pxcptinfoptrs));
}

void _elf___set_app_type() asm("__set_app_type");
void _elf___set_app_type() {
static void *_vptr___set_app_type = NULL;
load_dll_msvcrt();
if (!_vptr___set_app_type) {
_vptr___set_app_type = (void *) _elf_GetProcAddress(_dll_msvcrt, "__set_app_type");
}
asm("leave\njmp *%0" : : "r"(_vptr___set_app_type));
}

void _elf___setlc_active() asm("__setlc_active");
void _elf___setlc_active() {
static void *_vptr___setlc_active = NULL;
load_dll_msvcrt();
if (!_vptr___setlc_active) {
_vptr___setlc_active = (void *) _elf_GetProcAddress(_dll_msvcrt, "__setlc_active");
}
asm("leave\njmp *%0" : : "r"(_vptr___setlc_active));
}

void _elf___setusermatherr() asm("__setusermatherr");
void _elf___setusermatherr() {
static void *_vptr___setusermatherr = NULL;
load_dll_msvcrt();
if (!_vptr___setusermatherr) {
_vptr___setusermatherr = (void *) _elf_GetProcAddress(_dll_msvcrt, "__setusermatherr");
}
asm("leave\njmp *%0" : : "r"(_vptr___setusermatherr));
}

void _elf___threadhandle() asm("__threadhandle");
void _elf___threadhandle() {
static void *_vptr___threadhandle = NULL;
load_dll_msvcrt();
if (!_vptr___threadhandle) {
_vptr___threadhandle = (void *) _elf_GetProcAddress(_dll_msvcrt, "__threadhandle");
}
asm("leave\njmp *%0" : : "r"(_vptr___threadhandle));
}

void _elf___threadid() asm("__threadid");
void _elf___threadid() {
static void *_vptr___threadid = NULL;
load_dll_msvcrt();
if (!_vptr___threadid) {
_vptr___threadid = (void *) _elf_GetProcAddress(_dll_msvcrt, "__threadid");
}
asm("leave\njmp *%0" : : "r"(_vptr___threadid));
}

void _elf___toascii() asm("__toascii");
void _elf___toascii() {
static void *_vptr___toascii = NULL;
load_dll_msvcrt();
if (!_vptr___toascii) {
_vptr___toascii = (void *) _elf_GetProcAddress(_dll_msvcrt, "__toascii");
}
asm("leave\njmp *%0" : : "r"(_vptr___toascii));
}

void _elf___unDName() asm("__unDName");
void _elf___unDName() {
static void *_vptr___unDName = NULL;
load_dll_msvcrt();
if (!_vptr___unDName) {
_vptr___unDName = (void *) _elf_GetProcAddress(_dll_msvcrt, "__unDName");
}
asm("leave\njmp *%0" : : "r"(_vptr___unDName));
}

void _elf___unDNameEx() asm("__unDNameEx");
void _elf___unDNameEx() {
static void *_vptr___unDNameEx = NULL;
load_dll_msvcrt();
if (!_vptr___unDNameEx) {
_vptr___unDNameEx = (void *) _elf_GetProcAddress(_dll_msvcrt, "__unDNameEx");
}
asm("leave\njmp *%0" : : "r"(_vptr___unDNameEx));
}

void _elf___uncaught_exception() asm("__uncaught_exception");
void _elf___uncaught_exception() {
static void *_vptr___uncaught_exception = NULL;
load_dll_msvcrt();
if (!_vptr___uncaught_exception) {
_vptr___uncaught_exception = (void *) _elf_GetProcAddress(_dll_msvcrt, "__uncaught_exception");
}
asm("leave\njmp *%0" : : "r"(_vptr___uncaught_exception));
}

void _elf___unguarded_readlc_active() asm("__unguarded_readlc_active");
void _elf___unguarded_readlc_active() {
static void *_vptr___unguarded_readlc_active = NULL;
load_dll_msvcrt();
if (!_vptr___unguarded_readlc_active) {
_vptr___unguarded_readlc_active = (void *) _elf_GetProcAddress(_dll_msvcrt, "__unguarded_readlc_active");
}
asm("leave\njmp *%0" : : "r"(_vptr___unguarded_readlc_active));
}

void _elf___wargv() asm("__wargv");
void _elf___wargv() {
static void *_vptr___wargv = NULL;
load_dll_msvcrt();
if (!_vptr___wargv) {
_vptr___wargv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__wargv");
}
asm("leave\njmp *%0" : : "r"(_vptr___wargv));
}

void _elf___wcserror() asm("__wcserror");
void _elf___wcserror() {
static void *_vptr___wcserror = NULL;
load_dll_msvcrt();
if (!_vptr___wcserror) {
_vptr___wcserror = (void *) _elf_GetProcAddress(_dll_msvcrt, "__wcserror");
}
asm("leave\njmp *%0" : : "r"(_vptr___wcserror));
}

void _elf___wgetmainargs() asm("__wgetmainargs");
void _elf___wgetmainargs() {
static void *_vptr___wgetmainargs = NULL;
load_dll_msvcrt();
if (!_vptr___wgetmainargs) {
_vptr___wgetmainargs = (void *) _elf_GetProcAddress(_dll_msvcrt, "__wgetmainargs");
}
asm("leave\njmp *%0" : : "r"(_vptr___wgetmainargs));
}

void _elf___winitenv() asm("__winitenv");
void _elf___winitenv() {
static void *_vptr___winitenv = NULL;
load_dll_msvcrt();
if (!_vptr___winitenv) {
_vptr___winitenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__winitenv");
}
asm("leave\njmp *%0" : : "r"(_vptr___winitenv));
}

void _elf__abnormal_termination() asm("_abnormal_termination");
void _elf__abnormal_termination() {
static void *_vptr__abnormal_termination = NULL;
load_dll_msvcrt();
if (!_vptr__abnormal_termination) {
_vptr__abnormal_termination = (void *) _elf_GetProcAddress(_dll_msvcrt, "_abnormal_termination");
}
asm("leave\njmp *%0" : : "r"(_vptr__abnormal_termination));
}

void _elf__access() asm("_access");
void _elf__access() {
static void *_vptr__access = NULL;
load_dll_msvcrt();
if (!_vptr__access) {
_vptr__access = (void *) _elf_GetProcAddress(_dll_msvcrt, "_access");
}
asm("leave\njmp *%0" : : "r"(_vptr__access));
}

void _elf__acmdln() asm("_acmdln");
void _elf__acmdln() {
static void *_vptr__acmdln = NULL;
load_dll_msvcrt();
if (!_vptr__acmdln) {
_vptr__acmdln = (void *) _elf_GetProcAddress(_dll_msvcrt, "_acmdln");
}
asm("leave\njmp *%0" : : "r"(_vptr__acmdln));
}

void _elf__adj_fdiv_m16i() asm("_adj_fdiv_m16i");
void _elf__adj_fdiv_m16i() {
static void *_vptr__adj_fdiv_m16i = NULL;
load_dll_msvcrt();
if (!_vptr__adj_fdiv_m16i) {
_vptr__adj_fdiv_m16i = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdiv_m16i");
}
asm("leave\njmp *%0" : : "r"(_vptr__adj_fdiv_m16i));
}

void _elf__adj_fdiv_m32() asm("_adj_fdiv_m32");
void _elf__adj_fdiv_m32() {
static void *_vptr__adj_fdiv_m32 = NULL;
load_dll_msvcrt();
if (!_vptr__adj_fdiv_m32) {
_vptr__adj_fdiv_m32 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdiv_m32");
}
asm("leave\njmp *%0" : : "r"(_vptr__adj_fdiv_m32));
}

void _elf__adj_fdiv_m32i() asm("_adj_fdiv_m32i");
void _elf__adj_fdiv_m32i() {
static void *_vptr__adj_fdiv_m32i = NULL;
load_dll_msvcrt();
if (!_vptr__adj_fdiv_m32i) {
_vptr__adj_fdiv_m32i = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdiv_m32i");
}
asm("leave\njmp *%0" : : "r"(_vptr__adj_fdiv_m32i));
}

void _elf__adj_fdiv_m64() asm("_adj_fdiv_m64");
void _elf__adj_fdiv_m64() {
static void *_vptr__adj_fdiv_m64 = NULL;
load_dll_msvcrt();
if (!_vptr__adj_fdiv_m64) {
_vptr__adj_fdiv_m64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdiv_m64");
}
asm("leave\njmp *%0" : : "r"(_vptr__adj_fdiv_m64));
}

void _elf__adj_fdiv_r() asm("_adj_fdiv_r");
void _elf__adj_fdiv_r() {
static void *_vptr__adj_fdiv_r = NULL;
load_dll_msvcrt();
if (!_vptr__adj_fdiv_r) {
_vptr__adj_fdiv_r = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdiv_r");
}
asm("leave\njmp *%0" : : "r"(_vptr__adj_fdiv_r));
}

void _elf__adj_fdivr_m16i() asm("_adj_fdivr_m16i");
void _elf__adj_fdivr_m16i() {
static void *_vptr__adj_fdivr_m16i = NULL;
load_dll_msvcrt();
if (!_vptr__adj_fdivr_m16i) {
_vptr__adj_fdivr_m16i = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdivr_m16i");
}
asm("leave\njmp *%0" : : "r"(_vptr__adj_fdivr_m16i));
}

void _elf__adj_fdivr_m32() asm("_adj_fdivr_m32");
void _elf__adj_fdivr_m32() {
static void *_vptr__adj_fdivr_m32 = NULL;
load_dll_msvcrt();
if (!_vptr__adj_fdivr_m32) {
_vptr__adj_fdivr_m32 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdivr_m32");
}
asm("leave\njmp *%0" : : "r"(_vptr__adj_fdivr_m32));
}

void _elf__adj_fdivr_m32i() asm("_adj_fdivr_m32i");
void _elf__adj_fdivr_m32i() {
static void *_vptr__adj_fdivr_m32i = NULL;
load_dll_msvcrt();
if (!_vptr__adj_fdivr_m32i) {
_vptr__adj_fdivr_m32i = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdivr_m32i");
}
asm("leave\njmp *%0" : : "r"(_vptr__adj_fdivr_m32i));
}

void _elf__adj_fdivr_m64() asm("_adj_fdivr_m64");
void _elf__adj_fdivr_m64() {
static void *_vptr__adj_fdivr_m64 = NULL;
load_dll_msvcrt();
if (!_vptr__adj_fdivr_m64) {
_vptr__adj_fdivr_m64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdivr_m64");
}
asm("leave\njmp *%0" : : "r"(_vptr__adj_fdivr_m64));
}

void _elf__adj_fpatan() asm("_adj_fpatan");
void _elf__adj_fpatan() {
static void *_vptr__adj_fpatan = NULL;
load_dll_msvcrt();
if (!_vptr__adj_fpatan) {
_vptr__adj_fpatan = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fpatan");
}
asm("leave\njmp *%0" : : "r"(_vptr__adj_fpatan));
}

void _elf__adj_fprem() asm("_adj_fprem");
void _elf__adj_fprem() {
static void *_vptr__adj_fprem = NULL;
load_dll_msvcrt();
if (!_vptr__adj_fprem) {
_vptr__adj_fprem = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fprem");
}
asm("leave\njmp *%0" : : "r"(_vptr__adj_fprem));
}

void _elf__adj_fprem1() asm("_adj_fprem1");
void _elf__adj_fprem1() {
static void *_vptr__adj_fprem1 = NULL;
load_dll_msvcrt();
if (!_vptr__adj_fprem1) {
_vptr__adj_fprem1 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fprem1");
}
asm("leave\njmp *%0" : : "r"(_vptr__adj_fprem1));
}

void _elf__adj_fptan() asm("_adj_fptan");
void _elf__adj_fptan() {
static void *_vptr__adj_fptan = NULL;
load_dll_msvcrt();
if (!_vptr__adj_fptan) {
_vptr__adj_fptan = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fptan");
}
asm("leave\njmp *%0" : : "r"(_vptr__adj_fptan));
}

void _elf__adjust_fdiv() asm("_adjust_fdiv");
void _elf__adjust_fdiv() {
static void *_vptr__adjust_fdiv = NULL;
load_dll_msvcrt();
if (!_vptr__adjust_fdiv) {
_vptr__adjust_fdiv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adjust_fdiv");
}
asm("leave\njmp *%0" : : "r"(_vptr__adjust_fdiv));
}

void _elf__aexit_rtn() asm("_aexit_rtn");
void _elf__aexit_rtn() {
static void *_vptr__aexit_rtn = NULL;
load_dll_msvcrt();
if (!_vptr__aexit_rtn) {
_vptr__aexit_rtn = (void *) _elf_GetProcAddress(_dll_msvcrt, "_aexit_rtn");
}
asm("leave\njmp *%0" : : "r"(_vptr__aexit_rtn));
}

void _elf__aligned_free() asm("_aligned_free");
void _elf__aligned_free() {
static void *_vptr__aligned_free = NULL;
load_dll_msvcrt();
if (!_vptr__aligned_free) {
_vptr__aligned_free = (void *) _elf_GetProcAddress(_dll_msvcrt, "_aligned_free");
}
asm("leave\njmp *%0" : : "r"(_vptr__aligned_free));
}

void _elf__aligned_malloc() asm("_aligned_malloc");
void _elf__aligned_malloc() {
static void *_vptr__aligned_malloc = NULL;
load_dll_msvcrt();
if (!_vptr__aligned_malloc) {
_vptr__aligned_malloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_aligned_malloc");
}
asm("leave\njmp *%0" : : "r"(_vptr__aligned_malloc));
}

void _elf__aligned_offset_malloc() asm("_aligned_offset_malloc");
void _elf__aligned_offset_malloc() {
static void *_vptr__aligned_offset_malloc = NULL;
load_dll_msvcrt();
if (!_vptr__aligned_offset_malloc) {
_vptr__aligned_offset_malloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_aligned_offset_malloc");
}
asm("leave\njmp *%0" : : "r"(_vptr__aligned_offset_malloc));
}

void _elf__aligned_offset_realloc() asm("_aligned_offset_realloc");
void _elf__aligned_offset_realloc() {
static void *_vptr__aligned_offset_realloc = NULL;
load_dll_msvcrt();
if (!_vptr__aligned_offset_realloc) {
_vptr__aligned_offset_realloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_aligned_offset_realloc");
}
asm("leave\njmp *%0" : : "r"(_vptr__aligned_offset_realloc));
}

void _elf__aligned_realloc() asm("_aligned_realloc");
void _elf__aligned_realloc() {
static void *_vptr__aligned_realloc = NULL;
load_dll_msvcrt();
if (!_vptr__aligned_realloc) {
_vptr__aligned_realloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_aligned_realloc");
}
asm("leave\njmp *%0" : : "r"(_vptr__aligned_realloc));
}

void _elf__amsg_exit() asm("_amsg_exit");
void _elf__amsg_exit() {
static void *_vptr__amsg_exit = NULL;
load_dll_msvcrt();
if (!_vptr__amsg_exit) {
_vptr__amsg_exit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_amsg_exit");
}
asm("leave\njmp *%0" : : "r"(_vptr__amsg_exit));
}

void _elf__assert() asm("_assert");
void _elf__assert() {
static void *_vptr__assert = NULL;
load_dll_msvcrt();
if (!_vptr__assert) {
_vptr__assert = (void *) _elf_GetProcAddress(_dll_msvcrt, "_assert");
}
asm("leave\njmp *%0" : : "r"(_vptr__assert));
}

void _elf__atodbl() asm("_atodbl");
void _elf__atodbl() {
static void *_vptr__atodbl = NULL;
load_dll_msvcrt();
if (!_vptr__atodbl) {
_vptr__atodbl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_atodbl");
}
asm("leave\njmp *%0" : : "r"(_vptr__atodbl));
}

void _elf__atoi64() asm("_atoi64");
void _elf__atoi64() {
static void *_vptr__atoi64 = NULL;
load_dll_msvcrt();
if (!_vptr__atoi64) {
_vptr__atoi64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_atoi64");
}
asm("leave\njmp *%0" : : "r"(_vptr__atoi64));
}

void _elf__atoldbl() asm("_atoldbl");
void _elf__atoldbl() {
static void *_vptr__atoldbl = NULL;
load_dll_msvcrt();
if (!_vptr__atoldbl) {
_vptr__atoldbl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_atoldbl");
}
asm("leave\njmp *%0" : : "r"(_vptr__atoldbl));
}

void _elf__beep() asm("_beep");
void _elf__beep() {
static void *_vptr__beep = NULL;
load_dll_msvcrt();
if (!_vptr__beep) {
_vptr__beep = (void *) _elf_GetProcAddress(_dll_msvcrt, "_beep");
}
asm("leave\njmp *%0" : : "r"(_vptr__beep));
}

void _elf__beginthread() asm("_beginthread");
void _elf__beginthread() {
static void *_vptr__beginthread = NULL;
load_dll_msvcrt();
if (!_vptr__beginthread) {
_vptr__beginthread = (void *) _elf_GetProcAddress(_dll_msvcrt, "_beginthread");
}
asm("leave\njmp *%0" : : "r"(_vptr__beginthread));
}

void _elf__beginthreadex() asm("_beginthreadex");
void _elf__beginthreadex() {
static void *_vptr__beginthreadex = NULL;
load_dll_msvcrt();
if (!_vptr__beginthreadex) {
_vptr__beginthreadex = (void *) _elf_GetProcAddress(_dll_msvcrt, "_beginthreadex");
}
asm("leave\njmp *%0" : : "r"(_vptr__beginthreadex));
}

void _elf__c_exit() asm("_c_exit");
void _elf__c_exit() {
static void *_vptr__c_exit = NULL;
load_dll_msvcrt();
if (!_vptr__c_exit) {
_vptr__c_exit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_c_exit");
}
asm("leave\njmp *%0" : : "r"(_vptr__c_exit));
}

void _elf__cabs() asm("_cabs");
void _elf__cabs() {
static void *_vptr__cabs = NULL;
load_dll_msvcrt();
if (!_vptr__cabs) {
_vptr__cabs = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cabs");
}
asm("leave\njmp *%0" : : "r"(_vptr__cabs));
}

void _elf__callnewh() asm("_callnewh");
void _elf__callnewh() {
static void *_vptr__callnewh = NULL;
load_dll_msvcrt();
if (!_vptr__callnewh) {
_vptr__callnewh = (void *) _elf_GetProcAddress(_dll_msvcrt, "_callnewh");
}
asm("leave\njmp *%0" : : "r"(_vptr__callnewh));
}

void _elf__cexit() asm("_cexit");
void _elf__cexit() {
static void *_vptr__cexit = NULL;
load_dll_msvcrt();
if (!_vptr__cexit) {
_vptr__cexit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cexit");
}
asm("leave\njmp *%0" : : "r"(_vptr__cexit));
}

void _elf__cgets() asm("_cgets");
void _elf__cgets() {
static void *_vptr__cgets = NULL;
load_dll_msvcrt();
if (!_vptr__cgets) {
_vptr__cgets = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cgets");
}
asm("leave\njmp *%0" : : "r"(_vptr__cgets));
}

void _elf__cgetws() asm("_cgetws");
void _elf__cgetws() {
static void *_vptr__cgetws = NULL;
load_dll_msvcrt();
if (!_vptr__cgetws) {
_vptr__cgetws = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cgetws");
}
asm("leave\njmp *%0" : : "r"(_vptr__cgetws));
}

void _elf__chdir() asm("_chdir");
void _elf__chdir() {
static void *_vptr__chdir = NULL;
load_dll_msvcrt();
if (!_vptr__chdir) {
_vptr__chdir = (void *) _elf_GetProcAddress(_dll_msvcrt, "_chdir");
}
asm("leave\njmp *%0" : : "r"(_vptr__chdir));
}

void _elf__chdrive() asm("_chdrive");
void _elf__chdrive() {
static void *_vptr__chdrive = NULL;
load_dll_msvcrt();
if (!_vptr__chdrive) {
_vptr__chdrive = (void *) _elf_GetProcAddress(_dll_msvcrt, "_chdrive");
}
asm("leave\njmp *%0" : : "r"(_vptr__chdrive));
}

void _elf__chgsign() asm("_chgsign");
void _elf__chgsign() {
static void *_vptr__chgsign = NULL;
load_dll_msvcrt();
if (!_vptr__chgsign) {
_vptr__chgsign = (void *) _elf_GetProcAddress(_dll_msvcrt, "_chgsign");
}
asm("leave\njmp *%0" : : "r"(_vptr__chgsign));
}

void _elf__chkesp() asm("_chkesp");
void _elf__chkesp() {
static void *_vptr__chkesp = NULL;
load_dll_msvcrt();
if (!_vptr__chkesp) {
_vptr__chkesp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_chkesp");
}
asm("leave\njmp *%0" : : "r"(_vptr__chkesp));
}

void _elf__chmod() asm("_chmod");
void _elf__chmod() {
static void *_vptr__chmod = NULL;
load_dll_msvcrt();
if (!_vptr__chmod) {
_vptr__chmod = (void *) _elf_GetProcAddress(_dll_msvcrt, "_chmod");
}
asm("leave\njmp *%0" : : "r"(_vptr__chmod));
}

void _elf__chsize() asm("_chsize");
void _elf__chsize() {
static void *_vptr__chsize = NULL;
load_dll_msvcrt();
if (!_vptr__chsize) {
_vptr__chsize = (void *) _elf_GetProcAddress(_dll_msvcrt, "_chsize");
}
asm("leave\njmp *%0" : : "r"(_vptr__chsize));
}

void _elf__clearfp() asm("_clearfp");
void _elf__clearfp() {
static void *_vptr__clearfp = NULL;
load_dll_msvcrt();
if (!_vptr__clearfp) {
_vptr__clearfp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_clearfp");
}
asm("leave\njmp *%0" : : "r"(_vptr__clearfp));
}

void _elf__close() asm("_close");
void _elf__close() {
static void *_vptr__close = NULL;
load_dll_msvcrt();
if (!_vptr__close) {
_vptr__close = (void *) _elf_GetProcAddress(_dll_msvcrt, "_close");
}
asm("leave\njmp *%0" : : "r"(_vptr__close));
}

void _elf__commit() asm("_commit");
void _elf__commit() {
static void *_vptr__commit = NULL;
load_dll_msvcrt();
if (!_vptr__commit) {
_vptr__commit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_commit");
}
asm("leave\njmp *%0" : : "r"(_vptr__commit));
}

void _elf__commode() asm("_commode");
void _elf__commode() {
static void *_vptr__commode = NULL;
load_dll_msvcrt();
if (!_vptr__commode) {
_vptr__commode = (void *) _elf_GetProcAddress(_dll_msvcrt, "_commode");
}
asm("leave\njmp *%0" : : "r"(_vptr__commode));
}

void _elf__control87() asm("_control87");
void _elf__control87() {
static void *_vptr__control87 = NULL;
load_dll_msvcrt();
if (!_vptr__control87) {
_vptr__control87 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_control87");
}
asm("leave\njmp *%0" : : "r"(_vptr__control87));
}

void _elf__controlfp() asm("_controlfp");
void _elf__controlfp() {
static void *_vptr__controlfp = NULL;
load_dll_msvcrt();
if (!_vptr__controlfp) {
_vptr__controlfp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_controlfp");
}
asm("leave\njmp *%0" : : "r"(_vptr__controlfp));
}

void _elf__copysign() asm("_copysign");
void _elf__copysign() {
static void *_vptr__copysign = NULL;
load_dll_msvcrt();
if (!_vptr__copysign) {
_vptr__copysign = (void *) _elf_GetProcAddress(_dll_msvcrt, "_copysign");
}
asm("leave\njmp *%0" : : "r"(_vptr__copysign));
}

void _elf__cprintf() asm("_cprintf");
void _elf__cprintf() {
static void *_vptr__cprintf = NULL;
load_dll_msvcrt();
if (!_vptr__cprintf) {
_vptr__cprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cprintf");
}
asm("leave\njmp *%0" : : "r"(_vptr__cprintf));
}

void _elf__cputs() asm("_cputs");
void _elf__cputs() {
static void *_vptr__cputs = NULL;
load_dll_msvcrt();
if (!_vptr__cputs) {
_vptr__cputs = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cputs");
}
asm("leave\njmp *%0" : : "r"(_vptr__cputs));
}

void _elf__cputws() asm("_cputws");
void _elf__cputws() {
static void *_vptr__cputws = NULL;
load_dll_msvcrt();
if (!_vptr__cputws) {
_vptr__cputws = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cputws");
}
asm("leave\njmp *%0" : : "r"(_vptr__cputws));
}

void _elf__creat() asm("_creat");
void _elf__creat() {
static void *_vptr__creat = NULL;
load_dll_msvcrt();
if (!_vptr__creat) {
_vptr__creat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_creat");
}
asm("leave\njmp *%0" : : "r"(_vptr__creat));
}

void _elf__cscanf() asm("_cscanf");
void _elf__cscanf() {
static void *_vptr__cscanf = NULL;
load_dll_msvcrt();
if (!_vptr__cscanf) {
_vptr__cscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cscanf");
}
asm("leave\njmp *%0" : : "r"(_vptr__cscanf));
}

void _elf__ctime64() asm("_ctime64");
void _elf__ctime64() {
static void *_vptr__ctime64 = NULL;
load_dll_msvcrt();
if (!_vptr__ctime64) {
_vptr__ctime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ctime64");
}
asm("leave\njmp *%0" : : "r"(_vptr__ctime64));
}

void _elf__ctype() asm("_ctype");
void _elf__ctype() {
static void *_vptr__ctype = NULL;
load_dll_msvcrt();
if (!_vptr__ctype) {
_vptr__ctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ctype");
}
asm("leave\njmp *%0" : : "r"(_vptr__ctype));
}

void _elf__cwait() asm("_cwait");
void _elf__cwait() {
static void *_vptr__cwait = NULL;
load_dll_msvcrt();
if (!_vptr__cwait) {
_vptr__cwait = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cwait");
}
asm("leave\njmp *%0" : : "r"(_vptr__cwait));
}

void _elf__cwprintf() asm("_cwprintf");
void _elf__cwprintf() {
static void *_vptr__cwprintf = NULL;
load_dll_msvcrt();
if (!_vptr__cwprintf) {
_vptr__cwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cwprintf");
}
asm("leave\njmp *%0" : : "r"(_vptr__cwprintf));
}

void _elf__cwscanf() asm("_cwscanf");
void _elf__cwscanf() {
static void *_vptr__cwscanf = NULL;
load_dll_msvcrt();
if (!_vptr__cwscanf) {
_vptr__cwscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cwscanf");
}
asm("leave\njmp *%0" : : "r"(_vptr__cwscanf));
}

void _elf__daylight() asm("_daylight");
void _elf__daylight() {
static void *_vptr__daylight = NULL;
load_dll_msvcrt();
if (!_vptr__daylight) {
_vptr__daylight = (void *) _elf_GetProcAddress(_dll_msvcrt, "_daylight");
}
asm("leave\njmp *%0" : : "r"(_vptr__daylight));
}

void _elf__dstbias() asm("_dstbias");
void _elf__dstbias() {
static void *_vptr__dstbias = NULL;
load_dll_msvcrt();
if (!_vptr__dstbias) {
_vptr__dstbias = (void *) _elf_GetProcAddress(_dll_msvcrt, "_dstbias");
}
asm("leave\njmp *%0" : : "r"(_vptr__dstbias));
}

void _elf__dup() asm("_dup");
void _elf__dup() {
static void *_vptr__dup = NULL;
load_dll_msvcrt();
if (!_vptr__dup) {
_vptr__dup = (void *) _elf_GetProcAddress(_dll_msvcrt, "_dup");
}
asm("leave\njmp *%0" : : "r"(_vptr__dup));
}

void _elf__dup2() asm("_dup2");
void _elf__dup2() {
static void *_vptr__dup2 = NULL;
load_dll_msvcrt();
if (!_vptr__dup2) {
_vptr__dup2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_dup2");
}
asm("leave\njmp *%0" : : "r"(_vptr__dup2));
}

void _elf__ecvt() asm("_ecvt");
void _elf__ecvt() {
static void *_vptr__ecvt = NULL;
load_dll_msvcrt();
if (!_vptr__ecvt) {
_vptr__ecvt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ecvt");
}
asm("leave\njmp *%0" : : "r"(_vptr__ecvt));
}

void _elf__endthread() asm("_endthread");
void _elf__endthread() {
static void *_vptr__endthread = NULL;
load_dll_msvcrt();
if (!_vptr__endthread) {
_vptr__endthread = (void *) _elf_GetProcAddress(_dll_msvcrt, "_endthread");
}
asm("leave\njmp *%0" : : "r"(_vptr__endthread));
}

void _elf__endthreadex() asm("_endthreadex");
void _elf__endthreadex() {
static void *_vptr__endthreadex = NULL;
load_dll_msvcrt();
if (!_vptr__endthreadex) {
_vptr__endthreadex = (void *) _elf_GetProcAddress(_dll_msvcrt, "_endthreadex");
}
asm("leave\njmp *%0" : : "r"(_vptr__endthreadex));
}

void _elf__environ() asm("_environ");
void _elf__environ() {
static void *_vptr__environ = NULL;
load_dll_msvcrt();
if (!_vptr__environ) {
_vptr__environ = (void *) _elf_GetProcAddress(_dll_msvcrt, "_environ");
}
asm("leave\njmp *%0" : : "r"(_vptr__environ));
}

void _elf__eof() asm("_eof");
void _elf__eof() {
static void *_vptr__eof = NULL;
load_dll_msvcrt();
if (!_vptr__eof) {
_vptr__eof = (void *) _elf_GetProcAddress(_dll_msvcrt, "_eof");
}
asm("leave\njmp *%0" : : "r"(_vptr__eof));
}

void _elf__errno() asm("_errno");
void _elf__errno() {
static void *_vptr__errno = NULL;
load_dll_msvcrt();
if (!_vptr__errno) {
_vptr__errno = (void *) _elf_GetProcAddress(_dll_msvcrt, "_errno");
}
asm("leave\njmp *%0" : : "r"(_vptr__errno));
}

void _elf__except_handler2() asm("_except_handler2");
void _elf__except_handler2() {
static void *_vptr__except_handler2 = NULL;
load_dll_msvcrt();
if (!_vptr__except_handler2) {
_vptr__except_handler2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_except_handler2");
}
asm("leave\njmp *%0" : : "r"(_vptr__except_handler2));
}

void _elf__except_handler3() asm("_except_handler3");
void _elf__except_handler3() {
static void *_vptr__except_handler3 = NULL;
load_dll_msvcrt();
if (!_vptr__except_handler3) {
_vptr__except_handler3 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_except_handler3");
}
asm("leave\njmp *%0" : : "r"(_vptr__except_handler3));
}

void _elf__execl() asm("_execl");
void _elf__execl() {
static void *_vptr__execl = NULL;
load_dll_msvcrt();
if (!_vptr__execl) {
_vptr__execl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execl");
}
asm("leave\njmp *%0" : : "r"(_vptr__execl));
}

void _elf__execle() asm("_execle");
void _elf__execle() {
static void *_vptr__execle = NULL;
load_dll_msvcrt();
if (!_vptr__execle) {
_vptr__execle = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execle");
}
asm("leave\njmp *%0" : : "r"(_vptr__execle));
}

void _elf__execlp() asm("_execlp");
void _elf__execlp() {
static void *_vptr__execlp = NULL;
load_dll_msvcrt();
if (!_vptr__execlp) {
_vptr__execlp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execlp");
}
asm("leave\njmp *%0" : : "r"(_vptr__execlp));
}

void _elf__execlpe() asm("_execlpe");
void _elf__execlpe() {
static void *_vptr__execlpe = NULL;
load_dll_msvcrt();
if (!_vptr__execlpe) {
_vptr__execlpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execlpe");
}
asm("leave\njmp *%0" : : "r"(_vptr__execlpe));
}

void _elf__execv() asm("_execv");
void _elf__execv() {
static void *_vptr__execv = NULL;
load_dll_msvcrt();
if (!_vptr__execv) {
_vptr__execv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execv");
}
asm("leave\njmp *%0" : : "r"(_vptr__execv));
}

void _elf__execve() asm("_execve");
void _elf__execve() {
static void *_vptr__execve = NULL;
load_dll_msvcrt();
if (!_vptr__execve) {
_vptr__execve = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execve");
}
asm("leave\njmp *%0" : : "r"(_vptr__execve));
}

void _elf__execvp() asm("_execvp");
void _elf__execvp() {
static void *_vptr__execvp = NULL;
load_dll_msvcrt();
if (!_vptr__execvp) {
_vptr__execvp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execvp");
}
asm("leave\njmp *%0" : : "r"(_vptr__execvp));
}

void _elf__execvpe() asm("_execvpe");
void _elf__execvpe() {
static void *_vptr__execvpe = NULL;
load_dll_msvcrt();
if (!_vptr__execvpe) {
_vptr__execvpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execvpe");
}
asm("leave\njmp *%0" : : "r"(_vptr__execvpe));
}

void _elf__exit() asm("_exit");
void _elf__exit() {
static void *_vptr__exit = NULL;
load_dll_msvcrt();
if (!_vptr__exit) {
_vptr__exit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_exit");
}
asm("leave\njmp *%0" : : "r"(_vptr__exit));
}

void _elf__expand() asm("_expand");
void _elf__expand() {
static void *_vptr__expand = NULL;
load_dll_msvcrt();
if (!_vptr__expand) {
_vptr__expand = (void *) _elf_GetProcAddress(_dll_msvcrt, "_expand");
}
asm("leave\njmp *%0" : : "r"(_vptr__expand));
}

void _elf__fcloseall() asm("_fcloseall");
void _elf__fcloseall() {
static void *_vptr__fcloseall = NULL;
load_dll_msvcrt();
if (!_vptr__fcloseall) {
_vptr__fcloseall = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fcloseall");
}
asm("leave\njmp *%0" : : "r"(_vptr__fcloseall));
}

void _elf__fcvt() asm("_fcvt");
void _elf__fcvt() {
static void *_vptr__fcvt = NULL;
load_dll_msvcrt();
if (!_vptr__fcvt) {
_vptr__fcvt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fcvt");
}
asm("leave\njmp *%0" : : "r"(_vptr__fcvt));
}

void _elf__fdopen() asm("_fdopen");
void _elf__fdopen() {
static void *_vptr__fdopen = NULL;
load_dll_msvcrt();
if (!_vptr__fdopen) {
_vptr__fdopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fdopen");
}
asm("leave\njmp *%0" : : "r"(_vptr__fdopen));
}

void _elf__fgetchar() asm("_fgetchar");
void _elf__fgetchar() {
static void *_vptr__fgetchar = NULL;
load_dll_msvcrt();
if (!_vptr__fgetchar) {
_vptr__fgetchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fgetchar");
}
asm("leave\njmp *%0" : : "r"(_vptr__fgetchar));
}

void _elf__fgetwchar() asm("_fgetwchar");
void _elf__fgetwchar() {
static void *_vptr__fgetwchar = NULL;
load_dll_msvcrt();
if (!_vptr__fgetwchar) {
_vptr__fgetwchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fgetwchar");
}
asm("leave\njmp *%0" : : "r"(_vptr__fgetwchar));
}

void _elf__filbuf() asm("_filbuf");
void _elf__filbuf() {
static void *_vptr__filbuf = NULL;
load_dll_msvcrt();
if (!_vptr__filbuf) {
_vptr__filbuf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_filbuf");
}
asm("leave\njmp *%0" : : "r"(_vptr__filbuf));
}

void _elf__fileinfo() asm("_fileinfo");
void _elf__fileinfo() {
static void *_vptr__fileinfo = NULL;
load_dll_msvcrt();
if (!_vptr__fileinfo) {
_vptr__fileinfo = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fileinfo");
}
asm("leave\njmp *%0" : : "r"(_vptr__fileinfo));
}

void _elf__filelength() asm("_filelength");
void _elf__filelength() {
static void *_vptr__filelength = NULL;
load_dll_msvcrt();
if (!_vptr__filelength) {
_vptr__filelength = (void *) _elf_GetProcAddress(_dll_msvcrt, "_filelength");
}
asm("leave\njmp *%0" : : "r"(_vptr__filelength));
}

void _elf__filelengthi64() asm("_filelengthi64");
void _elf__filelengthi64() {
static void *_vptr__filelengthi64 = NULL;
load_dll_msvcrt();
if (!_vptr__filelengthi64) {
_vptr__filelengthi64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_filelengthi64");
}
asm("leave\njmp *%0" : : "r"(_vptr__filelengthi64));
}

void _elf__fileno() asm("_fileno");
void _elf__fileno() {
static void *_vptr__fileno = NULL;
load_dll_msvcrt();
if (!_vptr__fileno) {
_vptr__fileno = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fileno");
}
asm("leave\njmp *%0" : : "r"(_vptr__fileno));
}

void _elf__findclose() asm("_findclose");
void _elf__findclose() {
static void *_vptr__findclose = NULL;
load_dll_msvcrt();
if (!_vptr__findclose) {
_vptr__findclose = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findclose");
}
asm("leave\njmp *%0" : : "r"(_vptr__findclose));
}

void _elf__findfirst() asm("_findfirst");
void _elf__findfirst() {
static void *_vptr__findfirst = NULL;
load_dll_msvcrt();
if (!_vptr__findfirst) {
_vptr__findfirst = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findfirst");
}
asm("leave\njmp *%0" : : "r"(_vptr__findfirst));
}

void _elf__findfirst64() asm("_findfirst64");
void _elf__findfirst64() {
static void *_vptr__findfirst64 = NULL;
load_dll_msvcrt();
if (!_vptr__findfirst64) {
_vptr__findfirst64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findfirst64");
}
asm("leave\njmp *%0" : : "r"(_vptr__findfirst64));
}

void _elf__findfirsti64() asm("_findfirsti64");
void _elf__findfirsti64() {
static void *_vptr__findfirsti64 = NULL;
load_dll_msvcrt();
if (!_vptr__findfirsti64) {
_vptr__findfirsti64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findfirsti64");
}
asm("leave\njmp *%0" : : "r"(_vptr__findfirsti64));
}

void _elf__findnext() asm("_findnext");
void _elf__findnext() {
static void *_vptr__findnext = NULL;
load_dll_msvcrt();
if (!_vptr__findnext) {
_vptr__findnext = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findnext");
}
asm("leave\njmp *%0" : : "r"(_vptr__findnext));
}

void _elf__findnext64() asm("_findnext64");
void _elf__findnext64() {
static void *_vptr__findnext64 = NULL;
load_dll_msvcrt();
if (!_vptr__findnext64) {
_vptr__findnext64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findnext64");
}
asm("leave\njmp *%0" : : "r"(_vptr__findnext64));
}

void _elf__findnexti64() asm("_findnexti64");
void _elf__findnexti64() {
static void *_vptr__findnexti64 = NULL;
load_dll_msvcrt();
if (!_vptr__findnexti64) {
_vptr__findnexti64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findnexti64");
}
asm("leave\njmp *%0" : : "r"(_vptr__findnexti64));
}

void _elf__finite() asm("_finite");
void _elf__finite() {
static void *_vptr__finite = NULL;
load_dll_msvcrt();
if (!_vptr__finite) {
_vptr__finite = (void *) _elf_GetProcAddress(_dll_msvcrt, "_finite");
}
asm("leave\njmp *%0" : : "r"(_vptr__finite));
}

void _elf__flsbuf() asm("_flsbuf");
void _elf__flsbuf() {
static void *_vptr__flsbuf = NULL;
load_dll_msvcrt();
if (!_vptr__flsbuf) {
_vptr__flsbuf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_flsbuf");
}
asm("leave\njmp *%0" : : "r"(_vptr__flsbuf));
}

void _elf__flushall() asm("_flushall");
void _elf__flushall() {
static void *_vptr__flushall = NULL;
load_dll_msvcrt();
if (!_vptr__flushall) {
_vptr__flushall = (void *) _elf_GetProcAddress(_dll_msvcrt, "_flushall");
}
asm("leave\njmp *%0" : : "r"(_vptr__flushall));
}

void _elf__fmode() asm("_fmode");
void _elf__fmode() {
static void *_vptr__fmode = NULL;
load_dll_msvcrt();
if (!_vptr__fmode) {
_vptr__fmode = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fmode");
}
asm("leave\njmp *%0" : : "r"(_vptr__fmode));
}

void _elf__fpclass() asm("_fpclass");
void _elf__fpclass() {
static void *_vptr__fpclass = NULL;
load_dll_msvcrt();
if (!_vptr__fpclass) {
_vptr__fpclass = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fpclass");
}
asm("leave\njmp *%0" : : "r"(_vptr__fpclass));
}

void _elf__fpieee_flt() asm("_fpieee_flt");
void _elf__fpieee_flt() {
static void *_vptr__fpieee_flt = NULL;
load_dll_msvcrt();
if (!_vptr__fpieee_flt) {
_vptr__fpieee_flt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fpieee_flt");
}
asm("leave\njmp *%0" : : "r"(_vptr__fpieee_flt));
}

void _elf__fpreset() asm("_fpreset");
void _elf__fpreset() {
static void *_vptr__fpreset = NULL;
load_dll_msvcrt();
if (!_vptr__fpreset) {
_vptr__fpreset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fpreset");
}
asm("leave\njmp *%0" : : "r"(_vptr__fpreset));
}

void _elf__fputchar() asm("_fputchar");
void _elf__fputchar() {
static void *_vptr__fputchar = NULL;
load_dll_msvcrt();
if (!_vptr__fputchar) {
_vptr__fputchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fputchar");
}
asm("leave\njmp *%0" : : "r"(_vptr__fputchar));
}

void _elf__fputwchar() asm("_fputwchar");
void _elf__fputwchar() {
static void *_vptr__fputwchar = NULL;
load_dll_msvcrt();
if (!_vptr__fputwchar) {
_vptr__fputwchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fputwchar");
}
asm("leave\njmp *%0" : : "r"(_vptr__fputwchar));
}

void _elf__fsopen() asm("_fsopen");
void _elf__fsopen() {
static void *_vptr__fsopen = NULL;
load_dll_msvcrt();
if (!_vptr__fsopen) {
_vptr__fsopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fsopen");
}
asm("leave\njmp *%0" : : "r"(_vptr__fsopen));
}

void _elf__fstat() asm("_fstat");
void _elf__fstat() {
static void *_vptr__fstat = NULL;
load_dll_msvcrt();
if (!_vptr__fstat) {
_vptr__fstat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fstat");
}
asm("leave\njmp *%0" : : "r"(_vptr__fstat));
}

void _elf__fstat64() asm("_fstat64");
void _elf__fstat64() {
static void *_vptr__fstat64 = NULL;
load_dll_msvcrt();
if (!_vptr__fstat64) {
_vptr__fstat64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fstat64");
}
asm("leave\njmp *%0" : : "r"(_vptr__fstat64));
}

void _elf__fstati64() asm("_fstati64");
void _elf__fstati64() {
static void *_vptr__fstati64 = NULL;
load_dll_msvcrt();
if (!_vptr__fstati64) {
_vptr__fstati64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fstati64");
}
asm("leave\njmp *%0" : : "r"(_vptr__fstati64));
}

void _elf__ftime() asm("_ftime");
void _elf__ftime() {
static void *_vptr__ftime = NULL;
load_dll_msvcrt();
if (!_vptr__ftime) {
_vptr__ftime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ftime");
}
asm("leave\njmp *%0" : : "r"(_vptr__ftime));
}

void _elf__ftime64() asm("_ftime64");
void _elf__ftime64() {
static void *_vptr__ftime64 = NULL;
load_dll_msvcrt();
if (!_vptr__ftime64) {
_vptr__ftime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ftime64");
}
asm("leave\njmp *%0" : : "r"(_vptr__ftime64));
}

void _elf__ftol() asm("_ftol");
void _elf__ftol() {
static void *_vptr__ftol = NULL;
load_dll_msvcrt();
if (!_vptr__ftol) {
_vptr__ftol = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ftol");
}
asm("leave\njmp *%0" : : "r"(_vptr__ftol));
}

void _elf__fullpath() asm("_fullpath");
void _elf__fullpath() {
static void *_vptr__fullpath = NULL;
load_dll_msvcrt();
if (!_vptr__fullpath) {
_vptr__fullpath = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fullpath");
}
asm("leave\njmp *%0" : : "r"(_vptr__fullpath));
}

void _elf__futime() asm("_futime");
void _elf__futime() {
static void *_vptr__futime = NULL;
load_dll_msvcrt();
if (!_vptr__futime) {
_vptr__futime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_futime");
}
asm("leave\njmp *%0" : : "r"(_vptr__futime));
}

void _elf__futime64() asm("_futime64");
void _elf__futime64() {
static void *_vptr__futime64 = NULL;
load_dll_msvcrt();
if (!_vptr__futime64) {
_vptr__futime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_futime64");
}
asm("leave\njmp *%0" : : "r"(_vptr__futime64));
}

void _elf__gcvt() asm("_gcvt");
void _elf__gcvt() {
static void *_vptr__gcvt = NULL;
load_dll_msvcrt();
if (!_vptr__gcvt) {
_vptr__gcvt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_gcvt");
}
asm("leave\njmp *%0" : : "r"(_vptr__gcvt));
}

void _elf__get_osfhandle() asm("_get_osfhandle");
void _elf__get_osfhandle() {
static void *_vptr__get_osfhandle = NULL;
load_dll_msvcrt();
if (!_vptr__get_osfhandle) {
_vptr__get_osfhandle = (void *) _elf_GetProcAddress(_dll_msvcrt, "_get_osfhandle");
}
asm("leave\njmp *%0" : : "r"(_vptr__get_osfhandle));
}

void _elf__get_sbh_threshold() asm("_get_sbh_threshold");
void _elf__get_sbh_threshold() {
static void *_vptr__get_sbh_threshold = NULL;
load_dll_msvcrt();
if (!_vptr__get_sbh_threshold) {
_vptr__get_sbh_threshold = (void *) _elf_GetProcAddress(_dll_msvcrt, "_get_sbh_threshold");
}
asm("leave\njmp *%0" : : "r"(_vptr__get_sbh_threshold));
}

void _elf__getch() asm("_getch");
void _elf__getch() {
static void *_vptr__getch = NULL;
load_dll_msvcrt();
if (!_vptr__getch) {
_vptr__getch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getch");
}
asm("leave\njmp *%0" : : "r"(_vptr__getch));
}

void _elf__getche() asm("_getche");
void _elf__getche() {
static void *_vptr__getche = NULL;
load_dll_msvcrt();
if (!_vptr__getche) {
_vptr__getche = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getche");
}
asm("leave\njmp *%0" : : "r"(_vptr__getche));
}

void _elf__getcwd() asm("_getcwd");
void _elf__getcwd() {
static void *_vptr__getcwd = NULL;
load_dll_msvcrt();
if (!_vptr__getcwd) {
_vptr__getcwd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getcwd");
}
asm("leave\njmp *%0" : : "r"(_vptr__getcwd));
}

void _elf__getdcwd() asm("_getdcwd");
void _elf__getdcwd() {
static void *_vptr__getdcwd = NULL;
load_dll_msvcrt();
if (!_vptr__getdcwd) {
_vptr__getdcwd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getdcwd");
}
asm("leave\njmp *%0" : : "r"(_vptr__getdcwd));
}

void _elf__getdiskfree() asm("_getdiskfree");
void _elf__getdiskfree() {
static void *_vptr__getdiskfree = NULL;
load_dll_msvcrt();
if (!_vptr__getdiskfree) {
_vptr__getdiskfree = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getdiskfree");
}
asm("leave\njmp *%0" : : "r"(_vptr__getdiskfree));
}

void _elf__getdllprocaddr() asm("_getdllprocaddr");
void _elf__getdllprocaddr() {
static void *_vptr__getdllprocaddr = NULL;
load_dll_msvcrt();
if (!_vptr__getdllprocaddr) {
_vptr__getdllprocaddr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getdllprocaddr");
}
asm("leave\njmp *%0" : : "r"(_vptr__getdllprocaddr));
}

void _elf__getdrive() asm("_getdrive");
void _elf__getdrive() {
static void *_vptr__getdrive = NULL;
load_dll_msvcrt();
if (!_vptr__getdrive) {
_vptr__getdrive = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getdrive");
}
asm("leave\njmp *%0" : : "r"(_vptr__getdrive));
}

void _elf__getdrives() asm("_getdrives");
void _elf__getdrives() {
static void *_vptr__getdrives = NULL;
load_dll_msvcrt();
if (!_vptr__getdrives) {
_vptr__getdrives = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getdrives");
}
asm("leave\njmp *%0" : : "r"(_vptr__getdrives));
}

void _elf__getmaxstdio() asm("_getmaxstdio");
void _elf__getmaxstdio() {
static void *_vptr__getmaxstdio = NULL;
load_dll_msvcrt();
if (!_vptr__getmaxstdio) {
_vptr__getmaxstdio = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getmaxstdio");
}
asm("leave\njmp *%0" : : "r"(_vptr__getmaxstdio));
}

void _elf__getmbcp() asm("_getmbcp");
void _elf__getmbcp() {
static void *_vptr__getmbcp = NULL;
load_dll_msvcrt();
if (!_vptr__getmbcp) {
_vptr__getmbcp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getmbcp");
}
asm("leave\njmp *%0" : : "r"(_vptr__getmbcp));
}

void _elf__getpid() asm("_getpid");
void _elf__getpid() {
static void *_vptr__getpid = NULL;
load_dll_msvcrt();
if (!_vptr__getpid) {
_vptr__getpid = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getpid");
}
asm("leave\njmp *%0" : : "r"(_vptr__getpid));
}

void _elf__getsystime() asm("_getsystime");
void _elf__getsystime() {
static void *_vptr__getsystime = NULL;
load_dll_msvcrt();
if (!_vptr__getsystime) {
_vptr__getsystime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getsystime");
}
asm("leave\njmp *%0" : : "r"(_vptr__getsystime));
}

void _elf__getw() asm("_getw");
void _elf__getw() {
static void *_vptr__getw = NULL;
load_dll_msvcrt();
if (!_vptr__getw) {
_vptr__getw = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getw");
}
asm("leave\njmp *%0" : : "r"(_vptr__getw));
}

void _elf__getwch() asm("_getwch");
void _elf__getwch() {
static void *_vptr__getwch = NULL;
load_dll_msvcrt();
if (!_vptr__getwch) {
_vptr__getwch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getwch");
}
asm("leave\njmp *%0" : : "r"(_vptr__getwch));
}

void _elf__getwche() asm("_getwche");
void _elf__getwche() {
static void *_vptr__getwche = NULL;
load_dll_msvcrt();
if (!_vptr__getwche) {
_vptr__getwche = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getwche");
}
asm("leave\njmp *%0" : : "r"(_vptr__getwche));
}

void _elf__getws() asm("_getws");
void _elf__getws() {
static void *_vptr__getws = NULL;
load_dll_msvcrt();
if (!_vptr__getws) {
_vptr__getws = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getws");
}
asm("leave\njmp *%0" : : "r"(_vptr__getws));
}

void _elf__global_unwind2() asm("_global_unwind2");
void _elf__global_unwind2() {
static void *_vptr__global_unwind2 = NULL;
load_dll_msvcrt();
if (!_vptr__global_unwind2) {
_vptr__global_unwind2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_global_unwind2");
}
asm("leave\njmp *%0" : : "r"(_vptr__global_unwind2));
}

void _elf__gmtime64() asm("_gmtime64");
void _elf__gmtime64() {
static void *_vptr__gmtime64 = NULL;
load_dll_msvcrt();
if (!_vptr__gmtime64) {
_vptr__gmtime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_gmtime64");
}
asm("leave\njmp *%0" : : "r"(_vptr__gmtime64));
}

void _elf__heapadd() asm("_heapadd");
void _elf__heapadd() {
static void *_vptr__heapadd = NULL;
load_dll_msvcrt();
if (!_vptr__heapadd) {
_vptr__heapadd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_heapadd");
}
asm("leave\njmp *%0" : : "r"(_vptr__heapadd));
}

void _elf__heapchk() asm("_heapchk");
void _elf__heapchk() {
static void *_vptr__heapchk = NULL;
load_dll_msvcrt();
if (!_vptr__heapchk) {
_vptr__heapchk = (void *) _elf_GetProcAddress(_dll_msvcrt, "_heapchk");
}
asm("leave\njmp *%0" : : "r"(_vptr__heapchk));
}

void _elf__heapmin() asm("_heapmin");
void _elf__heapmin() {
static void *_vptr__heapmin = NULL;
load_dll_msvcrt();
if (!_vptr__heapmin) {
_vptr__heapmin = (void *) _elf_GetProcAddress(_dll_msvcrt, "_heapmin");
}
asm("leave\njmp *%0" : : "r"(_vptr__heapmin));
}

void _elf__heapset() asm("_heapset");
void _elf__heapset() {
static void *_vptr__heapset = NULL;
load_dll_msvcrt();
if (!_vptr__heapset) {
_vptr__heapset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_heapset");
}
asm("leave\njmp *%0" : : "r"(_vptr__heapset));
}

void _elf__heapused() asm("_heapused");
void _elf__heapused() {
static void *_vptr__heapused = NULL;
load_dll_msvcrt();
if (!_vptr__heapused) {
_vptr__heapused = (void *) _elf_GetProcAddress(_dll_msvcrt, "_heapused");
}
asm("leave\njmp *%0" : : "r"(_vptr__heapused));
}

void _elf__heapwalk() asm("_heapwalk");
void _elf__heapwalk() {
static void *_vptr__heapwalk = NULL;
load_dll_msvcrt();
if (!_vptr__heapwalk) {
_vptr__heapwalk = (void *) _elf_GetProcAddress(_dll_msvcrt, "_heapwalk");
}
asm("leave\njmp *%0" : : "r"(_vptr__heapwalk));
}

void _elf__hypot() asm("_hypot");
void _elf__hypot() {
static void *_vptr__hypot = NULL;
load_dll_msvcrt();
if (!_vptr__hypot) {
_vptr__hypot = (void *) _elf_GetProcAddress(_dll_msvcrt, "_hypot");
}
asm("leave\njmp *%0" : : "r"(_vptr__hypot));
}

void _elf__i64toa() asm("_i64toa");
void _elf__i64toa() {
static void *_vptr__i64toa = NULL;
load_dll_msvcrt();
if (!_vptr__i64toa) {
_vptr__i64toa = (void *) _elf_GetProcAddress(_dll_msvcrt, "_i64toa");
}
asm("leave\njmp *%0" : : "r"(_vptr__i64toa));
}

void _elf__i64tow() asm("_i64tow");
void _elf__i64tow() {
static void *_vptr__i64tow = NULL;
load_dll_msvcrt();
if (!_vptr__i64tow) {
_vptr__i64tow = (void *) _elf_GetProcAddress(_dll_msvcrt, "_i64tow");
}
asm("leave\njmp *%0" : : "r"(_vptr__i64tow));
}

void _elf__initterm() asm("_initterm");
void _elf__initterm() {
static void *_vptr__initterm = NULL;
load_dll_msvcrt();
if (!_vptr__initterm) {
_vptr__initterm = (void *) _elf_GetProcAddress(_dll_msvcrt, "_initterm");
}
asm("leave\njmp *%0" : : "r"(_vptr__initterm));
}

void _elf__inp() asm("_inp");
void _elf__inp() {
static void *_vptr__inp = NULL;
load_dll_msvcrt();
if (!_vptr__inp) {
_vptr__inp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_inp");
}
asm("leave\njmp *%0" : : "r"(_vptr__inp));
}

void _elf__inpd() asm("_inpd");
void _elf__inpd() {
static void *_vptr__inpd = NULL;
load_dll_msvcrt();
if (!_vptr__inpd) {
_vptr__inpd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_inpd");
}
asm("leave\njmp *%0" : : "r"(_vptr__inpd));
}

void _elf__inpw() asm("_inpw");
void _elf__inpw() {
static void *_vptr__inpw = NULL;
load_dll_msvcrt();
if (!_vptr__inpw) {
_vptr__inpw = (void *) _elf_GetProcAddress(_dll_msvcrt, "_inpw");
}
asm("leave\njmp *%0" : : "r"(_vptr__inpw));
}

void _elf__iob() asm("_iob");
void _elf__iob() {
static void *_vptr__iob = NULL;
load_dll_msvcrt();
if (!_vptr__iob) {
_vptr__iob = (void *) _elf_GetProcAddress(_dll_msvcrt, "_iob");
}
asm("leave\njmp *%0" : : "r"(_vptr__iob));
}

void _elf__isatty() asm("_isatty");
void _elf__isatty() {
static void *_vptr__isatty = NULL;
load_dll_msvcrt();
if (!_vptr__isatty) {
_vptr__isatty = (void *) _elf_GetProcAddress(_dll_msvcrt, "_isatty");
}
asm("leave\njmp *%0" : : "r"(_vptr__isatty));
}

void _elf__isctype() asm("_isctype");
void _elf__isctype() {
static void *_vptr__isctype = NULL;
load_dll_msvcrt();
if (!_vptr__isctype) {
_vptr__isctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_isctype");
}
asm("leave\njmp *%0" : : "r"(_vptr__isctype));
}

void _elf__ismbbalnum() asm("_ismbbalnum");
void _elf__ismbbalnum() {
static void *_vptr__ismbbalnum = NULL;
load_dll_msvcrt();
if (!_vptr__ismbbalnum) {
_vptr__ismbbalnum = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbalnum");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbbalnum));
}

void _elf__ismbbalpha() asm("_ismbbalpha");
void _elf__ismbbalpha() {
static void *_vptr__ismbbalpha = NULL;
load_dll_msvcrt();
if (!_vptr__ismbbalpha) {
_vptr__ismbbalpha = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbalpha");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbbalpha));
}

void _elf__ismbbgraph() asm("_ismbbgraph");
void _elf__ismbbgraph() {
static void *_vptr__ismbbgraph = NULL;
load_dll_msvcrt();
if (!_vptr__ismbbgraph) {
_vptr__ismbbgraph = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbgraph");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbbgraph));
}

void _elf__ismbbkalnum() asm("_ismbbkalnum");
void _elf__ismbbkalnum() {
static void *_vptr__ismbbkalnum = NULL;
load_dll_msvcrt();
if (!_vptr__ismbbkalnum) {
_vptr__ismbbkalnum = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbkalnum");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbbkalnum));
}

void _elf__ismbbkana() asm("_ismbbkana");
void _elf__ismbbkana() {
static void *_vptr__ismbbkana = NULL;
load_dll_msvcrt();
if (!_vptr__ismbbkana) {
_vptr__ismbbkana = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbkana");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbbkana));
}

void _elf__ismbbkprint() asm("_ismbbkprint");
void _elf__ismbbkprint() {
static void *_vptr__ismbbkprint = NULL;
load_dll_msvcrt();
if (!_vptr__ismbbkprint) {
_vptr__ismbbkprint = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbkprint");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbbkprint));
}

void _elf__ismbbkpunct() asm("_ismbbkpunct");
void _elf__ismbbkpunct() {
static void *_vptr__ismbbkpunct = NULL;
load_dll_msvcrt();
if (!_vptr__ismbbkpunct) {
_vptr__ismbbkpunct = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbkpunct");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbbkpunct));
}

void _elf__ismbblead() asm("_ismbblead");
void _elf__ismbblead() {
static void *_vptr__ismbblead = NULL;
load_dll_msvcrt();
if (!_vptr__ismbblead) {
_vptr__ismbblead = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbblead");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbblead));
}

void _elf__ismbbprint() asm("_ismbbprint");
void _elf__ismbbprint() {
static void *_vptr__ismbbprint = NULL;
load_dll_msvcrt();
if (!_vptr__ismbbprint) {
_vptr__ismbbprint = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbprint");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbbprint));
}

void _elf__ismbbpunct() asm("_ismbbpunct");
void _elf__ismbbpunct() {
static void *_vptr__ismbbpunct = NULL;
load_dll_msvcrt();
if (!_vptr__ismbbpunct) {
_vptr__ismbbpunct = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbpunct");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbbpunct));
}

void _elf__ismbbtrail() asm("_ismbbtrail");
void _elf__ismbbtrail() {
static void *_vptr__ismbbtrail = NULL;
load_dll_msvcrt();
if (!_vptr__ismbbtrail) {
_vptr__ismbbtrail = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbtrail");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbbtrail));
}

void _elf__ismbcalnum() asm("_ismbcalnum");
void _elf__ismbcalnum() {
static void *_vptr__ismbcalnum = NULL;
load_dll_msvcrt();
if (!_vptr__ismbcalnum) {
_vptr__ismbcalnum = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcalnum");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbcalnum));
}

void _elf__ismbcalpha() asm("_ismbcalpha");
void _elf__ismbcalpha() {
static void *_vptr__ismbcalpha = NULL;
load_dll_msvcrt();
if (!_vptr__ismbcalpha) {
_vptr__ismbcalpha = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcalpha");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbcalpha));
}

void _elf__ismbcdigit() asm("_ismbcdigit");
void _elf__ismbcdigit() {
static void *_vptr__ismbcdigit = NULL;
load_dll_msvcrt();
if (!_vptr__ismbcdigit) {
_vptr__ismbcdigit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcdigit");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbcdigit));
}

void _elf__ismbcgraph() asm("_ismbcgraph");
void _elf__ismbcgraph() {
static void *_vptr__ismbcgraph = NULL;
load_dll_msvcrt();
if (!_vptr__ismbcgraph) {
_vptr__ismbcgraph = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcgraph");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbcgraph));
}

void _elf__ismbchira() asm("_ismbchira");
void _elf__ismbchira() {
static void *_vptr__ismbchira = NULL;
load_dll_msvcrt();
if (!_vptr__ismbchira) {
_vptr__ismbchira = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbchira");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbchira));
}

void _elf__ismbckata() asm("_ismbckata");
void _elf__ismbckata() {
static void *_vptr__ismbckata = NULL;
load_dll_msvcrt();
if (!_vptr__ismbckata) {
_vptr__ismbckata = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbckata");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbckata));
}

void _elf__ismbcl0() asm("_ismbcl0");
void _elf__ismbcl0() {
static void *_vptr__ismbcl0 = NULL;
load_dll_msvcrt();
if (!_vptr__ismbcl0) {
_vptr__ismbcl0 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcl0");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbcl0));
}

void _elf__ismbcl1() asm("_ismbcl1");
void _elf__ismbcl1() {
static void *_vptr__ismbcl1 = NULL;
load_dll_msvcrt();
if (!_vptr__ismbcl1) {
_vptr__ismbcl1 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcl1");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbcl1));
}

void _elf__ismbcl2() asm("_ismbcl2");
void _elf__ismbcl2() {
static void *_vptr__ismbcl2 = NULL;
load_dll_msvcrt();
if (!_vptr__ismbcl2) {
_vptr__ismbcl2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcl2");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbcl2));
}

void _elf__ismbclegal() asm("_ismbclegal");
void _elf__ismbclegal() {
static void *_vptr__ismbclegal = NULL;
load_dll_msvcrt();
if (!_vptr__ismbclegal) {
_vptr__ismbclegal = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbclegal");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbclegal));
}

void _elf__ismbclower() asm("_ismbclower");
void _elf__ismbclower() {
static void *_vptr__ismbclower = NULL;
load_dll_msvcrt();
if (!_vptr__ismbclower) {
_vptr__ismbclower = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbclower");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbclower));
}

void _elf__ismbcprint() asm("_ismbcprint");
void _elf__ismbcprint() {
static void *_vptr__ismbcprint = NULL;
load_dll_msvcrt();
if (!_vptr__ismbcprint) {
_vptr__ismbcprint = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcprint");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbcprint));
}

void _elf__ismbcpunct() asm("_ismbcpunct");
void _elf__ismbcpunct() {
static void *_vptr__ismbcpunct = NULL;
load_dll_msvcrt();
if (!_vptr__ismbcpunct) {
_vptr__ismbcpunct = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcpunct");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbcpunct));
}

void _elf__ismbcspace() asm("_ismbcspace");
void _elf__ismbcspace() {
static void *_vptr__ismbcspace = NULL;
load_dll_msvcrt();
if (!_vptr__ismbcspace) {
_vptr__ismbcspace = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcspace");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbcspace));
}

void _elf__ismbcsymbol() asm("_ismbcsymbol");
void _elf__ismbcsymbol() {
static void *_vptr__ismbcsymbol = NULL;
load_dll_msvcrt();
if (!_vptr__ismbcsymbol) {
_vptr__ismbcsymbol = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcsymbol");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbcsymbol));
}

void _elf__ismbcupper() asm("_ismbcupper");
void _elf__ismbcupper() {
static void *_vptr__ismbcupper = NULL;
load_dll_msvcrt();
if (!_vptr__ismbcupper) {
_vptr__ismbcupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcupper");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbcupper));
}

void _elf__ismbslead() asm("_ismbslead");
void _elf__ismbslead() {
static void *_vptr__ismbslead = NULL;
load_dll_msvcrt();
if (!_vptr__ismbslead) {
_vptr__ismbslead = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbslead");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbslead));
}

void _elf__ismbstrail() asm("_ismbstrail");
void _elf__ismbstrail() {
static void *_vptr__ismbstrail = NULL;
load_dll_msvcrt();
if (!_vptr__ismbstrail) {
_vptr__ismbstrail = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbstrail");
}
asm("leave\njmp *%0" : : "r"(_vptr__ismbstrail));
}

void _elf__isnan() asm("_isnan");
void _elf__isnan() {
static void *_vptr__isnan = NULL;
load_dll_msvcrt();
if (!_vptr__isnan) {
_vptr__isnan = (void *) _elf_GetProcAddress(_dll_msvcrt, "_isnan");
}
asm("leave\njmp *%0" : : "r"(_vptr__isnan));
}

void _elf__itoa() asm("_itoa");
void _elf__itoa() {
static void *_vptr__itoa = NULL;
load_dll_msvcrt();
if (!_vptr__itoa) {
_vptr__itoa = (void *) _elf_GetProcAddress(_dll_msvcrt, "_itoa");
}
asm("leave\njmp *%0" : : "r"(_vptr__itoa));
}

void _elf__itow() asm("_itow");
void _elf__itow() {
static void *_vptr__itow = NULL;
load_dll_msvcrt();
if (!_vptr__itow) {
_vptr__itow = (void *) _elf_GetProcAddress(_dll_msvcrt, "_itow");
}
asm("leave\njmp *%0" : : "r"(_vptr__itow));
}

void _elf__j0() asm("_j0");
void _elf__j0() {
static void *_vptr__j0 = NULL;
load_dll_msvcrt();
if (!_vptr__j0) {
_vptr__j0 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_j0");
}
asm("leave\njmp *%0" : : "r"(_vptr__j0));
}

void _elf__j1() asm("_j1");
void _elf__j1() {
static void *_vptr__j1 = NULL;
load_dll_msvcrt();
if (!_vptr__j1) {
_vptr__j1 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_j1");
}
asm("leave\njmp *%0" : : "r"(_vptr__j1));
}

void _elf__jn() asm("_jn");
void _elf__jn() {
static void *_vptr__jn = NULL;
load_dll_msvcrt();
if (!_vptr__jn) {
_vptr__jn = (void *) _elf_GetProcAddress(_dll_msvcrt, "_jn");
}
asm("leave\njmp *%0" : : "r"(_vptr__jn));
}

void _elf__kbhit() asm("_kbhit");
void _elf__kbhit() {
static void *_vptr__kbhit = NULL;
load_dll_msvcrt();
if (!_vptr__kbhit) {
_vptr__kbhit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_kbhit");
}
asm("leave\njmp *%0" : : "r"(_vptr__kbhit));
}

void _elf__lfind() asm("_lfind");
void _elf__lfind() {
static void *_vptr__lfind = NULL;
load_dll_msvcrt();
if (!_vptr__lfind) {
_vptr__lfind = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lfind");
}
asm("leave\njmp *%0" : : "r"(_vptr__lfind));
}

void _elf__loaddll() asm("_loaddll");
void _elf__loaddll() {
static void *_vptr__loaddll = NULL;
load_dll_msvcrt();
if (!_vptr__loaddll) {
_vptr__loaddll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_loaddll");
}
asm("leave\njmp *%0" : : "r"(_vptr__loaddll));
}

void _elf__local_unwind2() asm("_local_unwind2");
void _elf__local_unwind2() {
static void *_vptr__local_unwind2 = NULL;
load_dll_msvcrt();
if (!_vptr__local_unwind2) {
_vptr__local_unwind2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_local_unwind2");
}
asm("leave\njmp *%0" : : "r"(_vptr__local_unwind2));
}

void _elf__localtime64() asm("_localtime64");
void _elf__localtime64() {
static void *_vptr__localtime64 = NULL;
load_dll_msvcrt();
if (!_vptr__localtime64) {
_vptr__localtime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_localtime64");
}
asm("leave\njmp *%0" : : "r"(_vptr__localtime64));
}

void _elf__lock() asm("_lock");
void _elf__lock() {
static void *_vptr__lock = NULL;
load_dll_msvcrt();
if (!_vptr__lock) {
_vptr__lock = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lock");
}
asm("leave\njmp *%0" : : "r"(_vptr__lock));
}

void _elf__locking() asm("_locking");
void _elf__locking() {
static void *_vptr__locking = NULL;
load_dll_msvcrt();
if (!_vptr__locking) {
_vptr__locking = (void *) _elf_GetProcAddress(_dll_msvcrt, "_locking");
}
asm("leave\njmp *%0" : : "r"(_vptr__locking));
}

void _elf__logb() asm("_logb");
void _elf__logb() {
static void *_vptr__logb = NULL;
load_dll_msvcrt();
if (!_vptr__logb) {
_vptr__logb = (void *) _elf_GetProcAddress(_dll_msvcrt, "_logb");
}
asm("leave\njmp *%0" : : "r"(_vptr__logb));
}

void _elf__longjmpex() asm("_longjmpex");
void _elf__longjmpex() {
static void *_vptr__longjmpex = NULL;
load_dll_msvcrt();
if (!_vptr__longjmpex) {
_vptr__longjmpex = (void *) _elf_GetProcAddress(_dll_msvcrt, "_longjmpex");
}
asm("leave\njmp *%0" : : "r"(_vptr__longjmpex));
}

void _elf__lrotl() asm("_lrotl");
void _elf__lrotl() {
static void *_vptr__lrotl = NULL;
load_dll_msvcrt();
if (!_vptr__lrotl) {
_vptr__lrotl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lrotl");
}
asm("leave\njmp *%0" : : "r"(_vptr__lrotl));
}

void _elf__lrotr() asm("_lrotr");
void _elf__lrotr() {
static void *_vptr__lrotr = NULL;
load_dll_msvcrt();
if (!_vptr__lrotr) {
_vptr__lrotr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lrotr");
}
asm("leave\njmp *%0" : : "r"(_vptr__lrotr));
}

void _elf__lsearch() asm("_lsearch");
void _elf__lsearch() {
static void *_vptr__lsearch = NULL;
load_dll_msvcrt();
if (!_vptr__lsearch) {
_vptr__lsearch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lsearch");
}
asm("leave\njmp *%0" : : "r"(_vptr__lsearch));
}

void _elf__lseek() asm("_lseek");
void _elf__lseek() {
static void *_vptr__lseek = NULL;
load_dll_msvcrt();
if (!_vptr__lseek) {
_vptr__lseek = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lseek");
}
asm("leave\njmp *%0" : : "r"(_vptr__lseek));
}

void _elf__lseeki64() asm("_lseeki64");
void _elf__lseeki64() {
static void *_vptr__lseeki64 = NULL;
load_dll_msvcrt();
if (!_vptr__lseeki64) {
_vptr__lseeki64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lseeki64");
}
asm("leave\njmp *%0" : : "r"(_vptr__lseeki64));
}

void _elf__ltoa() asm("_ltoa");
void _elf__ltoa() {
static void *_vptr__ltoa = NULL;
load_dll_msvcrt();
if (!_vptr__ltoa) {
_vptr__ltoa = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ltoa");
}
asm("leave\njmp *%0" : : "r"(_vptr__ltoa));
}

void _elf__ltow() asm("_ltow");
void _elf__ltow() {
static void *_vptr__ltow = NULL;
load_dll_msvcrt();
if (!_vptr__ltow) {
_vptr__ltow = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ltow");
}
asm("leave\njmp *%0" : : "r"(_vptr__ltow));
}

void _elf__makepath() asm("_makepath");
void _elf__makepath() {
static void *_vptr__makepath = NULL;
load_dll_msvcrt();
if (!_vptr__makepath) {
_vptr__makepath = (void *) _elf_GetProcAddress(_dll_msvcrt, "_makepath");
}
asm("leave\njmp *%0" : : "r"(_vptr__makepath));
}

void _elf__mbbtombc() asm("_mbbtombc");
void _elf__mbbtombc() {
static void *_vptr__mbbtombc = NULL;
load_dll_msvcrt();
if (!_vptr__mbbtombc) {
_vptr__mbbtombc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbbtombc");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbbtombc));
}

void _elf__mbbtype() asm("_mbbtype");
void _elf__mbbtype() {
static void *_vptr__mbbtype = NULL;
load_dll_msvcrt();
if (!_vptr__mbbtype) {
_vptr__mbbtype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbbtype");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbbtype));
}

void _elf__mbcasemap() asm("_mbcasemap");
void _elf__mbcasemap() {
static void *_vptr__mbcasemap = NULL;
load_dll_msvcrt();
if (!_vptr__mbcasemap) {
_vptr__mbcasemap = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbcasemap");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbcasemap));
}

void _elf__mbccpy() asm("_mbccpy");
void _elf__mbccpy() {
static void *_vptr__mbccpy = NULL;
load_dll_msvcrt();
if (!_vptr__mbccpy) {
_vptr__mbccpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbccpy");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbccpy));
}

void _elf__mbcjistojms() asm("_mbcjistojms");
void _elf__mbcjistojms() {
static void *_vptr__mbcjistojms = NULL;
load_dll_msvcrt();
if (!_vptr__mbcjistojms) {
_vptr__mbcjistojms = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbcjistojms");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbcjistojms));
}

void _elf__mbcjmstojis() asm("_mbcjmstojis");
void _elf__mbcjmstojis() {
static void *_vptr__mbcjmstojis = NULL;
load_dll_msvcrt();
if (!_vptr__mbcjmstojis) {
_vptr__mbcjmstojis = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbcjmstojis");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbcjmstojis));
}

void _elf__mbclen() asm("_mbclen");
void _elf__mbclen() {
static void *_vptr__mbclen = NULL;
load_dll_msvcrt();
if (!_vptr__mbclen) {
_vptr__mbclen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbclen");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbclen));
}

void _elf__mbctohira() asm("_mbctohira");
void _elf__mbctohira() {
static void *_vptr__mbctohira = NULL;
load_dll_msvcrt();
if (!_vptr__mbctohira) {
_vptr__mbctohira = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbctohira");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbctohira));
}

void _elf__mbctokata() asm("_mbctokata");
void _elf__mbctokata() {
static void *_vptr__mbctokata = NULL;
load_dll_msvcrt();
if (!_vptr__mbctokata) {
_vptr__mbctokata = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbctokata");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbctokata));
}

void _elf__mbctolower() asm("_mbctolower");
void _elf__mbctolower() {
static void *_vptr__mbctolower = NULL;
load_dll_msvcrt();
if (!_vptr__mbctolower) {
_vptr__mbctolower = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbctolower");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbctolower));
}

void _elf__mbctombb() asm("_mbctombb");
void _elf__mbctombb() {
static void *_vptr__mbctombb = NULL;
load_dll_msvcrt();
if (!_vptr__mbctombb) {
_vptr__mbctombb = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbctombb");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbctombb));
}

void _elf__mbctoupper() asm("_mbctoupper");
void _elf__mbctoupper() {
static void *_vptr__mbctoupper = NULL;
load_dll_msvcrt();
if (!_vptr__mbctoupper) {
_vptr__mbctoupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbctoupper");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbctoupper));
}

void _elf__mbctype() asm("_mbctype");
void _elf__mbctype() {
static void *_vptr__mbctype = NULL;
load_dll_msvcrt();
if (!_vptr__mbctype) {
_vptr__mbctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbctype");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbctype));
}

void _elf__mbsbtype() asm("_mbsbtype");
void _elf__mbsbtype() {
static void *_vptr__mbsbtype = NULL;
load_dll_msvcrt();
if (!_vptr__mbsbtype) {
_vptr__mbsbtype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsbtype");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsbtype));
}

void _elf__mbscat() asm("_mbscat");
void _elf__mbscat() {
static void *_vptr__mbscat = NULL;
load_dll_msvcrt();
if (!_vptr__mbscat) {
_vptr__mbscat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbscat");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbscat));
}

void _elf__mbschr() asm("_mbschr");
void _elf__mbschr() {
static void *_vptr__mbschr = NULL;
load_dll_msvcrt();
if (!_vptr__mbschr) {
_vptr__mbschr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbschr");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbschr));
}

void _elf__mbscmp() asm("_mbscmp");
void _elf__mbscmp() {
static void *_vptr__mbscmp = NULL;
load_dll_msvcrt();
if (!_vptr__mbscmp) {
_vptr__mbscmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbscmp");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbscmp));
}

void _elf__mbscoll() asm("_mbscoll");
void _elf__mbscoll() {
static void *_vptr__mbscoll = NULL;
load_dll_msvcrt();
if (!_vptr__mbscoll) {
_vptr__mbscoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbscoll");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbscoll));
}

void _elf__mbscpy() asm("_mbscpy");
void _elf__mbscpy() {
static void *_vptr__mbscpy = NULL;
load_dll_msvcrt();
if (!_vptr__mbscpy) {
_vptr__mbscpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbscpy");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbscpy));
}

void _elf__mbscspn() asm("_mbscspn");
void _elf__mbscspn() {
static void *_vptr__mbscspn = NULL;
load_dll_msvcrt();
if (!_vptr__mbscspn) {
_vptr__mbscspn = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbscspn");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbscspn));
}

void _elf__mbsdec() asm("_mbsdec");
void _elf__mbsdec() {
static void *_vptr__mbsdec = NULL;
load_dll_msvcrt();
if (!_vptr__mbsdec) {
_vptr__mbsdec = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsdec");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsdec));
}

void _elf__mbsdup() asm("_mbsdup");
void _elf__mbsdup() {
static void *_vptr__mbsdup = NULL;
load_dll_msvcrt();
if (!_vptr__mbsdup) {
_vptr__mbsdup = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsdup");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsdup));
}

void _elf__mbsicmp() asm("_mbsicmp");
void _elf__mbsicmp() {
static void *_vptr__mbsicmp = NULL;
load_dll_msvcrt();
if (!_vptr__mbsicmp) {
_vptr__mbsicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsicmp");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsicmp));
}

void _elf__mbsicoll() asm("_mbsicoll");
void _elf__mbsicoll() {
static void *_vptr__mbsicoll = NULL;
load_dll_msvcrt();
if (!_vptr__mbsicoll) {
_vptr__mbsicoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsicoll");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsicoll));
}

void _elf__mbsinc() asm("_mbsinc");
void _elf__mbsinc() {
static void *_vptr__mbsinc = NULL;
load_dll_msvcrt();
if (!_vptr__mbsinc) {
_vptr__mbsinc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsinc");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsinc));
}

void _elf__mbslen() asm("_mbslen");
void _elf__mbslen() {
static void *_vptr__mbslen = NULL;
load_dll_msvcrt();
if (!_vptr__mbslen) {
_vptr__mbslen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbslen");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbslen));
}

void _elf__mbslwr() asm("_mbslwr");
void _elf__mbslwr() {
static void *_vptr__mbslwr = NULL;
load_dll_msvcrt();
if (!_vptr__mbslwr) {
_vptr__mbslwr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbslwr");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbslwr));
}

void _elf__mbsnbcat() asm("_mbsnbcat");
void _elf__mbsnbcat() {
static void *_vptr__mbsnbcat = NULL;
load_dll_msvcrt();
if (!_vptr__mbsnbcat) {
_vptr__mbsnbcat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbcat");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsnbcat));
}

void _elf__mbsnbcmp() asm("_mbsnbcmp");
void _elf__mbsnbcmp() {
static void *_vptr__mbsnbcmp = NULL;
load_dll_msvcrt();
if (!_vptr__mbsnbcmp) {
_vptr__mbsnbcmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbcmp");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsnbcmp));
}

void _elf__mbsnbcnt() asm("_mbsnbcnt");
void _elf__mbsnbcnt() {
static void *_vptr__mbsnbcnt = NULL;
load_dll_msvcrt();
if (!_vptr__mbsnbcnt) {
_vptr__mbsnbcnt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbcnt");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsnbcnt));
}

void _elf__mbsnbcoll() asm("_mbsnbcoll");
void _elf__mbsnbcoll() {
static void *_vptr__mbsnbcoll = NULL;
load_dll_msvcrt();
if (!_vptr__mbsnbcoll) {
_vptr__mbsnbcoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbcoll");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsnbcoll));
}

void _elf__mbsnbcpy() asm("_mbsnbcpy");
void _elf__mbsnbcpy() {
static void *_vptr__mbsnbcpy = NULL;
load_dll_msvcrt();
if (!_vptr__mbsnbcpy) {
_vptr__mbsnbcpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbcpy");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsnbcpy));
}

void _elf__mbsnbicmp() asm("_mbsnbicmp");
void _elf__mbsnbicmp() {
static void *_vptr__mbsnbicmp = NULL;
load_dll_msvcrt();
if (!_vptr__mbsnbicmp) {
_vptr__mbsnbicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbicmp");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsnbicmp));
}

void _elf__mbsnbicoll() asm("_mbsnbicoll");
void _elf__mbsnbicoll() {
static void *_vptr__mbsnbicoll = NULL;
load_dll_msvcrt();
if (!_vptr__mbsnbicoll) {
_vptr__mbsnbicoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbicoll");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsnbicoll));
}

void _elf__mbsnbset() asm("_mbsnbset");
void _elf__mbsnbset() {
static void *_vptr__mbsnbset = NULL;
load_dll_msvcrt();
if (!_vptr__mbsnbset) {
_vptr__mbsnbset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbset");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsnbset));
}

void _elf__mbsncat() asm("_mbsncat");
void _elf__mbsncat() {
static void *_vptr__mbsncat = NULL;
load_dll_msvcrt();
if (!_vptr__mbsncat) {
_vptr__mbsncat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsncat");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsncat));
}

void _elf__mbsnccnt() asm("_mbsnccnt");
void _elf__mbsnccnt() {
static void *_vptr__mbsnccnt = NULL;
load_dll_msvcrt();
if (!_vptr__mbsnccnt) {
_vptr__mbsnccnt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnccnt");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsnccnt));
}

void _elf__mbsncmp() asm("_mbsncmp");
void _elf__mbsncmp() {
static void *_vptr__mbsncmp = NULL;
load_dll_msvcrt();
if (!_vptr__mbsncmp) {
_vptr__mbsncmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsncmp");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsncmp));
}

void _elf__mbsncoll() asm("_mbsncoll");
void _elf__mbsncoll() {
static void *_vptr__mbsncoll = NULL;
load_dll_msvcrt();
if (!_vptr__mbsncoll) {
_vptr__mbsncoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsncoll");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsncoll));
}

void _elf__mbsncpy() asm("_mbsncpy");
void _elf__mbsncpy() {
static void *_vptr__mbsncpy = NULL;
load_dll_msvcrt();
if (!_vptr__mbsncpy) {
_vptr__mbsncpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsncpy");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsncpy));
}

void _elf__mbsnextc() asm("_mbsnextc");
void _elf__mbsnextc() {
static void *_vptr__mbsnextc = NULL;
load_dll_msvcrt();
if (!_vptr__mbsnextc) {
_vptr__mbsnextc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnextc");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsnextc));
}

void _elf__mbsnicmp() asm("_mbsnicmp");
void _elf__mbsnicmp() {
static void *_vptr__mbsnicmp = NULL;
load_dll_msvcrt();
if (!_vptr__mbsnicmp) {
_vptr__mbsnicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnicmp");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsnicmp));
}

void _elf__mbsnicoll() asm("_mbsnicoll");
void _elf__mbsnicoll() {
static void *_vptr__mbsnicoll = NULL;
load_dll_msvcrt();
if (!_vptr__mbsnicoll) {
_vptr__mbsnicoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnicoll");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsnicoll));
}

void _elf__mbsninc() asm("_mbsninc");
void _elf__mbsninc() {
static void *_vptr__mbsninc = NULL;
load_dll_msvcrt();
if (!_vptr__mbsninc) {
_vptr__mbsninc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsninc");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsninc));
}

void _elf__mbsnset() asm("_mbsnset");
void _elf__mbsnset() {
static void *_vptr__mbsnset = NULL;
load_dll_msvcrt();
if (!_vptr__mbsnset) {
_vptr__mbsnset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnset");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsnset));
}

void _elf__mbspbrk() asm("_mbspbrk");
void _elf__mbspbrk() {
static void *_vptr__mbspbrk = NULL;
load_dll_msvcrt();
if (!_vptr__mbspbrk) {
_vptr__mbspbrk = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbspbrk");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbspbrk));
}

void _elf__mbsrchr() asm("_mbsrchr");
void _elf__mbsrchr() {
static void *_vptr__mbsrchr = NULL;
load_dll_msvcrt();
if (!_vptr__mbsrchr) {
_vptr__mbsrchr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsrchr");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsrchr));
}

void _elf__mbsrev() asm("_mbsrev");
void _elf__mbsrev() {
static void *_vptr__mbsrev = NULL;
load_dll_msvcrt();
if (!_vptr__mbsrev) {
_vptr__mbsrev = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsrev");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsrev));
}

void _elf__mbsset() asm("_mbsset");
void _elf__mbsset() {
static void *_vptr__mbsset = NULL;
load_dll_msvcrt();
if (!_vptr__mbsset) {
_vptr__mbsset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsset");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsset));
}

void _elf__mbsspn() asm("_mbsspn");
void _elf__mbsspn() {
static void *_vptr__mbsspn = NULL;
load_dll_msvcrt();
if (!_vptr__mbsspn) {
_vptr__mbsspn = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsspn");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsspn));
}

void _elf__mbsspnp() asm("_mbsspnp");
void _elf__mbsspnp() {
static void *_vptr__mbsspnp = NULL;
load_dll_msvcrt();
if (!_vptr__mbsspnp) {
_vptr__mbsspnp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsspnp");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsspnp));
}

void _elf__mbsstr() asm("_mbsstr");
void _elf__mbsstr() {
static void *_vptr__mbsstr = NULL;
load_dll_msvcrt();
if (!_vptr__mbsstr) {
_vptr__mbsstr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsstr");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsstr));
}

void _elf__mbstok() asm("_mbstok");
void _elf__mbstok() {
static void *_vptr__mbstok = NULL;
load_dll_msvcrt();
if (!_vptr__mbstok) {
_vptr__mbstok = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbstok");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbstok));
}

void _elf__mbstrlen() asm("_mbstrlen");
void _elf__mbstrlen() {
static void *_vptr__mbstrlen = NULL;
load_dll_msvcrt();
if (!_vptr__mbstrlen) {
_vptr__mbstrlen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbstrlen");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbstrlen));
}

void _elf__mbsupr() asm("_mbsupr");
void _elf__mbsupr() {
static void *_vptr__mbsupr = NULL;
load_dll_msvcrt();
if (!_vptr__mbsupr) {
_vptr__mbsupr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsupr");
}
asm("leave\njmp *%0" : : "r"(_vptr__mbsupr));
}

void _elf__memccpy() asm("_memccpy");
void _elf__memccpy() {
static void *_vptr__memccpy = NULL;
load_dll_msvcrt();
if (!_vptr__memccpy) {
_vptr__memccpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "_memccpy");
}
asm("leave\njmp *%0" : : "r"(_vptr__memccpy));
}

void _elf__memicmp() asm("_memicmp");
void _elf__memicmp() {
static void *_vptr__memicmp = NULL;
load_dll_msvcrt();
if (!_vptr__memicmp) {
_vptr__memicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_memicmp");
}
asm("leave\njmp *%0" : : "r"(_vptr__memicmp));
}

void _elf__mkdir() asm("_mkdir");
void _elf__mkdir() {
static void *_vptr__mkdir = NULL;
load_dll_msvcrt();
if (!_vptr__mkdir) {
_vptr__mkdir = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mkdir");
}
asm("leave\njmp *%0" : : "r"(_vptr__mkdir));
}

void _elf__mktemp() asm("_mktemp");
void _elf__mktemp() {
static void *_vptr__mktemp = NULL;
load_dll_msvcrt();
if (!_vptr__mktemp) {
_vptr__mktemp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mktemp");
}
asm("leave\njmp *%0" : : "r"(_vptr__mktemp));
}

void _elf__mktime64() asm("_mktime64");
void _elf__mktime64() {
static void *_vptr__mktime64 = NULL;
load_dll_msvcrt();
if (!_vptr__mktime64) {
_vptr__mktime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mktime64");
}
asm("leave\njmp *%0" : : "r"(_vptr__mktime64));
}

void _elf__msize() asm("_msize");
void _elf__msize() {
static void *_vptr__msize = NULL;
load_dll_msvcrt();
if (!_vptr__msize) {
_vptr__msize = (void *) _elf_GetProcAddress(_dll_msvcrt, "_msize");
}
asm("leave\njmp *%0" : : "r"(_vptr__msize));
}

void _elf__nextafter() asm("_nextafter");
void _elf__nextafter() {
static void *_vptr__nextafter = NULL;
load_dll_msvcrt();
if (!_vptr__nextafter) {
_vptr__nextafter = (void *) _elf_GetProcAddress(_dll_msvcrt, "_nextafter");
}
asm("leave\njmp *%0" : : "r"(_vptr__nextafter));
}

void _elf__onexit() asm("_onexit");
void _elf__onexit() {
static void *_vptr__onexit = NULL;
load_dll_msvcrt();
if (!_vptr__onexit) {
_vptr__onexit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_onexit");
}
asm("leave\njmp *%0" : : "r"(_vptr__onexit));
}

void _elf__open() asm("_open");
void _elf__open() {
static void *_vptr__open = NULL;
load_dll_msvcrt();
if (!_vptr__open) {
_vptr__open = (void *) _elf_GetProcAddress(_dll_msvcrt, "_open");
}
asm("leave\njmp *%0" : : "r"(_vptr__open));
}

void _elf__open_osfhandle() asm("_open_osfhandle");
void _elf__open_osfhandle() {
static void *_vptr__open_osfhandle = NULL;
load_dll_msvcrt();
if (!_vptr__open_osfhandle) {
_vptr__open_osfhandle = (void *) _elf_GetProcAddress(_dll_msvcrt, "_open_osfhandle");
}
asm("leave\njmp *%0" : : "r"(_vptr__open_osfhandle));
}

void _elf__osplatform() asm("_osplatform");
void _elf__osplatform() {
static void *_vptr__osplatform = NULL;
load_dll_msvcrt();
if (!_vptr__osplatform) {
_vptr__osplatform = (void *) _elf_GetProcAddress(_dll_msvcrt, "_osplatform");
}
asm("leave\njmp *%0" : : "r"(_vptr__osplatform));
}

void _elf__osver() asm("_osver");
void _elf__osver() {
static void *_vptr__osver = NULL;
load_dll_msvcrt();
if (!_vptr__osver) {
_vptr__osver = (void *) _elf_GetProcAddress(_dll_msvcrt, "_osver");
}
asm("leave\njmp *%0" : : "r"(_vptr__osver));
}

void _elf__outp() asm("_outp");
void _elf__outp() {
static void *_vptr__outp = NULL;
load_dll_msvcrt();
if (!_vptr__outp) {
_vptr__outp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_outp");
}
asm("leave\njmp *%0" : : "r"(_vptr__outp));
}

void _elf__outpd() asm("_outpd");
void _elf__outpd() {
static void *_vptr__outpd = NULL;
load_dll_msvcrt();
if (!_vptr__outpd) {
_vptr__outpd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_outpd");
}
asm("leave\njmp *%0" : : "r"(_vptr__outpd));
}

void _elf__outpw() asm("_outpw");
void _elf__outpw() {
static void *_vptr__outpw = NULL;
load_dll_msvcrt();
if (!_vptr__outpw) {
_vptr__outpw = (void *) _elf_GetProcAddress(_dll_msvcrt, "_outpw");
}
asm("leave\njmp *%0" : : "r"(_vptr__outpw));
}

void _elf__pclose() asm("_pclose");
void _elf__pclose() {
static void *_vptr__pclose = NULL;
load_dll_msvcrt();
if (!_vptr__pclose) {
_vptr__pclose = (void *) _elf_GetProcAddress(_dll_msvcrt, "_pclose");
}
asm("leave\njmp *%0" : : "r"(_vptr__pclose));
}

void _elf__pctype() asm("_pctype");
void _elf__pctype() {
static void *_vptr__pctype = NULL;
load_dll_msvcrt();
if (!_vptr__pctype) {
_vptr__pctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_pctype");
}
asm("leave\njmp *%0" : : "r"(_vptr__pctype));
}

void _elf__pgmptr() asm("_pgmptr");
void _elf__pgmptr() {
static void *_vptr__pgmptr = NULL;
load_dll_msvcrt();
if (!_vptr__pgmptr) {
_vptr__pgmptr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_pgmptr");
}
asm("leave\njmp *%0" : : "r"(_vptr__pgmptr));
}

void _elf__pipe() asm("_pipe");
void _elf__pipe() {
static void *_vptr__pipe = NULL;
load_dll_msvcrt();
if (!_vptr__pipe) {
_vptr__pipe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_pipe");
}
asm("leave\njmp *%0" : : "r"(_vptr__pipe));
}

void _elf__popen() asm("_popen");
void _elf__popen() {
static void *_vptr__popen = NULL;
load_dll_msvcrt();
if (!_vptr__popen) {
_vptr__popen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_popen");
}
asm("leave\njmp *%0" : : "r"(_vptr__popen));
}

void _elf__purecall() asm("_purecall");
void _elf__purecall() {
static void *_vptr__purecall = NULL;
load_dll_msvcrt();
if (!_vptr__purecall) {
_vptr__purecall = (void *) _elf_GetProcAddress(_dll_msvcrt, "_purecall");
}
asm("leave\njmp *%0" : : "r"(_vptr__purecall));
}

void _elf__putch() asm("_putch");
void _elf__putch() {
static void *_vptr__putch = NULL;
load_dll_msvcrt();
if (!_vptr__putch) {
_vptr__putch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_putch");
}
asm("leave\njmp *%0" : : "r"(_vptr__putch));
}

void _elf__putenv() asm("_putenv");
void _elf__putenv() {
static void *_vptr__putenv = NULL;
load_dll_msvcrt();
if (!_vptr__putenv) {
_vptr__putenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_putenv");
}
asm("leave\njmp *%0" : : "r"(_vptr__putenv));
}

void _elf__putw() asm("_putw");
void _elf__putw() {
static void *_vptr__putw = NULL;
load_dll_msvcrt();
if (!_vptr__putw) {
_vptr__putw = (void *) _elf_GetProcAddress(_dll_msvcrt, "_putw");
}
asm("leave\njmp *%0" : : "r"(_vptr__putw));
}

void _elf__putwch() asm("_putwch");
void _elf__putwch() {
static void *_vptr__putwch = NULL;
load_dll_msvcrt();
if (!_vptr__putwch) {
_vptr__putwch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_putwch");
}
asm("leave\njmp *%0" : : "r"(_vptr__putwch));
}

void _elf__putws() asm("_putws");
void _elf__putws() {
static void *_vptr__putws = NULL;
load_dll_msvcrt();
if (!_vptr__putws) {
_vptr__putws = (void *) _elf_GetProcAddress(_dll_msvcrt, "_putws");
}
asm("leave\njmp *%0" : : "r"(_vptr__putws));
}

void _elf__pwctype() asm("_pwctype");
void _elf__pwctype() {
static void *_vptr__pwctype = NULL;
load_dll_msvcrt();
if (!_vptr__pwctype) {
_vptr__pwctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_pwctype");
}
asm("leave\njmp *%0" : : "r"(_vptr__pwctype));
}

void _elf__read() asm("_read");
void _elf__read() {
static void *_vptr__read = NULL;
load_dll_msvcrt();
if (!_vptr__read) {
_vptr__read = (void *) _elf_GetProcAddress(_dll_msvcrt, "_read");
}
asm("leave\njmp *%0" : : "r"(_vptr__read));
}

void _elf__resetstkoflw() asm("_resetstkoflw");
void _elf__resetstkoflw() {
static void *_vptr__resetstkoflw = NULL;
load_dll_msvcrt();
if (!_vptr__resetstkoflw) {
_vptr__resetstkoflw = (void *) _elf_GetProcAddress(_dll_msvcrt, "_resetstkoflw");
}
asm("leave\njmp *%0" : : "r"(_vptr__resetstkoflw));
}

void _elf__rmdir() asm("_rmdir");
void _elf__rmdir() {
static void *_vptr__rmdir = NULL;
load_dll_msvcrt();
if (!_vptr__rmdir) {
_vptr__rmdir = (void *) _elf_GetProcAddress(_dll_msvcrt, "_rmdir");
}
asm("leave\njmp *%0" : : "r"(_vptr__rmdir));
}

void _elf__rmtmp() asm("_rmtmp");
void _elf__rmtmp() {
static void *_vptr__rmtmp = NULL;
load_dll_msvcrt();
if (!_vptr__rmtmp) {
_vptr__rmtmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_rmtmp");
}
asm("leave\njmp *%0" : : "r"(_vptr__rmtmp));
}

void _elf__rotl() asm("_rotl");
void _elf__rotl() {
static void *_vptr__rotl = NULL;
load_dll_msvcrt();
if (!_vptr__rotl) {
_vptr__rotl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_rotl");
}
asm("leave\njmp *%0" : : "r"(_vptr__rotl));
}

void _elf__rotr() asm("_rotr");
void _elf__rotr() {
static void *_vptr__rotr = NULL;
load_dll_msvcrt();
if (!_vptr__rotr) {
_vptr__rotr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_rotr");
}
asm("leave\njmp *%0" : : "r"(_vptr__rotr));
}

void _elf__safe_fdiv() asm("_safe_fdiv");
void _elf__safe_fdiv() {
static void *_vptr__safe_fdiv = NULL;
load_dll_msvcrt();
if (!_vptr__safe_fdiv) {
_vptr__safe_fdiv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_safe_fdiv");
}
asm("leave\njmp *%0" : : "r"(_vptr__safe_fdiv));
}

void _elf__safe_fdivr() asm("_safe_fdivr");
void _elf__safe_fdivr() {
static void *_vptr__safe_fdivr = NULL;
load_dll_msvcrt();
if (!_vptr__safe_fdivr) {
_vptr__safe_fdivr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_safe_fdivr");
}
asm("leave\njmp *%0" : : "r"(_vptr__safe_fdivr));
}

void _elf__safe_fprem() asm("_safe_fprem");
void _elf__safe_fprem() {
static void *_vptr__safe_fprem = NULL;
load_dll_msvcrt();
if (!_vptr__safe_fprem) {
_vptr__safe_fprem = (void *) _elf_GetProcAddress(_dll_msvcrt, "_safe_fprem");
}
asm("leave\njmp *%0" : : "r"(_vptr__safe_fprem));
}

void _elf__safe_fprem1() asm("_safe_fprem1");
void _elf__safe_fprem1() {
static void *_vptr__safe_fprem1 = NULL;
load_dll_msvcrt();
if (!_vptr__safe_fprem1) {
_vptr__safe_fprem1 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_safe_fprem1");
}
asm("leave\njmp *%0" : : "r"(_vptr__safe_fprem1));
}

void _elf__scalb() asm("_scalb");
void _elf__scalb() {
static void *_vptr__scalb = NULL;
load_dll_msvcrt();
if (!_vptr__scalb) {
_vptr__scalb = (void *) _elf_GetProcAddress(_dll_msvcrt, "_scalb");
}
asm("leave\njmp *%0" : : "r"(_vptr__scalb));
}

void _elf__scprintf() asm("_scprintf");
void _elf__scprintf() {
static void *_vptr__scprintf = NULL;
load_dll_msvcrt();
if (!_vptr__scprintf) {
_vptr__scprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_scprintf");
}
asm("leave\njmp *%0" : : "r"(_vptr__scprintf));
}

void _elf__scwprintf() asm("_scwprintf");
void _elf__scwprintf() {
static void *_vptr__scwprintf = NULL;
load_dll_msvcrt();
if (!_vptr__scwprintf) {
_vptr__scwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_scwprintf");
}
asm("leave\njmp *%0" : : "r"(_vptr__scwprintf));
}

void _elf__searchenv() asm("_searchenv");
void _elf__searchenv() {
static void *_vptr__searchenv = NULL;
load_dll_msvcrt();
if (!_vptr__searchenv) {
_vptr__searchenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_searchenv");
}
asm("leave\njmp *%0" : : "r"(_vptr__searchenv));
}

void _elf__seh_longjmp_unwind() asm("_seh_longjmp_unwind");
void _elf__seh_longjmp_unwind() {
static void *_vptr__seh_longjmp_unwind = NULL;
load_dll_msvcrt();
if (!_vptr__seh_longjmp_unwind) {
_vptr__seh_longjmp_unwind = (void *) _elf_GetProcAddress(_dll_msvcrt, "_seh_longjmp_unwind");
}
asm("leave\njmp *%0" : : "r"(_vptr__seh_longjmp_unwind));
}

void _elf__set_SSE2_enable() asm("_set_SSE2_enable");
void _elf__set_SSE2_enable() {
static void *_vptr__set_SSE2_enable = NULL;
load_dll_msvcrt();
if (!_vptr__set_SSE2_enable) {
_vptr__set_SSE2_enable = (void *) _elf_GetProcAddress(_dll_msvcrt, "_set_SSE2_enable");
}
asm("leave\njmp *%0" : : "r"(_vptr__set_SSE2_enable));
}

void _elf__set_error_mode() asm("_set_error_mode");
void _elf__set_error_mode() {
static void *_vptr__set_error_mode = NULL;
load_dll_msvcrt();
if (!_vptr__set_error_mode) {
_vptr__set_error_mode = (void *) _elf_GetProcAddress(_dll_msvcrt, "_set_error_mode");
}
asm("leave\njmp *%0" : : "r"(_vptr__set_error_mode));
}

void _elf__set_sbh_threshold() asm("_set_sbh_threshold");
void _elf__set_sbh_threshold() {
static void *_vptr__set_sbh_threshold = NULL;
load_dll_msvcrt();
if (!_vptr__set_sbh_threshold) {
_vptr__set_sbh_threshold = (void *) _elf_GetProcAddress(_dll_msvcrt, "_set_sbh_threshold");
}
asm("leave\njmp *%0" : : "r"(_vptr__set_sbh_threshold));
}

void _elf__seterrormode() asm("_seterrormode");
void _elf__seterrormode() {
static void *_vptr__seterrormode = NULL;
load_dll_msvcrt();
if (!_vptr__seterrormode) {
_vptr__seterrormode = (void *) _elf_GetProcAddress(_dll_msvcrt, "_seterrormode");
}
asm("leave\njmp *%0" : : "r"(_vptr__seterrormode));
}

void _elf__setjmp() asm("_setjmp");
void _elf__setjmp() {
static void *_vptr__setjmp = NULL;
load_dll_msvcrt();
if (!_vptr__setjmp) {
_vptr__setjmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_setjmp");
}
asm("leave\njmp *%0" : : "r"(_vptr__setjmp));
}

void _elf__setjmp3() asm("_setjmp3");
void _elf__setjmp3() {
static void *_vptr__setjmp3 = NULL;
load_dll_msvcrt();
if (!_vptr__setjmp3) {
_vptr__setjmp3 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_setjmp3");
}
asm("leave\njmp *%0" : : "r"(_vptr__setjmp3));
}

void _elf__setmaxstdio() asm("_setmaxstdio");
void _elf__setmaxstdio() {
static void *_vptr__setmaxstdio = NULL;
load_dll_msvcrt();
if (!_vptr__setmaxstdio) {
_vptr__setmaxstdio = (void *) _elf_GetProcAddress(_dll_msvcrt, "_setmaxstdio");
}
asm("leave\njmp *%0" : : "r"(_vptr__setmaxstdio));
}

void _elf__setmbcp() asm("_setmbcp");
void _elf__setmbcp() {
static void *_vptr__setmbcp = NULL;
load_dll_msvcrt();
if (!_vptr__setmbcp) {
_vptr__setmbcp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_setmbcp");
}
asm("leave\njmp *%0" : : "r"(_vptr__setmbcp));
}

void _elf__setmode() asm("_setmode");
void _elf__setmode() {
static void *_vptr__setmode = NULL;
load_dll_msvcrt();
if (!_vptr__setmode) {
_vptr__setmode = (void *) _elf_GetProcAddress(_dll_msvcrt, "_setmode");
}
asm("leave\njmp *%0" : : "r"(_vptr__setmode));
}

void _elf__setsystime() asm("_setsystime");
void _elf__setsystime() {
static void *_vptr__setsystime = NULL;
load_dll_msvcrt();
if (!_vptr__setsystime) {
_vptr__setsystime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_setsystime");
}
asm("leave\njmp *%0" : : "r"(_vptr__setsystime));
}

void _elf__sleep() asm("_sleep");
void _elf__sleep() {
static void *_vptr__sleep = NULL;
load_dll_msvcrt();
if (!_vptr__sleep) {
_vptr__sleep = (void *) _elf_GetProcAddress(_dll_msvcrt, "_sleep");
}
asm("leave\njmp *%0" : : "r"(_vptr__sleep));
}

void _elf__snprintf() asm("_snprintf");
void _elf__snprintf() {
static void *_vptr__snprintf = NULL;
load_dll_msvcrt();
if (!_vptr__snprintf) {
_vptr__snprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_snprintf");
}
asm("leave\njmp *%0" : : "r"(_vptr__snprintf));
}

void _elf__snscanf() asm("_snscanf");
void _elf__snscanf() {
static void *_vptr__snscanf = NULL;
load_dll_msvcrt();
if (!_vptr__snscanf) {
_vptr__snscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_snscanf");
}
asm("leave\njmp *%0" : : "r"(_vptr__snscanf));
}

void _elf__snwprintf() asm("_snwprintf");
void _elf__snwprintf() {
static void *_vptr__snwprintf = NULL;
load_dll_msvcrt();
if (!_vptr__snwprintf) {
_vptr__snwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_snwprintf");
}
asm("leave\njmp *%0" : : "r"(_vptr__snwprintf));
}

void _elf__snwscanf() asm("_snwscanf");
void _elf__snwscanf() {
static void *_vptr__snwscanf = NULL;
load_dll_msvcrt();
if (!_vptr__snwscanf) {
_vptr__snwscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_snwscanf");
}
asm("leave\njmp *%0" : : "r"(_vptr__snwscanf));
}

void _elf__sopen() asm("_sopen");
void _elf__sopen() {
static void *_vptr__sopen = NULL;
load_dll_msvcrt();
if (!_vptr__sopen) {
_vptr__sopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_sopen");
}
asm("leave\njmp *%0" : : "r"(_vptr__sopen));
}

void _elf__spawnl() asm("_spawnl");
void _elf__spawnl() {
static void *_vptr__spawnl = NULL;
load_dll_msvcrt();
if (!_vptr__spawnl) {
_vptr__spawnl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnl");
}
asm("leave\njmp *%0" : : "r"(_vptr__spawnl));
}

void _elf__spawnle() asm("_spawnle");
void _elf__spawnle() {
static void *_vptr__spawnle = NULL;
load_dll_msvcrt();
if (!_vptr__spawnle) {
_vptr__spawnle = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnle");
}
asm("leave\njmp *%0" : : "r"(_vptr__spawnle));
}

void _elf__spawnlp() asm("_spawnlp");
void _elf__spawnlp() {
static void *_vptr__spawnlp = NULL;
load_dll_msvcrt();
if (!_vptr__spawnlp) {
_vptr__spawnlp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnlp");
}
asm("leave\njmp *%0" : : "r"(_vptr__spawnlp));
}

void _elf__spawnlpe() asm("_spawnlpe");
void _elf__spawnlpe() {
static void *_vptr__spawnlpe = NULL;
load_dll_msvcrt();
if (!_vptr__spawnlpe) {
_vptr__spawnlpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnlpe");
}
asm("leave\njmp *%0" : : "r"(_vptr__spawnlpe));
}

void _elf__spawnv() asm("_spawnv");
void _elf__spawnv() {
static void *_vptr__spawnv = NULL;
load_dll_msvcrt();
if (!_vptr__spawnv) {
_vptr__spawnv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnv");
}
asm("leave\njmp *%0" : : "r"(_vptr__spawnv));
}

void _elf__spawnve() asm("_spawnve");
void _elf__spawnve() {
static void *_vptr__spawnve = NULL;
load_dll_msvcrt();
if (!_vptr__spawnve) {
_vptr__spawnve = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnve");
}
asm("leave\njmp *%0" : : "r"(_vptr__spawnve));
}

void _elf__spawnvp() asm("_spawnvp");
void _elf__spawnvp() {
static void *_vptr__spawnvp = NULL;
load_dll_msvcrt();
if (!_vptr__spawnvp) {
_vptr__spawnvp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnvp");
}
asm("leave\njmp *%0" : : "r"(_vptr__spawnvp));
}

void _elf__spawnvpe() asm("_spawnvpe");
void _elf__spawnvpe() {
static void *_vptr__spawnvpe = NULL;
load_dll_msvcrt();
if (!_vptr__spawnvpe) {
_vptr__spawnvpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnvpe");
}
asm("leave\njmp *%0" : : "r"(_vptr__spawnvpe));
}

void _elf__splitpath() asm("_splitpath");
void _elf__splitpath() {
static void *_vptr__splitpath = NULL;
load_dll_msvcrt();
if (!_vptr__splitpath) {
_vptr__splitpath = (void *) _elf_GetProcAddress(_dll_msvcrt, "_splitpath");
}
asm("leave\njmp *%0" : : "r"(_vptr__splitpath));
}

void _elf__stat() asm("_stat");
void _elf__stat() {
static void *_vptr__stat = NULL;
load_dll_msvcrt();
if (!_vptr__stat) {
_vptr__stat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_stat");
}
asm("leave\njmp *%0" : : "r"(_vptr__stat));
}

void _elf__stat64() asm("_stat64");
void _elf__stat64() {
static void *_vptr__stat64 = NULL;
load_dll_msvcrt();
if (!_vptr__stat64) {
_vptr__stat64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_stat64");
}
asm("leave\njmp *%0" : : "r"(_vptr__stat64));
}

void _elf__stati64() asm("_stati64");
void _elf__stati64() {
static void *_vptr__stati64 = NULL;
load_dll_msvcrt();
if (!_vptr__stati64) {
_vptr__stati64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_stati64");
}
asm("leave\njmp *%0" : : "r"(_vptr__stati64));
}

void _elf__statusfp() asm("_statusfp");
void _elf__statusfp() {
static void *_vptr__statusfp = NULL;
load_dll_msvcrt();
if (!_vptr__statusfp) {
_vptr__statusfp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_statusfp");
}
asm("leave\njmp *%0" : : "r"(_vptr__statusfp));
}

void _elf__strcmpi() asm("_strcmpi");
void _elf__strcmpi() {
static void *_vptr__strcmpi = NULL;
load_dll_msvcrt();
if (!_vptr__strcmpi) {
_vptr__strcmpi = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strcmpi");
}
asm("leave\njmp *%0" : : "r"(_vptr__strcmpi));
}

void _elf__strdate() asm("_strdate");
void _elf__strdate() {
static void *_vptr__strdate = NULL;
load_dll_msvcrt();
if (!_vptr__strdate) {
_vptr__strdate = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strdate");
}
asm("leave\njmp *%0" : : "r"(_vptr__strdate));
}

void _elf__strdup() asm("_strdup");
void _elf__strdup() {
static void *_vptr__strdup = NULL;
load_dll_msvcrt();
if (!_vptr__strdup) {
_vptr__strdup = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strdup");
}
asm("leave\njmp *%0" : : "r"(_vptr__strdup));
}

void _elf__strerror() asm("_strerror");
void _elf__strerror() {
static void *_vptr__strerror = NULL;
load_dll_msvcrt();
if (!_vptr__strerror) {
_vptr__strerror = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strerror");
}
asm("leave\njmp *%0" : : "r"(_vptr__strerror));
}

void _elf__stricmp() asm("_stricmp");
void _elf__stricmp() {
static void *_vptr__stricmp = NULL;
load_dll_msvcrt();
if (!_vptr__stricmp) {
_vptr__stricmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_stricmp");
}
asm("leave\njmp *%0" : : "r"(_vptr__stricmp));
}

void _elf__stricoll() asm("_stricoll");
void _elf__stricoll() {
static void *_vptr__stricoll = NULL;
load_dll_msvcrt();
if (!_vptr__stricoll) {
_vptr__stricoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_stricoll");
}
asm("leave\njmp *%0" : : "r"(_vptr__stricoll));
}

void _elf__strlwr() asm("_strlwr");
void _elf__strlwr() {
static void *_vptr__strlwr = NULL;
load_dll_msvcrt();
if (!_vptr__strlwr) {
_vptr__strlwr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strlwr");
}
asm("leave\njmp *%0" : : "r"(_vptr__strlwr));
}

void _elf__strncoll() asm("_strncoll");
void _elf__strncoll() {
static void *_vptr__strncoll = NULL;
load_dll_msvcrt();
if (!_vptr__strncoll) {
_vptr__strncoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strncoll");
}
asm("leave\njmp *%0" : : "r"(_vptr__strncoll));
}

void _elf__strnicmp() asm("_strnicmp");
void _elf__strnicmp() {
static void *_vptr__strnicmp = NULL;
load_dll_msvcrt();
if (!_vptr__strnicmp) {
_vptr__strnicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strnicmp");
}
asm("leave\njmp *%0" : : "r"(_vptr__strnicmp));
}

void _elf__strnicoll() asm("_strnicoll");
void _elf__strnicoll() {
static void *_vptr__strnicoll = NULL;
load_dll_msvcrt();
if (!_vptr__strnicoll) {
_vptr__strnicoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strnicoll");
}
asm("leave\njmp *%0" : : "r"(_vptr__strnicoll));
}

void _elf__strnset() asm("_strnset");
void _elf__strnset() {
static void *_vptr__strnset = NULL;
load_dll_msvcrt();
if (!_vptr__strnset) {
_vptr__strnset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strnset");
}
asm("leave\njmp *%0" : : "r"(_vptr__strnset));
}

void _elf__strrev() asm("_strrev");
void _elf__strrev() {
static void *_vptr__strrev = NULL;
load_dll_msvcrt();
if (!_vptr__strrev) {
_vptr__strrev = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strrev");
}
asm("leave\njmp *%0" : : "r"(_vptr__strrev));
}

void _elf__strset() asm("_strset");
void _elf__strset() {
static void *_vptr__strset = NULL;
load_dll_msvcrt();
if (!_vptr__strset) {
_vptr__strset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strset");
}
asm("leave\njmp *%0" : : "r"(_vptr__strset));
}

void _elf__strtime() asm("_strtime");
void _elf__strtime() {
static void *_vptr__strtime = NULL;
load_dll_msvcrt();
if (!_vptr__strtime) {
_vptr__strtime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strtime");
}
asm("leave\njmp *%0" : : "r"(_vptr__strtime));
}

void _elf__strtoi64() asm("_strtoi64");
void _elf__strtoi64() {
static void *_vptr__strtoi64 = NULL;
load_dll_msvcrt();
if (!_vptr__strtoi64) {
_vptr__strtoi64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strtoi64");
}
asm("leave\njmp *%0" : : "r"(_vptr__strtoi64));
}

void _elf__strtoui64() asm("_strtoui64");
void _elf__strtoui64() {
static void *_vptr__strtoui64 = NULL;
load_dll_msvcrt();
if (!_vptr__strtoui64) {
_vptr__strtoui64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strtoui64");
}
asm("leave\njmp *%0" : : "r"(_vptr__strtoui64));
}

void _elf__strupr() asm("_strupr");
void _elf__strupr() {
static void *_vptr__strupr = NULL;
load_dll_msvcrt();
if (!_vptr__strupr) {
_vptr__strupr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strupr");
}
asm("leave\njmp *%0" : : "r"(_vptr__strupr));
}

void _elf__swab() asm("_swab");
void _elf__swab() {
static void *_vptr__swab = NULL;
load_dll_msvcrt();
if (!_vptr__swab) {
_vptr__swab = (void *) _elf_GetProcAddress(_dll_msvcrt, "_swab");
}
asm("leave\njmp *%0" : : "r"(_vptr__swab));
}

void _elf__sys_errlist() asm("_sys_errlist");
void _elf__sys_errlist() {
static void *_vptr__sys_errlist = NULL;
load_dll_msvcrt();
if (!_vptr__sys_errlist) {
_vptr__sys_errlist = (void *) _elf_GetProcAddress(_dll_msvcrt, "_sys_errlist");
}
asm("leave\njmp *%0" : : "r"(_vptr__sys_errlist));
}

void _elf__sys_nerr() asm("_sys_nerr");
void _elf__sys_nerr() {
static void *_vptr__sys_nerr = NULL;
load_dll_msvcrt();
if (!_vptr__sys_nerr) {
_vptr__sys_nerr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_sys_nerr");
}
asm("leave\njmp *%0" : : "r"(_vptr__sys_nerr));
}

void _elf__tell() asm("_tell");
void _elf__tell() {
static void *_vptr__tell = NULL;
load_dll_msvcrt();
if (!_vptr__tell) {
_vptr__tell = (void *) _elf_GetProcAddress(_dll_msvcrt, "_tell");
}
asm("leave\njmp *%0" : : "r"(_vptr__tell));
}

void _elf__telli64() asm("_telli64");
void _elf__telli64() {
static void *_vptr__telli64 = NULL;
load_dll_msvcrt();
if (!_vptr__telli64) {
_vptr__telli64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_telli64");
}
asm("leave\njmp *%0" : : "r"(_vptr__telli64));
}

void _elf__tempnam() asm("_tempnam");
void _elf__tempnam() {
static void *_vptr__tempnam = NULL;
load_dll_msvcrt();
if (!_vptr__tempnam) {
_vptr__tempnam = (void *) _elf_GetProcAddress(_dll_msvcrt, "_tempnam");
}
asm("leave\njmp *%0" : : "r"(_vptr__tempnam));
}

void _elf__time64() asm("_time64");
void _elf__time64() {
static void *_vptr__time64 = NULL;
load_dll_msvcrt();
if (!_vptr__time64) {
_vptr__time64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_time64");
}
asm("leave\njmp *%0" : : "r"(_vptr__time64));
}

void _elf__timezone() asm("_timezone");
void _elf__timezone() {
static void *_vptr__timezone = NULL;
load_dll_msvcrt();
if (!_vptr__timezone) {
_vptr__timezone = (void *) _elf_GetProcAddress(_dll_msvcrt, "_timezone");
}
asm("leave\njmp *%0" : : "r"(_vptr__timezone));
}

void _elf__tolower() asm("_tolower");
void _elf__tolower() {
static void *_vptr__tolower = NULL;
load_dll_msvcrt();
if (!_vptr__tolower) {
_vptr__tolower = (void *) _elf_GetProcAddress(_dll_msvcrt, "_tolower");
}
asm("leave\njmp *%0" : : "r"(_vptr__tolower));
}

void _elf__toupper() asm("_toupper");
void _elf__toupper() {
static void *_vptr__toupper = NULL;
load_dll_msvcrt();
if (!_vptr__toupper) {
_vptr__toupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "_toupper");
}
asm("leave\njmp *%0" : : "r"(_vptr__toupper));
}

void _elf__tzname() asm("_tzname");
void _elf__tzname() {
static void *_vptr__tzname = NULL;
load_dll_msvcrt();
if (!_vptr__tzname) {
_vptr__tzname = (void *) _elf_GetProcAddress(_dll_msvcrt, "_tzname");
}
asm("leave\njmp *%0" : : "r"(_vptr__tzname));
}

void _elf__tzset() asm("_tzset");
void _elf__tzset() {
static void *_vptr__tzset = NULL;
load_dll_msvcrt();
if (!_vptr__tzset) {
_vptr__tzset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_tzset");
}
asm("leave\njmp *%0" : : "r"(_vptr__tzset));
}

void _elf__ui64toa() asm("_ui64toa");
void _elf__ui64toa() {
static void *_vptr__ui64toa = NULL;
load_dll_msvcrt();
if (!_vptr__ui64toa) {
_vptr__ui64toa = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ui64toa");
}
asm("leave\njmp *%0" : : "r"(_vptr__ui64toa));
}

void _elf__ui64tow() asm("_ui64tow");
void _elf__ui64tow() {
static void *_vptr__ui64tow = NULL;
load_dll_msvcrt();
if (!_vptr__ui64tow) {
_vptr__ui64tow = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ui64tow");
}
asm("leave\njmp *%0" : : "r"(_vptr__ui64tow));
}

void _elf__ultoa() asm("_ultoa");
void _elf__ultoa() {
static void *_vptr__ultoa = NULL;
load_dll_msvcrt();
if (!_vptr__ultoa) {
_vptr__ultoa = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ultoa");
}
asm("leave\njmp *%0" : : "r"(_vptr__ultoa));
}

void _elf__ultow() asm("_ultow");
void _elf__ultow() {
static void *_vptr__ultow = NULL;
load_dll_msvcrt();
if (!_vptr__ultow) {
_vptr__ultow = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ultow");
}
asm("leave\njmp *%0" : : "r"(_vptr__ultow));
}

void _elf__umask() asm("_umask");
void _elf__umask() {
static void *_vptr__umask = NULL;
load_dll_msvcrt();
if (!_vptr__umask) {
_vptr__umask = (void *) _elf_GetProcAddress(_dll_msvcrt, "_umask");
}
asm("leave\njmp *%0" : : "r"(_vptr__umask));
}

void _elf__ungetch() asm("_ungetch");
void _elf__ungetch() {
static void *_vptr__ungetch = NULL;
load_dll_msvcrt();
if (!_vptr__ungetch) {
_vptr__ungetch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ungetch");
}
asm("leave\njmp *%0" : : "r"(_vptr__ungetch));
}

void _elf__ungetwch() asm("_ungetwch");
void _elf__ungetwch() {
static void *_vptr__ungetwch = NULL;
load_dll_msvcrt();
if (!_vptr__ungetwch) {
_vptr__ungetwch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ungetwch");
}
asm("leave\njmp *%0" : : "r"(_vptr__ungetwch));
}

void _elf__unlink() asm("_unlink");
void _elf__unlink() {
static void *_vptr__unlink = NULL;
load_dll_msvcrt();
if (!_vptr__unlink) {
_vptr__unlink = (void *) _elf_GetProcAddress(_dll_msvcrt, "_unlink");
}
asm("leave\njmp *%0" : : "r"(_vptr__unlink));
}

void _elf__unloaddll() asm("_unloaddll");
void _elf__unloaddll() {
static void *_vptr__unloaddll = NULL;
load_dll_msvcrt();
if (!_vptr__unloaddll) {
_vptr__unloaddll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_unloaddll");
}
asm("leave\njmp *%0" : : "r"(_vptr__unloaddll));
}

void _elf__unlock() asm("_unlock");
void _elf__unlock() {
static void *_vptr__unlock = NULL;
load_dll_msvcrt();
if (!_vptr__unlock) {
_vptr__unlock = (void *) _elf_GetProcAddress(_dll_msvcrt, "_unlock");
}
asm("leave\njmp *%0" : : "r"(_vptr__unlock));
}

void _elf__utime() asm("_utime");
void _elf__utime() {
static void *_vptr__utime = NULL;
load_dll_msvcrt();
if (!_vptr__utime) {
_vptr__utime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_utime");
}
asm("leave\njmp *%0" : : "r"(_vptr__utime));
}

void _elf__utime64() asm("_utime64");
void _elf__utime64() {
static void *_vptr__utime64 = NULL;
load_dll_msvcrt();
if (!_vptr__utime64) {
_vptr__utime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_utime64");
}
asm("leave\njmp *%0" : : "r"(_vptr__utime64));
}

void _elf__vscprintf() asm("_vscprintf");
void _elf__vscprintf() {
static void *_vptr__vscprintf = NULL;
load_dll_msvcrt();
if (!_vptr__vscprintf) {
_vptr__vscprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_vscprintf");
}
asm("leave\njmp *%0" : : "r"(_vptr__vscprintf));
}

void _elf__vscwprintf() asm("_vscwprintf");
void _elf__vscwprintf() {
static void *_vptr__vscwprintf = NULL;
load_dll_msvcrt();
if (!_vptr__vscwprintf) {
_vptr__vscwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_vscwprintf");
}
asm("leave\njmp *%0" : : "r"(_vptr__vscwprintf));
}

void _elf__vsnprintf() asm("_vsnprintf");
void _elf__vsnprintf() {
static void *_vptr__vsnprintf = NULL;
load_dll_msvcrt();
if (!_vptr__vsnprintf) {
_vptr__vsnprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_vsnprintf");
}
asm("leave\njmp *%0" : : "r"(_vptr__vsnprintf));
}

void _elf__vsnwprintf() asm("_vsnwprintf");
void _elf__vsnwprintf() {
static void *_vptr__vsnwprintf = NULL;
load_dll_msvcrt();
if (!_vptr__vsnwprintf) {
_vptr__vsnwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_vsnwprintf");
}
asm("leave\njmp *%0" : : "r"(_vptr__vsnwprintf));
}

void _elf__waccess() asm("_waccess");
void _elf__waccess() {
static void *_vptr__waccess = NULL;
load_dll_msvcrt();
if (!_vptr__waccess) {
_vptr__waccess = (void *) _elf_GetProcAddress(_dll_msvcrt, "_waccess");
}
asm("leave\njmp *%0" : : "r"(_vptr__waccess));
}

void _elf__wasctime() asm("_wasctime");
void _elf__wasctime() {
static void *_vptr__wasctime = NULL;
load_dll_msvcrt();
if (!_vptr__wasctime) {
_vptr__wasctime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wasctime");
}
asm("leave\njmp *%0" : : "r"(_vptr__wasctime));
}

void _elf__wchdir() asm("_wchdir");
void _elf__wchdir() {
static void *_vptr__wchdir = NULL;
load_dll_msvcrt();
if (!_vptr__wchdir) {
_vptr__wchdir = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wchdir");
}
asm("leave\njmp *%0" : : "r"(_vptr__wchdir));
}

void _elf__wchmod() asm("_wchmod");
void _elf__wchmod() {
static void *_vptr__wchmod = NULL;
load_dll_msvcrt();
if (!_vptr__wchmod) {
_vptr__wchmod = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wchmod");
}
asm("leave\njmp *%0" : : "r"(_vptr__wchmod));
}

void _elf__wcmdln() asm("_wcmdln");
void _elf__wcmdln() {
static void *_vptr__wcmdln = NULL;
load_dll_msvcrt();
if (!_vptr__wcmdln) {
_vptr__wcmdln = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcmdln");
}
asm("leave\njmp *%0" : : "r"(_vptr__wcmdln));
}

void _elf__wcreat() asm("_wcreat");
void _elf__wcreat() {
static void *_vptr__wcreat = NULL;
load_dll_msvcrt();
if (!_vptr__wcreat) {
_vptr__wcreat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcreat");
}
asm("leave\njmp *%0" : : "r"(_vptr__wcreat));
}

void _elf__wcsdup() asm("_wcsdup");
void _elf__wcsdup() {
static void *_vptr__wcsdup = NULL;
load_dll_msvcrt();
if (!_vptr__wcsdup) {
_vptr__wcsdup = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsdup");
}
asm("leave\njmp *%0" : : "r"(_vptr__wcsdup));
}

void _elf__wcserror() asm("_wcserror");
void _elf__wcserror() {
static void *_vptr__wcserror = NULL;
load_dll_msvcrt();
if (!_vptr__wcserror) {
_vptr__wcserror = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcserror");
}
asm("leave\njmp *%0" : : "r"(_vptr__wcserror));
}

void _elf__wcsicmp() asm("_wcsicmp");
void _elf__wcsicmp() {
static void *_vptr__wcsicmp = NULL;
load_dll_msvcrt();
if (!_vptr__wcsicmp) {
_vptr__wcsicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsicmp");
}
asm("leave\njmp *%0" : : "r"(_vptr__wcsicmp));
}

void _elf__wcsicoll() asm("_wcsicoll");
void _elf__wcsicoll() {
static void *_vptr__wcsicoll = NULL;
load_dll_msvcrt();
if (!_vptr__wcsicoll) {
_vptr__wcsicoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsicoll");
}
asm("leave\njmp *%0" : : "r"(_vptr__wcsicoll));
}

void _elf__wcslwr() asm("_wcslwr");
void _elf__wcslwr() {
static void *_vptr__wcslwr = NULL;
load_dll_msvcrt();
if (!_vptr__wcslwr) {
_vptr__wcslwr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcslwr");
}
asm("leave\njmp *%0" : : "r"(_vptr__wcslwr));
}

void _elf__wcsncoll() asm("_wcsncoll");
void _elf__wcsncoll() {
static void *_vptr__wcsncoll = NULL;
load_dll_msvcrt();
if (!_vptr__wcsncoll) {
_vptr__wcsncoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsncoll");
}
asm("leave\njmp *%0" : : "r"(_vptr__wcsncoll));
}

void _elf__wcsnicmp() asm("_wcsnicmp");
void _elf__wcsnicmp() {
static void *_vptr__wcsnicmp = NULL;
load_dll_msvcrt();
if (!_vptr__wcsnicmp) {
_vptr__wcsnicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsnicmp");
}
asm("leave\njmp *%0" : : "r"(_vptr__wcsnicmp));
}

void _elf__wcsnicoll() asm("_wcsnicoll");
void _elf__wcsnicoll() {
static void *_vptr__wcsnicoll = NULL;
load_dll_msvcrt();
if (!_vptr__wcsnicoll) {
_vptr__wcsnicoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsnicoll");
}
asm("leave\njmp *%0" : : "r"(_vptr__wcsnicoll));
}

void _elf__wcsnset() asm("_wcsnset");
void _elf__wcsnset() {
static void *_vptr__wcsnset = NULL;
load_dll_msvcrt();
if (!_vptr__wcsnset) {
_vptr__wcsnset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsnset");
}
asm("leave\njmp *%0" : : "r"(_vptr__wcsnset));
}

void _elf__wcsrev() asm("_wcsrev");
void _elf__wcsrev() {
static void *_vptr__wcsrev = NULL;
load_dll_msvcrt();
if (!_vptr__wcsrev) {
_vptr__wcsrev = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsrev");
}
asm("leave\njmp *%0" : : "r"(_vptr__wcsrev));
}

void _elf__wcsset() asm("_wcsset");
void _elf__wcsset() {
static void *_vptr__wcsset = NULL;
load_dll_msvcrt();
if (!_vptr__wcsset) {
_vptr__wcsset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsset");
}
asm("leave\njmp *%0" : : "r"(_vptr__wcsset));
}

void _elf__wcstoi64() asm("_wcstoi64");
void _elf__wcstoi64() {
static void *_vptr__wcstoi64 = NULL;
load_dll_msvcrt();
if (!_vptr__wcstoi64) {
_vptr__wcstoi64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcstoi64");
}
asm("leave\njmp *%0" : : "r"(_vptr__wcstoi64));
}

void _elf__wcstoui64() asm("_wcstoui64");
void _elf__wcstoui64() {
static void *_vptr__wcstoui64 = NULL;
load_dll_msvcrt();
if (!_vptr__wcstoui64) {
_vptr__wcstoui64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcstoui64");
}
asm("leave\njmp *%0" : : "r"(_vptr__wcstoui64));
}

void _elf__wcsupr() asm("_wcsupr");
void _elf__wcsupr() {
static void *_vptr__wcsupr = NULL;
load_dll_msvcrt();
if (!_vptr__wcsupr) {
_vptr__wcsupr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsupr");
}
asm("leave\njmp *%0" : : "r"(_vptr__wcsupr));
}

void _elf__wctime() asm("_wctime");
void _elf__wctime() {
static void *_vptr__wctime = NULL;
load_dll_msvcrt();
if (!_vptr__wctime) {
_vptr__wctime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wctime");
}
asm("leave\njmp *%0" : : "r"(_vptr__wctime));
}

void _elf__wctime64() asm("_wctime64");
void _elf__wctime64() {
static void *_vptr__wctime64 = NULL;
load_dll_msvcrt();
if (!_vptr__wctime64) {
_vptr__wctime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wctime64");
}
asm("leave\njmp *%0" : : "r"(_vptr__wctime64));
}

void _elf__wenviron() asm("_wenviron");
void _elf__wenviron() {
static void *_vptr__wenviron = NULL;
load_dll_msvcrt();
if (!_vptr__wenviron) {
_vptr__wenviron = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wenviron");
}
asm("leave\njmp *%0" : : "r"(_vptr__wenviron));
}

void _elf__wexecl() asm("_wexecl");
void _elf__wexecl() {
static void *_vptr__wexecl = NULL;
load_dll_msvcrt();
if (!_vptr__wexecl) {
_vptr__wexecl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexecl");
}
asm("leave\njmp *%0" : : "r"(_vptr__wexecl));
}

void _elf__wexecle() asm("_wexecle");
void _elf__wexecle() {
static void *_vptr__wexecle = NULL;
load_dll_msvcrt();
if (!_vptr__wexecle) {
_vptr__wexecle = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexecle");
}
asm("leave\njmp *%0" : : "r"(_vptr__wexecle));
}

void _elf__wexeclp() asm("_wexeclp");
void _elf__wexeclp() {
static void *_vptr__wexeclp = NULL;
load_dll_msvcrt();
if (!_vptr__wexeclp) {
_vptr__wexeclp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexeclp");
}
asm("leave\njmp *%0" : : "r"(_vptr__wexeclp));
}

void _elf__wexeclpe() asm("_wexeclpe");
void _elf__wexeclpe() {
static void *_vptr__wexeclpe = NULL;
load_dll_msvcrt();
if (!_vptr__wexeclpe) {
_vptr__wexeclpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexeclpe");
}
asm("leave\njmp *%0" : : "r"(_vptr__wexeclpe));
}

void _elf__wexecv() asm("_wexecv");
void _elf__wexecv() {
static void *_vptr__wexecv = NULL;
load_dll_msvcrt();
if (!_vptr__wexecv) {
_vptr__wexecv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexecv");
}
asm("leave\njmp *%0" : : "r"(_vptr__wexecv));
}

void _elf__wexecve() asm("_wexecve");
void _elf__wexecve() {
static void *_vptr__wexecve = NULL;
load_dll_msvcrt();
if (!_vptr__wexecve) {
_vptr__wexecve = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexecve");
}
asm("leave\njmp *%0" : : "r"(_vptr__wexecve));
}

void _elf__wexecvp() asm("_wexecvp");
void _elf__wexecvp() {
static void *_vptr__wexecvp = NULL;
load_dll_msvcrt();
if (!_vptr__wexecvp) {
_vptr__wexecvp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexecvp");
}
asm("leave\njmp *%0" : : "r"(_vptr__wexecvp));
}

void _elf__wexecvpe() asm("_wexecvpe");
void _elf__wexecvpe() {
static void *_vptr__wexecvpe = NULL;
load_dll_msvcrt();
if (!_vptr__wexecvpe) {
_vptr__wexecvpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexecvpe");
}
asm("leave\njmp *%0" : : "r"(_vptr__wexecvpe));
}

void _elf__wfdopen() asm("_wfdopen");
void _elf__wfdopen() {
static void *_vptr__wfdopen = NULL;
load_dll_msvcrt();
if (!_vptr__wfdopen) {
_vptr__wfdopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfdopen");
}
asm("leave\njmp *%0" : : "r"(_vptr__wfdopen));
}

void _elf__wfindfirst() asm("_wfindfirst");
void _elf__wfindfirst() {
static void *_vptr__wfindfirst = NULL;
load_dll_msvcrt();
if (!_vptr__wfindfirst) {
_vptr__wfindfirst = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfindfirst");
}
asm("leave\njmp *%0" : : "r"(_vptr__wfindfirst));
}

void _elf__wfindfirst64() asm("_wfindfirst64");
void _elf__wfindfirst64() {
static void *_vptr__wfindfirst64 = NULL;
load_dll_msvcrt();
if (!_vptr__wfindfirst64) {
_vptr__wfindfirst64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfindfirst64");
}
asm("leave\njmp *%0" : : "r"(_vptr__wfindfirst64));
}

void _elf__wfindfirsti64() asm("_wfindfirsti64");
void _elf__wfindfirsti64() {
static void *_vptr__wfindfirsti64 = NULL;
load_dll_msvcrt();
if (!_vptr__wfindfirsti64) {
_vptr__wfindfirsti64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfindfirsti64");
}
asm("leave\njmp *%0" : : "r"(_vptr__wfindfirsti64));
}

void _elf__wfindnext() asm("_wfindnext");
void _elf__wfindnext() {
static void *_vptr__wfindnext = NULL;
load_dll_msvcrt();
if (!_vptr__wfindnext) {
_vptr__wfindnext = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfindnext");
}
asm("leave\njmp *%0" : : "r"(_vptr__wfindnext));
}

void _elf__wfindnext64() asm("_wfindnext64");
void _elf__wfindnext64() {
static void *_vptr__wfindnext64 = NULL;
load_dll_msvcrt();
if (!_vptr__wfindnext64) {
_vptr__wfindnext64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfindnext64");
}
asm("leave\njmp *%0" : : "r"(_vptr__wfindnext64));
}

void _elf__wfindnexti64() asm("_wfindnexti64");
void _elf__wfindnexti64() {
static void *_vptr__wfindnexti64 = NULL;
load_dll_msvcrt();
if (!_vptr__wfindnexti64) {
_vptr__wfindnexti64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfindnexti64");
}
asm("leave\njmp *%0" : : "r"(_vptr__wfindnexti64));
}

void _elf__wfopen() asm("_wfopen");
void _elf__wfopen() {
static void *_vptr__wfopen = NULL;
load_dll_msvcrt();
if (!_vptr__wfopen) {
_vptr__wfopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfopen");
}
asm("leave\njmp *%0" : : "r"(_vptr__wfopen));
}

void _elf__wfreopen() asm("_wfreopen");
void _elf__wfreopen() {
static void *_vptr__wfreopen = NULL;
load_dll_msvcrt();
if (!_vptr__wfreopen) {
_vptr__wfreopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfreopen");
}
asm("leave\njmp *%0" : : "r"(_vptr__wfreopen));
}

void _elf__wfsopen() asm("_wfsopen");
void _elf__wfsopen() {
static void *_vptr__wfsopen = NULL;
load_dll_msvcrt();
if (!_vptr__wfsopen) {
_vptr__wfsopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfsopen");
}
asm("leave\njmp *%0" : : "r"(_vptr__wfsopen));
}

void _elf__wfullpath() asm("_wfullpath");
void _elf__wfullpath() {
static void *_vptr__wfullpath = NULL;
load_dll_msvcrt();
if (!_vptr__wfullpath) {
_vptr__wfullpath = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfullpath");
}
asm("leave\njmp *%0" : : "r"(_vptr__wfullpath));
}

void _elf__wgetcwd() asm("_wgetcwd");
void _elf__wgetcwd() {
static void *_vptr__wgetcwd = NULL;
load_dll_msvcrt();
if (!_vptr__wgetcwd) {
_vptr__wgetcwd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wgetcwd");
}
asm("leave\njmp *%0" : : "r"(_vptr__wgetcwd));
}

void _elf__wgetdcwd() asm("_wgetdcwd");
void _elf__wgetdcwd() {
static void *_vptr__wgetdcwd = NULL;
load_dll_msvcrt();
if (!_vptr__wgetdcwd) {
_vptr__wgetdcwd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wgetdcwd");
}
asm("leave\njmp *%0" : : "r"(_vptr__wgetdcwd));
}

void _elf__wgetenv() asm("_wgetenv");
void _elf__wgetenv() {
static void *_vptr__wgetenv = NULL;
load_dll_msvcrt();
if (!_vptr__wgetenv) {
_vptr__wgetenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wgetenv");
}
asm("leave\njmp *%0" : : "r"(_vptr__wgetenv));
}

void _elf__winmajor() asm("_winmajor");
void _elf__winmajor() {
static void *_vptr__winmajor = NULL;
load_dll_msvcrt();
if (!_vptr__winmajor) {
_vptr__winmajor = (void *) _elf_GetProcAddress(_dll_msvcrt, "_winmajor");
}
asm("leave\njmp *%0" : : "r"(_vptr__winmajor));
}

void _elf__winminor() asm("_winminor");
void _elf__winminor() {
static void *_vptr__winminor = NULL;
load_dll_msvcrt();
if (!_vptr__winminor) {
_vptr__winminor = (void *) _elf_GetProcAddress(_dll_msvcrt, "_winminor");
}
asm("leave\njmp *%0" : : "r"(_vptr__winminor));
}

void _elf__winver() asm("_winver");
void _elf__winver() {
static void *_vptr__winver = NULL;
load_dll_msvcrt();
if (!_vptr__winver) {
_vptr__winver = (void *) _elf_GetProcAddress(_dll_msvcrt, "_winver");
}
asm("leave\njmp *%0" : : "r"(_vptr__winver));
}

void _elf__wmakepath() asm("_wmakepath");
void _elf__wmakepath() {
static void *_vptr__wmakepath = NULL;
load_dll_msvcrt();
if (!_vptr__wmakepath) {
_vptr__wmakepath = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wmakepath");
}
asm("leave\njmp *%0" : : "r"(_vptr__wmakepath));
}

void _elf__wmkdir() asm("_wmkdir");
void _elf__wmkdir() {
static void *_vptr__wmkdir = NULL;
load_dll_msvcrt();
if (!_vptr__wmkdir) {
_vptr__wmkdir = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wmkdir");
}
asm("leave\njmp *%0" : : "r"(_vptr__wmkdir));
}

void _elf__wmktemp() asm("_wmktemp");
void _elf__wmktemp() {
static void *_vptr__wmktemp = NULL;
load_dll_msvcrt();
if (!_vptr__wmktemp) {
_vptr__wmktemp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wmktemp");
}
asm("leave\njmp *%0" : : "r"(_vptr__wmktemp));
}

void _elf__wopen() asm("_wopen");
void _elf__wopen() {
static void *_vptr__wopen = NULL;
load_dll_msvcrt();
if (!_vptr__wopen) {
_vptr__wopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wopen");
}
asm("leave\njmp *%0" : : "r"(_vptr__wopen));
}

void _elf__wperror() asm("_wperror");
void _elf__wperror() {
static void *_vptr__wperror = NULL;
load_dll_msvcrt();
if (!_vptr__wperror) {
_vptr__wperror = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wperror");
}
asm("leave\njmp *%0" : : "r"(_vptr__wperror));
}

void _elf__wpgmptr() asm("_wpgmptr");
void _elf__wpgmptr() {
static void *_vptr__wpgmptr = NULL;
load_dll_msvcrt();
if (!_vptr__wpgmptr) {
_vptr__wpgmptr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wpgmptr");
}
asm("leave\njmp *%0" : : "r"(_vptr__wpgmptr));
}

void _elf__wpopen() asm("_wpopen");
void _elf__wpopen() {
static void *_vptr__wpopen = NULL;
load_dll_msvcrt();
if (!_vptr__wpopen) {
_vptr__wpopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wpopen");
}
asm("leave\njmp *%0" : : "r"(_vptr__wpopen));
}

void _elf__wputenv() asm("_wputenv");
void _elf__wputenv() {
static void *_vptr__wputenv = NULL;
load_dll_msvcrt();
if (!_vptr__wputenv) {
_vptr__wputenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wputenv");
}
asm("leave\njmp *%0" : : "r"(_vptr__wputenv));
}

void _elf__wremove() asm("_wremove");
void _elf__wremove() {
static void *_vptr__wremove = NULL;
load_dll_msvcrt();
if (!_vptr__wremove) {
_vptr__wremove = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wremove");
}
asm("leave\njmp *%0" : : "r"(_vptr__wremove));
}

void _elf__wrename() asm("_wrename");
void _elf__wrename() {
static void *_vptr__wrename = NULL;
load_dll_msvcrt();
if (!_vptr__wrename) {
_vptr__wrename = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wrename");
}
asm("leave\njmp *%0" : : "r"(_vptr__wrename));
}

void _elf__write() asm("_write");
void _elf__write() {
static void *_vptr__write = NULL;
load_dll_msvcrt();
if (!_vptr__write) {
_vptr__write = (void *) _elf_GetProcAddress(_dll_msvcrt, "_write");
}
asm("leave\njmp *%0" : : "r"(_vptr__write));
}

void _elf__wrmdir() asm("_wrmdir");
void _elf__wrmdir() {
static void *_vptr__wrmdir = NULL;
load_dll_msvcrt();
if (!_vptr__wrmdir) {
_vptr__wrmdir = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wrmdir");
}
asm("leave\njmp *%0" : : "r"(_vptr__wrmdir));
}

void _elf__wsearchenv() asm("_wsearchenv");
void _elf__wsearchenv() {
static void *_vptr__wsearchenv = NULL;
load_dll_msvcrt();
if (!_vptr__wsearchenv) {
_vptr__wsearchenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wsearchenv");
}
asm("leave\njmp *%0" : : "r"(_vptr__wsearchenv));
}

void _elf__wsetlocale() asm("_wsetlocale");
void _elf__wsetlocale() {
static void *_vptr__wsetlocale = NULL;
load_dll_msvcrt();
if (!_vptr__wsetlocale) {
_vptr__wsetlocale = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wsetlocale");
}
asm("leave\njmp *%0" : : "r"(_vptr__wsetlocale));
}

void _elf__wsopen() asm("_wsopen");
void _elf__wsopen() {
static void *_vptr__wsopen = NULL;
load_dll_msvcrt();
if (!_vptr__wsopen) {
_vptr__wsopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wsopen");
}
asm("leave\njmp *%0" : : "r"(_vptr__wsopen));
}

void _elf__wspawnl() asm("_wspawnl");
void _elf__wspawnl() {
static void *_vptr__wspawnl = NULL;
load_dll_msvcrt();
if (!_vptr__wspawnl) {
_vptr__wspawnl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnl");
}
asm("leave\njmp *%0" : : "r"(_vptr__wspawnl));
}

void _elf__wspawnle() asm("_wspawnle");
void _elf__wspawnle() {
static void *_vptr__wspawnle = NULL;
load_dll_msvcrt();
if (!_vptr__wspawnle) {
_vptr__wspawnle = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnle");
}
asm("leave\njmp *%0" : : "r"(_vptr__wspawnle));
}

void _elf__wspawnlp() asm("_wspawnlp");
void _elf__wspawnlp() {
static void *_vptr__wspawnlp = NULL;
load_dll_msvcrt();
if (!_vptr__wspawnlp) {
_vptr__wspawnlp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnlp");
}
asm("leave\njmp *%0" : : "r"(_vptr__wspawnlp));
}

void _elf__wspawnlpe() asm("_wspawnlpe");
void _elf__wspawnlpe() {
static void *_vptr__wspawnlpe = NULL;
load_dll_msvcrt();
if (!_vptr__wspawnlpe) {
_vptr__wspawnlpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnlpe");
}
asm("leave\njmp *%0" : : "r"(_vptr__wspawnlpe));
}

void _elf__wspawnv() asm("_wspawnv");
void _elf__wspawnv() {
static void *_vptr__wspawnv = NULL;
load_dll_msvcrt();
if (!_vptr__wspawnv) {
_vptr__wspawnv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnv");
}
asm("leave\njmp *%0" : : "r"(_vptr__wspawnv));
}

void _elf__wspawnve() asm("_wspawnve");
void _elf__wspawnve() {
static void *_vptr__wspawnve = NULL;
load_dll_msvcrt();
if (!_vptr__wspawnve) {
_vptr__wspawnve = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnve");
}
asm("leave\njmp *%0" : : "r"(_vptr__wspawnve));
}

void _elf__wspawnvp() asm("_wspawnvp");
void _elf__wspawnvp() {
static void *_vptr__wspawnvp = NULL;
load_dll_msvcrt();
if (!_vptr__wspawnvp) {
_vptr__wspawnvp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnvp");
}
asm("leave\njmp *%0" : : "r"(_vptr__wspawnvp));
}

void _elf__wspawnvpe() asm("_wspawnvpe");
void _elf__wspawnvpe() {
static void *_vptr__wspawnvpe = NULL;
load_dll_msvcrt();
if (!_vptr__wspawnvpe) {
_vptr__wspawnvpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnvpe");
}
asm("leave\njmp *%0" : : "r"(_vptr__wspawnvpe));
}

void _elf__wsplitpath() asm("_wsplitpath");
void _elf__wsplitpath() {
static void *_vptr__wsplitpath = NULL;
load_dll_msvcrt();
if (!_vptr__wsplitpath) {
_vptr__wsplitpath = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wsplitpath");
}
asm("leave\njmp *%0" : : "r"(_vptr__wsplitpath));
}

void _elf__wstat() asm("_wstat");
void _elf__wstat() {
static void *_vptr__wstat = NULL;
load_dll_msvcrt();
if (!_vptr__wstat) {
_vptr__wstat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wstat");
}
asm("leave\njmp *%0" : : "r"(_vptr__wstat));
}

void _elf__wstat64() asm("_wstat64");
void _elf__wstat64() {
static void *_vptr__wstat64 = NULL;
load_dll_msvcrt();
if (!_vptr__wstat64) {
_vptr__wstat64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wstat64");
}
asm("leave\njmp *%0" : : "r"(_vptr__wstat64));
}

void _elf__wstati64() asm("_wstati64");
void _elf__wstati64() {
static void *_vptr__wstati64 = NULL;
load_dll_msvcrt();
if (!_vptr__wstati64) {
_vptr__wstati64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wstati64");
}
asm("leave\njmp *%0" : : "r"(_vptr__wstati64));
}

void _elf__wstrdate() asm("_wstrdate");
void _elf__wstrdate() {
static void *_vptr__wstrdate = NULL;
load_dll_msvcrt();
if (!_vptr__wstrdate) {
_vptr__wstrdate = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wstrdate");
}
asm("leave\njmp *%0" : : "r"(_vptr__wstrdate));
}

void _elf__wstrtime() asm("_wstrtime");
void _elf__wstrtime() {
static void *_vptr__wstrtime = NULL;
load_dll_msvcrt();
if (!_vptr__wstrtime) {
_vptr__wstrtime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wstrtime");
}
asm("leave\njmp *%0" : : "r"(_vptr__wstrtime));
}

void _elf__wsystem() asm("_wsystem");
void _elf__wsystem() {
static void *_vptr__wsystem = NULL;
load_dll_msvcrt();
if (!_vptr__wsystem) {
_vptr__wsystem = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wsystem");
}
asm("leave\njmp *%0" : : "r"(_vptr__wsystem));
}

void _elf__wtempnam() asm("_wtempnam");
void _elf__wtempnam() {
static void *_vptr__wtempnam = NULL;
load_dll_msvcrt();
if (!_vptr__wtempnam) {
_vptr__wtempnam = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wtempnam");
}
asm("leave\njmp *%0" : : "r"(_vptr__wtempnam));
}

void _elf__wtmpnam() asm("_wtmpnam");
void _elf__wtmpnam() {
static void *_vptr__wtmpnam = NULL;
load_dll_msvcrt();
if (!_vptr__wtmpnam) {
_vptr__wtmpnam = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wtmpnam");
}
asm("leave\njmp *%0" : : "r"(_vptr__wtmpnam));
}

void _elf__wtof() asm("_wtof");
void _elf__wtof() {
static void *_vptr__wtof = NULL;
load_dll_msvcrt();
if (!_vptr__wtof) {
_vptr__wtof = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wtof");
}
asm("leave\njmp *%0" : : "r"(_vptr__wtof));
}

void _elf__wtoi() asm("_wtoi");
void _elf__wtoi() {
static void *_vptr__wtoi = NULL;
load_dll_msvcrt();
if (!_vptr__wtoi) {
_vptr__wtoi = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wtoi");
}
asm("leave\njmp *%0" : : "r"(_vptr__wtoi));
}

void _elf__wtoi64() asm("_wtoi64");
void _elf__wtoi64() {
static void *_vptr__wtoi64 = NULL;
load_dll_msvcrt();
if (!_vptr__wtoi64) {
_vptr__wtoi64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wtoi64");
}
asm("leave\njmp *%0" : : "r"(_vptr__wtoi64));
}

void _elf__wtol() asm("_wtol");
void _elf__wtol() {
static void *_vptr__wtol = NULL;
load_dll_msvcrt();
if (!_vptr__wtol) {
_vptr__wtol = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wtol");
}
asm("leave\njmp *%0" : : "r"(_vptr__wtol));
}

void _elf__wunlink() asm("_wunlink");
void _elf__wunlink() {
static void *_vptr__wunlink = NULL;
load_dll_msvcrt();
if (!_vptr__wunlink) {
_vptr__wunlink = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wunlink");
}
asm("leave\njmp *%0" : : "r"(_vptr__wunlink));
}

void _elf__wutime() asm("_wutime");
void _elf__wutime() {
static void *_vptr__wutime = NULL;
load_dll_msvcrt();
if (!_vptr__wutime) {
_vptr__wutime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wutime");
}
asm("leave\njmp *%0" : : "r"(_vptr__wutime));
}

void _elf__wutime64() asm("_wutime64");
void _elf__wutime64() {
static void *_vptr__wutime64 = NULL;
load_dll_msvcrt();
if (!_vptr__wutime64) {
_vptr__wutime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wutime64");
}
asm("leave\njmp *%0" : : "r"(_vptr__wutime64));
}

void _elf__y0() asm("_y0");
void _elf__y0() {
static void *_vptr__y0 = NULL;
load_dll_msvcrt();
if (!_vptr__y0) {
_vptr__y0 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_y0");
}
asm("leave\njmp *%0" : : "r"(_vptr__y0));
}

void _elf__y1() asm("_y1");
void _elf__y1() {
static void *_vptr__y1 = NULL;
load_dll_msvcrt();
if (!_vptr__y1) {
_vptr__y1 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_y1");
}
asm("leave\njmp *%0" : : "r"(_vptr__y1));
}

void _elf__yn() asm("_yn");
void _elf__yn() {
static void *_vptr__yn = NULL;
load_dll_msvcrt();
if (!_vptr__yn) {
_vptr__yn = (void *) _elf_GetProcAddress(_dll_msvcrt, "_yn");
}
asm("leave\njmp *%0" : : "r"(_vptr__yn));
}

void _elf_abort() asm("abort");
void _elf_abort() {
static void *_vptr_abort = NULL;
load_dll_msvcrt();
if (!_vptr_abort) {
_vptr_abort = (void *) _elf_GetProcAddress(_dll_msvcrt, "abort");
}
asm("leave\njmp *%0" : : "r"(_vptr_abort));
}

void _elf_abs() asm("abs");
void _elf_abs() {
static void *_vptr_abs = NULL;
load_dll_msvcrt();
if (!_vptr_abs) {
_vptr_abs = (void *) _elf_GetProcAddress(_dll_msvcrt, "abs");
}
asm("leave\njmp *%0" : : "r"(_vptr_abs));
}

void _elf_acos() asm("acos");
void _elf_acos() {
static void *_vptr_acos = NULL;
load_dll_msvcrt();
if (!_vptr_acos) {
_vptr_acos = (void *) _elf_GetProcAddress(_dll_msvcrt, "acos");
}
asm("leave\njmp *%0" : : "r"(_vptr_acos));
}

void _elf_asctime() asm("asctime");
void _elf_asctime() {
static void *_vptr_asctime = NULL;
load_dll_msvcrt();
if (!_vptr_asctime) {
_vptr_asctime = (void *) _elf_GetProcAddress(_dll_msvcrt, "asctime");
}
asm("leave\njmp *%0" : : "r"(_vptr_asctime));
}

void _elf_asin() asm("asin");
void _elf_asin() {
static void *_vptr_asin = NULL;
load_dll_msvcrt();
if (!_vptr_asin) {
_vptr_asin = (void *) _elf_GetProcAddress(_dll_msvcrt, "asin");
}
asm("leave\njmp *%0" : : "r"(_vptr_asin));
}

void _elf_atan() asm("atan");
void _elf_atan() {
static void *_vptr_atan = NULL;
load_dll_msvcrt();
if (!_vptr_atan) {
_vptr_atan = (void *) _elf_GetProcAddress(_dll_msvcrt, "atan");
}
asm("leave\njmp *%0" : : "r"(_vptr_atan));
}

void _elf_atan2() asm("atan2");
void _elf_atan2() {
static void *_vptr_atan2 = NULL;
load_dll_msvcrt();
if (!_vptr_atan2) {
_vptr_atan2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "atan2");
}
asm("leave\njmp *%0" : : "r"(_vptr_atan2));
}

void _elf_atexit() asm("atexit");
void _elf_atexit() {
static void *_vptr_atexit = NULL;
load_dll_msvcrt();
if (!_vptr_atexit) {
_vptr_atexit = (void *) _elf_GetProcAddress(_dll_msvcrt, "atexit");
}
asm("leave\njmp *%0" : : "r"(_vptr_atexit));
}

void _elf_atof() asm("atof");
void _elf_atof() {
static void *_vptr_atof = NULL;
load_dll_msvcrt();
if (!_vptr_atof) {
_vptr_atof = (void *) _elf_GetProcAddress(_dll_msvcrt, "atof");
}
asm("leave\njmp *%0" : : "r"(_vptr_atof));
}

void _elf_atoi() asm("atoi");
void _elf_atoi() {
static void *_vptr_atoi = NULL;
load_dll_msvcrt();
if (!_vptr_atoi) {
_vptr_atoi = (void *) _elf_GetProcAddress(_dll_msvcrt, "atoi");
}
asm("leave\njmp *%0" : : "r"(_vptr_atoi));
}

void _elf_atol() asm("atol");
void _elf_atol() {
static void *_vptr_atol = NULL;
load_dll_msvcrt();
if (!_vptr_atol) {
_vptr_atol = (void *) _elf_GetProcAddress(_dll_msvcrt, "atol");
}
asm("leave\njmp *%0" : : "r"(_vptr_atol));
}

void _elf_bsearch() asm("bsearch");
void _elf_bsearch() {
static void *_vptr_bsearch = NULL;
load_dll_msvcrt();
if (!_vptr_bsearch) {
_vptr_bsearch = (void *) _elf_GetProcAddress(_dll_msvcrt, "bsearch");
}
asm("leave\njmp *%0" : : "r"(_vptr_bsearch));
}

void _elf_calloc() asm("calloc");
void _elf_calloc() {
static void *_vptr_calloc = NULL;
load_dll_msvcrt();
if (!_vptr_calloc) {
_vptr_calloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "calloc");
}
asm("leave\njmp *%0" : : "r"(_vptr_calloc));
}

void _elf_ceil() asm("ceil");
void _elf_ceil() {
static void *_vptr_ceil = NULL;
load_dll_msvcrt();
if (!_vptr_ceil) {
_vptr_ceil = (void *) _elf_GetProcAddress(_dll_msvcrt, "ceil");
}
asm("leave\njmp *%0" : : "r"(_vptr_ceil));
}

void _elf_clearerr() asm("clearerr");
void _elf_clearerr() {
static void *_vptr_clearerr = NULL;
load_dll_msvcrt();
if (!_vptr_clearerr) {
_vptr_clearerr = (void *) _elf_GetProcAddress(_dll_msvcrt, "clearerr");
}
asm("leave\njmp *%0" : : "r"(_vptr_clearerr));
}

void _elf_clock() asm("clock");
void _elf_clock() {
static void *_vptr_clock = NULL;
load_dll_msvcrt();
if (!_vptr_clock) {
_vptr_clock = (void *) _elf_GetProcAddress(_dll_msvcrt, "clock");
}
asm("leave\njmp *%0" : : "r"(_vptr_clock));
}

void _elf_cos() asm("cos");
void _elf_cos() {
static void *_vptr_cos = NULL;
load_dll_msvcrt();
if (!_vptr_cos) {
_vptr_cos = (void *) _elf_GetProcAddress(_dll_msvcrt, "cos");
}
asm("leave\njmp *%0" : : "r"(_vptr_cos));
}

void _elf_cosh() asm("cosh");
void _elf_cosh() {
static void *_vptr_cosh = NULL;
load_dll_msvcrt();
if (!_vptr_cosh) {
_vptr_cosh = (void *) _elf_GetProcAddress(_dll_msvcrt, "cosh");
}
asm("leave\njmp *%0" : : "r"(_vptr_cosh));
}

void _elf_ctime() asm("ctime");
void _elf_ctime() {
static void *_vptr_ctime = NULL;
load_dll_msvcrt();
if (!_vptr_ctime) {
_vptr_ctime = (void *) _elf_GetProcAddress(_dll_msvcrt, "ctime");
}
asm("leave\njmp *%0" : : "r"(_vptr_ctime));
}

void _elf_difftime() asm("difftime");
void _elf_difftime() {
static void *_vptr_difftime = NULL;
load_dll_msvcrt();
if (!_vptr_difftime) {
_vptr_difftime = (void *) _elf_GetProcAddress(_dll_msvcrt, "difftime");
}
asm("leave\njmp *%0" : : "r"(_vptr_difftime));
}

void _elf_div() asm("div");
void _elf_div() {
static void *_vptr_div = NULL;
load_dll_msvcrt();
if (!_vptr_div) {
_vptr_div = (void *) _elf_GetProcAddress(_dll_msvcrt, "div");
}
asm("leave\njmp *%0" : : "r"(_vptr_div));
}

void _elf_exit() asm("exit");
void _elf_exit() {
static void *_vptr_exit = NULL;
load_dll_msvcrt();
if (!_vptr_exit) {
_vptr_exit = (void *) _elf_GetProcAddress(_dll_msvcrt, "exit");
}
asm("leave\njmp *%0" : : "r"(_vptr_exit));
}

void _elf_exp() asm("exp");
void _elf_exp() {
static void *_vptr_exp = NULL;
load_dll_msvcrt();
if (!_vptr_exp) {
_vptr_exp = (void *) _elf_GetProcAddress(_dll_msvcrt, "exp");
}
asm("leave\njmp *%0" : : "r"(_vptr_exp));
}

void _elf_fabs() asm("fabs");
void _elf_fabs() {
static void *_vptr_fabs = NULL;
load_dll_msvcrt();
if (!_vptr_fabs) {
_vptr_fabs = (void *) _elf_GetProcAddress(_dll_msvcrt, "fabs");
}
asm("leave\njmp *%0" : : "r"(_vptr_fabs));
}

void _elf_fclose() asm("fclose");
void _elf_fclose() {
static void *_vptr_fclose = NULL;
load_dll_msvcrt();
if (!_vptr_fclose) {
_vptr_fclose = (void *) _elf_GetProcAddress(_dll_msvcrt, "fclose");
}
asm("leave\njmp *%0" : : "r"(_vptr_fclose));
}

void _elf_feof() asm("feof");
void _elf_feof() {
static void *_vptr_feof = NULL;
load_dll_msvcrt();
if (!_vptr_feof) {
_vptr_feof = (void *) _elf_GetProcAddress(_dll_msvcrt, "feof");
}
asm("leave\njmp *%0" : : "r"(_vptr_feof));
}

void _elf_ferror() asm("ferror");
void _elf_ferror() {
static void *_vptr_ferror = NULL;
load_dll_msvcrt();
if (!_vptr_ferror) {
_vptr_ferror = (void *) _elf_GetProcAddress(_dll_msvcrt, "ferror");
}
asm("leave\njmp *%0" : : "r"(_vptr_ferror));
}

void _elf_fflush() asm("fflush");
void _elf_fflush() {
static void *_vptr_fflush = NULL;
load_dll_msvcrt();
if (!_vptr_fflush) {
_vptr_fflush = (void *) _elf_GetProcAddress(_dll_msvcrt, "fflush");
}
asm("leave\njmp *%0" : : "r"(_vptr_fflush));
}

void _elf_fgetc() asm("fgetc");
void _elf_fgetc() {
static void *_vptr_fgetc = NULL;
load_dll_msvcrt();
if (!_vptr_fgetc) {
_vptr_fgetc = (void *) _elf_GetProcAddress(_dll_msvcrt, "fgetc");
}
asm("leave\njmp *%0" : : "r"(_vptr_fgetc));
}

void _elf_fgetpos() asm("fgetpos");
void _elf_fgetpos() {
static void *_vptr_fgetpos = NULL;
load_dll_msvcrt();
if (!_vptr_fgetpos) {
_vptr_fgetpos = (void *) _elf_GetProcAddress(_dll_msvcrt, "fgetpos");
}
asm("leave\njmp *%0" : : "r"(_vptr_fgetpos));
}

void _elf_fgets() asm("fgets");
void _elf_fgets() {
static void *_vptr_fgets = NULL;
load_dll_msvcrt();
if (!_vptr_fgets) {
_vptr_fgets = (void *) _elf_GetProcAddress(_dll_msvcrt, "fgets");
}
asm("leave\njmp *%0" : : "r"(_vptr_fgets));
}

void _elf_fgetwc() asm("fgetwc");
void _elf_fgetwc() {
static void *_vptr_fgetwc = NULL;
load_dll_msvcrt();
if (!_vptr_fgetwc) {
_vptr_fgetwc = (void *) _elf_GetProcAddress(_dll_msvcrt, "fgetwc");
}
asm("leave\njmp *%0" : : "r"(_vptr_fgetwc));
}

void _elf_fgetws() asm("fgetws");
void _elf_fgetws() {
static void *_vptr_fgetws = NULL;
load_dll_msvcrt();
if (!_vptr_fgetws) {
_vptr_fgetws = (void *) _elf_GetProcAddress(_dll_msvcrt, "fgetws");
}
asm("leave\njmp *%0" : : "r"(_vptr_fgetws));
}

void _elf_floor() asm("floor");
void _elf_floor() {
static void *_vptr_floor = NULL;
load_dll_msvcrt();
if (!_vptr_floor) {
_vptr_floor = (void *) _elf_GetProcAddress(_dll_msvcrt, "floor");
}
asm("leave\njmp *%0" : : "r"(_vptr_floor));
}

void _elf_fmod() asm("fmod");
void _elf_fmod() {
static void *_vptr_fmod = NULL;
load_dll_msvcrt();
if (!_vptr_fmod) {
_vptr_fmod = (void *) _elf_GetProcAddress(_dll_msvcrt, "fmod");
}
asm("leave\njmp *%0" : : "r"(_vptr_fmod));
}

void _elf_fopen() asm("fopen");
void _elf_fopen() {
static void *_vptr_fopen = NULL;
load_dll_msvcrt();
if (!_vptr_fopen) {
_vptr_fopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "fopen");
}
asm("leave\njmp *%0" : : "r"(_vptr_fopen));
}

void _elf_fprintf() asm("fprintf");
void _elf_fprintf() {
static void *_vptr_fprintf = NULL;
load_dll_msvcrt();
if (!_vptr_fprintf) {
_vptr_fprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "fprintf");
}
asm("leave\njmp *%0" : : "r"(_vptr_fprintf));
}

void _elf_fputc() asm("fputc");
void _elf_fputc() {
static void *_vptr_fputc = NULL;
load_dll_msvcrt();
if (!_vptr_fputc) {
_vptr_fputc = (void *) _elf_GetProcAddress(_dll_msvcrt, "fputc");
}
asm("leave\njmp *%0" : : "r"(_vptr_fputc));
}

void _elf_fputs() asm("fputs");
void _elf_fputs() {
static void *_vptr_fputs = NULL;
load_dll_msvcrt();
if (!_vptr_fputs) {
_vptr_fputs = (void *) _elf_GetProcAddress(_dll_msvcrt, "fputs");
}
asm("leave\njmp *%0" : : "r"(_vptr_fputs));
}

void _elf_fputwc() asm("fputwc");
void _elf_fputwc() {
static void *_vptr_fputwc = NULL;
load_dll_msvcrt();
if (!_vptr_fputwc) {
_vptr_fputwc = (void *) _elf_GetProcAddress(_dll_msvcrt, "fputwc");
}
asm("leave\njmp *%0" : : "r"(_vptr_fputwc));
}

void _elf_fputws() asm("fputws");
void _elf_fputws() {
static void *_vptr_fputws = NULL;
load_dll_msvcrt();
if (!_vptr_fputws) {
_vptr_fputws = (void *) _elf_GetProcAddress(_dll_msvcrt, "fputws");
}
asm("leave\njmp *%0" : : "r"(_vptr_fputws));
}

void _elf_fread() asm("fread");
void _elf_fread() {
static void *_vptr_fread = NULL;
load_dll_msvcrt();
if (!_vptr_fread) {
_vptr_fread = (void *) _elf_GetProcAddress(_dll_msvcrt, "fread");
}
asm("leave\njmp *%0" : : "r"(_vptr_fread));
}

void _elf_free() asm("free");
void _elf_free() {
static void *_vptr_free = NULL;
load_dll_msvcrt();
if (!_vptr_free) {
_vptr_free = (void *) _elf_GetProcAddress(_dll_msvcrt, "free");
}
asm("leave\njmp *%0" : : "r"(_vptr_free));
}

void _elf_freopen() asm("freopen");
void _elf_freopen() {
static void *_vptr_freopen = NULL;
load_dll_msvcrt();
if (!_vptr_freopen) {
_vptr_freopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "freopen");
}
asm("leave\njmp *%0" : : "r"(_vptr_freopen));
}

void _elf_frexp() asm("frexp");
void _elf_frexp() {
static void *_vptr_frexp = NULL;
load_dll_msvcrt();
if (!_vptr_frexp) {
_vptr_frexp = (void *) _elf_GetProcAddress(_dll_msvcrt, "frexp");
}
asm("leave\njmp *%0" : : "r"(_vptr_frexp));
}

void _elf_fscanf() asm("fscanf");
void _elf_fscanf() {
static void *_vptr_fscanf = NULL;
load_dll_msvcrt();
if (!_vptr_fscanf) {
_vptr_fscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "fscanf");
}
asm("leave\njmp *%0" : : "r"(_vptr_fscanf));
}

void _elf_fseek() asm("fseek");
void _elf_fseek() {
static void *_vptr_fseek = NULL;
load_dll_msvcrt();
if (!_vptr_fseek) {
_vptr_fseek = (void *) _elf_GetProcAddress(_dll_msvcrt, "fseek");
}
asm("leave\njmp *%0" : : "r"(_vptr_fseek));
}

void _elf_fsetpos() asm("fsetpos");
void _elf_fsetpos() {
static void *_vptr_fsetpos = NULL;
load_dll_msvcrt();
if (!_vptr_fsetpos) {
_vptr_fsetpos = (void *) _elf_GetProcAddress(_dll_msvcrt, "fsetpos");
}
asm("leave\njmp *%0" : : "r"(_vptr_fsetpos));
}

void _elf_ftell() asm("ftell");
void _elf_ftell() {
static void *_vptr_ftell = NULL;
load_dll_msvcrt();
if (!_vptr_ftell) {
_vptr_ftell = (void *) _elf_GetProcAddress(_dll_msvcrt, "ftell");
}
asm("leave\njmp *%0" : : "r"(_vptr_ftell));
}

void _elf_fwprintf() asm("fwprintf");
void _elf_fwprintf() {
static void *_vptr_fwprintf = NULL;
load_dll_msvcrt();
if (!_vptr_fwprintf) {
_vptr_fwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "fwprintf");
}
asm("leave\njmp *%0" : : "r"(_vptr_fwprintf));
}

void _elf_fwrite() asm("fwrite");
void _elf_fwrite() {
static void *_vptr_fwrite = NULL;
load_dll_msvcrt();
if (!_vptr_fwrite) {
_vptr_fwrite = (void *) _elf_GetProcAddress(_dll_msvcrt, "fwrite");
}
asm("leave\njmp *%0" : : "r"(_vptr_fwrite));
}

void _elf_fwscanf() asm("fwscanf");
void _elf_fwscanf() {
static void *_vptr_fwscanf = NULL;
load_dll_msvcrt();
if (!_vptr_fwscanf) {
_vptr_fwscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "fwscanf");
}
asm("leave\njmp *%0" : : "r"(_vptr_fwscanf));
}

void _elf_getc() asm("getc");
void _elf_getc() {
static void *_vptr_getc = NULL;
load_dll_msvcrt();
if (!_vptr_getc) {
_vptr_getc = (void *) _elf_GetProcAddress(_dll_msvcrt, "getc");
}
asm("leave\njmp *%0" : : "r"(_vptr_getc));
}

void _elf_getchar() asm("getchar");
void _elf_getchar() {
static void *_vptr_getchar = NULL;
load_dll_msvcrt();
if (!_vptr_getchar) {
_vptr_getchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "getchar");
}
asm("leave\njmp *%0" : : "r"(_vptr_getchar));
}

void _elf_getenv() asm("getenv");
void _elf_getenv() {
static void *_vptr_getenv = NULL;
load_dll_msvcrt();
if (!_vptr_getenv) {
_vptr_getenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "getenv");
}
asm("leave\njmp *%0" : : "r"(_vptr_getenv));
}

void _elf_gets() asm("gets");
void _elf_gets() {
static void *_vptr_gets = NULL;
load_dll_msvcrt();
if (!_vptr_gets) {
_vptr_gets = (void *) _elf_GetProcAddress(_dll_msvcrt, "gets");
}
asm("leave\njmp *%0" : : "r"(_vptr_gets));
}

void _elf_getwc() asm("getwc");
void _elf_getwc() {
static void *_vptr_getwc = NULL;
load_dll_msvcrt();
if (!_vptr_getwc) {
_vptr_getwc = (void *) _elf_GetProcAddress(_dll_msvcrt, "getwc");
}
asm("leave\njmp *%0" : : "r"(_vptr_getwc));
}

void _elf_getwchar() asm("getwchar");
void _elf_getwchar() {
static void *_vptr_getwchar = NULL;
load_dll_msvcrt();
if (!_vptr_getwchar) {
_vptr_getwchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "getwchar");
}
asm("leave\njmp *%0" : : "r"(_vptr_getwchar));
}

void _elf_gmtime() asm("gmtime");
void _elf_gmtime() {
static void *_vptr_gmtime = NULL;
load_dll_msvcrt();
if (!_vptr_gmtime) {
_vptr_gmtime = (void *) _elf_GetProcAddress(_dll_msvcrt, "gmtime");
}
asm("leave\njmp *%0" : : "r"(_vptr_gmtime));
}

void _elf_is_wctype() asm("is_wctype");
void _elf_is_wctype() {
static void *_vptr_is_wctype = NULL;
load_dll_msvcrt();
if (!_vptr_is_wctype) {
_vptr_is_wctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "is_wctype");
}
asm("leave\njmp *%0" : : "r"(_vptr_is_wctype));
}

void _elf_isalnum() asm("isalnum");
void _elf_isalnum() {
static void *_vptr_isalnum = NULL;
load_dll_msvcrt();
if (!_vptr_isalnum) {
_vptr_isalnum = (void *) _elf_GetProcAddress(_dll_msvcrt, "isalnum");
}
asm("leave\njmp *%0" : : "r"(_vptr_isalnum));
}

void _elf_isalpha() asm("isalpha");
void _elf_isalpha() {
static void *_vptr_isalpha = NULL;
load_dll_msvcrt();
if (!_vptr_isalpha) {
_vptr_isalpha = (void *) _elf_GetProcAddress(_dll_msvcrt, "isalpha");
}
asm("leave\njmp *%0" : : "r"(_vptr_isalpha));
}

void _elf_iscntrl() asm("iscntrl");
void _elf_iscntrl() {
static void *_vptr_iscntrl = NULL;
load_dll_msvcrt();
if (!_vptr_iscntrl) {
_vptr_iscntrl = (void *) _elf_GetProcAddress(_dll_msvcrt, "iscntrl");
}
asm("leave\njmp *%0" : : "r"(_vptr_iscntrl));
}

void _elf_isdigit() asm("isdigit");
void _elf_isdigit() {
static void *_vptr_isdigit = NULL;
load_dll_msvcrt();
if (!_vptr_isdigit) {
_vptr_isdigit = (void *) _elf_GetProcAddress(_dll_msvcrt, "isdigit");
}
asm("leave\njmp *%0" : : "r"(_vptr_isdigit));
}

void _elf_isgraph() asm("isgraph");
void _elf_isgraph() {
static void *_vptr_isgraph = NULL;
load_dll_msvcrt();
if (!_vptr_isgraph) {
_vptr_isgraph = (void *) _elf_GetProcAddress(_dll_msvcrt, "isgraph");
}
asm("leave\njmp *%0" : : "r"(_vptr_isgraph));
}

void _elf_isleadbyte() asm("isleadbyte");
void _elf_isleadbyte() {
static void *_vptr_isleadbyte = NULL;
load_dll_msvcrt();
if (!_vptr_isleadbyte) {
_vptr_isleadbyte = (void *) _elf_GetProcAddress(_dll_msvcrt, "isleadbyte");
}
asm("leave\njmp *%0" : : "r"(_vptr_isleadbyte));
}

void _elf_islower() asm("islower");
void _elf_islower() {
static void *_vptr_islower = NULL;
load_dll_msvcrt();
if (!_vptr_islower) {
_vptr_islower = (void *) _elf_GetProcAddress(_dll_msvcrt, "islower");
}
asm("leave\njmp *%0" : : "r"(_vptr_islower));
}

void _elf_isprint() asm("isprint");
void _elf_isprint() {
static void *_vptr_isprint = NULL;
load_dll_msvcrt();
if (!_vptr_isprint) {
_vptr_isprint = (void *) _elf_GetProcAddress(_dll_msvcrt, "isprint");
}
asm("leave\njmp *%0" : : "r"(_vptr_isprint));
}

void _elf_ispunct() asm("ispunct");
void _elf_ispunct() {
static void *_vptr_ispunct = NULL;
load_dll_msvcrt();
if (!_vptr_ispunct) {
_vptr_ispunct = (void *) _elf_GetProcAddress(_dll_msvcrt, "ispunct");
}
asm("leave\njmp *%0" : : "r"(_vptr_ispunct));
}

void _elf_isspace() asm("isspace");
void _elf_isspace() {
static void *_vptr_isspace = NULL;
load_dll_msvcrt();
if (!_vptr_isspace) {
_vptr_isspace = (void *) _elf_GetProcAddress(_dll_msvcrt, "isspace");
}
asm("leave\njmp *%0" : : "r"(_vptr_isspace));
}

void _elf_isupper() asm("isupper");
void _elf_isupper() {
static void *_vptr_isupper = NULL;
load_dll_msvcrt();
if (!_vptr_isupper) {
_vptr_isupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "isupper");
}
asm("leave\njmp *%0" : : "r"(_vptr_isupper));
}

void _elf_iswalnum() asm("iswalnum");
void _elf_iswalnum() {
static void *_vptr_iswalnum = NULL;
load_dll_msvcrt();
if (!_vptr_iswalnum) {
_vptr_iswalnum = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswalnum");
}
asm("leave\njmp *%0" : : "r"(_vptr_iswalnum));
}

void _elf_iswalpha() asm("iswalpha");
void _elf_iswalpha() {
static void *_vptr_iswalpha = NULL;
load_dll_msvcrt();
if (!_vptr_iswalpha) {
_vptr_iswalpha = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswalpha");
}
asm("leave\njmp *%0" : : "r"(_vptr_iswalpha));
}

void _elf_iswascii() asm("iswascii");
void _elf_iswascii() {
static void *_vptr_iswascii = NULL;
load_dll_msvcrt();
if (!_vptr_iswascii) {
_vptr_iswascii = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswascii");
}
asm("leave\njmp *%0" : : "r"(_vptr_iswascii));
}

void _elf_iswcntrl() asm("iswcntrl");
void _elf_iswcntrl() {
static void *_vptr_iswcntrl = NULL;
load_dll_msvcrt();
if (!_vptr_iswcntrl) {
_vptr_iswcntrl = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswcntrl");
}
asm("leave\njmp *%0" : : "r"(_vptr_iswcntrl));
}

void _elf_iswctype() asm("iswctype");
void _elf_iswctype() {
static void *_vptr_iswctype = NULL;
load_dll_msvcrt();
if (!_vptr_iswctype) {
_vptr_iswctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswctype");
}
asm("leave\njmp *%0" : : "r"(_vptr_iswctype));
}

void _elf_iswdigit() asm("iswdigit");
void _elf_iswdigit() {
static void *_vptr_iswdigit = NULL;
load_dll_msvcrt();
if (!_vptr_iswdigit) {
_vptr_iswdigit = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswdigit");
}
asm("leave\njmp *%0" : : "r"(_vptr_iswdigit));
}

void _elf_iswgraph() asm("iswgraph");
void _elf_iswgraph() {
static void *_vptr_iswgraph = NULL;
load_dll_msvcrt();
if (!_vptr_iswgraph) {
_vptr_iswgraph = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswgraph");
}
asm("leave\njmp *%0" : : "r"(_vptr_iswgraph));
}

void _elf_iswlower() asm("iswlower");
void _elf_iswlower() {
static void *_vptr_iswlower = NULL;
load_dll_msvcrt();
if (!_vptr_iswlower) {
_vptr_iswlower = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswlower");
}
asm("leave\njmp *%0" : : "r"(_vptr_iswlower));
}

void _elf_iswprint() asm("iswprint");
void _elf_iswprint() {
static void *_vptr_iswprint = NULL;
load_dll_msvcrt();
if (!_vptr_iswprint) {
_vptr_iswprint = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswprint");
}
asm("leave\njmp *%0" : : "r"(_vptr_iswprint));
}

void _elf_iswpunct() asm("iswpunct");
void _elf_iswpunct() {
static void *_vptr_iswpunct = NULL;
load_dll_msvcrt();
if (!_vptr_iswpunct) {
_vptr_iswpunct = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswpunct");
}
asm("leave\njmp *%0" : : "r"(_vptr_iswpunct));
}

void _elf_iswspace() asm("iswspace");
void _elf_iswspace() {
static void *_vptr_iswspace = NULL;
load_dll_msvcrt();
if (!_vptr_iswspace) {
_vptr_iswspace = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswspace");
}
asm("leave\njmp *%0" : : "r"(_vptr_iswspace));
}

void _elf_iswupper() asm("iswupper");
void _elf_iswupper() {
static void *_vptr_iswupper = NULL;
load_dll_msvcrt();
if (!_vptr_iswupper) {
_vptr_iswupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswupper");
}
asm("leave\njmp *%0" : : "r"(_vptr_iswupper));
}

void _elf_iswxdigit() asm("iswxdigit");
void _elf_iswxdigit() {
static void *_vptr_iswxdigit = NULL;
load_dll_msvcrt();
if (!_vptr_iswxdigit) {
_vptr_iswxdigit = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswxdigit");
}
asm("leave\njmp *%0" : : "r"(_vptr_iswxdigit));
}

void _elf_isxdigit() asm("isxdigit");
void _elf_isxdigit() {
static void *_vptr_isxdigit = NULL;
load_dll_msvcrt();
if (!_vptr_isxdigit) {
_vptr_isxdigit = (void *) _elf_GetProcAddress(_dll_msvcrt, "isxdigit");
}
asm("leave\njmp *%0" : : "r"(_vptr_isxdigit));
}

void _elf_labs() asm("labs");
void _elf_labs() {
static void *_vptr_labs = NULL;
load_dll_msvcrt();
if (!_vptr_labs) {
_vptr_labs = (void *) _elf_GetProcAddress(_dll_msvcrt, "labs");
}
asm("leave\njmp *%0" : : "r"(_vptr_labs));
}

void _elf_ldexp() asm("ldexp");
void _elf_ldexp() {
static void *_vptr_ldexp = NULL;
load_dll_msvcrt();
if (!_vptr_ldexp) {
_vptr_ldexp = (void *) _elf_GetProcAddress(_dll_msvcrt, "ldexp");
}
asm("leave\njmp *%0" : : "r"(_vptr_ldexp));
}

void _elf_ldiv() asm("ldiv");
void _elf_ldiv() {
static void *_vptr_ldiv = NULL;
load_dll_msvcrt();
if (!_vptr_ldiv) {
_vptr_ldiv = (void *) _elf_GetProcAddress(_dll_msvcrt, "ldiv");
}
asm("leave\njmp *%0" : : "r"(_vptr_ldiv));
}

void _elf_localeconv() asm("localeconv");
void _elf_localeconv() {
static void *_vptr_localeconv = NULL;
load_dll_msvcrt();
if (!_vptr_localeconv) {
_vptr_localeconv = (void *) _elf_GetProcAddress(_dll_msvcrt, "localeconv");
}
asm("leave\njmp *%0" : : "r"(_vptr_localeconv));
}

void _elf_localtime() asm("localtime");
void _elf_localtime() {
static void *_vptr_localtime = NULL;
load_dll_msvcrt();
if (!_vptr_localtime) {
_vptr_localtime = (void *) _elf_GetProcAddress(_dll_msvcrt, "localtime");
}
asm("leave\njmp *%0" : : "r"(_vptr_localtime));
}

void _elf_log() asm("log");
void _elf_log() {
static void *_vptr_log = NULL;
load_dll_msvcrt();
if (!_vptr_log) {
_vptr_log = (void *) _elf_GetProcAddress(_dll_msvcrt, "log");
}
asm("leave\njmp *%0" : : "r"(_vptr_log));
}

void _elf_log10() asm("log10");
void _elf_log10() {
static void *_vptr_log10 = NULL;
load_dll_msvcrt();
if (!_vptr_log10) {
_vptr_log10 = (void *) _elf_GetProcAddress(_dll_msvcrt, "log10");
}
asm("leave\njmp *%0" : : "r"(_vptr_log10));
}

void _elf_longjmp() asm("longjmp");
void _elf_longjmp() {
static void *_vptr_longjmp = NULL;
load_dll_msvcrt();
if (!_vptr_longjmp) {
_vptr_longjmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "longjmp");
}
asm("leave\njmp *%0" : : "r"(_vptr_longjmp));
}

void _elf_malloc() asm("malloc");
void _elf_malloc() {
static void *_vptr_malloc = NULL;
load_dll_msvcrt();
if (!_vptr_malloc) {
_vptr_malloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "malloc");
}
asm("leave\njmp *%0" : : "r"(_vptr_malloc));
}

void _elf_mblen() asm("mblen");
void _elf_mblen() {
static void *_vptr_mblen = NULL;
load_dll_msvcrt();
if (!_vptr_mblen) {
_vptr_mblen = (void *) _elf_GetProcAddress(_dll_msvcrt, "mblen");
}
asm("leave\njmp *%0" : : "r"(_vptr_mblen));
}

void _elf_mbstowcs() asm("mbstowcs");
void _elf_mbstowcs() {
static void *_vptr_mbstowcs = NULL;
load_dll_msvcrt();
if (!_vptr_mbstowcs) {
_vptr_mbstowcs = (void *) _elf_GetProcAddress(_dll_msvcrt, "mbstowcs");
}
asm("leave\njmp *%0" : : "r"(_vptr_mbstowcs));
}

void _elf_mbtowc() asm("mbtowc");
void _elf_mbtowc() {
static void *_vptr_mbtowc = NULL;
load_dll_msvcrt();
if (!_vptr_mbtowc) {
_vptr_mbtowc = (void *) _elf_GetProcAddress(_dll_msvcrt, "mbtowc");
}
asm("leave\njmp *%0" : : "r"(_vptr_mbtowc));
}

void _elf_memchr() asm("memchr");
void _elf_memchr() {
static void *_vptr_memchr = NULL;
load_dll_msvcrt();
if (!_vptr_memchr) {
_vptr_memchr = (void *) _elf_GetProcAddress(_dll_msvcrt, "memchr");
}
asm("leave\njmp *%0" : : "r"(_vptr_memchr));
}

void _elf_memcmp() asm("memcmp");
void _elf_memcmp() {
static void *_vptr_memcmp = NULL;
load_dll_msvcrt();
if (!_vptr_memcmp) {
_vptr_memcmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "memcmp");
}
asm("leave\njmp *%0" : : "r"(_vptr_memcmp));
}

void _elf_memcpy() asm("memcpy");
void _elf_memcpy() {
static void *_vptr_memcpy = NULL;
load_dll_msvcrt();
if (!_vptr_memcpy) {
_vptr_memcpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "memcpy");
}
asm("leave\njmp *%0" : : "r"(_vptr_memcpy));
}

void _elf_memmove() asm("memmove");
void _elf_memmove() {
static void *_vptr_memmove = NULL;
load_dll_msvcrt();
if (!_vptr_memmove) {
_vptr_memmove = (void *) _elf_GetProcAddress(_dll_msvcrt, "memmove");
}
asm("leave\njmp *%0" : : "r"(_vptr_memmove));
}

void _elf_memset() asm("memset");
void _elf_memset() {
static void *_vptr_memset = NULL;
load_dll_msvcrt();
if (!_vptr_memset) {
_vptr_memset = (void *) _elf_GetProcAddress(_dll_msvcrt, "memset");
}
asm("leave\njmp *%0" : : "r"(_vptr_memset));
}

void _elf_mktime() asm("mktime");
void _elf_mktime() {
static void *_vptr_mktime = NULL;
load_dll_msvcrt();
if (!_vptr_mktime) {
_vptr_mktime = (void *) _elf_GetProcAddress(_dll_msvcrt, "mktime");
}
asm("leave\njmp *%0" : : "r"(_vptr_mktime));
}

void _elf_modf() asm("modf");
void _elf_modf() {
static void *_vptr_modf = NULL;
load_dll_msvcrt();
if (!_vptr_modf) {
_vptr_modf = (void *) _elf_GetProcAddress(_dll_msvcrt, "modf");
}
asm("leave\njmp *%0" : : "r"(_vptr_modf));
}

void _elf_perror() asm("perror");
void _elf_perror() {
static void *_vptr_perror = NULL;
load_dll_msvcrt();
if (!_vptr_perror) {
_vptr_perror = (void *) _elf_GetProcAddress(_dll_msvcrt, "perror");
}
asm("leave\njmp *%0" : : "r"(_vptr_perror));
}

void _elf_pow() asm("pow");
void _elf_pow() {
static void *_vptr_pow = NULL;
load_dll_msvcrt();
if (!_vptr_pow) {
_vptr_pow = (void *) _elf_GetProcAddress(_dll_msvcrt, "pow");
}
asm("leave\njmp *%0" : : "r"(_vptr_pow));
}

void _elf_printf() asm("printf");
void _elf_printf() {
static void *_vptr_printf = NULL;
load_dll_msvcrt();
if (!_vptr_printf) {
_vptr_printf = (void *) _elf_GetProcAddress(_dll_msvcrt, "printf");
}
asm("leave\njmp *%0" : : "r"(_vptr_printf));
}

void _elf_putc() asm("putc");
void _elf_putc() {
static void *_vptr_putc = NULL;
load_dll_msvcrt();
if (!_vptr_putc) {
_vptr_putc = (void *) _elf_GetProcAddress(_dll_msvcrt, "putc");
}
asm("leave\njmp *%0" : : "r"(_vptr_putc));
}

void _elf_putchar() asm("putchar");
void _elf_putchar() {
static void *_vptr_putchar = NULL;
load_dll_msvcrt();
if (!_vptr_putchar) {
_vptr_putchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "putchar");
}
asm("leave\njmp *%0" : : "r"(_vptr_putchar));
}

void _elf_puts() asm("puts");
void _elf_puts() {
static void *_vptr_puts = NULL;
load_dll_msvcrt();
if (!_vptr_puts) {
_vptr_puts = (void *) _elf_GetProcAddress(_dll_msvcrt, "puts");
}
asm("leave\njmp *%0" : : "r"(_vptr_puts));
}

void _elf_putwc() asm("putwc");
void _elf_putwc() {
static void *_vptr_putwc = NULL;
load_dll_msvcrt();
if (!_vptr_putwc) {
_vptr_putwc = (void *) _elf_GetProcAddress(_dll_msvcrt, "putwc");
}
asm("leave\njmp *%0" : : "r"(_vptr_putwc));
}

void _elf_putwchar() asm("putwchar");
void _elf_putwchar() {
static void *_vptr_putwchar = NULL;
load_dll_msvcrt();
if (!_vptr_putwchar) {
_vptr_putwchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "putwchar");
}
asm("leave\njmp *%0" : : "r"(_vptr_putwchar));
}

void _elf_qsort() asm("qsort");
void _elf_qsort() {
static void *_vptr_qsort = NULL;
load_dll_msvcrt();
if (!_vptr_qsort) {
_vptr_qsort = (void *) _elf_GetProcAddress(_dll_msvcrt, "qsort");
}
asm("leave\njmp *%0" : : "r"(_vptr_qsort));
}

void _elf_raise() asm("raise");
void _elf_raise() {
static void *_vptr_raise = NULL;
load_dll_msvcrt();
if (!_vptr_raise) {
_vptr_raise = (void *) _elf_GetProcAddress(_dll_msvcrt, "raise");
}
asm("leave\njmp *%0" : : "r"(_vptr_raise));
}

void _elf_rand() asm("rand");
void _elf_rand() {
static void *_vptr_rand = NULL;
load_dll_msvcrt();
if (!_vptr_rand) {
_vptr_rand = (void *) _elf_GetProcAddress(_dll_msvcrt, "rand");
}
asm("leave\njmp *%0" : : "r"(_vptr_rand));
}

void _elf_realloc() asm("realloc");
void _elf_realloc() {
static void *_vptr_realloc = NULL;
load_dll_msvcrt();
if (!_vptr_realloc) {
_vptr_realloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "realloc");
}
asm("leave\njmp *%0" : : "r"(_vptr_realloc));
}

void _elf_remove() asm("remove");
void _elf_remove() {
static void *_vptr_remove = NULL;
load_dll_msvcrt();
if (!_vptr_remove) {
_vptr_remove = (void *) _elf_GetProcAddress(_dll_msvcrt, "remove");
}
asm("leave\njmp *%0" : : "r"(_vptr_remove));
}

void _elf_rename() asm("rename");
void _elf_rename() {
static void *_vptr_rename = NULL;
load_dll_msvcrt();
if (!_vptr_rename) {
_vptr_rename = (void *) _elf_GetProcAddress(_dll_msvcrt, "rename");
}
asm("leave\njmp *%0" : : "r"(_vptr_rename));
}

void _elf_rewind() asm("rewind");
void _elf_rewind() {
static void *_vptr_rewind = NULL;
load_dll_msvcrt();
if (!_vptr_rewind) {
_vptr_rewind = (void *) _elf_GetProcAddress(_dll_msvcrt, "rewind");
}
asm("leave\njmp *%0" : : "r"(_vptr_rewind));
}

void _elf_scanf() asm("scanf");
void _elf_scanf() {
static void *_vptr_scanf = NULL;
load_dll_msvcrt();
if (!_vptr_scanf) {
_vptr_scanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "scanf");
}
asm("leave\njmp *%0" : : "r"(_vptr_scanf));
}

void _elf_setbuf() asm("setbuf");
void _elf_setbuf() {
static void *_vptr_setbuf = NULL;
load_dll_msvcrt();
if (!_vptr_setbuf) {
_vptr_setbuf = (void *) _elf_GetProcAddress(_dll_msvcrt, "setbuf");
}
asm("leave\njmp *%0" : : "r"(_vptr_setbuf));
}

void _elf_setlocale() asm("setlocale");
void _elf_setlocale() {
static void *_vptr_setlocale = NULL;
load_dll_msvcrt();
if (!_vptr_setlocale) {
_vptr_setlocale = (void *) _elf_GetProcAddress(_dll_msvcrt, "setlocale");
}
asm("leave\njmp *%0" : : "r"(_vptr_setlocale));
}

void _elf_setvbuf() asm("setvbuf");
void _elf_setvbuf() {
static void *_vptr_setvbuf = NULL;
load_dll_msvcrt();
if (!_vptr_setvbuf) {
_vptr_setvbuf = (void *) _elf_GetProcAddress(_dll_msvcrt, "setvbuf");
}
asm("leave\njmp *%0" : : "r"(_vptr_setvbuf));
}

void _elf_signal() asm("signal");
void _elf_signal() {
static void *_vptr_signal = NULL;
load_dll_msvcrt();
if (!_vptr_signal) {
_vptr_signal = (void *) _elf_GetProcAddress(_dll_msvcrt, "signal");
}
asm("leave\njmp *%0" : : "r"(_vptr_signal));
}

void _elf_sin() asm("sin");
void _elf_sin() {
static void *_vptr_sin = NULL;
load_dll_msvcrt();
if (!_vptr_sin) {
_vptr_sin = (void *) _elf_GetProcAddress(_dll_msvcrt, "sin");
}
asm("leave\njmp *%0" : : "r"(_vptr_sin));
}

void _elf_sinh() asm("sinh");
void _elf_sinh() {
static void *_vptr_sinh = NULL;
load_dll_msvcrt();
if (!_vptr_sinh) {
_vptr_sinh = (void *) _elf_GetProcAddress(_dll_msvcrt, "sinh");
}
asm("leave\njmp *%0" : : "r"(_vptr_sinh));
}

void _elf_sprintf() asm("sprintf");
void _elf_sprintf() {
static void *_vptr_sprintf = NULL;
load_dll_msvcrt();
if (!_vptr_sprintf) {
_vptr_sprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "sprintf");
}
asm("leave\njmp *%0" : : "r"(_vptr_sprintf));
}

void _elf_sqrt() asm("sqrt");
void _elf_sqrt() {
static void *_vptr_sqrt = NULL;
load_dll_msvcrt();
if (!_vptr_sqrt) {
_vptr_sqrt = (void *) _elf_GetProcAddress(_dll_msvcrt, "sqrt");
}
asm("leave\njmp *%0" : : "r"(_vptr_sqrt));
}

void _elf_srand() asm("srand");
void _elf_srand() {
static void *_vptr_srand = NULL;
load_dll_msvcrt();
if (!_vptr_srand) {
_vptr_srand = (void *) _elf_GetProcAddress(_dll_msvcrt, "srand");
}
asm("leave\njmp *%0" : : "r"(_vptr_srand));
}

void _elf_sscanf() asm("sscanf");
void _elf_sscanf() {
static void *_vptr_sscanf = NULL;
load_dll_msvcrt();
if (!_vptr_sscanf) {
_vptr_sscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "sscanf");
}
asm("leave\njmp *%0" : : "r"(_vptr_sscanf));
}

void _elf_strcat() asm("strcat");
void _elf_strcat() {
static void *_vptr_strcat = NULL;
load_dll_msvcrt();
if (!_vptr_strcat) {
_vptr_strcat = (void *) _elf_GetProcAddress(_dll_msvcrt, "strcat");
}
asm("leave\njmp *%0" : : "r"(_vptr_strcat));
}

void _elf_strchr() asm("strchr");
void _elf_strchr() {
static void *_vptr_strchr = NULL;
load_dll_msvcrt();
if (!_vptr_strchr) {
_vptr_strchr = (void *) _elf_GetProcAddress(_dll_msvcrt, "strchr");
}
asm("leave\njmp *%0" : : "r"(_vptr_strchr));
}

void _elf_strcmp() asm("strcmp");
void _elf_strcmp() {
static void *_vptr_strcmp = NULL;
load_dll_msvcrt();
if (!_vptr_strcmp) {
_vptr_strcmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "strcmp");
}
asm("leave\njmp *%0" : : "r"(_vptr_strcmp));
}

void _elf_strcoll() asm("strcoll");
void _elf_strcoll() {
static void *_vptr_strcoll = NULL;
load_dll_msvcrt();
if (!_vptr_strcoll) {
_vptr_strcoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "strcoll");
}
asm("leave\njmp *%0" : : "r"(_vptr_strcoll));
}

void _elf_strcpy() asm("strcpy");
void _elf_strcpy() {
static void *_vptr_strcpy = NULL;
load_dll_msvcrt();
if (!_vptr_strcpy) {
_vptr_strcpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "strcpy");
}
asm("leave\njmp *%0" : : "r"(_vptr_strcpy));
}

void _elf_strcspn() asm("strcspn");
void _elf_strcspn() {
static void *_vptr_strcspn = NULL;
load_dll_msvcrt();
if (!_vptr_strcspn) {
_vptr_strcspn = (void *) _elf_GetProcAddress(_dll_msvcrt, "strcspn");
}
asm("leave\njmp *%0" : : "r"(_vptr_strcspn));
}

void _elf_strerror() asm("strerror");
void _elf_strerror() {
static void *_vptr_strerror = NULL;
load_dll_msvcrt();
if (!_vptr_strerror) {
_vptr_strerror = (void *) _elf_GetProcAddress(_dll_msvcrt, "strerror");
}
asm("leave\njmp *%0" : : "r"(_vptr_strerror));
}

void _elf_strftime() asm("strftime");
void _elf_strftime() {
static void *_vptr_strftime = NULL;
load_dll_msvcrt();
if (!_vptr_strftime) {
_vptr_strftime = (void *) _elf_GetProcAddress(_dll_msvcrt, "strftime");
}
asm("leave\njmp *%0" : : "r"(_vptr_strftime));
}

void _elf_strlen() asm("strlen");
void _elf_strlen() {
static void *_vptr_strlen = NULL;
load_dll_msvcrt();
if (!_vptr_strlen) {
_vptr_strlen = (void *) _elf_GetProcAddress(_dll_msvcrt, "strlen");
}
asm("leave\njmp *%0" : : "r"(_vptr_strlen));
}

void _elf_strncat() asm("strncat");
void _elf_strncat() {
static void *_vptr_strncat = NULL;
load_dll_msvcrt();
if (!_vptr_strncat) {
_vptr_strncat = (void *) _elf_GetProcAddress(_dll_msvcrt, "strncat");
}
asm("leave\njmp *%0" : : "r"(_vptr_strncat));
}

void _elf_strncmp() asm("strncmp");
void _elf_strncmp() {
static void *_vptr_strncmp = NULL;
load_dll_msvcrt();
if (!_vptr_strncmp) {
_vptr_strncmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "strncmp");
}
asm("leave\njmp *%0" : : "r"(_vptr_strncmp));
}

void _elf_strncpy() asm("strncpy");
void _elf_strncpy() {
static void *_vptr_strncpy = NULL;
load_dll_msvcrt();
if (!_vptr_strncpy) {
_vptr_strncpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "strncpy");
}
asm("leave\njmp *%0" : : "r"(_vptr_strncpy));
}

void _elf_strpbrk() asm("strpbrk");
void _elf_strpbrk() {
static void *_vptr_strpbrk = NULL;
load_dll_msvcrt();
if (!_vptr_strpbrk) {
_vptr_strpbrk = (void *) _elf_GetProcAddress(_dll_msvcrt, "strpbrk");
}
asm("leave\njmp *%0" : : "r"(_vptr_strpbrk));
}

void _elf_strrchr() asm("strrchr");
void _elf_strrchr() {
static void *_vptr_strrchr = NULL;
load_dll_msvcrt();
if (!_vptr_strrchr) {
_vptr_strrchr = (void *) _elf_GetProcAddress(_dll_msvcrt, "strrchr");
}
asm("leave\njmp *%0" : : "r"(_vptr_strrchr));
}

void _elf_strspn() asm("strspn");
void _elf_strspn() {
static void *_vptr_strspn = NULL;
load_dll_msvcrt();
if (!_vptr_strspn) {
_vptr_strspn = (void *) _elf_GetProcAddress(_dll_msvcrt, "strspn");
}
asm("leave\njmp *%0" : : "r"(_vptr_strspn));
}

void _elf_strstr() asm("strstr");
void _elf_strstr() {
static void *_vptr_strstr = NULL;
load_dll_msvcrt();
if (!_vptr_strstr) {
_vptr_strstr = (void *) _elf_GetProcAddress(_dll_msvcrt, "strstr");
}
asm("leave\njmp *%0" : : "r"(_vptr_strstr));
}

void _elf_strtod() asm("strtod");
void _elf_strtod() {
static void *_vptr_strtod = NULL;
load_dll_msvcrt();
if (!_vptr_strtod) {
_vptr_strtod = (void *) _elf_GetProcAddress(_dll_msvcrt, "strtod");
}
asm("leave\njmp *%0" : : "r"(_vptr_strtod));
}

void _elf_strtok() asm("strtok");
void _elf_strtok() {
static void *_vptr_strtok = NULL;
load_dll_msvcrt();
if (!_vptr_strtok) {
_vptr_strtok = (void *) _elf_GetProcAddress(_dll_msvcrt, "strtok");
}
asm("leave\njmp *%0" : : "r"(_vptr_strtok));
}

void _elf_strtol() asm("strtol");
void _elf_strtol() {
static void *_vptr_strtol = NULL;
load_dll_msvcrt();
if (!_vptr_strtol) {
_vptr_strtol = (void *) _elf_GetProcAddress(_dll_msvcrt, "strtol");
}
asm("leave\njmp *%0" : : "r"(_vptr_strtol));
}

void _elf_strtoul() asm("strtoul");
void _elf_strtoul() {
static void *_vptr_strtoul = NULL;
load_dll_msvcrt();
if (!_vptr_strtoul) {
_vptr_strtoul = (void *) _elf_GetProcAddress(_dll_msvcrt, "strtoul");
}
asm("leave\njmp *%0" : : "r"(_vptr_strtoul));
}

void _elf_strxfrm() asm("strxfrm");
void _elf_strxfrm() {
static void *_vptr_strxfrm = NULL;
load_dll_msvcrt();
if (!_vptr_strxfrm) {
_vptr_strxfrm = (void *) _elf_GetProcAddress(_dll_msvcrt, "strxfrm");
}
asm("leave\njmp *%0" : : "r"(_vptr_strxfrm));
}

void _elf_swprintf() asm("swprintf");
void _elf_swprintf() {
static void *_vptr_swprintf = NULL;
load_dll_msvcrt();
if (!_vptr_swprintf) {
_vptr_swprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "swprintf");
}
asm("leave\njmp *%0" : : "r"(_vptr_swprintf));
}

void _elf_swscanf() asm("swscanf");
void _elf_swscanf() {
static void *_vptr_swscanf = NULL;
load_dll_msvcrt();
if (!_vptr_swscanf) {
_vptr_swscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "swscanf");
}
asm("leave\njmp *%0" : : "r"(_vptr_swscanf));
}

void _elf_system() asm("system");
void _elf_system() {
static void *_vptr_system = NULL;
load_dll_msvcrt();
if (!_vptr_system) {
_vptr_system = (void *) _elf_GetProcAddress(_dll_msvcrt, "system");
}
asm("leave\njmp *%0" : : "r"(_vptr_system));
}

void _elf_tan() asm("tan");
void _elf_tan() {
static void *_vptr_tan = NULL;
load_dll_msvcrt();
if (!_vptr_tan) {
_vptr_tan = (void *) _elf_GetProcAddress(_dll_msvcrt, "tan");
}
asm("leave\njmp *%0" : : "r"(_vptr_tan));
}

void _elf_tanh() asm("tanh");
void _elf_tanh() {
static void *_vptr_tanh = NULL;
load_dll_msvcrt();
if (!_vptr_tanh) {
_vptr_tanh = (void *) _elf_GetProcAddress(_dll_msvcrt, "tanh");
}
asm("leave\njmp *%0" : : "r"(_vptr_tanh));
}

void _elf_time() asm("time");
void _elf_time() {
static void *_vptr_time = NULL;
load_dll_msvcrt();
if (!_vptr_time) {
_vptr_time = (void *) _elf_GetProcAddress(_dll_msvcrt, "time");
}
asm("leave\njmp *%0" : : "r"(_vptr_time));
}

void _elf_tmpfile() asm("tmpfile");
void _elf_tmpfile() {
static void *_vptr_tmpfile = NULL;
load_dll_msvcrt();
if (!_vptr_tmpfile) {
_vptr_tmpfile = (void *) _elf_GetProcAddress(_dll_msvcrt, "tmpfile");
}
asm("leave\njmp *%0" : : "r"(_vptr_tmpfile));
}

void _elf_tmpnam() asm("tmpnam");
void _elf_tmpnam() {
static void *_vptr_tmpnam = NULL;
load_dll_msvcrt();
if (!_vptr_tmpnam) {
_vptr_tmpnam = (void *) _elf_GetProcAddress(_dll_msvcrt, "tmpnam");
}
asm("leave\njmp *%0" : : "r"(_vptr_tmpnam));
}

void _elf_tolower() asm("tolower");
void _elf_tolower() {
static void *_vptr_tolower = NULL;
load_dll_msvcrt();
if (!_vptr_tolower) {
_vptr_tolower = (void *) _elf_GetProcAddress(_dll_msvcrt, "tolower");
}
asm("leave\njmp *%0" : : "r"(_vptr_tolower));
}

void _elf_toupper() asm("toupper");
void _elf_toupper() {
static void *_vptr_toupper = NULL;
load_dll_msvcrt();
if (!_vptr_toupper) {
_vptr_toupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "toupper");
}
asm("leave\njmp *%0" : : "r"(_vptr_toupper));
}

void _elf_towlower() asm("towlower");
void _elf_towlower() {
static void *_vptr_towlower = NULL;
load_dll_msvcrt();
if (!_vptr_towlower) {
_vptr_towlower = (void *) _elf_GetProcAddress(_dll_msvcrt, "towlower");
}
asm("leave\njmp *%0" : : "r"(_vptr_towlower));
}

void _elf_towupper() asm("towupper");
void _elf_towupper() {
static void *_vptr_towupper = NULL;
load_dll_msvcrt();
if (!_vptr_towupper) {
_vptr_towupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "towupper");
}
asm("leave\njmp *%0" : : "r"(_vptr_towupper));
}

void _elf_ungetc() asm("ungetc");
void _elf_ungetc() {
static void *_vptr_ungetc = NULL;
load_dll_msvcrt();
if (!_vptr_ungetc) {
_vptr_ungetc = (void *) _elf_GetProcAddress(_dll_msvcrt, "ungetc");
}
asm("leave\njmp *%0" : : "r"(_vptr_ungetc));
}

void _elf_ungetwc() asm("ungetwc");
void _elf_ungetwc() {
static void *_vptr_ungetwc = NULL;
load_dll_msvcrt();
if (!_vptr_ungetwc) {
_vptr_ungetwc = (void *) _elf_GetProcAddress(_dll_msvcrt, "ungetwc");
}
asm("leave\njmp *%0" : : "r"(_vptr_ungetwc));
}

void _elf_vfprintf() asm("vfprintf");
void _elf_vfprintf() {
static void *_vptr_vfprintf = NULL;
load_dll_msvcrt();
if (!_vptr_vfprintf) {
_vptr_vfprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "vfprintf");
}
asm("leave\njmp *%0" : : "r"(_vptr_vfprintf));
}

void _elf_vfwprintf() asm("vfwprintf");
void _elf_vfwprintf() {
static void *_vptr_vfwprintf = NULL;
load_dll_msvcrt();
if (!_vptr_vfwprintf) {
_vptr_vfwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "vfwprintf");
}
asm("leave\njmp *%0" : : "r"(_vptr_vfwprintf));
}

void _elf_vprintf() asm("vprintf");
void _elf_vprintf() {
static void *_vptr_vprintf = NULL;
load_dll_msvcrt();
if (!_vptr_vprintf) {
_vptr_vprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "vprintf");
}
asm("leave\njmp *%0" : : "r"(_vptr_vprintf));
}

void _elf_vsprintf() asm("vsprintf");
void _elf_vsprintf() {
static void *_vptr_vsprintf = NULL;
load_dll_msvcrt();
if (!_vptr_vsprintf) {
_vptr_vsprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "vsprintf");
}
asm("leave\njmp *%0" : : "r"(_vptr_vsprintf));
}

void _elf_vswprintf() asm("vswprintf");
void _elf_vswprintf() {
static void *_vptr_vswprintf = NULL;
load_dll_msvcrt();
if (!_vptr_vswprintf) {
_vptr_vswprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "vswprintf");
}
asm("leave\njmp *%0" : : "r"(_vptr_vswprintf));
}

void _elf_vwprintf() asm("vwprintf");
void _elf_vwprintf() {
static void *_vptr_vwprintf = NULL;
load_dll_msvcrt();
if (!_vptr_vwprintf) {
_vptr_vwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "vwprintf");
}
asm("leave\njmp *%0" : : "r"(_vptr_vwprintf));
}

void _elf_wcscat() asm("wcscat");
void _elf_wcscat() {
static void *_vptr_wcscat = NULL;
load_dll_msvcrt();
if (!_vptr_wcscat) {
_vptr_wcscat = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcscat");
}
asm("leave\njmp *%0" : : "r"(_vptr_wcscat));
}

void _elf_wcschr() asm("wcschr");
void _elf_wcschr() {
static void *_vptr_wcschr = NULL;
load_dll_msvcrt();
if (!_vptr_wcschr) {
_vptr_wcschr = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcschr");
}
asm("leave\njmp *%0" : : "r"(_vptr_wcschr));
}

void _elf_wcscmp() asm("wcscmp");
void _elf_wcscmp() {
static void *_vptr_wcscmp = NULL;
load_dll_msvcrt();
if (!_vptr_wcscmp) {
_vptr_wcscmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcscmp");
}
asm("leave\njmp *%0" : : "r"(_vptr_wcscmp));
}

void _elf_wcscoll() asm("wcscoll");
void _elf_wcscoll() {
static void *_vptr_wcscoll = NULL;
load_dll_msvcrt();
if (!_vptr_wcscoll) {
_vptr_wcscoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcscoll");
}
asm("leave\njmp *%0" : : "r"(_vptr_wcscoll));
}

void _elf_wcscpy() asm("wcscpy");
void _elf_wcscpy() {
static void *_vptr_wcscpy = NULL;
load_dll_msvcrt();
if (!_vptr_wcscpy) {
_vptr_wcscpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcscpy");
}
asm("leave\njmp *%0" : : "r"(_vptr_wcscpy));
}

void _elf_wcscspn() asm("wcscspn");
void _elf_wcscspn() {
static void *_vptr_wcscspn = NULL;
load_dll_msvcrt();
if (!_vptr_wcscspn) {
_vptr_wcscspn = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcscspn");
}
asm("leave\njmp *%0" : : "r"(_vptr_wcscspn));
}

void _elf_wcsftime() asm("wcsftime");
void _elf_wcsftime() {
static void *_vptr_wcsftime = NULL;
load_dll_msvcrt();
if (!_vptr_wcsftime) {
_vptr_wcsftime = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsftime");
}
asm("leave\njmp *%0" : : "r"(_vptr_wcsftime));
}

void _elf_wcslen() asm("wcslen");
void _elf_wcslen() {
static void *_vptr_wcslen = NULL;
load_dll_msvcrt();
if (!_vptr_wcslen) {
_vptr_wcslen = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcslen");
}
asm("leave\njmp *%0" : : "r"(_vptr_wcslen));
}

void _elf_wcsncat() asm("wcsncat");
void _elf_wcsncat() {
static void *_vptr_wcsncat = NULL;
load_dll_msvcrt();
if (!_vptr_wcsncat) {
_vptr_wcsncat = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsncat");
}
asm("leave\njmp *%0" : : "r"(_vptr_wcsncat));
}

void _elf_wcsncmp() asm("wcsncmp");
void _elf_wcsncmp() {
static void *_vptr_wcsncmp = NULL;
load_dll_msvcrt();
if (!_vptr_wcsncmp) {
_vptr_wcsncmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsncmp");
}
asm("leave\njmp *%0" : : "r"(_vptr_wcsncmp));
}

void _elf_wcsncpy() asm("wcsncpy");
void _elf_wcsncpy() {
static void *_vptr_wcsncpy = NULL;
load_dll_msvcrt();
if (!_vptr_wcsncpy) {
_vptr_wcsncpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsncpy");
}
asm("leave\njmp *%0" : : "r"(_vptr_wcsncpy));
}

void _elf_wcspbrk() asm("wcspbrk");
void _elf_wcspbrk() {
static void *_vptr_wcspbrk = NULL;
load_dll_msvcrt();
if (!_vptr_wcspbrk) {
_vptr_wcspbrk = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcspbrk");
}
asm("leave\njmp *%0" : : "r"(_vptr_wcspbrk));
}

void _elf_wcsrchr() asm("wcsrchr");
void _elf_wcsrchr() {
static void *_vptr_wcsrchr = NULL;
load_dll_msvcrt();
if (!_vptr_wcsrchr) {
_vptr_wcsrchr = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsrchr");
}
asm("leave\njmp *%0" : : "r"(_vptr_wcsrchr));
}

void _elf_wcsspn() asm("wcsspn");
void _elf_wcsspn() {
static void *_vptr_wcsspn = NULL;
load_dll_msvcrt();
if (!_vptr_wcsspn) {
_vptr_wcsspn = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsspn");
}
asm("leave\njmp *%0" : : "r"(_vptr_wcsspn));
}

void _elf_wcsstr() asm("wcsstr");
void _elf_wcsstr() {
static void *_vptr_wcsstr = NULL;
load_dll_msvcrt();
if (!_vptr_wcsstr) {
_vptr_wcsstr = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsstr");
}
asm("leave\njmp *%0" : : "r"(_vptr_wcsstr));
}

void _elf_wcstod() asm("wcstod");
void _elf_wcstod() {
static void *_vptr_wcstod = NULL;
load_dll_msvcrt();
if (!_vptr_wcstod) {
_vptr_wcstod = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcstod");
}
asm("leave\njmp *%0" : : "r"(_vptr_wcstod));
}

void _elf_wcstok() asm("wcstok");
void _elf_wcstok() {
static void *_vptr_wcstok = NULL;
load_dll_msvcrt();
if (!_vptr_wcstok) {
_vptr_wcstok = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcstok");
}
asm("leave\njmp *%0" : : "r"(_vptr_wcstok));
}

void _elf_wcstol() asm("wcstol");
void _elf_wcstol() {
static void *_vptr_wcstol = NULL;
load_dll_msvcrt();
if (!_vptr_wcstol) {
_vptr_wcstol = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcstol");
}
asm("leave\njmp *%0" : : "r"(_vptr_wcstol));
}

void _elf_wcstombs() asm("wcstombs");
void _elf_wcstombs() {
static void *_vptr_wcstombs = NULL;
load_dll_msvcrt();
if (!_vptr_wcstombs) {
_vptr_wcstombs = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcstombs");
}
asm("leave\njmp *%0" : : "r"(_vptr_wcstombs));
}

void _elf_wcstoul() asm("wcstoul");
void _elf_wcstoul() {
static void *_vptr_wcstoul = NULL;
load_dll_msvcrt();
if (!_vptr_wcstoul) {
_vptr_wcstoul = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcstoul");
}
asm("leave\njmp *%0" : : "r"(_vptr_wcstoul));
}

void _elf_wcsxfrm() asm("wcsxfrm");
void _elf_wcsxfrm() {
static void *_vptr_wcsxfrm = NULL;
load_dll_msvcrt();
if (!_vptr_wcsxfrm) {
_vptr_wcsxfrm = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsxfrm");
}
asm("leave\njmp *%0" : : "r"(_vptr_wcsxfrm));
}

void _elf_wctomb() asm("wctomb");
void _elf_wctomb() {
static void *_vptr_wctomb = NULL;
load_dll_msvcrt();
if (!_vptr_wctomb) {
_vptr_wctomb = (void *) _elf_GetProcAddress(_dll_msvcrt, "wctomb");
}
asm("leave\njmp *%0" : : "r"(_vptr_wctomb));
}

void _elf_wprintf() asm("wprintf");
void _elf_wprintf() {
static void *_vptr_wprintf = NULL;
load_dll_msvcrt();
if (!_vptr_wprintf) {
_vptr_wprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "wprintf");
}
asm("leave\njmp *%0" : : "r"(_vptr_wprintf));
}

void _elf_wscanf() asm("wscanf");
void _elf_wscanf() {
static void *_vptr_wscanf = NULL;
load_dll_msvcrt();
if (!_vptr_wscanf) {
_vptr_wscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "wscanf");
}
asm("leave\njmp *%0" : : "r"(_vptr_wscanf));
}

