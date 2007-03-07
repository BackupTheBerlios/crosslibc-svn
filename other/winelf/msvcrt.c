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

void _elf_$I10_OUTPUT() asm("$I10_OUTPUT");
void *_imp__$I10_OUTPUT = NULL;
void _elf_$I10_OUTPUT() {
load_dll_msvcrt();
if (!_imp__$I10_OUTPUT) {
_imp__$I10_OUTPUT = (void *) _elf_GetProcAddress(_dll_msvcrt, "$I10_OUTPUT");
}
asm("leave\njmp *%0" : : "r"(_imp__$I10_OUTPUT));
}

void _elf__CIacos() asm("CIacos");
void *_imp___CIacos = NULL;
void _elf__CIacos() {
load_dll_msvcrt();
if (!_imp___CIacos) {
_imp___CIacos = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIacos");
}
asm("leave\njmp *%0" : : "r"(_imp___CIacos));
}

void _elf__CIasin() asm("CIasin");
void *_imp___CIasin = NULL;
void _elf__CIasin() {
load_dll_msvcrt();
if (!_imp___CIasin) {
_imp___CIasin = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIasin");
}
asm("leave\njmp *%0" : : "r"(_imp___CIasin));
}

void _elf__CIatan() asm("CIatan");
void *_imp___CIatan = NULL;
void _elf__CIatan() {
load_dll_msvcrt();
if (!_imp___CIatan) {
_imp___CIatan = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIatan");
}
asm("leave\njmp *%0" : : "r"(_imp___CIatan));
}

void _elf__CIatan2() asm("CIatan2");
void *_imp___CIatan2 = NULL;
void _elf__CIatan2() {
load_dll_msvcrt();
if (!_imp___CIatan2) {
_imp___CIatan2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIatan2");
}
asm("leave\njmp *%0" : : "r"(_imp___CIatan2));
}

void _elf__CIcos() asm("CIcos");
void *_imp___CIcos = NULL;
void _elf__CIcos() {
load_dll_msvcrt();
if (!_imp___CIcos) {
_imp___CIcos = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIcos");
}
asm("leave\njmp *%0" : : "r"(_imp___CIcos));
}

void _elf__CIcosh() asm("CIcosh");
void *_imp___CIcosh = NULL;
void _elf__CIcosh() {
load_dll_msvcrt();
if (!_imp___CIcosh) {
_imp___CIcosh = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIcosh");
}
asm("leave\njmp *%0" : : "r"(_imp___CIcosh));
}

void _elf__CIexp() asm("CIexp");
void *_imp___CIexp = NULL;
void _elf__CIexp() {
load_dll_msvcrt();
if (!_imp___CIexp) {
_imp___CIexp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIexp");
}
asm("leave\njmp *%0" : : "r"(_imp___CIexp));
}

void _elf__CIfmod() asm("CIfmod");
void *_imp___CIfmod = NULL;
void _elf__CIfmod() {
load_dll_msvcrt();
if (!_imp___CIfmod) {
_imp___CIfmod = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIfmod");
}
asm("leave\njmp *%0" : : "r"(_imp___CIfmod));
}

void _elf__CIlog() asm("CIlog");
void *_imp___CIlog = NULL;
void _elf__CIlog() {
load_dll_msvcrt();
if (!_imp___CIlog) {
_imp___CIlog = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIlog");
}
asm("leave\njmp *%0" : : "r"(_imp___CIlog));
}

void _elf__CIlog10() asm("CIlog10");
void *_imp___CIlog10 = NULL;
void _elf__CIlog10() {
load_dll_msvcrt();
if (!_imp___CIlog10) {
_imp___CIlog10 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIlog10");
}
asm("leave\njmp *%0" : : "r"(_imp___CIlog10));
}

void _elf__CIpow() asm("CIpow");
void *_imp___CIpow = NULL;
void _elf__CIpow() {
load_dll_msvcrt();
if (!_imp___CIpow) {
_imp___CIpow = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIpow");
}
asm("leave\njmp *%0" : : "r"(_imp___CIpow));
}

void _elf__CIsin() asm("CIsin");
void *_imp___CIsin = NULL;
void _elf__CIsin() {
load_dll_msvcrt();
if (!_imp___CIsin) {
_imp___CIsin = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIsin");
}
asm("leave\njmp *%0" : : "r"(_imp___CIsin));
}

void _elf__CIsinh() asm("CIsinh");
void *_imp___CIsinh = NULL;
void _elf__CIsinh() {
load_dll_msvcrt();
if (!_imp___CIsinh) {
_imp___CIsinh = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIsinh");
}
asm("leave\njmp *%0" : : "r"(_imp___CIsinh));
}

void _elf__CIsqrt() asm("CIsqrt");
void *_imp___CIsqrt = NULL;
void _elf__CIsqrt() {
load_dll_msvcrt();
if (!_imp___CIsqrt) {
_imp___CIsqrt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIsqrt");
}
asm("leave\njmp *%0" : : "r"(_imp___CIsqrt));
}

void _elf__CItan() asm("CItan");
void *_imp___CItan = NULL;
void _elf__CItan() {
load_dll_msvcrt();
if (!_imp___CItan) {
_imp___CItan = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CItan");
}
asm("leave\njmp *%0" : : "r"(_imp___CItan));
}

void _elf__CItanh() asm("CItanh");
void *_imp___CItanh = NULL;
void _elf__CItanh() {
load_dll_msvcrt();
if (!_imp___CItanh) {
_imp___CItanh = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CItanh");
}
asm("leave\njmp *%0" : : "r"(_imp___CItanh));
}

void _elf__CxxThrowException() asm("CxxThrowException");
void *_imp___CxxThrowException = NULL;
void _elf__CxxThrowException() {
load_dll_msvcrt();
if (!_imp___CxxThrowException) {
_imp___CxxThrowException = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CxxThrowException");
}
asm("leave\njmp *%0" : : "r"(_imp___CxxThrowException));
}

void _elf__EH_prolog() asm("EH_prolog");
void *_imp___EH_prolog = NULL;
void _elf__EH_prolog() {
load_dll_msvcrt();
if (!_imp___EH_prolog) {
_imp___EH_prolog = (void *) _elf_GetProcAddress(_dll_msvcrt, "_EH_prolog");
}
asm("leave\njmp *%0" : : "r"(_imp___EH_prolog));
}

void _elf__Getdays() asm("Getdays");
void *_imp___Getdays = NULL;
void _elf__Getdays() {
load_dll_msvcrt();
if (!_imp___Getdays) {
_imp___Getdays = (void *) _elf_GetProcAddress(_dll_msvcrt, "_Getdays");
}
asm("leave\njmp *%0" : : "r"(_imp___Getdays));
}

void _elf__Getmonths() asm("Getmonths");
void *_imp___Getmonths = NULL;
void _elf__Getmonths() {
load_dll_msvcrt();
if (!_imp___Getmonths) {
_imp___Getmonths = (void *) _elf_GetProcAddress(_dll_msvcrt, "_Getmonths");
}
asm("leave\njmp *%0" : : "r"(_imp___Getmonths));
}

void _elf__Gettnames() asm("Gettnames");
void *_imp___Gettnames = NULL;
void _elf__Gettnames() {
load_dll_msvcrt();
if (!_imp___Gettnames) {
_imp___Gettnames = (void *) _elf_GetProcAddress(_dll_msvcrt, "_Gettnames");
}
asm("leave\njmp *%0" : : "r"(_imp___Gettnames));
}

void _elf__HUGE() asm("HUGE");
void *_imp___HUGE = NULL;
void _elf__HUGE() {
load_dll_msvcrt();
if (!_imp___HUGE) {
_imp___HUGE = (void *) _elf_GetProcAddress(_dll_msvcrt, "_HUGE");
}
asm("leave\njmp *%0" : : "r"(_imp___HUGE));
}

void _elf__Strftime() asm("Strftime");
void *_imp___Strftime = NULL;
void _elf__Strftime() {
load_dll_msvcrt();
if (!_imp___Strftime) {
_imp___Strftime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_Strftime");
}
asm("leave\njmp *%0" : : "r"(_imp___Strftime));
}

void _elf__XcptFilter() asm("XcptFilter");
void *_imp___XcptFilter = NULL;
void _elf__XcptFilter() {
load_dll_msvcrt();
if (!_imp___XcptFilter) {
_imp___XcptFilter = (void *) _elf_GetProcAddress(_dll_msvcrt, "_XcptFilter");
}
asm("leave\njmp *%0" : : "r"(_imp___XcptFilter));
}

void _elf___CxxCallUnwindDtor() asm("_CxxCallUnwindDtor");
void *_imp____CxxCallUnwindDtor = NULL;
void _elf___CxxCallUnwindDtor() {
load_dll_msvcrt();
if (!_imp____CxxCallUnwindDtor) {
_imp____CxxCallUnwindDtor = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxCallUnwindDtor");
}
asm("leave\njmp *%0" : : "r"(_imp____CxxCallUnwindDtor));
}

void _elf___CxxDetectRethrow() asm("_CxxDetectRethrow");
void *_imp____CxxDetectRethrow = NULL;
void _elf___CxxDetectRethrow() {
load_dll_msvcrt();
if (!_imp____CxxDetectRethrow) {
_imp____CxxDetectRethrow = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxDetectRethrow");
}
asm("leave\njmp *%0" : : "r"(_imp____CxxDetectRethrow));
}

void _elf___CxxExceptionFilter() asm("_CxxExceptionFilter");
void *_imp____CxxExceptionFilter = NULL;
void _elf___CxxExceptionFilter() {
load_dll_msvcrt();
if (!_imp____CxxExceptionFilter) {
_imp____CxxExceptionFilter = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxExceptionFilter");
}
asm("leave\njmp *%0" : : "r"(_imp____CxxExceptionFilter));
}

void _elf___CxxFrameHandler() asm("_CxxFrameHandler");
void *_imp____CxxFrameHandler = NULL;
void _elf___CxxFrameHandler() {
load_dll_msvcrt();
if (!_imp____CxxFrameHandler) {
_imp____CxxFrameHandler = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxFrameHandler");
}
asm("leave\njmp *%0" : : "r"(_imp____CxxFrameHandler));
}

void _elf___CxxLongjmpUnwind() asm("_CxxLongjmpUnwind");
void *_imp____CxxLongjmpUnwind = NULL;
void _elf___CxxLongjmpUnwind() {
load_dll_msvcrt();
if (!_imp____CxxLongjmpUnwind) {
_imp____CxxLongjmpUnwind = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxLongjmpUnwind");
}
asm("leave\njmp *%0" : : "r"(_imp____CxxLongjmpUnwind));
}

void _elf___CxxQueryExceptionSize() asm("_CxxQueryExceptionSize");
void *_imp____CxxQueryExceptionSize = NULL;
void _elf___CxxQueryExceptionSize() {
load_dll_msvcrt();
if (!_imp____CxxQueryExceptionSize) {
_imp____CxxQueryExceptionSize = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxQueryExceptionSize");
}
asm("leave\njmp *%0" : : "r"(_imp____CxxQueryExceptionSize));
}

void _elf___CxxRegisterExceptionObject() asm("_CxxRegisterExceptionObject");
void *_imp____CxxRegisterExceptionObject = NULL;
void _elf___CxxRegisterExceptionObject() {
load_dll_msvcrt();
if (!_imp____CxxRegisterExceptionObject) {
_imp____CxxRegisterExceptionObject = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxRegisterExceptionObject");
}
asm("leave\njmp *%0" : : "r"(_imp____CxxRegisterExceptionObject));
}

void _elf___CxxUnregisterExceptionObject() asm("_CxxUnregisterExceptionObject");
void *_imp____CxxUnregisterExceptionObject = NULL;
void _elf___CxxUnregisterExceptionObject() {
load_dll_msvcrt();
if (!_imp____CxxUnregisterExceptionObject) {
_imp____CxxUnregisterExceptionObject = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxUnregisterExceptionObject");
}
asm("leave\njmp *%0" : : "r"(_imp____CxxUnregisterExceptionObject));
}

void _elf___DestructExceptionObject() asm("_DestructExceptionObject");
void *_imp____DestructExceptionObject = NULL;
void _elf___DestructExceptionObject() {
load_dll_msvcrt();
if (!_imp____DestructExceptionObject) {
_imp____DestructExceptionObject = (void *) _elf_GetProcAddress(_dll_msvcrt, "__DestructExceptionObject");
}
asm("leave\njmp *%0" : : "r"(_imp____DestructExceptionObject));
}

void _elf___RTCastToVoid() asm("_RTCastToVoid");
void *_imp____RTCastToVoid = NULL;
void _elf___RTCastToVoid() {
load_dll_msvcrt();
if (!_imp____RTCastToVoid) {
_imp____RTCastToVoid = (void *) _elf_GetProcAddress(_dll_msvcrt, "__RTCastToVoid");
}
asm("leave\njmp *%0" : : "r"(_imp____RTCastToVoid));
}

void _elf___RTDynamicCast() asm("_RTDynamicCast");
void *_imp____RTDynamicCast = NULL;
void _elf___RTDynamicCast() {
load_dll_msvcrt();
if (!_imp____RTDynamicCast) {
_imp____RTDynamicCast = (void *) _elf_GetProcAddress(_dll_msvcrt, "__RTDynamicCast");
}
asm("leave\njmp *%0" : : "r"(_imp____RTDynamicCast));
}

void _elf___RTtypeid() asm("_RTtypeid");
void *_imp____RTtypeid = NULL;
void _elf___RTtypeid() {
load_dll_msvcrt();
if (!_imp____RTtypeid) {
_imp____RTtypeid = (void *) _elf_GetProcAddress(_dll_msvcrt, "__RTtypeid");
}
asm("leave\njmp *%0" : : "r"(_imp____RTtypeid));
}

void _elf___STRINGTOLD() asm("_STRINGTOLD");
void *_imp____STRINGTOLD = NULL;
void _elf___STRINGTOLD() {
load_dll_msvcrt();
if (!_imp____STRINGTOLD) {
_imp____STRINGTOLD = (void *) _elf_GetProcAddress(_dll_msvcrt, "__STRINGTOLD");
}
asm("leave\njmp *%0" : : "r"(_imp____STRINGTOLD));
}

void _elf____lc_codepage_func() asm("__lc_codepage_func");
void *_imp_____lc_codepage_func = NULL;
void _elf____lc_codepage_func() {
load_dll_msvcrt();
if (!_imp_____lc_codepage_func) {
_imp_____lc_codepage_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "___lc_codepage_func");
}
asm("leave\njmp *%0" : : "r"(_imp_____lc_codepage_func));
}

void _elf____lc_handle_func() asm("__lc_handle_func");
void *_imp_____lc_handle_func = NULL;
void _elf____lc_handle_func() {
load_dll_msvcrt();
if (!_imp_____lc_handle_func) {
_imp_____lc_handle_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "___lc_handle_func");
}
asm("leave\njmp *%0" : : "r"(_imp_____lc_handle_func));
}

void _elf____mb_cur_max_func() asm("__mb_cur_max_func");
void *_imp_____mb_cur_max_func = NULL;
void _elf____mb_cur_max_func() {
load_dll_msvcrt();
if (!_imp_____mb_cur_max_func) {
_imp_____mb_cur_max_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "___mb_cur_max_func");
}
asm("leave\njmp *%0" : : "r"(_imp_____mb_cur_max_func));
}

void _elf____setlc_active_func() asm("__setlc_active_func");
void *_imp_____setlc_active_func = NULL;
void _elf____setlc_active_func() {
load_dll_msvcrt();
if (!_imp_____setlc_active_func) {
_imp_____setlc_active_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "___setlc_active_func");
}
asm("leave\njmp *%0" : : "r"(_imp_____setlc_active_func));
}

void _elf____unguarded_readlc_active_add_func() asm("__unguarded_readlc_active_add_func");
void *_imp_____unguarded_readlc_active_add_func = NULL;
void _elf____unguarded_readlc_active_add_func() {
load_dll_msvcrt();
if (!_imp_____unguarded_readlc_active_add_func) {
_imp_____unguarded_readlc_active_add_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "___unguarded_readlc_active_add_func");
}
asm("leave\njmp *%0" : : "r"(_imp_____unguarded_readlc_active_add_func));
}

void _elf___argc() asm("_argc");
void *_imp____argc = NULL;
void _elf___argc() {
load_dll_msvcrt();
if (!_imp____argc) {
_imp____argc = (void *) _elf_GetProcAddress(_dll_msvcrt, "__argc");
}
asm("leave\njmp *%0" : : "r"(_imp____argc));
}

void _elf___argv() asm("_argv");
void *_imp____argv = NULL;
void _elf___argv() {
load_dll_msvcrt();
if (!_imp____argv) {
_imp____argv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__argv");
}
asm("leave\njmp *%0" : : "r"(_imp____argv));
}

void _elf___badioinfo() asm("_badioinfo");
void *_imp____badioinfo = NULL;
void _elf___badioinfo() {
load_dll_msvcrt();
if (!_imp____badioinfo) {
_imp____badioinfo = (void *) _elf_GetProcAddress(_dll_msvcrt, "__badioinfo");
}
asm("leave\njmp *%0" : : "r"(_imp____badioinfo));
}

void _elf___crtCompareStringA() asm("_crtCompareStringA");
void *_imp____crtCompareStringA = NULL;
void _elf___crtCompareStringA() {
load_dll_msvcrt();
if (!_imp____crtCompareStringA) {
_imp____crtCompareStringA = (void *) _elf_GetProcAddress(_dll_msvcrt, "__crtCompareStringA");
}
asm("leave\njmp *%0" : : "r"(_imp____crtCompareStringA));
}

void _elf___crtCompareStringW() asm("_crtCompareStringW");
void *_imp____crtCompareStringW = NULL;
void _elf___crtCompareStringW() {
load_dll_msvcrt();
if (!_imp____crtCompareStringW) {
_imp____crtCompareStringW = (void *) _elf_GetProcAddress(_dll_msvcrt, "__crtCompareStringW");
}
asm("leave\njmp *%0" : : "r"(_imp____crtCompareStringW));
}

void _elf___crtGetLocaleInfoW() asm("_crtGetLocaleInfoW");
void *_imp____crtGetLocaleInfoW = NULL;
void _elf___crtGetLocaleInfoW() {
load_dll_msvcrt();
if (!_imp____crtGetLocaleInfoW) {
_imp____crtGetLocaleInfoW = (void *) _elf_GetProcAddress(_dll_msvcrt, "__crtGetLocaleInfoW");
}
asm("leave\njmp *%0" : : "r"(_imp____crtGetLocaleInfoW));
}

void _elf___crtGetStringTypeW() asm("_crtGetStringTypeW");
void *_imp____crtGetStringTypeW = NULL;
void _elf___crtGetStringTypeW() {
load_dll_msvcrt();
if (!_imp____crtGetStringTypeW) {
_imp____crtGetStringTypeW = (void *) _elf_GetProcAddress(_dll_msvcrt, "__crtGetStringTypeW");
}
asm("leave\njmp *%0" : : "r"(_imp____crtGetStringTypeW));
}

void _elf___crtLCMapStringA() asm("_crtLCMapStringA");
void *_imp____crtLCMapStringA = NULL;
void _elf___crtLCMapStringA() {
load_dll_msvcrt();
if (!_imp____crtLCMapStringA) {
_imp____crtLCMapStringA = (void *) _elf_GetProcAddress(_dll_msvcrt, "__crtLCMapStringA");
}
asm("leave\njmp *%0" : : "r"(_imp____crtLCMapStringA));
}

void _elf___crtLCMapStringW() asm("_crtLCMapStringW");
void *_imp____crtLCMapStringW = NULL;
void _elf___crtLCMapStringW() {
load_dll_msvcrt();
if (!_imp____crtLCMapStringW) {
_imp____crtLCMapStringW = (void *) _elf_GetProcAddress(_dll_msvcrt, "__crtLCMapStringW");
}
asm("leave\njmp *%0" : : "r"(_imp____crtLCMapStringW));
}

void _elf___dllonexit() asm("_dllonexit");
void *_imp____dllonexit = NULL;
void _elf___dllonexit() {
load_dll_msvcrt();
if (!_imp____dllonexit) {
_imp____dllonexit = (void *) _elf_GetProcAddress(_dll_msvcrt, "__dllonexit");
}
asm("leave\njmp *%0" : : "r"(_imp____dllonexit));
}

void _elf___doserrno() asm("_doserrno");
void *_imp____doserrno = NULL;
void _elf___doserrno() {
load_dll_msvcrt();
if (!_imp____doserrno) {
_imp____doserrno = (void *) _elf_GetProcAddress(_dll_msvcrt, "__doserrno");
}
asm("leave\njmp *%0" : : "r"(_imp____doserrno));
}

void _elf___fpecode() asm("_fpecode");
void *_imp____fpecode = NULL;
void _elf___fpecode() {
load_dll_msvcrt();
if (!_imp____fpecode) {
_imp____fpecode = (void *) _elf_GetProcAddress(_dll_msvcrt, "__fpecode");
}
asm("leave\njmp *%0" : : "r"(_imp____fpecode));
}

void _elf___getmainargs() asm("_getmainargs");
void *_imp____getmainargs = NULL;
void _elf___getmainargs() {
load_dll_msvcrt();
if (!_imp____getmainargs) {
_imp____getmainargs = (void *) _elf_GetProcAddress(_dll_msvcrt, "__getmainargs");
}
asm("leave\njmp *%0" : : "r"(_imp____getmainargs));
}

void _elf___initenv() asm("_initenv");
void *_imp____initenv = NULL;
void _elf___initenv() {
load_dll_msvcrt();
if (!_imp____initenv) {
_imp____initenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__initenv");
}
asm("leave\njmp *%0" : : "r"(_imp____initenv));
}

void _elf___iob_func() asm("_iob_func");
void *_imp____iob_func = NULL;
void _elf___iob_func() {
load_dll_msvcrt();
if (!_imp____iob_func) {
_imp____iob_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "__iob_func");
}
asm("leave\njmp *%0" : : "r"(_imp____iob_func));
}

void _elf___isascii() asm("_isascii");
void *_imp____isascii = NULL;
void _elf___isascii() {
load_dll_msvcrt();
if (!_imp____isascii) {
_imp____isascii = (void *) _elf_GetProcAddress(_dll_msvcrt, "__isascii");
}
asm("leave\njmp *%0" : : "r"(_imp____isascii));
}

void _elf___iscsym() asm("_iscsym");
void *_imp____iscsym = NULL;
void _elf___iscsym() {
load_dll_msvcrt();
if (!_imp____iscsym) {
_imp____iscsym = (void *) _elf_GetProcAddress(_dll_msvcrt, "__iscsym");
}
asm("leave\njmp *%0" : : "r"(_imp____iscsym));
}

void _elf___iscsymf() asm("_iscsymf");
void *_imp____iscsymf = NULL;
void _elf___iscsymf() {
load_dll_msvcrt();
if (!_imp____iscsymf) {
_imp____iscsymf = (void *) _elf_GetProcAddress(_dll_msvcrt, "__iscsymf");
}
asm("leave\njmp *%0" : : "r"(_imp____iscsymf));
}

void _elf___lc_codepage() asm("_lc_codepage");
void *_imp____lc_codepage = NULL;
void _elf___lc_codepage() {
load_dll_msvcrt();
if (!_imp____lc_codepage) {
_imp____lc_codepage = (void *) _elf_GetProcAddress(_dll_msvcrt, "__lc_codepage");
}
asm("leave\njmp *%0" : : "r"(_imp____lc_codepage));
}

void _elf___lc_collate_cp() asm("_lc_collate_cp");
void *_imp____lc_collate_cp = NULL;
void _elf___lc_collate_cp() {
load_dll_msvcrt();
if (!_imp____lc_collate_cp) {
_imp____lc_collate_cp = (void *) _elf_GetProcAddress(_dll_msvcrt, "__lc_collate_cp");
}
asm("leave\njmp *%0" : : "r"(_imp____lc_collate_cp));
}

void _elf___lc_handle() asm("_lc_handle");
void *_imp____lc_handle = NULL;
void _elf___lc_handle() {
load_dll_msvcrt();
if (!_imp____lc_handle) {
_imp____lc_handle = (void *) _elf_GetProcAddress(_dll_msvcrt, "__lc_handle");
}
asm("leave\njmp *%0" : : "r"(_imp____lc_handle));
}

void _elf___lconv_init() asm("_lconv_init");
void *_imp____lconv_init = NULL;
void _elf___lconv_init() {
load_dll_msvcrt();
if (!_imp____lconv_init) {
_imp____lconv_init = (void *) _elf_GetProcAddress(_dll_msvcrt, "__lconv_init");
}
asm("leave\njmp *%0" : : "r"(_imp____lconv_init));
}

void _elf___mb_cur_max() asm("_mb_cur_max");
void *_imp____mb_cur_max = NULL;
void _elf___mb_cur_max() {
load_dll_msvcrt();
if (!_imp____mb_cur_max) {
_imp____mb_cur_max = (void *) _elf_GetProcAddress(_dll_msvcrt, "__mb_cur_max");
}
asm("leave\njmp *%0" : : "r"(_imp____mb_cur_max));
}

void _elf___p___argc() asm("_p___argc");
void *_imp____p___argc = NULL;
void _elf___p___argc() {
load_dll_msvcrt();
if (!_imp____p___argc) {
_imp____p___argc = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p___argc");
}
asm("leave\njmp *%0" : : "r"(_imp____p___argc));
}

void _elf___p___argv() asm("_p___argv");
void *_imp____p___argv = NULL;
void _elf___p___argv() {
load_dll_msvcrt();
if (!_imp____p___argv) {
_imp____p___argv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p___argv");
}
asm("leave\njmp *%0" : : "r"(_imp____p___argv));
}

void _elf___p___initenv() asm("_p___initenv");
void *_imp____p___initenv = NULL;
void _elf___p___initenv() {
load_dll_msvcrt();
if (!_imp____p___initenv) {
_imp____p___initenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p___initenv");
}
asm("leave\njmp *%0" : : "r"(_imp____p___initenv));
}

void _elf___p___mb_cur_max() asm("_p___mb_cur_max");
void *_imp____p___mb_cur_max = NULL;
void _elf___p___mb_cur_max() {
load_dll_msvcrt();
if (!_imp____p___mb_cur_max) {
_imp____p___mb_cur_max = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p___mb_cur_max");
}
asm("leave\njmp *%0" : : "r"(_imp____p___mb_cur_max));
}

void _elf___p___wargv() asm("_p___wargv");
void *_imp____p___wargv = NULL;
void _elf___p___wargv() {
load_dll_msvcrt();
if (!_imp____p___wargv) {
_imp____p___wargv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p___wargv");
}
asm("leave\njmp *%0" : : "r"(_imp____p___wargv));
}

void _elf___p___winitenv() asm("_p___winitenv");
void *_imp____p___winitenv = NULL;
void _elf___p___winitenv() {
load_dll_msvcrt();
if (!_imp____p___winitenv) {
_imp____p___winitenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p___winitenv");
}
asm("leave\njmp *%0" : : "r"(_imp____p___winitenv));
}

void _elf___p__acmdln() asm("_p__acmdln");
void *_imp____p__acmdln = NULL;
void _elf___p__acmdln() {
load_dll_msvcrt();
if (!_imp____p__acmdln) {
_imp____p__acmdln = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__acmdln");
}
asm("leave\njmp *%0" : : "r"(_imp____p__acmdln));
}

void _elf___p__amblksiz() asm("_p__amblksiz");
void *_imp____p__amblksiz = NULL;
void _elf___p__amblksiz() {
load_dll_msvcrt();
if (!_imp____p__amblksiz) {
_imp____p__amblksiz = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__amblksiz");
}
asm("leave\njmp *%0" : : "r"(_imp____p__amblksiz));
}

void _elf___p__commode() asm("_p__commode");
void *_imp____p__commode = NULL;
void _elf___p__commode() {
load_dll_msvcrt();
if (!_imp____p__commode) {
_imp____p__commode = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__commode");
}
asm("leave\njmp *%0" : : "r"(_imp____p__commode));
}

void _elf___p__daylight() asm("_p__daylight");
void *_imp____p__daylight = NULL;
void _elf___p__daylight() {
load_dll_msvcrt();
if (!_imp____p__daylight) {
_imp____p__daylight = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__daylight");
}
asm("leave\njmp *%0" : : "r"(_imp____p__daylight));
}

void _elf___p__dstbias() asm("_p__dstbias");
void *_imp____p__dstbias = NULL;
void _elf___p__dstbias() {
load_dll_msvcrt();
if (!_imp____p__dstbias) {
_imp____p__dstbias = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__dstbias");
}
asm("leave\njmp *%0" : : "r"(_imp____p__dstbias));
}

void _elf___p__environ() asm("_p__environ");
void *_imp____p__environ = NULL;
void _elf___p__environ() {
load_dll_msvcrt();
if (!_imp____p__environ) {
_imp____p__environ = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__environ");
}
asm("leave\njmp *%0" : : "r"(_imp____p__environ));
}

void _elf___p__fileinfo() asm("_p__fileinfo");
void *_imp____p__fileinfo = NULL;
void _elf___p__fileinfo() {
load_dll_msvcrt();
if (!_imp____p__fileinfo) {
_imp____p__fileinfo = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__fileinfo");
}
asm("leave\njmp *%0" : : "r"(_imp____p__fileinfo));
}

void _elf___p__fmode() asm("_p__fmode");
void *_imp____p__fmode = NULL;
void _elf___p__fmode() {
load_dll_msvcrt();
if (!_imp____p__fmode) {
_imp____p__fmode = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__fmode");
}
asm("leave\njmp *%0" : : "r"(_imp____p__fmode));
}

void _elf___p__iob() asm("_p__iob");
void *_imp____p__iob = NULL;
void _elf___p__iob() {
load_dll_msvcrt();
if (!_imp____p__iob) {
_imp____p__iob = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__iob");
}
asm("leave\njmp *%0" : : "r"(_imp____p__iob));
}

void _elf___p__mbcasemap() asm("_p__mbcasemap");
void *_imp____p__mbcasemap = NULL;
void _elf___p__mbcasemap() {
load_dll_msvcrt();
if (!_imp____p__mbcasemap) {
_imp____p__mbcasemap = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__mbcasemap");
}
asm("leave\njmp *%0" : : "r"(_imp____p__mbcasemap));
}

void _elf___p__mbctype() asm("_p__mbctype");
void *_imp____p__mbctype = NULL;
void _elf___p__mbctype() {
load_dll_msvcrt();
if (!_imp____p__mbctype) {
_imp____p__mbctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__mbctype");
}
asm("leave\njmp *%0" : : "r"(_imp____p__mbctype));
}

void _elf___p__osver() asm("_p__osver");
void *_imp____p__osver = NULL;
void _elf___p__osver() {
load_dll_msvcrt();
if (!_imp____p__osver) {
_imp____p__osver = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__osver");
}
asm("leave\njmp *%0" : : "r"(_imp____p__osver));
}

void _elf___p__pctype() asm("_p__pctype");
void *_imp____p__pctype = NULL;
void _elf___p__pctype() {
load_dll_msvcrt();
if (!_imp____p__pctype) {
_imp____p__pctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__pctype");
}
asm("leave\njmp *%0" : : "r"(_imp____p__pctype));
}

void _elf___p__pgmptr() asm("_p__pgmptr");
void *_imp____p__pgmptr = NULL;
void _elf___p__pgmptr() {
load_dll_msvcrt();
if (!_imp____p__pgmptr) {
_imp____p__pgmptr = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__pgmptr");
}
asm("leave\njmp *%0" : : "r"(_imp____p__pgmptr));
}

void _elf___p__pwctype() asm("_p__pwctype");
void *_imp____p__pwctype = NULL;
void _elf___p__pwctype() {
load_dll_msvcrt();
if (!_imp____p__pwctype) {
_imp____p__pwctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__pwctype");
}
asm("leave\njmp *%0" : : "r"(_imp____p__pwctype));
}

void _elf___p__timezone() asm("_p__timezone");
void *_imp____p__timezone = NULL;
void _elf___p__timezone() {
load_dll_msvcrt();
if (!_imp____p__timezone) {
_imp____p__timezone = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__timezone");
}
asm("leave\njmp *%0" : : "r"(_imp____p__timezone));
}

void _elf___p__tzname() asm("_p__tzname");
void *_imp____p__tzname = NULL;
void _elf___p__tzname() {
load_dll_msvcrt();
if (!_imp____p__tzname) {
_imp____p__tzname = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__tzname");
}
asm("leave\njmp *%0" : : "r"(_imp____p__tzname));
}

void _elf___p__wcmdln() asm("_p__wcmdln");
void *_imp____p__wcmdln = NULL;
void _elf___p__wcmdln() {
load_dll_msvcrt();
if (!_imp____p__wcmdln) {
_imp____p__wcmdln = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__wcmdln");
}
asm("leave\njmp *%0" : : "r"(_imp____p__wcmdln));
}

void _elf___p__wenviron() asm("_p__wenviron");
void *_imp____p__wenviron = NULL;
void _elf___p__wenviron() {
load_dll_msvcrt();
if (!_imp____p__wenviron) {
_imp____p__wenviron = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__wenviron");
}
asm("leave\njmp *%0" : : "r"(_imp____p__wenviron));
}

void _elf___p__winmajor() asm("_p__winmajor");
void *_imp____p__winmajor = NULL;
void _elf___p__winmajor() {
load_dll_msvcrt();
if (!_imp____p__winmajor) {
_imp____p__winmajor = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__winmajor");
}
asm("leave\njmp *%0" : : "r"(_imp____p__winmajor));
}

void _elf___p__winminor() asm("_p__winminor");
void *_imp____p__winminor = NULL;
void _elf___p__winminor() {
load_dll_msvcrt();
if (!_imp____p__winminor) {
_imp____p__winminor = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__winminor");
}
asm("leave\njmp *%0" : : "r"(_imp____p__winminor));
}

void _elf___p__winver() asm("_p__winver");
void *_imp____p__winver = NULL;
void _elf___p__winver() {
load_dll_msvcrt();
if (!_imp____p__winver) {
_imp____p__winver = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__winver");
}
asm("leave\njmp *%0" : : "r"(_imp____p__winver));
}

void _elf___p__wpgmptr() asm("_p__wpgmptr");
void *_imp____p__wpgmptr = NULL;
void _elf___p__wpgmptr() {
load_dll_msvcrt();
if (!_imp____p__wpgmptr) {
_imp____p__wpgmptr = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__wpgmptr");
}
asm("leave\njmp *%0" : : "r"(_imp____p__wpgmptr));
}

void _elf___pctype_func() asm("_pctype_func");
void *_imp____pctype_func = NULL;
void _elf___pctype_func() {
load_dll_msvcrt();
if (!_imp____pctype_func) {
_imp____pctype_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "__pctype_func");
}
asm("leave\njmp *%0" : : "r"(_imp____pctype_func));
}

void _elf___pioinfo() asm("_pioinfo");
void *_imp____pioinfo = NULL;
void _elf___pioinfo() {
load_dll_msvcrt();
if (!_imp____pioinfo) {
_imp____pioinfo = (void *) _elf_GetProcAddress(_dll_msvcrt, "__pioinfo");
}
asm("leave\njmp *%0" : : "r"(_imp____pioinfo));
}

void _elf___pxcptinfoptrs() asm("_pxcptinfoptrs");
void *_imp____pxcptinfoptrs = NULL;
void _elf___pxcptinfoptrs() {
load_dll_msvcrt();
if (!_imp____pxcptinfoptrs) {
_imp____pxcptinfoptrs = (void *) _elf_GetProcAddress(_dll_msvcrt, "__pxcptinfoptrs");
}
asm("leave\njmp *%0" : : "r"(_imp____pxcptinfoptrs));
}

void _elf___set_app_type() asm("_set_app_type");
void *_imp____set_app_type = NULL;
void _elf___set_app_type() {
load_dll_msvcrt();
if (!_imp____set_app_type) {
_imp____set_app_type = (void *) _elf_GetProcAddress(_dll_msvcrt, "__set_app_type");
}
asm("leave\njmp *%0" : : "r"(_imp____set_app_type));
}

void _elf___setlc_active() asm("_setlc_active");
void *_imp____setlc_active = NULL;
void _elf___setlc_active() {
load_dll_msvcrt();
if (!_imp____setlc_active) {
_imp____setlc_active = (void *) _elf_GetProcAddress(_dll_msvcrt, "__setlc_active");
}
asm("leave\njmp *%0" : : "r"(_imp____setlc_active));
}

void _elf___setusermatherr() asm("_setusermatherr");
void *_imp____setusermatherr = NULL;
void _elf___setusermatherr() {
load_dll_msvcrt();
if (!_imp____setusermatherr) {
_imp____setusermatherr = (void *) _elf_GetProcAddress(_dll_msvcrt, "__setusermatherr");
}
asm("leave\njmp *%0" : : "r"(_imp____setusermatherr));
}

void _elf___threadhandle() asm("_threadhandle");
void *_imp____threadhandle = NULL;
void _elf___threadhandle() {
load_dll_msvcrt();
if (!_imp____threadhandle) {
_imp____threadhandle = (void *) _elf_GetProcAddress(_dll_msvcrt, "__threadhandle");
}
asm("leave\njmp *%0" : : "r"(_imp____threadhandle));
}

void _elf___threadid() asm("_threadid");
void *_imp____threadid = NULL;
void _elf___threadid() {
load_dll_msvcrt();
if (!_imp____threadid) {
_imp____threadid = (void *) _elf_GetProcAddress(_dll_msvcrt, "__threadid");
}
asm("leave\njmp *%0" : : "r"(_imp____threadid));
}

void _elf___toascii() asm("_toascii");
void *_imp____toascii = NULL;
void _elf___toascii() {
load_dll_msvcrt();
if (!_imp____toascii) {
_imp____toascii = (void *) _elf_GetProcAddress(_dll_msvcrt, "__toascii");
}
asm("leave\njmp *%0" : : "r"(_imp____toascii));
}

void _elf___unDName() asm("_unDName");
void *_imp____unDName = NULL;
void _elf___unDName() {
load_dll_msvcrt();
if (!_imp____unDName) {
_imp____unDName = (void *) _elf_GetProcAddress(_dll_msvcrt, "__unDName");
}
asm("leave\njmp *%0" : : "r"(_imp____unDName));
}

void _elf___unDNameEx() asm("_unDNameEx");
void *_imp____unDNameEx = NULL;
void _elf___unDNameEx() {
load_dll_msvcrt();
if (!_imp____unDNameEx) {
_imp____unDNameEx = (void *) _elf_GetProcAddress(_dll_msvcrt, "__unDNameEx");
}
asm("leave\njmp *%0" : : "r"(_imp____unDNameEx));
}

void _elf___uncaught_exception() asm("_uncaught_exception");
void *_imp____uncaught_exception = NULL;
void _elf___uncaught_exception() {
load_dll_msvcrt();
if (!_imp____uncaught_exception) {
_imp____uncaught_exception = (void *) _elf_GetProcAddress(_dll_msvcrt, "__uncaught_exception");
}
asm("leave\njmp *%0" : : "r"(_imp____uncaught_exception));
}

void _elf___unguarded_readlc_active() asm("_unguarded_readlc_active");
void *_imp____unguarded_readlc_active = NULL;
void _elf___unguarded_readlc_active() {
load_dll_msvcrt();
if (!_imp____unguarded_readlc_active) {
_imp____unguarded_readlc_active = (void *) _elf_GetProcAddress(_dll_msvcrt, "__unguarded_readlc_active");
}
asm("leave\njmp *%0" : : "r"(_imp____unguarded_readlc_active));
}

void _elf___wargv() asm("_wargv");
void *_imp____wargv = NULL;
void _elf___wargv() {
load_dll_msvcrt();
if (!_imp____wargv) {
_imp____wargv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__wargv");
}
asm("leave\njmp *%0" : : "r"(_imp____wargv));
}

void _elf___wcserror() asm("_wcserror");
void *_imp____wcserror = NULL;
void _elf___wcserror() {
load_dll_msvcrt();
if (!_imp____wcserror) {
_imp____wcserror = (void *) _elf_GetProcAddress(_dll_msvcrt, "__wcserror");
}
asm("leave\njmp *%0" : : "r"(_imp____wcserror));
}

void _elf___wgetmainargs() asm("_wgetmainargs");
void *_imp____wgetmainargs = NULL;
void _elf___wgetmainargs() {
load_dll_msvcrt();
if (!_imp____wgetmainargs) {
_imp____wgetmainargs = (void *) _elf_GetProcAddress(_dll_msvcrt, "__wgetmainargs");
}
asm("leave\njmp *%0" : : "r"(_imp____wgetmainargs));
}

void _elf___winitenv() asm("_winitenv");
void *_imp____winitenv = NULL;
void _elf___winitenv() {
load_dll_msvcrt();
if (!_imp____winitenv) {
_imp____winitenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__winitenv");
}
asm("leave\njmp *%0" : : "r"(_imp____winitenv));
}

void _elf__abnormal_termination() asm("abnormal_termination");
void *_imp___abnormal_termination = NULL;
void _elf__abnormal_termination() {
load_dll_msvcrt();
if (!_imp___abnormal_termination) {
_imp___abnormal_termination = (void *) _elf_GetProcAddress(_dll_msvcrt, "_abnormal_termination");
}
asm("leave\njmp *%0" : : "r"(_imp___abnormal_termination));
}

void _elf__access() asm("access");
void *_imp___access = NULL;
void _elf__access() {
load_dll_msvcrt();
if (!_imp___access) {
_imp___access = (void *) _elf_GetProcAddress(_dll_msvcrt, "_access");
}
asm("leave\njmp *%0" : : "r"(_imp___access));
}

void _elf__acmdln() asm("acmdln");
void *_imp___acmdln = NULL;
void _elf__acmdln() {
load_dll_msvcrt();
if (!_imp___acmdln) {
_imp___acmdln = (void *) _elf_GetProcAddress(_dll_msvcrt, "_acmdln");
}
asm("leave\njmp *%0" : : "r"(_imp___acmdln));
}

void _elf__adj_fdiv_m16i() asm("adj_fdiv_m16i");
void *_imp___adj_fdiv_m16i = NULL;
void _elf__adj_fdiv_m16i() {
load_dll_msvcrt();
if (!_imp___adj_fdiv_m16i) {
_imp___adj_fdiv_m16i = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdiv_m16i");
}
asm("leave\njmp *%0" : : "r"(_imp___adj_fdiv_m16i));
}

void _elf__adj_fdiv_m32() asm("adj_fdiv_m32");
void *_imp___adj_fdiv_m32 = NULL;
void _elf__adj_fdiv_m32() {
load_dll_msvcrt();
if (!_imp___adj_fdiv_m32) {
_imp___adj_fdiv_m32 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdiv_m32");
}
asm("leave\njmp *%0" : : "r"(_imp___adj_fdiv_m32));
}

void _elf__adj_fdiv_m32i() asm("adj_fdiv_m32i");
void *_imp___adj_fdiv_m32i = NULL;
void _elf__adj_fdiv_m32i() {
load_dll_msvcrt();
if (!_imp___adj_fdiv_m32i) {
_imp___adj_fdiv_m32i = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdiv_m32i");
}
asm("leave\njmp *%0" : : "r"(_imp___adj_fdiv_m32i));
}

void _elf__adj_fdiv_m64() asm("adj_fdiv_m64");
void *_imp___adj_fdiv_m64 = NULL;
void _elf__adj_fdiv_m64() {
load_dll_msvcrt();
if (!_imp___adj_fdiv_m64) {
_imp___adj_fdiv_m64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdiv_m64");
}
asm("leave\njmp *%0" : : "r"(_imp___adj_fdiv_m64));
}

void _elf__adj_fdiv_r() asm("adj_fdiv_r");
void *_imp___adj_fdiv_r = NULL;
void _elf__adj_fdiv_r() {
load_dll_msvcrt();
if (!_imp___adj_fdiv_r) {
_imp___adj_fdiv_r = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdiv_r");
}
asm("leave\njmp *%0" : : "r"(_imp___adj_fdiv_r));
}

void _elf__adj_fdivr_m16i() asm("adj_fdivr_m16i");
void *_imp___adj_fdivr_m16i = NULL;
void _elf__adj_fdivr_m16i() {
load_dll_msvcrt();
if (!_imp___adj_fdivr_m16i) {
_imp___adj_fdivr_m16i = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdivr_m16i");
}
asm("leave\njmp *%0" : : "r"(_imp___adj_fdivr_m16i));
}

void _elf__adj_fdivr_m32() asm("adj_fdivr_m32");
void *_imp___adj_fdivr_m32 = NULL;
void _elf__adj_fdivr_m32() {
load_dll_msvcrt();
if (!_imp___adj_fdivr_m32) {
_imp___adj_fdivr_m32 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdivr_m32");
}
asm("leave\njmp *%0" : : "r"(_imp___adj_fdivr_m32));
}

void _elf__adj_fdivr_m32i() asm("adj_fdivr_m32i");
void *_imp___adj_fdivr_m32i = NULL;
void _elf__adj_fdivr_m32i() {
load_dll_msvcrt();
if (!_imp___adj_fdivr_m32i) {
_imp___adj_fdivr_m32i = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdivr_m32i");
}
asm("leave\njmp *%0" : : "r"(_imp___adj_fdivr_m32i));
}

void _elf__adj_fdivr_m64() asm("adj_fdivr_m64");
void *_imp___adj_fdivr_m64 = NULL;
void _elf__adj_fdivr_m64() {
load_dll_msvcrt();
if (!_imp___adj_fdivr_m64) {
_imp___adj_fdivr_m64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdivr_m64");
}
asm("leave\njmp *%0" : : "r"(_imp___adj_fdivr_m64));
}

void _elf__adj_fpatan() asm("adj_fpatan");
void *_imp___adj_fpatan = NULL;
void _elf__adj_fpatan() {
load_dll_msvcrt();
if (!_imp___adj_fpatan) {
_imp___adj_fpatan = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fpatan");
}
asm("leave\njmp *%0" : : "r"(_imp___adj_fpatan));
}

void _elf__adj_fprem() asm("adj_fprem");
void *_imp___adj_fprem = NULL;
void _elf__adj_fprem() {
load_dll_msvcrt();
if (!_imp___adj_fprem) {
_imp___adj_fprem = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fprem");
}
asm("leave\njmp *%0" : : "r"(_imp___adj_fprem));
}

void _elf__adj_fprem1() asm("adj_fprem1");
void *_imp___adj_fprem1 = NULL;
void _elf__adj_fprem1() {
load_dll_msvcrt();
if (!_imp___adj_fprem1) {
_imp___adj_fprem1 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fprem1");
}
asm("leave\njmp *%0" : : "r"(_imp___adj_fprem1));
}

void _elf__adj_fptan() asm("adj_fptan");
void *_imp___adj_fptan = NULL;
void _elf__adj_fptan() {
load_dll_msvcrt();
if (!_imp___adj_fptan) {
_imp___adj_fptan = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fptan");
}
asm("leave\njmp *%0" : : "r"(_imp___adj_fptan));
}

void _elf__adjust_fdiv() asm("adjust_fdiv");
void *_imp___adjust_fdiv = NULL;
void _elf__adjust_fdiv() {
load_dll_msvcrt();
if (!_imp___adjust_fdiv) {
_imp___adjust_fdiv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adjust_fdiv");
}
asm("leave\njmp *%0" : : "r"(_imp___adjust_fdiv));
}

void _elf__aexit_rtn() asm("aexit_rtn");
void *_imp___aexit_rtn = NULL;
void _elf__aexit_rtn() {
load_dll_msvcrt();
if (!_imp___aexit_rtn) {
_imp___aexit_rtn = (void *) _elf_GetProcAddress(_dll_msvcrt, "_aexit_rtn");
}
asm("leave\njmp *%0" : : "r"(_imp___aexit_rtn));
}

void _elf__aligned_free() asm("aligned_free");
void *_imp___aligned_free = NULL;
void _elf__aligned_free() {
load_dll_msvcrt();
if (!_imp___aligned_free) {
_imp___aligned_free = (void *) _elf_GetProcAddress(_dll_msvcrt, "_aligned_free");
}
asm("leave\njmp *%0" : : "r"(_imp___aligned_free));
}

void _elf__aligned_malloc() asm("aligned_malloc");
void *_imp___aligned_malloc = NULL;
void _elf__aligned_malloc() {
load_dll_msvcrt();
if (!_imp___aligned_malloc) {
_imp___aligned_malloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_aligned_malloc");
}
asm("leave\njmp *%0" : : "r"(_imp___aligned_malloc));
}

void _elf__aligned_offset_malloc() asm("aligned_offset_malloc");
void *_imp___aligned_offset_malloc = NULL;
void _elf__aligned_offset_malloc() {
load_dll_msvcrt();
if (!_imp___aligned_offset_malloc) {
_imp___aligned_offset_malloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_aligned_offset_malloc");
}
asm("leave\njmp *%0" : : "r"(_imp___aligned_offset_malloc));
}

void _elf__aligned_offset_realloc() asm("aligned_offset_realloc");
void *_imp___aligned_offset_realloc = NULL;
void _elf__aligned_offset_realloc() {
load_dll_msvcrt();
if (!_imp___aligned_offset_realloc) {
_imp___aligned_offset_realloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_aligned_offset_realloc");
}
asm("leave\njmp *%0" : : "r"(_imp___aligned_offset_realloc));
}

void _elf__aligned_realloc() asm("aligned_realloc");
void *_imp___aligned_realloc = NULL;
void _elf__aligned_realloc() {
load_dll_msvcrt();
if (!_imp___aligned_realloc) {
_imp___aligned_realloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_aligned_realloc");
}
asm("leave\njmp *%0" : : "r"(_imp___aligned_realloc));
}

void _elf__amsg_exit() asm("amsg_exit");
void *_imp___amsg_exit = NULL;
void _elf__amsg_exit() {
load_dll_msvcrt();
if (!_imp___amsg_exit) {
_imp___amsg_exit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_amsg_exit");
}
asm("leave\njmp *%0" : : "r"(_imp___amsg_exit));
}

void _elf__assert() asm("assert");
void *_imp___assert = NULL;
void _elf__assert() {
load_dll_msvcrt();
if (!_imp___assert) {
_imp___assert = (void *) _elf_GetProcAddress(_dll_msvcrt, "_assert");
}
asm("leave\njmp *%0" : : "r"(_imp___assert));
}

void _elf__atodbl() asm("atodbl");
void *_imp___atodbl = NULL;
void _elf__atodbl() {
load_dll_msvcrt();
if (!_imp___atodbl) {
_imp___atodbl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_atodbl");
}
asm("leave\njmp *%0" : : "r"(_imp___atodbl));
}

void _elf__atoi64() asm("atoi64");
void *_imp___atoi64 = NULL;
void _elf__atoi64() {
load_dll_msvcrt();
if (!_imp___atoi64) {
_imp___atoi64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_atoi64");
}
asm("leave\njmp *%0" : : "r"(_imp___atoi64));
}

void _elf__atoldbl() asm("atoldbl");
void *_imp___atoldbl = NULL;
void _elf__atoldbl() {
load_dll_msvcrt();
if (!_imp___atoldbl) {
_imp___atoldbl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_atoldbl");
}
asm("leave\njmp *%0" : : "r"(_imp___atoldbl));
}

void _elf__beep() asm("beep");
void *_imp___beep = NULL;
void _elf__beep() {
load_dll_msvcrt();
if (!_imp___beep) {
_imp___beep = (void *) _elf_GetProcAddress(_dll_msvcrt, "_beep");
}
asm("leave\njmp *%0" : : "r"(_imp___beep));
}

void _elf__beginthread() asm("beginthread");
void *_imp___beginthread = NULL;
void _elf__beginthread() {
load_dll_msvcrt();
if (!_imp___beginthread) {
_imp___beginthread = (void *) _elf_GetProcAddress(_dll_msvcrt, "_beginthread");
}
asm("leave\njmp *%0" : : "r"(_imp___beginthread));
}

void _elf__beginthreadex() asm("beginthreadex");
void *_imp___beginthreadex = NULL;
void _elf__beginthreadex() {
load_dll_msvcrt();
if (!_imp___beginthreadex) {
_imp___beginthreadex = (void *) _elf_GetProcAddress(_dll_msvcrt, "_beginthreadex");
}
asm("leave\njmp *%0" : : "r"(_imp___beginthreadex));
}

void _elf__c_exit() asm("c_exit");
void *_imp___c_exit = NULL;
void _elf__c_exit() {
load_dll_msvcrt();
if (!_imp___c_exit) {
_imp___c_exit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_c_exit");
}
asm("leave\njmp *%0" : : "r"(_imp___c_exit));
}

void _elf__cabs() asm("cabs");
void *_imp___cabs = NULL;
void _elf__cabs() {
load_dll_msvcrt();
if (!_imp___cabs) {
_imp___cabs = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cabs");
}
asm("leave\njmp *%0" : : "r"(_imp___cabs));
}

void _elf__callnewh() asm("callnewh");
void *_imp___callnewh = NULL;
void _elf__callnewh() {
load_dll_msvcrt();
if (!_imp___callnewh) {
_imp___callnewh = (void *) _elf_GetProcAddress(_dll_msvcrt, "_callnewh");
}
asm("leave\njmp *%0" : : "r"(_imp___callnewh));
}

void _elf__cexit() asm("cexit");
void *_imp___cexit = NULL;
void _elf__cexit() {
load_dll_msvcrt();
if (!_imp___cexit) {
_imp___cexit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cexit");
}
asm("leave\njmp *%0" : : "r"(_imp___cexit));
}

void _elf__cgets() asm("cgets");
void *_imp___cgets = NULL;
void _elf__cgets() {
load_dll_msvcrt();
if (!_imp___cgets) {
_imp___cgets = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cgets");
}
asm("leave\njmp *%0" : : "r"(_imp___cgets));
}

void _elf__cgetws() asm("cgetws");
void *_imp___cgetws = NULL;
void _elf__cgetws() {
load_dll_msvcrt();
if (!_imp___cgetws) {
_imp___cgetws = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cgetws");
}
asm("leave\njmp *%0" : : "r"(_imp___cgetws));
}

void _elf__chdir() asm("chdir");
void *_imp___chdir = NULL;
void _elf__chdir() {
load_dll_msvcrt();
if (!_imp___chdir) {
_imp___chdir = (void *) _elf_GetProcAddress(_dll_msvcrt, "_chdir");
}
asm("leave\njmp *%0" : : "r"(_imp___chdir));
}

void _elf__chdrive() asm("chdrive");
void *_imp___chdrive = NULL;
void _elf__chdrive() {
load_dll_msvcrt();
if (!_imp___chdrive) {
_imp___chdrive = (void *) _elf_GetProcAddress(_dll_msvcrt, "_chdrive");
}
asm("leave\njmp *%0" : : "r"(_imp___chdrive));
}

void _elf__chgsign() asm("chgsign");
void *_imp___chgsign = NULL;
void _elf__chgsign() {
load_dll_msvcrt();
if (!_imp___chgsign) {
_imp___chgsign = (void *) _elf_GetProcAddress(_dll_msvcrt, "_chgsign");
}
asm("leave\njmp *%0" : : "r"(_imp___chgsign));
}

void _elf__chkesp() asm("chkesp");
void *_imp___chkesp = NULL;
void _elf__chkesp() {
load_dll_msvcrt();
if (!_imp___chkesp) {
_imp___chkesp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_chkesp");
}
asm("leave\njmp *%0" : : "r"(_imp___chkesp));
}

void _elf__chmod() asm("chmod");
void *_imp___chmod = NULL;
void _elf__chmod() {
load_dll_msvcrt();
if (!_imp___chmod) {
_imp___chmod = (void *) _elf_GetProcAddress(_dll_msvcrt, "_chmod");
}
asm("leave\njmp *%0" : : "r"(_imp___chmod));
}

void _elf__chsize() asm("chsize");
void *_imp___chsize = NULL;
void _elf__chsize() {
load_dll_msvcrt();
if (!_imp___chsize) {
_imp___chsize = (void *) _elf_GetProcAddress(_dll_msvcrt, "_chsize");
}
asm("leave\njmp *%0" : : "r"(_imp___chsize));
}

void _elf__clearfp() asm("clearfp");
void *_imp___clearfp = NULL;
void _elf__clearfp() {
load_dll_msvcrt();
if (!_imp___clearfp) {
_imp___clearfp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_clearfp");
}
asm("leave\njmp *%0" : : "r"(_imp___clearfp));
}

void _elf__close() asm("close");
void *_imp___close = NULL;
void _elf__close() {
load_dll_msvcrt();
if (!_imp___close) {
_imp___close = (void *) _elf_GetProcAddress(_dll_msvcrt, "_close");
}
asm("leave\njmp *%0" : : "r"(_imp___close));
}

void _elf__commit() asm("commit");
void *_imp___commit = NULL;
void _elf__commit() {
load_dll_msvcrt();
if (!_imp___commit) {
_imp___commit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_commit");
}
asm("leave\njmp *%0" : : "r"(_imp___commit));
}

void _elf__commode() asm("commode");
void *_imp___commode = NULL;
void _elf__commode() {
load_dll_msvcrt();
if (!_imp___commode) {
_imp___commode = (void *) _elf_GetProcAddress(_dll_msvcrt, "_commode");
}
asm("leave\njmp *%0" : : "r"(_imp___commode));
}

void _elf__control87() asm("control87");
void *_imp___control87 = NULL;
void _elf__control87() {
load_dll_msvcrt();
if (!_imp___control87) {
_imp___control87 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_control87");
}
asm("leave\njmp *%0" : : "r"(_imp___control87));
}

void _elf__controlfp() asm("controlfp");
void *_imp___controlfp = NULL;
void _elf__controlfp() {
load_dll_msvcrt();
if (!_imp___controlfp) {
_imp___controlfp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_controlfp");
}
asm("leave\njmp *%0" : : "r"(_imp___controlfp));
}

void _elf__copysign() asm("copysign");
void *_imp___copysign = NULL;
void _elf__copysign() {
load_dll_msvcrt();
if (!_imp___copysign) {
_imp___copysign = (void *) _elf_GetProcAddress(_dll_msvcrt, "_copysign");
}
asm("leave\njmp *%0" : : "r"(_imp___copysign));
}

void _elf__cprintf() asm("cprintf");
void *_imp___cprintf = NULL;
void _elf__cprintf() {
load_dll_msvcrt();
if (!_imp___cprintf) {
_imp___cprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cprintf");
}
asm("leave\njmp *%0" : : "r"(_imp___cprintf));
}

void _elf__cputs() asm("cputs");
void *_imp___cputs = NULL;
void _elf__cputs() {
load_dll_msvcrt();
if (!_imp___cputs) {
_imp___cputs = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cputs");
}
asm("leave\njmp *%0" : : "r"(_imp___cputs));
}

void _elf__cputws() asm("cputws");
void *_imp___cputws = NULL;
void _elf__cputws() {
load_dll_msvcrt();
if (!_imp___cputws) {
_imp___cputws = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cputws");
}
asm("leave\njmp *%0" : : "r"(_imp___cputws));
}

void _elf__creat() asm("creat");
void *_imp___creat = NULL;
void _elf__creat() {
load_dll_msvcrt();
if (!_imp___creat) {
_imp___creat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_creat");
}
asm("leave\njmp *%0" : : "r"(_imp___creat));
}

void _elf__cscanf() asm("cscanf");
void *_imp___cscanf = NULL;
void _elf__cscanf() {
load_dll_msvcrt();
if (!_imp___cscanf) {
_imp___cscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cscanf");
}
asm("leave\njmp *%0" : : "r"(_imp___cscanf));
}

void _elf__ctime64() asm("ctime64");
void *_imp___ctime64 = NULL;
void _elf__ctime64() {
load_dll_msvcrt();
if (!_imp___ctime64) {
_imp___ctime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ctime64");
}
asm("leave\njmp *%0" : : "r"(_imp___ctime64));
}

void _elf__ctype() asm("ctype");
void *_imp___ctype = NULL;
void _elf__ctype() {
load_dll_msvcrt();
if (!_imp___ctype) {
_imp___ctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ctype");
}
asm("leave\njmp *%0" : : "r"(_imp___ctype));
}

void _elf__cwait() asm("cwait");
void *_imp___cwait = NULL;
void _elf__cwait() {
load_dll_msvcrt();
if (!_imp___cwait) {
_imp___cwait = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cwait");
}
asm("leave\njmp *%0" : : "r"(_imp___cwait));
}

void _elf__cwprintf() asm("cwprintf");
void *_imp___cwprintf = NULL;
void _elf__cwprintf() {
load_dll_msvcrt();
if (!_imp___cwprintf) {
_imp___cwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cwprintf");
}
asm("leave\njmp *%0" : : "r"(_imp___cwprintf));
}

void _elf__cwscanf() asm("cwscanf");
void *_imp___cwscanf = NULL;
void _elf__cwscanf() {
load_dll_msvcrt();
if (!_imp___cwscanf) {
_imp___cwscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cwscanf");
}
asm("leave\njmp *%0" : : "r"(_imp___cwscanf));
}

void _elf__daylight() asm("daylight");
void *_imp___daylight = NULL;
void _elf__daylight() {
load_dll_msvcrt();
if (!_imp___daylight) {
_imp___daylight = (void *) _elf_GetProcAddress(_dll_msvcrt, "_daylight");
}
asm("leave\njmp *%0" : : "r"(_imp___daylight));
}

void _elf__dstbias() asm("dstbias");
void *_imp___dstbias = NULL;
void _elf__dstbias() {
load_dll_msvcrt();
if (!_imp___dstbias) {
_imp___dstbias = (void *) _elf_GetProcAddress(_dll_msvcrt, "_dstbias");
}
asm("leave\njmp *%0" : : "r"(_imp___dstbias));
}

void _elf__dup() asm("dup");
void *_imp___dup = NULL;
void _elf__dup() {
load_dll_msvcrt();
if (!_imp___dup) {
_imp___dup = (void *) _elf_GetProcAddress(_dll_msvcrt, "_dup");
}
asm("leave\njmp *%0" : : "r"(_imp___dup));
}

void _elf__dup2() asm("dup2");
void *_imp___dup2 = NULL;
void _elf__dup2() {
load_dll_msvcrt();
if (!_imp___dup2) {
_imp___dup2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_dup2");
}
asm("leave\njmp *%0" : : "r"(_imp___dup2));
}

void _elf__ecvt() asm("ecvt");
void *_imp___ecvt = NULL;
void _elf__ecvt() {
load_dll_msvcrt();
if (!_imp___ecvt) {
_imp___ecvt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ecvt");
}
asm("leave\njmp *%0" : : "r"(_imp___ecvt));
}

void _elf__endthread() asm("endthread");
void *_imp___endthread = NULL;
void _elf__endthread() {
load_dll_msvcrt();
if (!_imp___endthread) {
_imp___endthread = (void *) _elf_GetProcAddress(_dll_msvcrt, "_endthread");
}
asm("leave\njmp *%0" : : "r"(_imp___endthread));
}

void _elf__endthreadex() asm("endthreadex");
void *_imp___endthreadex = NULL;
void _elf__endthreadex() {
load_dll_msvcrt();
if (!_imp___endthreadex) {
_imp___endthreadex = (void *) _elf_GetProcAddress(_dll_msvcrt, "_endthreadex");
}
asm("leave\njmp *%0" : : "r"(_imp___endthreadex));
}

void _elf__environ() asm("environ");
void *_imp___environ = NULL;
void _elf__environ() {
load_dll_msvcrt();
if (!_imp___environ) {
_imp___environ = (void *) _elf_GetProcAddress(_dll_msvcrt, "_environ");
}
asm("leave\njmp *%0" : : "r"(_imp___environ));
}

void _elf__eof() asm("eof");
void *_imp___eof = NULL;
void _elf__eof() {
load_dll_msvcrt();
if (!_imp___eof) {
_imp___eof = (void *) _elf_GetProcAddress(_dll_msvcrt, "_eof");
}
asm("leave\njmp *%0" : : "r"(_imp___eof));
}

void _elf__errno() asm("errno");
void *_imp___errno = NULL;
void _elf__errno() {
load_dll_msvcrt();
if (!_imp___errno) {
_imp___errno = (void *) _elf_GetProcAddress(_dll_msvcrt, "_errno");
}
asm("leave\njmp *%0" : : "r"(_imp___errno));
}

void _elf__except_handler2() asm("except_handler2");
void *_imp___except_handler2 = NULL;
void _elf__except_handler2() {
load_dll_msvcrt();
if (!_imp___except_handler2) {
_imp___except_handler2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_except_handler2");
}
asm("leave\njmp *%0" : : "r"(_imp___except_handler2));
}

void _elf__except_handler3() asm("except_handler3");
void *_imp___except_handler3 = NULL;
void _elf__except_handler3() {
load_dll_msvcrt();
if (!_imp___except_handler3) {
_imp___except_handler3 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_except_handler3");
}
asm("leave\njmp *%0" : : "r"(_imp___except_handler3));
}

void _elf__execl() asm("execl");
void *_imp___execl = NULL;
void _elf__execl() {
load_dll_msvcrt();
if (!_imp___execl) {
_imp___execl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execl");
}
asm("leave\njmp *%0" : : "r"(_imp___execl));
}

void _elf__execle() asm("execle");
void *_imp___execle = NULL;
void _elf__execle() {
load_dll_msvcrt();
if (!_imp___execle) {
_imp___execle = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execle");
}
asm("leave\njmp *%0" : : "r"(_imp___execle));
}

void _elf__execlp() asm("execlp");
void *_imp___execlp = NULL;
void _elf__execlp() {
load_dll_msvcrt();
if (!_imp___execlp) {
_imp___execlp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execlp");
}
asm("leave\njmp *%0" : : "r"(_imp___execlp));
}

void _elf__execlpe() asm("execlpe");
void *_imp___execlpe = NULL;
void _elf__execlpe() {
load_dll_msvcrt();
if (!_imp___execlpe) {
_imp___execlpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execlpe");
}
asm("leave\njmp *%0" : : "r"(_imp___execlpe));
}

void _elf__execv() asm("execv");
void *_imp___execv = NULL;
void _elf__execv() {
load_dll_msvcrt();
if (!_imp___execv) {
_imp___execv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execv");
}
asm("leave\njmp *%0" : : "r"(_imp___execv));
}

void _elf__execve() asm("execve");
void *_imp___execve = NULL;
void _elf__execve() {
load_dll_msvcrt();
if (!_imp___execve) {
_imp___execve = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execve");
}
asm("leave\njmp *%0" : : "r"(_imp___execve));
}

void _elf__execvp() asm("execvp");
void *_imp___execvp = NULL;
void _elf__execvp() {
load_dll_msvcrt();
if (!_imp___execvp) {
_imp___execvp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execvp");
}
asm("leave\njmp *%0" : : "r"(_imp___execvp));
}

void _elf__execvpe() asm("execvpe");
void *_imp___execvpe = NULL;
void _elf__execvpe() {
load_dll_msvcrt();
if (!_imp___execvpe) {
_imp___execvpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execvpe");
}
asm("leave\njmp *%0" : : "r"(_imp___execvpe));
}

void _elf__expand() asm("expand");
void *_imp___expand = NULL;
void _elf__expand() {
load_dll_msvcrt();
if (!_imp___expand) {
_imp___expand = (void *) _elf_GetProcAddress(_dll_msvcrt, "_expand");
}
asm("leave\njmp *%0" : : "r"(_imp___expand));
}

void _elf__fcloseall() asm("fcloseall");
void *_imp___fcloseall = NULL;
void _elf__fcloseall() {
load_dll_msvcrt();
if (!_imp___fcloseall) {
_imp___fcloseall = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fcloseall");
}
asm("leave\njmp *%0" : : "r"(_imp___fcloseall));
}

void _elf__fcvt() asm("fcvt");
void *_imp___fcvt = NULL;
void _elf__fcvt() {
load_dll_msvcrt();
if (!_imp___fcvt) {
_imp___fcvt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fcvt");
}
asm("leave\njmp *%0" : : "r"(_imp___fcvt));
}

void _elf__fdopen() asm("fdopen");
void *_imp___fdopen = NULL;
void _elf__fdopen() {
load_dll_msvcrt();
if (!_imp___fdopen) {
_imp___fdopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fdopen");
}
asm("leave\njmp *%0" : : "r"(_imp___fdopen));
}

void _elf__fgetchar() asm("fgetchar");
void *_imp___fgetchar = NULL;
void _elf__fgetchar() {
load_dll_msvcrt();
if (!_imp___fgetchar) {
_imp___fgetchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fgetchar");
}
asm("leave\njmp *%0" : : "r"(_imp___fgetchar));
}

void _elf__fgetwchar() asm("fgetwchar");
void *_imp___fgetwchar = NULL;
void _elf__fgetwchar() {
load_dll_msvcrt();
if (!_imp___fgetwchar) {
_imp___fgetwchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fgetwchar");
}
asm("leave\njmp *%0" : : "r"(_imp___fgetwchar));
}

void _elf__filbuf() asm("filbuf");
void *_imp___filbuf = NULL;
void _elf__filbuf() {
load_dll_msvcrt();
if (!_imp___filbuf) {
_imp___filbuf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_filbuf");
}
asm("leave\njmp *%0" : : "r"(_imp___filbuf));
}

void _elf__fileinfo() asm("fileinfo");
void *_imp___fileinfo = NULL;
void _elf__fileinfo() {
load_dll_msvcrt();
if (!_imp___fileinfo) {
_imp___fileinfo = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fileinfo");
}
asm("leave\njmp *%0" : : "r"(_imp___fileinfo));
}

void _elf__filelength() asm("filelength");
void *_imp___filelength = NULL;
void _elf__filelength() {
load_dll_msvcrt();
if (!_imp___filelength) {
_imp___filelength = (void *) _elf_GetProcAddress(_dll_msvcrt, "_filelength");
}
asm("leave\njmp *%0" : : "r"(_imp___filelength));
}

void _elf__filelengthi64() asm("filelengthi64");
void *_imp___filelengthi64 = NULL;
void _elf__filelengthi64() {
load_dll_msvcrt();
if (!_imp___filelengthi64) {
_imp___filelengthi64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_filelengthi64");
}
asm("leave\njmp *%0" : : "r"(_imp___filelengthi64));
}

void _elf__fileno() asm("fileno");
void *_imp___fileno = NULL;
void _elf__fileno() {
load_dll_msvcrt();
if (!_imp___fileno) {
_imp___fileno = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fileno");
}
asm("leave\njmp *%0" : : "r"(_imp___fileno));
}

void _elf__findclose() asm("findclose");
void *_imp___findclose = NULL;
void _elf__findclose() {
load_dll_msvcrt();
if (!_imp___findclose) {
_imp___findclose = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findclose");
}
asm("leave\njmp *%0" : : "r"(_imp___findclose));
}

void _elf__findfirst() asm("findfirst");
void *_imp___findfirst = NULL;
void _elf__findfirst() {
load_dll_msvcrt();
if (!_imp___findfirst) {
_imp___findfirst = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findfirst");
}
asm("leave\njmp *%0" : : "r"(_imp___findfirst));
}

void _elf__findfirst64() asm("findfirst64");
void *_imp___findfirst64 = NULL;
void _elf__findfirst64() {
load_dll_msvcrt();
if (!_imp___findfirst64) {
_imp___findfirst64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findfirst64");
}
asm("leave\njmp *%0" : : "r"(_imp___findfirst64));
}

void _elf__findfirsti64() asm("findfirsti64");
void *_imp___findfirsti64 = NULL;
void _elf__findfirsti64() {
load_dll_msvcrt();
if (!_imp___findfirsti64) {
_imp___findfirsti64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findfirsti64");
}
asm("leave\njmp *%0" : : "r"(_imp___findfirsti64));
}

void _elf__findnext() asm("findnext");
void *_imp___findnext = NULL;
void _elf__findnext() {
load_dll_msvcrt();
if (!_imp___findnext) {
_imp___findnext = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findnext");
}
asm("leave\njmp *%0" : : "r"(_imp___findnext));
}

void _elf__findnext64() asm("findnext64");
void *_imp___findnext64 = NULL;
void _elf__findnext64() {
load_dll_msvcrt();
if (!_imp___findnext64) {
_imp___findnext64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findnext64");
}
asm("leave\njmp *%0" : : "r"(_imp___findnext64));
}

void _elf__findnexti64() asm("findnexti64");
void *_imp___findnexti64 = NULL;
void _elf__findnexti64() {
load_dll_msvcrt();
if (!_imp___findnexti64) {
_imp___findnexti64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findnexti64");
}
asm("leave\njmp *%0" : : "r"(_imp___findnexti64));
}

void _elf__finite() asm("finite");
void *_imp___finite = NULL;
void _elf__finite() {
load_dll_msvcrt();
if (!_imp___finite) {
_imp___finite = (void *) _elf_GetProcAddress(_dll_msvcrt, "_finite");
}
asm("leave\njmp *%0" : : "r"(_imp___finite));
}

void _elf__flsbuf() asm("flsbuf");
void *_imp___flsbuf = NULL;
void _elf__flsbuf() {
load_dll_msvcrt();
if (!_imp___flsbuf) {
_imp___flsbuf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_flsbuf");
}
asm("leave\njmp *%0" : : "r"(_imp___flsbuf));
}

void _elf__flushall() asm("flushall");
void *_imp___flushall = NULL;
void _elf__flushall() {
load_dll_msvcrt();
if (!_imp___flushall) {
_imp___flushall = (void *) _elf_GetProcAddress(_dll_msvcrt, "_flushall");
}
asm("leave\njmp *%0" : : "r"(_imp___flushall));
}

void _elf__fmode() asm("fmode");
void *_imp___fmode = NULL;
void _elf__fmode() {
load_dll_msvcrt();
if (!_imp___fmode) {
_imp___fmode = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fmode");
}
asm("leave\njmp *%0" : : "r"(_imp___fmode));
}

void _elf__fpclass() asm("fpclass");
void *_imp___fpclass = NULL;
void _elf__fpclass() {
load_dll_msvcrt();
if (!_imp___fpclass) {
_imp___fpclass = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fpclass");
}
asm("leave\njmp *%0" : : "r"(_imp___fpclass));
}

void _elf__fpieee_flt() asm("fpieee_flt");
void *_imp___fpieee_flt = NULL;
void _elf__fpieee_flt() {
load_dll_msvcrt();
if (!_imp___fpieee_flt) {
_imp___fpieee_flt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fpieee_flt");
}
asm("leave\njmp *%0" : : "r"(_imp___fpieee_flt));
}

void _elf__fpreset() asm("fpreset");
void *_imp___fpreset = NULL;
void _elf__fpreset() {
load_dll_msvcrt();
if (!_imp___fpreset) {
_imp___fpreset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fpreset");
}
asm("leave\njmp *%0" : : "r"(_imp___fpreset));
}

void _elf__fputchar() asm("fputchar");
void *_imp___fputchar = NULL;
void _elf__fputchar() {
load_dll_msvcrt();
if (!_imp___fputchar) {
_imp___fputchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fputchar");
}
asm("leave\njmp *%0" : : "r"(_imp___fputchar));
}

void _elf__fputwchar() asm("fputwchar");
void *_imp___fputwchar = NULL;
void _elf__fputwchar() {
load_dll_msvcrt();
if (!_imp___fputwchar) {
_imp___fputwchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fputwchar");
}
asm("leave\njmp *%0" : : "r"(_imp___fputwchar));
}

void _elf__fsopen() asm("fsopen");
void *_imp___fsopen = NULL;
void _elf__fsopen() {
load_dll_msvcrt();
if (!_imp___fsopen) {
_imp___fsopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fsopen");
}
asm("leave\njmp *%0" : : "r"(_imp___fsopen));
}

void _elf__fstat() asm("fstat");
void *_imp___fstat = NULL;
void _elf__fstat() {
load_dll_msvcrt();
if (!_imp___fstat) {
_imp___fstat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fstat");
}
asm("leave\njmp *%0" : : "r"(_imp___fstat));
}

void _elf__fstat64() asm("fstat64");
void *_imp___fstat64 = NULL;
void _elf__fstat64() {
load_dll_msvcrt();
if (!_imp___fstat64) {
_imp___fstat64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fstat64");
}
asm("leave\njmp *%0" : : "r"(_imp___fstat64));
}

void _elf__fstati64() asm("fstati64");
void *_imp___fstati64 = NULL;
void _elf__fstati64() {
load_dll_msvcrt();
if (!_imp___fstati64) {
_imp___fstati64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fstati64");
}
asm("leave\njmp *%0" : : "r"(_imp___fstati64));
}

void _elf__ftime() asm("ftime");
void *_imp___ftime = NULL;
void _elf__ftime() {
load_dll_msvcrt();
if (!_imp___ftime) {
_imp___ftime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ftime");
}
asm("leave\njmp *%0" : : "r"(_imp___ftime));
}

void _elf__ftime64() asm("ftime64");
void *_imp___ftime64 = NULL;
void _elf__ftime64() {
load_dll_msvcrt();
if (!_imp___ftime64) {
_imp___ftime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ftime64");
}
asm("leave\njmp *%0" : : "r"(_imp___ftime64));
}

void _elf__ftol() asm("ftol");
void *_imp___ftol = NULL;
void _elf__ftol() {
load_dll_msvcrt();
if (!_imp___ftol) {
_imp___ftol = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ftol");
}
asm("leave\njmp *%0" : : "r"(_imp___ftol));
}

void _elf__fullpath() asm("fullpath");
void *_imp___fullpath = NULL;
void _elf__fullpath() {
load_dll_msvcrt();
if (!_imp___fullpath) {
_imp___fullpath = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fullpath");
}
asm("leave\njmp *%0" : : "r"(_imp___fullpath));
}

void _elf__futime() asm("futime");
void *_imp___futime = NULL;
void _elf__futime() {
load_dll_msvcrt();
if (!_imp___futime) {
_imp___futime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_futime");
}
asm("leave\njmp *%0" : : "r"(_imp___futime));
}

void _elf__futime64() asm("futime64");
void *_imp___futime64 = NULL;
void _elf__futime64() {
load_dll_msvcrt();
if (!_imp___futime64) {
_imp___futime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_futime64");
}
asm("leave\njmp *%0" : : "r"(_imp___futime64));
}

void _elf__gcvt() asm("gcvt");
void *_imp___gcvt = NULL;
void _elf__gcvt() {
load_dll_msvcrt();
if (!_imp___gcvt) {
_imp___gcvt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_gcvt");
}
asm("leave\njmp *%0" : : "r"(_imp___gcvt));
}

void _elf__get_osfhandle() asm("get_osfhandle");
void *_imp___get_osfhandle = NULL;
void _elf__get_osfhandle() {
load_dll_msvcrt();
if (!_imp___get_osfhandle) {
_imp___get_osfhandle = (void *) _elf_GetProcAddress(_dll_msvcrt, "_get_osfhandle");
}
asm("leave\njmp *%0" : : "r"(_imp___get_osfhandle));
}

void _elf__get_sbh_threshold() asm("get_sbh_threshold");
void *_imp___get_sbh_threshold = NULL;
void _elf__get_sbh_threshold() {
load_dll_msvcrt();
if (!_imp___get_sbh_threshold) {
_imp___get_sbh_threshold = (void *) _elf_GetProcAddress(_dll_msvcrt, "_get_sbh_threshold");
}
asm("leave\njmp *%0" : : "r"(_imp___get_sbh_threshold));
}

void _elf__getch() asm("getch");
void *_imp___getch = NULL;
void _elf__getch() {
load_dll_msvcrt();
if (!_imp___getch) {
_imp___getch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getch");
}
asm("leave\njmp *%0" : : "r"(_imp___getch));
}

void _elf__getche() asm("getche");
void *_imp___getche = NULL;
void _elf__getche() {
load_dll_msvcrt();
if (!_imp___getche) {
_imp___getche = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getche");
}
asm("leave\njmp *%0" : : "r"(_imp___getche));
}

void _elf__getcwd() asm("getcwd");
void *_imp___getcwd = NULL;
void _elf__getcwd() {
load_dll_msvcrt();
if (!_imp___getcwd) {
_imp___getcwd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getcwd");
}
asm("leave\njmp *%0" : : "r"(_imp___getcwd));
}

void _elf__getdcwd() asm("getdcwd");
void *_imp___getdcwd = NULL;
void _elf__getdcwd() {
load_dll_msvcrt();
if (!_imp___getdcwd) {
_imp___getdcwd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getdcwd");
}
asm("leave\njmp *%0" : : "r"(_imp___getdcwd));
}

void _elf__getdiskfree() asm("getdiskfree");
void *_imp___getdiskfree = NULL;
void _elf__getdiskfree() {
load_dll_msvcrt();
if (!_imp___getdiskfree) {
_imp___getdiskfree = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getdiskfree");
}
asm("leave\njmp *%0" : : "r"(_imp___getdiskfree));
}

void _elf__getdllprocaddr() asm("getdllprocaddr");
void *_imp___getdllprocaddr = NULL;
void _elf__getdllprocaddr() {
load_dll_msvcrt();
if (!_imp___getdllprocaddr) {
_imp___getdllprocaddr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getdllprocaddr");
}
asm("leave\njmp *%0" : : "r"(_imp___getdllprocaddr));
}

void _elf__getdrive() asm("getdrive");
void *_imp___getdrive = NULL;
void _elf__getdrive() {
load_dll_msvcrt();
if (!_imp___getdrive) {
_imp___getdrive = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getdrive");
}
asm("leave\njmp *%0" : : "r"(_imp___getdrive));
}

void _elf__getdrives() asm("getdrives");
void *_imp___getdrives = NULL;
void _elf__getdrives() {
load_dll_msvcrt();
if (!_imp___getdrives) {
_imp___getdrives = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getdrives");
}
asm("leave\njmp *%0" : : "r"(_imp___getdrives));
}

void _elf__getmaxstdio() asm("getmaxstdio");
void *_imp___getmaxstdio = NULL;
void _elf__getmaxstdio() {
load_dll_msvcrt();
if (!_imp___getmaxstdio) {
_imp___getmaxstdio = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getmaxstdio");
}
asm("leave\njmp *%0" : : "r"(_imp___getmaxstdio));
}

void _elf__getmbcp() asm("getmbcp");
void *_imp___getmbcp = NULL;
void _elf__getmbcp() {
load_dll_msvcrt();
if (!_imp___getmbcp) {
_imp___getmbcp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getmbcp");
}
asm("leave\njmp *%0" : : "r"(_imp___getmbcp));
}

void _elf__getpid() asm("getpid");
void *_imp___getpid = NULL;
void _elf__getpid() {
load_dll_msvcrt();
if (!_imp___getpid) {
_imp___getpid = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getpid");
}
asm("leave\njmp *%0" : : "r"(_imp___getpid));
}

void _elf__getsystime() asm("getsystime");
void *_imp___getsystime = NULL;
void _elf__getsystime() {
load_dll_msvcrt();
if (!_imp___getsystime) {
_imp___getsystime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getsystime");
}
asm("leave\njmp *%0" : : "r"(_imp___getsystime));
}

void _elf__getw() asm("getw");
void *_imp___getw = NULL;
void _elf__getw() {
load_dll_msvcrt();
if (!_imp___getw) {
_imp___getw = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getw");
}
asm("leave\njmp *%0" : : "r"(_imp___getw));
}

void _elf__getwch() asm("getwch");
void *_imp___getwch = NULL;
void _elf__getwch() {
load_dll_msvcrt();
if (!_imp___getwch) {
_imp___getwch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getwch");
}
asm("leave\njmp *%0" : : "r"(_imp___getwch));
}

void _elf__getwche() asm("getwche");
void *_imp___getwche = NULL;
void _elf__getwche() {
load_dll_msvcrt();
if (!_imp___getwche) {
_imp___getwche = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getwche");
}
asm("leave\njmp *%0" : : "r"(_imp___getwche));
}

void _elf__getws() asm("getws");
void *_imp___getws = NULL;
void _elf__getws() {
load_dll_msvcrt();
if (!_imp___getws) {
_imp___getws = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getws");
}
asm("leave\njmp *%0" : : "r"(_imp___getws));
}

void _elf__global_unwind2() asm("global_unwind2");
void *_imp___global_unwind2 = NULL;
void _elf__global_unwind2() {
load_dll_msvcrt();
if (!_imp___global_unwind2) {
_imp___global_unwind2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_global_unwind2");
}
asm("leave\njmp *%0" : : "r"(_imp___global_unwind2));
}

void _elf__gmtime64() asm("gmtime64");
void *_imp___gmtime64 = NULL;
void _elf__gmtime64() {
load_dll_msvcrt();
if (!_imp___gmtime64) {
_imp___gmtime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_gmtime64");
}
asm("leave\njmp *%0" : : "r"(_imp___gmtime64));
}

void _elf__heapadd() asm("heapadd");
void *_imp___heapadd = NULL;
void _elf__heapadd() {
load_dll_msvcrt();
if (!_imp___heapadd) {
_imp___heapadd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_heapadd");
}
asm("leave\njmp *%0" : : "r"(_imp___heapadd));
}

void _elf__heapchk() asm("heapchk");
void *_imp___heapchk = NULL;
void _elf__heapchk() {
load_dll_msvcrt();
if (!_imp___heapchk) {
_imp___heapchk = (void *) _elf_GetProcAddress(_dll_msvcrt, "_heapchk");
}
asm("leave\njmp *%0" : : "r"(_imp___heapchk));
}

void _elf__heapmin() asm("heapmin");
void *_imp___heapmin = NULL;
void _elf__heapmin() {
load_dll_msvcrt();
if (!_imp___heapmin) {
_imp___heapmin = (void *) _elf_GetProcAddress(_dll_msvcrt, "_heapmin");
}
asm("leave\njmp *%0" : : "r"(_imp___heapmin));
}

void _elf__heapset() asm("heapset");
void *_imp___heapset = NULL;
void _elf__heapset() {
load_dll_msvcrt();
if (!_imp___heapset) {
_imp___heapset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_heapset");
}
asm("leave\njmp *%0" : : "r"(_imp___heapset));
}

void _elf__heapused() asm("heapused");
void *_imp___heapused = NULL;
void _elf__heapused() {
load_dll_msvcrt();
if (!_imp___heapused) {
_imp___heapused = (void *) _elf_GetProcAddress(_dll_msvcrt, "_heapused");
}
asm("leave\njmp *%0" : : "r"(_imp___heapused));
}

void _elf__heapwalk() asm("heapwalk");
void *_imp___heapwalk = NULL;
void _elf__heapwalk() {
load_dll_msvcrt();
if (!_imp___heapwalk) {
_imp___heapwalk = (void *) _elf_GetProcAddress(_dll_msvcrt, "_heapwalk");
}
asm("leave\njmp *%0" : : "r"(_imp___heapwalk));
}

void _elf__hypot() asm("hypot");
void *_imp___hypot = NULL;
void _elf__hypot() {
load_dll_msvcrt();
if (!_imp___hypot) {
_imp___hypot = (void *) _elf_GetProcAddress(_dll_msvcrt, "_hypot");
}
asm("leave\njmp *%0" : : "r"(_imp___hypot));
}

void _elf__i64toa() asm("i64toa");
void *_imp___i64toa = NULL;
void _elf__i64toa() {
load_dll_msvcrt();
if (!_imp___i64toa) {
_imp___i64toa = (void *) _elf_GetProcAddress(_dll_msvcrt, "_i64toa");
}
asm("leave\njmp *%0" : : "r"(_imp___i64toa));
}

void _elf__i64tow() asm("i64tow");
void *_imp___i64tow = NULL;
void _elf__i64tow() {
load_dll_msvcrt();
if (!_imp___i64tow) {
_imp___i64tow = (void *) _elf_GetProcAddress(_dll_msvcrt, "_i64tow");
}
asm("leave\njmp *%0" : : "r"(_imp___i64tow));
}

void _elf__initterm() asm("initterm");
void *_imp___initterm = NULL;
void _elf__initterm() {
load_dll_msvcrt();
if (!_imp___initterm) {
_imp___initterm = (void *) _elf_GetProcAddress(_dll_msvcrt, "_initterm");
}
asm("leave\njmp *%0" : : "r"(_imp___initterm));
}

void _elf__inp() asm("inp");
void *_imp___inp = NULL;
void _elf__inp() {
load_dll_msvcrt();
if (!_imp___inp) {
_imp___inp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_inp");
}
asm("leave\njmp *%0" : : "r"(_imp___inp));
}

void _elf__inpd() asm("inpd");
void *_imp___inpd = NULL;
void _elf__inpd() {
load_dll_msvcrt();
if (!_imp___inpd) {
_imp___inpd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_inpd");
}
asm("leave\njmp *%0" : : "r"(_imp___inpd));
}

void _elf__inpw() asm("inpw");
void *_imp___inpw = NULL;
void _elf__inpw() {
load_dll_msvcrt();
if (!_imp___inpw) {
_imp___inpw = (void *) _elf_GetProcAddress(_dll_msvcrt, "_inpw");
}
asm("leave\njmp *%0" : : "r"(_imp___inpw));
}

void _elf__iob() asm("iob");
void *_imp___iob = NULL;
void _elf__iob() {
load_dll_msvcrt();
if (!_imp___iob) {
_imp___iob = (void *) _elf_GetProcAddress(_dll_msvcrt, "_iob");
}
asm("leave\njmp *%0" : : "r"(_imp___iob));
}

void _elf__isatty() asm("isatty");
void *_imp___isatty = NULL;
void _elf__isatty() {
load_dll_msvcrt();
if (!_imp___isatty) {
_imp___isatty = (void *) _elf_GetProcAddress(_dll_msvcrt, "_isatty");
}
asm("leave\njmp *%0" : : "r"(_imp___isatty));
}

void _elf__isctype() asm("isctype");
void *_imp___isctype = NULL;
void _elf__isctype() {
load_dll_msvcrt();
if (!_imp___isctype) {
_imp___isctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_isctype");
}
asm("leave\njmp *%0" : : "r"(_imp___isctype));
}

void _elf__ismbbalnum() asm("ismbbalnum");
void *_imp___ismbbalnum = NULL;
void _elf__ismbbalnum() {
load_dll_msvcrt();
if (!_imp___ismbbalnum) {
_imp___ismbbalnum = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbalnum");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbbalnum));
}

void _elf__ismbbalpha() asm("ismbbalpha");
void *_imp___ismbbalpha = NULL;
void _elf__ismbbalpha() {
load_dll_msvcrt();
if (!_imp___ismbbalpha) {
_imp___ismbbalpha = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbalpha");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbbalpha));
}

void _elf__ismbbgraph() asm("ismbbgraph");
void *_imp___ismbbgraph = NULL;
void _elf__ismbbgraph() {
load_dll_msvcrt();
if (!_imp___ismbbgraph) {
_imp___ismbbgraph = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbgraph");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbbgraph));
}

void _elf__ismbbkalnum() asm("ismbbkalnum");
void *_imp___ismbbkalnum = NULL;
void _elf__ismbbkalnum() {
load_dll_msvcrt();
if (!_imp___ismbbkalnum) {
_imp___ismbbkalnum = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbkalnum");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbbkalnum));
}

void _elf__ismbbkana() asm("ismbbkana");
void *_imp___ismbbkana = NULL;
void _elf__ismbbkana() {
load_dll_msvcrt();
if (!_imp___ismbbkana) {
_imp___ismbbkana = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbkana");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbbkana));
}

void _elf__ismbbkprint() asm("ismbbkprint");
void *_imp___ismbbkprint = NULL;
void _elf__ismbbkprint() {
load_dll_msvcrt();
if (!_imp___ismbbkprint) {
_imp___ismbbkprint = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbkprint");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbbkprint));
}

void _elf__ismbbkpunct() asm("ismbbkpunct");
void *_imp___ismbbkpunct = NULL;
void _elf__ismbbkpunct() {
load_dll_msvcrt();
if (!_imp___ismbbkpunct) {
_imp___ismbbkpunct = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbkpunct");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbbkpunct));
}

void _elf__ismbblead() asm("ismbblead");
void *_imp___ismbblead = NULL;
void _elf__ismbblead() {
load_dll_msvcrt();
if (!_imp___ismbblead) {
_imp___ismbblead = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbblead");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbblead));
}

void _elf__ismbbprint() asm("ismbbprint");
void *_imp___ismbbprint = NULL;
void _elf__ismbbprint() {
load_dll_msvcrt();
if (!_imp___ismbbprint) {
_imp___ismbbprint = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbprint");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbbprint));
}

void _elf__ismbbpunct() asm("ismbbpunct");
void *_imp___ismbbpunct = NULL;
void _elf__ismbbpunct() {
load_dll_msvcrt();
if (!_imp___ismbbpunct) {
_imp___ismbbpunct = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbpunct");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbbpunct));
}

void _elf__ismbbtrail() asm("ismbbtrail");
void *_imp___ismbbtrail = NULL;
void _elf__ismbbtrail() {
load_dll_msvcrt();
if (!_imp___ismbbtrail) {
_imp___ismbbtrail = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbtrail");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbbtrail));
}

void _elf__ismbcalnum() asm("ismbcalnum");
void *_imp___ismbcalnum = NULL;
void _elf__ismbcalnum() {
load_dll_msvcrt();
if (!_imp___ismbcalnum) {
_imp___ismbcalnum = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcalnum");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbcalnum));
}

void _elf__ismbcalpha() asm("ismbcalpha");
void *_imp___ismbcalpha = NULL;
void _elf__ismbcalpha() {
load_dll_msvcrt();
if (!_imp___ismbcalpha) {
_imp___ismbcalpha = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcalpha");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbcalpha));
}

void _elf__ismbcdigit() asm("ismbcdigit");
void *_imp___ismbcdigit = NULL;
void _elf__ismbcdigit() {
load_dll_msvcrt();
if (!_imp___ismbcdigit) {
_imp___ismbcdigit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcdigit");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbcdigit));
}

void _elf__ismbcgraph() asm("ismbcgraph");
void *_imp___ismbcgraph = NULL;
void _elf__ismbcgraph() {
load_dll_msvcrt();
if (!_imp___ismbcgraph) {
_imp___ismbcgraph = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcgraph");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbcgraph));
}

void _elf__ismbchira() asm("ismbchira");
void *_imp___ismbchira = NULL;
void _elf__ismbchira() {
load_dll_msvcrt();
if (!_imp___ismbchira) {
_imp___ismbchira = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbchira");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbchira));
}

void _elf__ismbckata() asm("ismbckata");
void *_imp___ismbckata = NULL;
void _elf__ismbckata() {
load_dll_msvcrt();
if (!_imp___ismbckata) {
_imp___ismbckata = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbckata");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbckata));
}

void _elf__ismbcl0() asm("ismbcl0");
void *_imp___ismbcl0 = NULL;
void _elf__ismbcl0() {
load_dll_msvcrt();
if (!_imp___ismbcl0) {
_imp___ismbcl0 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcl0");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbcl0));
}

void _elf__ismbcl1() asm("ismbcl1");
void *_imp___ismbcl1 = NULL;
void _elf__ismbcl1() {
load_dll_msvcrt();
if (!_imp___ismbcl1) {
_imp___ismbcl1 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcl1");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbcl1));
}

void _elf__ismbcl2() asm("ismbcl2");
void *_imp___ismbcl2 = NULL;
void _elf__ismbcl2() {
load_dll_msvcrt();
if (!_imp___ismbcl2) {
_imp___ismbcl2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcl2");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbcl2));
}

void _elf__ismbclegal() asm("ismbclegal");
void *_imp___ismbclegal = NULL;
void _elf__ismbclegal() {
load_dll_msvcrt();
if (!_imp___ismbclegal) {
_imp___ismbclegal = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbclegal");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbclegal));
}

void _elf__ismbclower() asm("ismbclower");
void *_imp___ismbclower = NULL;
void _elf__ismbclower() {
load_dll_msvcrt();
if (!_imp___ismbclower) {
_imp___ismbclower = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbclower");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbclower));
}

void _elf__ismbcprint() asm("ismbcprint");
void *_imp___ismbcprint = NULL;
void _elf__ismbcprint() {
load_dll_msvcrt();
if (!_imp___ismbcprint) {
_imp___ismbcprint = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcprint");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbcprint));
}

void _elf__ismbcpunct() asm("ismbcpunct");
void *_imp___ismbcpunct = NULL;
void _elf__ismbcpunct() {
load_dll_msvcrt();
if (!_imp___ismbcpunct) {
_imp___ismbcpunct = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcpunct");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbcpunct));
}

void _elf__ismbcspace() asm("ismbcspace");
void *_imp___ismbcspace = NULL;
void _elf__ismbcspace() {
load_dll_msvcrt();
if (!_imp___ismbcspace) {
_imp___ismbcspace = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcspace");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbcspace));
}

void _elf__ismbcsymbol() asm("ismbcsymbol");
void *_imp___ismbcsymbol = NULL;
void _elf__ismbcsymbol() {
load_dll_msvcrt();
if (!_imp___ismbcsymbol) {
_imp___ismbcsymbol = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcsymbol");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbcsymbol));
}

void _elf__ismbcupper() asm("ismbcupper");
void *_imp___ismbcupper = NULL;
void _elf__ismbcupper() {
load_dll_msvcrt();
if (!_imp___ismbcupper) {
_imp___ismbcupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcupper");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbcupper));
}

void _elf__ismbslead() asm("ismbslead");
void *_imp___ismbslead = NULL;
void _elf__ismbslead() {
load_dll_msvcrt();
if (!_imp___ismbslead) {
_imp___ismbslead = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbslead");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbslead));
}

void _elf__ismbstrail() asm("ismbstrail");
void *_imp___ismbstrail = NULL;
void _elf__ismbstrail() {
load_dll_msvcrt();
if (!_imp___ismbstrail) {
_imp___ismbstrail = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbstrail");
}
asm("leave\njmp *%0" : : "r"(_imp___ismbstrail));
}

void _elf__isnan() asm("isnan");
void *_imp___isnan = NULL;
void _elf__isnan() {
load_dll_msvcrt();
if (!_imp___isnan) {
_imp___isnan = (void *) _elf_GetProcAddress(_dll_msvcrt, "_isnan");
}
asm("leave\njmp *%0" : : "r"(_imp___isnan));
}

void _elf__itoa() asm("itoa");
void *_imp___itoa = NULL;
void _elf__itoa() {
load_dll_msvcrt();
if (!_imp___itoa) {
_imp___itoa = (void *) _elf_GetProcAddress(_dll_msvcrt, "_itoa");
}
asm("leave\njmp *%0" : : "r"(_imp___itoa));
}

void _elf__itow() asm("itow");
void *_imp___itow = NULL;
void _elf__itow() {
load_dll_msvcrt();
if (!_imp___itow) {
_imp___itow = (void *) _elf_GetProcAddress(_dll_msvcrt, "_itow");
}
asm("leave\njmp *%0" : : "r"(_imp___itow));
}

void _elf__j0() asm("j0");
void *_imp___j0 = NULL;
void _elf__j0() {
load_dll_msvcrt();
if (!_imp___j0) {
_imp___j0 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_j0");
}
asm("leave\njmp *%0" : : "r"(_imp___j0));
}

void _elf__j1() asm("j1");
void *_imp___j1 = NULL;
void _elf__j1() {
load_dll_msvcrt();
if (!_imp___j1) {
_imp___j1 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_j1");
}
asm("leave\njmp *%0" : : "r"(_imp___j1));
}

void _elf__jn() asm("jn");
void *_imp___jn = NULL;
void _elf__jn() {
load_dll_msvcrt();
if (!_imp___jn) {
_imp___jn = (void *) _elf_GetProcAddress(_dll_msvcrt, "_jn");
}
asm("leave\njmp *%0" : : "r"(_imp___jn));
}

void _elf__kbhit() asm("kbhit");
void *_imp___kbhit = NULL;
void _elf__kbhit() {
load_dll_msvcrt();
if (!_imp___kbhit) {
_imp___kbhit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_kbhit");
}
asm("leave\njmp *%0" : : "r"(_imp___kbhit));
}

void _elf__lfind() asm("lfind");
void *_imp___lfind = NULL;
void _elf__lfind() {
load_dll_msvcrt();
if (!_imp___lfind) {
_imp___lfind = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lfind");
}
asm("leave\njmp *%0" : : "r"(_imp___lfind));
}

void _elf__loaddll() asm("loaddll");
void *_imp___loaddll = NULL;
void _elf__loaddll() {
load_dll_msvcrt();
if (!_imp___loaddll) {
_imp___loaddll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_loaddll");
}
asm("leave\njmp *%0" : : "r"(_imp___loaddll));
}

void _elf__local_unwind2() asm("local_unwind2");
void *_imp___local_unwind2 = NULL;
void _elf__local_unwind2() {
load_dll_msvcrt();
if (!_imp___local_unwind2) {
_imp___local_unwind2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_local_unwind2");
}
asm("leave\njmp *%0" : : "r"(_imp___local_unwind2));
}

void _elf__localtime64() asm("localtime64");
void *_imp___localtime64 = NULL;
void _elf__localtime64() {
load_dll_msvcrt();
if (!_imp___localtime64) {
_imp___localtime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_localtime64");
}
asm("leave\njmp *%0" : : "r"(_imp___localtime64));
}

void _elf__lock() asm("lock");
void *_imp___lock = NULL;
void _elf__lock() {
load_dll_msvcrt();
if (!_imp___lock) {
_imp___lock = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lock");
}
asm("leave\njmp *%0" : : "r"(_imp___lock));
}

void _elf__locking() asm("locking");
void *_imp___locking = NULL;
void _elf__locking() {
load_dll_msvcrt();
if (!_imp___locking) {
_imp___locking = (void *) _elf_GetProcAddress(_dll_msvcrt, "_locking");
}
asm("leave\njmp *%0" : : "r"(_imp___locking));
}

void _elf__logb() asm("logb");
void *_imp___logb = NULL;
void _elf__logb() {
load_dll_msvcrt();
if (!_imp___logb) {
_imp___logb = (void *) _elf_GetProcAddress(_dll_msvcrt, "_logb");
}
asm("leave\njmp *%0" : : "r"(_imp___logb));
}

void _elf__longjmpex() asm("longjmpex");
void *_imp___longjmpex = NULL;
void _elf__longjmpex() {
load_dll_msvcrt();
if (!_imp___longjmpex) {
_imp___longjmpex = (void *) _elf_GetProcAddress(_dll_msvcrt, "_longjmpex");
}
asm("leave\njmp *%0" : : "r"(_imp___longjmpex));
}

void _elf__lrotl() asm("lrotl");
void *_imp___lrotl = NULL;
void _elf__lrotl() {
load_dll_msvcrt();
if (!_imp___lrotl) {
_imp___lrotl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lrotl");
}
asm("leave\njmp *%0" : : "r"(_imp___lrotl));
}

void _elf__lrotr() asm("lrotr");
void *_imp___lrotr = NULL;
void _elf__lrotr() {
load_dll_msvcrt();
if (!_imp___lrotr) {
_imp___lrotr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lrotr");
}
asm("leave\njmp *%0" : : "r"(_imp___lrotr));
}

void _elf__lsearch() asm("lsearch");
void *_imp___lsearch = NULL;
void _elf__lsearch() {
load_dll_msvcrt();
if (!_imp___lsearch) {
_imp___lsearch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lsearch");
}
asm("leave\njmp *%0" : : "r"(_imp___lsearch));
}

void _elf__lseek() asm("lseek");
void *_imp___lseek = NULL;
void _elf__lseek() {
load_dll_msvcrt();
if (!_imp___lseek) {
_imp___lseek = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lseek");
}
asm("leave\njmp *%0" : : "r"(_imp___lseek));
}

void _elf__lseeki64() asm("lseeki64");
void *_imp___lseeki64 = NULL;
void _elf__lseeki64() {
load_dll_msvcrt();
if (!_imp___lseeki64) {
_imp___lseeki64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lseeki64");
}
asm("leave\njmp *%0" : : "r"(_imp___lseeki64));
}

void _elf__ltoa() asm("ltoa");
void *_imp___ltoa = NULL;
void _elf__ltoa() {
load_dll_msvcrt();
if (!_imp___ltoa) {
_imp___ltoa = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ltoa");
}
asm("leave\njmp *%0" : : "r"(_imp___ltoa));
}

void _elf__ltow() asm("ltow");
void *_imp___ltow = NULL;
void _elf__ltow() {
load_dll_msvcrt();
if (!_imp___ltow) {
_imp___ltow = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ltow");
}
asm("leave\njmp *%0" : : "r"(_imp___ltow));
}

void _elf__makepath() asm("makepath");
void *_imp___makepath = NULL;
void _elf__makepath() {
load_dll_msvcrt();
if (!_imp___makepath) {
_imp___makepath = (void *) _elf_GetProcAddress(_dll_msvcrt, "_makepath");
}
asm("leave\njmp *%0" : : "r"(_imp___makepath));
}

void _elf__mbbtombc() asm("mbbtombc");
void *_imp___mbbtombc = NULL;
void _elf__mbbtombc() {
load_dll_msvcrt();
if (!_imp___mbbtombc) {
_imp___mbbtombc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbbtombc");
}
asm("leave\njmp *%0" : : "r"(_imp___mbbtombc));
}

void _elf__mbbtype() asm("mbbtype");
void *_imp___mbbtype = NULL;
void _elf__mbbtype() {
load_dll_msvcrt();
if (!_imp___mbbtype) {
_imp___mbbtype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbbtype");
}
asm("leave\njmp *%0" : : "r"(_imp___mbbtype));
}

void _elf__mbcasemap() asm("mbcasemap");
void *_imp___mbcasemap = NULL;
void _elf__mbcasemap() {
load_dll_msvcrt();
if (!_imp___mbcasemap) {
_imp___mbcasemap = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbcasemap");
}
asm("leave\njmp *%0" : : "r"(_imp___mbcasemap));
}

void _elf__mbccpy() asm("mbccpy");
void *_imp___mbccpy = NULL;
void _elf__mbccpy() {
load_dll_msvcrt();
if (!_imp___mbccpy) {
_imp___mbccpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbccpy");
}
asm("leave\njmp *%0" : : "r"(_imp___mbccpy));
}

void _elf__mbcjistojms() asm("mbcjistojms");
void *_imp___mbcjistojms = NULL;
void _elf__mbcjistojms() {
load_dll_msvcrt();
if (!_imp___mbcjistojms) {
_imp___mbcjistojms = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbcjistojms");
}
asm("leave\njmp *%0" : : "r"(_imp___mbcjistojms));
}

void _elf__mbcjmstojis() asm("mbcjmstojis");
void *_imp___mbcjmstojis = NULL;
void _elf__mbcjmstojis() {
load_dll_msvcrt();
if (!_imp___mbcjmstojis) {
_imp___mbcjmstojis = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbcjmstojis");
}
asm("leave\njmp *%0" : : "r"(_imp___mbcjmstojis));
}

void _elf__mbclen() asm("mbclen");
void *_imp___mbclen = NULL;
void _elf__mbclen() {
load_dll_msvcrt();
if (!_imp___mbclen) {
_imp___mbclen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbclen");
}
asm("leave\njmp *%0" : : "r"(_imp___mbclen));
}

void _elf__mbctohira() asm("mbctohira");
void *_imp___mbctohira = NULL;
void _elf__mbctohira() {
load_dll_msvcrt();
if (!_imp___mbctohira) {
_imp___mbctohira = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbctohira");
}
asm("leave\njmp *%0" : : "r"(_imp___mbctohira));
}

void _elf__mbctokata() asm("mbctokata");
void *_imp___mbctokata = NULL;
void _elf__mbctokata() {
load_dll_msvcrt();
if (!_imp___mbctokata) {
_imp___mbctokata = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbctokata");
}
asm("leave\njmp *%0" : : "r"(_imp___mbctokata));
}

void _elf__mbctolower() asm("mbctolower");
void *_imp___mbctolower = NULL;
void _elf__mbctolower() {
load_dll_msvcrt();
if (!_imp___mbctolower) {
_imp___mbctolower = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbctolower");
}
asm("leave\njmp *%0" : : "r"(_imp___mbctolower));
}

void _elf__mbctombb() asm("mbctombb");
void *_imp___mbctombb = NULL;
void _elf__mbctombb() {
load_dll_msvcrt();
if (!_imp___mbctombb) {
_imp___mbctombb = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbctombb");
}
asm("leave\njmp *%0" : : "r"(_imp___mbctombb));
}

void _elf__mbctoupper() asm("mbctoupper");
void *_imp___mbctoupper = NULL;
void _elf__mbctoupper() {
load_dll_msvcrt();
if (!_imp___mbctoupper) {
_imp___mbctoupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbctoupper");
}
asm("leave\njmp *%0" : : "r"(_imp___mbctoupper));
}

void _elf__mbctype() asm("mbctype");
void *_imp___mbctype = NULL;
void _elf__mbctype() {
load_dll_msvcrt();
if (!_imp___mbctype) {
_imp___mbctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbctype");
}
asm("leave\njmp *%0" : : "r"(_imp___mbctype));
}

void _elf__mbsbtype() asm("mbsbtype");
void *_imp___mbsbtype = NULL;
void _elf__mbsbtype() {
load_dll_msvcrt();
if (!_imp___mbsbtype) {
_imp___mbsbtype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsbtype");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsbtype));
}

void _elf__mbscat() asm("mbscat");
void *_imp___mbscat = NULL;
void _elf__mbscat() {
load_dll_msvcrt();
if (!_imp___mbscat) {
_imp___mbscat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbscat");
}
asm("leave\njmp *%0" : : "r"(_imp___mbscat));
}

void _elf__mbschr() asm("mbschr");
void *_imp___mbschr = NULL;
void _elf__mbschr() {
load_dll_msvcrt();
if (!_imp___mbschr) {
_imp___mbschr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbschr");
}
asm("leave\njmp *%0" : : "r"(_imp___mbschr));
}

void _elf__mbscmp() asm("mbscmp");
void *_imp___mbscmp = NULL;
void _elf__mbscmp() {
load_dll_msvcrt();
if (!_imp___mbscmp) {
_imp___mbscmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbscmp");
}
asm("leave\njmp *%0" : : "r"(_imp___mbscmp));
}

void _elf__mbscoll() asm("mbscoll");
void *_imp___mbscoll = NULL;
void _elf__mbscoll() {
load_dll_msvcrt();
if (!_imp___mbscoll) {
_imp___mbscoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbscoll");
}
asm("leave\njmp *%0" : : "r"(_imp___mbscoll));
}

void _elf__mbscpy() asm("mbscpy");
void *_imp___mbscpy = NULL;
void _elf__mbscpy() {
load_dll_msvcrt();
if (!_imp___mbscpy) {
_imp___mbscpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbscpy");
}
asm("leave\njmp *%0" : : "r"(_imp___mbscpy));
}

void _elf__mbscspn() asm("mbscspn");
void *_imp___mbscspn = NULL;
void _elf__mbscspn() {
load_dll_msvcrt();
if (!_imp___mbscspn) {
_imp___mbscspn = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbscspn");
}
asm("leave\njmp *%0" : : "r"(_imp___mbscspn));
}

void _elf__mbsdec() asm("mbsdec");
void *_imp___mbsdec = NULL;
void _elf__mbsdec() {
load_dll_msvcrt();
if (!_imp___mbsdec) {
_imp___mbsdec = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsdec");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsdec));
}

void _elf__mbsdup() asm("mbsdup");
void *_imp___mbsdup = NULL;
void _elf__mbsdup() {
load_dll_msvcrt();
if (!_imp___mbsdup) {
_imp___mbsdup = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsdup");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsdup));
}

void _elf__mbsicmp() asm("mbsicmp");
void *_imp___mbsicmp = NULL;
void _elf__mbsicmp() {
load_dll_msvcrt();
if (!_imp___mbsicmp) {
_imp___mbsicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsicmp");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsicmp));
}

void _elf__mbsicoll() asm("mbsicoll");
void *_imp___mbsicoll = NULL;
void _elf__mbsicoll() {
load_dll_msvcrt();
if (!_imp___mbsicoll) {
_imp___mbsicoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsicoll");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsicoll));
}

void _elf__mbsinc() asm("mbsinc");
void *_imp___mbsinc = NULL;
void _elf__mbsinc() {
load_dll_msvcrt();
if (!_imp___mbsinc) {
_imp___mbsinc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsinc");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsinc));
}

void _elf__mbslen() asm("mbslen");
void *_imp___mbslen = NULL;
void _elf__mbslen() {
load_dll_msvcrt();
if (!_imp___mbslen) {
_imp___mbslen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbslen");
}
asm("leave\njmp *%0" : : "r"(_imp___mbslen));
}

void _elf__mbslwr() asm("mbslwr");
void *_imp___mbslwr = NULL;
void _elf__mbslwr() {
load_dll_msvcrt();
if (!_imp___mbslwr) {
_imp___mbslwr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbslwr");
}
asm("leave\njmp *%0" : : "r"(_imp___mbslwr));
}

void _elf__mbsnbcat() asm("mbsnbcat");
void *_imp___mbsnbcat = NULL;
void _elf__mbsnbcat() {
load_dll_msvcrt();
if (!_imp___mbsnbcat) {
_imp___mbsnbcat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbcat");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsnbcat));
}

void _elf__mbsnbcmp() asm("mbsnbcmp");
void *_imp___mbsnbcmp = NULL;
void _elf__mbsnbcmp() {
load_dll_msvcrt();
if (!_imp___mbsnbcmp) {
_imp___mbsnbcmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbcmp");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsnbcmp));
}

void _elf__mbsnbcnt() asm("mbsnbcnt");
void *_imp___mbsnbcnt = NULL;
void _elf__mbsnbcnt() {
load_dll_msvcrt();
if (!_imp___mbsnbcnt) {
_imp___mbsnbcnt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbcnt");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsnbcnt));
}

void _elf__mbsnbcoll() asm("mbsnbcoll");
void *_imp___mbsnbcoll = NULL;
void _elf__mbsnbcoll() {
load_dll_msvcrt();
if (!_imp___mbsnbcoll) {
_imp___mbsnbcoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbcoll");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsnbcoll));
}

void _elf__mbsnbcpy() asm("mbsnbcpy");
void *_imp___mbsnbcpy = NULL;
void _elf__mbsnbcpy() {
load_dll_msvcrt();
if (!_imp___mbsnbcpy) {
_imp___mbsnbcpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbcpy");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsnbcpy));
}

void _elf__mbsnbicmp() asm("mbsnbicmp");
void *_imp___mbsnbicmp = NULL;
void _elf__mbsnbicmp() {
load_dll_msvcrt();
if (!_imp___mbsnbicmp) {
_imp___mbsnbicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbicmp");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsnbicmp));
}

void _elf__mbsnbicoll() asm("mbsnbicoll");
void *_imp___mbsnbicoll = NULL;
void _elf__mbsnbicoll() {
load_dll_msvcrt();
if (!_imp___mbsnbicoll) {
_imp___mbsnbicoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbicoll");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsnbicoll));
}

void _elf__mbsnbset() asm("mbsnbset");
void *_imp___mbsnbset = NULL;
void _elf__mbsnbset() {
load_dll_msvcrt();
if (!_imp___mbsnbset) {
_imp___mbsnbset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbset");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsnbset));
}

void _elf__mbsncat() asm("mbsncat");
void *_imp___mbsncat = NULL;
void _elf__mbsncat() {
load_dll_msvcrt();
if (!_imp___mbsncat) {
_imp___mbsncat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsncat");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsncat));
}

void _elf__mbsnccnt() asm("mbsnccnt");
void *_imp___mbsnccnt = NULL;
void _elf__mbsnccnt() {
load_dll_msvcrt();
if (!_imp___mbsnccnt) {
_imp___mbsnccnt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnccnt");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsnccnt));
}

void _elf__mbsncmp() asm("mbsncmp");
void *_imp___mbsncmp = NULL;
void _elf__mbsncmp() {
load_dll_msvcrt();
if (!_imp___mbsncmp) {
_imp___mbsncmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsncmp");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsncmp));
}

void _elf__mbsncoll() asm("mbsncoll");
void *_imp___mbsncoll = NULL;
void _elf__mbsncoll() {
load_dll_msvcrt();
if (!_imp___mbsncoll) {
_imp___mbsncoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsncoll");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsncoll));
}

void _elf__mbsncpy() asm("mbsncpy");
void *_imp___mbsncpy = NULL;
void _elf__mbsncpy() {
load_dll_msvcrt();
if (!_imp___mbsncpy) {
_imp___mbsncpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsncpy");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsncpy));
}

void _elf__mbsnextc() asm("mbsnextc");
void *_imp___mbsnextc = NULL;
void _elf__mbsnextc() {
load_dll_msvcrt();
if (!_imp___mbsnextc) {
_imp___mbsnextc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnextc");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsnextc));
}

void _elf__mbsnicmp() asm("mbsnicmp");
void *_imp___mbsnicmp = NULL;
void _elf__mbsnicmp() {
load_dll_msvcrt();
if (!_imp___mbsnicmp) {
_imp___mbsnicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnicmp");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsnicmp));
}

void _elf__mbsnicoll() asm("mbsnicoll");
void *_imp___mbsnicoll = NULL;
void _elf__mbsnicoll() {
load_dll_msvcrt();
if (!_imp___mbsnicoll) {
_imp___mbsnicoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnicoll");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsnicoll));
}

void _elf__mbsninc() asm("mbsninc");
void *_imp___mbsninc = NULL;
void _elf__mbsninc() {
load_dll_msvcrt();
if (!_imp___mbsninc) {
_imp___mbsninc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsninc");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsninc));
}

void _elf__mbsnset() asm("mbsnset");
void *_imp___mbsnset = NULL;
void _elf__mbsnset() {
load_dll_msvcrt();
if (!_imp___mbsnset) {
_imp___mbsnset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnset");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsnset));
}

void _elf__mbspbrk() asm("mbspbrk");
void *_imp___mbspbrk = NULL;
void _elf__mbspbrk() {
load_dll_msvcrt();
if (!_imp___mbspbrk) {
_imp___mbspbrk = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbspbrk");
}
asm("leave\njmp *%0" : : "r"(_imp___mbspbrk));
}

void _elf__mbsrchr() asm("mbsrchr");
void *_imp___mbsrchr = NULL;
void _elf__mbsrchr() {
load_dll_msvcrt();
if (!_imp___mbsrchr) {
_imp___mbsrchr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsrchr");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsrchr));
}

void _elf__mbsrev() asm("mbsrev");
void *_imp___mbsrev = NULL;
void _elf__mbsrev() {
load_dll_msvcrt();
if (!_imp___mbsrev) {
_imp___mbsrev = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsrev");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsrev));
}

void _elf__mbsset() asm("mbsset");
void *_imp___mbsset = NULL;
void _elf__mbsset() {
load_dll_msvcrt();
if (!_imp___mbsset) {
_imp___mbsset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsset");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsset));
}

void _elf__mbsspn() asm("mbsspn");
void *_imp___mbsspn = NULL;
void _elf__mbsspn() {
load_dll_msvcrt();
if (!_imp___mbsspn) {
_imp___mbsspn = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsspn");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsspn));
}

void _elf__mbsspnp() asm("mbsspnp");
void *_imp___mbsspnp = NULL;
void _elf__mbsspnp() {
load_dll_msvcrt();
if (!_imp___mbsspnp) {
_imp___mbsspnp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsspnp");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsspnp));
}

void _elf__mbsstr() asm("mbsstr");
void *_imp___mbsstr = NULL;
void _elf__mbsstr() {
load_dll_msvcrt();
if (!_imp___mbsstr) {
_imp___mbsstr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsstr");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsstr));
}

void _elf__mbstok() asm("mbstok");
void *_imp___mbstok = NULL;
void _elf__mbstok() {
load_dll_msvcrt();
if (!_imp___mbstok) {
_imp___mbstok = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbstok");
}
asm("leave\njmp *%0" : : "r"(_imp___mbstok));
}

void _elf__mbstrlen() asm("mbstrlen");
void *_imp___mbstrlen = NULL;
void _elf__mbstrlen() {
load_dll_msvcrt();
if (!_imp___mbstrlen) {
_imp___mbstrlen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbstrlen");
}
asm("leave\njmp *%0" : : "r"(_imp___mbstrlen));
}

void _elf__mbsupr() asm("mbsupr");
void *_imp___mbsupr = NULL;
void _elf__mbsupr() {
load_dll_msvcrt();
if (!_imp___mbsupr) {
_imp___mbsupr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsupr");
}
asm("leave\njmp *%0" : : "r"(_imp___mbsupr));
}

void _elf__memccpy() asm("memccpy");
void *_imp___memccpy = NULL;
void _elf__memccpy() {
load_dll_msvcrt();
if (!_imp___memccpy) {
_imp___memccpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "_memccpy");
}
asm("leave\njmp *%0" : : "r"(_imp___memccpy));
}

void _elf__memicmp() asm("memicmp");
void *_imp___memicmp = NULL;
void _elf__memicmp() {
load_dll_msvcrt();
if (!_imp___memicmp) {
_imp___memicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_memicmp");
}
asm("leave\njmp *%0" : : "r"(_imp___memicmp));
}

void _elf__mkdir() asm("mkdir");
void *_imp___mkdir = NULL;
void _elf__mkdir() {
load_dll_msvcrt();
if (!_imp___mkdir) {
_imp___mkdir = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mkdir");
}
asm("leave\njmp *%0" : : "r"(_imp___mkdir));
}

void _elf__mktemp() asm("mktemp");
void *_imp___mktemp = NULL;
void _elf__mktemp() {
load_dll_msvcrt();
if (!_imp___mktemp) {
_imp___mktemp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mktemp");
}
asm("leave\njmp *%0" : : "r"(_imp___mktemp));
}

void _elf__mktime64() asm("mktime64");
void *_imp___mktime64 = NULL;
void _elf__mktime64() {
load_dll_msvcrt();
if (!_imp___mktime64) {
_imp___mktime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mktime64");
}
asm("leave\njmp *%0" : : "r"(_imp___mktime64));
}

void _elf__msize() asm("msize");
void *_imp___msize = NULL;
void _elf__msize() {
load_dll_msvcrt();
if (!_imp___msize) {
_imp___msize = (void *) _elf_GetProcAddress(_dll_msvcrt, "_msize");
}
asm("leave\njmp *%0" : : "r"(_imp___msize));
}

void _elf__nextafter() asm("nextafter");
void *_imp___nextafter = NULL;
void _elf__nextafter() {
load_dll_msvcrt();
if (!_imp___nextafter) {
_imp___nextafter = (void *) _elf_GetProcAddress(_dll_msvcrt, "_nextafter");
}
asm("leave\njmp *%0" : : "r"(_imp___nextafter));
}

void _elf__onexit() asm("onexit");
void *_imp___onexit = NULL;
void _elf__onexit() {
load_dll_msvcrt();
if (!_imp___onexit) {
_imp___onexit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_onexit");
}
asm("leave\njmp *%0" : : "r"(_imp___onexit));
}

void _elf__open() asm("open");
void *_imp___open = NULL;
void _elf__open() {
load_dll_msvcrt();
if (!_imp___open) {
_imp___open = (void *) _elf_GetProcAddress(_dll_msvcrt, "_open");
}
asm("leave\njmp *%0" : : "r"(_imp___open));
}

void _elf__open_osfhandle() asm("open_osfhandle");
void *_imp___open_osfhandle = NULL;
void _elf__open_osfhandle() {
load_dll_msvcrt();
if (!_imp___open_osfhandle) {
_imp___open_osfhandle = (void *) _elf_GetProcAddress(_dll_msvcrt, "_open_osfhandle");
}
asm("leave\njmp *%0" : : "r"(_imp___open_osfhandle));
}

void _elf__osplatform() asm("osplatform");
void *_imp___osplatform = NULL;
void _elf__osplatform() {
load_dll_msvcrt();
if (!_imp___osplatform) {
_imp___osplatform = (void *) _elf_GetProcAddress(_dll_msvcrt, "_osplatform");
}
asm("leave\njmp *%0" : : "r"(_imp___osplatform));
}

void _elf__osver() asm("osver");
void *_imp___osver = NULL;
void _elf__osver() {
load_dll_msvcrt();
if (!_imp___osver) {
_imp___osver = (void *) _elf_GetProcAddress(_dll_msvcrt, "_osver");
}
asm("leave\njmp *%0" : : "r"(_imp___osver));
}

void _elf__outp() asm("outp");
void *_imp___outp = NULL;
void _elf__outp() {
load_dll_msvcrt();
if (!_imp___outp) {
_imp___outp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_outp");
}
asm("leave\njmp *%0" : : "r"(_imp___outp));
}

void _elf__outpd() asm("outpd");
void *_imp___outpd = NULL;
void _elf__outpd() {
load_dll_msvcrt();
if (!_imp___outpd) {
_imp___outpd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_outpd");
}
asm("leave\njmp *%0" : : "r"(_imp___outpd));
}

void _elf__outpw() asm("outpw");
void *_imp___outpw = NULL;
void _elf__outpw() {
load_dll_msvcrt();
if (!_imp___outpw) {
_imp___outpw = (void *) _elf_GetProcAddress(_dll_msvcrt, "_outpw");
}
asm("leave\njmp *%0" : : "r"(_imp___outpw));
}

void _elf__pclose() asm("pclose");
void *_imp___pclose = NULL;
void _elf__pclose() {
load_dll_msvcrt();
if (!_imp___pclose) {
_imp___pclose = (void *) _elf_GetProcAddress(_dll_msvcrt, "_pclose");
}
asm("leave\njmp *%0" : : "r"(_imp___pclose));
}

void _elf__pctype() asm("pctype");
void *_imp___pctype = NULL;
void _elf__pctype() {
load_dll_msvcrt();
if (!_imp___pctype) {
_imp___pctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_pctype");
}
asm("leave\njmp *%0" : : "r"(_imp___pctype));
}

void _elf__pgmptr() asm("pgmptr");
void *_imp___pgmptr = NULL;
void _elf__pgmptr() {
load_dll_msvcrt();
if (!_imp___pgmptr) {
_imp___pgmptr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_pgmptr");
}
asm("leave\njmp *%0" : : "r"(_imp___pgmptr));
}

void _elf__pipe() asm("pipe");
void *_imp___pipe = NULL;
void _elf__pipe() {
load_dll_msvcrt();
if (!_imp___pipe) {
_imp___pipe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_pipe");
}
asm("leave\njmp *%0" : : "r"(_imp___pipe));
}

void _elf__popen() asm("popen");
void *_imp___popen = NULL;
void _elf__popen() {
load_dll_msvcrt();
if (!_imp___popen) {
_imp___popen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_popen");
}
asm("leave\njmp *%0" : : "r"(_imp___popen));
}

void _elf__purecall() asm("purecall");
void *_imp___purecall = NULL;
void _elf__purecall() {
load_dll_msvcrt();
if (!_imp___purecall) {
_imp___purecall = (void *) _elf_GetProcAddress(_dll_msvcrt, "_purecall");
}
asm("leave\njmp *%0" : : "r"(_imp___purecall));
}

void _elf__putch() asm("putch");
void *_imp___putch = NULL;
void _elf__putch() {
load_dll_msvcrt();
if (!_imp___putch) {
_imp___putch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_putch");
}
asm("leave\njmp *%0" : : "r"(_imp___putch));
}

void _elf__putenv() asm("putenv");
void *_imp___putenv = NULL;
void _elf__putenv() {
load_dll_msvcrt();
if (!_imp___putenv) {
_imp___putenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_putenv");
}
asm("leave\njmp *%0" : : "r"(_imp___putenv));
}

void _elf__putw() asm("putw");
void *_imp___putw = NULL;
void _elf__putw() {
load_dll_msvcrt();
if (!_imp___putw) {
_imp___putw = (void *) _elf_GetProcAddress(_dll_msvcrt, "_putw");
}
asm("leave\njmp *%0" : : "r"(_imp___putw));
}

void _elf__putwch() asm("putwch");
void *_imp___putwch = NULL;
void _elf__putwch() {
load_dll_msvcrt();
if (!_imp___putwch) {
_imp___putwch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_putwch");
}
asm("leave\njmp *%0" : : "r"(_imp___putwch));
}

void _elf__putws() asm("putws");
void *_imp___putws = NULL;
void _elf__putws() {
load_dll_msvcrt();
if (!_imp___putws) {
_imp___putws = (void *) _elf_GetProcAddress(_dll_msvcrt, "_putws");
}
asm("leave\njmp *%0" : : "r"(_imp___putws));
}

void _elf__pwctype() asm("pwctype");
void *_imp___pwctype = NULL;
void _elf__pwctype() {
load_dll_msvcrt();
if (!_imp___pwctype) {
_imp___pwctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_pwctype");
}
asm("leave\njmp *%0" : : "r"(_imp___pwctype));
}

void _elf__read() asm("read");
void *_imp___read = NULL;
void _elf__read() {
load_dll_msvcrt();
if (!_imp___read) {
_imp___read = (void *) _elf_GetProcAddress(_dll_msvcrt, "_read");
}
asm("leave\njmp *%0" : : "r"(_imp___read));
}

void _elf__resetstkoflw() asm("resetstkoflw");
void *_imp___resetstkoflw = NULL;
void _elf__resetstkoflw() {
load_dll_msvcrt();
if (!_imp___resetstkoflw) {
_imp___resetstkoflw = (void *) _elf_GetProcAddress(_dll_msvcrt, "_resetstkoflw");
}
asm("leave\njmp *%0" : : "r"(_imp___resetstkoflw));
}

void _elf__rmdir() asm("rmdir");
void *_imp___rmdir = NULL;
void _elf__rmdir() {
load_dll_msvcrt();
if (!_imp___rmdir) {
_imp___rmdir = (void *) _elf_GetProcAddress(_dll_msvcrt, "_rmdir");
}
asm("leave\njmp *%0" : : "r"(_imp___rmdir));
}

void _elf__rmtmp() asm("rmtmp");
void *_imp___rmtmp = NULL;
void _elf__rmtmp() {
load_dll_msvcrt();
if (!_imp___rmtmp) {
_imp___rmtmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_rmtmp");
}
asm("leave\njmp *%0" : : "r"(_imp___rmtmp));
}

void _elf__rotl() asm("rotl");
void *_imp___rotl = NULL;
void _elf__rotl() {
load_dll_msvcrt();
if (!_imp___rotl) {
_imp___rotl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_rotl");
}
asm("leave\njmp *%0" : : "r"(_imp___rotl));
}

void _elf__rotr() asm("rotr");
void *_imp___rotr = NULL;
void _elf__rotr() {
load_dll_msvcrt();
if (!_imp___rotr) {
_imp___rotr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_rotr");
}
asm("leave\njmp *%0" : : "r"(_imp___rotr));
}

void _elf__safe_fdiv() asm("safe_fdiv");
void *_imp___safe_fdiv = NULL;
void _elf__safe_fdiv() {
load_dll_msvcrt();
if (!_imp___safe_fdiv) {
_imp___safe_fdiv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_safe_fdiv");
}
asm("leave\njmp *%0" : : "r"(_imp___safe_fdiv));
}

void _elf__safe_fdivr() asm("safe_fdivr");
void *_imp___safe_fdivr = NULL;
void _elf__safe_fdivr() {
load_dll_msvcrt();
if (!_imp___safe_fdivr) {
_imp___safe_fdivr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_safe_fdivr");
}
asm("leave\njmp *%0" : : "r"(_imp___safe_fdivr));
}

void _elf__safe_fprem() asm("safe_fprem");
void *_imp___safe_fprem = NULL;
void _elf__safe_fprem() {
load_dll_msvcrt();
if (!_imp___safe_fprem) {
_imp___safe_fprem = (void *) _elf_GetProcAddress(_dll_msvcrt, "_safe_fprem");
}
asm("leave\njmp *%0" : : "r"(_imp___safe_fprem));
}

void _elf__safe_fprem1() asm("safe_fprem1");
void *_imp___safe_fprem1 = NULL;
void _elf__safe_fprem1() {
load_dll_msvcrt();
if (!_imp___safe_fprem1) {
_imp___safe_fprem1 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_safe_fprem1");
}
asm("leave\njmp *%0" : : "r"(_imp___safe_fprem1));
}

void _elf__scalb() asm("scalb");
void *_imp___scalb = NULL;
void _elf__scalb() {
load_dll_msvcrt();
if (!_imp___scalb) {
_imp___scalb = (void *) _elf_GetProcAddress(_dll_msvcrt, "_scalb");
}
asm("leave\njmp *%0" : : "r"(_imp___scalb));
}

void _elf__scprintf() asm("scprintf");
void *_imp___scprintf = NULL;
void _elf__scprintf() {
load_dll_msvcrt();
if (!_imp___scprintf) {
_imp___scprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_scprintf");
}
asm("leave\njmp *%0" : : "r"(_imp___scprintf));
}

void _elf__scwprintf() asm("scwprintf");
void *_imp___scwprintf = NULL;
void _elf__scwprintf() {
load_dll_msvcrt();
if (!_imp___scwprintf) {
_imp___scwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_scwprintf");
}
asm("leave\njmp *%0" : : "r"(_imp___scwprintf));
}

void _elf__searchenv() asm("searchenv");
void *_imp___searchenv = NULL;
void _elf__searchenv() {
load_dll_msvcrt();
if (!_imp___searchenv) {
_imp___searchenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_searchenv");
}
asm("leave\njmp *%0" : : "r"(_imp___searchenv));
}

void _elf__seh_longjmp_unwind() asm("seh_longjmp_unwind");
void *_imp___seh_longjmp_unwind = NULL;
void _elf__seh_longjmp_unwind() {
load_dll_msvcrt();
if (!_imp___seh_longjmp_unwind) {
_imp___seh_longjmp_unwind = (void *) _elf_GetProcAddress(_dll_msvcrt, "_seh_longjmp_unwind");
}
asm("leave\njmp *%0" : : "r"(_imp___seh_longjmp_unwind));
}

void _elf__set_SSE2_enable() asm("set_SSE2_enable");
void *_imp___set_SSE2_enable = NULL;
void _elf__set_SSE2_enable() {
load_dll_msvcrt();
if (!_imp___set_SSE2_enable) {
_imp___set_SSE2_enable = (void *) _elf_GetProcAddress(_dll_msvcrt, "_set_SSE2_enable");
}
asm("leave\njmp *%0" : : "r"(_imp___set_SSE2_enable));
}

void _elf__set_error_mode() asm("set_error_mode");
void *_imp___set_error_mode = NULL;
void _elf__set_error_mode() {
load_dll_msvcrt();
if (!_imp___set_error_mode) {
_imp___set_error_mode = (void *) _elf_GetProcAddress(_dll_msvcrt, "_set_error_mode");
}
asm("leave\njmp *%0" : : "r"(_imp___set_error_mode));
}

void _elf__set_sbh_threshold() asm("set_sbh_threshold");
void *_imp___set_sbh_threshold = NULL;
void _elf__set_sbh_threshold() {
load_dll_msvcrt();
if (!_imp___set_sbh_threshold) {
_imp___set_sbh_threshold = (void *) _elf_GetProcAddress(_dll_msvcrt, "_set_sbh_threshold");
}
asm("leave\njmp *%0" : : "r"(_imp___set_sbh_threshold));
}

void _elf__seterrormode() asm("seterrormode");
void *_imp___seterrormode = NULL;
void _elf__seterrormode() {
load_dll_msvcrt();
if (!_imp___seterrormode) {
_imp___seterrormode = (void *) _elf_GetProcAddress(_dll_msvcrt, "_seterrormode");
}
asm("leave\njmp *%0" : : "r"(_imp___seterrormode));
}

void _elf__setjmp() asm("setjmp");
void *_imp___setjmp = NULL;
void _elf__setjmp() {
load_dll_msvcrt();
if (!_imp___setjmp) {
_imp___setjmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_setjmp");
}
asm("leave\njmp *%0" : : "r"(_imp___setjmp));
}

void _elf__setjmp3() asm("setjmp3");
void *_imp___setjmp3 = NULL;
void _elf__setjmp3() {
load_dll_msvcrt();
if (!_imp___setjmp3) {
_imp___setjmp3 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_setjmp3");
}
asm("leave\njmp *%0" : : "r"(_imp___setjmp3));
}

void _elf__setmaxstdio() asm("setmaxstdio");
void *_imp___setmaxstdio = NULL;
void _elf__setmaxstdio() {
load_dll_msvcrt();
if (!_imp___setmaxstdio) {
_imp___setmaxstdio = (void *) _elf_GetProcAddress(_dll_msvcrt, "_setmaxstdio");
}
asm("leave\njmp *%0" : : "r"(_imp___setmaxstdio));
}

void _elf__setmbcp() asm("setmbcp");
void *_imp___setmbcp = NULL;
void _elf__setmbcp() {
load_dll_msvcrt();
if (!_imp___setmbcp) {
_imp___setmbcp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_setmbcp");
}
asm("leave\njmp *%0" : : "r"(_imp___setmbcp));
}

void _elf__setmode() asm("setmode");
void *_imp___setmode = NULL;
void _elf__setmode() {
load_dll_msvcrt();
if (!_imp___setmode) {
_imp___setmode = (void *) _elf_GetProcAddress(_dll_msvcrt, "_setmode");
}
asm("leave\njmp *%0" : : "r"(_imp___setmode));
}

void _elf__setsystime() asm("setsystime");
void *_imp___setsystime = NULL;
void _elf__setsystime() {
load_dll_msvcrt();
if (!_imp___setsystime) {
_imp___setsystime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_setsystime");
}
asm("leave\njmp *%0" : : "r"(_imp___setsystime));
}

void _elf__sleep() asm("sleep");
void *_imp___sleep = NULL;
void _elf__sleep() {
load_dll_msvcrt();
if (!_imp___sleep) {
_imp___sleep = (void *) _elf_GetProcAddress(_dll_msvcrt, "_sleep");
}
asm("leave\njmp *%0" : : "r"(_imp___sleep));
}

void _elf__snprintf() asm("snprintf");
void *_imp___snprintf = NULL;
void _elf__snprintf() {
load_dll_msvcrt();
if (!_imp___snprintf) {
_imp___snprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_snprintf");
}
asm("leave\njmp *%0" : : "r"(_imp___snprintf));
}

void _elf__snscanf() asm("snscanf");
void *_imp___snscanf = NULL;
void _elf__snscanf() {
load_dll_msvcrt();
if (!_imp___snscanf) {
_imp___snscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_snscanf");
}
asm("leave\njmp *%0" : : "r"(_imp___snscanf));
}

void _elf__snwprintf() asm("snwprintf");
void *_imp___snwprintf = NULL;
void _elf__snwprintf() {
load_dll_msvcrt();
if (!_imp___snwprintf) {
_imp___snwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_snwprintf");
}
asm("leave\njmp *%0" : : "r"(_imp___snwprintf));
}

void _elf__snwscanf() asm("snwscanf");
void *_imp___snwscanf = NULL;
void _elf__snwscanf() {
load_dll_msvcrt();
if (!_imp___snwscanf) {
_imp___snwscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_snwscanf");
}
asm("leave\njmp *%0" : : "r"(_imp___snwscanf));
}

void _elf__sopen() asm("sopen");
void *_imp___sopen = NULL;
void _elf__sopen() {
load_dll_msvcrt();
if (!_imp___sopen) {
_imp___sopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_sopen");
}
asm("leave\njmp *%0" : : "r"(_imp___sopen));
}

void _elf__spawnl() asm("spawnl");
void *_imp___spawnl = NULL;
void _elf__spawnl() {
load_dll_msvcrt();
if (!_imp___spawnl) {
_imp___spawnl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnl");
}
asm("leave\njmp *%0" : : "r"(_imp___spawnl));
}

void _elf__spawnle() asm("spawnle");
void *_imp___spawnle = NULL;
void _elf__spawnle() {
load_dll_msvcrt();
if (!_imp___spawnle) {
_imp___spawnle = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnle");
}
asm("leave\njmp *%0" : : "r"(_imp___spawnle));
}

void _elf__spawnlp() asm("spawnlp");
void *_imp___spawnlp = NULL;
void _elf__spawnlp() {
load_dll_msvcrt();
if (!_imp___spawnlp) {
_imp___spawnlp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnlp");
}
asm("leave\njmp *%0" : : "r"(_imp___spawnlp));
}

void _elf__spawnlpe() asm("spawnlpe");
void *_imp___spawnlpe = NULL;
void _elf__spawnlpe() {
load_dll_msvcrt();
if (!_imp___spawnlpe) {
_imp___spawnlpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnlpe");
}
asm("leave\njmp *%0" : : "r"(_imp___spawnlpe));
}

void _elf__spawnv() asm("spawnv");
void *_imp___spawnv = NULL;
void _elf__spawnv() {
load_dll_msvcrt();
if (!_imp___spawnv) {
_imp___spawnv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnv");
}
asm("leave\njmp *%0" : : "r"(_imp___spawnv));
}

void _elf__spawnve() asm("spawnve");
void *_imp___spawnve = NULL;
void _elf__spawnve() {
load_dll_msvcrt();
if (!_imp___spawnve) {
_imp___spawnve = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnve");
}
asm("leave\njmp *%0" : : "r"(_imp___spawnve));
}

void _elf__spawnvp() asm("spawnvp");
void *_imp___spawnvp = NULL;
void _elf__spawnvp() {
load_dll_msvcrt();
if (!_imp___spawnvp) {
_imp___spawnvp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnvp");
}
asm("leave\njmp *%0" : : "r"(_imp___spawnvp));
}

void _elf__spawnvpe() asm("spawnvpe");
void *_imp___spawnvpe = NULL;
void _elf__spawnvpe() {
load_dll_msvcrt();
if (!_imp___spawnvpe) {
_imp___spawnvpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnvpe");
}
asm("leave\njmp *%0" : : "r"(_imp___spawnvpe));
}

void _elf__splitpath() asm("splitpath");
void *_imp___splitpath = NULL;
void _elf__splitpath() {
load_dll_msvcrt();
if (!_imp___splitpath) {
_imp___splitpath = (void *) _elf_GetProcAddress(_dll_msvcrt, "_splitpath");
}
asm("leave\njmp *%0" : : "r"(_imp___splitpath));
}

void _elf__stat() asm("stat");
void *_imp___stat = NULL;
void _elf__stat() {
load_dll_msvcrt();
if (!_imp___stat) {
_imp___stat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_stat");
}
asm("leave\njmp *%0" : : "r"(_imp___stat));
}

void _elf__stat64() asm("stat64");
void *_imp___stat64 = NULL;
void _elf__stat64() {
load_dll_msvcrt();
if (!_imp___stat64) {
_imp___stat64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_stat64");
}
asm("leave\njmp *%0" : : "r"(_imp___stat64));
}

void _elf__stati64() asm("stati64");
void *_imp___stati64 = NULL;
void _elf__stati64() {
load_dll_msvcrt();
if (!_imp___stati64) {
_imp___stati64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_stati64");
}
asm("leave\njmp *%0" : : "r"(_imp___stati64));
}

void _elf__statusfp() asm("statusfp");
void *_imp___statusfp = NULL;
void _elf__statusfp() {
load_dll_msvcrt();
if (!_imp___statusfp) {
_imp___statusfp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_statusfp");
}
asm("leave\njmp *%0" : : "r"(_imp___statusfp));
}

void _elf__strcmpi() asm("strcmpi");
void *_imp___strcmpi = NULL;
void _elf__strcmpi() {
load_dll_msvcrt();
if (!_imp___strcmpi) {
_imp___strcmpi = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strcmpi");
}
asm("leave\njmp *%0" : : "r"(_imp___strcmpi));
}

void _elf__strdate() asm("strdate");
void *_imp___strdate = NULL;
void _elf__strdate() {
load_dll_msvcrt();
if (!_imp___strdate) {
_imp___strdate = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strdate");
}
asm("leave\njmp *%0" : : "r"(_imp___strdate));
}

void _elf__strdup() asm("strdup");
void *_imp___strdup = NULL;
void _elf__strdup() {
load_dll_msvcrt();
if (!_imp___strdup) {
_imp___strdup = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strdup");
}
asm("leave\njmp *%0" : : "r"(_imp___strdup));
}

void _elf__stricmp() asm("stricmp");
void *_imp___stricmp = NULL;
void _elf__stricmp() {
load_dll_msvcrt();
if (!_imp___stricmp) {
_imp___stricmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_stricmp");
}
asm("leave\njmp *%0" : : "r"(_imp___stricmp));
}

void _elf__stricoll() asm("stricoll");
void *_imp___stricoll = NULL;
void _elf__stricoll() {
load_dll_msvcrt();
if (!_imp___stricoll) {
_imp___stricoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_stricoll");
}
asm("leave\njmp *%0" : : "r"(_imp___stricoll));
}

void _elf__strlwr() asm("strlwr");
void *_imp___strlwr = NULL;
void _elf__strlwr() {
load_dll_msvcrt();
if (!_imp___strlwr) {
_imp___strlwr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strlwr");
}
asm("leave\njmp *%0" : : "r"(_imp___strlwr));
}

void _elf__strncoll() asm("strncoll");
void *_imp___strncoll = NULL;
void _elf__strncoll() {
load_dll_msvcrt();
if (!_imp___strncoll) {
_imp___strncoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strncoll");
}
asm("leave\njmp *%0" : : "r"(_imp___strncoll));
}

void _elf__strnicmp() asm("strnicmp");
void *_imp___strnicmp = NULL;
void _elf__strnicmp() {
load_dll_msvcrt();
if (!_imp___strnicmp) {
_imp___strnicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strnicmp");
}
asm("leave\njmp *%0" : : "r"(_imp___strnicmp));
}

void _elf__strnicoll() asm("strnicoll");
void *_imp___strnicoll = NULL;
void _elf__strnicoll() {
load_dll_msvcrt();
if (!_imp___strnicoll) {
_imp___strnicoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strnicoll");
}
asm("leave\njmp *%0" : : "r"(_imp___strnicoll));
}

void _elf__strnset() asm("strnset");
void *_imp___strnset = NULL;
void _elf__strnset() {
load_dll_msvcrt();
if (!_imp___strnset) {
_imp___strnset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strnset");
}
asm("leave\njmp *%0" : : "r"(_imp___strnset));
}

void _elf__strrev() asm("strrev");
void *_imp___strrev = NULL;
void _elf__strrev() {
load_dll_msvcrt();
if (!_imp___strrev) {
_imp___strrev = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strrev");
}
asm("leave\njmp *%0" : : "r"(_imp___strrev));
}

void _elf__strset() asm("strset");
void *_imp___strset = NULL;
void _elf__strset() {
load_dll_msvcrt();
if (!_imp___strset) {
_imp___strset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strset");
}
asm("leave\njmp *%0" : : "r"(_imp___strset));
}

void _elf__strtime() asm("strtime");
void *_imp___strtime = NULL;
void _elf__strtime() {
load_dll_msvcrt();
if (!_imp___strtime) {
_imp___strtime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strtime");
}
asm("leave\njmp *%0" : : "r"(_imp___strtime));
}

void _elf__strtoi64() asm("strtoi64");
void *_imp___strtoi64 = NULL;
void _elf__strtoi64() {
load_dll_msvcrt();
if (!_imp___strtoi64) {
_imp___strtoi64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strtoi64");
}
asm("leave\njmp *%0" : : "r"(_imp___strtoi64));
}

void _elf__strtoui64() asm("strtoui64");
void *_imp___strtoui64 = NULL;
void _elf__strtoui64() {
load_dll_msvcrt();
if (!_imp___strtoui64) {
_imp___strtoui64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strtoui64");
}
asm("leave\njmp *%0" : : "r"(_imp___strtoui64));
}

void _elf__strupr() asm("strupr");
void *_imp___strupr = NULL;
void _elf__strupr() {
load_dll_msvcrt();
if (!_imp___strupr) {
_imp___strupr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strupr");
}
asm("leave\njmp *%0" : : "r"(_imp___strupr));
}

void _elf__swab() asm("swab");
void *_imp___swab = NULL;
void _elf__swab() {
load_dll_msvcrt();
if (!_imp___swab) {
_imp___swab = (void *) _elf_GetProcAddress(_dll_msvcrt, "_swab");
}
asm("leave\njmp *%0" : : "r"(_imp___swab));
}

void _elf__sys_errlist() asm("sys_errlist");
void *_imp___sys_errlist = NULL;
void _elf__sys_errlist() {
load_dll_msvcrt();
if (!_imp___sys_errlist) {
_imp___sys_errlist = (void *) _elf_GetProcAddress(_dll_msvcrt, "_sys_errlist");
}
asm("leave\njmp *%0" : : "r"(_imp___sys_errlist));
}

void _elf__sys_nerr() asm("sys_nerr");
void *_imp___sys_nerr = NULL;
void _elf__sys_nerr() {
load_dll_msvcrt();
if (!_imp___sys_nerr) {
_imp___sys_nerr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_sys_nerr");
}
asm("leave\njmp *%0" : : "r"(_imp___sys_nerr));
}

void _elf__tell() asm("tell");
void *_imp___tell = NULL;
void _elf__tell() {
load_dll_msvcrt();
if (!_imp___tell) {
_imp___tell = (void *) _elf_GetProcAddress(_dll_msvcrt, "_tell");
}
asm("leave\njmp *%0" : : "r"(_imp___tell));
}

void _elf__telli64() asm("telli64");
void *_imp___telli64 = NULL;
void _elf__telli64() {
load_dll_msvcrt();
if (!_imp___telli64) {
_imp___telli64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_telli64");
}
asm("leave\njmp *%0" : : "r"(_imp___telli64));
}

void _elf__tempnam() asm("tempnam");
void *_imp___tempnam = NULL;
void _elf__tempnam() {
load_dll_msvcrt();
if (!_imp___tempnam) {
_imp___tempnam = (void *) _elf_GetProcAddress(_dll_msvcrt, "_tempnam");
}
asm("leave\njmp *%0" : : "r"(_imp___tempnam));
}

void _elf__time64() asm("time64");
void *_imp___time64 = NULL;
void _elf__time64() {
load_dll_msvcrt();
if (!_imp___time64) {
_imp___time64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_time64");
}
asm("leave\njmp *%0" : : "r"(_imp___time64));
}

void _elf__timezone() asm("timezone");
void *_imp___timezone = NULL;
void _elf__timezone() {
load_dll_msvcrt();
if (!_imp___timezone) {
_imp___timezone = (void *) _elf_GetProcAddress(_dll_msvcrt, "_timezone");
}
asm("leave\njmp *%0" : : "r"(_imp___timezone));
}

void _elf__tzname() asm("tzname");
void *_imp___tzname = NULL;
void _elf__tzname() {
load_dll_msvcrt();
if (!_imp___tzname) {
_imp___tzname = (void *) _elf_GetProcAddress(_dll_msvcrt, "_tzname");
}
asm("leave\njmp *%0" : : "r"(_imp___tzname));
}

void _elf__tzset() asm("tzset");
void *_imp___tzset = NULL;
void _elf__tzset() {
load_dll_msvcrt();
if (!_imp___tzset) {
_imp___tzset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_tzset");
}
asm("leave\njmp *%0" : : "r"(_imp___tzset));
}

void _elf__ui64toa() asm("ui64toa");
void *_imp___ui64toa = NULL;
void _elf__ui64toa() {
load_dll_msvcrt();
if (!_imp___ui64toa) {
_imp___ui64toa = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ui64toa");
}
asm("leave\njmp *%0" : : "r"(_imp___ui64toa));
}

void _elf__ui64tow() asm("ui64tow");
void *_imp___ui64tow = NULL;
void _elf__ui64tow() {
load_dll_msvcrt();
if (!_imp___ui64tow) {
_imp___ui64tow = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ui64tow");
}
asm("leave\njmp *%0" : : "r"(_imp___ui64tow));
}

void _elf__ultoa() asm("ultoa");
void *_imp___ultoa = NULL;
void _elf__ultoa() {
load_dll_msvcrt();
if (!_imp___ultoa) {
_imp___ultoa = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ultoa");
}
asm("leave\njmp *%0" : : "r"(_imp___ultoa));
}

void _elf__ultow() asm("ultow");
void *_imp___ultow = NULL;
void _elf__ultow() {
load_dll_msvcrt();
if (!_imp___ultow) {
_imp___ultow = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ultow");
}
asm("leave\njmp *%0" : : "r"(_imp___ultow));
}

void _elf__umask() asm("umask");
void *_imp___umask = NULL;
void _elf__umask() {
load_dll_msvcrt();
if (!_imp___umask) {
_imp___umask = (void *) _elf_GetProcAddress(_dll_msvcrt, "_umask");
}
asm("leave\njmp *%0" : : "r"(_imp___umask));
}

void _elf__ungetch() asm("ungetch");
void *_imp___ungetch = NULL;
void _elf__ungetch() {
load_dll_msvcrt();
if (!_imp___ungetch) {
_imp___ungetch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ungetch");
}
asm("leave\njmp *%0" : : "r"(_imp___ungetch));
}

void _elf__ungetwch() asm("ungetwch");
void *_imp___ungetwch = NULL;
void _elf__ungetwch() {
load_dll_msvcrt();
if (!_imp___ungetwch) {
_imp___ungetwch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ungetwch");
}
asm("leave\njmp *%0" : : "r"(_imp___ungetwch));
}

void _elf__unlink() asm("unlink");
void *_imp___unlink = NULL;
void _elf__unlink() {
load_dll_msvcrt();
if (!_imp___unlink) {
_imp___unlink = (void *) _elf_GetProcAddress(_dll_msvcrt, "_unlink");
}
asm("leave\njmp *%0" : : "r"(_imp___unlink));
}

void _elf__unloaddll() asm("unloaddll");
void *_imp___unloaddll = NULL;
void _elf__unloaddll() {
load_dll_msvcrt();
if (!_imp___unloaddll) {
_imp___unloaddll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_unloaddll");
}
asm("leave\njmp *%0" : : "r"(_imp___unloaddll));
}

void _elf__unlock() asm("unlock");
void *_imp___unlock = NULL;
void _elf__unlock() {
load_dll_msvcrt();
if (!_imp___unlock) {
_imp___unlock = (void *) _elf_GetProcAddress(_dll_msvcrt, "_unlock");
}
asm("leave\njmp *%0" : : "r"(_imp___unlock));
}

void _elf__utime() asm("utime");
void *_imp___utime = NULL;
void _elf__utime() {
load_dll_msvcrt();
if (!_imp___utime) {
_imp___utime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_utime");
}
asm("leave\njmp *%0" : : "r"(_imp___utime));
}

void _elf__utime64() asm("utime64");
void *_imp___utime64 = NULL;
void _elf__utime64() {
load_dll_msvcrt();
if (!_imp___utime64) {
_imp___utime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_utime64");
}
asm("leave\njmp *%0" : : "r"(_imp___utime64));
}

void _elf__vscprintf() asm("vscprintf");
void *_imp___vscprintf = NULL;
void _elf__vscprintf() {
load_dll_msvcrt();
if (!_imp___vscprintf) {
_imp___vscprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_vscprintf");
}
asm("leave\njmp *%0" : : "r"(_imp___vscprintf));
}

void _elf__vscwprintf() asm("vscwprintf");
void *_imp___vscwprintf = NULL;
void _elf__vscwprintf() {
load_dll_msvcrt();
if (!_imp___vscwprintf) {
_imp___vscwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_vscwprintf");
}
asm("leave\njmp *%0" : : "r"(_imp___vscwprintf));
}

void _elf__vsnprintf() asm("vsnprintf");
void *_imp___vsnprintf = NULL;
void _elf__vsnprintf() {
load_dll_msvcrt();
if (!_imp___vsnprintf) {
_imp___vsnprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_vsnprintf");
}
asm("leave\njmp *%0" : : "r"(_imp___vsnprintf));
}

void _elf__vsnwprintf() asm("vsnwprintf");
void *_imp___vsnwprintf = NULL;
void _elf__vsnwprintf() {
load_dll_msvcrt();
if (!_imp___vsnwprintf) {
_imp___vsnwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_vsnwprintf");
}
asm("leave\njmp *%0" : : "r"(_imp___vsnwprintf));
}

void _elf__waccess() asm("waccess");
void *_imp___waccess = NULL;
void _elf__waccess() {
load_dll_msvcrt();
if (!_imp___waccess) {
_imp___waccess = (void *) _elf_GetProcAddress(_dll_msvcrt, "_waccess");
}
asm("leave\njmp *%0" : : "r"(_imp___waccess));
}

void _elf__wasctime() asm("wasctime");
void *_imp___wasctime = NULL;
void _elf__wasctime() {
load_dll_msvcrt();
if (!_imp___wasctime) {
_imp___wasctime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wasctime");
}
asm("leave\njmp *%0" : : "r"(_imp___wasctime));
}

void _elf__wchdir() asm("wchdir");
void *_imp___wchdir = NULL;
void _elf__wchdir() {
load_dll_msvcrt();
if (!_imp___wchdir) {
_imp___wchdir = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wchdir");
}
asm("leave\njmp *%0" : : "r"(_imp___wchdir));
}

void _elf__wchmod() asm("wchmod");
void *_imp___wchmod = NULL;
void _elf__wchmod() {
load_dll_msvcrt();
if (!_imp___wchmod) {
_imp___wchmod = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wchmod");
}
asm("leave\njmp *%0" : : "r"(_imp___wchmod));
}

void _elf__wcmdln() asm("wcmdln");
void *_imp___wcmdln = NULL;
void _elf__wcmdln() {
load_dll_msvcrt();
if (!_imp___wcmdln) {
_imp___wcmdln = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcmdln");
}
asm("leave\njmp *%0" : : "r"(_imp___wcmdln));
}

void _elf__wcreat() asm("wcreat");
void *_imp___wcreat = NULL;
void _elf__wcreat() {
load_dll_msvcrt();
if (!_imp___wcreat) {
_imp___wcreat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcreat");
}
asm("leave\njmp *%0" : : "r"(_imp___wcreat));
}

void _elf__wcsdup() asm("wcsdup");
void *_imp___wcsdup = NULL;
void _elf__wcsdup() {
load_dll_msvcrt();
if (!_imp___wcsdup) {
_imp___wcsdup = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsdup");
}
asm("leave\njmp *%0" : : "r"(_imp___wcsdup));
}

void _elf__wcserror() asm("wcserror");
void *_imp___wcserror = NULL;
void _elf__wcserror() {
load_dll_msvcrt();
if (!_imp___wcserror) {
_imp___wcserror = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcserror");
}
asm("leave\njmp *%0" : : "r"(_imp___wcserror));
}

void _elf__wcsicmp() asm("wcsicmp");
void *_imp___wcsicmp = NULL;
void _elf__wcsicmp() {
load_dll_msvcrt();
if (!_imp___wcsicmp) {
_imp___wcsicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsicmp");
}
asm("leave\njmp *%0" : : "r"(_imp___wcsicmp));
}

void _elf__wcsicoll() asm("wcsicoll");
void *_imp___wcsicoll = NULL;
void _elf__wcsicoll() {
load_dll_msvcrt();
if (!_imp___wcsicoll) {
_imp___wcsicoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsicoll");
}
asm("leave\njmp *%0" : : "r"(_imp___wcsicoll));
}

void _elf__wcslwr() asm("wcslwr");
void *_imp___wcslwr = NULL;
void _elf__wcslwr() {
load_dll_msvcrt();
if (!_imp___wcslwr) {
_imp___wcslwr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcslwr");
}
asm("leave\njmp *%0" : : "r"(_imp___wcslwr));
}

void _elf__wcsncoll() asm("wcsncoll");
void *_imp___wcsncoll = NULL;
void _elf__wcsncoll() {
load_dll_msvcrt();
if (!_imp___wcsncoll) {
_imp___wcsncoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsncoll");
}
asm("leave\njmp *%0" : : "r"(_imp___wcsncoll));
}

void _elf__wcsnicmp() asm("wcsnicmp");
void *_imp___wcsnicmp = NULL;
void _elf__wcsnicmp() {
load_dll_msvcrt();
if (!_imp___wcsnicmp) {
_imp___wcsnicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsnicmp");
}
asm("leave\njmp *%0" : : "r"(_imp___wcsnicmp));
}

void _elf__wcsnicoll() asm("wcsnicoll");
void *_imp___wcsnicoll = NULL;
void _elf__wcsnicoll() {
load_dll_msvcrt();
if (!_imp___wcsnicoll) {
_imp___wcsnicoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsnicoll");
}
asm("leave\njmp *%0" : : "r"(_imp___wcsnicoll));
}

void _elf__wcsnset() asm("wcsnset");
void *_imp___wcsnset = NULL;
void _elf__wcsnset() {
load_dll_msvcrt();
if (!_imp___wcsnset) {
_imp___wcsnset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsnset");
}
asm("leave\njmp *%0" : : "r"(_imp___wcsnset));
}

void _elf__wcsrev() asm("wcsrev");
void *_imp___wcsrev = NULL;
void _elf__wcsrev() {
load_dll_msvcrt();
if (!_imp___wcsrev) {
_imp___wcsrev = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsrev");
}
asm("leave\njmp *%0" : : "r"(_imp___wcsrev));
}

void _elf__wcsset() asm("wcsset");
void *_imp___wcsset = NULL;
void _elf__wcsset() {
load_dll_msvcrt();
if (!_imp___wcsset) {
_imp___wcsset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsset");
}
asm("leave\njmp *%0" : : "r"(_imp___wcsset));
}

void _elf__wcstoi64() asm("wcstoi64");
void *_imp___wcstoi64 = NULL;
void _elf__wcstoi64() {
load_dll_msvcrt();
if (!_imp___wcstoi64) {
_imp___wcstoi64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcstoi64");
}
asm("leave\njmp *%0" : : "r"(_imp___wcstoi64));
}

void _elf__wcstoui64() asm("wcstoui64");
void *_imp___wcstoui64 = NULL;
void _elf__wcstoui64() {
load_dll_msvcrt();
if (!_imp___wcstoui64) {
_imp___wcstoui64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcstoui64");
}
asm("leave\njmp *%0" : : "r"(_imp___wcstoui64));
}

void _elf__wcsupr() asm("wcsupr");
void *_imp___wcsupr = NULL;
void _elf__wcsupr() {
load_dll_msvcrt();
if (!_imp___wcsupr) {
_imp___wcsupr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsupr");
}
asm("leave\njmp *%0" : : "r"(_imp___wcsupr));
}

void _elf__wctime() asm("wctime");
void *_imp___wctime = NULL;
void _elf__wctime() {
load_dll_msvcrt();
if (!_imp___wctime) {
_imp___wctime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wctime");
}
asm("leave\njmp *%0" : : "r"(_imp___wctime));
}

void _elf__wctime64() asm("wctime64");
void *_imp___wctime64 = NULL;
void _elf__wctime64() {
load_dll_msvcrt();
if (!_imp___wctime64) {
_imp___wctime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wctime64");
}
asm("leave\njmp *%0" : : "r"(_imp___wctime64));
}

void _elf__wenviron() asm("wenviron");
void *_imp___wenviron = NULL;
void _elf__wenviron() {
load_dll_msvcrt();
if (!_imp___wenviron) {
_imp___wenviron = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wenviron");
}
asm("leave\njmp *%0" : : "r"(_imp___wenviron));
}

void _elf__wexecl() asm("wexecl");
void *_imp___wexecl = NULL;
void _elf__wexecl() {
load_dll_msvcrt();
if (!_imp___wexecl) {
_imp___wexecl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexecl");
}
asm("leave\njmp *%0" : : "r"(_imp___wexecl));
}

void _elf__wexecle() asm("wexecle");
void *_imp___wexecle = NULL;
void _elf__wexecle() {
load_dll_msvcrt();
if (!_imp___wexecle) {
_imp___wexecle = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexecle");
}
asm("leave\njmp *%0" : : "r"(_imp___wexecle));
}

void _elf__wexeclp() asm("wexeclp");
void *_imp___wexeclp = NULL;
void _elf__wexeclp() {
load_dll_msvcrt();
if (!_imp___wexeclp) {
_imp___wexeclp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexeclp");
}
asm("leave\njmp *%0" : : "r"(_imp___wexeclp));
}

void _elf__wexeclpe() asm("wexeclpe");
void *_imp___wexeclpe = NULL;
void _elf__wexeclpe() {
load_dll_msvcrt();
if (!_imp___wexeclpe) {
_imp___wexeclpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexeclpe");
}
asm("leave\njmp *%0" : : "r"(_imp___wexeclpe));
}

void _elf__wexecv() asm("wexecv");
void *_imp___wexecv = NULL;
void _elf__wexecv() {
load_dll_msvcrt();
if (!_imp___wexecv) {
_imp___wexecv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexecv");
}
asm("leave\njmp *%0" : : "r"(_imp___wexecv));
}

void _elf__wexecve() asm("wexecve");
void *_imp___wexecve = NULL;
void _elf__wexecve() {
load_dll_msvcrt();
if (!_imp___wexecve) {
_imp___wexecve = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexecve");
}
asm("leave\njmp *%0" : : "r"(_imp___wexecve));
}

void _elf__wexecvp() asm("wexecvp");
void *_imp___wexecvp = NULL;
void _elf__wexecvp() {
load_dll_msvcrt();
if (!_imp___wexecvp) {
_imp___wexecvp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexecvp");
}
asm("leave\njmp *%0" : : "r"(_imp___wexecvp));
}

void _elf__wexecvpe() asm("wexecvpe");
void *_imp___wexecvpe = NULL;
void _elf__wexecvpe() {
load_dll_msvcrt();
if (!_imp___wexecvpe) {
_imp___wexecvpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexecvpe");
}
asm("leave\njmp *%0" : : "r"(_imp___wexecvpe));
}

void _elf__wfdopen() asm("wfdopen");
void *_imp___wfdopen = NULL;
void _elf__wfdopen() {
load_dll_msvcrt();
if (!_imp___wfdopen) {
_imp___wfdopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfdopen");
}
asm("leave\njmp *%0" : : "r"(_imp___wfdopen));
}

void _elf__wfindfirst() asm("wfindfirst");
void *_imp___wfindfirst = NULL;
void _elf__wfindfirst() {
load_dll_msvcrt();
if (!_imp___wfindfirst) {
_imp___wfindfirst = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfindfirst");
}
asm("leave\njmp *%0" : : "r"(_imp___wfindfirst));
}

void _elf__wfindfirst64() asm("wfindfirst64");
void *_imp___wfindfirst64 = NULL;
void _elf__wfindfirst64() {
load_dll_msvcrt();
if (!_imp___wfindfirst64) {
_imp___wfindfirst64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfindfirst64");
}
asm("leave\njmp *%0" : : "r"(_imp___wfindfirst64));
}

void _elf__wfindfirsti64() asm("wfindfirsti64");
void *_imp___wfindfirsti64 = NULL;
void _elf__wfindfirsti64() {
load_dll_msvcrt();
if (!_imp___wfindfirsti64) {
_imp___wfindfirsti64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfindfirsti64");
}
asm("leave\njmp *%0" : : "r"(_imp___wfindfirsti64));
}

void _elf__wfindnext() asm("wfindnext");
void *_imp___wfindnext = NULL;
void _elf__wfindnext() {
load_dll_msvcrt();
if (!_imp___wfindnext) {
_imp___wfindnext = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfindnext");
}
asm("leave\njmp *%0" : : "r"(_imp___wfindnext));
}

void _elf__wfindnext64() asm("wfindnext64");
void *_imp___wfindnext64 = NULL;
void _elf__wfindnext64() {
load_dll_msvcrt();
if (!_imp___wfindnext64) {
_imp___wfindnext64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfindnext64");
}
asm("leave\njmp *%0" : : "r"(_imp___wfindnext64));
}

void _elf__wfindnexti64() asm("wfindnexti64");
void *_imp___wfindnexti64 = NULL;
void _elf__wfindnexti64() {
load_dll_msvcrt();
if (!_imp___wfindnexti64) {
_imp___wfindnexti64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfindnexti64");
}
asm("leave\njmp *%0" : : "r"(_imp___wfindnexti64));
}

void _elf__wfopen() asm("wfopen");
void *_imp___wfopen = NULL;
void _elf__wfopen() {
load_dll_msvcrt();
if (!_imp___wfopen) {
_imp___wfopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfopen");
}
asm("leave\njmp *%0" : : "r"(_imp___wfopen));
}

void _elf__wfreopen() asm("wfreopen");
void *_imp___wfreopen = NULL;
void _elf__wfreopen() {
load_dll_msvcrt();
if (!_imp___wfreopen) {
_imp___wfreopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfreopen");
}
asm("leave\njmp *%0" : : "r"(_imp___wfreopen));
}

void _elf__wfsopen() asm("wfsopen");
void *_imp___wfsopen = NULL;
void _elf__wfsopen() {
load_dll_msvcrt();
if (!_imp___wfsopen) {
_imp___wfsopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfsopen");
}
asm("leave\njmp *%0" : : "r"(_imp___wfsopen));
}

void _elf__wfullpath() asm("wfullpath");
void *_imp___wfullpath = NULL;
void _elf__wfullpath() {
load_dll_msvcrt();
if (!_imp___wfullpath) {
_imp___wfullpath = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfullpath");
}
asm("leave\njmp *%0" : : "r"(_imp___wfullpath));
}

void _elf__wgetcwd() asm("wgetcwd");
void *_imp___wgetcwd = NULL;
void _elf__wgetcwd() {
load_dll_msvcrt();
if (!_imp___wgetcwd) {
_imp___wgetcwd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wgetcwd");
}
asm("leave\njmp *%0" : : "r"(_imp___wgetcwd));
}

void _elf__wgetdcwd() asm("wgetdcwd");
void *_imp___wgetdcwd = NULL;
void _elf__wgetdcwd() {
load_dll_msvcrt();
if (!_imp___wgetdcwd) {
_imp___wgetdcwd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wgetdcwd");
}
asm("leave\njmp *%0" : : "r"(_imp___wgetdcwd));
}

void _elf__wgetenv() asm("wgetenv");
void *_imp___wgetenv = NULL;
void _elf__wgetenv() {
load_dll_msvcrt();
if (!_imp___wgetenv) {
_imp___wgetenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wgetenv");
}
asm("leave\njmp *%0" : : "r"(_imp___wgetenv));
}

void _elf__winmajor() asm("winmajor");
void *_imp___winmajor = NULL;
void _elf__winmajor() {
load_dll_msvcrt();
if (!_imp___winmajor) {
_imp___winmajor = (void *) _elf_GetProcAddress(_dll_msvcrt, "_winmajor");
}
asm("leave\njmp *%0" : : "r"(_imp___winmajor));
}

void _elf__winminor() asm("winminor");
void *_imp___winminor = NULL;
void _elf__winminor() {
load_dll_msvcrt();
if (!_imp___winminor) {
_imp___winminor = (void *) _elf_GetProcAddress(_dll_msvcrt, "_winminor");
}
asm("leave\njmp *%0" : : "r"(_imp___winminor));
}

void _elf__winver() asm("winver");
void *_imp___winver = NULL;
void _elf__winver() {
load_dll_msvcrt();
if (!_imp___winver) {
_imp___winver = (void *) _elf_GetProcAddress(_dll_msvcrt, "_winver");
}
asm("leave\njmp *%0" : : "r"(_imp___winver));
}

void _elf__wmakepath() asm("wmakepath");
void *_imp___wmakepath = NULL;
void _elf__wmakepath() {
load_dll_msvcrt();
if (!_imp___wmakepath) {
_imp___wmakepath = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wmakepath");
}
asm("leave\njmp *%0" : : "r"(_imp___wmakepath));
}

void _elf__wmkdir() asm("wmkdir");
void *_imp___wmkdir = NULL;
void _elf__wmkdir() {
load_dll_msvcrt();
if (!_imp___wmkdir) {
_imp___wmkdir = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wmkdir");
}
asm("leave\njmp *%0" : : "r"(_imp___wmkdir));
}

void _elf__wmktemp() asm("wmktemp");
void *_imp___wmktemp = NULL;
void _elf__wmktemp() {
load_dll_msvcrt();
if (!_imp___wmktemp) {
_imp___wmktemp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wmktemp");
}
asm("leave\njmp *%0" : : "r"(_imp___wmktemp));
}

void _elf__wopen() asm("wopen");
void *_imp___wopen = NULL;
void _elf__wopen() {
load_dll_msvcrt();
if (!_imp___wopen) {
_imp___wopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wopen");
}
asm("leave\njmp *%0" : : "r"(_imp___wopen));
}

void _elf__wperror() asm("wperror");
void *_imp___wperror = NULL;
void _elf__wperror() {
load_dll_msvcrt();
if (!_imp___wperror) {
_imp___wperror = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wperror");
}
asm("leave\njmp *%0" : : "r"(_imp___wperror));
}

void _elf__wpgmptr() asm("wpgmptr");
void *_imp___wpgmptr = NULL;
void _elf__wpgmptr() {
load_dll_msvcrt();
if (!_imp___wpgmptr) {
_imp___wpgmptr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wpgmptr");
}
asm("leave\njmp *%0" : : "r"(_imp___wpgmptr));
}

void _elf__wpopen() asm("wpopen");
void *_imp___wpopen = NULL;
void _elf__wpopen() {
load_dll_msvcrt();
if (!_imp___wpopen) {
_imp___wpopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wpopen");
}
asm("leave\njmp *%0" : : "r"(_imp___wpopen));
}

void _elf__wputenv() asm("wputenv");
void *_imp___wputenv = NULL;
void _elf__wputenv() {
load_dll_msvcrt();
if (!_imp___wputenv) {
_imp___wputenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wputenv");
}
asm("leave\njmp *%0" : : "r"(_imp___wputenv));
}

void _elf__wremove() asm("wremove");
void *_imp___wremove = NULL;
void _elf__wremove() {
load_dll_msvcrt();
if (!_imp___wremove) {
_imp___wremove = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wremove");
}
asm("leave\njmp *%0" : : "r"(_imp___wremove));
}

void _elf__wrename() asm("wrename");
void *_imp___wrename = NULL;
void _elf__wrename() {
load_dll_msvcrt();
if (!_imp___wrename) {
_imp___wrename = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wrename");
}
asm("leave\njmp *%0" : : "r"(_imp___wrename));
}

void _elf__write() asm("write");
void *_imp___write = NULL;
void _elf__write() {
load_dll_msvcrt();
if (!_imp___write) {
_imp___write = (void *) _elf_GetProcAddress(_dll_msvcrt, "_write");
}
asm("leave\njmp *%0" : : "r"(_imp___write));
}

void _elf__wrmdir() asm("wrmdir");
void *_imp___wrmdir = NULL;
void _elf__wrmdir() {
load_dll_msvcrt();
if (!_imp___wrmdir) {
_imp___wrmdir = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wrmdir");
}
asm("leave\njmp *%0" : : "r"(_imp___wrmdir));
}

void _elf__wsearchenv() asm("wsearchenv");
void *_imp___wsearchenv = NULL;
void _elf__wsearchenv() {
load_dll_msvcrt();
if (!_imp___wsearchenv) {
_imp___wsearchenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wsearchenv");
}
asm("leave\njmp *%0" : : "r"(_imp___wsearchenv));
}

void _elf__wsetlocale() asm("wsetlocale");
void *_imp___wsetlocale = NULL;
void _elf__wsetlocale() {
load_dll_msvcrt();
if (!_imp___wsetlocale) {
_imp___wsetlocale = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wsetlocale");
}
asm("leave\njmp *%0" : : "r"(_imp___wsetlocale));
}

void _elf__wsopen() asm("wsopen");
void *_imp___wsopen = NULL;
void _elf__wsopen() {
load_dll_msvcrt();
if (!_imp___wsopen) {
_imp___wsopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wsopen");
}
asm("leave\njmp *%0" : : "r"(_imp___wsopen));
}

void _elf__wspawnl() asm("wspawnl");
void *_imp___wspawnl = NULL;
void _elf__wspawnl() {
load_dll_msvcrt();
if (!_imp___wspawnl) {
_imp___wspawnl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnl");
}
asm("leave\njmp *%0" : : "r"(_imp___wspawnl));
}

void _elf__wspawnle() asm("wspawnle");
void *_imp___wspawnle = NULL;
void _elf__wspawnle() {
load_dll_msvcrt();
if (!_imp___wspawnle) {
_imp___wspawnle = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnle");
}
asm("leave\njmp *%0" : : "r"(_imp___wspawnle));
}

void _elf__wspawnlp() asm("wspawnlp");
void *_imp___wspawnlp = NULL;
void _elf__wspawnlp() {
load_dll_msvcrt();
if (!_imp___wspawnlp) {
_imp___wspawnlp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnlp");
}
asm("leave\njmp *%0" : : "r"(_imp___wspawnlp));
}

void _elf__wspawnlpe() asm("wspawnlpe");
void *_imp___wspawnlpe = NULL;
void _elf__wspawnlpe() {
load_dll_msvcrt();
if (!_imp___wspawnlpe) {
_imp___wspawnlpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnlpe");
}
asm("leave\njmp *%0" : : "r"(_imp___wspawnlpe));
}

void _elf__wspawnv() asm("wspawnv");
void *_imp___wspawnv = NULL;
void _elf__wspawnv() {
load_dll_msvcrt();
if (!_imp___wspawnv) {
_imp___wspawnv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnv");
}
asm("leave\njmp *%0" : : "r"(_imp___wspawnv));
}

void _elf__wspawnve() asm("wspawnve");
void *_imp___wspawnve = NULL;
void _elf__wspawnve() {
load_dll_msvcrt();
if (!_imp___wspawnve) {
_imp___wspawnve = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnve");
}
asm("leave\njmp *%0" : : "r"(_imp___wspawnve));
}

void _elf__wspawnvp() asm("wspawnvp");
void *_imp___wspawnvp = NULL;
void _elf__wspawnvp() {
load_dll_msvcrt();
if (!_imp___wspawnvp) {
_imp___wspawnvp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnvp");
}
asm("leave\njmp *%0" : : "r"(_imp___wspawnvp));
}

void _elf__wspawnvpe() asm("wspawnvpe");
void *_imp___wspawnvpe = NULL;
void _elf__wspawnvpe() {
load_dll_msvcrt();
if (!_imp___wspawnvpe) {
_imp___wspawnvpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnvpe");
}
asm("leave\njmp *%0" : : "r"(_imp___wspawnvpe));
}

void _elf__wsplitpath() asm("wsplitpath");
void *_imp___wsplitpath = NULL;
void _elf__wsplitpath() {
load_dll_msvcrt();
if (!_imp___wsplitpath) {
_imp___wsplitpath = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wsplitpath");
}
asm("leave\njmp *%0" : : "r"(_imp___wsplitpath));
}

void _elf__wstat() asm("wstat");
void *_imp___wstat = NULL;
void _elf__wstat() {
load_dll_msvcrt();
if (!_imp___wstat) {
_imp___wstat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wstat");
}
asm("leave\njmp *%0" : : "r"(_imp___wstat));
}

void _elf__wstat64() asm("wstat64");
void *_imp___wstat64 = NULL;
void _elf__wstat64() {
load_dll_msvcrt();
if (!_imp___wstat64) {
_imp___wstat64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wstat64");
}
asm("leave\njmp *%0" : : "r"(_imp___wstat64));
}

void _elf__wstati64() asm("wstati64");
void *_imp___wstati64 = NULL;
void _elf__wstati64() {
load_dll_msvcrt();
if (!_imp___wstati64) {
_imp___wstati64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wstati64");
}
asm("leave\njmp *%0" : : "r"(_imp___wstati64));
}

void _elf__wstrdate() asm("wstrdate");
void *_imp___wstrdate = NULL;
void _elf__wstrdate() {
load_dll_msvcrt();
if (!_imp___wstrdate) {
_imp___wstrdate = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wstrdate");
}
asm("leave\njmp *%0" : : "r"(_imp___wstrdate));
}

void _elf__wstrtime() asm("wstrtime");
void *_imp___wstrtime = NULL;
void _elf__wstrtime() {
load_dll_msvcrt();
if (!_imp___wstrtime) {
_imp___wstrtime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wstrtime");
}
asm("leave\njmp *%0" : : "r"(_imp___wstrtime));
}

void _elf__wsystem() asm("wsystem");
void *_imp___wsystem = NULL;
void _elf__wsystem() {
load_dll_msvcrt();
if (!_imp___wsystem) {
_imp___wsystem = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wsystem");
}
asm("leave\njmp *%0" : : "r"(_imp___wsystem));
}

void _elf__wtempnam() asm("wtempnam");
void *_imp___wtempnam = NULL;
void _elf__wtempnam() {
load_dll_msvcrt();
if (!_imp___wtempnam) {
_imp___wtempnam = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wtempnam");
}
asm("leave\njmp *%0" : : "r"(_imp___wtempnam));
}

void _elf__wtmpnam() asm("wtmpnam");
void *_imp___wtmpnam = NULL;
void _elf__wtmpnam() {
load_dll_msvcrt();
if (!_imp___wtmpnam) {
_imp___wtmpnam = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wtmpnam");
}
asm("leave\njmp *%0" : : "r"(_imp___wtmpnam));
}

void _elf__wtof() asm("wtof");
void *_imp___wtof = NULL;
void _elf__wtof() {
load_dll_msvcrt();
if (!_imp___wtof) {
_imp___wtof = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wtof");
}
asm("leave\njmp *%0" : : "r"(_imp___wtof));
}

void _elf__wtoi() asm("wtoi");
void *_imp___wtoi = NULL;
void _elf__wtoi() {
load_dll_msvcrt();
if (!_imp___wtoi) {
_imp___wtoi = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wtoi");
}
asm("leave\njmp *%0" : : "r"(_imp___wtoi));
}

void _elf__wtoi64() asm("wtoi64");
void *_imp___wtoi64 = NULL;
void _elf__wtoi64() {
load_dll_msvcrt();
if (!_imp___wtoi64) {
_imp___wtoi64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wtoi64");
}
asm("leave\njmp *%0" : : "r"(_imp___wtoi64));
}

void _elf__wtol() asm("wtol");
void *_imp___wtol = NULL;
void _elf__wtol() {
load_dll_msvcrt();
if (!_imp___wtol) {
_imp___wtol = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wtol");
}
asm("leave\njmp *%0" : : "r"(_imp___wtol));
}

void _elf__wunlink() asm("wunlink");
void *_imp___wunlink = NULL;
void _elf__wunlink() {
load_dll_msvcrt();
if (!_imp___wunlink) {
_imp___wunlink = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wunlink");
}
asm("leave\njmp *%0" : : "r"(_imp___wunlink));
}

void _elf__wutime() asm("wutime");
void *_imp___wutime = NULL;
void _elf__wutime() {
load_dll_msvcrt();
if (!_imp___wutime) {
_imp___wutime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wutime");
}
asm("leave\njmp *%0" : : "r"(_imp___wutime));
}

void _elf__wutime64() asm("wutime64");
void *_imp___wutime64 = NULL;
void _elf__wutime64() {
load_dll_msvcrt();
if (!_imp___wutime64) {
_imp___wutime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wutime64");
}
asm("leave\njmp *%0" : : "r"(_imp___wutime64));
}

void _elf__y0() asm("y0");
void *_imp___y0 = NULL;
void _elf__y0() {
load_dll_msvcrt();
if (!_imp___y0) {
_imp___y0 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_y0");
}
asm("leave\njmp *%0" : : "r"(_imp___y0));
}

void _elf__y1() asm("y1");
void *_imp___y1 = NULL;
void _elf__y1() {
load_dll_msvcrt();
if (!_imp___y1) {
_imp___y1 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_y1");
}
asm("leave\njmp *%0" : : "r"(_imp___y1));
}

void _elf__yn() asm("yn");
void *_imp___yn = NULL;
void _elf__yn() {
load_dll_msvcrt();
if (!_imp___yn) {
_imp___yn = (void *) _elf_GetProcAddress(_dll_msvcrt, "_yn");
}
asm("leave\njmp *%0" : : "r"(_imp___yn));
}

void _elf_abort() asm("abort");
void *_imp__abort = NULL;
void _elf_abort() {
load_dll_msvcrt();
if (!_imp__abort) {
_imp__abort = (void *) _elf_GetProcAddress(_dll_msvcrt, "abort");
}
asm("leave\njmp *%0" : : "r"(_imp__abort));
}

void _elf_abs() asm("abs");
void *_imp__abs = NULL;
void _elf_abs() {
load_dll_msvcrt();
if (!_imp__abs) {
_imp__abs = (void *) _elf_GetProcAddress(_dll_msvcrt, "abs");
}
asm("leave\njmp *%0" : : "r"(_imp__abs));
}

void _elf_acos() asm("acos");
void *_imp__acos = NULL;
void _elf_acos() {
load_dll_msvcrt();
if (!_imp__acos) {
_imp__acos = (void *) _elf_GetProcAddress(_dll_msvcrt, "acos");
}
asm("leave\njmp *%0" : : "r"(_imp__acos));
}

void _elf_asctime() asm("asctime");
void *_imp__asctime = NULL;
void _elf_asctime() {
load_dll_msvcrt();
if (!_imp__asctime) {
_imp__asctime = (void *) _elf_GetProcAddress(_dll_msvcrt, "asctime");
}
asm("leave\njmp *%0" : : "r"(_imp__asctime));
}

void _elf_asin() asm("asin");
void *_imp__asin = NULL;
void _elf_asin() {
load_dll_msvcrt();
if (!_imp__asin) {
_imp__asin = (void *) _elf_GetProcAddress(_dll_msvcrt, "asin");
}
asm("leave\njmp *%0" : : "r"(_imp__asin));
}

void _elf_atan() asm("atan");
void *_imp__atan = NULL;
void _elf_atan() {
load_dll_msvcrt();
if (!_imp__atan) {
_imp__atan = (void *) _elf_GetProcAddress(_dll_msvcrt, "atan");
}
asm("leave\njmp *%0" : : "r"(_imp__atan));
}

void _elf_atan2() asm("atan2");
void *_imp__atan2 = NULL;
void _elf_atan2() {
load_dll_msvcrt();
if (!_imp__atan2) {
_imp__atan2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "atan2");
}
asm("leave\njmp *%0" : : "r"(_imp__atan2));
}

void _elf_atexit() asm("atexit");
void *_imp__atexit = NULL;
void _elf_atexit() {
load_dll_msvcrt();
if (!_imp__atexit) {
_imp__atexit = (void *) _elf_GetProcAddress(_dll_msvcrt, "atexit");
}
asm("leave\njmp *%0" : : "r"(_imp__atexit));
}

void _elf_atof() asm("atof");
void *_imp__atof = NULL;
void _elf_atof() {
load_dll_msvcrt();
if (!_imp__atof) {
_imp__atof = (void *) _elf_GetProcAddress(_dll_msvcrt, "atof");
}
asm("leave\njmp *%0" : : "r"(_imp__atof));
}

void _elf_atoi() asm("atoi");
void *_imp__atoi = NULL;
void _elf_atoi() {
load_dll_msvcrt();
if (!_imp__atoi) {
_imp__atoi = (void *) _elf_GetProcAddress(_dll_msvcrt, "atoi");
}
asm("leave\njmp *%0" : : "r"(_imp__atoi));
}

void _elf_atol() asm("atol");
void *_imp__atol = NULL;
void _elf_atol() {
load_dll_msvcrt();
if (!_imp__atol) {
_imp__atol = (void *) _elf_GetProcAddress(_dll_msvcrt, "atol");
}
asm("leave\njmp *%0" : : "r"(_imp__atol));
}

void _elf_bsearch() asm("bsearch");
void *_imp__bsearch = NULL;
void _elf_bsearch() {
load_dll_msvcrt();
if (!_imp__bsearch) {
_imp__bsearch = (void *) _elf_GetProcAddress(_dll_msvcrt, "bsearch");
}
asm("leave\njmp *%0" : : "r"(_imp__bsearch));
}

void _elf_calloc() asm("calloc");
void *_imp__calloc = NULL;
void _elf_calloc() {
load_dll_msvcrt();
if (!_imp__calloc) {
_imp__calloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "calloc");
}
asm("leave\njmp *%0" : : "r"(_imp__calloc));
}

void _elf_ceil() asm("ceil");
void *_imp__ceil = NULL;
void _elf_ceil() {
load_dll_msvcrt();
if (!_imp__ceil) {
_imp__ceil = (void *) _elf_GetProcAddress(_dll_msvcrt, "ceil");
}
asm("leave\njmp *%0" : : "r"(_imp__ceil));
}

void _elf_clearerr() asm("clearerr");
void *_imp__clearerr = NULL;
void _elf_clearerr() {
load_dll_msvcrt();
if (!_imp__clearerr) {
_imp__clearerr = (void *) _elf_GetProcAddress(_dll_msvcrt, "clearerr");
}
asm("leave\njmp *%0" : : "r"(_imp__clearerr));
}

void _elf_clock() asm("clock");
void *_imp__clock = NULL;
void _elf_clock() {
load_dll_msvcrt();
if (!_imp__clock) {
_imp__clock = (void *) _elf_GetProcAddress(_dll_msvcrt, "clock");
}
asm("leave\njmp *%0" : : "r"(_imp__clock));
}

void _elf_cos() asm("cos");
void *_imp__cos = NULL;
void _elf_cos() {
load_dll_msvcrt();
if (!_imp__cos) {
_imp__cos = (void *) _elf_GetProcAddress(_dll_msvcrt, "cos");
}
asm("leave\njmp *%0" : : "r"(_imp__cos));
}

void _elf_cosh() asm("cosh");
void *_imp__cosh = NULL;
void _elf_cosh() {
load_dll_msvcrt();
if (!_imp__cosh) {
_imp__cosh = (void *) _elf_GetProcAddress(_dll_msvcrt, "cosh");
}
asm("leave\njmp *%0" : : "r"(_imp__cosh));
}

void _elf_ctime() asm("ctime");
void *_imp__ctime = NULL;
void _elf_ctime() {
load_dll_msvcrt();
if (!_imp__ctime) {
_imp__ctime = (void *) _elf_GetProcAddress(_dll_msvcrt, "ctime");
}
asm("leave\njmp *%0" : : "r"(_imp__ctime));
}

void _elf_difftime() asm("difftime");
void *_imp__difftime = NULL;
void _elf_difftime() {
load_dll_msvcrt();
if (!_imp__difftime) {
_imp__difftime = (void *) _elf_GetProcAddress(_dll_msvcrt, "difftime");
}
asm("leave\njmp *%0" : : "r"(_imp__difftime));
}

void _elf_div() asm("div");
void *_imp__div = NULL;
void _elf_div() {
load_dll_msvcrt();
if (!_imp__div) {
_imp__div = (void *) _elf_GetProcAddress(_dll_msvcrt, "div");
}
asm("leave\njmp *%0" : : "r"(_imp__div));
}

void _elf_exit() asm("exit");
void *_imp__exit = NULL;
void _elf_exit() {
load_dll_msvcrt();
if (!_imp__exit) {
_imp__exit = (void *) _elf_GetProcAddress(_dll_msvcrt, "exit");
}
asm("leave\njmp *%0" : : "r"(_imp__exit));
}

void _elf_exp() asm("exp");
void *_imp__exp = NULL;
void _elf_exp() {
load_dll_msvcrt();
if (!_imp__exp) {
_imp__exp = (void *) _elf_GetProcAddress(_dll_msvcrt, "exp");
}
asm("leave\njmp *%0" : : "r"(_imp__exp));
}

void _elf_fabs() asm("fabs");
void *_imp__fabs = NULL;
void _elf_fabs() {
load_dll_msvcrt();
if (!_imp__fabs) {
_imp__fabs = (void *) _elf_GetProcAddress(_dll_msvcrt, "fabs");
}
asm("leave\njmp *%0" : : "r"(_imp__fabs));
}

void _elf_fclose() asm("fclose");
void *_imp__fclose = NULL;
void _elf_fclose() {
load_dll_msvcrt();
if (!_imp__fclose) {
_imp__fclose = (void *) _elf_GetProcAddress(_dll_msvcrt, "fclose");
}
asm("leave\njmp *%0" : : "r"(_imp__fclose));
}

void _elf_feof() asm("feof");
void *_imp__feof = NULL;
void _elf_feof() {
load_dll_msvcrt();
if (!_imp__feof) {
_imp__feof = (void *) _elf_GetProcAddress(_dll_msvcrt, "feof");
}
asm("leave\njmp *%0" : : "r"(_imp__feof));
}

void _elf_ferror() asm("ferror");
void *_imp__ferror = NULL;
void _elf_ferror() {
load_dll_msvcrt();
if (!_imp__ferror) {
_imp__ferror = (void *) _elf_GetProcAddress(_dll_msvcrt, "ferror");
}
asm("leave\njmp *%0" : : "r"(_imp__ferror));
}

void _elf_fflush() asm("fflush");
void *_imp__fflush = NULL;
void _elf_fflush() {
load_dll_msvcrt();
if (!_imp__fflush) {
_imp__fflush = (void *) _elf_GetProcAddress(_dll_msvcrt, "fflush");
}
asm("leave\njmp *%0" : : "r"(_imp__fflush));
}

void _elf_fgetc() asm("fgetc");
void *_imp__fgetc = NULL;
void _elf_fgetc() {
load_dll_msvcrt();
if (!_imp__fgetc) {
_imp__fgetc = (void *) _elf_GetProcAddress(_dll_msvcrt, "fgetc");
}
asm("leave\njmp *%0" : : "r"(_imp__fgetc));
}

void _elf_fgetpos() asm("fgetpos");
void *_imp__fgetpos = NULL;
void _elf_fgetpos() {
load_dll_msvcrt();
if (!_imp__fgetpos) {
_imp__fgetpos = (void *) _elf_GetProcAddress(_dll_msvcrt, "fgetpos");
}
asm("leave\njmp *%0" : : "r"(_imp__fgetpos));
}

void _elf_fgets() asm("fgets");
void *_imp__fgets = NULL;
void _elf_fgets() {
load_dll_msvcrt();
if (!_imp__fgets) {
_imp__fgets = (void *) _elf_GetProcAddress(_dll_msvcrt, "fgets");
}
asm("leave\njmp *%0" : : "r"(_imp__fgets));
}

void _elf_fgetwc() asm("fgetwc");
void *_imp__fgetwc = NULL;
void _elf_fgetwc() {
load_dll_msvcrt();
if (!_imp__fgetwc) {
_imp__fgetwc = (void *) _elf_GetProcAddress(_dll_msvcrt, "fgetwc");
}
asm("leave\njmp *%0" : : "r"(_imp__fgetwc));
}

void _elf_fgetws() asm("fgetws");
void *_imp__fgetws = NULL;
void _elf_fgetws() {
load_dll_msvcrt();
if (!_imp__fgetws) {
_imp__fgetws = (void *) _elf_GetProcAddress(_dll_msvcrt, "fgetws");
}
asm("leave\njmp *%0" : : "r"(_imp__fgetws));
}

void _elf_floor() asm("floor");
void *_imp__floor = NULL;
void _elf_floor() {
load_dll_msvcrt();
if (!_imp__floor) {
_imp__floor = (void *) _elf_GetProcAddress(_dll_msvcrt, "floor");
}
asm("leave\njmp *%0" : : "r"(_imp__floor));
}

void _elf_fmod() asm("fmod");
void *_imp__fmod = NULL;
void _elf_fmod() {
load_dll_msvcrt();
if (!_imp__fmod) {
_imp__fmod = (void *) _elf_GetProcAddress(_dll_msvcrt, "fmod");
}
asm("leave\njmp *%0" : : "r"(_imp__fmod));
}

void _elf_fopen() asm("fopen");
void *_imp__fopen = NULL;
void _elf_fopen() {
load_dll_msvcrt();
if (!_imp__fopen) {
_imp__fopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "fopen");
}
asm("leave\njmp *%0" : : "r"(_imp__fopen));
}

void _elf_fprintf() asm("fprintf");
void *_imp__fprintf = NULL;
void _elf_fprintf() {
load_dll_msvcrt();
if (!_imp__fprintf) {
_imp__fprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "fprintf");
}
asm("leave\njmp *%0" : : "r"(_imp__fprintf));
}

void _elf_fputc() asm("fputc");
void *_imp__fputc = NULL;
void _elf_fputc() {
load_dll_msvcrt();
if (!_imp__fputc) {
_imp__fputc = (void *) _elf_GetProcAddress(_dll_msvcrt, "fputc");
}
asm("leave\njmp *%0" : : "r"(_imp__fputc));
}

void _elf_fputs() asm("fputs");
void *_imp__fputs = NULL;
void _elf_fputs() {
load_dll_msvcrt();
if (!_imp__fputs) {
_imp__fputs = (void *) _elf_GetProcAddress(_dll_msvcrt, "fputs");
}
asm("leave\njmp *%0" : : "r"(_imp__fputs));
}

void _elf_fputwc() asm("fputwc");
void *_imp__fputwc = NULL;
void _elf_fputwc() {
load_dll_msvcrt();
if (!_imp__fputwc) {
_imp__fputwc = (void *) _elf_GetProcAddress(_dll_msvcrt, "fputwc");
}
asm("leave\njmp *%0" : : "r"(_imp__fputwc));
}

void _elf_fputws() asm("fputws");
void *_imp__fputws = NULL;
void _elf_fputws() {
load_dll_msvcrt();
if (!_imp__fputws) {
_imp__fputws = (void *) _elf_GetProcAddress(_dll_msvcrt, "fputws");
}
asm("leave\njmp *%0" : : "r"(_imp__fputws));
}

void _elf_fread() asm("fread");
void *_imp__fread = NULL;
void _elf_fread() {
load_dll_msvcrt();
if (!_imp__fread) {
_imp__fread = (void *) _elf_GetProcAddress(_dll_msvcrt, "fread");
}
asm("leave\njmp *%0" : : "r"(_imp__fread));
}

void _elf_free() asm("free");
void *_imp__free = NULL;
void _elf_free() {
load_dll_msvcrt();
if (!_imp__free) {
_imp__free = (void *) _elf_GetProcAddress(_dll_msvcrt, "free");
}
asm("leave\njmp *%0" : : "r"(_imp__free));
}

void _elf_freopen() asm("freopen");
void *_imp__freopen = NULL;
void _elf_freopen() {
load_dll_msvcrt();
if (!_imp__freopen) {
_imp__freopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "freopen");
}
asm("leave\njmp *%0" : : "r"(_imp__freopen));
}

void _elf_frexp() asm("frexp");
void *_imp__frexp = NULL;
void _elf_frexp() {
load_dll_msvcrt();
if (!_imp__frexp) {
_imp__frexp = (void *) _elf_GetProcAddress(_dll_msvcrt, "frexp");
}
asm("leave\njmp *%0" : : "r"(_imp__frexp));
}

void _elf_fscanf() asm("fscanf");
void *_imp__fscanf = NULL;
void _elf_fscanf() {
load_dll_msvcrt();
if (!_imp__fscanf) {
_imp__fscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "fscanf");
}
asm("leave\njmp *%0" : : "r"(_imp__fscanf));
}

void _elf_fseek() asm("fseek");
void *_imp__fseek = NULL;
void _elf_fseek() {
load_dll_msvcrt();
if (!_imp__fseek) {
_imp__fseek = (void *) _elf_GetProcAddress(_dll_msvcrt, "fseek");
}
asm("leave\njmp *%0" : : "r"(_imp__fseek));
}

void _elf_fsetpos() asm("fsetpos");
void *_imp__fsetpos = NULL;
void _elf_fsetpos() {
load_dll_msvcrt();
if (!_imp__fsetpos) {
_imp__fsetpos = (void *) _elf_GetProcAddress(_dll_msvcrt, "fsetpos");
}
asm("leave\njmp *%0" : : "r"(_imp__fsetpos));
}

void _elf_ftell() asm("ftell");
void *_imp__ftell = NULL;
void _elf_ftell() {
load_dll_msvcrt();
if (!_imp__ftell) {
_imp__ftell = (void *) _elf_GetProcAddress(_dll_msvcrt, "ftell");
}
asm("leave\njmp *%0" : : "r"(_imp__ftell));
}

void _elf_fwprintf() asm("fwprintf");
void *_imp__fwprintf = NULL;
void _elf_fwprintf() {
load_dll_msvcrt();
if (!_imp__fwprintf) {
_imp__fwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "fwprintf");
}
asm("leave\njmp *%0" : : "r"(_imp__fwprintf));
}

void _elf_fwrite() asm("fwrite");
void *_imp__fwrite = NULL;
void _elf_fwrite() {
load_dll_msvcrt();
if (!_imp__fwrite) {
_imp__fwrite = (void *) _elf_GetProcAddress(_dll_msvcrt, "fwrite");
}
asm("leave\njmp *%0" : : "r"(_imp__fwrite));
}

void _elf_fwscanf() asm("fwscanf");
void *_imp__fwscanf = NULL;
void _elf_fwscanf() {
load_dll_msvcrt();
if (!_imp__fwscanf) {
_imp__fwscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "fwscanf");
}
asm("leave\njmp *%0" : : "r"(_imp__fwscanf));
}

void _elf_getc() asm("getc");
void *_imp__getc = NULL;
void _elf_getc() {
load_dll_msvcrt();
if (!_imp__getc) {
_imp__getc = (void *) _elf_GetProcAddress(_dll_msvcrt, "getc");
}
asm("leave\njmp *%0" : : "r"(_imp__getc));
}

void _elf_getchar() asm("getchar");
void *_imp__getchar = NULL;
void _elf_getchar() {
load_dll_msvcrt();
if (!_imp__getchar) {
_imp__getchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "getchar");
}
asm("leave\njmp *%0" : : "r"(_imp__getchar));
}

void _elf_getenv() asm("getenv");
void *_imp__getenv = NULL;
void _elf_getenv() {
load_dll_msvcrt();
if (!_imp__getenv) {
_imp__getenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "getenv");
}
asm("leave\njmp *%0" : : "r"(_imp__getenv));
}

void _elf_gets() asm("gets");
void *_imp__gets = NULL;
void _elf_gets() {
load_dll_msvcrt();
if (!_imp__gets) {
_imp__gets = (void *) _elf_GetProcAddress(_dll_msvcrt, "gets");
}
asm("leave\njmp *%0" : : "r"(_imp__gets));
}

void _elf_getwc() asm("getwc");
void *_imp__getwc = NULL;
void _elf_getwc() {
load_dll_msvcrt();
if (!_imp__getwc) {
_imp__getwc = (void *) _elf_GetProcAddress(_dll_msvcrt, "getwc");
}
asm("leave\njmp *%0" : : "r"(_imp__getwc));
}

void _elf_getwchar() asm("getwchar");
void *_imp__getwchar = NULL;
void _elf_getwchar() {
load_dll_msvcrt();
if (!_imp__getwchar) {
_imp__getwchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "getwchar");
}
asm("leave\njmp *%0" : : "r"(_imp__getwchar));
}

void _elf_gmtime() asm("gmtime");
void *_imp__gmtime = NULL;
void _elf_gmtime() {
load_dll_msvcrt();
if (!_imp__gmtime) {
_imp__gmtime = (void *) _elf_GetProcAddress(_dll_msvcrt, "gmtime");
}
asm("leave\njmp *%0" : : "r"(_imp__gmtime));
}

void _elf_is_wctype() asm("is_wctype");
void *_imp__is_wctype = NULL;
void _elf_is_wctype() {
load_dll_msvcrt();
if (!_imp__is_wctype) {
_imp__is_wctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "is_wctype");
}
asm("leave\njmp *%0" : : "r"(_imp__is_wctype));
}

void _elf_isalnum() asm("isalnum");
void *_imp__isalnum = NULL;
void _elf_isalnum() {
load_dll_msvcrt();
if (!_imp__isalnum) {
_imp__isalnum = (void *) _elf_GetProcAddress(_dll_msvcrt, "isalnum");
}
asm("leave\njmp *%0" : : "r"(_imp__isalnum));
}

void _elf_isalpha() asm("isalpha");
void *_imp__isalpha = NULL;
void _elf_isalpha() {
load_dll_msvcrt();
if (!_imp__isalpha) {
_imp__isalpha = (void *) _elf_GetProcAddress(_dll_msvcrt, "isalpha");
}
asm("leave\njmp *%0" : : "r"(_imp__isalpha));
}

void _elf_iscntrl() asm("iscntrl");
void *_imp__iscntrl = NULL;
void _elf_iscntrl() {
load_dll_msvcrt();
if (!_imp__iscntrl) {
_imp__iscntrl = (void *) _elf_GetProcAddress(_dll_msvcrt, "iscntrl");
}
asm("leave\njmp *%0" : : "r"(_imp__iscntrl));
}

void _elf_isdigit() asm("isdigit");
void *_imp__isdigit = NULL;
void _elf_isdigit() {
load_dll_msvcrt();
if (!_imp__isdigit) {
_imp__isdigit = (void *) _elf_GetProcAddress(_dll_msvcrt, "isdigit");
}
asm("leave\njmp *%0" : : "r"(_imp__isdigit));
}

void _elf_isgraph() asm("isgraph");
void *_imp__isgraph = NULL;
void _elf_isgraph() {
load_dll_msvcrt();
if (!_imp__isgraph) {
_imp__isgraph = (void *) _elf_GetProcAddress(_dll_msvcrt, "isgraph");
}
asm("leave\njmp *%0" : : "r"(_imp__isgraph));
}

void _elf_isleadbyte() asm("isleadbyte");
void *_imp__isleadbyte = NULL;
void _elf_isleadbyte() {
load_dll_msvcrt();
if (!_imp__isleadbyte) {
_imp__isleadbyte = (void *) _elf_GetProcAddress(_dll_msvcrt, "isleadbyte");
}
asm("leave\njmp *%0" : : "r"(_imp__isleadbyte));
}

void _elf_islower() asm("islower");
void *_imp__islower = NULL;
void _elf_islower() {
load_dll_msvcrt();
if (!_imp__islower) {
_imp__islower = (void *) _elf_GetProcAddress(_dll_msvcrt, "islower");
}
asm("leave\njmp *%0" : : "r"(_imp__islower));
}

void _elf_isprint() asm("isprint");
void *_imp__isprint = NULL;
void _elf_isprint() {
load_dll_msvcrt();
if (!_imp__isprint) {
_imp__isprint = (void *) _elf_GetProcAddress(_dll_msvcrt, "isprint");
}
asm("leave\njmp *%0" : : "r"(_imp__isprint));
}

void _elf_ispunct() asm("ispunct");
void *_imp__ispunct = NULL;
void _elf_ispunct() {
load_dll_msvcrt();
if (!_imp__ispunct) {
_imp__ispunct = (void *) _elf_GetProcAddress(_dll_msvcrt, "ispunct");
}
asm("leave\njmp *%0" : : "r"(_imp__ispunct));
}

void _elf_isspace() asm("isspace");
void *_imp__isspace = NULL;
void _elf_isspace() {
load_dll_msvcrt();
if (!_imp__isspace) {
_imp__isspace = (void *) _elf_GetProcAddress(_dll_msvcrt, "isspace");
}
asm("leave\njmp *%0" : : "r"(_imp__isspace));
}

void _elf_isupper() asm("isupper");
void *_imp__isupper = NULL;
void _elf_isupper() {
load_dll_msvcrt();
if (!_imp__isupper) {
_imp__isupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "isupper");
}
asm("leave\njmp *%0" : : "r"(_imp__isupper));
}

void _elf_iswalnum() asm("iswalnum");
void *_imp__iswalnum = NULL;
void _elf_iswalnum() {
load_dll_msvcrt();
if (!_imp__iswalnum) {
_imp__iswalnum = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswalnum");
}
asm("leave\njmp *%0" : : "r"(_imp__iswalnum));
}

void _elf_iswalpha() asm("iswalpha");
void *_imp__iswalpha = NULL;
void _elf_iswalpha() {
load_dll_msvcrt();
if (!_imp__iswalpha) {
_imp__iswalpha = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswalpha");
}
asm("leave\njmp *%0" : : "r"(_imp__iswalpha));
}

void _elf_iswascii() asm("iswascii");
void *_imp__iswascii = NULL;
void _elf_iswascii() {
load_dll_msvcrt();
if (!_imp__iswascii) {
_imp__iswascii = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswascii");
}
asm("leave\njmp *%0" : : "r"(_imp__iswascii));
}

void _elf_iswcntrl() asm("iswcntrl");
void *_imp__iswcntrl = NULL;
void _elf_iswcntrl() {
load_dll_msvcrt();
if (!_imp__iswcntrl) {
_imp__iswcntrl = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswcntrl");
}
asm("leave\njmp *%0" : : "r"(_imp__iswcntrl));
}

void _elf_iswctype() asm("iswctype");
void *_imp__iswctype = NULL;
void _elf_iswctype() {
load_dll_msvcrt();
if (!_imp__iswctype) {
_imp__iswctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswctype");
}
asm("leave\njmp *%0" : : "r"(_imp__iswctype));
}

void _elf_iswdigit() asm("iswdigit");
void *_imp__iswdigit = NULL;
void _elf_iswdigit() {
load_dll_msvcrt();
if (!_imp__iswdigit) {
_imp__iswdigit = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswdigit");
}
asm("leave\njmp *%0" : : "r"(_imp__iswdigit));
}

void _elf_iswgraph() asm("iswgraph");
void *_imp__iswgraph = NULL;
void _elf_iswgraph() {
load_dll_msvcrt();
if (!_imp__iswgraph) {
_imp__iswgraph = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswgraph");
}
asm("leave\njmp *%0" : : "r"(_imp__iswgraph));
}

void _elf_iswlower() asm("iswlower");
void *_imp__iswlower = NULL;
void _elf_iswlower() {
load_dll_msvcrt();
if (!_imp__iswlower) {
_imp__iswlower = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswlower");
}
asm("leave\njmp *%0" : : "r"(_imp__iswlower));
}

void _elf_iswprint() asm("iswprint");
void *_imp__iswprint = NULL;
void _elf_iswprint() {
load_dll_msvcrt();
if (!_imp__iswprint) {
_imp__iswprint = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswprint");
}
asm("leave\njmp *%0" : : "r"(_imp__iswprint));
}

void _elf_iswpunct() asm("iswpunct");
void *_imp__iswpunct = NULL;
void _elf_iswpunct() {
load_dll_msvcrt();
if (!_imp__iswpunct) {
_imp__iswpunct = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswpunct");
}
asm("leave\njmp *%0" : : "r"(_imp__iswpunct));
}

void _elf_iswspace() asm("iswspace");
void *_imp__iswspace = NULL;
void _elf_iswspace() {
load_dll_msvcrt();
if (!_imp__iswspace) {
_imp__iswspace = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswspace");
}
asm("leave\njmp *%0" : : "r"(_imp__iswspace));
}

void _elf_iswupper() asm("iswupper");
void *_imp__iswupper = NULL;
void _elf_iswupper() {
load_dll_msvcrt();
if (!_imp__iswupper) {
_imp__iswupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswupper");
}
asm("leave\njmp *%0" : : "r"(_imp__iswupper));
}

void _elf_iswxdigit() asm("iswxdigit");
void *_imp__iswxdigit = NULL;
void _elf_iswxdigit() {
load_dll_msvcrt();
if (!_imp__iswxdigit) {
_imp__iswxdigit = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswxdigit");
}
asm("leave\njmp *%0" : : "r"(_imp__iswxdigit));
}

void _elf_isxdigit() asm("isxdigit");
void *_imp__isxdigit = NULL;
void _elf_isxdigit() {
load_dll_msvcrt();
if (!_imp__isxdigit) {
_imp__isxdigit = (void *) _elf_GetProcAddress(_dll_msvcrt, "isxdigit");
}
asm("leave\njmp *%0" : : "r"(_imp__isxdigit));
}

void _elf_labs() asm("labs");
void *_imp__labs = NULL;
void _elf_labs() {
load_dll_msvcrt();
if (!_imp__labs) {
_imp__labs = (void *) _elf_GetProcAddress(_dll_msvcrt, "labs");
}
asm("leave\njmp *%0" : : "r"(_imp__labs));
}

void _elf_ldexp() asm("ldexp");
void *_imp__ldexp = NULL;
void _elf_ldexp() {
load_dll_msvcrt();
if (!_imp__ldexp) {
_imp__ldexp = (void *) _elf_GetProcAddress(_dll_msvcrt, "ldexp");
}
asm("leave\njmp *%0" : : "r"(_imp__ldexp));
}

void _elf_ldiv() asm("ldiv");
void *_imp__ldiv = NULL;
void _elf_ldiv() {
load_dll_msvcrt();
if (!_imp__ldiv) {
_imp__ldiv = (void *) _elf_GetProcAddress(_dll_msvcrt, "ldiv");
}
asm("leave\njmp *%0" : : "r"(_imp__ldiv));
}

void _elf_localeconv() asm("localeconv");
void *_imp__localeconv = NULL;
void _elf_localeconv() {
load_dll_msvcrt();
if (!_imp__localeconv) {
_imp__localeconv = (void *) _elf_GetProcAddress(_dll_msvcrt, "localeconv");
}
asm("leave\njmp *%0" : : "r"(_imp__localeconv));
}

void _elf_localtime() asm("localtime");
void *_imp__localtime = NULL;
void _elf_localtime() {
load_dll_msvcrt();
if (!_imp__localtime) {
_imp__localtime = (void *) _elf_GetProcAddress(_dll_msvcrt, "localtime");
}
asm("leave\njmp *%0" : : "r"(_imp__localtime));
}

void _elf_log() asm("log");
void *_imp__log = NULL;
void _elf_log() {
load_dll_msvcrt();
if (!_imp__log) {
_imp__log = (void *) _elf_GetProcAddress(_dll_msvcrt, "log");
}
asm("leave\njmp *%0" : : "r"(_imp__log));
}

void _elf_log10() asm("log10");
void *_imp__log10 = NULL;
void _elf_log10() {
load_dll_msvcrt();
if (!_imp__log10) {
_imp__log10 = (void *) _elf_GetProcAddress(_dll_msvcrt, "log10");
}
asm("leave\njmp *%0" : : "r"(_imp__log10));
}

void _elf_longjmp() asm("longjmp");
void *_imp__longjmp = NULL;
void _elf_longjmp() {
load_dll_msvcrt();
if (!_imp__longjmp) {
_imp__longjmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "longjmp");
}
asm("leave\njmp *%0" : : "r"(_imp__longjmp));
}

void _elf_malloc() asm("malloc");
void *_imp__malloc = NULL;
void _elf_malloc() {
load_dll_msvcrt();
if (!_imp__malloc) {
_imp__malloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "malloc");
}
asm("leave\njmp *%0" : : "r"(_imp__malloc));
}

void _elf_mblen() asm("mblen");
void *_imp__mblen = NULL;
void _elf_mblen() {
load_dll_msvcrt();
if (!_imp__mblen) {
_imp__mblen = (void *) _elf_GetProcAddress(_dll_msvcrt, "mblen");
}
asm("leave\njmp *%0" : : "r"(_imp__mblen));
}

void _elf_mbstowcs() asm("mbstowcs");
void *_imp__mbstowcs = NULL;
void _elf_mbstowcs() {
load_dll_msvcrt();
if (!_imp__mbstowcs) {
_imp__mbstowcs = (void *) _elf_GetProcAddress(_dll_msvcrt, "mbstowcs");
}
asm("leave\njmp *%0" : : "r"(_imp__mbstowcs));
}

void _elf_mbtowc() asm("mbtowc");
void *_imp__mbtowc = NULL;
void _elf_mbtowc() {
load_dll_msvcrt();
if (!_imp__mbtowc) {
_imp__mbtowc = (void *) _elf_GetProcAddress(_dll_msvcrt, "mbtowc");
}
asm("leave\njmp *%0" : : "r"(_imp__mbtowc));
}

void _elf_memchr() asm("memchr");
void *_imp__memchr = NULL;
void _elf_memchr() {
load_dll_msvcrt();
if (!_imp__memchr) {
_imp__memchr = (void *) _elf_GetProcAddress(_dll_msvcrt, "memchr");
}
asm("leave\njmp *%0" : : "r"(_imp__memchr));
}

void _elf_memcmp() asm("memcmp");
void *_imp__memcmp = NULL;
void _elf_memcmp() {
load_dll_msvcrt();
if (!_imp__memcmp) {
_imp__memcmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "memcmp");
}
asm("leave\njmp *%0" : : "r"(_imp__memcmp));
}

void _elf_memcpy() asm("memcpy");
void *_imp__memcpy = NULL;
void _elf_memcpy() {
load_dll_msvcrt();
if (!_imp__memcpy) {
_imp__memcpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "memcpy");
}
asm("leave\njmp *%0" : : "r"(_imp__memcpy));
}

void _elf_memmove() asm("memmove");
void *_imp__memmove = NULL;
void _elf_memmove() {
load_dll_msvcrt();
if (!_imp__memmove) {
_imp__memmove = (void *) _elf_GetProcAddress(_dll_msvcrt, "memmove");
}
asm("leave\njmp *%0" : : "r"(_imp__memmove));
}

void _elf_memset() asm("memset");
void *_imp__memset = NULL;
void _elf_memset() {
load_dll_msvcrt();
if (!_imp__memset) {
_imp__memset = (void *) _elf_GetProcAddress(_dll_msvcrt, "memset");
}
asm("leave\njmp *%0" : : "r"(_imp__memset));
}

void _elf_mktime() asm("mktime");
void *_imp__mktime = NULL;
void _elf_mktime() {
load_dll_msvcrt();
if (!_imp__mktime) {
_imp__mktime = (void *) _elf_GetProcAddress(_dll_msvcrt, "mktime");
}
asm("leave\njmp *%0" : : "r"(_imp__mktime));
}

void _elf_modf() asm("modf");
void *_imp__modf = NULL;
void _elf_modf() {
load_dll_msvcrt();
if (!_imp__modf) {
_imp__modf = (void *) _elf_GetProcAddress(_dll_msvcrt, "modf");
}
asm("leave\njmp *%0" : : "r"(_imp__modf));
}

void _elf_perror() asm("perror");
void *_imp__perror = NULL;
void _elf_perror() {
load_dll_msvcrt();
if (!_imp__perror) {
_imp__perror = (void *) _elf_GetProcAddress(_dll_msvcrt, "perror");
}
asm("leave\njmp *%0" : : "r"(_imp__perror));
}

void _elf_pow() asm("pow");
void *_imp__pow = NULL;
void _elf_pow() {
load_dll_msvcrt();
if (!_imp__pow) {
_imp__pow = (void *) _elf_GetProcAddress(_dll_msvcrt, "pow");
}
asm("leave\njmp *%0" : : "r"(_imp__pow));
}

void _elf_printf() asm("printf");
void *_imp__printf = NULL;
void _elf_printf() {
load_dll_msvcrt();
if (!_imp__printf) {
_imp__printf = (void *) _elf_GetProcAddress(_dll_msvcrt, "printf");
}
asm("leave\njmp *%0" : : "r"(_imp__printf));
}

void _elf_putc() asm("putc");
void *_imp__putc = NULL;
void _elf_putc() {
load_dll_msvcrt();
if (!_imp__putc) {
_imp__putc = (void *) _elf_GetProcAddress(_dll_msvcrt, "putc");
}
asm("leave\njmp *%0" : : "r"(_imp__putc));
}

void _elf_putchar() asm("putchar");
void *_imp__putchar = NULL;
void _elf_putchar() {
load_dll_msvcrt();
if (!_imp__putchar) {
_imp__putchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "putchar");
}
asm("leave\njmp *%0" : : "r"(_imp__putchar));
}

void _elf_puts() asm("puts");
void *_imp__puts = NULL;
void _elf_puts() {
load_dll_msvcrt();
if (!_imp__puts) {
_imp__puts = (void *) _elf_GetProcAddress(_dll_msvcrt, "puts");
}
asm("leave\njmp *%0" : : "r"(_imp__puts));
}

void _elf_putwc() asm("putwc");
void *_imp__putwc = NULL;
void _elf_putwc() {
load_dll_msvcrt();
if (!_imp__putwc) {
_imp__putwc = (void *) _elf_GetProcAddress(_dll_msvcrt, "putwc");
}
asm("leave\njmp *%0" : : "r"(_imp__putwc));
}

void _elf_putwchar() asm("putwchar");
void *_imp__putwchar = NULL;
void _elf_putwchar() {
load_dll_msvcrt();
if (!_imp__putwchar) {
_imp__putwchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "putwchar");
}
asm("leave\njmp *%0" : : "r"(_imp__putwchar));
}

void _elf_qsort() asm("qsort");
void *_imp__qsort = NULL;
void _elf_qsort() {
load_dll_msvcrt();
if (!_imp__qsort) {
_imp__qsort = (void *) _elf_GetProcAddress(_dll_msvcrt, "qsort");
}
asm("leave\njmp *%0" : : "r"(_imp__qsort));
}

void _elf_raise() asm("raise");
void *_imp__raise = NULL;
void _elf_raise() {
load_dll_msvcrt();
if (!_imp__raise) {
_imp__raise = (void *) _elf_GetProcAddress(_dll_msvcrt, "raise");
}
asm("leave\njmp *%0" : : "r"(_imp__raise));
}

void _elf_rand() asm("rand");
void *_imp__rand = NULL;
void _elf_rand() {
load_dll_msvcrt();
if (!_imp__rand) {
_imp__rand = (void *) _elf_GetProcAddress(_dll_msvcrt, "rand");
}
asm("leave\njmp *%0" : : "r"(_imp__rand));
}

void _elf_realloc() asm("realloc");
void *_imp__realloc = NULL;
void _elf_realloc() {
load_dll_msvcrt();
if (!_imp__realloc) {
_imp__realloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "realloc");
}
asm("leave\njmp *%0" : : "r"(_imp__realloc));
}

void _elf_remove() asm("remove");
void *_imp__remove = NULL;
void _elf_remove() {
load_dll_msvcrt();
if (!_imp__remove) {
_imp__remove = (void *) _elf_GetProcAddress(_dll_msvcrt, "remove");
}
asm("leave\njmp *%0" : : "r"(_imp__remove));
}

void _elf_rename() asm("rename");
void *_imp__rename = NULL;
void _elf_rename() {
load_dll_msvcrt();
if (!_imp__rename) {
_imp__rename = (void *) _elf_GetProcAddress(_dll_msvcrt, "rename");
}
asm("leave\njmp *%0" : : "r"(_imp__rename));
}

void _elf_rewind() asm("rewind");
void *_imp__rewind = NULL;
void _elf_rewind() {
load_dll_msvcrt();
if (!_imp__rewind) {
_imp__rewind = (void *) _elf_GetProcAddress(_dll_msvcrt, "rewind");
}
asm("leave\njmp *%0" : : "r"(_imp__rewind));
}

void _elf_scanf() asm("scanf");
void *_imp__scanf = NULL;
void _elf_scanf() {
load_dll_msvcrt();
if (!_imp__scanf) {
_imp__scanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "scanf");
}
asm("leave\njmp *%0" : : "r"(_imp__scanf));
}

void _elf_setbuf() asm("setbuf");
void *_imp__setbuf = NULL;
void _elf_setbuf() {
load_dll_msvcrt();
if (!_imp__setbuf) {
_imp__setbuf = (void *) _elf_GetProcAddress(_dll_msvcrt, "setbuf");
}
asm("leave\njmp *%0" : : "r"(_imp__setbuf));
}

void _elf_setlocale() asm("setlocale");
void *_imp__setlocale = NULL;
void _elf_setlocale() {
load_dll_msvcrt();
if (!_imp__setlocale) {
_imp__setlocale = (void *) _elf_GetProcAddress(_dll_msvcrt, "setlocale");
}
asm("leave\njmp *%0" : : "r"(_imp__setlocale));
}

void _elf_setvbuf() asm("setvbuf");
void *_imp__setvbuf = NULL;
void _elf_setvbuf() {
load_dll_msvcrt();
if (!_imp__setvbuf) {
_imp__setvbuf = (void *) _elf_GetProcAddress(_dll_msvcrt, "setvbuf");
}
asm("leave\njmp *%0" : : "r"(_imp__setvbuf));
}

void _elf_signal() asm("signal");
void *_imp__signal = NULL;
void _elf_signal() {
load_dll_msvcrt();
if (!_imp__signal) {
_imp__signal = (void *) _elf_GetProcAddress(_dll_msvcrt, "signal");
}
asm("leave\njmp *%0" : : "r"(_imp__signal));
}

void _elf_sin() asm("sin");
void *_imp__sin = NULL;
void _elf_sin() {
load_dll_msvcrt();
if (!_imp__sin) {
_imp__sin = (void *) _elf_GetProcAddress(_dll_msvcrt, "sin");
}
asm("leave\njmp *%0" : : "r"(_imp__sin));
}

void _elf_sinh() asm("sinh");
void *_imp__sinh = NULL;
void _elf_sinh() {
load_dll_msvcrt();
if (!_imp__sinh) {
_imp__sinh = (void *) _elf_GetProcAddress(_dll_msvcrt, "sinh");
}
asm("leave\njmp *%0" : : "r"(_imp__sinh));
}

void _elf_sprintf() asm("sprintf");
void *_imp__sprintf = NULL;
void _elf_sprintf() {
load_dll_msvcrt();
if (!_imp__sprintf) {
_imp__sprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "sprintf");
}
asm("leave\njmp *%0" : : "r"(_imp__sprintf));
}

void _elf_sqrt() asm("sqrt");
void *_imp__sqrt = NULL;
void _elf_sqrt() {
load_dll_msvcrt();
if (!_imp__sqrt) {
_imp__sqrt = (void *) _elf_GetProcAddress(_dll_msvcrt, "sqrt");
}
asm("leave\njmp *%0" : : "r"(_imp__sqrt));
}

void _elf_srand() asm("srand");
void *_imp__srand = NULL;
void _elf_srand() {
load_dll_msvcrt();
if (!_imp__srand) {
_imp__srand = (void *) _elf_GetProcAddress(_dll_msvcrt, "srand");
}
asm("leave\njmp *%0" : : "r"(_imp__srand));
}

void _elf_sscanf() asm("sscanf");
void *_imp__sscanf = NULL;
void _elf_sscanf() {
load_dll_msvcrt();
if (!_imp__sscanf) {
_imp__sscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "sscanf");
}
asm("leave\njmp *%0" : : "r"(_imp__sscanf));
}

void _elf_strcat() asm("strcat");
void *_imp__strcat = NULL;
void _elf_strcat() {
load_dll_msvcrt();
if (!_imp__strcat) {
_imp__strcat = (void *) _elf_GetProcAddress(_dll_msvcrt, "strcat");
}
asm("leave\njmp *%0" : : "r"(_imp__strcat));
}

void _elf_strchr() asm("strchr");
void *_imp__strchr = NULL;
void _elf_strchr() {
load_dll_msvcrt();
if (!_imp__strchr) {
_imp__strchr = (void *) _elf_GetProcAddress(_dll_msvcrt, "strchr");
}
asm("leave\njmp *%0" : : "r"(_imp__strchr));
}

void _elf_strcmp() asm("strcmp");
void *_imp__strcmp = NULL;
void _elf_strcmp() {
load_dll_msvcrt();
if (!_imp__strcmp) {
_imp__strcmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "strcmp");
}
asm("leave\njmp *%0" : : "r"(_imp__strcmp));
}

void _elf_strcoll() asm("strcoll");
void *_imp__strcoll = NULL;
void _elf_strcoll() {
load_dll_msvcrt();
if (!_imp__strcoll) {
_imp__strcoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "strcoll");
}
asm("leave\njmp *%0" : : "r"(_imp__strcoll));
}

void _elf_strcpy() asm("strcpy");
void *_imp__strcpy = NULL;
void _elf_strcpy() {
load_dll_msvcrt();
if (!_imp__strcpy) {
_imp__strcpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "strcpy");
}
asm("leave\njmp *%0" : : "r"(_imp__strcpy));
}

void _elf_strcspn() asm("strcspn");
void *_imp__strcspn = NULL;
void _elf_strcspn() {
load_dll_msvcrt();
if (!_imp__strcspn) {
_imp__strcspn = (void *) _elf_GetProcAddress(_dll_msvcrt, "strcspn");
}
asm("leave\njmp *%0" : : "r"(_imp__strcspn));
}

void _elf_strerror() asm("strerror");
void *_imp__strerror = NULL;
void _elf_strerror() {
load_dll_msvcrt();
if (!_imp__strerror) {
_imp__strerror = (void *) _elf_GetProcAddress(_dll_msvcrt, "strerror");
}
asm("leave\njmp *%0" : : "r"(_imp__strerror));
}

void _elf_strftime() asm("strftime");
void *_imp__strftime = NULL;
void _elf_strftime() {
load_dll_msvcrt();
if (!_imp__strftime) {
_imp__strftime = (void *) _elf_GetProcAddress(_dll_msvcrt, "strftime");
}
asm("leave\njmp *%0" : : "r"(_imp__strftime));
}

void _elf_strlen() asm("strlen");
void *_imp__strlen = NULL;
void _elf_strlen() {
load_dll_msvcrt();
if (!_imp__strlen) {
_imp__strlen = (void *) _elf_GetProcAddress(_dll_msvcrt, "strlen");
}
asm("leave\njmp *%0" : : "r"(_imp__strlen));
}

void _elf_strncat() asm("strncat");
void *_imp__strncat = NULL;
void _elf_strncat() {
load_dll_msvcrt();
if (!_imp__strncat) {
_imp__strncat = (void *) _elf_GetProcAddress(_dll_msvcrt, "strncat");
}
asm("leave\njmp *%0" : : "r"(_imp__strncat));
}

void _elf_strncmp() asm("strncmp");
void *_imp__strncmp = NULL;
void _elf_strncmp() {
load_dll_msvcrt();
if (!_imp__strncmp) {
_imp__strncmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "strncmp");
}
asm("leave\njmp *%0" : : "r"(_imp__strncmp));
}

void _elf_strncpy() asm("strncpy");
void *_imp__strncpy = NULL;
void _elf_strncpy() {
load_dll_msvcrt();
if (!_imp__strncpy) {
_imp__strncpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "strncpy");
}
asm("leave\njmp *%0" : : "r"(_imp__strncpy));
}

void _elf_strpbrk() asm("strpbrk");
void *_imp__strpbrk = NULL;
void _elf_strpbrk() {
load_dll_msvcrt();
if (!_imp__strpbrk) {
_imp__strpbrk = (void *) _elf_GetProcAddress(_dll_msvcrt, "strpbrk");
}
asm("leave\njmp *%0" : : "r"(_imp__strpbrk));
}

void _elf_strrchr() asm("strrchr");
void *_imp__strrchr = NULL;
void _elf_strrchr() {
load_dll_msvcrt();
if (!_imp__strrchr) {
_imp__strrchr = (void *) _elf_GetProcAddress(_dll_msvcrt, "strrchr");
}
asm("leave\njmp *%0" : : "r"(_imp__strrchr));
}

void _elf_strspn() asm("strspn");
void *_imp__strspn = NULL;
void _elf_strspn() {
load_dll_msvcrt();
if (!_imp__strspn) {
_imp__strspn = (void *) _elf_GetProcAddress(_dll_msvcrt, "strspn");
}
asm("leave\njmp *%0" : : "r"(_imp__strspn));
}

void _elf_strstr() asm("strstr");
void *_imp__strstr = NULL;
void _elf_strstr() {
load_dll_msvcrt();
if (!_imp__strstr) {
_imp__strstr = (void *) _elf_GetProcAddress(_dll_msvcrt, "strstr");
}
asm("leave\njmp *%0" : : "r"(_imp__strstr));
}

void _elf_strtod() asm("strtod");
void *_imp__strtod = NULL;
void _elf_strtod() {
load_dll_msvcrt();
if (!_imp__strtod) {
_imp__strtod = (void *) _elf_GetProcAddress(_dll_msvcrt, "strtod");
}
asm("leave\njmp *%0" : : "r"(_imp__strtod));
}

void _elf_strtok() asm("strtok");
void *_imp__strtok = NULL;
void _elf_strtok() {
load_dll_msvcrt();
if (!_imp__strtok) {
_imp__strtok = (void *) _elf_GetProcAddress(_dll_msvcrt, "strtok");
}
asm("leave\njmp *%0" : : "r"(_imp__strtok));
}

void _elf_strtol() asm("strtol");
void *_imp__strtol = NULL;
void _elf_strtol() {
load_dll_msvcrt();
if (!_imp__strtol) {
_imp__strtol = (void *) _elf_GetProcAddress(_dll_msvcrt, "strtol");
}
asm("leave\njmp *%0" : : "r"(_imp__strtol));
}

void _elf_strtoul() asm("strtoul");
void *_imp__strtoul = NULL;
void _elf_strtoul() {
load_dll_msvcrt();
if (!_imp__strtoul) {
_imp__strtoul = (void *) _elf_GetProcAddress(_dll_msvcrt, "strtoul");
}
asm("leave\njmp *%0" : : "r"(_imp__strtoul));
}

void _elf_strxfrm() asm("strxfrm");
void *_imp__strxfrm = NULL;
void _elf_strxfrm() {
load_dll_msvcrt();
if (!_imp__strxfrm) {
_imp__strxfrm = (void *) _elf_GetProcAddress(_dll_msvcrt, "strxfrm");
}
asm("leave\njmp *%0" : : "r"(_imp__strxfrm));
}

void _elf_swprintf() asm("swprintf");
void *_imp__swprintf = NULL;
void _elf_swprintf() {
load_dll_msvcrt();
if (!_imp__swprintf) {
_imp__swprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "swprintf");
}
asm("leave\njmp *%0" : : "r"(_imp__swprintf));
}

void _elf_swscanf() asm("swscanf");
void *_imp__swscanf = NULL;
void _elf_swscanf() {
load_dll_msvcrt();
if (!_imp__swscanf) {
_imp__swscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "swscanf");
}
asm("leave\njmp *%0" : : "r"(_imp__swscanf));
}

void _elf_system() asm("system");
void *_imp__system = NULL;
void _elf_system() {
load_dll_msvcrt();
if (!_imp__system) {
_imp__system = (void *) _elf_GetProcAddress(_dll_msvcrt, "system");
}
asm("leave\njmp *%0" : : "r"(_imp__system));
}

void _elf_tan() asm("tan");
void *_imp__tan = NULL;
void _elf_tan() {
load_dll_msvcrt();
if (!_imp__tan) {
_imp__tan = (void *) _elf_GetProcAddress(_dll_msvcrt, "tan");
}
asm("leave\njmp *%0" : : "r"(_imp__tan));
}

void _elf_tanh() asm("tanh");
void *_imp__tanh = NULL;
void _elf_tanh() {
load_dll_msvcrt();
if (!_imp__tanh) {
_imp__tanh = (void *) _elf_GetProcAddress(_dll_msvcrt, "tanh");
}
asm("leave\njmp *%0" : : "r"(_imp__tanh));
}

void _elf_time() asm("time");
void *_imp__time = NULL;
void _elf_time() {
load_dll_msvcrt();
if (!_imp__time) {
_imp__time = (void *) _elf_GetProcAddress(_dll_msvcrt, "time");
}
asm("leave\njmp *%0" : : "r"(_imp__time));
}

void _elf_tmpfile() asm("tmpfile");
void *_imp__tmpfile = NULL;
void _elf_tmpfile() {
load_dll_msvcrt();
if (!_imp__tmpfile) {
_imp__tmpfile = (void *) _elf_GetProcAddress(_dll_msvcrt, "tmpfile");
}
asm("leave\njmp *%0" : : "r"(_imp__tmpfile));
}

void _elf_tmpnam() asm("tmpnam");
void *_imp__tmpnam = NULL;
void _elf_tmpnam() {
load_dll_msvcrt();
if (!_imp__tmpnam) {
_imp__tmpnam = (void *) _elf_GetProcAddress(_dll_msvcrt, "tmpnam");
}
asm("leave\njmp *%0" : : "r"(_imp__tmpnam));
}

void _elf_tolower() asm("tolower");
void *_imp__tolower = NULL;
void _elf_tolower() {
load_dll_msvcrt();
if (!_imp__tolower) {
_imp__tolower = (void *) _elf_GetProcAddress(_dll_msvcrt, "tolower");
}
asm("leave\njmp *%0" : : "r"(_imp__tolower));
}

void _elf_toupper() asm("toupper");
void *_imp__toupper = NULL;
void _elf_toupper() {
load_dll_msvcrt();
if (!_imp__toupper) {
_imp__toupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "toupper");
}
asm("leave\njmp *%0" : : "r"(_imp__toupper));
}

void _elf_towlower() asm("towlower");
void *_imp__towlower = NULL;
void _elf_towlower() {
load_dll_msvcrt();
if (!_imp__towlower) {
_imp__towlower = (void *) _elf_GetProcAddress(_dll_msvcrt, "towlower");
}
asm("leave\njmp *%0" : : "r"(_imp__towlower));
}

void _elf_towupper() asm("towupper");
void *_imp__towupper = NULL;
void _elf_towupper() {
load_dll_msvcrt();
if (!_imp__towupper) {
_imp__towupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "towupper");
}
asm("leave\njmp *%0" : : "r"(_imp__towupper));
}

void _elf_ungetc() asm("ungetc");
void *_imp__ungetc = NULL;
void _elf_ungetc() {
load_dll_msvcrt();
if (!_imp__ungetc) {
_imp__ungetc = (void *) _elf_GetProcAddress(_dll_msvcrt, "ungetc");
}
asm("leave\njmp *%0" : : "r"(_imp__ungetc));
}

void _elf_ungetwc() asm("ungetwc");
void *_imp__ungetwc = NULL;
void _elf_ungetwc() {
load_dll_msvcrt();
if (!_imp__ungetwc) {
_imp__ungetwc = (void *) _elf_GetProcAddress(_dll_msvcrt, "ungetwc");
}
asm("leave\njmp *%0" : : "r"(_imp__ungetwc));
}

void _elf_vfprintf() asm("vfprintf");
void *_imp__vfprintf = NULL;
void _elf_vfprintf() {
load_dll_msvcrt();
if (!_imp__vfprintf) {
_imp__vfprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "vfprintf");
}
asm("leave\njmp *%0" : : "r"(_imp__vfprintf));
}

void _elf_vfwprintf() asm("vfwprintf");
void *_imp__vfwprintf = NULL;
void _elf_vfwprintf() {
load_dll_msvcrt();
if (!_imp__vfwprintf) {
_imp__vfwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "vfwprintf");
}
asm("leave\njmp *%0" : : "r"(_imp__vfwprintf));
}

void _elf_vprintf() asm("vprintf");
void *_imp__vprintf = NULL;
void _elf_vprintf() {
load_dll_msvcrt();
if (!_imp__vprintf) {
_imp__vprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "vprintf");
}
asm("leave\njmp *%0" : : "r"(_imp__vprintf));
}

void _elf_vsprintf() asm("vsprintf");
void *_imp__vsprintf = NULL;
void _elf_vsprintf() {
load_dll_msvcrt();
if (!_imp__vsprintf) {
_imp__vsprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "vsprintf");
}
asm("leave\njmp *%0" : : "r"(_imp__vsprintf));
}

void _elf_vswprintf() asm("vswprintf");
void *_imp__vswprintf = NULL;
void _elf_vswprintf() {
load_dll_msvcrt();
if (!_imp__vswprintf) {
_imp__vswprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "vswprintf");
}
asm("leave\njmp *%0" : : "r"(_imp__vswprintf));
}

void _elf_vwprintf() asm("vwprintf");
void *_imp__vwprintf = NULL;
void _elf_vwprintf() {
load_dll_msvcrt();
if (!_imp__vwprintf) {
_imp__vwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "vwprintf");
}
asm("leave\njmp *%0" : : "r"(_imp__vwprintf));
}

void _elf_wcscat() asm("wcscat");
void *_imp__wcscat = NULL;
void _elf_wcscat() {
load_dll_msvcrt();
if (!_imp__wcscat) {
_imp__wcscat = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcscat");
}
asm("leave\njmp *%0" : : "r"(_imp__wcscat));
}

void _elf_wcschr() asm("wcschr");
void *_imp__wcschr = NULL;
void _elf_wcschr() {
load_dll_msvcrt();
if (!_imp__wcschr) {
_imp__wcschr = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcschr");
}
asm("leave\njmp *%0" : : "r"(_imp__wcschr));
}

void _elf_wcscmp() asm("wcscmp");
void *_imp__wcscmp = NULL;
void _elf_wcscmp() {
load_dll_msvcrt();
if (!_imp__wcscmp) {
_imp__wcscmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcscmp");
}
asm("leave\njmp *%0" : : "r"(_imp__wcscmp));
}

void _elf_wcscoll() asm("wcscoll");
void *_imp__wcscoll = NULL;
void _elf_wcscoll() {
load_dll_msvcrt();
if (!_imp__wcscoll) {
_imp__wcscoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcscoll");
}
asm("leave\njmp *%0" : : "r"(_imp__wcscoll));
}

void _elf_wcscpy() asm("wcscpy");
void *_imp__wcscpy = NULL;
void _elf_wcscpy() {
load_dll_msvcrt();
if (!_imp__wcscpy) {
_imp__wcscpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcscpy");
}
asm("leave\njmp *%0" : : "r"(_imp__wcscpy));
}

void _elf_wcscspn() asm("wcscspn");
void *_imp__wcscspn = NULL;
void _elf_wcscspn() {
load_dll_msvcrt();
if (!_imp__wcscspn) {
_imp__wcscspn = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcscspn");
}
asm("leave\njmp *%0" : : "r"(_imp__wcscspn));
}

void _elf_wcsftime() asm("wcsftime");
void *_imp__wcsftime = NULL;
void _elf_wcsftime() {
load_dll_msvcrt();
if (!_imp__wcsftime) {
_imp__wcsftime = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsftime");
}
asm("leave\njmp *%0" : : "r"(_imp__wcsftime));
}

void _elf_wcslen() asm("wcslen");
void *_imp__wcslen = NULL;
void _elf_wcslen() {
load_dll_msvcrt();
if (!_imp__wcslen) {
_imp__wcslen = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcslen");
}
asm("leave\njmp *%0" : : "r"(_imp__wcslen));
}

void _elf_wcsncat() asm("wcsncat");
void *_imp__wcsncat = NULL;
void _elf_wcsncat() {
load_dll_msvcrt();
if (!_imp__wcsncat) {
_imp__wcsncat = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsncat");
}
asm("leave\njmp *%0" : : "r"(_imp__wcsncat));
}

void _elf_wcsncmp() asm("wcsncmp");
void *_imp__wcsncmp = NULL;
void _elf_wcsncmp() {
load_dll_msvcrt();
if (!_imp__wcsncmp) {
_imp__wcsncmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsncmp");
}
asm("leave\njmp *%0" : : "r"(_imp__wcsncmp));
}

void _elf_wcsncpy() asm("wcsncpy");
void *_imp__wcsncpy = NULL;
void _elf_wcsncpy() {
load_dll_msvcrt();
if (!_imp__wcsncpy) {
_imp__wcsncpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsncpy");
}
asm("leave\njmp *%0" : : "r"(_imp__wcsncpy));
}

void _elf_wcspbrk() asm("wcspbrk");
void *_imp__wcspbrk = NULL;
void _elf_wcspbrk() {
load_dll_msvcrt();
if (!_imp__wcspbrk) {
_imp__wcspbrk = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcspbrk");
}
asm("leave\njmp *%0" : : "r"(_imp__wcspbrk));
}

void _elf_wcsrchr() asm("wcsrchr");
void *_imp__wcsrchr = NULL;
void _elf_wcsrchr() {
load_dll_msvcrt();
if (!_imp__wcsrchr) {
_imp__wcsrchr = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsrchr");
}
asm("leave\njmp *%0" : : "r"(_imp__wcsrchr));
}

void _elf_wcsspn() asm("wcsspn");
void *_imp__wcsspn = NULL;
void _elf_wcsspn() {
load_dll_msvcrt();
if (!_imp__wcsspn) {
_imp__wcsspn = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsspn");
}
asm("leave\njmp *%0" : : "r"(_imp__wcsspn));
}

void _elf_wcsstr() asm("wcsstr");
void *_imp__wcsstr = NULL;
void _elf_wcsstr() {
load_dll_msvcrt();
if (!_imp__wcsstr) {
_imp__wcsstr = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsstr");
}
asm("leave\njmp *%0" : : "r"(_imp__wcsstr));
}

void _elf_wcstod() asm("wcstod");
void *_imp__wcstod = NULL;
void _elf_wcstod() {
load_dll_msvcrt();
if (!_imp__wcstod) {
_imp__wcstod = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcstod");
}
asm("leave\njmp *%0" : : "r"(_imp__wcstod));
}

void _elf_wcstok() asm("wcstok");
void *_imp__wcstok = NULL;
void _elf_wcstok() {
load_dll_msvcrt();
if (!_imp__wcstok) {
_imp__wcstok = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcstok");
}
asm("leave\njmp *%0" : : "r"(_imp__wcstok));
}

void _elf_wcstol() asm("wcstol");
void *_imp__wcstol = NULL;
void _elf_wcstol() {
load_dll_msvcrt();
if (!_imp__wcstol) {
_imp__wcstol = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcstol");
}
asm("leave\njmp *%0" : : "r"(_imp__wcstol));
}

void _elf_wcstombs() asm("wcstombs");
void *_imp__wcstombs = NULL;
void _elf_wcstombs() {
load_dll_msvcrt();
if (!_imp__wcstombs) {
_imp__wcstombs = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcstombs");
}
asm("leave\njmp *%0" : : "r"(_imp__wcstombs));
}

void _elf_wcstoul() asm("wcstoul");
void *_imp__wcstoul = NULL;
void _elf_wcstoul() {
load_dll_msvcrt();
if (!_imp__wcstoul) {
_imp__wcstoul = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcstoul");
}
asm("leave\njmp *%0" : : "r"(_imp__wcstoul));
}

void _elf_wcsxfrm() asm("wcsxfrm");
void *_imp__wcsxfrm = NULL;
void _elf_wcsxfrm() {
load_dll_msvcrt();
if (!_imp__wcsxfrm) {
_imp__wcsxfrm = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsxfrm");
}
asm("leave\njmp *%0" : : "r"(_imp__wcsxfrm));
}

void _elf_wctomb() asm("wctomb");
void *_imp__wctomb = NULL;
void _elf_wctomb() {
load_dll_msvcrt();
if (!_imp__wctomb) {
_imp__wctomb = (void *) _elf_GetProcAddress(_dll_msvcrt, "wctomb");
}
asm("leave\njmp *%0" : : "r"(_imp__wctomb));
}

void _elf_wprintf() asm("wprintf");
void *_imp__wprintf = NULL;
void _elf_wprintf() {
load_dll_msvcrt();
if (!_imp__wprintf) {
_imp__wprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "wprintf");
}
asm("leave\njmp *%0" : : "r"(_imp__wprintf));
}

void _elf_wscanf() asm("wscanf");
void *_imp__wscanf = NULL;
void _elf_wscanf() {
load_dll_msvcrt();
if (!_imp__wscanf) {
_imp__wscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "wscanf");
}
asm("leave\njmp *%0" : : "r"(_imp__wscanf));
}

