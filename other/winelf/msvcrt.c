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

void _elfimplib__CIacos() asm("CIacos");
void *_imp___CIacos = NULL;
__attribute__((constructor)) void _elfimplib_init__CIacos() {
load_dll_msvcrt();
_imp___CIacos = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIacos");
}
void _elfimplib__CIacos() {
asm("leave\njmp *%0" : : "r"(_imp___CIacos));
}

void _elfimplib__CIasin() asm("CIasin");
void *_imp___CIasin = NULL;
__attribute__((constructor)) void _elfimplib_init__CIasin() {
load_dll_msvcrt();
_imp___CIasin = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIasin");
}
void _elfimplib__CIasin() {
asm("leave\njmp *%0" : : "r"(_imp___CIasin));
}

void _elfimplib__CIatan() asm("CIatan");
void *_imp___CIatan = NULL;
__attribute__((constructor)) void _elfimplib_init__CIatan() {
load_dll_msvcrt();
_imp___CIatan = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIatan");
}
void _elfimplib__CIatan() {
asm("leave\njmp *%0" : : "r"(_imp___CIatan));
}

void _elfimplib__CIatan2() asm("CIatan2");
void *_imp___CIatan2 = NULL;
__attribute__((constructor)) void _elfimplib_init__CIatan2() {
load_dll_msvcrt();
_imp___CIatan2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIatan2");
}
void _elfimplib__CIatan2() {
asm("leave\njmp *%0" : : "r"(_imp___CIatan2));
}

void _elfimplib__CIcos() asm("CIcos");
void *_imp___CIcos = NULL;
__attribute__((constructor)) void _elfimplib_init__CIcos() {
load_dll_msvcrt();
_imp___CIcos = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIcos");
}
void _elfimplib__CIcos() {
asm("leave\njmp *%0" : : "r"(_imp___CIcos));
}

void _elfimplib__CIcosh() asm("CIcosh");
void *_imp___CIcosh = NULL;
__attribute__((constructor)) void _elfimplib_init__CIcosh() {
load_dll_msvcrt();
_imp___CIcosh = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIcosh");
}
void _elfimplib__CIcosh() {
asm("leave\njmp *%0" : : "r"(_imp___CIcosh));
}

void _elfimplib__CIexp() asm("CIexp");
void *_imp___CIexp = NULL;
__attribute__((constructor)) void _elfimplib_init__CIexp() {
load_dll_msvcrt();
_imp___CIexp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIexp");
}
void _elfimplib__CIexp() {
asm("leave\njmp *%0" : : "r"(_imp___CIexp));
}

void _elfimplib__CIfmod() asm("CIfmod");
void *_imp___CIfmod = NULL;
__attribute__((constructor)) void _elfimplib_init__CIfmod() {
load_dll_msvcrt();
_imp___CIfmod = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIfmod");
}
void _elfimplib__CIfmod() {
asm("leave\njmp *%0" : : "r"(_imp___CIfmod));
}

void _elfimplib__CIlog() asm("CIlog");
void *_imp___CIlog = NULL;
__attribute__((constructor)) void _elfimplib_init__CIlog() {
load_dll_msvcrt();
_imp___CIlog = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIlog");
}
void _elfimplib__CIlog() {
asm("leave\njmp *%0" : : "r"(_imp___CIlog));
}

void _elfimplib__CIlog10() asm("CIlog10");
void *_imp___CIlog10 = NULL;
__attribute__((constructor)) void _elfimplib_init__CIlog10() {
load_dll_msvcrt();
_imp___CIlog10 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIlog10");
}
void _elfimplib__CIlog10() {
asm("leave\njmp *%0" : : "r"(_imp___CIlog10));
}

void _elfimplib__CIpow() asm("CIpow");
void *_imp___CIpow = NULL;
__attribute__((constructor)) void _elfimplib_init__CIpow() {
load_dll_msvcrt();
_imp___CIpow = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIpow");
}
void _elfimplib__CIpow() {
asm("leave\njmp *%0" : : "r"(_imp___CIpow));
}

void _elfimplib__CIsin() asm("CIsin");
void *_imp___CIsin = NULL;
__attribute__((constructor)) void _elfimplib_init__CIsin() {
load_dll_msvcrt();
_imp___CIsin = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIsin");
}
void _elfimplib__CIsin() {
asm("leave\njmp *%0" : : "r"(_imp___CIsin));
}

void _elfimplib__CIsinh() asm("CIsinh");
void *_imp___CIsinh = NULL;
__attribute__((constructor)) void _elfimplib_init__CIsinh() {
load_dll_msvcrt();
_imp___CIsinh = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIsinh");
}
void _elfimplib__CIsinh() {
asm("leave\njmp *%0" : : "r"(_imp___CIsinh));
}

void _elfimplib__CIsqrt() asm("CIsqrt");
void *_imp___CIsqrt = NULL;
__attribute__((constructor)) void _elfimplib_init__CIsqrt() {
load_dll_msvcrt();
_imp___CIsqrt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIsqrt");
}
void _elfimplib__CIsqrt() {
asm("leave\njmp *%0" : : "r"(_imp___CIsqrt));
}

void _elfimplib__CItan() asm("CItan");
void *_imp___CItan = NULL;
__attribute__((constructor)) void _elfimplib_init__CItan() {
load_dll_msvcrt();
_imp___CItan = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CItan");
}
void _elfimplib__CItan() {
asm("leave\njmp *%0" : : "r"(_imp___CItan));
}

void _elfimplib__CItanh() asm("CItanh");
void *_imp___CItanh = NULL;
__attribute__((constructor)) void _elfimplib_init__CItanh() {
load_dll_msvcrt();
_imp___CItanh = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CItanh");
}
void _elfimplib__CItanh() {
asm("leave\njmp *%0" : : "r"(_imp___CItanh));
}

void _elfimplib__CxxThrowException() asm("CxxThrowException");
void *_imp___CxxThrowException = NULL;
__attribute__((constructor)) void _elfimplib_init__CxxThrowException() {
load_dll_msvcrt();
_imp___CxxThrowException = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CxxThrowException");
}
void _elfimplib__CxxThrowException() {
asm("leave\njmp *%0" : : "r"(_imp___CxxThrowException));
}

void _elfimplib__EH_prolog() asm("EH_prolog");
void *_imp___EH_prolog = NULL;
__attribute__((constructor)) void _elfimplib_init__EH_prolog() {
load_dll_msvcrt();
_imp___EH_prolog = (void *) _elf_GetProcAddress(_dll_msvcrt, "_EH_prolog");
}
void _elfimplib__EH_prolog() {
asm("leave\njmp *%0" : : "r"(_imp___EH_prolog));
}

void _elfimplib__Getdays() asm("Getdays");
void *_imp___Getdays = NULL;
__attribute__((constructor)) void _elfimplib_init__Getdays() {
load_dll_msvcrt();
_imp___Getdays = (void *) _elf_GetProcAddress(_dll_msvcrt, "_Getdays");
}
void _elfimplib__Getdays() {
asm("leave\njmp *%0" : : "r"(_imp___Getdays));
}

void _elfimplib__Getmonths() asm("Getmonths");
void *_imp___Getmonths = NULL;
__attribute__((constructor)) void _elfimplib_init__Getmonths() {
load_dll_msvcrt();
_imp___Getmonths = (void *) _elf_GetProcAddress(_dll_msvcrt, "_Getmonths");
}
void _elfimplib__Getmonths() {
asm("leave\njmp *%0" : : "r"(_imp___Getmonths));
}

void _elfimplib__Gettnames() asm("Gettnames");
void *_imp___Gettnames = NULL;
__attribute__((constructor)) void _elfimplib_init__Gettnames() {
load_dll_msvcrt();
_imp___Gettnames = (void *) _elf_GetProcAddress(_dll_msvcrt, "_Gettnames");
}
void _elfimplib__Gettnames() {
asm("leave\njmp *%0" : : "r"(_imp___Gettnames));
}

void _elfimplib__HUGE() asm("HUGE");
void *_imp___HUGE = NULL;
__attribute__((constructor)) void _elfimplib_init__HUGE() {
load_dll_msvcrt();
_imp___HUGE = (void *) _elf_GetProcAddress(_dll_msvcrt, "_HUGE");
}
void _elfimplib__HUGE() {
asm("leave\njmp *%0" : : "r"(_imp___HUGE));
}

void _elfimplib__Strftime() asm("Strftime");
void *_imp___Strftime = NULL;
__attribute__((constructor)) void _elfimplib_init__Strftime() {
load_dll_msvcrt();
_imp___Strftime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_Strftime");
}
void _elfimplib__Strftime() {
asm("leave\njmp *%0" : : "r"(_imp___Strftime));
}

void _elfimplib__XcptFilter() asm("XcptFilter");
void *_imp___XcptFilter = NULL;
__attribute__((constructor)) void _elfimplib_init__XcptFilter() {
load_dll_msvcrt();
_imp___XcptFilter = (void *) _elf_GetProcAddress(_dll_msvcrt, "_XcptFilter");
}
void _elfimplib__XcptFilter() {
asm("leave\njmp *%0" : : "r"(_imp___XcptFilter));
}

void _elfimplib___CxxCallUnwindDtor() asm("_CxxCallUnwindDtor");
void *_imp____CxxCallUnwindDtor = NULL;
__attribute__((constructor)) void _elfimplib_init___CxxCallUnwindDtor() {
load_dll_msvcrt();
_imp____CxxCallUnwindDtor = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxCallUnwindDtor");
}
void _elfimplib___CxxCallUnwindDtor() {
asm("leave\njmp *%0" : : "r"(_imp____CxxCallUnwindDtor));
}

void _elfimplib___CxxDetectRethrow() asm("_CxxDetectRethrow");
void *_imp____CxxDetectRethrow = NULL;
__attribute__((constructor)) void _elfimplib_init___CxxDetectRethrow() {
load_dll_msvcrt();
_imp____CxxDetectRethrow = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxDetectRethrow");
}
void _elfimplib___CxxDetectRethrow() {
asm("leave\njmp *%0" : : "r"(_imp____CxxDetectRethrow));
}

void _elfimplib___CxxExceptionFilter() asm("_CxxExceptionFilter");
void *_imp____CxxExceptionFilter = NULL;
__attribute__((constructor)) void _elfimplib_init___CxxExceptionFilter() {
load_dll_msvcrt();
_imp____CxxExceptionFilter = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxExceptionFilter");
}
void _elfimplib___CxxExceptionFilter() {
asm("leave\njmp *%0" : : "r"(_imp____CxxExceptionFilter));
}

void _elfimplib___CxxFrameHandler() asm("_CxxFrameHandler");
void *_imp____CxxFrameHandler = NULL;
__attribute__((constructor)) void _elfimplib_init___CxxFrameHandler() {
load_dll_msvcrt();
_imp____CxxFrameHandler = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxFrameHandler");
}
void _elfimplib___CxxFrameHandler() {
asm("leave\njmp *%0" : : "r"(_imp____CxxFrameHandler));
}

void _elfimplib___CxxLongjmpUnwind() asm("_CxxLongjmpUnwind");
void *_imp____CxxLongjmpUnwind = NULL;
__attribute__((constructor)) void _elfimplib_init___CxxLongjmpUnwind() {
load_dll_msvcrt();
_imp____CxxLongjmpUnwind = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxLongjmpUnwind");
}
void _elfimplib___CxxLongjmpUnwind() {
asm("leave\njmp *%0" : : "r"(_imp____CxxLongjmpUnwind));
}

void _elfimplib___CxxQueryExceptionSize() asm("_CxxQueryExceptionSize");
void *_imp____CxxQueryExceptionSize = NULL;
__attribute__((constructor)) void _elfimplib_init___CxxQueryExceptionSize() {
load_dll_msvcrt();
_imp____CxxQueryExceptionSize = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxQueryExceptionSize");
}
void _elfimplib___CxxQueryExceptionSize() {
asm("leave\njmp *%0" : : "r"(_imp____CxxQueryExceptionSize));
}

void _elfimplib___CxxRegisterExceptionObject() asm("_CxxRegisterExceptionObject");
void *_imp____CxxRegisterExceptionObject = NULL;
__attribute__((constructor)) void _elfimplib_init___CxxRegisterExceptionObject() {
load_dll_msvcrt();
_imp____CxxRegisterExceptionObject = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxRegisterExceptionObject");
}
void _elfimplib___CxxRegisterExceptionObject() {
asm("leave\njmp *%0" : : "r"(_imp____CxxRegisterExceptionObject));
}

void _elfimplib___CxxUnregisterExceptionObject() asm("_CxxUnregisterExceptionObject");
void *_imp____CxxUnregisterExceptionObject = NULL;
__attribute__((constructor)) void _elfimplib_init___CxxUnregisterExceptionObject() {
load_dll_msvcrt();
_imp____CxxUnregisterExceptionObject = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxUnregisterExceptionObject");
}
void _elfimplib___CxxUnregisterExceptionObject() {
asm("leave\njmp *%0" : : "r"(_imp____CxxUnregisterExceptionObject));
}

void _elfimplib___DestructExceptionObject() asm("_DestructExceptionObject");
void *_imp____DestructExceptionObject = NULL;
__attribute__((constructor)) void _elfimplib_init___DestructExceptionObject() {
load_dll_msvcrt();
_imp____DestructExceptionObject = (void *) _elf_GetProcAddress(_dll_msvcrt, "__DestructExceptionObject");
}
void _elfimplib___DestructExceptionObject() {
asm("leave\njmp *%0" : : "r"(_imp____DestructExceptionObject));
}

void _elfimplib___RTCastToVoid() asm("_RTCastToVoid");
void *_imp____RTCastToVoid = NULL;
__attribute__((constructor)) void _elfimplib_init___RTCastToVoid() {
load_dll_msvcrt();
_imp____RTCastToVoid = (void *) _elf_GetProcAddress(_dll_msvcrt, "__RTCastToVoid");
}
void _elfimplib___RTCastToVoid() {
asm("leave\njmp *%0" : : "r"(_imp____RTCastToVoid));
}

void _elfimplib___RTDynamicCast() asm("_RTDynamicCast");
void *_imp____RTDynamicCast = NULL;
__attribute__((constructor)) void _elfimplib_init___RTDynamicCast() {
load_dll_msvcrt();
_imp____RTDynamicCast = (void *) _elf_GetProcAddress(_dll_msvcrt, "__RTDynamicCast");
}
void _elfimplib___RTDynamicCast() {
asm("leave\njmp *%0" : : "r"(_imp____RTDynamicCast));
}

void _elfimplib___RTtypeid() asm("_RTtypeid");
void *_imp____RTtypeid = NULL;
__attribute__((constructor)) void _elfimplib_init___RTtypeid() {
load_dll_msvcrt();
_imp____RTtypeid = (void *) _elf_GetProcAddress(_dll_msvcrt, "__RTtypeid");
}
void _elfimplib___RTtypeid() {
asm("leave\njmp *%0" : : "r"(_imp____RTtypeid));
}

void _elfimplib___STRINGTOLD() asm("_STRINGTOLD");
void *_imp____STRINGTOLD = NULL;
__attribute__((constructor)) void _elfimplib_init___STRINGTOLD() {
load_dll_msvcrt();
_imp____STRINGTOLD = (void *) _elf_GetProcAddress(_dll_msvcrt, "__STRINGTOLD");
}
void _elfimplib___STRINGTOLD() {
asm("leave\njmp *%0" : : "r"(_imp____STRINGTOLD));
}

void _elfimplib____lc_codepage_func() asm("__lc_codepage_func");
void *_imp_____lc_codepage_func = NULL;
__attribute__((constructor)) void _elfimplib_init____lc_codepage_func() {
load_dll_msvcrt();
_imp_____lc_codepage_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "___lc_codepage_func");
}
void _elfimplib____lc_codepage_func() {
asm("leave\njmp *%0" : : "r"(_imp_____lc_codepage_func));
}

void _elfimplib____lc_handle_func() asm("__lc_handle_func");
void *_imp_____lc_handle_func = NULL;
__attribute__((constructor)) void _elfimplib_init____lc_handle_func() {
load_dll_msvcrt();
_imp_____lc_handle_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "___lc_handle_func");
}
void _elfimplib____lc_handle_func() {
asm("leave\njmp *%0" : : "r"(_imp_____lc_handle_func));
}

void _elfimplib____mb_cur_max_func() asm("__mb_cur_max_func");
void *_imp_____mb_cur_max_func = NULL;
__attribute__((constructor)) void _elfimplib_init____mb_cur_max_func() {
load_dll_msvcrt();
_imp_____mb_cur_max_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "___mb_cur_max_func");
}
void _elfimplib____mb_cur_max_func() {
asm("leave\njmp *%0" : : "r"(_imp_____mb_cur_max_func));
}

void _elfimplib____setlc_active_func() asm("__setlc_active_func");
void *_imp_____setlc_active_func = NULL;
__attribute__((constructor)) void _elfimplib_init____setlc_active_func() {
load_dll_msvcrt();
_imp_____setlc_active_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "___setlc_active_func");
}
void _elfimplib____setlc_active_func() {
asm("leave\njmp *%0" : : "r"(_imp_____setlc_active_func));
}

void _elfimplib____unguarded_readlc_active_add_func() asm("__unguarded_readlc_active_add_func");
void *_imp_____unguarded_readlc_active_add_func = NULL;
__attribute__((constructor)) void _elfimplib_init____unguarded_readlc_active_add_func() {
load_dll_msvcrt();
_imp_____unguarded_readlc_active_add_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "___unguarded_readlc_active_add_func");
}
void _elfimplib____unguarded_readlc_active_add_func() {
asm("leave\njmp *%0" : : "r"(_imp_____unguarded_readlc_active_add_func));
}

void _elfimplib___argc() asm("_argc");
void *_imp____argc = NULL;
__attribute__((constructor)) void _elfimplib_init___argc() {
load_dll_msvcrt();
_imp____argc = (void *) _elf_GetProcAddress(_dll_msvcrt, "__argc");
}
void _elfimplib___argc() {
asm("leave\njmp *%0" : : "r"(_imp____argc));
}

void _elfimplib___argv() asm("_argv");
void *_imp____argv = NULL;
__attribute__((constructor)) void _elfimplib_init___argv() {
load_dll_msvcrt();
_imp____argv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__argv");
}
void _elfimplib___argv() {
asm("leave\njmp *%0" : : "r"(_imp____argv));
}

void _elfimplib___badioinfo() asm("_badioinfo");
void *_imp____badioinfo = NULL;
__attribute__((constructor)) void _elfimplib_init___badioinfo() {
load_dll_msvcrt();
_imp____badioinfo = (void *) _elf_GetProcAddress(_dll_msvcrt, "__badioinfo");
}
void _elfimplib___badioinfo() {
asm("leave\njmp *%0" : : "r"(_imp____badioinfo));
}

void _elfimplib___crtCompareStringA() asm("_crtCompareStringA");
void *_imp____crtCompareStringA = NULL;
__attribute__((constructor)) void _elfimplib_init___crtCompareStringA() {
load_dll_msvcrt();
_imp____crtCompareStringA = (void *) _elf_GetProcAddress(_dll_msvcrt, "__crtCompareStringA");
}
void _elfimplib___crtCompareStringA() {
asm("leave\njmp *%0" : : "r"(_imp____crtCompareStringA));
}

void _elfimplib___crtCompareStringW() asm("_crtCompareStringW");
void *_imp____crtCompareStringW = NULL;
__attribute__((constructor)) void _elfimplib_init___crtCompareStringW() {
load_dll_msvcrt();
_imp____crtCompareStringW = (void *) _elf_GetProcAddress(_dll_msvcrt, "__crtCompareStringW");
}
void _elfimplib___crtCompareStringW() {
asm("leave\njmp *%0" : : "r"(_imp____crtCompareStringW));
}

void _elfimplib___crtGetLocaleInfoW() asm("_crtGetLocaleInfoW");
void *_imp____crtGetLocaleInfoW = NULL;
__attribute__((constructor)) void _elfimplib_init___crtGetLocaleInfoW() {
load_dll_msvcrt();
_imp____crtGetLocaleInfoW = (void *) _elf_GetProcAddress(_dll_msvcrt, "__crtGetLocaleInfoW");
}
void _elfimplib___crtGetLocaleInfoW() {
asm("leave\njmp *%0" : : "r"(_imp____crtGetLocaleInfoW));
}

void _elfimplib___crtGetStringTypeW() asm("_crtGetStringTypeW");
void *_imp____crtGetStringTypeW = NULL;
__attribute__((constructor)) void _elfimplib_init___crtGetStringTypeW() {
load_dll_msvcrt();
_imp____crtGetStringTypeW = (void *) _elf_GetProcAddress(_dll_msvcrt, "__crtGetStringTypeW");
}
void _elfimplib___crtGetStringTypeW() {
asm("leave\njmp *%0" : : "r"(_imp____crtGetStringTypeW));
}

void _elfimplib___crtLCMapStringA() asm("_crtLCMapStringA");
void *_imp____crtLCMapStringA = NULL;
__attribute__((constructor)) void _elfimplib_init___crtLCMapStringA() {
load_dll_msvcrt();
_imp____crtLCMapStringA = (void *) _elf_GetProcAddress(_dll_msvcrt, "__crtLCMapStringA");
}
void _elfimplib___crtLCMapStringA() {
asm("leave\njmp *%0" : : "r"(_imp____crtLCMapStringA));
}

void _elfimplib___crtLCMapStringW() asm("_crtLCMapStringW");
void *_imp____crtLCMapStringW = NULL;
__attribute__((constructor)) void _elfimplib_init___crtLCMapStringW() {
load_dll_msvcrt();
_imp____crtLCMapStringW = (void *) _elf_GetProcAddress(_dll_msvcrt, "__crtLCMapStringW");
}
void _elfimplib___crtLCMapStringW() {
asm("leave\njmp *%0" : : "r"(_imp____crtLCMapStringW));
}

void _elfimplib___dllonexit() asm("_dllonexit");
void *_imp____dllonexit = NULL;
__attribute__((constructor)) void _elfimplib_init___dllonexit() {
load_dll_msvcrt();
_imp____dllonexit = (void *) _elf_GetProcAddress(_dll_msvcrt, "__dllonexit");
}
void _elfimplib___dllonexit() {
asm("leave\njmp *%0" : : "r"(_imp____dllonexit));
}

void _elfimplib___doserrno() asm("_doserrno");
void *_imp____doserrno = NULL;
__attribute__((constructor)) void _elfimplib_init___doserrno() {
load_dll_msvcrt();
_imp____doserrno = (void *) _elf_GetProcAddress(_dll_msvcrt, "__doserrno");
}
void _elfimplib___doserrno() {
asm("leave\njmp *%0" : : "r"(_imp____doserrno));
}

void _elfimplib___fpecode() asm("_fpecode");
void *_imp____fpecode = NULL;
__attribute__((constructor)) void _elfimplib_init___fpecode() {
load_dll_msvcrt();
_imp____fpecode = (void *) _elf_GetProcAddress(_dll_msvcrt, "__fpecode");
}
void _elfimplib___fpecode() {
asm("leave\njmp *%0" : : "r"(_imp____fpecode));
}

void _elfimplib___getmainargs() asm("_getmainargs");
void *_imp____getmainargs = NULL;
__attribute__((constructor)) void _elfimplib_init___getmainargs() {
load_dll_msvcrt();
_imp____getmainargs = (void *) _elf_GetProcAddress(_dll_msvcrt, "__getmainargs");
}
void _elfimplib___getmainargs() {
asm("leave\njmp *%0" : : "r"(_imp____getmainargs));
}

void _elfimplib___initenv() asm("_initenv");
void *_imp____initenv = NULL;
__attribute__((constructor)) void _elfimplib_init___initenv() {
load_dll_msvcrt();
_imp____initenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__initenv");
}
void _elfimplib___initenv() {
asm("leave\njmp *%0" : : "r"(_imp____initenv));
}

void _elfimplib___iob_func() asm("_iob_func");
void *_imp____iob_func = NULL;
__attribute__((constructor)) void _elfimplib_init___iob_func() {
load_dll_msvcrt();
_imp____iob_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "__iob_func");
}
void _elfimplib___iob_func() {
asm("leave\njmp *%0" : : "r"(_imp____iob_func));
}

void _elfimplib___isascii() asm("_isascii");
void *_imp____isascii = NULL;
__attribute__((constructor)) void _elfimplib_init___isascii() {
load_dll_msvcrt();
_imp____isascii = (void *) _elf_GetProcAddress(_dll_msvcrt, "__isascii");
}
void _elfimplib___isascii() {
asm("leave\njmp *%0" : : "r"(_imp____isascii));
}

void _elfimplib___iscsym() asm("_iscsym");
void *_imp____iscsym = NULL;
__attribute__((constructor)) void _elfimplib_init___iscsym() {
load_dll_msvcrt();
_imp____iscsym = (void *) _elf_GetProcAddress(_dll_msvcrt, "__iscsym");
}
void _elfimplib___iscsym() {
asm("leave\njmp *%0" : : "r"(_imp____iscsym));
}

void _elfimplib___iscsymf() asm("_iscsymf");
void *_imp____iscsymf = NULL;
__attribute__((constructor)) void _elfimplib_init___iscsymf() {
load_dll_msvcrt();
_imp____iscsymf = (void *) _elf_GetProcAddress(_dll_msvcrt, "__iscsymf");
}
void _elfimplib___iscsymf() {
asm("leave\njmp *%0" : : "r"(_imp____iscsymf));
}

void _elfimplib___lc_codepage() asm("_lc_codepage");
void *_imp____lc_codepage = NULL;
__attribute__((constructor)) void _elfimplib_init___lc_codepage() {
load_dll_msvcrt();
_imp____lc_codepage = (void *) _elf_GetProcAddress(_dll_msvcrt, "__lc_codepage");
}
void _elfimplib___lc_codepage() {
asm("leave\njmp *%0" : : "r"(_imp____lc_codepage));
}

void _elfimplib___lc_collate_cp() asm("_lc_collate_cp");
void *_imp____lc_collate_cp = NULL;
__attribute__((constructor)) void _elfimplib_init___lc_collate_cp() {
load_dll_msvcrt();
_imp____lc_collate_cp = (void *) _elf_GetProcAddress(_dll_msvcrt, "__lc_collate_cp");
}
void _elfimplib___lc_collate_cp() {
asm("leave\njmp *%0" : : "r"(_imp____lc_collate_cp));
}

void _elfimplib___lc_handle() asm("_lc_handle");
void *_imp____lc_handle = NULL;
__attribute__((constructor)) void _elfimplib_init___lc_handle() {
load_dll_msvcrt();
_imp____lc_handle = (void *) _elf_GetProcAddress(_dll_msvcrt, "__lc_handle");
}
void _elfimplib___lc_handle() {
asm("leave\njmp *%0" : : "r"(_imp____lc_handle));
}

void _elfimplib___lconv_init() asm("_lconv_init");
void *_imp____lconv_init = NULL;
__attribute__((constructor)) void _elfimplib_init___lconv_init() {
load_dll_msvcrt();
_imp____lconv_init = (void *) _elf_GetProcAddress(_dll_msvcrt, "__lconv_init");
}
void _elfimplib___lconv_init() {
asm("leave\njmp *%0" : : "r"(_imp____lconv_init));
}

void _elfimplib___mb_cur_max() asm("_mb_cur_max");
void *_imp____mb_cur_max = NULL;
__attribute__((constructor)) void _elfimplib_init___mb_cur_max() {
load_dll_msvcrt();
_imp____mb_cur_max = (void *) _elf_GetProcAddress(_dll_msvcrt, "__mb_cur_max");
}
void _elfimplib___mb_cur_max() {
asm("leave\njmp *%0" : : "r"(_imp____mb_cur_max));
}

void _elfimplib___p___argc() asm("_p___argc");
void *_imp____p___argc = NULL;
__attribute__((constructor)) void _elfimplib_init___p___argc() {
load_dll_msvcrt();
_imp____p___argc = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p___argc");
}
void _elfimplib___p___argc() {
asm("leave\njmp *%0" : : "r"(_imp____p___argc));
}

void _elfimplib___p___argv() asm("_p___argv");
void *_imp____p___argv = NULL;
__attribute__((constructor)) void _elfimplib_init___p___argv() {
load_dll_msvcrt();
_imp____p___argv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p___argv");
}
void _elfimplib___p___argv() {
asm("leave\njmp *%0" : : "r"(_imp____p___argv));
}

void _elfimplib___p___initenv() asm("_p___initenv");
void *_imp____p___initenv = NULL;
__attribute__((constructor)) void _elfimplib_init___p___initenv() {
load_dll_msvcrt();
_imp____p___initenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p___initenv");
}
void _elfimplib___p___initenv() {
asm("leave\njmp *%0" : : "r"(_imp____p___initenv));
}

void _elfimplib___p___mb_cur_max() asm("_p___mb_cur_max");
void *_imp____p___mb_cur_max = NULL;
__attribute__((constructor)) void _elfimplib_init___p___mb_cur_max() {
load_dll_msvcrt();
_imp____p___mb_cur_max = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p___mb_cur_max");
}
void _elfimplib___p___mb_cur_max() {
asm("leave\njmp *%0" : : "r"(_imp____p___mb_cur_max));
}

void _elfimplib___p___wargv() asm("_p___wargv");
void *_imp____p___wargv = NULL;
__attribute__((constructor)) void _elfimplib_init___p___wargv() {
load_dll_msvcrt();
_imp____p___wargv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p___wargv");
}
void _elfimplib___p___wargv() {
asm("leave\njmp *%0" : : "r"(_imp____p___wargv));
}

void _elfimplib___p___winitenv() asm("_p___winitenv");
void *_imp____p___winitenv = NULL;
__attribute__((constructor)) void _elfimplib_init___p___winitenv() {
load_dll_msvcrt();
_imp____p___winitenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p___winitenv");
}
void _elfimplib___p___winitenv() {
asm("leave\njmp *%0" : : "r"(_imp____p___winitenv));
}

void _elfimplib___p__acmdln() asm("_p__acmdln");
void *_imp____p__acmdln = NULL;
__attribute__((constructor)) void _elfimplib_init___p__acmdln() {
load_dll_msvcrt();
_imp____p__acmdln = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__acmdln");
}
void _elfimplib___p__acmdln() {
asm("leave\njmp *%0" : : "r"(_imp____p__acmdln));
}

void _elfimplib___p__amblksiz() asm("_p__amblksiz");
void *_imp____p__amblksiz = NULL;
__attribute__((constructor)) void _elfimplib_init___p__amblksiz() {
load_dll_msvcrt();
_imp____p__amblksiz = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__amblksiz");
}
void _elfimplib___p__amblksiz() {
asm("leave\njmp *%0" : : "r"(_imp____p__amblksiz));
}

void _elfimplib___p__commode() asm("_p__commode");
void *_imp____p__commode = NULL;
__attribute__((constructor)) void _elfimplib_init___p__commode() {
load_dll_msvcrt();
_imp____p__commode = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__commode");
}
void _elfimplib___p__commode() {
asm("leave\njmp *%0" : : "r"(_imp____p__commode));
}

void _elfimplib___p__daylight() asm("_p__daylight");
void *_imp____p__daylight = NULL;
__attribute__((constructor)) void _elfimplib_init___p__daylight() {
load_dll_msvcrt();
_imp____p__daylight = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__daylight");
}
void _elfimplib___p__daylight() {
asm("leave\njmp *%0" : : "r"(_imp____p__daylight));
}

void _elfimplib___p__dstbias() asm("_p__dstbias");
void *_imp____p__dstbias = NULL;
__attribute__((constructor)) void _elfimplib_init___p__dstbias() {
load_dll_msvcrt();
_imp____p__dstbias = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__dstbias");
}
void _elfimplib___p__dstbias() {
asm("leave\njmp *%0" : : "r"(_imp____p__dstbias));
}

void _elfimplib___p__environ() asm("_p__environ");
void *_imp____p__environ = NULL;
__attribute__((constructor)) void _elfimplib_init___p__environ() {
load_dll_msvcrt();
_imp____p__environ = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__environ");
}
void _elfimplib___p__environ() {
asm("leave\njmp *%0" : : "r"(_imp____p__environ));
}

void _elfimplib___p__fileinfo() asm("_p__fileinfo");
void *_imp____p__fileinfo = NULL;
__attribute__((constructor)) void _elfimplib_init___p__fileinfo() {
load_dll_msvcrt();
_imp____p__fileinfo = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__fileinfo");
}
void _elfimplib___p__fileinfo() {
asm("leave\njmp *%0" : : "r"(_imp____p__fileinfo));
}

void _elfimplib___p__fmode() asm("_p__fmode");
void *_imp____p__fmode = NULL;
__attribute__((constructor)) void _elfimplib_init___p__fmode() {
load_dll_msvcrt();
_imp____p__fmode = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__fmode");
}
void _elfimplib___p__fmode() {
asm("leave\njmp *%0" : : "r"(_imp____p__fmode));
}

void _elfimplib___p__iob() asm("_p__iob");
void *_imp____p__iob = NULL;
__attribute__((constructor)) void _elfimplib_init___p__iob() {
load_dll_msvcrt();
_imp____p__iob = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__iob");
}
void _elfimplib___p__iob() {
asm("leave\njmp *%0" : : "r"(_imp____p__iob));
}

void _elfimplib___p__mbcasemap() asm("_p__mbcasemap");
void *_imp____p__mbcasemap = NULL;
__attribute__((constructor)) void _elfimplib_init___p__mbcasemap() {
load_dll_msvcrt();
_imp____p__mbcasemap = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__mbcasemap");
}
void _elfimplib___p__mbcasemap() {
asm("leave\njmp *%0" : : "r"(_imp____p__mbcasemap));
}

void _elfimplib___p__mbctype() asm("_p__mbctype");
void *_imp____p__mbctype = NULL;
__attribute__((constructor)) void _elfimplib_init___p__mbctype() {
load_dll_msvcrt();
_imp____p__mbctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__mbctype");
}
void _elfimplib___p__mbctype() {
asm("leave\njmp *%0" : : "r"(_imp____p__mbctype));
}

void _elfimplib___p__osver() asm("_p__osver");
void *_imp____p__osver = NULL;
__attribute__((constructor)) void _elfimplib_init___p__osver() {
load_dll_msvcrt();
_imp____p__osver = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__osver");
}
void _elfimplib___p__osver() {
asm("leave\njmp *%0" : : "r"(_imp____p__osver));
}

void _elfimplib___p__pctype() asm("_p__pctype");
void *_imp____p__pctype = NULL;
__attribute__((constructor)) void _elfimplib_init___p__pctype() {
load_dll_msvcrt();
_imp____p__pctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__pctype");
}
void _elfimplib___p__pctype() {
asm("leave\njmp *%0" : : "r"(_imp____p__pctype));
}

void _elfimplib___p__pgmptr() asm("_p__pgmptr");
void *_imp____p__pgmptr = NULL;
__attribute__((constructor)) void _elfimplib_init___p__pgmptr() {
load_dll_msvcrt();
_imp____p__pgmptr = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__pgmptr");
}
void _elfimplib___p__pgmptr() {
asm("leave\njmp *%0" : : "r"(_imp____p__pgmptr));
}

void _elfimplib___p__pwctype() asm("_p__pwctype");
void *_imp____p__pwctype = NULL;
__attribute__((constructor)) void _elfimplib_init___p__pwctype() {
load_dll_msvcrt();
_imp____p__pwctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__pwctype");
}
void _elfimplib___p__pwctype() {
asm("leave\njmp *%0" : : "r"(_imp____p__pwctype));
}

void _elfimplib___p__timezone() asm("_p__timezone");
void *_imp____p__timezone = NULL;
__attribute__((constructor)) void _elfimplib_init___p__timezone() {
load_dll_msvcrt();
_imp____p__timezone = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__timezone");
}
void _elfimplib___p__timezone() {
asm("leave\njmp *%0" : : "r"(_imp____p__timezone));
}

void _elfimplib___p__tzname() asm("_p__tzname");
void *_imp____p__tzname = NULL;
__attribute__((constructor)) void _elfimplib_init___p__tzname() {
load_dll_msvcrt();
_imp____p__tzname = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__tzname");
}
void _elfimplib___p__tzname() {
asm("leave\njmp *%0" : : "r"(_imp____p__tzname));
}

void _elfimplib___p__wcmdln() asm("_p__wcmdln");
void *_imp____p__wcmdln = NULL;
__attribute__((constructor)) void _elfimplib_init___p__wcmdln() {
load_dll_msvcrt();
_imp____p__wcmdln = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__wcmdln");
}
void _elfimplib___p__wcmdln() {
asm("leave\njmp *%0" : : "r"(_imp____p__wcmdln));
}

void _elfimplib___p__wenviron() asm("_p__wenviron");
void *_imp____p__wenviron = NULL;
__attribute__((constructor)) void _elfimplib_init___p__wenviron() {
load_dll_msvcrt();
_imp____p__wenviron = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__wenviron");
}
void _elfimplib___p__wenviron() {
asm("leave\njmp *%0" : : "r"(_imp____p__wenviron));
}

void _elfimplib___p__winmajor() asm("_p__winmajor");
void *_imp____p__winmajor = NULL;
__attribute__((constructor)) void _elfimplib_init___p__winmajor() {
load_dll_msvcrt();
_imp____p__winmajor = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__winmajor");
}
void _elfimplib___p__winmajor() {
asm("leave\njmp *%0" : : "r"(_imp____p__winmajor));
}

void _elfimplib___p__winminor() asm("_p__winminor");
void *_imp____p__winminor = NULL;
__attribute__((constructor)) void _elfimplib_init___p__winminor() {
load_dll_msvcrt();
_imp____p__winminor = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__winminor");
}
void _elfimplib___p__winminor() {
asm("leave\njmp *%0" : : "r"(_imp____p__winminor));
}

void _elfimplib___p__winver() asm("_p__winver");
void *_imp____p__winver = NULL;
__attribute__((constructor)) void _elfimplib_init___p__winver() {
load_dll_msvcrt();
_imp____p__winver = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__winver");
}
void _elfimplib___p__winver() {
asm("leave\njmp *%0" : : "r"(_imp____p__winver));
}

void _elfimplib___p__wpgmptr() asm("_p__wpgmptr");
void *_imp____p__wpgmptr = NULL;
__attribute__((constructor)) void _elfimplib_init___p__wpgmptr() {
load_dll_msvcrt();
_imp____p__wpgmptr = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__wpgmptr");
}
void _elfimplib___p__wpgmptr() {
asm("leave\njmp *%0" : : "r"(_imp____p__wpgmptr));
}

void _elfimplib___pctype_func() asm("_pctype_func");
void *_imp____pctype_func = NULL;
__attribute__((constructor)) void _elfimplib_init___pctype_func() {
load_dll_msvcrt();
_imp____pctype_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "__pctype_func");
}
void _elfimplib___pctype_func() {
asm("leave\njmp *%0" : : "r"(_imp____pctype_func));
}

void _elfimplib___pioinfo() asm("_pioinfo");
void *_imp____pioinfo = NULL;
__attribute__((constructor)) void _elfimplib_init___pioinfo() {
load_dll_msvcrt();
_imp____pioinfo = (void *) _elf_GetProcAddress(_dll_msvcrt, "__pioinfo");
}
void _elfimplib___pioinfo() {
asm("leave\njmp *%0" : : "r"(_imp____pioinfo));
}

void _elfimplib___pxcptinfoptrs() asm("_pxcptinfoptrs");
void *_imp____pxcptinfoptrs = NULL;
__attribute__((constructor)) void _elfimplib_init___pxcptinfoptrs() {
load_dll_msvcrt();
_imp____pxcptinfoptrs = (void *) _elf_GetProcAddress(_dll_msvcrt, "__pxcptinfoptrs");
}
void _elfimplib___pxcptinfoptrs() {
asm("leave\njmp *%0" : : "r"(_imp____pxcptinfoptrs));
}

void _elfimplib___set_app_type() asm("_set_app_type");
void *_imp____set_app_type = NULL;
__attribute__((constructor)) void _elfimplib_init___set_app_type() {
load_dll_msvcrt();
_imp____set_app_type = (void *) _elf_GetProcAddress(_dll_msvcrt, "__set_app_type");
}
void _elfimplib___set_app_type() {
asm("leave\njmp *%0" : : "r"(_imp____set_app_type));
}

void _elfimplib___setlc_active() asm("_setlc_active");
void *_imp____setlc_active = NULL;
__attribute__((constructor)) void _elfimplib_init___setlc_active() {
load_dll_msvcrt();
_imp____setlc_active = (void *) _elf_GetProcAddress(_dll_msvcrt, "__setlc_active");
}
void _elfimplib___setlc_active() {
asm("leave\njmp *%0" : : "r"(_imp____setlc_active));
}

void _elfimplib___setusermatherr() asm("_setusermatherr");
void *_imp____setusermatherr = NULL;
__attribute__((constructor)) void _elfimplib_init___setusermatherr() {
load_dll_msvcrt();
_imp____setusermatherr = (void *) _elf_GetProcAddress(_dll_msvcrt, "__setusermatherr");
}
void _elfimplib___setusermatherr() {
asm("leave\njmp *%0" : : "r"(_imp____setusermatherr));
}

void _elfimplib___threadhandle() asm("_threadhandle");
void *_imp____threadhandle = NULL;
__attribute__((constructor)) void _elfimplib_init___threadhandle() {
load_dll_msvcrt();
_imp____threadhandle = (void *) _elf_GetProcAddress(_dll_msvcrt, "__threadhandle");
}
void _elfimplib___threadhandle() {
asm("leave\njmp *%0" : : "r"(_imp____threadhandle));
}

void _elfimplib___threadid() asm("_threadid");
void *_imp____threadid = NULL;
__attribute__((constructor)) void _elfimplib_init___threadid() {
load_dll_msvcrt();
_imp____threadid = (void *) _elf_GetProcAddress(_dll_msvcrt, "__threadid");
}
void _elfimplib___threadid() {
asm("leave\njmp *%0" : : "r"(_imp____threadid));
}

void _elfimplib___toascii() asm("_toascii");
void *_imp____toascii = NULL;
__attribute__((constructor)) void _elfimplib_init___toascii() {
load_dll_msvcrt();
_imp____toascii = (void *) _elf_GetProcAddress(_dll_msvcrt, "__toascii");
}
void _elfimplib___toascii() {
asm("leave\njmp *%0" : : "r"(_imp____toascii));
}

void _elfimplib___unDName() asm("_unDName");
void *_imp____unDName = NULL;
__attribute__((constructor)) void _elfimplib_init___unDName() {
load_dll_msvcrt();
_imp____unDName = (void *) _elf_GetProcAddress(_dll_msvcrt, "__unDName");
}
void _elfimplib___unDName() {
asm("leave\njmp *%0" : : "r"(_imp____unDName));
}

void _elfimplib___unDNameEx() asm("_unDNameEx");
void *_imp____unDNameEx = NULL;
__attribute__((constructor)) void _elfimplib_init___unDNameEx() {
load_dll_msvcrt();
_imp____unDNameEx = (void *) _elf_GetProcAddress(_dll_msvcrt, "__unDNameEx");
}
void _elfimplib___unDNameEx() {
asm("leave\njmp *%0" : : "r"(_imp____unDNameEx));
}

void _elfimplib___uncaught_exception() asm("_uncaught_exception");
void *_imp____uncaught_exception = NULL;
__attribute__((constructor)) void _elfimplib_init___uncaught_exception() {
load_dll_msvcrt();
_imp____uncaught_exception = (void *) _elf_GetProcAddress(_dll_msvcrt, "__uncaught_exception");
}
void _elfimplib___uncaught_exception() {
asm("leave\njmp *%0" : : "r"(_imp____uncaught_exception));
}

void _elfimplib___unguarded_readlc_active() asm("_unguarded_readlc_active");
void *_imp____unguarded_readlc_active = NULL;
__attribute__((constructor)) void _elfimplib_init___unguarded_readlc_active() {
load_dll_msvcrt();
_imp____unguarded_readlc_active = (void *) _elf_GetProcAddress(_dll_msvcrt, "__unguarded_readlc_active");
}
void _elfimplib___unguarded_readlc_active() {
asm("leave\njmp *%0" : : "r"(_imp____unguarded_readlc_active));
}

void _elfimplib___wargv() asm("_wargv");
void *_imp____wargv = NULL;
__attribute__((constructor)) void _elfimplib_init___wargv() {
load_dll_msvcrt();
_imp____wargv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__wargv");
}
void _elfimplib___wargv() {
asm("leave\njmp *%0" : : "r"(_imp____wargv));
}

void _elfimplib___wcserror() asm("_wcserror");
void *_imp____wcserror = NULL;
__attribute__((constructor)) void _elfimplib_init___wcserror() {
load_dll_msvcrt();
_imp____wcserror = (void *) _elf_GetProcAddress(_dll_msvcrt, "__wcserror");
}
void _elfimplib___wcserror() {
asm("leave\njmp *%0" : : "r"(_imp____wcserror));
}

void _elfimplib___wgetmainargs() asm("_wgetmainargs");
void *_imp____wgetmainargs = NULL;
__attribute__((constructor)) void _elfimplib_init___wgetmainargs() {
load_dll_msvcrt();
_imp____wgetmainargs = (void *) _elf_GetProcAddress(_dll_msvcrt, "__wgetmainargs");
}
void _elfimplib___wgetmainargs() {
asm("leave\njmp *%0" : : "r"(_imp____wgetmainargs));
}

void _elfimplib___winitenv() asm("_winitenv");
void *_imp____winitenv = NULL;
__attribute__((constructor)) void _elfimplib_init___winitenv() {
load_dll_msvcrt();
_imp____winitenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__winitenv");
}
void _elfimplib___winitenv() {
asm("leave\njmp *%0" : : "r"(_imp____winitenv));
}

void _elfimplib__abnormal_termination() asm("abnormal_termination");
void *_imp___abnormal_termination = NULL;
__attribute__((constructor)) void _elfimplib_init__abnormal_termination() {
load_dll_msvcrt();
_imp___abnormal_termination = (void *) _elf_GetProcAddress(_dll_msvcrt, "_abnormal_termination");
}
void _elfimplib__abnormal_termination() {
asm("leave\njmp *%0" : : "r"(_imp___abnormal_termination));
}

void _elfimplib__access() asm("access");
void *_imp___access = NULL;
__attribute__((constructor)) void _elfimplib_init__access() {
load_dll_msvcrt();
_imp___access = (void *) _elf_GetProcAddress(_dll_msvcrt, "_access");
}
void _elfimplib__access() {
asm("leave\njmp *%0" : : "r"(_imp___access));
}

void _elfimplib__acmdln() asm("acmdln");
void *_imp___acmdln = NULL;
__attribute__((constructor)) void _elfimplib_init__acmdln() {
load_dll_msvcrt();
_imp___acmdln = (void *) _elf_GetProcAddress(_dll_msvcrt, "_acmdln");
}
void _elfimplib__acmdln() {
asm("leave\njmp *%0" : : "r"(_imp___acmdln));
}

void _elfimplib__adj_fdiv_m16i() asm("adj_fdiv_m16i");
void *_imp___adj_fdiv_m16i = NULL;
__attribute__((constructor)) void _elfimplib_init__adj_fdiv_m16i() {
load_dll_msvcrt();
_imp___adj_fdiv_m16i = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdiv_m16i");
}
void _elfimplib__adj_fdiv_m16i() {
asm("leave\njmp *%0" : : "r"(_imp___adj_fdiv_m16i));
}

void _elfimplib__adj_fdiv_m32() asm("adj_fdiv_m32");
void *_imp___adj_fdiv_m32 = NULL;
__attribute__((constructor)) void _elfimplib_init__adj_fdiv_m32() {
load_dll_msvcrt();
_imp___adj_fdiv_m32 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdiv_m32");
}
void _elfimplib__adj_fdiv_m32() {
asm("leave\njmp *%0" : : "r"(_imp___adj_fdiv_m32));
}

void _elfimplib__adj_fdiv_m32i() asm("adj_fdiv_m32i");
void *_imp___adj_fdiv_m32i = NULL;
__attribute__((constructor)) void _elfimplib_init__adj_fdiv_m32i() {
load_dll_msvcrt();
_imp___adj_fdiv_m32i = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdiv_m32i");
}
void _elfimplib__adj_fdiv_m32i() {
asm("leave\njmp *%0" : : "r"(_imp___adj_fdiv_m32i));
}

void _elfimplib__adj_fdiv_m64() asm("adj_fdiv_m64");
void *_imp___adj_fdiv_m64 = NULL;
__attribute__((constructor)) void _elfimplib_init__adj_fdiv_m64() {
load_dll_msvcrt();
_imp___adj_fdiv_m64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdiv_m64");
}
void _elfimplib__adj_fdiv_m64() {
asm("leave\njmp *%0" : : "r"(_imp___adj_fdiv_m64));
}

void _elfimplib__adj_fdiv_r() asm("adj_fdiv_r");
void *_imp___adj_fdiv_r = NULL;
__attribute__((constructor)) void _elfimplib_init__adj_fdiv_r() {
load_dll_msvcrt();
_imp___adj_fdiv_r = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdiv_r");
}
void _elfimplib__adj_fdiv_r() {
asm("leave\njmp *%0" : : "r"(_imp___adj_fdiv_r));
}

void _elfimplib__adj_fdivr_m16i() asm("adj_fdivr_m16i");
void *_imp___adj_fdivr_m16i = NULL;
__attribute__((constructor)) void _elfimplib_init__adj_fdivr_m16i() {
load_dll_msvcrt();
_imp___adj_fdivr_m16i = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdivr_m16i");
}
void _elfimplib__adj_fdivr_m16i() {
asm("leave\njmp *%0" : : "r"(_imp___adj_fdivr_m16i));
}

void _elfimplib__adj_fdivr_m32() asm("adj_fdivr_m32");
void *_imp___adj_fdivr_m32 = NULL;
__attribute__((constructor)) void _elfimplib_init__adj_fdivr_m32() {
load_dll_msvcrt();
_imp___adj_fdivr_m32 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdivr_m32");
}
void _elfimplib__adj_fdivr_m32() {
asm("leave\njmp *%0" : : "r"(_imp___adj_fdivr_m32));
}

void _elfimplib__adj_fdivr_m32i() asm("adj_fdivr_m32i");
void *_imp___adj_fdivr_m32i = NULL;
__attribute__((constructor)) void _elfimplib_init__adj_fdivr_m32i() {
load_dll_msvcrt();
_imp___adj_fdivr_m32i = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdivr_m32i");
}
void _elfimplib__adj_fdivr_m32i() {
asm("leave\njmp *%0" : : "r"(_imp___adj_fdivr_m32i));
}

void _elfimplib__adj_fdivr_m64() asm("adj_fdivr_m64");
void *_imp___adj_fdivr_m64 = NULL;
__attribute__((constructor)) void _elfimplib_init__adj_fdivr_m64() {
load_dll_msvcrt();
_imp___adj_fdivr_m64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdivr_m64");
}
void _elfimplib__adj_fdivr_m64() {
asm("leave\njmp *%0" : : "r"(_imp___adj_fdivr_m64));
}

void _elfimplib__adj_fpatan() asm("adj_fpatan");
void *_imp___adj_fpatan = NULL;
__attribute__((constructor)) void _elfimplib_init__adj_fpatan() {
load_dll_msvcrt();
_imp___adj_fpatan = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fpatan");
}
void _elfimplib__adj_fpatan() {
asm("leave\njmp *%0" : : "r"(_imp___adj_fpatan));
}

void _elfimplib__adj_fprem() asm("adj_fprem");
void *_imp___adj_fprem = NULL;
__attribute__((constructor)) void _elfimplib_init__adj_fprem() {
load_dll_msvcrt();
_imp___adj_fprem = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fprem");
}
void _elfimplib__adj_fprem() {
asm("leave\njmp *%0" : : "r"(_imp___adj_fprem));
}

void _elfimplib__adj_fprem1() asm("adj_fprem1");
void *_imp___adj_fprem1 = NULL;
__attribute__((constructor)) void _elfimplib_init__adj_fprem1() {
load_dll_msvcrt();
_imp___adj_fprem1 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fprem1");
}
void _elfimplib__adj_fprem1() {
asm("leave\njmp *%0" : : "r"(_imp___adj_fprem1));
}

void _elfimplib__adj_fptan() asm("adj_fptan");
void *_imp___adj_fptan = NULL;
__attribute__((constructor)) void _elfimplib_init__adj_fptan() {
load_dll_msvcrt();
_imp___adj_fptan = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fptan");
}
void _elfimplib__adj_fptan() {
asm("leave\njmp *%0" : : "r"(_imp___adj_fptan));
}

void _elfimplib__adjust_fdiv() asm("adjust_fdiv");
void *_imp___adjust_fdiv = NULL;
__attribute__((constructor)) void _elfimplib_init__adjust_fdiv() {
load_dll_msvcrt();
_imp___adjust_fdiv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adjust_fdiv");
}
void _elfimplib__adjust_fdiv() {
asm("leave\njmp *%0" : : "r"(_imp___adjust_fdiv));
}

void _elfimplib__aexit_rtn() asm("aexit_rtn");
void *_imp___aexit_rtn = NULL;
__attribute__((constructor)) void _elfimplib_init__aexit_rtn() {
load_dll_msvcrt();
_imp___aexit_rtn = (void *) _elf_GetProcAddress(_dll_msvcrt, "_aexit_rtn");
}
void _elfimplib__aexit_rtn() {
asm("leave\njmp *%0" : : "r"(_imp___aexit_rtn));
}

void _elfimplib__aligned_free() asm("aligned_free");
void *_imp___aligned_free = NULL;
__attribute__((constructor)) void _elfimplib_init__aligned_free() {
load_dll_msvcrt();
_imp___aligned_free = (void *) _elf_GetProcAddress(_dll_msvcrt, "_aligned_free");
}
void _elfimplib__aligned_free() {
asm("leave\njmp *%0" : : "r"(_imp___aligned_free));
}

void _elfimplib__aligned_malloc() asm("aligned_malloc");
void *_imp___aligned_malloc = NULL;
__attribute__((constructor)) void _elfimplib_init__aligned_malloc() {
load_dll_msvcrt();
_imp___aligned_malloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_aligned_malloc");
}
void _elfimplib__aligned_malloc() {
asm("leave\njmp *%0" : : "r"(_imp___aligned_malloc));
}

void _elfimplib__aligned_offset_malloc() asm("aligned_offset_malloc");
void *_imp___aligned_offset_malloc = NULL;
__attribute__((constructor)) void _elfimplib_init__aligned_offset_malloc() {
load_dll_msvcrt();
_imp___aligned_offset_malloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_aligned_offset_malloc");
}
void _elfimplib__aligned_offset_malloc() {
asm("leave\njmp *%0" : : "r"(_imp___aligned_offset_malloc));
}

void _elfimplib__aligned_offset_realloc() asm("aligned_offset_realloc");
void *_imp___aligned_offset_realloc = NULL;
__attribute__((constructor)) void _elfimplib_init__aligned_offset_realloc() {
load_dll_msvcrt();
_imp___aligned_offset_realloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_aligned_offset_realloc");
}
void _elfimplib__aligned_offset_realloc() {
asm("leave\njmp *%0" : : "r"(_imp___aligned_offset_realloc));
}

void _elfimplib__aligned_realloc() asm("aligned_realloc");
void *_imp___aligned_realloc = NULL;
__attribute__((constructor)) void _elfimplib_init__aligned_realloc() {
load_dll_msvcrt();
_imp___aligned_realloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_aligned_realloc");
}
void _elfimplib__aligned_realloc() {
asm("leave\njmp *%0" : : "r"(_imp___aligned_realloc));
}

void _elfimplib__amsg_exit() asm("amsg_exit");
void *_imp___amsg_exit = NULL;
__attribute__((constructor)) void _elfimplib_init__amsg_exit() {
load_dll_msvcrt();
_imp___amsg_exit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_amsg_exit");
}
void _elfimplib__amsg_exit() {
asm("leave\njmp *%0" : : "r"(_imp___amsg_exit));
}

void _elfimplib__assert() asm("assert");
void *_imp___assert = NULL;
__attribute__((constructor)) void _elfimplib_init__assert() {
load_dll_msvcrt();
_imp___assert = (void *) _elf_GetProcAddress(_dll_msvcrt, "_assert");
}
void _elfimplib__assert() {
asm("leave\njmp *%0" : : "r"(_imp___assert));
}

void _elfimplib__atodbl() asm("atodbl");
void *_imp___atodbl = NULL;
__attribute__((constructor)) void _elfimplib_init__atodbl() {
load_dll_msvcrt();
_imp___atodbl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_atodbl");
}
void _elfimplib__atodbl() {
asm("leave\njmp *%0" : : "r"(_imp___atodbl));
}

void _elfimplib__atoi64() asm("atoi64");
void *_imp___atoi64 = NULL;
__attribute__((constructor)) void _elfimplib_init__atoi64() {
load_dll_msvcrt();
_imp___atoi64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_atoi64");
}
void _elfimplib__atoi64() {
asm("leave\njmp *%0" : : "r"(_imp___atoi64));
}

void _elfimplib__atoldbl() asm("atoldbl");
void *_imp___atoldbl = NULL;
__attribute__((constructor)) void _elfimplib_init__atoldbl() {
load_dll_msvcrt();
_imp___atoldbl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_atoldbl");
}
void _elfimplib__atoldbl() {
asm("leave\njmp *%0" : : "r"(_imp___atoldbl));
}

void _elfimplib__beep() asm("beep");
void *_imp___beep = NULL;
__attribute__((constructor)) void _elfimplib_init__beep() {
load_dll_msvcrt();
_imp___beep = (void *) _elf_GetProcAddress(_dll_msvcrt, "_beep");
}
void _elfimplib__beep() {
asm("leave\njmp *%0" : : "r"(_imp___beep));
}

void _elfimplib__beginthread() asm("beginthread");
void *_imp___beginthread = NULL;
__attribute__((constructor)) void _elfimplib_init__beginthread() {
load_dll_msvcrt();
_imp___beginthread = (void *) _elf_GetProcAddress(_dll_msvcrt, "_beginthread");
}
void _elfimplib__beginthread() {
asm("leave\njmp *%0" : : "r"(_imp___beginthread));
}

void _elfimplib__beginthreadex() asm("beginthreadex");
void *_imp___beginthreadex = NULL;
__attribute__((constructor)) void _elfimplib_init__beginthreadex() {
load_dll_msvcrt();
_imp___beginthreadex = (void *) _elf_GetProcAddress(_dll_msvcrt, "_beginthreadex");
}
void _elfimplib__beginthreadex() {
asm("leave\njmp *%0" : : "r"(_imp___beginthreadex));
}

void _elfimplib__c_exit() asm("c_exit");
void *_imp___c_exit = NULL;
__attribute__((constructor)) void _elfimplib_init__c_exit() {
load_dll_msvcrt();
_imp___c_exit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_c_exit");
}
void _elfimplib__c_exit() {
asm("leave\njmp *%0" : : "r"(_imp___c_exit));
}

void _elfimplib__cabs() asm("cabs");
void *_imp___cabs = NULL;
__attribute__((constructor)) void _elfimplib_init__cabs() {
load_dll_msvcrt();
_imp___cabs = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cabs");
}
void _elfimplib__cabs() {
asm("leave\njmp *%0" : : "r"(_imp___cabs));
}

void _elfimplib__callnewh() asm("callnewh");
void *_imp___callnewh = NULL;
__attribute__((constructor)) void _elfimplib_init__callnewh() {
load_dll_msvcrt();
_imp___callnewh = (void *) _elf_GetProcAddress(_dll_msvcrt, "_callnewh");
}
void _elfimplib__callnewh() {
asm("leave\njmp *%0" : : "r"(_imp___callnewh));
}

void _elfimplib__cexit() asm("cexit");
void *_imp___cexit = NULL;
__attribute__((constructor)) void _elfimplib_init__cexit() {
load_dll_msvcrt();
_imp___cexit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cexit");
}
void _elfimplib__cexit() {
asm("leave\njmp *%0" : : "r"(_imp___cexit));
}

void _elfimplib__cgets() asm("cgets");
void *_imp___cgets = NULL;
__attribute__((constructor)) void _elfimplib_init__cgets() {
load_dll_msvcrt();
_imp___cgets = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cgets");
}
void _elfimplib__cgets() {
asm("leave\njmp *%0" : : "r"(_imp___cgets));
}

void _elfimplib__cgetws() asm("cgetws");
void *_imp___cgetws = NULL;
__attribute__((constructor)) void _elfimplib_init__cgetws() {
load_dll_msvcrt();
_imp___cgetws = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cgetws");
}
void _elfimplib__cgetws() {
asm("leave\njmp *%0" : : "r"(_imp___cgetws));
}

void _elfimplib__chdir() asm("chdir");
void *_imp___chdir = NULL;
__attribute__((constructor)) void _elfimplib_init__chdir() {
load_dll_msvcrt();
_imp___chdir = (void *) _elf_GetProcAddress(_dll_msvcrt, "_chdir");
}
void _elfimplib__chdir() {
asm("leave\njmp *%0" : : "r"(_imp___chdir));
}

void _elfimplib__chdrive() asm("chdrive");
void *_imp___chdrive = NULL;
__attribute__((constructor)) void _elfimplib_init__chdrive() {
load_dll_msvcrt();
_imp___chdrive = (void *) _elf_GetProcAddress(_dll_msvcrt, "_chdrive");
}
void _elfimplib__chdrive() {
asm("leave\njmp *%0" : : "r"(_imp___chdrive));
}

void _elfimplib__chgsign() asm("chgsign");
void *_imp___chgsign = NULL;
__attribute__((constructor)) void _elfimplib_init__chgsign() {
load_dll_msvcrt();
_imp___chgsign = (void *) _elf_GetProcAddress(_dll_msvcrt, "_chgsign");
}
void _elfimplib__chgsign() {
asm("leave\njmp *%0" : : "r"(_imp___chgsign));
}

void _elfimplib__chkesp() asm("chkesp");
void *_imp___chkesp = NULL;
__attribute__((constructor)) void _elfimplib_init__chkesp() {
load_dll_msvcrt();
_imp___chkesp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_chkesp");
}
void _elfimplib__chkesp() {
asm("leave\njmp *%0" : : "r"(_imp___chkesp));
}

void _elfimplib__chmod() asm("chmod");
void *_imp___chmod = NULL;
__attribute__((constructor)) void _elfimplib_init__chmod() {
load_dll_msvcrt();
_imp___chmod = (void *) _elf_GetProcAddress(_dll_msvcrt, "_chmod");
}
void _elfimplib__chmod() {
asm("leave\njmp *%0" : : "r"(_imp___chmod));
}

void _elfimplib__chsize() asm("chsize");
void *_imp___chsize = NULL;
__attribute__((constructor)) void _elfimplib_init__chsize() {
load_dll_msvcrt();
_imp___chsize = (void *) _elf_GetProcAddress(_dll_msvcrt, "_chsize");
}
void _elfimplib__chsize() {
asm("leave\njmp *%0" : : "r"(_imp___chsize));
}

void _elfimplib__clearfp() asm("clearfp");
void *_imp___clearfp = NULL;
__attribute__((constructor)) void _elfimplib_init__clearfp() {
load_dll_msvcrt();
_imp___clearfp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_clearfp");
}
void _elfimplib__clearfp() {
asm("leave\njmp *%0" : : "r"(_imp___clearfp));
}

void _elfimplib__close() asm("close");
void *_imp___close = NULL;
__attribute__((constructor)) void _elfimplib_init__close() {
load_dll_msvcrt();
_imp___close = (void *) _elf_GetProcAddress(_dll_msvcrt, "_close");
}
void _elfimplib__close() {
asm("leave\njmp *%0" : : "r"(_imp___close));
}

void _elfimplib__commit() asm("commit");
void *_imp___commit = NULL;
__attribute__((constructor)) void _elfimplib_init__commit() {
load_dll_msvcrt();
_imp___commit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_commit");
}
void _elfimplib__commit() {
asm("leave\njmp *%0" : : "r"(_imp___commit));
}

void _elfimplib__commode() asm("commode");
void *_imp___commode = NULL;
__attribute__((constructor)) void _elfimplib_init__commode() {
load_dll_msvcrt();
_imp___commode = (void *) _elf_GetProcAddress(_dll_msvcrt, "_commode");
}
void _elfimplib__commode() {
asm("leave\njmp *%0" : : "r"(_imp___commode));
}

void _elfimplib__control87() asm("control87");
void *_imp___control87 = NULL;
__attribute__((constructor)) void _elfimplib_init__control87() {
load_dll_msvcrt();
_imp___control87 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_control87");
}
void _elfimplib__control87() {
asm("leave\njmp *%0" : : "r"(_imp___control87));
}

void _elfimplib__controlfp() asm("controlfp");
void *_imp___controlfp = NULL;
__attribute__((constructor)) void _elfimplib_init__controlfp() {
load_dll_msvcrt();
_imp___controlfp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_controlfp");
}
void _elfimplib__controlfp() {
asm("leave\njmp *%0" : : "r"(_imp___controlfp));
}

void _elfimplib__copysign() asm("copysign");
void *_imp___copysign = NULL;
__attribute__((constructor)) void _elfimplib_init__copysign() {
load_dll_msvcrt();
_imp___copysign = (void *) _elf_GetProcAddress(_dll_msvcrt, "_copysign");
}
void _elfimplib__copysign() {
asm("leave\njmp *%0" : : "r"(_imp___copysign));
}

void _elfimplib__cprintf() asm("cprintf");
void *_imp___cprintf = NULL;
__attribute__((constructor)) void _elfimplib_init__cprintf() {
load_dll_msvcrt();
_imp___cprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cprintf");
}
void _elfimplib__cprintf() {
asm("leave\njmp *%0" : : "r"(_imp___cprintf));
}

void _elfimplib__cputs() asm("cputs");
void *_imp___cputs = NULL;
__attribute__((constructor)) void _elfimplib_init__cputs() {
load_dll_msvcrt();
_imp___cputs = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cputs");
}
void _elfimplib__cputs() {
asm("leave\njmp *%0" : : "r"(_imp___cputs));
}

void _elfimplib__cputws() asm("cputws");
void *_imp___cputws = NULL;
__attribute__((constructor)) void _elfimplib_init__cputws() {
load_dll_msvcrt();
_imp___cputws = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cputws");
}
void _elfimplib__cputws() {
asm("leave\njmp *%0" : : "r"(_imp___cputws));
}

void _elfimplib__creat() asm("creat");
void *_imp___creat = NULL;
__attribute__((constructor)) void _elfimplib_init__creat() {
load_dll_msvcrt();
_imp___creat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_creat");
}
void _elfimplib__creat() {
asm("leave\njmp *%0" : : "r"(_imp___creat));
}

void _elfimplib__cscanf() asm("cscanf");
void *_imp___cscanf = NULL;
__attribute__((constructor)) void _elfimplib_init__cscanf() {
load_dll_msvcrt();
_imp___cscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cscanf");
}
void _elfimplib__cscanf() {
asm("leave\njmp *%0" : : "r"(_imp___cscanf));
}

void _elfimplib__ctime64() asm("ctime64");
void *_imp___ctime64 = NULL;
__attribute__((constructor)) void _elfimplib_init__ctime64() {
load_dll_msvcrt();
_imp___ctime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ctime64");
}
void _elfimplib__ctime64() {
asm("leave\njmp *%0" : : "r"(_imp___ctime64));
}

void _elfimplib__ctype() asm("ctype");
void *_imp___ctype = NULL;
__attribute__((constructor)) void _elfimplib_init__ctype() {
load_dll_msvcrt();
_imp___ctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ctype");
}
void _elfimplib__ctype() {
asm("leave\njmp *%0" : : "r"(_imp___ctype));
}

void _elfimplib__cwait() asm("cwait");
void *_imp___cwait = NULL;
__attribute__((constructor)) void _elfimplib_init__cwait() {
load_dll_msvcrt();
_imp___cwait = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cwait");
}
void _elfimplib__cwait() {
asm("leave\njmp *%0" : : "r"(_imp___cwait));
}

void _elfimplib__cwprintf() asm("cwprintf");
void *_imp___cwprintf = NULL;
__attribute__((constructor)) void _elfimplib_init__cwprintf() {
load_dll_msvcrt();
_imp___cwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cwprintf");
}
void _elfimplib__cwprintf() {
asm("leave\njmp *%0" : : "r"(_imp___cwprintf));
}

void _elfimplib__cwscanf() asm("cwscanf");
void *_imp___cwscanf = NULL;
__attribute__((constructor)) void _elfimplib_init__cwscanf() {
load_dll_msvcrt();
_imp___cwscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cwscanf");
}
void _elfimplib__cwscanf() {
asm("leave\njmp *%0" : : "r"(_imp___cwscanf));
}

void _elfimplib__daylight() asm("daylight");
void *_imp___daylight = NULL;
__attribute__((constructor)) void _elfimplib_init__daylight() {
load_dll_msvcrt();
_imp___daylight = (void *) _elf_GetProcAddress(_dll_msvcrt, "_daylight");
}
void _elfimplib__daylight() {
asm("leave\njmp *%0" : : "r"(_imp___daylight));
}

void _elfimplib__dstbias() asm("dstbias");
void *_imp___dstbias = NULL;
__attribute__((constructor)) void _elfimplib_init__dstbias() {
load_dll_msvcrt();
_imp___dstbias = (void *) _elf_GetProcAddress(_dll_msvcrt, "_dstbias");
}
void _elfimplib__dstbias() {
asm("leave\njmp *%0" : : "r"(_imp___dstbias));
}

void _elfimplib__dup() asm("dup");
void *_imp___dup = NULL;
__attribute__((constructor)) void _elfimplib_init__dup() {
load_dll_msvcrt();
_imp___dup = (void *) _elf_GetProcAddress(_dll_msvcrt, "_dup");
}
void _elfimplib__dup() {
asm("leave\njmp *%0" : : "r"(_imp___dup));
}

void _elfimplib__dup2() asm("dup2");
void *_imp___dup2 = NULL;
__attribute__((constructor)) void _elfimplib_init__dup2() {
load_dll_msvcrt();
_imp___dup2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_dup2");
}
void _elfimplib__dup2() {
asm("leave\njmp *%0" : : "r"(_imp___dup2));
}

void _elfimplib__ecvt() asm("ecvt");
void *_imp___ecvt = NULL;
__attribute__((constructor)) void _elfimplib_init__ecvt() {
load_dll_msvcrt();
_imp___ecvt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ecvt");
}
void _elfimplib__ecvt() {
asm("leave\njmp *%0" : : "r"(_imp___ecvt));
}

void _elfimplib__endthread() asm("endthread");
void *_imp___endthread = NULL;
__attribute__((constructor)) void _elfimplib_init__endthread() {
load_dll_msvcrt();
_imp___endthread = (void *) _elf_GetProcAddress(_dll_msvcrt, "_endthread");
}
void _elfimplib__endthread() {
asm("leave\njmp *%0" : : "r"(_imp___endthread));
}

void _elfimplib__endthreadex() asm("endthreadex");
void *_imp___endthreadex = NULL;
__attribute__((constructor)) void _elfimplib_init__endthreadex() {
load_dll_msvcrt();
_imp___endthreadex = (void *) _elf_GetProcAddress(_dll_msvcrt, "_endthreadex");
}
void _elfimplib__endthreadex() {
asm("leave\njmp *%0" : : "r"(_imp___endthreadex));
}

void _elfimplib__environ() asm("environ");
void *_imp___environ = NULL;
__attribute__((constructor)) void _elfimplib_init__environ() {
load_dll_msvcrt();
_imp___environ = (void *) _elf_GetProcAddress(_dll_msvcrt, "_environ");
}
void _elfimplib__environ() {
asm("leave\njmp *%0" : : "r"(_imp___environ));
}

void _elfimplib__eof() asm("eof");
void *_imp___eof = NULL;
__attribute__((constructor)) void _elfimplib_init__eof() {
load_dll_msvcrt();
_imp___eof = (void *) _elf_GetProcAddress(_dll_msvcrt, "_eof");
}
void _elfimplib__eof() {
asm("leave\njmp *%0" : : "r"(_imp___eof));
}

void _elfimplib__errno() asm("errno");
void *_imp___errno = NULL;
__attribute__((constructor)) void _elfimplib_init__errno() {
load_dll_msvcrt();
_imp___errno = (void *) _elf_GetProcAddress(_dll_msvcrt, "_errno");
}
void _elfimplib__errno() {
asm("leave\njmp *%0" : : "r"(_imp___errno));
}

void _elfimplib__except_handler2() asm("except_handler2");
void *_imp___except_handler2 = NULL;
__attribute__((constructor)) void _elfimplib_init__except_handler2() {
load_dll_msvcrt();
_imp___except_handler2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_except_handler2");
}
void _elfimplib__except_handler2() {
asm("leave\njmp *%0" : : "r"(_imp___except_handler2));
}

void _elfimplib__except_handler3() asm("except_handler3");
void *_imp___except_handler3 = NULL;
__attribute__((constructor)) void _elfimplib_init__except_handler3() {
load_dll_msvcrt();
_imp___except_handler3 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_except_handler3");
}
void _elfimplib__except_handler3() {
asm("leave\njmp *%0" : : "r"(_imp___except_handler3));
}

void _elfimplib__execl() asm("execl");
void *_imp___execl = NULL;
__attribute__((constructor)) void _elfimplib_init__execl() {
load_dll_msvcrt();
_imp___execl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execl");
}
void _elfimplib__execl() {
asm("leave\njmp *%0" : : "r"(_imp___execl));
}

void _elfimplib__execle() asm("execle");
void *_imp___execle = NULL;
__attribute__((constructor)) void _elfimplib_init__execle() {
load_dll_msvcrt();
_imp___execle = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execle");
}
void _elfimplib__execle() {
asm("leave\njmp *%0" : : "r"(_imp___execle));
}

void _elfimplib__execlp() asm("execlp");
void *_imp___execlp = NULL;
__attribute__((constructor)) void _elfimplib_init__execlp() {
load_dll_msvcrt();
_imp___execlp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execlp");
}
void _elfimplib__execlp() {
asm("leave\njmp *%0" : : "r"(_imp___execlp));
}

void _elfimplib__execlpe() asm("execlpe");
void *_imp___execlpe = NULL;
__attribute__((constructor)) void _elfimplib_init__execlpe() {
load_dll_msvcrt();
_imp___execlpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execlpe");
}
void _elfimplib__execlpe() {
asm("leave\njmp *%0" : : "r"(_imp___execlpe));
}

void _elfimplib__execv() asm("execv");
void *_imp___execv = NULL;
__attribute__((constructor)) void _elfimplib_init__execv() {
load_dll_msvcrt();
_imp___execv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execv");
}
void _elfimplib__execv() {
asm("leave\njmp *%0" : : "r"(_imp___execv));
}

void _elfimplib__execve() asm("execve");
void *_imp___execve = NULL;
__attribute__((constructor)) void _elfimplib_init__execve() {
load_dll_msvcrt();
_imp___execve = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execve");
}
void _elfimplib__execve() {
asm("leave\njmp *%0" : : "r"(_imp___execve));
}

void _elfimplib__execvp() asm("execvp");
void *_imp___execvp = NULL;
__attribute__((constructor)) void _elfimplib_init__execvp() {
load_dll_msvcrt();
_imp___execvp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execvp");
}
void _elfimplib__execvp() {
asm("leave\njmp *%0" : : "r"(_imp___execvp));
}

void _elfimplib__execvpe() asm("execvpe");
void *_imp___execvpe = NULL;
__attribute__((constructor)) void _elfimplib_init__execvpe() {
load_dll_msvcrt();
_imp___execvpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_execvpe");
}
void _elfimplib__execvpe() {
asm("leave\njmp *%0" : : "r"(_imp___execvpe));
}

void _elfimplib__expand() asm("expand");
void *_imp___expand = NULL;
__attribute__((constructor)) void _elfimplib_init__expand() {
load_dll_msvcrt();
_imp___expand = (void *) _elf_GetProcAddress(_dll_msvcrt, "_expand");
}
void _elfimplib__expand() {
asm("leave\njmp *%0" : : "r"(_imp___expand));
}

void _elfimplib__fcloseall() asm("fcloseall");
void *_imp___fcloseall = NULL;
__attribute__((constructor)) void _elfimplib_init__fcloseall() {
load_dll_msvcrt();
_imp___fcloseall = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fcloseall");
}
void _elfimplib__fcloseall() {
asm("leave\njmp *%0" : : "r"(_imp___fcloseall));
}

void _elfimplib__fcvt() asm("fcvt");
void *_imp___fcvt = NULL;
__attribute__((constructor)) void _elfimplib_init__fcvt() {
load_dll_msvcrt();
_imp___fcvt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fcvt");
}
void _elfimplib__fcvt() {
asm("leave\njmp *%0" : : "r"(_imp___fcvt));
}

void _elfimplib__fdopen() asm("fdopen");
void *_imp___fdopen = NULL;
__attribute__((constructor)) void _elfimplib_init__fdopen() {
load_dll_msvcrt();
_imp___fdopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fdopen");
}
void _elfimplib__fdopen() {
asm("leave\njmp *%0" : : "r"(_imp___fdopen));
}

void _elfimplib__fgetchar() asm("fgetchar");
void *_imp___fgetchar = NULL;
__attribute__((constructor)) void _elfimplib_init__fgetchar() {
load_dll_msvcrt();
_imp___fgetchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fgetchar");
}
void _elfimplib__fgetchar() {
asm("leave\njmp *%0" : : "r"(_imp___fgetchar));
}

void _elfimplib__fgetwchar() asm("fgetwchar");
void *_imp___fgetwchar = NULL;
__attribute__((constructor)) void _elfimplib_init__fgetwchar() {
load_dll_msvcrt();
_imp___fgetwchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fgetwchar");
}
void _elfimplib__fgetwchar() {
asm("leave\njmp *%0" : : "r"(_imp___fgetwchar));
}

void _elfimplib__filbuf() asm("filbuf");
void *_imp___filbuf = NULL;
__attribute__((constructor)) void _elfimplib_init__filbuf() {
load_dll_msvcrt();
_imp___filbuf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_filbuf");
}
void _elfimplib__filbuf() {
asm("leave\njmp *%0" : : "r"(_imp___filbuf));
}

void _elfimplib__fileinfo() asm("fileinfo");
void *_imp___fileinfo = NULL;
__attribute__((constructor)) void _elfimplib_init__fileinfo() {
load_dll_msvcrt();
_imp___fileinfo = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fileinfo");
}
void _elfimplib__fileinfo() {
asm("leave\njmp *%0" : : "r"(_imp___fileinfo));
}

void _elfimplib__filelength() asm("filelength");
void *_imp___filelength = NULL;
__attribute__((constructor)) void _elfimplib_init__filelength() {
load_dll_msvcrt();
_imp___filelength = (void *) _elf_GetProcAddress(_dll_msvcrt, "_filelength");
}
void _elfimplib__filelength() {
asm("leave\njmp *%0" : : "r"(_imp___filelength));
}

void _elfimplib__filelengthi64() asm("filelengthi64");
void *_imp___filelengthi64 = NULL;
__attribute__((constructor)) void _elfimplib_init__filelengthi64() {
load_dll_msvcrt();
_imp___filelengthi64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_filelengthi64");
}
void _elfimplib__filelengthi64() {
asm("leave\njmp *%0" : : "r"(_imp___filelengthi64));
}

void _elfimplib__fileno() asm("fileno");
void *_imp___fileno = NULL;
__attribute__((constructor)) void _elfimplib_init__fileno() {
load_dll_msvcrt();
_imp___fileno = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fileno");
}
void _elfimplib__fileno() {
asm("leave\njmp *%0" : : "r"(_imp___fileno));
}

void _elfimplib__findclose() asm("findclose");
void *_imp___findclose = NULL;
__attribute__((constructor)) void _elfimplib_init__findclose() {
load_dll_msvcrt();
_imp___findclose = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findclose");
}
void _elfimplib__findclose() {
asm("leave\njmp *%0" : : "r"(_imp___findclose));
}

void _elfimplib__findfirst() asm("findfirst");
void *_imp___findfirst = NULL;
__attribute__((constructor)) void _elfimplib_init__findfirst() {
load_dll_msvcrt();
_imp___findfirst = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findfirst");
}
void _elfimplib__findfirst() {
asm("leave\njmp *%0" : : "r"(_imp___findfirst));
}

void _elfimplib__findfirst64() asm("findfirst64");
void *_imp___findfirst64 = NULL;
__attribute__((constructor)) void _elfimplib_init__findfirst64() {
load_dll_msvcrt();
_imp___findfirst64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findfirst64");
}
void _elfimplib__findfirst64() {
asm("leave\njmp *%0" : : "r"(_imp___findfirst64));
}

void _elfimplib__findfirsti64() asm("findfirsti64");
void *_imp___findfirsti64 = NULL;
__attribute__((constructor)) void _elfimplib_init__findfirsti64() {
load_dll_msvcrt();
_imp___findfirsti64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findfirsti64");
}
void _elfimplib__findfirsti64() {
asm("leave\njmp *%0" : : "r"(_imp___findfirsti64));
}

void _elfimplib__findnext() asm("findnext");
void *_imp___findnext = NULL;
__attribute__((constructor)) void _elfimplib_init__findnext() {
load_dll_msvcrt();
_imp___findnext = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findnext");
}
void _elfimplib__findnext() {
asm("leave\njmp *%0" : : "r"(_imp___findnext));
}

void _elfimplib__findnext64() asm("findnext64");
void *_imp___findnext64 = NULL;
__attribute__((constructor)) void _elfimplib_init__findnext64() {
load_dll_msvcrt();
_imp___findnext64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findnext64");
}
void _elfimplib__findnext64() {
asm("leave\njmp *%0" : : "r"(_imp___findnext64));
}

void _elfimplib__findnexti64() asm("findnexti64");
void *_imp___findnexti64 = NULL;
__attribute__((constructor)) void _elfimplib_init__findnexti64() {
load_dll_msvcrt();
_imp___findnexti64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findnexti64");
}
void _elfimplib__findnexti64() {
asm("leave\njmp *%0" : : "r"(_imp___findnexti64));
}

void _elfimplib__finite() asm("finite");
void *_imp___finite = NULL;
__attribute__((constructor)) void _elfimplib_init__finite() {
load_dll_msvcrt();
_imp___finite = (void *) _elf_GetProcAddress(_dll_msvcrt, "_finite");
}
void _elfimplib__finite() {
asm("leave\njmp *%0" : : "r"(_imp___finite));
}

void _elfimplib__flsbuf() asm("flsbuf");
void *_imp___flsbuf = NULL;
__attribute__((constructor)) void _elfimplib_init__flsbuf() {
load_dll_msvcrt();
_imp___flsbuf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_flsbuf");
}
void _elfimplib__flsbuf() {
asm("leave\njmp *%0" : : "r"(_imp___flsbuf));
}

void _elfimplib__flushall() asm("flushall");
void *_imp___flushall = NULL;
__attribute__((constructor)) void _elfimplib_init__flushall() {
load_dll_msvcrt();
_imp___flushall = (void *) _elf_GetProcAddress(_dll_msvcrt, "_flushall");
}
void _elfimplib__flushall() {
asm("leave\njmp *%0" : : "r"(_imp___flushall));
}

void _elfimplib__fmode() asm("fmode");
void *_imp___fmode = NULL;
__attribute__((constructor)) void _elfimplib_init__fmode() {
load_dll_msvcrt();
_imp___fmode = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fmode");
}
void _elfimplib__fmode() {
asm("leave\njmp *%0" : : "r"(_imp___fmode));
}

void _elfimplib__fpclass() asm("fpclass");
void *_imp___fpclass = NULL;
__attribute__((constructor)) void _elfimplib_init__fpclass() {
load_dll_msvcrt();
_imp___fpclass = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fpclass");
}
void _elfimplib__fpclass() {
asm("leave\njmp *%0" : : "r"(_imp___fpclass));
}

void _elfimplib__fpieee_flt() asm("fpieee_flt");
void *_imp___fpieee_flt = NULL;
__attribute__((constructor)) void _elfimplib_init__fpieee_flt() {
load_dll_msvcrt();
_imp___fpieee_flt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fpieee_flt");
}
void _elfimplib__fpieee_flt() {
asm("leave\njmp *%0" : : "r"(_imp___fpieee_flt));
}

void _elfimplib__fpreset() asm("fpreset");
void *_imp___fpreset = NULL;
__attribute__((constructor)) void _elfimplib_init__fpreset() {
load_dll_msvcrt();
_imp___fpreset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fpreset");
}
void _elfimplib__fpreset() {
asm("leave\njmp *%0" : : "r"(_imp___fpreset));
}

void _elfimplib__fputchar() asm("fputchar");
void *_imp___fputchar = NULL;
__attribute__((constructor)) void _elfimplib_init__fputchar() {
load_dll_msvcrt();
_imp___fputchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fputchar");
}
void _elfimplib__fputchar() {
asm("leave\njmp *%0" : : "r"(_imp___fputchar));
}

void _elfimplib__fputwchar() asm("fputwchar");
void *_imp___fputwchar = NULL;
__attribute__((constructor)) void _elfimplib_init__fputwchar() {
load_dll_msvcrt();
_imp___fputwchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fputwchar");
}
void _elfimplib__fputwchar() {
asm("leave\njmp *%0" : : "r"(_imp___fputwchar));
}

void _elfimplib__fsopen() asm("fsopen");
void *_imp___fsopen = NULL;
__attribute__((constructor)) void _elfimplib_init__fsopen() {
load_dll_msvcrt();
_imp___fsopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fsopen");
}
void _elfimplib__fsopen() {
asm("leave\njmp *%0" : : "r"(_imp___fsopen));
}

void _elfimplib__fstat() asm("fstat");
void *_imp___fstat = NULL;
__attribute__((constructor)) void _elfimplib_init__fstat() {
load_dll_msvcrt();
_imp___fstat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fstat");
}
void _elfimplib__fstat() {
asm("leave\njmp *%0" : : "r"(_imp___fstat));
}

void _elfimplib__fstat64() asm("fstat64");
void *_imp___fstat64 = NULL;
__attribute__((constructor)) void _elfimplib_init__fstat64() {
load_dll_msvcrt();
_imp___fstat64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fstat64");
}
void _elfimplib__fstat64() {
asm("leave\njmp *%0" : : "r"(_imp___fstat64));
}

void _elfimplib__fstati64() asm("fstati64");
void *_imp___fstati64 = NULL;
__attribute__((constructor)) void _elfimplib_init__fstati64() {
load_dll_msvcrt();
_imp___fstati64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fstati64");
}
void _elfimplib__fstati64() {
asm("leave\njmp *%0" : : "r"(_imp___fstati64));
}

void _elfimplib__ftime() asm("ftime");
void *_imp___ftime = NULL;
__attribute__((constructor)) void _elfimplib_init__ftime() {
load_dll_msvcrt();
_imp___ftime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ftime");
}
void _elfimplib__ftime() {
asm("leave\njmp *%0" : : "r"(_imp___ftime));
}

void _elfimplib__ftime64() asm("ftime64");
void *_imp___ftime64 = NULL;
__attribute__((constructor)) void _elfimplib_init__ftime64() {
load_dll_msvcrt();
_imp___ftime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ftime64");
}
void _elfimplib__ftime64() {
asm("leave\njmp *%0" : : "r"(_imp___ftime64));
}

void _elfimplib__ftol() asm("ftol");
void *_imp___ftol = NULL;
__attribute__((constructor)) void _elfimplib_init__ftol() {
load_dll_msvcrt();
_imp___ftol = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ftol");
}
void _elfimplib__ftol() {
asm("leave\njmp *%0" : : "r"(_imp___ftol));
}

void _elfimplib__fullpath() asm("fullpath");
void *_imp___fullpath = NULL;
__attribute__((constructor)) void _elfimplib_init__fullpath() {
load_dll_msvcrt();
_imp___fullpath = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fullpath");
}
void _elfimplib__fullpath() {
asm("leave\njmp *%0" : : "r"(_imp___fullpath));
}

void _elfimplib__futime() asm("futime");
void *_imp___futime = NULL;
__attribute__((constructor)) void _elfimplib_init__futime() {
load_dll_msvcrt();
_imp___futime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_futime");
}
void _elfimplib__futime() {
asm("leave\njmp *%0" : : "r"(_imp___futime));
}

void _elfimplib__futime64() asm("futime64");
void *_imp___futime64 = NULL;
__attribute__((constructor)) void _elfimplib_init__futime64() {
load_dll_msvcrt();
_imp___futime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_futime64");
}
void _elfimplib__futime64() {
asm("leave\njmp *%0" : : "r"(_imp___futime64));
}

void _elfimplib__gcvt() asm("gcvt");
void *_imp___gcvt = NULL;
__attribute__((constructor)) void _elfimplib_init__gcvt() {
load_dll_msvcrt();
_imp___gcvt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_gcvt");
}
void _elfimplib__gcvt() {
asm("leave\njmp *%0" : : "r"(_imp___gcvt));
}

void _elfimplib__get_osfhandle() asm("get_osfhandle");
void *_imp___get_osfhandle = NULL;
__attribute__((constructor)) void _elfimplib_init__get_osfhandle() {
load_dll_msvcrt();
_imp___get_osfhandle = (void *) _elf_GetProcAddress(_dll_msvcrt, "_get_osfhandle");
}
void _elfimplib__get_osfhandle() {
asm("leave\njmp *%0" : : "r"(_imp___get_osfhandle));
}

void _elfimplib__get_sbh_threshold() asm("get_sbh_threshold");
void *_imp___get_sbh_threshold = NULL;
__attribute__((constructor)) void _elfimplib_init__get_sbh_threshold() {
load_dll_msvcrt();
_imp___get_sbh_threshold = (void *) _elf_GetProcAddress(_dll_msvcrt, "_get_sbh_threshold");
}
void _elfimplib__get_sbh_threshold() {
asm("leave\njmp *%0" : : "r"(_imp___get_sbh_threshold));
}

void _elfimplib__getch() asm("getch");
void *_imp___getch = NULL;
__attribute__((constructor)) void _elfimplib_init__getch() {
load_dll_msvcrt();
_imp___getch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getch");
}
void _elfimplib__getch() {
asm("leave\njmp *%0" : : "r"(_imp___getch));
}

void _elfimplib__getche() asm("getche");
void *_imp___getche = NULL;
__attribute__((constructor)) void _elfimplib_init__getche() {
load_dll_msvcrt();
_imp___getche = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getche");
}
void _elfimplib__getche() {
asm("leave\njmp *%0" : : "r"(_imp___getche));
}

void _elfimplib__getcwd() asm("getcwd");
void *_imp___getcwd = NULL;
__attribute__((constructor)) void _elfimplib_init__getcwd() {
load_dll_msvcrt();
_imp___getcwd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getcwd");
}
void _elfimplib__getcwd() {
asm("leave\njmp *%0" : : "r"(_imp___getcwd));
}

void _elfimplib__getdcwd() asm("getdcwd");
void *_imp___getdcwd = NULL;
__attribute__((constructor)) void _elfimplib_init__getdcwd() {
load_dll_msvcrt();
_imp___getdcwd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getdcwd");
}
void _elfimplib__getdcwd() {
asm("leave\njmp *%0" : : "r"(_imp___getdcwd));
}

void _elfimplib__getdiskfree() asm("getdiskfree");
void *_imp___getdiskfree = NULL;
__attribute__((constructor)) void _elfimplib_init__getdiskfree() {
load_dll_msvcrt();
_imp___getdiskfree = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getdiskfree");
}
void _elfimplib__getdiskfree() {
asm("leave\njmp *%0" : : "r"(_imp___getdiskfree));
}

void _elfimplib__getdllprocaddr() asm("getdllprocaddr");
void *_imp___getdllprocaddr = NULL;
__attribute__((constructor)) void _elfimplib_init__getdllprocaddr() {
load_dll_msvcrt();
_imp___getdllprocaddr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getdllprocaddr");
}
void _elfimplib__getdllprocaddr() {
asm("leave\njmp *%0" : : "r"(_imp___getdllprocaddr));
}

void _elfimplib__getdrive() asm("getdrive");
void *_imp___getdrive = NULL;
__attribute__((constructor)) void _elfimplib_init__getdrive() {
load_dll_msvcrt();
_imp___getdrive = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getdrive");
}
void _elfimplib__getdrive() {
asm("leave\njmp *%0" : : "r"(_imp___getdrive));
}

void _elfimplib__getdrives() asm("getdrives");
void *_imp___getdrives = NULL;
__attribute__((constructor)) void _elfimplib_init__getdrives() {
load_dll_msvcrt();
_imp___getdrives = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getdrives");
}
void _elfimplib__getdrives() {
asm("leave\njmp *%0" : : "r"(_imp___getdrives));
}

void _elfimplib__getmaxstdio() asm("getmaxstdio");
void *_imp___getmaxstdio = NULL;
__attribute__((constructor)) void _elfimplib_init__getmaxstdio() {
load_dll_msvcrt();
_imp___getmaxstdio = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getmaxstdio");
}
void _elfimplib__getmaxstdio() {
asm("leave\njmp *%0" : : "r"(_imp___getmaxstdio));
}

void _elfimplib__getmbcp() asm("getmbcp");
void *_imp___getmbcp = NULL;
__attribute__((constructor)) void _elfimplib_init__getmbcp() {
load_dll_msvcrt();
_imp___getmbcp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getmbcp");
}
void _elfimplib__getmbcp() {
asm("leave\njmp *%0" : : "r"(_imp___getmbcp));
}

void _elfimplib__getpid() asm("getpid");
void *_imp___getpid = NULL;
__attribute__((constructor)) void _elfimplib_init__getpid() {
load_dll_msvcrt();
_imp___getpid = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getpid");
}
void _elfimplib__getpid() {
asm("leave\njmp *%0" : : "r"(_imp___getpid));
}

void _elfimplib__getsystime() asm("getsystime");
void *_imp___getsystime = NULL;
__attribute__((constructor)) void _elfimplib_init__getsystime() {
load_dll_msvcrt();
_imp___getsystime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getsystime");
}
void _elfimplib__getsystime() {
asm("leave\njmp *%0" : : "r"(_imp___getsystime));
}

void _elfimplib__getw() asm("getw");
void *_imp___getw = NULL;
__attribute__((constructor)) void _elfimplib_init__getw() {
load_dll_msvcrt();
_imp___getw = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getw");
}
void _elfimplib__getw() {
asm("leave\njmp *%0" : : "r"(_imp___getw));
}

void _elfimplib__getwch() asm("getwch");
void *_imp___getwch = NULL;
__attribute__((constructor)) void _elfimplib_init__getwch() {
load_dll_msvcrt();
_imp___getwch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getwch");
}
void _elfimplib__getwch() {
asm("leave\njmp *%0" : : "r"(_imp___getwch));
}

void _elfimplib__getwche() asm("getwche");
void *_imp___getwche = NULL;
__attribute__((constructor)) void _elfimplib_init__getwche() {
load_dll_msvcrt();
_imp___getwche = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getwche");
}
void _elfimplib__getwche() {
asm("leave\njmp *%0" : : "r"(_imp___getwche));
}

void _elfimplib__getws() asm("getws");
void *_imp___getws = NULL;
__attribute__((constructor)) void _elfimplib_init__getws() {
load_dll_msvcrt();
_imp___getws = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getws");
}
void _elfimplib__getws() {
asm("leave\njmp *%0" : : "r"(_imp___getws));
}

void _elfimplib__global_unwind2() asm("global_unwind2");
void *_imp___global_unwind2 = NULL;
__attribute__((constructor)) void _elfimplib_init__global_unwind2() {
load_dll_msvcrt();
_imp___global_unwind2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_global_unwind2");
}
void _elfimplib__global_unwind2() {
asm("leave\njmp *%0" : : "r"(_imp___global_unwind2));
}

void _elfimplib__gmtime64() asm("gmtime64");
void *_imp___gmtime64 = NULL;
__attribute__((constructor)) void _elfimplib_init__gmtime64() {
load_dll_msvcrt();
_imp___gmtime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_gmtime64");
}
void _elfimplib__gmtime64() {
asm("leave\njmp *%0" : : "r"(_imp___gmtime64));
}

void _elfimplib__heapadd() asm("heapadd");
void *_imp___heapadd = NULL;
__attribute__((constructor)) void _elfimplib_init__heapadd() {
load_dll_msvcrt();
_imp___heapadd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_heapadd");
}
void _elfimplib__heapadd() {
asm("leave\njmp *%0" : : "r"(_imp___heapadd));
}

void _elfimplib__heapchk() asm("heapchk");
void *_imp___heapchk = NULL;
__attribute__((constructor)) void _elfimplib_init__heapchk() {
load_dll_msvcrt();
_imp___heapchk = (void *) _elf_GetProcAddress(_dll_msvcrt, "_heapchk");
}
void _elfimplib__heapchk() {
asm("leave\njmp *%0" : : "r"(_imp___heapchk));
}

void _elfimplib__heapmin() asm("heapmin");
void *_imp___heapmin = NULL;
__attribute__((constructor)) void _elfimplib_init__heapmin() {
load_dll_msvcrt();
_imp___heapmin = (void *) _elf_GetProcAddress(_dll_msvcrt, "_heapmin");
}
void _elfimplib__heapmin() {
asm("leave\njmp *%0" : : "r"(_imp___heapmin));
}

void _elfimplib__heapset() asm("heapset");
void *_imp___heapset = NULL;
__attribute__((constructor)) void _elfimplib_init__heapset() {
load_dll_msvcrt();
_imp___heapset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_heapset");
}
void _elfimplib__heapset() {
asm("leave\njmp *%0" : : "r"(_imp___heapset));
}

void _elfimplib__heapused() asm("heapused");
void *_imp___heapused = NULL;
__attribute__((constructor)) void _elfimplib_init__heapused() {
load_dll_msvcrt();
_imp___heapused = (void *) _elf_GetProcAddress(_dll_msvcrt, "_heapused");
}
void _elfimplib__heapused() {
asm("leave\njmp *%0" : : "r"(_imp___heapused));
}

void _elfimplib__heapwalk() asm("heapwalk");
void *_imp___heapwalk = NULL;
__attribute__((constructor)) void _elfimplib_init__heapwalk() {
load_dll_msvcrt();
_imp___heapwalk = (void *) _elf_GetProcAddress(_dll_msvcrt, "_heapwalk");
}
void _elfimplib__heapwalk() {
asm("leave\njmp *%0" : : "r"(_imp___heapwalk));
}

void _elfimplib__hypot() asm("hypot");
void *_imp___hypot = NULL;
__attribute__((constructor)) void _elfimplib_init__hypot() {
load_dll_msvcrt();
_imp___hypot = (void *) _elf_GetProcAddress(_dll_msvcrt, "_hypot");
}
void _elfimplib__hypot() {
asm("leave\njmp *%0" : : "r"(_imp___hypot));
}

void _elfimplib__i64toa() asm("i64toa");
void *_imp___i64toa = NULL;
__attribute__((constructor)) void _elfimplib_init__i64toa() {
load_dll_msvcrt();
_imp___i64toa = (void *) _elf_GetProcAddress(_dll_msvcrt, "_i64toa");
}
void _elfimplib__i64toa() {
asm("leave\njmp *%0" : : "r"(_imp___i64toa));
}

void _elfimplib__i64tow() asm("i64tow");
void *_imp___i64tow = NULL;
__attribute__((constructor)) void _elfimplib_init__i64tow() {
load_dll_msvcrt();
_imp___i64tow = (void *) _elf_GetProcAddress(_dll_msvcrt, "_i64tow");
}
void _elfimplib__i64tow() {
asm("leave\njmp *%0" : : "r"(_imp___i64tow));
}

void _elfimplib__initterm() asm("initterm");
void *_imp___initterm = NULL;
__attribute__((constructor)) void _elfimplib_init__initterm() {
load_dll_msvcrt();
_imp___initterm = (void *) _elf_GetProcAddress(_dll_msvcrt, "_initterm");
}
void _elfimplib__initterm() {
asm("leave\njmp *%0" : : "r"(_imp___initterm));
}

void _elfimplib__inp() asm("inp");
void *_imp___inp = NULL;
__attribute__((constructor)) void _elfimplib_init__inp() {
load_dll_msvcrt();
_imp___inp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_inp");
}
void _elfimplib__inp() {
asm("leave\njmp *%0" : : "r"(_imp___inp));
}

void _elfimplib__inpd() asm("inpd");
void *_imp___inpd = NULL;
__attribute__((constructor)) void _elfimplib_init__inpd() {
load_dll_msvcrt();
_imp___inpd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_inpd");
}
void _elfimplib__inpd() {
asm("leave\njmp *%0" : : "r"(_imp___inpd));
}

void _elfimplib__inpw() asm("inpw");
void *_imp___inpw = NULL;
__attribute__((constructor)) void _elfimplib_init__inpw() {
load_dll_msvcrt();
_imp___inpw = (void *) _elf_GetProcAddress(_dll_msvcrt, "_inpw");
}
void _elfimplib__inpw() {
asm("leave\njmp *%0" : : "r"(_imp___inpw));
}

void _elfimplib__iob() asm("iob");
void *_imp___iob = NULL;
__attribute__((constructor)) void _elfimplib_init__iob() {
load_dll_msvcrt();
_imp___iob = (void *) _elf_GetProcAddress(_dll_msvcrt, "_iob");
}
void _elfimplib__iob() {
asm("leave\njmp *%0" : : "r"(_imp___iob));
}

void _elfimplib__isatty() asm("isatty");
void *_imp___isatty = NULL;
__attribute__((constructor)) void _elfimplib_init__isatty() {
load_dll_msvcrt();
_imp___isatty = (void *) _elf_GetProcAddress(_dll_msvcrt, "_isatty");
}
void _elfimplib__isatty() {
asm("leave\njmp *%0" : : "r"(_imp___isatty));
}

void _elfimplib__isctype() asm("isctype");
void *_imp___isctype = NULL;
__attribute__((constructor)) void _elfimplib_init__isctype() {
load_dll_msvcrt();
_imp___isctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_isctype");
}
void _elfimplib__isctype() {
asm("leave\njmp *%0" : : "r"(_imp___isctype));
}

void _elfimplib__ismbbalnum() asm("ismbbalnum");
void *_imp___ismbbalnum = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbbalnum() {
load_dll_msvcrt();
_imp___ismbbalnum = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbalnum");
}
void _elfimplib__ismbbalnum() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbalnum));
}

void _elfimplib__ismbbalpha() asm("ismbbalpha");
void *_imp___ismbbalpha = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbbalpha() {
load_dll_msvcrt();
_imp___ismbbalpha = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbalpha");
}
void _elfimplib__ismbbalpha() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbalpha));
}

void _elfimplib__ismbbgraph() asm("ismbbgraph");
void *_imp___ismbbgraph = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbbgraph() {
load_dll_msvcrt();
_imp___ismbbgraph = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbgraph");
}
void _elfimplib__ismbbgraph() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbgraph));
}

void _elfimplib__ismbbkalnum() asm("ismbbkalnum");
void *_imp___ismbbkalnum = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbbkalnum() {
load_dll_msvcrt();
_imp___ismbbkalnum = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbkalnum");
}
void _elfimplib__ismbbkalnum() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbkalnum));
}

void _elfimplib__ismbbkana() asm("ismbbkana");
void *_imp___ismbbkana = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbbkana() {
load_dll_msvcrt();
_imp___ismbbkana = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbkana");
}
void _elfimplib__ismbbkana() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbkana));
}

void _elfimplib__ismbbkprint() asm("ismbbkprint");
void *_imp___ismbbkprint = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbbkprint() {
load_dll_msvcrt();
_imp___ismbbkprint = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbkprint");
}
void _elfimplib__ismbbkprint() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbkprint));
}

void _elfimplib__ismbbkpunct() asm("ismbbkpunct");
void *_imp___ismbbkpunct = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbbkpunct() {
load_dll_msvcrt();
_imp___ismbbkpunct = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbkpunct");
}
void _elfimplib__ismbbkpunct() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbkpunct));
}

void _elfimplib__ismbblead() asm("ismbblead");
void *_imp___ismbblead = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbblead() {
load_dll_msvcrt();
_imp___ismbblead = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbblead");
}
void _elfimplib__ismbblead() {
asm("leave\njmp *%0" : : "r"(_imp___ismbblead));
}

void _elfimplib__ismbbprint() asm("ismbbprint");
void *_imp___ismbbprint = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbbprint() {
load_dll_msvcrt();
_imp___ismbbprint = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbprint");
}
void _elfimplib__ismbbprint() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbprint));
}

void _elfimplib__ismbbpunct() asm("ismbbpunct");
void *_imp___ismbbpunct = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbbpunct() {
load_dll_msvcrt();
_imp___ismbbpunct = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbpunct");
}
void _elfimplib__ismbbpunct() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbpunct));
}

void _elfimplib__ismbbtrail() asm("ismbbtrail");
void *_imp___ismbbtrail = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbbtrail() {
load_dll_msvcrt();
_imp___ismbbtrail = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbbtrail");
}
void _elfimplib__ismbbtrail() {
asm("leave\njmp *%0" : : "r"(_imp___ismbbtrail));
}

void _elfimplib__ismbcalnum() asm("ismbcalnum");
void *_imp___ismbcalnum = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbcalnum() {
load_dll_msvcrt();
_imp___ismbcalnum = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcalnum");
}
void _elfimplib__ismbcalnum() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcalnum));
}

void _elfimplib__ismbcalpha() asm("ismbcalpha");
void *_imp___ismbcalpha = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbcalpha() {
load_dll_msvcrt();
_imp___ismbcalpha = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcalpha");
}
void _elfimplib__ismbcalpha() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcalpha));
}

void _elfimplib__ismbcdigit() asm("ismbcdigit");
void *_imp___ismbcdigit = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbcdigit() {
load_dll_msvcrt();
_imp___ismbcdigit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcdigit");
}
void _elfimplib__ismbcdigit() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcdigit));
}

void _elfimplib__ismbcgraph() asm("ismbcgraph");
void *_imp___ismbcgraph = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbcgraph() {
load_dll_msvcrt();
_imp___ismbcgraph = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcgraph");
}
void _elfimplib__ismbcgraph() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcgraph));
}

void _elfimplib__ismbchira() asm("ismbchira");
void *_imp___ismbchira = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbchira() {
load_dll_msvcrt();
_imp___ismbchira = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbchira");
}
void _elfimplib__ismbchira() {
asm("leave\njmp *%0" : : "r"(_imp___ismbchira));
}

void _elfimplib__ismbckata() asm("ismbckata");
void *_imp___ismbckata = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbckata() {
load_dll_msvcrt();
_imp___ismbckata = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbckata");
}
void _elfimplib__ismbckata() {
asm("leave\njmp *%0" : : "r"(_imp___ismbckata));
}

void _elfimplib__ismbcl0() asm("ismbcl0");
void *_imp___ismbcl0 = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbcl0() {
load_dll_msvcrt();
_imp___ismbcl0 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcl0");
}
void _elfimplib__ismbcl0() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcl0));
}

void _elfimplib__ismbcl1() asm("ismbcl1");
void *_imp___ismbcl1 = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbcl1() {
load_dll_msvcrt();
_imp___ismbcl1 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcl1");
}
void _elfimplib__ismbcl1() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcl1));
}

void _elfimplib__ismbcl2() asm("ismbcl2");
void *_imp___ismbcl2 = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbcl2() {
load_dll_msvcrt();
_imp___ismbcl2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcl2");
}
void _elfimplib__ismbcl2() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcl2));
}

void _elfimplib__ismbclegal() asm("ismbclegal");
void *_imp___ismbclegal = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbclegal() {
load_dll_msvcrt();
_imp___ismbclegal = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbclegal");
}
void _elfimplib__ismbclegal() {
asm("leave\njmp *%0" : : "r"(_imp___ismbclegal));
}

void _elfimplib__ismbclower() asm("ismbclower");
void *_imp___ismbclower = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbclower() {
load_dll_msvcrt();
_imp___ismbclower = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbclower");
}
void _elfimplib__ismbclower() {
asm("leave\njmp *%0" : : "r"(_imp___ismbclower));
}

void _elfimplib__ismbcprint() asm("ismbcprint");
void *_imp___ismbcprint = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbcprint() {
load_dll_msvcrt();
_imp___ismbcprint = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcprint");
}
void _elfimplib__ismbcprint() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcprint));
}

void _elfimplib__ismbcpunct() asm("ismbcpunct");
void *_imp___ismbcpunct = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbcpunct() {
load_dll_msvcrt();
_imp___ismbcpunct = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcpunct");
}
void _elfimplib__ismbcpunct() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcpunct));
}

void _elfimplib__ismbcspace() asm("ismbcspace");
void *_imp___ismbcspace = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbcspace() {
load_dll_msvcrt();
_imp___ismbcspace = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcspace");
}
void _elfimplib__ismbcspace() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcspace));
}

void _elfimplib__ismbcsymbol() asm("ismbcsymbol");
void *_imp___ismbcsymbol = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbcsymbol() {
load_dll_msvcrt();
_imp___ismbcsymbol = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcsymbol");
}
void _elfimplib__ismbcsymbol() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcsymbol));
}

void _elfimplib__ismbcupper() asm("ismbcupper");
void *_imp___ismbcupper = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbcupper() {
load_dll_msvcrt();
_imp___ismbcupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcupper");
}
void _elfimplib__ismbcupper() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcupper));
}

void _elfimplib__ismbslead() asm("ismbslead");
void *_imp___ismbslead = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbslead() {
load_dll_msvcrt();
_imp___ismbslead = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbslead");
}
void _elfimplib__ismbslead() {
asm("leave\njmp *%0" : : "r"(_imp___ismbslead));
}

void _elfimplib__ismbstrail() asm("ismbstrail");
void *_imp___ismbstrail = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbstrail() {
load_dll_msvcrt();
_imp___ismbstrail = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbstrail");
}
void _elfimplib__ismbstrail() {
asm("leave\njmp *%0" : : "r"(_imp___ismbstrail));
}

void _elfimplib__isnan() asm("isnan");
void *_imp___isnan = NULL;
__attribute__((constructor)) void _elfimplib_init__isnan() {
load_dll_msvcrt();
_imp___isnan = (void *) _elf_GetProcAddress(_dll_msvcrt, "_isnan");
}
void _elfimplib__isnan() {
asm("leave\njmp *%0" : : "r"(_imp___isnan));
}

void _elfimplib__itoa() asm("itoa");
void *_imp___itoa = NULL;
__attribute__((constructor)) void _elfimplib_init__itoa() {
load_dll_msvcrt();
_imp___itoa = (void *) _elf_GetProcAddress(_dll_msvcrt, "_itoa");
}
void _elfimplib__itoa() {
asm("leave\njmp *%0" : : "r"(_imp___itoa));
}

void _elfimplib__itow() asm("itow");
void *_imp___itow = NULL;
__attribute__((constructor)) void _elfimplib_init__itow() {
load_dll_msvcrt();
_imp___itow = (void *) _elf_GetProcAddress(_dll_msvcrt, "_itow");
}
void _elfimplib__itow() {
asm("leave\njmp *%0" : : "r"(_imp___itow));
}

void _elfimplib__j0() asm("j0");
void *_imp___j0 = NULL;
__attribute__((constructor)) void _elfimplib_init__j0() {
load_dll_msvcrt();
_imp___j0 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_j0");
}
void _elfimplib__j0() {
asm("leave\njmp *%0" : : "r"(_imp___j0));
}

void _elfimplib__j1() asm("j1");
void *_imp___j1 = NULL;
__attribute__((constructor)) void _elfimplib_init__j1() {
load_dll_msvcrt();
_imp___j1 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_j1");
}
void _elfimplib__j1() {
asm("leave\njmp *%0" : : "r"(_imp___j1));
}

void _elfimplib__jn() asm("jn");
void *_imp___jn = NULL;
__attribute__((constructor)) void _elfimplib_init__jn() {
load_dll_msvcrt();
_imp___jn = (void *) _elf_GetProcAddress(_dll_msvcrt, "_jn");
}
void _elfimplib__jn() {
asm("leave\njmp *%0" : : "r"(_imp___jn));
}

void _elfimplib__kbhit() asm("kbhit");
void *_imp___kbhit = NULL;
__attribute__((constructor)) void _elfimplib_init__kbhit() {
load_dll_msvcrt();
_imp___kbhit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_kbhit");
}
void _elfimplib__kbhit() {
asm("leave\njmp *%0" : : "r"(_imp___kbhit));
}

void _elfimplib__lfind() asm("lfind");
void *_imp___lfind = NULL;
__attribute__((constructor)) void _elfimplib_init__lfind() {
load_dll_msvcrt();
_imp___lfind = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lfind");
}
void _elfimplib__lfind() {
asm("leave\njmp *%0" : : "r"(_imp___lfind));
}

void _elfimplib__loaddll() asm("loaddll");
void *_imp___loaddll = NULL;
__attribute__((constructor)) void _elfimplib_init__loaddll() {
load_dll_msvcrt();
_imp___loaddll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_loaddll");
}
void _elfimplib__loaddll() {
asm("leave\njmp *%0" : : "r"(_imp___loaddll));
}

void _elfimplib__local_unwind2() asm("local_unwind2");
void *_imp___local_unwind2 = NULL;
__attribute__((constructor)) void _elfimplib_init__local_unwind2() {
load_dll_msvcrt();
_imp___local_unwind2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_local_unwind2");
}
void _elfimplib__local_unwind2() {
asm("leave\njmp *%0" : : "r"(_imp___local_unwind2));
}

void _elfimplib__localtime64() asm("localtime64");
void *_imp___localtime64 = NULL;
__attribute__((constructor)) void _elfimplib_init__localtime64() {
load_dll_msvcrt();
_imp___localtime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_localtime64");
}
void _elfimplib__localtime64() {
asm("leave\njmp *%0" : : "r"(_imp___localtime64));
}

void _elfimplib__lock() asm("lock");
void *_imp___lock = NULL;
__attribute__((constructor)) void _elfimplib_init__lock() {
load_dll_msvcrt();
_imp___lock = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lock");
}
void _elfimplib__lock() {
asm("leave\njmp *%0" : : "r"(_imp___lock));
}

void _elfimplib__locking() asm("locking");
void *_imp___locking = NULL;
__attribute__((constructor)) void _elfimplib_init__locking() {
load_dll_msvcrt();
_imp___locking = (void *) _elf_GetProcAddress(_dll_msvcrt, "_locking");
}
void _elfimplib__locking() {
asm("leave\njmp *%0" : : "r"(_imp___locking));
}

void _elfimplib__logb() asm("logb");
void *_imp___logb = NULL;
__attribute__((constructor)) void _elfimplib_init__logb() {
load_dll_msvcrt();
_imp___logb = (void *) _elf_GetProcAddress(_dll_msvcrt, "_logb");
}
void _elfimplib__logb() {
asm("leave\njmp *%0" : : "r"(_imp___logb));
}

void _elfimplib__longjmpex() asm("longjmpex");
void *_imp___longjmpex = NULL;
__attribute__((constructor)) void _elfimplib_init__longjmpex() {
load_dll_msvcrt();
_imp___longjmpex = (void *) _elf_GetProcAddress(_dll_msvcrt, "_longjmpex");
}
void _elfimplib__longjmpex() {
asm("leave\njmp *%0" : : "r"(_imp___longjmpex));
}

void _elfimplib__lrotl() asm("lrotl");
void *_imp___lrotl = NULL;
__attribute__((constructor)) void _elfimplib_init__lrotl() {
load_dll_msvcrt();
_imp___lrotl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lrotl");
}
void _elfimplib__lrotl() {
asm("leave\njmp *%0" : : "r"(_imp___lrotl));
}

void _elfimplib__lrotr() asm("lrotr");
void *_imp___lrotr = NULL;
__attribute__((constructor)) void _elfimplib_init__lrotr() {
load_dll_msvcrt();
_imp___lrotr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lrotr");
}
void _elfimplib__lrotr() {
asm("leave\njmp *%0" : : "r"(_imp___lrotr));
}

void _elfimplib__lsearch() asm("lsearch");
void *_imp___lsearch = NULL;
__attribute__((constructor)) void _elfimplib_init__lsearch() {
load_dll_msvcrt();
_imp___lsearch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lsearch");
}
void _elfimplib__lsearch() {
asm("leave\njmp *%0" : : "r"(_imp___lsearch));
}

void _elfimplib__lseek() asm("lseek");
void *_imp___lseek = NULL;
__attribute__((constructor)) void _elfimplib_init__lseek() {
load_dll_msvcrt();
_imp___lseek = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lseek");
}
void _elfimplib__lseek() {
asm("leave\njmp *%0" : : "r"(_imp___lseek));
}

void _elfimplib__lseeki64() asm("lseeki64");
void *_imp___lseeki64 = NULL;
__attribute__((constructor)) void _elfimplib_init__lseeki64() {
load_dll_msvcrt();
_imp___lseeki64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lseeki64");
}
void _elfimplib__lseeki64() {
asm("leave\njmp *%0" : : "r"(_imp___lseeki64));
}

void _elfimplib__ltoa() asm("ltoa");
void *_imp___ltoa = NULL;
__attribute__((constructor)) void _elfimplib_init__ltoa() {
load_dll_msvcrt();
_imp___ltoa = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ltoa");
}
void _elfimplib__ltoa() {
asm("leave\njmp *%0" : : "r"(_imp___ltoa));
}

void _elfimplib__ltow() asm("ltow");
void *_imp___ltow = NULL;
__attribute__((constructor)) void _elfimplib_init__ltow() {
load_dll_msvcrt();
_imp___ltow = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ltow");
}
void _elfimplib__ltow() {
asm("leave\njmp *%0" : : "r"(_imp___ltow));
}

void _elfimplib__makepath() asm("makepath");
void *_imp___makepath = NULL;
__attribute__((constructor)) void _elfimplib_init__makepath() {
load_dll_msvcrt();
_imp___makepath = (void *) _elf_GetProcAddress(_dll_msvcrt, "_makepath");
}
void _elfimplib__makepath() {
asm("leave\njmp *%0" : : "r"(_imp___makepath));
}

void _elfimplib__mbbtombc() asm("mbbtombc");
void *_imp___mbbtombc = NULL;
__attribute__((constructor)) void _elfimplib_init__mbbtombc() {
load_dll_msvcrt();
_imp___mbbtombc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbbtombc");
}
void _elfimplib__mbbtombc() {
asm("leave\njmp *%0" : : "r"(_imp___mbbtombc));
}

void _elfimplib__mbbtype() asm("mbbtype");
void *_imp___mbbtype = NULL;
__attribute__((constructor)) void _elfimplib_init__mbbtype() {
load_dll_msvcrt();
_imp___mbbtype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbbtype");
}
void _elfimplib__mbbtype() {
asm("leave\njmp *%0" : : "r"(_imp___mbbtype));
}

void _elfimplib__mbcasemap() asm("mbcasemap");
void *_imp___mbcasemap = NULL;
__attribute__((constructor)) void _elfimplib_init__mbcasemap() {
load_dll_msvcrt();
_imp___mbcasemap = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbcasemap");
}
void _elfimplib__mbcasemap() {
asm("leave\njmp *%0" : : "r"(_imp___mbcasemap));
}

void _elfimplib__mbccpy() asm("mbccpy");
void *_imp___mbccpy = NULL;
__attribute__((constructor)) void _elfimplib_init__mbccpy() {
load_dll_msvcrt();
_imp___mbccpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbccpy");
}
void _elfimplib__mbccpy() {
asm("leave\njmp *%0" : : "r"(_imp___mbccpy));
}

void _elfimplib__mbcjistojms() asm("mbcjistojms");
void *_imp___mbcjistojms = NULL;
__attribute__((constructor)) void _elfimplib_init__mbcjistojms() {
load_dll_msvcrt();
_imp___mbcjistojms = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbcjistojms");
}
void _elfimplib__mbcjistojms() {
asm("leave\njmp *%0" : : "r"(_imp___mbcjistojms));
}

void _elfimplib__mbcjmstojis() asm("mbcjmstojis");
void *_imp___mbcjmstojis = NULL;
__attribute__((constructor)) void _elfimplib_init__mbcjmstojis() {
load_dll_msvcrt();
_imp___mbcjmstojis = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbcjmstojis");
}
void _elfimplib__mbcjmstojis() {
asm("leave\njmp *%0" : : "r"(_imp___mbcjmstojis));
}

void _elfimplib__mbclen() asm("mbclen");
void *_imp___mbclen = NULL;
__attribute__((constructor)) void _elfimplib_init__mbclen() {
load_dll_msvcrt();
_imp___mbclen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbclen");
}
void _elfimplib__mbclen() {
asm("leave\njmp *%0" : : "r"(_imp___mbclen));
}

void _elfimplib__mbctohira() asm("mbctohira");
void *_imp___mbctohira = NULL;
__attribute__((constructor)) void _elfimplib_init__mbctohira() {
load_dll_msvcrt();
_imp___mbctohira = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbctohira");
}
void _elfimplib__mbctohira() {
asm("leave\njmp *%0" : : "r"(_imp___mbctohira));
}

void _elfimplib__mbctokata() asm("mbctokata");
void *_imp___mbctokata = NULL;
__attribute__((constructor)) void _elfimplib_init__mbctokata() {
load_dll_msvcrt();
_imp___mbctokata = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbctokata");
}
void _elfimplib__mbctokata() {
asm("leave\njmp *%0" : : "r"(_imp___mbctokata));
}

void _elfimplib__mbctolower() asm("mbctolower");
void *_imp___mbctolower = NULL;
__attribute__((constructor)) void _elfimplib_init__mbctolower() {
load_dll_msvcrt();
_imp___mbctolower = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbctolower");
}
void _elfimplib__mbctolower() {
asm("leave\njmp *%0" : : "r"(_imp___mbctolower));
}

void _elfimplib__mbctombb() asm("mbctombb");
void *_imp___mbctombb = NULL;
__attribute__((constructor)) void _elfimplib_init__mbctombb() {
load_dll_msvcrt();
_imp___mbctombb = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbctombb");
}
void _elfimplib__mbctombb() {
asm("leave\njmp *%0" : : "r"(_imp___mbctombb));
}

void _elfimplib__mbctoupper() asm("mbctoupper");
void *_imp___mbctoupper = NULL;
__attribute__((constructor)) void _elfimplib_init__mbctoupper() {
load_dll_msvcrt();
_imp___mbctoupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbctoupper");
}
void _elfimplib__mbctoupper() {
asm("leave\njmp *%0" : : "r"(_imp___mbctoupper));
}

void _elfimplib__mbctype() asm("mbctype");
void *_imp___mbctype = NULL;
__attribute__((constructor)) void _elfimplib_init__mbctype() {
load_dll_msvcrt();
_imp___mbctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbctype");
}
void _elfimplib__mbctype() {
asm("leave\njmp *%0" : : "r"(_imp___mbctype));
}

void _elfimplib__mbsbtype() asm("mbsbtype");
void *_imp___mbsbtype = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsbtype() {
load_dll_msvcrt();
_imp___mbsbtype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsbtype");
}
void _elfimplib__mbsbtype() {
asm("leave\njmp *%0" : : "r"(_imp___mbsbtype));
}

void _elfimplib__mbscat() asm("mbscat");
void *_imp___mbscat = NULL;
__attribute__((constructor)) void _elfimplib_init__mbscat() {
load_dll_msvcrt();
_imp___mbscat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbscat");
}
void _elfimplib__mbscat() {
asm("leave\njmp *%0" : : "r"(_imp___mbscat));
}

void _elfimplib__mbschr() asm("mbschr");
void *_imp___mbschr = NULL;
__attribute__((constructor)) void _elfimplib_init__mbschr() {
load_dll_msvcrt();
_imp___mbschr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbschr");
}
void _elfimplib__mbschr() {
asm("leave\njmp *%0" : : "r"(_imp___mbschr));
}

void _elfimplib__mbscmp() asm("mbscmp");
void *_imp___mbscmp = NULL;
__attribute__((constructor)) void _elfimplib_init__mbscmp() {
load_dll_msvcrt();
_imp___mbscmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbscmp");
}
void _elfimplib__mbscmp() {
asm("leave\njmp *%0" : : "r"(_imp___mbscmp));
}

void _elfimplib__mbscoll() asm("mbscoll");
void *_imp___mbscoll = NULL;
__attribute__((constructor)) void _elfimplib_init__mbscoll() {
load_dll_msvcrt();
_imp___mbscoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbscoll");
}
void _elfimplib__mbscoll() {
asm("leave\njmp *%0" : : "r"(_imp___mbscoll));
}

void _elfimplib__mbscpy() asm("mbscpy");
void *_imp___mbscpy = NULL;
__attribute__((constructor)) void _elfimplib_init__mbscpy() {
load_dll_msvcrt();
_imp___mbscpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbscpy");
}
void _elfimplib__mbscpy() {
asm("leave\njmp *%0" : : "r"(_imp___mbscpy));
}

void _elfimplib__mbscspn() asm("mbscspn");
void *_imp___mbscspn = NULL;
__attribute__((constructor)) void _elfimplib_init__mbscspn() {
load_dll_msvcrt();
_imp___mbscspn = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbscspn");
}
void _elfimplib__mbscspn() {
asm("leave\njmp *%0" : : "r"(_imp___mbscspn));
}

void _elfimplib__mbsdec() asm("mbsdec");
void *_imp___mbsdec = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsdec() {
load_dll_msvcrt();
_imp___mbsdec = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsdec");
}
void _elfimplib__mbsdec() {
asm("leave\njmp *%0" : : "r"(_imp___mbsdec));
}

void _elfimplib__mbsdup() asm("mbsdup");
void *_imp___mbsdup = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsdup() {
load_dll_msvcrt();
_imp___mbsdup = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsdup");
}
void _elfimplib__mbsdup() {
asm("leave\njmp *%0" : : "r"(_imp___mbsdup));
}

void _elfimplib__mbsicmp() asm("mbsicmp");
void *_imp___mbsicmp = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsicmp() {
load_dll_msvcrt();
_imp___mbsicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsicmp");
}
void _elfimplib__mbsicmp() {
asm("leave\njmp *%0" : : "r"(_imp___mbsicmp));
}

void _elfimplib__mbsicoll() asm("mbsicoll");
void *_imp___mbsicoll = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsicoll() {
load_dll_msvcrt();
_imp___mbsicoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsicoll");
}
void _elfimplib__mbsicoll() {
asm("leave\njmp *%0" : : "r"(_imp___mbsicoll));
}

void _elfimplib__mbsinc() asm("mbsinc");
void *_imp___mbsinc = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsinc() {
load_dll_msvcrt();
_imp___mbsinc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsinc");
}
void _elfimplib__mbsinc() {
asm("leave\njmp *%0" : : "r"(_imp___mbsinc));
}

void _elfimplib__mbslen() asm("mbslen");
void *_imp___mbslen = NULL;
__attribute__((constructor)) void _elfimplib_init__mbslen() {
load_dll_msvcrt();
_imp___mbslen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbslen");
}
void _elfimplib__mbslen() {
asm("leave\njmp *%0" : : "r"(_imp___mbslen));
}

void _elfimplib__mbslwr() asm("mbslwr");
void *_imp___mbslwr = NULL;
__attribute__((constructor)) void _elfimplib_init__mbslwr() {
load_dll_msvcrt();
_imp___mbslwr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbslwr");
}
void _elfimplib__mbslwr() {
asm("leave\njmp *%0" : : "r"(_imp___mbslwr));
}

void _elfimplib__mbsnbcat() asm("mbsnbcat");
void *_imp___mbsnbcat = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnbcat() {
load_dll_msvcrt();
_imp___mbsnbcat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbcat");
}
void _elfimplib__mbsnbcat() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnbcat));
}

void _elfimplib__mbsnbcmp() asm("mbsnbcmp");
void *_imp___mbsnbcmp = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnbcmp() {
load_dll_msvcrt();
_imp___mbsnbcmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbcmp");
}
void _elfimplib__mbsnbcmp() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnbcmp));
}

void _elfimplib__mbsnbcnt() asm("mbsnbcnt");
void *_imp___mbsnbcnt = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnbcnt() {
load_dll_msvcrt();
_imp___mbsnbcnt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbcnt");
}
void _elfimplib__mbsnbcnt() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnbcnt));
}

void _elfimplib__mbsnbcoll() asm("mbsnbcoll");
void *_imp___mbsnbcoll = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnbcoll() {
load_dll_msvcrt();
_imp___mbsnbcoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbcoll");
}
void _elfimplib__mbsnbcoll() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnbcoll));
}

void _elfimplib__mbsnbcpy() asm("mbsnbcpy");
void *_imp___mbsnbcpy = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnbcpy() {
load_dll_msvcrt();
_imp___mbsnbcpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbcpy");
}
void _elfimplib__mbsnbcpy() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnbcpy));
}

void _elfimplib__mbsnbicmp() asm("mbsnbicmp");
void *_imp___mbsnbicmp = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnbicmp() {
load_dll_msvcrt();
_imp___mbsnbicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbicmp");
}
void _elfimplib__mbsnbicmp() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnbicmp));
}

void _elfimplib__mbsnbicoll() asm("mbsnbicoll");
void *_imp___mbsnbicoll = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnbicoll() {
load_dll_msvcrt();
_imp___mbsnbicoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbicoll");
}
void _elfimplib__mbsnbicoll() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnbicoll));
}

void _elfimplib__mbsnbset() asm("mbsnbset");
void *_imp___mbsnbset = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnbset() {
load_dll_msvcrt();
_imp___mbsnbset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbset");
}
void _elfimplib__mbsnbset() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnbset));
}

void _elfimplib__mbsncat() asm("mbsncat");
void *_imp___mbsncat = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsncat() {
load_dll_msvcrt();
_imp___mbsncat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsncat");
}
void _elfimplib__mbsncat() {
asm("leave\njmp *%0" : : "r"(_imp___mbsncat));
}

void _elfimplib__mbsnccnt() asm("mbsnccnt");
void *_imp___mbsnccnt = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnccnt() {
load_dll_msvcrt();
_imp___mbsnccnt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnccnt");
}
void _elfimplib__mbsnccnt() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnccnt));
}

void _elfimplib__mbsncmp() asm("mbsncmp");
void *_imp___mbsncmp = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsncmp() {
load_dll_msvcrt();
_imp___mbsncmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsncmp");
}
void _elfimplib__mbsncmp() {
asm("leave\njmp *%0" : : "r"(_imp___mbsncmp));
}

void _elfimplib__mbsncoll() asm("mbsncoll");
void *_imp___mbsncoll = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsncoll() {
load_dll_msvcrt();
_imp___mbsncoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsncoll");
}
void _elfimplib__mbsncoll() {
asm("leave\njmp *%0" : : "r"(_imp___mbsncoll));
}

void _elfimplib__mbsncpy() asm("mbsncpy");
void *_imp___mbsncpy = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsncpy() {
load_dll_msvcrt();
_imp___mbsncpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsncpy");
}
void _elfimplib__mbsncpy() {
asm("leave\njmp *%0" : : "r"(_imp___mbsncpy));
}

void _elfimplib__mbsnextc() asm("mbsnextc");
void *_imp___mbsnextc = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnextc() {
load_dll_msvcrt();
_imp___mbsnextc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnextc");
}
void _elfimplib__mbsnextc() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnextc));
}

void _elfimplib__mbsnicmp() asm("mbsnicmp");
void *_imp___mbsnicmp = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnicmp() {
load_dll_msvcrt();
_imp___mbsnicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnicmp");
}
void _elfimplib__mbsnicmp() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnicmp));
}

void _elfimplib__mbsnicoll() asm("mbsnicoll");
void *_imp___mbsnicoll = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnicoll() {
load_dll_msvcrt();
_imp___mbsnicoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnicoll");
}
void _elfimplib__mbsnicoll() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnicoll));
}

void _elfimplib__mbsninc() asm("mbsninc");
void *_imp___mbsninc = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsninc() {
load_dll_msvcrt();
_imp___mbsninc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsninc");
}
void _elfimplib__mbsninc() {
asm("leave\njmp *%0" : : "r"(_imp___mbsninc));
}

void _elfimplib__mbsnset() asm("mbsnset");
void *_imp___mbsnset = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnset() {
load_dll_msvcrt();
_imp___mbsnset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnset");
}
void _elfimplib__mbsnset() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnset));
}

void _elfimplib__mbspbrk() asm("mbspbrk");
void *_imp___mbspbrk = NULL;
__attribute__((constructor)) void _elfimplib_init__mbspbrk() {
load_dll_msvcrt();
_imp___mbspbrk = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbspbrk");
}
void _elfimplib__mbspbrk() {
asm("leave\njmp *%0" : : "r"(_imp___mbspbrk));
}

void _elfimplib__mbsrchr() asm("mbsrchr");
void *_imp___mbsrchr = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsrchr() {
load_dll_msvcrt();
_imp___mbsrchr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsrchr");
}
void _elfimplib__mbsrchr() {
asm("leave\njmp *%0" : : "r"(_imp___mbsrchr));
}

void _elfimplib__mbsrev() asm("mbsrev");
void *_imp___mbsrev = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsrev() {
load_dll_msvcrt();
_imp___mbsrev = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsrev");
}
void _elfimplib__mbsrev() {
asm("leave\njmp *%0" : : "r"(_imp___mbsrev));
}

void _elfimplib__mbsset() asm("mbsset");
void *_imp___mbsset = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsset() {
load_dll_msvcrt();
_imp___mbsset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsset");
}
void _elfimplib__mbsset() {
asm("leave\njmp *%0" : : "r"(_imp___mbsset));
}

void _elfimplib__mbsspn() asm("mbsspn");
void *_imp___mbsspn = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsspn() {
load_dll_msvcrt();
_imp___mbsspn = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsspn");
}
void _elfimplib__mbsspn() {
asm("leave\njmp *%0" : : "r"(_imp___mbsspn));
}

void _elfimplib__mbsspnp() asm("mbsspnp");
void *_imp___mbsspnp = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsspnp() {
load_dll_msvcrt();
_imp___mbsspnp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsspnp");
}
void _elfimplib__mbsspnp() {
asm("leave\njmp *%0" : : "r"(_imp___mbsspnp));
}

void _elfimplib__mbsstr() asm("mbsstr");
void *_imp___mbsstr = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsstr() {
load_dll_msvcrt();
_imp___mbsstr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsstr");
}
void _elfimplib__mbsstr() {
asm("leave\njmp *%0" : : "r"(_imp___mbsstr));
}

void _elfimplib__mbstok() asm("mbstok");
void *_imp___mbstok = NULL;
__attribute__((constructor)) void _elfimplib_init__mbstok() {
load_dll_msvcrt();
_imp___mbstok = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbstok");
}
void _elfimplib__mbstok() {
asm("leave\njmp *%0" : : "r"(_imp___mbstok));
}

void _elfimplib__mbstrlen() asm("mbstrlen");
void *_imp___mbstrlen = NULL;
__attribute__((constructor)) void _elfimplib_init__mbstrlen() {
load_dll_msvcrt();
_imp___mbstrlen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbstrlen");
}
void _elfimplib__mbstrlen() {
asm("leave\njmp *%0" : : "r"(_imp___mbstrlen));
}

void _elfimplib__mbsupr() asm("mbsupr");
void *_imp___mbsupr = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsupr() {
load_dll_msvcrt();
_imp___mbsupr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsupr");
}
void _elfimplib__mbsupr() {
asm("leave\njmp *%0" : : "r"(_imp___mbsupr));
}

void _elfimplib__memccpy() asm("memccpy");
void *_imp___memccpy = NULL;
__attribute__((constructor)) void _elfimplib_init__memccpy() {
load_dll_msvcrt();
_imp___memccpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "_memccpy");
}
void _elfimplib__memccpy() {
asm("leave\njmp *%0" : : "r"(_imp___memccpy));
}

void _elfimplib__memicmp() asm("memicmp");
void *_imp___memicmp = NULL;
__attribute__((constructor)) void _elfimplib_init__memicmp() {
load_dll_msvcrt();
_imp___memicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_memicmp");
}
void _elfimplib__memicmp() {
asm("leave\njmp *%0" : : "r"(_imp___memicmp));
}

void _elfimplib__mkdir() asm("mkdir");
void *_imp___mkdir = NULL;
__attribute__((constructor)) void _elfimplib_init__mkdir() {
load_dll_msvcrt();
_imp___mkdir = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mkdir");
}
void _elfimplib__mkdir() {
asm("leave\njmp *%0" : : "r"(_imp___mkdir));
}

void _elfimplib__mktemp() asm("mktemp");
void *_imp___mktemp = NULL;
__attribute__((constructor)) void _elfimplib_init__mktemp() {
load_dll_msvcrt();
_imp___mktemp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mktemp");
}
void _elfimplib__mktemp() {
asm("leave\njmp *%0" : : "r"(_imp___mktemp));
}

void _elfimplib__mktime64() asm("mktime64");
void *_imp___mktime64 = NULL;
__attribute__((constructor)) void _elfimplib_init__mktime64() {
load_dll_msvcrt();
_imp___mktime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mktime64");
}
void _elfimplib__mktime64() {
asm("leave\njmp *%0" : : "r"(_imp___mktime64));
}

void _elfimplib__msize() asm("msize");
void *_imp___msize = NULL;
__attribute__((constructor)) void _elfimplib_init__msize() {
load_dll_msvcrt();
_imp___msize = (void *) _elf_GetProcAddress(_dll_msvcrt, "_msize");
}
void _elfimplib__msize() {
asm("leave\njmp *%0" : : "r"(_imp___msize));
}

void _elfimplib__nextafter() asm("nextafter");
void *_imp___nextafter = NULL;
__attribute__((constructor)) void _elfimplib_init__nextafter() {
load_dll_msvcrt();
_imp___nextafter = (void *) _elf_GetProcAddress(_dll_msvcrt, "_nextafter");
}
void _elfimplib__nextafter() {
asm("leave\njmp *%0" : : "r"(_imp___nextafter));
}

void _elfimplib__onexit() asm("onexit");
void *_imp___onexit = NULL;
__attribute__((constructor)) void _elfimplib_init__onexit() {
load_dll_msvcrt();
_imp___onexit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_onexit");
}
void _elfimplib__onexit() {
asm("leave\njmp *%0" : : "r"(_imp___onexit));
}

void _elfimplib__open() asm("open");
void *_imp___open = NULL;
__attribute__((constructor)) void _elfimplib_init__open() {
load_dll_msvcrt();
_imp___open = (void *) _elf_GetProcAddress(_dll_msvcrt, "_open");
}
void _elfimplib__open() {
asm("leave\njmp *%0" : : "r"(_imp___open));
}

void _elfimplib__open_osfhandle() asm("open_osfhandle");
void *_imp___open_osfhandle = NULL;
__attribute__((constructor)) void _elfimplib_init__open_osfhandle() {
load_dll_msvcrt();
_imp___open_osfhandle = (void *) _elf_GetProcAddress(_dll_msvcrt, "_open_osfhandle");
}
void _elfimplib__open_osfhandle() {
asm("leave\njmp *%0" : : "r"(_imp___open_osfhandle));
}

void _elfimplib__osplatform() asm("osplatform");
void *_imp___osplatform = NULL;
__attribute__((constructor)) void _elfimplib_init__osplatform() {
load_dll_msvcrt();
_imp___osplatform = (void *) _elf_GetProcAddress(_dll_msvcrt, "_osplatform");
}
void _elfimplib__osplatform() {
asm("leave\njmp *%0" : : "r"(_imp___osplatform));
}

void _elfimplib__osver() asm("osver");
void *_imp___osver = NULL;
__attribute__((constructor)) void _elfimplib_init__osver() {
load_dll_msvcrt();
_imp___osver = (void *) _elf_GetProcAddress(_dll_msvcrt, "_osver");
}
void _elfimplib__osver() {
asm("leave\njmp *%0" : : "r"(_imp___osver));
}

void _elfimplib__outp() asm("outp");
void *_imp___outp = NULL;
__attribute__((constructor)) void _elfimplib_init__outp() {
load_dll_msvcrt();
_imp___outp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_outp");
}
void _elfimplib__outp() {
asm("leave\njmp *%0" : : "r"(_imp___outp));
}

void _elfimplib__outpd() asm("outpd");
void *_imp___outpd = NULL;
__attribute__((constructor)) void _elfimplib_init__outpd() {
load_dll_msvcrt();
_imp___outpd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_outpd");
}
void _elfimplib__outpd() {
asm("leave\njmp *%0" : : "r"(_imp___outpd));
}

void _elfimplib__outpw() asm("outpw");
void *_imp___outpw = NULL;
__attribute__((constructor)) void _elfimplib_init__outpw() {
load_dll_msvcrt();
_imp___outpw = (void *) _elf_GetProcAddress(_dll_msvcrt, "_outpw");
}
void _elfimplib__outpw() {
asm("leave\njmp *%0" : : "r"(_imp___outpw));
}

void _elfimplib__pclose() asm("pclose");
void *_imp___pclose = NULL;
__attribute__((constructor)) void _elfimplib_init__pclose() {
load_dll_msvcrt();
_imp___pclose = (void *) _elf_GetProcAddress(_dll_msvcrt, "_pclose");
}
void _elfimplib__pclose() {
asm("leave\njmp *%0" : : "r"(_imp___pclose));
}

void _elfimplib__pctype() asm("pctype");
void *_imp___pctype = NULL;
__attribute__((constructor)) void _elfimplib_init__pctype() {
load_dll_msvcrt();
_imp___pctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_pctype");
}
void _elfimplib__pctype() {
asm("leave\njmp *%0" : : "r"(_imp___pctype));
}

void _elfimplib__pgmptr() asm("pgmptr");
void *_imp___pgmptr = NULL;
__attribute__((constructor)) void _elfimplib_init__pgmptr() {
load_dll_msvcrt();
_imp___pgmptr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_pgmptr");
}
void _elfimplib__pgmptr() {
asm("leave\njmp *%0" : : "r"(_imp___pgmptr));
}

void _elfimplib__pipe() asm("pipe");
void *_imp___pipe = NULL;
__attribute__((constructor)) void _elfimplib_init__pipe() {
load_dll_msvcrt();
_imp___pipe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_pipe");
}
void _elfimplib__pipe() {
asm("leave\njmp *%0" : : "r"(_imp___pipe));
}

void _elfimplib__popen() asm("popen");
void *_imp___popen = NULL;
__attribute__((constructor)) void _elfimplib_init__popen() {
load_dll_msvcrt();
_imp___popen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_popen");
}
void _elfimplib__popen() {
asm("leave\njmp *%0" : : "r"(_imp___popen));
}

void _elfimplib__purecall() asm("purecall");
void *_imp___purecall = NULL;
__attribute__((constructor)) void _elfimplib_init__purecall() {
load_dll_msvcrt();
_imp___purecall = (void *) _elf_GetProcAddress(_dll_msvcrt, "_purecall");
}
void _elfimplib__purecall() {
asm("leave\njmp *%0" : : "r"(_imp___purecall));
}

void _elfimplib__putch() asm("putch");
void *_imp___putch = NULL;
__attribute__((constructor)) void _elfimplib_init__putch() {
load_dll_msvcrt();
_imp___putch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_putch");
}
void _elfimplib__putch() {
asm("leave\njmp *%0" : : "r"(_imp___putch));
}

void _elfimplib__putenv() asm("putenv");
void *_imp___putenv = NULL;
__attribute__((constructor)) void _elfimplib_init__putenv() {
load_dll_msvcrt();
_imp___putenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_putenv");
}
void _elfimplib__putenv() {
asm("leave\njmp *%0" : : "r"(_imp___putenv));
}

void _elfimplib__putw() asm("putw");
void *_imp___putw = NULL;
__attribute__((constructor)) void _elfimplib_init__putw() {
load_dll_msvcrt();
_imp___putw = (void *) _elf_GetProcAddress(_dll_msvcrt, "_putw");
}
void _elfimplib__putw() {
asm("leave\njmp *%0" : : "r"(_imp___putw));
}

void _elfimplib__putwch() asm("putwch");
void *_imp___putwch = NULL;
__attribute__((constructor)) void _elfimplib_init__putwch() {
load_dll_msvcrt();
_imp___putwch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_putwch");
}
void _elfimplib__putwch() {
asm("leave\njmp *%0" : : "r"(_imp___putwch));
}

void _elfimplib__putws() asm("putws");
void *_imp___putws = NULL;
__attribute__((constructor)) void _elfimplib_init__putws() {
load_dll_msvcrt();
_imp___putws = (void *) _elf_GetProcAddress(_dll_msvcrt, "_putws");
}
void _elfimplib__putws() {
asm("leave\njmp *%0" : : "r"(_imp___putws));
}

void _elfimplib__pwctype() asm("pwctype");
void *_imp___pwctype = NULL;
__attribute__((constructor)) void _elfimplib_init__pwctype() {
load_dll_msvcrt();
_imp___pwctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_pwctype");
}
void _elfimplib__pwctype() {
asm("leave\njmp *%0" : : "r"(_imp___pwctype));
}

void _elfimplib__read() asm("read");
void *_imp___read = NULL;
__attribute__((constructor)) void _elfimplib_init__read() {
load_dll_msvcrt();
_imp___read = (void *) _elf_GetProcAddress(_dll_msvcrt, "_read");
}
void _elfimplib__read() {
asm("leave\njmp *%0" : : "r"(_imp___read));
}

void _elfimplib__resetstkoflw() asm("resetstkoflw");
void *_imp___resetstkoflw = NULL;
__attribute__((constructor)) void _elfimplib_init__resetstkoflw() {
load_dll_msvcrt();
_imp___resetstkoflw = (void *) _elf_GetProcAddress(_dll_msvcrt, "_resetstkoflw");
}
void _elfimplib__resetstkoflw() {
asm("leave\njmp *%0" : : "r"(_imp___resetstkoflw));
}

void _elfimplib__rmdir() asm("rmdir");
void *_imp___rmdir = NULL;
__attribute__((constructor)) void _elfimplib_init__rmdir() {
load_dll_msvcrt();
_imp___rmdir = (void *) _elf_GetProcAddress(_dll_msvcrt, "_rmdir");
}
void _elfimplib__rmdir() {
asm("leave\njmp *%0" : : "r"(_imp___rmdir));
}

void _elfimplib__rmtmp() asm("rmtmp");
void *_imp___rmtmp = NULL;
__attribute__((constructor)) void _elfimplib_init__rmtmp() {
load_dll_msvcrt();
_imp___rmtmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_rmtmp");
}
void _elfimplib__rmtmp() {
asm("leave\njmp *%0" : : "r"(_imp___rmtmp));
}

void _elfimplib__rotl() asm("rotl");
void *_imp___rotl = NULL;
__attribute__((constructor)) void _elfimplib_init__rotl() {
load_dll_msvcrt();
_imp___rotl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_rotl");
}
void _elfimplib__rotl() {
asm("leave\njmp *%0" : : "r"(_imp___rotl));
}

void _elfimplib__rotr() asm("rotr");
void *_imp___rotr = NULL;
__attribute__((constructor)) void _elfimplib_init__rotr() {
load_dll_msvcrt();
_imp___rotr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_rotr");
}
void _elfimplib__rotr() {
asm("leave\njmp *%0" : : "r"(_imp___rotr));
}

void _elfimplib__safe_fdiv() asm("safe_fdiv");
void *_imp___safe_fdiv = NULL;
__attribute__((constructor)) void _elfimplib_init__safe_fdiv() {
load_dll_msvcrt();
_imp___safe_fdiv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_safe_fdiv");
}
void _elfimplib__safe_fdiv() {
asm("leave\njmp *%0" : : "r"(_imp___safe_fdiv));
}

void _elfimplib__safe_fdivr() asm("safe_fdivr");
void *_imp___safe_fdivr = NULL;
__attribute__((constructor)) void _elfimplib_init__safe_fdivr() {
load_dll_msvcrt();
_imp___safe_fdivr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_safe_fdivr");
}
void _elfimplib__safe_fdivr() {
asm("leave\njmp *%0" : : "r"(_imp___safe_fdivr));
}

void _elfimplib__safe_fprem() asm("safe_fprem");
void *_imp___safe_fprem = NULL;
__attribute__((constructor)) void _elfimplib_init__safe_fprem() {
load_dll_msvcrt();
_imp___safe_fprem = (void *) _elf_GetProcAddress(_dll_msvcrt, "_safe_fprem");
}
void _elfimplib__safe_fprem() {
asm("leave\njmp *%0" : : "r"(_imp___safe_fprem));
}

void _elfimplib__safe_fprem1() asm("safe_fprem1");
void *_imp___safe_fprem1 = NULL;
__attribute__((constructor)) void _elfimplib_init__safe_fprem1() {
load_dll_msvcrt();
_imp___safe_fprem1 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_safe_fprem1");
}
void _elfimplib__safe_fprem1() {
asm("leave\njmp *%0" : : "r"(_imp___safe_fprem1));
}

void _elfimplib__scalb() asm("scalb");
void *_imp___scalb = NULL;
__attribute__((constructor)) void _elfimplib_init__scalb() {
load_dll_msvcrt();
_imp___scalb = (void *) _elf_GetProcAddress(_dll_msvcrt, "_scalb");
}
void _elfimplib__scalb() {
asm("leave\njmp *%0" : : "r"(_imp___scalb));
}

void _elfimplib__scprintf() asm("scprintf");
void *_imp___scprintf = NULL;
__attribute__((constructor)) void _elfimplib_init__scprintf() {
load_dll_msvcrt();
_imp___scprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_scprintf");
}
void _elfimplib__scprintf() {
asm("leave\njmp *%0" : : "r"(_imp___scprintf));
}

void _elfimplib__scwprintf() asm("scwprintf");
void *_imp___scwprintf = NULL;
__attribute__((constructor)) void _elfimplib_init__scwprintf() {
load_dll_msvcrt();
_imp___scwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_scwprintf");
}
void _elfimplib__scwprintf() {
asm("leave\njmp *%0" : : "r"(_imp___scwprintf));
}

void _elfimplib__searchenv() asm("searchenv");
void *_imp___searchenv = NULL;
__attribute__((constructor)) void _elfimplib_init__searchenv() {
load_dll_msvcrt();
_imp___searchenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_searchenv");
}
void _elfimplib__searchenv() {
asm("leave\njmp *%0" : : "r"(_imp___searchenv));
}

void _elfimplib__seh_longjmp_unwind() asm("seh_longjmp_unwind");
void *_imp___seh_longjmp_unwind = NULL;
__attribute__((constructor)) void _elfimplib_init__seh_longjmp_unwind() {
load_dll_msvcrt();
_imp___seh_longjmp_unwind = (void *) _elf_GetProcAddress(_dll_msvcrt, "_seh_longjmp_unwind");
}
void _elfimplib__seh_longjmp_unwind() {
asm("leave\njmp *%0" : : "r"(_imp___seh_longjmp_unwind));
}

void _elfimplib__set_SSE2_enable() asm("set_SSE2_enable");
void *_imp___set_SSE2_enable = NULL;
__attribute__((constructor)) void _elfimplib_init__set_SSE2_enable() {
load_dll_msvcrt();
_imp___set_SSE2_enable = (void *) _elf_GetProcAddress(_dll_msvcrt, "_set_SSE2_enable");
}
void _elfimplib__set_SSE2_enable() {
asm("leave\njmp *%0" : : "r"(_imp___set_SSE2_enable));
}

void _elfimplib__set_error_mode() asm("set_error_mode");
void *_imp___set_error_mode = NULL;
__attribute__((constructor)) void _elfimplib_init__set_error_mode() {
load_dll_msvcrt();
_imp___set_error_mode = (void *) _elf_GetProcAddress(_dll_msvcrt, "_set_error_mode");
}
void _elfimplib__set_error_mode() {
asm("leave\njmp *%0" : : "r"(_imp___set_error_mode));
}

void _elfimplib__set_sbh_threshold() asm("set_sbh_threshold");
void *_imp___set_sbh_threshold = NULL;
__attribute__((constructor)) void _elfimplib_init__set_sbh_threshold() {
load_dll_msvcrt();
_imp___set_sbh_threshold = (void *) _elf_GetProcAddress(_dll_msvcrt, "_set_sbh_threshold");
}
void _elfimplib__set_sbh_threshold() {
asm("leave\njmp *%0" : : "r"(_imp___set_sbh_threshold));
}

void _elfimplib__seterrormode() asm("seterrormode");
void *_imp___seterrormode = NULL;
__attribute__((constructor)) void _elfimplib_init__seterrormode() {
load_dll_msvcrt();
_imp___seterrormode = (void *) _elf_GetProcAddress(_dll_msvcrt, "_seterrormode");
}
void _elfimplib__seterrormode() {
asm("leave\njmp *%0" : : "r"(_imp___seterrormode));
}

void _elfimplib__setjmp() asm("setjmp");
void *_imp___setjmp = NULL;
__attribute__((constructor)) void _elfimplib_init__setjmp() {
load_dll_msvcrt();
_imp___setjmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_setjmp");
}
void _elfimplib__setjmp() {
asm("leave\njmp *%0" : : "r"(_imp___setjmp));
}

void _elfimplib__setjmp3() asm("setjmp3");
void *_imp___setjmp3 = NULL;
__attribute__((constructor)) void _elfimplib_init__setjmp3() {
load_dll_msvcrt();
_imp___setjmp3 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_setjmp3");
}
void _elfimplib__setjmp3() {
asm("leave\njmp *%0" : : "r"(_imp___setjmp3));
}

void _elfimplib__setmaxstdio() asm("setmaxstdio");
void *_imp___setmaxstdio = NULL;
__attribute__((constructor)) void _elfimplib_init__setmaxstdio() {
load_dll_msvcrt();
_imp___setmaxstdio = (void *) _elf_GetProcAddress(_dll_msvcrt, "_setmaxstdio");
}
void _elfimplib__setmaxstdio() {
asm("leave\njmp *%0" : : "r"(_imp___setmaxstdio));
}

void _elfimplib__setmbcp() asm("setmbcp");
void *_imp___setmbcp = NULL;
__attribute__((constructor)) void _elfimplib_init__setmbcp() {
load_dll_msvcrt();
_imp___setmbcp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_setmbcp");
}
void _elfimplib__setmbcp() {
asm("leave\njmp *%0" : : "r"(_imp___setmbcp));
}

void _elfimplib__setmode() asm("setmode");
void *_imp___setmode = NULL;
__attribute__((constructor)) void _elfimplib_init__setmode() {
load_dll_msvcrt();
_imp___setmode = (void *) _elf_GetProcAddress(_dll_msvcrt, "_setmode");
}
void _elfimplib__setmode() {
asm("leave\njmp *%0" : : "r"(_imp___setmode));
}

void _elfimplib__setsystime() asm("setsystime");
void *_imp___setsystime = NULL;
__attribute__((constructor)) void _elfimplib_init__setsystime() {
load_dll_msvcrt();
_imp___setsystime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_setsystime");
}
void _elfimplib__setsystime() {
asm("leave\njmp *%0" : : "r"(_imp___setsystime));
}

void _elfimplib__sleep() asm("sleep");
void *_imp___sleep = NULL;
__attribute__((constructor)) void _elfimplib_init__sleep() {
load_dll_msvcrt();
_imp___sleep = (void *) _elf_GetProcAddress(_dll_msvcrt, "_sleep");
}
void _elfimplib__sleep() {
asm("leave\njmp *%0" : : "r"(_imp___sleep));
}

void _elfimplib__snprintf() asm("snprintf");
void *_imp___snprintf = NULL;
__attribute__((constructor)) void _elfimplib_init__snprintf() {
load_dll_msvcrt();
_imp___snprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_snprintf");
}
void _elfimplib__snprintf() {
asm("leave\njmp *%0" : : "r"(_imp___snprintf));
}

void _elfimplib__snscanf() asm("snscanf");
void *_imp___snscanf = NULL;
__attribute__((constructor)) void _elfimplib_init__snscanf() {
load_dll_msvcrt();
_imp___snscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_snscanf");
}
void _elfimplib__snscanf() {
asm("leave\njmp *%0" : : "r"(_imp___snscanf));
}

void _elfimplib__snwprintf() asm("snwprintf");
void *_imp___snwprintf = NULL;
__attribute__((constructor)) void _elfimplib_init__snwprintf() {
load_dll_msvcrt();
_imp___snwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_snwprintf");
}
void _elfimplib__snwprintf() {
asm("leave\njmp *%0" : : "r"(_imp___snwprintf));
}

void _elfimplib__snwscanf() asm("snwscanf");
void *_imp___snwscanf = NULL;
__attribute__((constructor)) void _elfimplib_init__snwscanf() {
load_dll_msvcrt();
_imp___snwscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_snwscanf");
}
void _elfimplib__snwscanf() {
asm("leave\njmp *%0" : : "r"(_imp___snwscanf));
}

void _elfimplib__sopen() asm("sopen");
void *_imp___sopen = NULL;
__attribute__((constructor)) void _elfimplib_init__sopen() {
load_dll_msvcrt();
_imp___sopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_sopen");
}
void _elfimplib__sopen() {
asm("leave\njmp *%0" : : "r"(_imp___sopen));
}

void _elfimplib__spawnl() asm("spawnl");
void *_imp___spawnl = NULL;
__attribute__((constructor)) void _elfimplib_init__spawnl() {
load_dll_msvcrt();
_imp___spawnl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnl");
}
void _elfimplib__spawnl() {
asm("leave\njmp *%0" : : "r"(_imp___spawnl));
}

void _elfimplib__spawnle() asm("spawnle");
void *_imp___spawnle = NULL;
__attribute__((constructor)) void _elfimplib_init__spawnle() {
load_dll_msvcrt();
_imp___spawnle = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnle");
}
void _elfimplib__spawnle() {
asm("leave\njmp *%0" : : "r"(_imp___spawnle));
}

void _elfimplib__spawnlp() asm("spawnlp");
void *_imp___spawnlp = NULL;
__attribute__((constructor)) void _elfimplib_init__spawnlp() {
load_dll_msvcrt();
_imp___spawnlp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnlp");
}
void _elfimplib__spawnlp() {
asm("leave\njmp *%0" : : "r"(_imp___spawnlp));
}

void _elfimplib__spawnlpe() asm("spawnlpe");
void *_imp___spawnlpe = NULL;
__attribute__((constructor)) void _elfimplib_init__spawnlpe() {
load_dll_msvcrt();
_imp___spawnlpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnlpe");
}
void _elfimplib__spawnlpe() {
asm("leave\njmp *%0" : : "r"(_imp___spawnlpe));
}

void _elfimplib__spawnv() asm("spawnv");
void *_imp___spawnv = NULL;
__attribute__((constructor)) void _elfimplib_init__spawnv() {
load_dll_msvcrt();
_imp___spawnv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnv");
}
void _elfimplib__spawnv() {
asm("leave\njmp *%0" : : "r"(_imp___spawnv));
}

void _elfimplib__spawnve() asm("spawnve");
void *_imp___spawnve = NULL;
__attribute__((constructor)) void _elfimplib_init__spawnve() {
load_dll_msvcrt();
_imp___spawnve = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnve");
}
void _elfimplib__spawnve() {
asm("leave\njmp *%0" : : "r"(_imp___spawnve));
}

void _elfimplib__spawnvp() asm("spawnvp");
void *_imp___spawnvp = NULL;
__attribute__((constructor)) void _elfimplib_init__spawnvp() {
load_dll_msvcrt();
_imp___spawnvp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnvp");
}
void _elfimplib__spawnvp() {
asm("leave\njmp *%0" : : "r"(_imp___spawnvp));
}

void _elfimplib__spawnvpe() asm("spawnvpe");
void *_imp___spawnvpe = NULL;
__attribute__((constructor)) void _elfimplib_init__spawnvpe() {
load_dll_msvcrt();
_imp___spawnvpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnvpe");
}
void _elfimplib__spawnvpe() {
asm("leave\njmp *%0" : : "r"(_imp___spawnvpe));
}

void _elfimplib__splitpath() asm("splitpath");
void *_imp___splitpath = NULL;
__attribute__((constructor)) void _elfimplib_init__splitpath() {
load_dll_msvcrt();
_imp___splitpath = (void *) _elf_GetProcAddress(_dll_msvcrt, "_splitpath");
}
void _elfimplib__splitpath() {
asm("leave\njmp *%0" : : "r"(_imp___splitpath));
}

void _elfimplib__stat() asm("stat");
void *_imp___stat = NULL;
__attribute__((constructor)) void _elfimplib_init__stat() {
load_dll_msvcrt();
_imp___stat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_stat");
}
void _elfimplib__stat() {
asm("leave\njmp *%0" : : "r"(_imp___stat));
}

void _elfimplib__stat64() asm("stat64");
void *_imp___stat64 = NULL;
__attribute__((constructor)) void _elfimplib_init__stat64() {
load_dll_msvcrt();
_imp___stat64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_stat64");
}
void _elfimplib__stat64() {
asm("leave\njmp *%0" : : "r"(_imp___stat64));
}

void _elfimplib__stati64() asm("stati64");
void *_imp___stati64 = NULL;
__attribute__((constructor)) void _elfimplib_init__stati64() {
load_dll_msvcrt();
_imp___stati64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_stati64");
}
void _elfimplib__stati64() {
asm("leave\njmp *%0" : : "r"(_imp___stati64));
}

void _elfimplib__statusfp() asm("statusfp");
void *_imp___statusfp = NULL;
__attribute__((constructor)) void _elfimplib_init__statusfp() {
load_dll_msvcrt();
_imp___statusfp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_statusfp");
}
void _elfimplib__statusfp() {
asm("leave\njmp *%0" : : "r"(_imp___statusfp));
}

void _elfimplib__strcmpi() asm("strcmpi");
void *_imp___strcmpi = NULL;
__attribute__((constructor)) void _elfimplib_init__strcmpi() {
load_dll_msvcrt();
_imp___strcmpi = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strcmpi");
}
void _elfimplib__strcmpi() {
asm("leave\njmp *%0" : : "r"(_imp___strcmpi));
}

void _elfimplib__strdate() asm("strdate");
void *_imp___strdate = NULL;
__attribute__((constructor)) void _elfimplib_init__strdate() {
load_dll_msvcrt();
_imp___strdate = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strdate");
}
void _elfimplib__strdate() {
asm("leave\njmp *%0" : : "r"(_imp___strdate));
}

void _elfimplib__strdup() asm("strdup");
void *_imp___strdup = NULL;
__attribute__((constructor)) void _elfimplib_init__strdup() {
load_dll_msvcrt();
_imp___strdup = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strdup");
}
void _elfimplib__strdup() {
asm("leave\njmp *%0" : : "r"(_imp___strdup));
}

void _elfimplib__stricmp() asm("stricmp");
void *_imp___stricmp = NULL;
__attribute__((constructor)) void _elfimplib_init__stricmp() {
load_dll_msvcrt();
_imp___stricmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_stricmp");
}
void _elfimplib__stricmp() {
asm("leave\njmp *%0" : : "r"(_imp___stricmp));
}

void _elfimplib__stricoll() asm("stricoll");
void *_imp___stricoll = NULL;
__attribute__((constructor)) void _elfimplib_init__stricoll() {
load_dll_msvcrt();
_imp___stricoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_stricoll");
}
void _elfimplib__stricoll() {
asm("leave\njmp *%0" : : "r"(_imp___stricoll));
}

void _elfimplib__strlwr() asm("strlwr");
void *_imp___strlwr = NULL;
__attribute__((constructor)) void _elfimplib_init__strlwr() {
load_dll_msvcrt();
_imp___strlwr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strlwr");
}
void _elfimplib__strlwr() {
asm("leave\njmp *%0" : : "r"(_imp___strlwr));
}

void _elfimplib__strncoll() asm("strncoll");
void *_imp___strncoll = NULL;
__attribute__((constructor)) void _elfimplib_init__strncoll() {
load_dll_msvcrt();
_imp___strncoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strncoll");
}
void _elfimplib__strncoll() {
asm("leave\njmp *%0" : : "r"(_imp___strncoll));
}

void _elfimplib__strnicmp() asm("strnicmp");
void *_imp___strnicmp = NULL;
__attribute__((constructor)) void _elfimplib_init__strnicmp() {
load_dll_msvcrt();
_imp___strnicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strnicmp");
}
void _elfimplib__strnicmp() {
asm("leave\njmp *%0" : : "r"(_imp___strnicmp));
}

void _elfimplib__strnicoll() asm("strnicoll");
void *_imp___strnicoll = NULL;
__attribute__((constructor)) void _elfimplib_init__strnicoll() {
load_dll_msvcrt();
_imp___strnicoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strnicoll");
}
void _elfimplib__strnicoll() {
asm("leave\njmp *%0" : : "r"(_imp___strnicoll));
}

void _elfimplib__strnset() asm("strnset");
void *_imp___strnset = NULL;
__attribute__((constructor)) void _elfimplib_init__strnset() {
load_dll_msvcrt();
_imp___strnset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strnset");
}
void _elfimplib__strnset() {
asm("leave\njmp *%0" : : "r"(_imp___strnset));
}

void _elfimplib__strrev() asm("strrev");
void *_imp___strrev = NULL;
__attribute__((constructor)) void _elfimplib_init__strrev() {
load_dll_msvcrt();
_imp___strrev = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strrev");
}
void _elfimplib__strrev() {
asm("leave\njmp *%0" : : "r"(_imp___strrev));
}

void _elfimplib__strset() asm("strset");
void *_imp___strset = NULL;
__attribute__((constructor)) void _elfimplib_init__strset() {
load_dll_msvcrt();
_imp___strset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strset");
}
void _elfimplib__strset() {
asm("leave\njmp *%0" : : "r"(_imp___strset));
}

void _elfimplib__strtime() asm("strtime");
void *_imp___strtime = NULL;
__attribute__((constructor)) void _elfimplib_init__strtime() {
load_dll_msvcrt();
_imp___strtime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strtime");
}
void _elfimplib__strtime() {
asm("leave\njmp *%0" : : "r"(_imp___strtime));
}

void _elfimplib__strtoi64() asm("strtoi64");
void *_imp___strtoi64 = NULL;
__attribute__((constructor)) void _elfimplib_init__strtoi64() {
load_dll_msvcrt();
_imp___strtoi64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strtoi64");
}
void _elfimplib__strtoi64() {
asm("leave\njmp *%0" : : "r"(_imp___strtoi64));
}

void _elfimplib__strtoui64() asm("strtoui64");
void *_imp___strtoui64 = NULL;
__attribute__((constructor)) void _elfimplib_init__strtoui64() {
load_dll_msvcrt();
_imp___strtoui64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strtoui64");
}
void _elfimplib__strtoui64() {
asm("leave\njmp *%0" : : "r"(_imp___strtoui64));
}

void _elfimplib__strupr() asm("strupr");
void *_imp___strupr = NULL;
__attribute__((constructor)) void _elfimplib_init__strupr() {
load_dll_msvcrt();
_imp___strupr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strupr");
}
void _elfimplib__strupr() {
asm("leave\njmp *%0" : : "r"(_imp___strupr));
}

void _elfimplib__swab() asm("swab");
void *_imp___swab = NULL;
__attribute__((constructor)) void _elfimplib_init__swab() {
load_dll_msvcrt();
_imp___swab = (void *) _elf_GetProcAddress(_dll_msvcrt, "_swab");
}
void _elfimplib__swab() {
asm("leave\njmp *%0" : : "r"(_imp___swab));
}

void _elfimplib__sys_errlist() asm("sys_errlist");
void *_imp___sys_errlist = NULL;
__attribute__((constructor)) void _elfimplib_init__sys_errlist() {
load_dll_msvcrt();
_imp___sys_errlist = (void *) _elf_GetProcAddress(_dll_msvcrt, "_sys_errlist");
}
void _elfimplib__sys_errlist() {
asm("leave\njmp *%0" : : "r"(_imp___sys_errlist));
}

void _elfimplib__sys_nerr() asm("sys_nerr");
void *_imp___sys_nerr = NULL;
__attribute__((constructor)) void _elfimplib_init__sys_nerr() {
load_dll_msvcrt();
_imp___sys_nerr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_sys_nerr");
}
void _elfimplib__sys_nerr() {
asm("leave\njmp *%0" : : "r"(_imp___sys_nerr));
}

void _elfimplib__tell() asm("tell");
void *_imp___tell = NULL;
__attribute__((constructor)) void _elfimplib_init__tell() {
load_dll_msvcrt();
_imp___tell = (void *) _elf_GetProcAddress(_dll_msvcrt, "_tell");
}
void _elfimplib__tell() {
asm("leave\njmp *%0" : : "r"(_imp___tell));
}

void _elfimplib__telli64() asm("telli64");
void *_imp___telli64 = NULL;
__attribute__((constructor)) void _elfimplib_init__telli64() {
load_dll_msvcrt();
_imp___telli64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_telli64");
}
void _elfimplib__telli64() {
asm("leave\njmp *%0" : : "r"(_imp___telli64));
}

void _elfimplib__tempnam() asm("tempnam");
void *_imp___tempnam = NULL;
__attribute__((constructor)) void _elfimplib_init__tempnam() {
load_dll_msvcrt();
_imp___tempnam = (void *) _elf_GetProcAddress(_dll_msvcrt, "_tempnam");
}
void _elfimplib__tempnam() {
asm("leave\njmp *%0" : : "r"(_imp___tempnam));
}

void _elfimplib__time64() asm("time64");
void *_imp___time64 = NULL;
__attribute__((constructor)) void _elfimplib_init__time64() {
load_dll_msvcrt();
_imp___time64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_time64");
}
void _elfimplib__time64() {
asm("leave\njmp *%0" : : "r"(_imp___time64));
}

void _elfimplib__timezone() asm("timezone");
void *_imp___timezone = NULL;
__attribute__((constructor)) void _elfimplib_init__timezone() {
load_dll_msvcrt();
_imp___timezone = (void *) _elf_GetProcAddress(_dll_msvcrt, "_timezone");
}
void _elfimplib__timezone() {
asm("leave\njmp *%0" : : "r"(_imp___timezone));
}

void _elfimplib__tzname() asm("tzname");
void *_imp___tzname = NULL;
__attribute__((constructor)) void _elfimplib_init__tzname() {
load_dll_msvcrt();
_imp___tzname = (void *) _elf_GetProcAddress(_dll_msvcrt, "_tzname");
}
void _elfimplib__tzname() {
asm("leave\njmp *%0" : : "r"(_imp___tzname));
}

void _elfimplib__tzset() asm("tzset");
void *_imp___tzset = NULL;
__attribute__((constructor)) void _elfimplib_init__tzset() {
load_dll_msvcrt();
_imp___tzset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_tzset");
}
void _elfimplib__tzset() {
asm("leave\njmp *%0" : : "r"(_imp___tzset));
}

void _elfimplib__ui64toa() asm("ui64toa");
void *_imp___ui64toa = NULL;
__attribute__((constructor)) void _elfimplib_init__ui64toa() {
load_dll_msvcrt();
_imp___ui64toa = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ui64toa");
}
void _elfimplib__ui64toa() {
asm("leave\njmp *%0" : : "r"(_imp___ui64toa));
}

void _elfimplib__ui64tow() asm("ui64tow");
void *_imp___ui64tow = NULL;
__attribute__((constructor)) void _elfimplib_init__ui64tow() {
load_dll_msvcrt();
_imp___ui64tow = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ui64tow");
}
void _elfimplib__ui64tow() {
asm("leave\njmp *%0" : : "r"(_imp___ui64tow));
}

void _elfimplib__ultoa() asm("ultoa");
void *_imp___ultoa = NULL;
__attribute__((constructor)) void _elfimplib_init__ultoa() {
load_dll_msvcrt();
_imp___ultoa = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ultoa");
}
void _elfimplib__ultoa() {
asm("leave\njmp *%0" : : "r"(_imp___ultoa));
}

void _elfimplib__ultow() asm("ultow");
void *_imp___ultow = NULL;
__attribute__((constructor)) void _elfimplib_init__ultow() {
load_dll_msvcrt();
_imp___ultow = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ultow");
}
void _elfimplib__ultow() {
asm("leave\njmp *%0" : : "r"(_imp___ultow));
}

void _elfimplib__umask() asm("umask");
void *_imp___umask = NULL;
__attribute__((constructor)) void _elfimplib_init__umask() {
load_dll_msvcrt();
_imp___umask = (void *) _elf_GetProcAddress(_dll_msvcrt, "_umask");
}
void _elfimplib__umask() {
asm("leave\njmp *%0" : : "r"(_imp___umask));
}

void _elfimplib__ungetch() asm("ungetch");
void *_imp___ungetch = NULL;
__attribute__((constructor)) void _elfimplib_init__ungetch() {
load_dll_msvcrt();
_imp___ungetch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ungetch");
}
void _elfimplib__ungetch() {
asm("leave\njmp *%0" : : "r"(_imp___ungetch));
}

void _elfimplib__ungetwch() asm("ungetwch");
void *_imp___ungetwch = NULL;
__attribute__((constructor)) void _elfimplib_init__ungetwch() {
load_dll_msvcrt();
_imp___ungetwch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ungetwch");
}
void _elfimplib__ungetwch() {
asm("leave\njmp *%0" : : "r"(_imp___ungetwch));
}

void _elfimplib__unlink() asm("unlink");
void *_imp___unlink = NULL;
__attribute__((constructor)) void _elfimplib_init__unlink() {
load_dll_msvcrt();
_imp___unlink = (void *) _elf_GetProcAddress(_dll_msvcrt, "_unlink");
}
void _elfimplib__unlink() {
asm("leave\njmp *%0" : : "r"(_imp___unlink));
}

void _elfimplib__unloaddll() asm("unloaddll");
void *_imp___unloaddll = NULL;
__attribute__((constructor)) void _elfimplib_init__unloaddll() {
load_dll_msvcrt();
_imp___unloaddll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_unloaddll");
}
void _elfimplib__unloaddll() {
asm("leave\njmp *%0" : : "r"(_imp___unloaddll));
}

void _elfimplib__unlock() asm("unlock");
void *_imp___unlock = NULL;
__attribute__((constructor)) void _elfimplib_init__unlock() {
load_dll_msvcrt();
_imp___unlock = (void *) _elf_GetProcAddress(_dll_msvcrt, "_unlock");
}
void _elfimplib__unlock() {
asm("leave\njmp *%0" : : "r"(_imp___unlock));
}

void _elfimplib__utime() asm("utime");
void *_imp___utime = NULL;
__attribute__((constructor)) void _elfimplib_init__utime() {
load_dll_msvcrt();
_imp___utime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_utime");
}
void _elfimplib__utime() {
asm("leave\njmp *%0" : : "r"(_imp___utime));
}

void _elfimplib__utime64() asm("utime64");
void *_imp___utime64 = NULL;
__attribute__((constructor)) void _elfimplib_init__utime64() {
load_dll_msvcrt();
_imp___utime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_utime64");
}
void _elfimplib__utime64() {
asm("leave\njmp *%0" : : "r"(_imp___utime64));
}

void _elfimplib__vscprintf() asm("vscprintf");
void *_imp___vscprintf = NULL;
__attribute__((constructor)) void _elfimplib_init__vscprintf() {
load_dll_msvcrt();
_imp___vscprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_vscprintf");
}
void _elfimplib__vscprintf() {
asm("leave\njmp *%0" : : "r"(_imp___vscprintf));
}

void _elfimplib__vscwprintf() asm("vscwprintf");
void *_imp___vscwprintf = NULL;
__attribute__((constructor)) void _elfimplib_init__vscwprintf() {
load_dll_msvcrt();
_imp___vscwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_vscwprintf");
}
void _elfimplib__vscwprintf() {
asm("leave\njmp *%0" : : "r"(_imp___vscwprintf));
}

void _elfimplib__vsnprintf() asm("vsnprintf");
void *_imp___vsnprintf = NULL;
__attribute__((constructor)) void _elfimplib_init__vsnprintf() {
load_dll_msvcrt();
_imp___vsnprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_vsnprintf");
}
void _elfimplib__vsnprintf() {
asm("leave\njmp *%0" : : "r"(_imp___vsnprintf));
}

void _elfimplib__vsnwprintf() asm("vsnwprintf");
void *_imp___vsnwprintf = NULL;
__attribute__((constructor)) void _elfimplib_init__vsnwprintf() {
load_dll_msvcrt();
_imp___vsnwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_vsnwprintf");
}
void _elfimplib__vsnwprintf() {
asm("leave\njmp *%0" : : "r"(_imp___vsnwprintf));
}

void _elfimplib__waccess() asm("waccess");
void *_imp___waccess = NULL;
__attribute__((constructor)) void _elfimplib_init__waccess() {
load_dll_msvcrt();
_imp___waccess = (void *) _elf_GetProcAddress(_dll_msvcrt, "_waccess");
}
void _elfimplib__waccess() {
asm("leave\njmp *%0" : : "r"(_imp___waccess));
}

void _elfimplib__wasctime() asm("wasctime");
void *_imp___wasctime = NULL;
__attribute__((constructor)) void _elfimplib_init__wasctime() {
load_dll_msvcrt();
_imp___wasctime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wasctime");
}
void _elfimplib__wasctime() {
asm("leave\njmp *%0" : : "r"(_imp___wasctime));
}

void _elfimplib__wchdir() asm("wchdir");
void *_imp___wchdir = NULL;
__attribute__((constructor)) void _elfimplib_init__wchdir() {
load_dll_msvcrt();
_imp___wchdir = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wchdir");
}
void _elfimplib__wchdir() {
asm("leave\njmp *%0" : : "r"(_imp___wchdir));
}

void _elfimplib__wchmod() asm("wchmod");
void *_imp___wchmod = NULL;
__attribute__((constructor)) void _elfimplib_init__wchmod() {
load_dll_msvcrt();
_imp___wchmod = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wchmod");
}
void _elfimplib__wchmod() {
asm("leave\njmp *%0" : : "r"(_imp___wchmod));
}

void _elfimplib__wcmdln() asm("wcmdln");
void *_imp___wcmdln = NULL;
__attribute__((constructor)) void _elfimplib_init__wcmdln() {
load_dll_msvcrt();
_imp___wcmdln = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcmdln");
}
void _elfimplib__wcmdln() {
asm("leave\njmp *%0" : : "r"(_imp___wcmdln));
}

void _elfimplib__wcreat() asm("wcreat");
void *_imp___wcreat = NULL;
__attribute__((constructor)) void _elfimplib_init__wcreat() {
load_dll_msvcrt();
_imp___wcreat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcreat");
}
void _elfimplib__wcreat() {
asm("leave\njmp *%0" : : "r"(_imp___wcreat));
}

void _elfimplib__wcsdup() asm("wcsdup");
void *_imp___wcsdup = NULL;
__attribute__((constructor)) void _elfimplib_init__wcsdup() {
load_dll_msvcrt();
_imp___wcsdup = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsdup");
}
void _elfimplib__wcsdup() {
asm("leave\njmp *%0" : : "r"(_imp___wcsdup));
}

void _elfimplib__wcserror() asm("wcserror");
void *_imp___wcserror = NULL;
__attribute__((constructor)) void _elfimplib_init__wcserror() {
load_dll_msvcrt();
_imp___wcserror = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcserror");
}
void _elfimplib__wcserror() {
asm("leave\njmp *%0" : : "r"(_imp___wcserror));
}

void _elfimplib__wcsicmp() asm("wcsicmp");
void *_imp___wcsicmp = NULL;
__attribute__((constructor)) void _elfimplib_init__wcsicmp() {
load_dll_msvcrt();
_imp___wcsicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsicmp");
}
void _elfimplib__wcsicmp() {
asm("leave\njmp *%0" : : "r"(_imp___wcsicmp));
}

void _elfimplib__wcsicoll() asm("wcsicoll");
void *_imp___wcsicoll = NULL;
__attribute__((constructor)) void _elfimplib_init__wcsicoll() {
load_dll_msvcrt();
_imp___wcsicoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsicoll");
}
void _elfimplib__wcsicoll() {
asm("leave\njmp *%0" : : "r"(_imp___wcsicoll));
}

void _elfimplib__wcslwr() asm("wcslwr");
void *_imp___wcslwr = NULL;
__attribute__((constructor)) void _elfimplib_init__wcslwr() {
load_dll_msvcrt();
_imp___wcslwr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcslwr");
}
void _elfimplib__wcslwr() {
asm("leave\njmp *%0" : : "r"(_imp___wcslwr));
}

void _elfimplib__wcsncoll() asm("wcsncoll");
void *_imp___wcsncoll = NULL;
__attribute__((constructor)) void _elfimplib_init__wcsncoll() {
load_dll_msvcrt();
_imp___wcsncoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsncoll");
}
void _elfimplib__wcsncoll() {
asm("leave\njmp *%0" : : "r"(_imp___wcsncoll));
}

void _elfimplib__wcsnicmp() asm("wcsnicmp");
void *_imp___wcsnicmp = NULL;
__attribute__((constructor)) void _elfimplib_init__wcsnicmp() {
load_dll_msvcrt();
_imp___wcsnicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsnicmp");
}
void _elfimplib__wcsnicmp() {
asm("leave\njmp *%0" : : "r"(_imp___wcsnicmp));
}

void _elfimplib__wcsnicoll() asm("wcsnicoll");
void *_imp___wcsnicoll = NULL;
__attribute__((constructor)) void _elfimplib_init__wcsnicoll() {
load_dll_msvcrt();
_imp___wcsnicoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsnicoll");
}
void _elfimplib__wcsnicoll() {
asm("leave\njmp *%0" : : "r"(_imp___wcsnicoll));
}

void _elfimplib__wcsnset() asm("wcsnset");
void *_imp___wcsnset = NULL;
__attribute__((constructor)) void _elfimplib_init__wcsnset() {
load_dll_msvcrt();
_imp___wcsnset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsnset");
}
void _elfimplib__wcsnset() {
asm("leave\njmp *%0" : : "r"(_imp___wcsnset));
}

void _elfimplib__wcsrev() asm("wcsrev");
void *_imp___wcsrev = NULL;
__attribute__((constructor)) void _elfimplib_init__wcsrev() {
load_dll_msvcrt();
_imp___wcsrev = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsrev");
}
void _elfimplib__wcsrev() {
asm("leave\njmp *%0" : : "r"(_imp___wcsrev));
}

void _elfimplib__wcsset() asm("wcsset");
void *_imp___wcsset = NULL;
__attribute__((constructor)) void _elfimplib_init__wcsset() {
load_dll_msvcrt();
_imp___wcsset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsset");
}
void _elfimplib__wcsset() {
asm("leave\njmp *%0" : : "r"(_imp___wcsset));
}

void _elfimplib__wcstoi64() asm("wcstoi64");
void *_imp___wcstoi64 = NULL;
__attribute__((constructor)) void _elfimplib_init__wcstoi64() {
load_dll_msvcrt();
_imp___wcstoi64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcstoi64");
}
void _elfimplib__wcstoi64() {
asm("leave\njmp *%0" : : "r"(_imp___wcstoi64));
}

void _elfimplib__wcstoui64() asm("wcstoui64");
void *_imp___wcstoui64 = NULL;
__attribute__((constructor)) void _elfimplib_init__wcstoui64() {
load_dll_msvcrt();
_imp___wcstoui64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcstoui64");
}
void _elfimplib__wcstoui64() {
asm("leave\njmp *%0" : : "r"(_imp___wcstoui64));
}

void _elfimplib__wcsupr() asm("wcsupr");
void *_imp___wcsupr = NULL;
__attribute__((constructor)) void _elfimplib_init__wcsupr() {
load_dll_msvcrt();
_imp___wcsupr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsupr");
}
void _elfimplib__wcsupr() {
asm("leave\njmp *%0" : : "r"(_imp___wcsupr));
}

void _elfimplib__wctime() asm("wctime");
void *_imp___wctime = NULL;
__attribute__((constructor)) void _elfimplib_init__wctime() {
load_dll_msvcrt();
_imp___wctime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wctime");
}
void _elfimplib__wctime() {
asm("leave\njmp *%0" : : "r"(_imp___wctime));
}

void _elfimplib__wctime64() asm("wctime64");
void *_imp___wctime64 = NULL;
__attribute__((constructor)) void _elfimplib_init__wctime64() {
load_dll_msvcrt();
_imp___wctime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wctime64");
}
void _elfimplib__wctime64() {
asm("leave\njmp *%0" : : "r"(_imp___wctime64));
}

void _elfimplib__wenviron() asm("wenviron");
void *_imp___wenviron = NULL;
__attribute__((constructor)) void _elfimplib_init__wenviron() {
load_dll_msvcrt();
_imp___wenviron = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wenviron");
}
void _elfimplib__wenviron() {
asm("leave\njmp *%0" : : "r"(_imp___wenviron));
}

void _elfimplib__wexecl() asm("wexecl");
void *_imp___wexecl = NULL;
__attribute__((constructor)) void _elfimplib_init__wexecl() {
load_dll_msvcrt();
_imp___wexecl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexecl");
}
void _elfimplib__wexecl() {
asm("leave\njmp *%0" : : "r"(_imp___wexecl));
}

void _elfimplib__wexecle() asm("wexecle");
void *_imp___wexecle = NULL;
__attribute__((constructor)) void _elfimplib_init__wexecle() {
load_dll_msvcrt();
_imp___wexecle = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexecle");
}
void _elfimplib__wexecle() {
asm("leave\njmp *%0" : : "r"(_imp___wexecle));
}

void _elfimplib__wexeclp() asm("wexeclp");
void *_imp___wexeclp = NULL;
__attribute__((constructor)) void _elfimplib_init__wexeclp() {
load_dll_msvcrt();
_imp___wexeclp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexeclp");
}
void _elfimplib__wexeclp() {
asm("leave\njmp *%0" : : "r"(_imp___wexeclp));
}

void _elfimplib__wexeclpe() asm("wexeclpe");
void *_imp___wexeclpe = NULL;
__attribute__((constructor)) void _elfimplib_init__wexeclpe() {
load_dll_msvcrt();
_imp___wexeclpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexeclpe");
}
void _elfimplib__wexeclpe() {
asm("leave\njmp *%0" : : "r"(_imp___wexeclpe));
}

void _elfimplib__wexecv() asm("wexecv");
void *_imp___wexecv = NULL;
__attribute__((constructor)) void _elfimplib_init__wexecv() {
load_dll_msvcrt();
_imp___wexecv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexecv");
}
void _elfimplib__wexecv() {
asm("leave\njmp *%0" : : "r"(_imp___wexecv));
}

void _elfimplib__wexecve() asm("wexecve");
void *_imp___wexecve = NULL;
__attribute__((constructor)) void _elfimplib_init__wexecve() {
load_dll_msvcrt();
_imp___wexecve = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexecve");
}
void _elfimplib__wexecve() {
asm("leave\njmp *%0" : : "r"(_imp___wexecve));
}

void _elfimplib__wexecvp() asm("wexecvp");
void *_imp___wexecvp = NULL;
__attribute__((constructor)) void _elfimplib_init__wexecvp() {
load_dll_msvcrt();
_imp___wexecvp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexecvp");
}
void _elfimplib__wexecvp() {
asm("leave\njmp *%0" : : "r"(_imp___wexecvp));
}

void _elfimplib__wexecvpe() asm("wexecvpe");
void *_imp___wexecvpe = NULL;
__attribute__((constructor)) void _elfimplib_init__wexecvpe() {
load_dll_msvcrt();
_imp___wexecvpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexecvpe");
}
void _elfimplib__wexecvpe() {
asm("leave\njmp *%0" : : "r"(_imp___wexecvpe));
}

void _elfimplib__wfdopen() asm("wfdopen");
void *_imp___wfdopen = NULL;
__attribute__((constructor)) void _elfimplib_init__wfdopen() {
load_dll_msvcrt();
_imp___wfdopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfdopen");
}
void _elfimplib__wfdopen() {
asm("leave\njmp *%0" : : "r"(_imp___wfdopen));
}

void _elfimplib__wfindfirst() asm("wfindfirst");
void *_imp___wfindfirst = NULL;
__attribute__((constructor)) void _elfimplib_init__wfindfirst() {
load_dll_msvcrt();
_imp___wfindfirst = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfindfirst");
}
void _elfimplib__wfindfirst() {
asm("leave\njmp *%0" : : "r"(_imp___wfindfirst));
}

void _elfimplib__wfindfirst64() asm("wfindfirst64");
void *_imp___wfindfirst64 = NULL;
__attribute__((constructor)) void _elfimplib_init__wfindfirst64() {
load_dll_msvcrt();
_imp___wfindfirst64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfindfirst64");
}
void _elfimplib__wfindfirst64() {
asm("leave\njmp *%0" : : "r"(_imp___wfindfirst64));
}

void _elfimplib__wfindfirsti64() asm("wfindfirsti64");
void *_imp___wfindfirsti64 = NULL;
__attribute__((constructor)) void _elfimplib_init__wfindfirsti64() {
load_dll_msvcrt();
_imp___wfindfirsti64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfindfirsti64");
}
void _elfimplib__wfindfirsti64() {
asm("leave\njmp *%0" : : "r"(_imp___wfindfirsti64));
}

void _elfimplib__wfindnext() asm("wfindnext");
void *_imp___wfindnext = NULL;
__attribute__((constructor)) void _elfimplib_init__wfindnext() {
load_dll_msvcrt();
_imp___wfindnext = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfindnext");
}
void _elfimplib__wfindnext() {
asm("leave\njmp *%0" : : "r"(_imp___wfindnext));
}

void _elfimplib__wfindnext64() asm("wfindnext64");
void *_imp___wfindnext64 = NULL;
__attribute__((constructor)) void _elfimplib_init__wfindnext64() {
load_dll_msvcrt();
_imp___wfindnext64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfindnext64");
}
void _elfimplib__wfindnext64() {
asm("leave\njmp *%0" : : "r"(_imp___wfindnext64));
}

void _elfimplib__wfindnexti64() asm("wfindnexti64");
void *_imp___wfindnexti64 = NULL;
__attribute__((constructor)) void _elfimplib_init__wfindnexti64() {
load_dll_msvcrt();
_imp___wfindnexti64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfindnexti64");
}
void _elfimplib__wfindnexti64() {
asm("leave\njmp *%0" : : "r"(_imp___wfindnexti64));
}

void _elfimplib__wfopen() asm("wfopen");
void *_imp___wfopen = NULL;
__attribute__((constructor)) void _elfimplib_init__wfopen() {
load_dll_msvcrt();
_imp___wfopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfopen");
}
void _elfimplib__wfopen() {
asm("leave\njmp *%0" : : "r"(_imp___wfopen));
}

void _elfimplib__wfreopen() asm("wfreopen");
void *_imp___wfreopen = NULL;
__attribute__((constructor)) void _elfimplib_init__wfreopen() {
load_dll_msvcrt();
_imp___wfreopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfreopen");
}
void _elfimplib__wfreopen() {
asm("leave\njmp *%0" : : "r"(_imp___wfreopen));
}

void _elfimplib__wfsopen() asm("wfsopen");
void *_imp___wfsopen = NULL;
__attribute__((constructor)) void _elfimplib_init__wfsopen() {
load_dll_msvcrt();
_imp___wfsopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfsopen");
}
void _elfimplib__wfsopen() {
asm("leave\njmp *%0" : : "r"(_imp___wfsopen));
}

void _elfimplib__wfullpath() asm("wfullpath");
void *_imp___wfullpath = NULL;
__attribute__((constructor)) void _elfimplib_init__wfullpath() {
load_dll_msvcrt();
_imp___wfullpath = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfullpath");
}
void _elfimplib__wfullpath() {
asm("leave\njmp *%0" : : "r"(_imp___wfullpath));
}

void _elfimplib__wgetcwd() asm("wgetcwd");
void *_imp___wgetcwd = NULL;
__attribute__((constructor)) void _elfimplib_init__wgetcwd() {
load_dll_msvcrt();
_imp___wgetcwd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wgetcwd");
}
void _elfimplib__wgetcwd() {
asm("leave\njmp *%0" : : "r"(_imp___wgetcwd));
}

void _elfimplib__wgetdcwd() asm("wgetdcwd");
void *_imp___wgetdcwd = NULL;
__attribute__((constructor)) void _elfimplib_init__wgetdcwd() {
load_dll_msvcrt();
_imp___wgetdcwd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wgetdcwd");
}
void _elfimplib__wgetdcwd() {
asm("leave\njmp *%0" : : "r"(_imp___wgetdcwd));
}

void _elfimplib__wgetenv() asm("wgetenv");
void *_imp___wgetenv = NULL;
__attribute__((constructor)) void _elfimplib_init__wgetenv() {
load_dll_msvcrt();
_imp___wgetenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wgetenv");
}
void _elfimplib__wgetenv() {
asm("leave\njmp *%0" : : "r"(_imp___wgetenv));
}

void _elfimplib__winmajor() asm("winmajor");
void *_imp___winmajor = NULL;
__attribute__((constructor)) void _elfimplib_init__winmajor() {
load_dll_msvcrt();
_imp___winmajor = (void *) _elf_GetProcAddress(_dll_msvcrt, "_winmajor");
}
void _elfimplib__winmajor() {
asm("leave\njmp *%0" : : "r"(_imp___winmajor));
}

void _elfimplib__winminor() asm("winminor");
void *_imp___winminor = NULL;
__attribute__((constructor)) void _elfimplib_init__winminor() {
load_dll_msvcrt();
_imp___winminor = (void *) _elf_GetProcAddress(_dll_msvcrt, "_winminor");
}
void _elfimplib__winminor() {
asm("leave\njmp *%0" : : "r"(_imp___winminor));
}

void _elfimplib__winver() asm("winver");
void *_imp___winver = NULL;
__attribute__((constructor)) void _elfimplib_init__winver() {
load_dll_msvcrt();
_imp___winver = (void *) _elf_GetProcAddress(_dll_msvcrt, "_winver");
}
void _elfimplib__winver() {
asm("leave\njmp *%0" : : "r"(_imp___winver));
}

void _elfimplib__wmakepath() asm("wmakepath");
void *_imp___wmakepath = NULL;
__attribute__((constructor)) void _elfimplib_init__wmakepath() {
load_dll_msvcrt();
_imp___wmakepath = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wmakepath");
}
void _elfimplib__wmakepath() {
asm("leave\njmp *%0" : : "r"(_imp___wmakepath));
}

void _elfimplib__wmkdir() asm("wmkdir");
void *_imp___wmkdir = NULL;
__attribute__((constructor)) void _elfimplib_init__wmkdir() {
load_dll_msvcrt();
_imp___wmkdir = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wmkdir");
}
void _elfimplib__wmkdir() {
asm("leave\njmp *%0" : : "r"(_imp___wmkdir));
}

void _elfimplib__wmktemp() asm("wmktemp");
void *_imp___wmktemp = NULL;
__attribute__((constructor)) void _elfimplib_init__wmktemp() {
load_dll_msvcrt();
_imp___wmktemp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wmktemp");
}
void _elfimplib__wmktemp() {
asm("leave\njmp *%0" : : "r"(_imp___wmktemp));
}

void _elfimplib__wopen() asm("wopen");
void *_imp___wopen = NULL;
__attribute__((constructor)) void _elfimplib_init__wopen() {
load_dll_msvcrt();
_imp___wopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wopen");
}
void _elfimplib__wopen() {
asm("leave\njmp *%0" : : "r"(_imp___wopen));
}

void _elfimplib__wperror() asm("wperror");
void *_imp___wperror = NULL;
__attribute__((constructor)) void _elfimplib_init__wperror() {
load_dll_msvcrt();
_imp___wperror = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wperror");
}
void _elfimplib__wperror() {
asm("leave\njmp *%0" : : "r"(_imp___wperror));
}

void _elfimplib__wpgmptr() asm("wpgmptr");
void *_imp___wpgmptr = NULL;
__attribute__((constructor)) void _elfimplib_init__wpgmptr() {
load_dll_msvcrt();
_imp___wpgmptr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wpgmptr");
}
void _elfimplib__wpgmptr() {
asm("leave\njmp *%0" : : "r"(_imp___wpgmptr));
}

void _elfimplib__wpopen() asm("wpopen");
void *_imp___wpopen = NULL;
__attribute__((constructor)) void _elfimplib_init__wpopen() {
load_dll_msvcrt();
_imp___wpopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wpopen");
}
void _elfimplib__wpopen() {
asm("leave\njmp *%0" : : "r"(_imp___wpopen));
}

void _elfimplib__wputenv() asm("wputenv");
void *_imp___wputenv = NULL;
__attribute__((constructor)) void _elfimplib_init__wputenv() {
load_dll_msvcrt();
_imp___wputenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wputenv");
}
void _elfimplib__wputenv() {
asm("leave\njmp *%0" : : "r"(_imp___wputenv));
}

void _elfimplib__wremove() asm("wremove");
void *_imp___wremove = NULL;
__attribute__((constructor)) void _elfimplib_init__wremove() {
load_dll_msvcrt();
_imp___wremove = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wremove");
}
void _elfimplib__wremove() {
asm("leave\njmp *%0" : : "r"(_imp___wremove));
}

void _elfimplib__wrename() asm("wrename");
void *_imp___wrename = NULL;
__attribute__((constructor)) void _elfimplib_init__wrename() {
load_dll_msvcrt();
_imp___wrename = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wrename");
}
void _elfimplib__wrename() {
asm("leave\njmp *%0" : : "r"(_imp___wrename));
}

void _elfimplib__write() asm("write");
void *_imp___write = NULL;
__attribute__((constructor)) void _elfimplib_init__write() {
load_dll_msvcrt();
_imp___write = (void *) _elf_GetProcAddress(_dll_msvcrt, "_write");
}
void _elfimplib__write() {
asm("leave\njmp *%0" : : "r"(_imp___write));
}

void _elfimplib__wrmdir() asm("wrmdir");
void *_imp___wrmdir = NULL;
__attribute__((constructor)) void _elfimplib_init__wrmdir() {
load_dll_msvcrt();
_imp___wrmdir = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wrmdir");
}
void _elfimplib__wrmdir() {
asm("leave\njmp *%0" : : "r"(_imp___wrmdir));
}

void _elfimplib__wsearchenv() asm("wsearchenv");
void *_imp___wsearchenv = NULL;
__attribute__((constructor)) void _elfimplib_init__wsearchenv() {
load_dll_msvcrt();
_imp___wsearchenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wsearchenv");
}
void _elfimplib__wsearchenv() {
asm("leave\njmp *%0" : : "r"(_imp___wsearchenv));
}

void _elfimplib__wsetlocale() asm("wsetlocale");
void *_imp___wsetlocale = NULL;
__attribute__((constructor)) void _elfimplib_init__wsetlocale() {
load_dll_msvcrt();
_imp___wsetlocale = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wsetlocale");
}
void _elfimplib__wsetlocale() {
asm("leave\njmp *%0" : : "r"(_imp___wsetlocale));
}

void _elfimplib__wsopen() asm("wsopen");
void *_imp___wsopen = NULL;
__attribute__((constructor)) void _elfimplib_init__wsopen() {
load_dll_msvcrt();
_imp___wsopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wsopen");
}
void _elfimplib__wsopen() {
asm("leave\njmp *%0" : : "r"(_imp___wsopen));
}

void _elfimplib__wspawnl() asm("wspawnl");
void *_imp___wspawnl = NULL;
__attribute__((constructor)) void _elfimplib_init__wspawnl() {
load_dll_msvcrt();
_imp___wspawnl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnl");
}
void _elfimplib__wspawnl() {
asm("leave\njmp *%0" : : "r"(_imp___wspawnl));
}

void _elfimplib__wspawnle() asm("wspawnle");
void *_imp___wspawnle = NULL;
__attribute__((constructor)) void _elfimplib_init__wspawnle() {
load_dll_msvcrt();
_imp___wspawnle = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnle");
}
void _elfimplib__wspawnle() {
asm("leave\njmp *%0" : : "r"(_imp___wspawnle));
}

void _elfimplib__wspawnlp() asm("wspawnlp");
void *_imp___wspawnlp = NULL;
__attribute__((constructor)) void _elfimplib_init__wspawnlp() {
load_dll_msvcrt();
_imp___wspawnlp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnlp");
}
void _elfimplib__wspawnlp() {
asm("leave\njmp *%0" : : "r"(_imp___wspawnlp));
}

void _elfimplib__wspawnlpe() asm("wspawnlpe");
void *_imp___wspawnlpe = NULL;
__attribute__((constructor)) void _elfimplib_init__wspawnlpe() {
load_dll_msvcrt();
_imp___wspawnlpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnlpe");
}
void _elfimplib__wspawnlpe() {
asm("leave\njmp *%0" : : "r"(_imp___wspawnlpe));
}

void _elfimplib__wspawnv() asm("wspawnv");
void *_imp___wspawnv = NULL;
__attribute__((constructor)) void _elfimplib_init__wspawnv() {
load_dll_msvcrt();
_imp___wspawnv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnv");
}
void _elfimplib__wspawnv() {
asm("leave\njmp *%0" : : "r"(_imp___wspawnv));
}

void _elfimplib__wspawnve() asm("wspawnve");
void *_imp___wspawnve = NULL;
__attribute__((constructor)) void _elfimplib_init__wspawnve() {
load_dll_msvcrt();
_imp___wspawnve = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnve");
}
void _elfimplib__wspawnve() {
asm("leave\njmp *%0" : : "r"(_imp___wspawnve));
}

void _elfimplib__wspawnvp() asm("wspawnvp");
void *_imp___wspawnvp = NULL;
__attribute__((constructor)) void _elfimplib_init__wspawnvp() {
load_dll_msvcrt();
_imp___wspawnvp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnvp");
}
void _elfimplib__wspawnvp() {
asm("leave\njmp *%0" : : "r"(_imp___wspawnvp));
}

void _elfimplib__wspawnvpe() asm("wspawnvpe");
void *_imp___wspawnvpe = NULL;
__attribute__((constructor)) void _elfimplib_init__wspawnvpe() {
load_dll_msvcrt();
_imp___wspawnvpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnvpe");
}
void _elfimplib__wspawnvpe() {
asm("leave\njmp *%0" : : "r"(_imp___wspawnvpe));
}

void _elfimplib__wsplitpath() asm("wsplitpath");
void *_imp___wsplitpath = NULL;
__attribute__((constructor)) void _elfimplib_init__wsplitpath() {
load_dll_msvcrt();
_imp___wsplitpath = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wsplitpath");
}
void _elfimplib__wsplitpath() {
asm("leave\njmp *%0" : : "r"(_imp___wsplitpath));
}

void _elfimplib__wstat() asm("wstat");
void *_imp___wstat = NULL;
__attribute__((constructor)) void _elfimplib_init__wstat() {
load_dll_msvcrt();
_imp___wstat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wstat");
}
void _elfimplib__wstat() {
asm("leave\njmp *%0" : : "r"(_imp___wstat));
}

void _elfimplib__wstat64() asm("wstat64");
void *_imp___wstat64 = NULL;
__attribute__((constructor)) void _elfimplib_init__wstat64() {
load_dll_msvcrt();
_imp___wstat64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wstat64");
}
void _elfimplib__wstat64() {
asm("leave\njmp *%0" : : "r"(_imp___wstat64));
}

void _elfimplib__wstati64() asm("wstati64");
void *_imp___wstati64 = NULL;
__attribute__((constructor)) void _elfimplib_init__wstati64() {
load_dll_msvcrt();
_imp___wstati64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wstati64");
}
void _elfimplib__wstati64() {
asm("leave\njmp *%0" : : "r"(_imp___wstati64));
}

void _elfimplib__wstrdate() asm("wstrdate");
void *_imp___wstrdate = NULL;
__attribute__((constructor)) void _elfimplib_init__wstrdate() {
load_dll_msvcrt();
_imp___wstrdate = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wstrdate");
}
void _elfimplib__wstrdate() {
asm("leave\njmp *%0" : : "r"(_imp___wstrdate));
}

void _elfimplib__wstrtime() asm("wstrtime");
void *_imp___wstrtime = NULL;
__attribute__((constructor)) void _elfimplib_init__wstrtime() {
load_dll_msvcrt();
_imp___wstrtime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wstrtime");
}
void _elfimplib__wstrtime() {
asm("leave\njmp *%0" : : "r"(_imp___wstrtime));
}

void _elfimplib__wsystem() asm("wsystem");
void *_imp___wsystem = NULL;
__attribute__((constructor)) void _elfimplib_init__wsystem() {
load_dll_msvcrt();
_imp___wsystem = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wsystem");
}
void _elfimplib__wsystem() {
asm("leave\njmp *%0" : : "r"(_imp___wsystem));
}

void _elfimplib__wtempnam() asm("wtempnam");
void *_imp___wtempnam = NULL;
__attribute__((constructor)) void _elfimplib_init__wtempnam() {
load_dll_msvcrt();
_imp___wtempnam = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wtempnam");
}
void _elfimplib__wtempnam() {
asm("leave\njmp *%0" : : "r"(_imp___wtempnam));
}

void _elfimplib__wtmpnam() asm("wtmpnam");
void *_imp___wtmpnam = NULL;
__attribute__((constructor)) void _elfimplib_init__wtmpnam() {
load_dll_msvcrt();
_imp___wtmpnam = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wtmpnam");
}
void _elfimplib__wtmpnam() {
asm("leave\njmp *%0" : : "r"(_imp___wtmpnam));
}

void _elfimplib__wtof() asm("wtof");
void *_imp___wtof = NULL;
__attribute__((constructor)) void _elfimplib_init__wtof() {
load_dll_msvcrt();
_imp___wtof = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wtof");
}
void _elfimplib__wtof() {
asm("leave\njmp *%0" : : "r"(_imp___wtof));
}

void _elfimplib__wtoi() asm("wtoi");
void *_imp___wtoi = NULL;
__attribute__((constructor)) void _elfimplib_init__wtoi() {
load_dll_msvcrt();
_imp___wtoi = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wtoi");
}
void _elfimplib__wtoi() {
asm("leave\njmp *%0" : : "r"(_imp___wtoi));
}

void _elfimplib__wtoi64() asm("wtoi64");
void *_imp___wtoi64 = NULL;
__attribute__((constructor)) void _elfimplib_init__wtoi64() {
load_dll_msvcrt();
_imp___wtoi64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wtoi64");
}
void _elfimplib__wtoi64() {
asm("leave\njmp *%0" : : "r"(_imp___wtoi64));
}

void _elfimplib__wtol() asm("wtol");
void *_imp___wtol = NULL;
__attribute__((constructor)) void _elfimplib_init__wtol() {
load_dll_msvcrt();
_imp___wtol = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wtol");
}
void _elfimplib__wtol() {
asm("leave\njmp *%0" : : "r"(_imp___wtol));
}

void _elfimplib__wunlink() asm("wunlink");
void *_imp___wunlink = NULL;
__attribute__((constructor)) void _elfimplib_init__wunlink() {
load_dll_msvcrt();
_imp___wunlink = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wunlink");
}
void _elfimplib__wunlink() {
asm("leave\njmp *%0" : : "r"(_imp___wunlink));
}

void _elfimplib__wutime() asm("wutime");
void *_imp___wutime = NULL;
__attribute__((constructor)) void _elfimplib_init__wutime() {
load_dll_msvcrt();
_imp___wutime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wutime");
}
void _elfimplib__wutime() {
asm("leave\njmp *%0" : : "r"(_imp___wutime));
}

void _elfimplib__wutime64() asm("wutime64");
void *_imp___wutime64 = NULL;
__attribute__((constructor)) void _elfimplib_init__wutime64() {
load_dll_msvcrt();
_imp___wutime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wutime64");
}
void _elfimplib__wutime64() {
asm("leave\njmp *%0" : : "r"(_imp___wutime64));
}

void _elfimplib__y0() asm("y0");
void *_imp___y0 = NULL;
__attribute__((constructor)) void _elfimplib_init__y0() {
load_dll_msvcrt();
_imp___y0 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_y0");
}
void _elfimplib__y0() {
asm("leave\njmp *%0" : : "r"(_imp___y0));
}

void _elfimplib__y1() asm("y1");
void *_imp___y1 = NULL;
__attribute__((constructor)) void _elfimplib_init__y1() {
load_dll_msvcrt();
_imp___y1 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_y1");
}
void _elfimplib__y1() {
asm("leave\njmp *%0" : : "r"(_imp___y1));
}

void _elfimplib__yn() asm("yn");
void *_imp___yn = NULL;
__attribute__((constructor)) void _elfimplib_init__yn() {
load_dll_msvcrt();
_imp___yn = (void *) _elf_GetProcAddress(_dll_msvcrt, "_yn");
}
void _elfimplib__yn() {
asm("leave\njmp *%0" : : "r"(_imp___yn));
}

void _elfimplib_abort() asm("abort");
void *_imp__abort = NULL;
__attribute__((constructor)) void _elfimplib_init_abort() {
load_dll_msvcrt();
_imp__abort = (void *) _elf_GetProcAddress(_dll_msvcrt, "abort");
}
void _elfimplib_abort() {
asm("leave\njmp *%0" : : "r"(_imp__abort));
}

void _elfimplib_abs() asm("abs");
void *_imp__abs = NULL;
__attribute__((constructor)) void _elfimplib_init_abs() {
load_dll_msvcrt();
_imp__abs = (void *) _elf_GetProcAddress(_dll_msvcrt, "abs");
}
void _elfimplib_abs() {
asm("leave\njmp *%0" : : "r"(_imp__abs));
}

void _elfimplib_acos() asm("acos");
void *_imp__acos = NULL;
__attribute__((constructor)) void _elfimplib_init_acos() {
load_dll_msvcrt();
_imp__acos = (void *) _elf_GetProcAddress(_dll_msvcrt, "acos");
}
void _elfimplib_acos() {
asm("leave\njmp *%0" : : "r"(_imp__acos));
}

void _elfimplib_asctime() asm("asctime");
void *_imp__asctime = NULL;
__attribute__((constructor)) void _elfimplib_init_asctime() {
load_dll_msvcrt();
_imp__asctime = (void *) _elf_GetProcAddress(_dll_msvcrt, "asctime");
}
void _elfimplib_asctime() {
asm("leave\njmp *%0" : : "r"(_imp__asctime));
}

void _elfimplib_asin() asm("asin");
void *_imp__asin = NULL;
__attribute__((constructor)) void _elfimplib_init_asin() {
load_dll_msvcrt();
_imp__asin = (void *) _elf_GetProcAddress(_dll_msvcrt, "asin");
}
void _elfimplib_asin() {
asm("leave\njmp *%0" : : "r"(_imp__asin));
}

void _elfimplib_atan() asm("atan");
void *_imp__atan = NULL;
__attribute__((constructor)) void _elfimplib_init_atan() {
load_dll_msvcrt();
_imp__atan = (void *) _elf_GetProcAddress(_dll_msvcrt, "atan");
}
void _elfimplib_atan() {
asm("leave\njmp *%0" : : "r"(_imp__atan));
}

void _elfimplib_atan2() asm("atan2");
void *_imp__atan2 = NULL;
__attribute__((constructor)) void _elfimplib_init_atan2() {
load_dll_msvcrt();
_imp__atan2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "atan2");
}
void _elfimplib_atan2() {
asm("leave\njmp *%0" : : "r"(_imp__atan2));
}

void _elfimplib_atexit() asm("atexit");
void *_imp__atexit = NULL;
__attribute__((constructor)) void _elfimplib_init_atexit() {
load_dll_msvcrt();
_imp__atexit = (void *) _elf_GetProcAddress(_dll_msvcrt, "atexit");
}
void _elfimplib_atexit() {
asm("leave\njmp *%0" : : "r"(_imp__atexit));
}

void _elfimplib_atof() asm("atof");
void *_imp__atof = NULL;
__attribute__((constructor)) void _elfimplib_init_atof() {
load_dll_msvcrt();
_imp__atof = (void *) _elf_GetProcAddress(_dll_msvcrt, "atof");
}
void _elfimplib_atof() {
asm("leave\njmp *%0" : : "r"(_imp__atof));
}

void _elfimplib_atoi() asm("atoi");
void *_imp__atoi = NULL;
__attribute__((constructor)) void _elfimplib_init_atoi() {
load_dll_msvcrt();
_imp__atoi = (void *) _elf_GetProcAddress(_dll_msvcrt, "atoi");
}
void _elfimplib_atoi() {
asm("leave\njmp *%0" : : "r"(_imp__atoi));
}

void _elfimplib_atol() asm("atol");
void *_imp__atol = NULL;
__attribute__((constructor)) void _elfimplib_init_atol() {
load_dll_msvcrt();
_imp__atol = (void *) _elf_GetProcAddress(_dll_msvcrt, "atol");
}
void _elfimplib_atol() {
asm("leave\njmp *%0" : : "r"(_imp__atol));
}

void _elfimplib_bsearch() asm("bsearch");
void *_imp__bsearch = NULL;
__attribute__((constructor)) void _elfimplib_init_bsearch() {
load_dll_msvcrt();
_imp__bsearch = (void *) _elf_GetProcAddress(_dll_msvcrt, "bsearch");
}
void _elfimplib_bsearch() {
asm("leave\njmp *%0" : : "r"(_imp__bsearch));
}

void _elfimplib_calloc() asm("calloc");
void *_imp__calloc = NULL;
__attribute__((constructor)) void _elfimplib_init_calloc() {
load_dll_msvcrt();
_imp__calloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "calloc");
}
void _elfimplib_calloc() {
asm("leave\njmp *%0" : : "r"(_imp__calloc));
}

void _elfimplib_ceil() asm("ceil");
void *_imp__ceil = NULL;
__attribute__((constructor)) void _elfimplib_init_ceil() {
load_dll_msvcrt();
_imp__ceil = (void *) _elf_GetProcAddress(_dll_msvcrt, "ceil");
}
void _elfimplib_ceil() {
asm("leave\njmp *%0" : : "r"(_imp__ceil));
}

void _elfimplib_clearerr() asm("clearerr");
void *_imp__clearerr = NULL;
__attribute__((constructor)) void _elfimplib_init_clearerr() {
load_dll_msvcrt();
_imp__clearerr = (void *) _elf_GetProcAddress(_dll_msvcrt, "clearerr");
}
void _elfimplib_clearerr() {
asm("leave\njmp *%0" : : "r"(_imp__clearerr));
}

void _elfimplib_clock() asm("clock");
void *_imp__clock = NULL;
__attribute__((constructor)) void _elfimplib_init_clock() {
load_dll_msvcrt();
_imp__clock = (void *) _elf_GetProcAddress(_dll_msvcrt, "clock");
}
void _elfimplib_clock() {
asm("leave\njmp *%0" : : "r"(_imp__clock));
}

void _elfimplib_cos() asm("cos");
void *_imp__cos = NULL;
__attribute__((constructor)) void _elfimplib_init_cos() {
load_dll_msvcrt();
_imp__cos = (void *) _elf_GetProcAddress(_dll_msvcrt, "cos");
}
void _elfimplib_cos() {
asm("leave\njmp *%0" : : "r"(_imp__cos));
}

void _elfimplib_cosh() asm("cosh");
void *_imp__cosh = NULL;
__attribute__((constructor)) void _elfimplib_init_cosh() {
load_dll_msvcrt();
_imp__cosh = (void *) _elf_GetProcAddress(_dll_msvcrt, "cosh");
}
void _elfimplib_cosh() {
asm("leave\njmp *%0" : : "r"(_imp__cosh));
}

void _elfimplib_ctime() asm("ctime");
void *_imp__ctime = NULL;
__attribute__((constructor)) void _elfimplib_init_ctime() {
load_dll_msvcrt();
_imp__ctime = (void *) _elf_GetProcAddress(_dll_msvcrt, "ctime");
}
void _elfimplib_ctime() {
asm("leave\njmp *%0" : : "r"(_imp__ctime));
}

void _elfimplib_difftime() asm("difftime");
void *_imp__difftime = NULL;
__attribute__((constructor)) void _elfimplib_init_difftime() {
load_dll_msvcrt();
_imp__difftime = (void *) _elf_GetProcAddress(_dll_msvcrt, "difftime");
}
void _elfimplib_difftime() {
asm("leave\njmp *%0" : : "r"(_imp__difftime));
}

void _elfimplib_div() asm("div");
void *_imp__div = NULL;
__attribute__((constructor)) void _elfimplib_init_div() {
load_dll_msvcrt();
_imp__div = (void *) _elf_GetProcAddress(_dll_msvcrt, "div");
}
void _elfimplib_div() {
asm("leave\njmp *%0" : : "r"(_imp__div));
}

void _elfimplib_exit() asm("exit");
void *_imp__exit = NULL;
__attribute__((constructor)) void _elfimplib_init_exit() {
load_dll_msvcrt();
_imp__exit = (void *) _elf_GetProcAddress(_dll_msvcrt, "exit");
}
void _elfimplib_exit() {
asm("leave\njmp *%0" : : "r"(_imp__exit));
}

void _elfimplib_exp() asm("exp");
void *_imp__exp = NULL;
__attribute__((constructor)) void _elfimplib_init_exp() {
load_dll_msvcrt();
_imp__exp = (void *) _elf_GetProcAddress(_dll_msvcrt, "exp");
}
void _elfimplib_exp() {
asm("leave\njmp *%0" : : "r"(_imp__exp));
}

void _elfimplib_fabs() asm("fabs");
void *_imp__fabs = NULL;
__attribute__((constructor)) void _elfimplib_init_fabs() {
load_dll_msvcrt();
_imp__fabs = (void *) _elf_GetProcAddress(_dll_msvcrt, "fabs");
}
void _elfimplib_fabs() {
asm("leave\njmp *%0" : : "r"(_imp__fabs));
}

void _elfimplib_fclose() asm("fclose");
void *_imp__fclose = NULL;
__attribute__((constructor)) void _elfimplib_init_fclose() {
load_dll_msvcrt();
_imp__fclose = (void *) _elf_GetProcAddress(_dll_msvcrt, "fclose");
}
void _elfimplib_fclose() {
asm("leave\njmp *%0" : : "r"(_imp__fclose));
}

void _elfimplib_feof() asm("feof");
void *_imp__feof = NULL;
__attribute__((constructor)) void _elfimplib_init_feof() {
load_dll_msvcrt();
_imp__feof = (void *) _elf_GetProcAddress(_dll_msvcrt, "feof");
}
void _elfimplib_feof() {
asm("leave\njmp *%0" : : "r"(_imp__feof));
}

void _elfimplib_ferror() asm("ferror");
void *_imp__ferror = NULL;
__attribute__((constructor)) void _elfimplib_init_ferror() {
load_dll_msvcrt();
_imp__ferror = (void *) _elf_GetProcAddress(_dll_msvcrt, "ferror");
}
void _elfimplib_ferror() {
asm("leave\njmp *%0" : : "r"(_imp__ferror));
}

void _elfimplib_fflush() asm("fflush");
void *_imp__fflush = NULL;
__attribute__((constructor)) void _elfimplib_init_fflush() {
load_dll_msvcrt();
_imp__fflush = (void *) _elf_GetProcAddress(_dll_msvcrt, "fflush");
}
void _elfimplib_fflush() {
asm("leave\njmp *%0" : : "r"(_imp__fflush));
}

void _elfimplib_fgetc() asm("fgetc");
void *_imp__fgetc = NULL;
__attribute__((constructor)) void _elfimplib_init_fgetc() {
load_dll_msvcrt();
_imp__fgetc = (void *) _elf_GetProcAddress(_dll_msvcrt, "fgetc");
}
void _elfimplib_fgetc() {
asm("leave\njmp *%0" : : "r"(_imp__fgetc));
}

void _elfimplib_fgetpos() asm("fgetpos");
void *_imp__fgetpos = NULL;
__attribute__((constructor)) void _elfimplib_init_fgetpos() {
load_dll_msvcrt();
_imp__fgetpos = (void *) _elf_GetProcAddress(_dll_msvcrt, "fgetpos");
}
void _elfimplib_fgetpos() {
asm("leave\njmp *%0" : : "r"(_imp__fgetpos));
}

void _elfimplib_fgets() asm("fgets");
void *_imp__fgets = NULL;
__attribute__((constructor)) void _elfimplib_init_fgets() {
load_dll_msvcrt();
_imp__fgets = (void *) _elf_GetProcAddress(_dll_msvcrt, "fgets");
}
void _elfimplib_fgets() {
asm("leave\njmp *%0" : : "r"(_imp__fgets));
}

void _elfimplib_fgetwc() asm("fgetwc");
void *_imp__fgetwc = NULL;
__attribute__((constructor)) void _elfimplib_init_fgetwc() {
load_dll_msvcrt();
_imp__fgetwc = (void *) _elf_GetProcAddress(_dll_msvcrt, "fgetwc");
}
void _elfimplib_fgetwc() {
asm("leave\njmp *%0" : : "r"(_imp__fgetwc));
}

void _elfimplib_fgetws() asm("fgetws");
void *_imp__fgetws = NULL;
__attribute__((constructor)) void _elfimplib_init_fgetws() {
load_dll_msvcrt();
_imp__fgetws = (void *) _elf_GetProcAddress(_dll_msvcrt, "fgetws");
}
void _elfimplib_fgetws() {
asm("leave\njmp *%0" : : "r"(_imp__fgetws));
}

void _elfimplib_floor() asm("floor");
void *_imp__floor = NULL;
__attribute__((constructor)) void _elfimplib_init_floor() {
load_dll_msvcrt();
_imp__floor = (void *) _elf_GetProcAddress(_dll_msvcrt, "floor");
}
void _elfimplib_floor() {
asm("leave\njmp *%0" : : "r"(_imp__floor));
}

void _elfimplib_fmod() asm("fmod");
void *_imp__fmod = NULL;
__attribute__((constructor)) void _elfimplib_init_fmod() {
load_dll_msvcrt();
_imp__fmod = (void *) _elf_GetProcAddress(_dll_msvcrt, "fmod");
}
void _elfimplib_fmod() {
asm("leave\njmp *%0" : : "r"(_imp__fmod));
}

void _elfimplib_fopen() asm("fopen");
void *_imp__fopen = NULL;
__attribute__((constructor)) void _elfimplib_init_fopen() {
load_dll_msvcrt();
_imp__fopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "fopen");
}
void _elfimplib_fopen() {
asm("leave\njmp *%0" : : "r"(_imp__fopen));
}

void _elfimplib_fprintf() asm("fprintf");
void *_imp__fprintf = NULL;
__attribute__((constructor)) void _elfimplib_init_fprintf() {
load_dll_msvcrt();
_imp__fprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "fprintf");
}
void _elfimplib_fprintf() {
asm("leave\njmp *%0" : : "r"(_imp__fprintf));
}

void _elfimplib_fputc() asm("fputc");
void *_imp__fputc = NULL;
__attribute__((constructor)) void _elfimplib_init_fputc() {
load_dll_msvcrt();
_imp__fputc = (void *) _elf_GetProcAddress(_dll_msvcrt, "fputc");
}
void _elfimplib_fputc() {
asm("leave\njmp *%0" : : "r"(_imp__fputc));
}

void _elfimplib_fputs() asm("fputs");
void *_imp__fputs = NULL;
__attribute__((constructor)) void _elfimplib_init_fputs() {
load_dll_msvcrt();
_imp__fputs = (void *) _elf_GetProcAddress(_dll_msvcrt, "fputs");
}
void _elfimplib_fputs() {
asm("leave\njmp *%0" : : "r"(_imp__fputs));
}

void _elfimplib_fputwc() asm("fputwc");
void *_imp__fputwc = NULL;
__attribute__((constructor)) void _elfimplib_init_fputwc() {
load_dll_msvcrt();
_imp__fputwc = (void *) _elf_GetProcAddress(_dll_msvcrt, "fputwc");
}
void _elfimplib_fputwc() {
asm("leave\njmp *%0" : : "r"(_imp__fputwc));
}

void _elfimplib_fputws() asm("fputws");
void *_imp__fputws = NULL;
__attribute__((constructor)) void _elfimplib_init_fputws() {
load_dll_msvcrt();
_imp__fputws = (void *) _elf_GetProcAddress(_dll_msvcrt, "fputws");
}
void _elfimplib_fputws() {
asm("leave\njmp *%0" : : "r"(_imp__fputws));
}

void _elfimplib_fread() asm("fread");
void *_imp__fread = NULL;
__attribute__((constructor)) void _elfimplib_init_fread() {
load_dll_msvcrt();
_imp__fread = (void *) _elf_GetProcAddress(_dll_msvcrt, "fread");
}
void _elfimplib_fread() {
asm("leave\njmp *%0" : : "r"(_imp__fread));
}

void _elfimplib_free() asm("free");
void *_imp__free = NULL;
__attribute__((constructor)) void _elfimplib_init_free() {
load_dll_msvcrt();
_imp__free = (void *) _elf_GetProcAddress(_dll_msvcrt, "free");
}
void _elfimplib_free() {
asm("leave\njmp *%0" : : "r"(_imp__free));
}

void _elfimplib_freopen() asm("freopen");
void *_imp__freopen = NULL;
__attribute__((constructor)) void _elfimplib_init_freopen() {
load_dll_msvcrt();
_imp__freopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "freopen");
}
void _elfimplib_freopen() {
asm("leave\njmp *%0" : : "r"(_imp__freopen));
}

void _elfimplib_frexp() asm("frexp");
void *_imp__frexp = NULL;
__attribute__((constructor)) void _elfimplib_init_frexp() {
load_dll_msvcrt();
_imp__frexp = (void *) _elf_GetProcAddress(_dll_msvcrt, "frexp");
}
void _elfimplib_frexp() {
asm("leave\njmp *%0" : : "r"(_imp__frexp));
}

void _elfimplib_fscanf() asm("fscanf");
void *_imp__fscanf = NULL;
__attribute__((constructor)) void _elfimplib_init_fscanf() {
load_dll_msvcrt();
_imp__fscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "fscanf");
}
void _elfimplib_fscanf() {
asm("leave\njmp *%0" : : "r"(_imp__fscanf));
}

void _elfimplib_fseek() asm("fseek");
void *_imp__fseek = NULL;
__attribute__((constructor)) void _elfimplib_init_fseek() {
load_dll_msvcrt();
_imp__fseek = (void *) _elf_GetProcAddress(_dll_msvcrt, "fseek");
}
void _elfimplib_fseek() {
asm("leave\njmp *%0" : : "r"(_imp__fseek));
}

void _elfimplib_fsetpos() asm("fsetpos");
void *_imp__fsetpos = NULL;
__attribute__((constructor)) void _elfimplib_init_fsetpos() {
load_dll_msvcrt();
_imp__fsetpos = (void *) _elf_GetProcAddress(_dll_msvcrt, "fsetpos");
}
void _elfimplib_fsetpos() {
asm("leave\njmp *%0" : : "r"(_imp__fsetpos));
}

void _elfimplib_ftell() asm("ftell");
void *_imp__ftell = NULL;
__attribute__((constructor)) void _elfimplib_init_ftell() {
load_dll_msvcrt();
_imp__ftell = (void *) _elf_GetProcAddress(_dll_msvcrt, "ftell");
}
void _elfimplib_ftell() {
asm("leave\njmp *%0" : : "r"(_imp__ftell));
}

void _elfimplib_fwprintf() asm("fwprintf");
void *_imp__fwprintf = NULL;
__attribute__((constructor)) void _elfimplib_init_fwprintf() {
load_dll_msvcrt();
_imp__fwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "fwprintf");
}
void _elfimplib_fwprintf() {
asm("leave\njmp *%0" : : "r"(_imp__fwprintf));
}

void _elfimplib_fwrite() asm("fwrite");
void *_imp__fwrite = NULL;
__attribute__((constructor)) void _elfimplib_init_fwrite() {
load_dll_msvcrt();
_imp__fwrite = (void *) _elf_GetProcAddress(_dll_msvcrt, "fwrite");
}
void _elfimplib_fwrite() {
asm("leave\njmp *%0" : : "r"(_imp__fwrite));
}

void _elfimplib_fwscanf() asm("fwscanf");
void *_imp__fwscanf = NULL;
__attribute__((constructor)) void _elfimplib_init_fwscanf() {
load_dll_msvcrt();
_imp__fwscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "fwscanf");
}
void _elfimplib_fwscanf() {
asm("leave\njmp *%0" : : "r"(_imp__fwscanf));
}

void _elfimplib_getc() asm("getc");
void *_imp__getc = NULL;
__attribute__((constructor)) void _elfimplib_init_getc() {
load_dll_msvcrt();
_imp__getc = (void *) _elf_GetProcAddress(_dll_msvcrt, "getc");
}
void _elfimplib_getc() {
asm("leave\njmp *%0" : : "r"(_imp__getc));
}

void _elfimplib_getchar() asm("getchar");
void *_imp__getchar = NULL;
__attribute__((constructor)) void _elfimplib_init_getchar() {
load_dll_msvcrt();
_imp__getchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "getchar");
}
void _elfimplib_getchar() {
asm("leave\njmp *%0" : : "r"(_imp__getchar));
}

void _elfimplib_getenv() asm("getenv");
void *_imp__getenv = NULL;
__attribute__((constructor)) void _elfimplib_init_getenv() {
load_dll_msvcrt();
_imp__getenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "getenv");
}
void _elfimplib_getenv() {
asm("leave\njmp *%0" : : "r"(_imp__getenv));
}

void _elfimplib_gets() asm("gets");
void *_imp__gets = NULL;
__attribute__((constructor)) void _elfimplib_init_gets() {
load_dll_msvcrt();
_imp__gets = (void *) _elf_GetProcAddress(_dll_msvcrt, "gets");
}
void _elfimplib_gets() {
asm("leave\njmp *%0" : : "r"(_imp__gets));
}

void _elfimplib_getwc() asm("getwc");
void *_imp__getwc = NULL;
__attribute__((constructor)) void _elfimplib_init_getwc() {
load_dll_msvcrt();
_imp__getwc = (void *) _elf_GetProcAddress(_dll_msvcrt, "getwc");
}
void _elfimplib_getwc() {
asm("leave\njmp *%0" : : "r"(_imp__getwc));
}

void _elfimplib_getwchar() asm("getwchar");
void *_imp__getwchar = NULL;
__attribute__((constructor)) void _elfimplib_init_getwchar() {
load_dll_msvcrt();
_imp__getwchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "getwchar");
}
void _elfimplib_getwchar() {
asm("leave\njmp *%0" : : "r"(_imp__getwchar));
}

void _elfimplib_gmtime() asm("gmtime");
void *_imp__gmtime = NULL;
__attribute__((constructor)) void _elfimplib_init_gmtime() {
load_dll_msvcrt();
_imp__gmtime = (void *) _elf_GetProcAddress(_dll_msvcrt, "gmtime");
}
void _elfimplib_gmtime() {
asm("leave\njmp *%0" : : "r"(_imp__gmtime));
}

void _elfimplib_is_wctype() asm("is_wctype");
void *_imp__is_wctype = NULL;
__attribute__((constructor)) void _elfimplib_init_is_wctype() {
load_dll_msvcrt();
_imp__is_wctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "is_wctype");
}
void _elfimplib_is_wctype() {
asm("leave\njmp *%0" : : "r"(_imp__is_wctype));
}

void _elfimplib_isalnum() asm("isalnum");
void *_imp__isalnum = NULL;
__attribute__((constructor)) void _elfimplib_init_isalnum() {
load_dll_msvcrt();
_imp__isalnum = (void *) _elf_GetProcAddress(_dll_msvcrt, "isalnum");
}
void _elfimplib_isalnum() {
asm("leave\njmp *%0" : : "r"(_imp__isalnum));
}

void _elfimplib_isalpha() asm("isalpha");
void *_imp__isalpha = NULL;
__attribute__((constructor)) void _elfimplib_init_isalpha() {
load_dll_msvcrt();
_imp__isalpha = (void *) _elf_GetProcAddress(_dll_msvcrt, "isalpha");
}
void _elfimplib_isalpha() {
asm("leave\njmp *%0" : : "r"(_imp__isalpha));
}

void _elfimplib_iscntrl() asm("iscntrl");
void *_imp__iscntrl = NULL;
__attribute__((constructor)) void _elfimplib_init_iscntrl() {
load_dll_msvcrt();
_imp__iscntrl = (void *) _elf_GetProcAddress(_dll_msvcrt, "iscntrl");
}
void _elfimplib_iscntrl() {
asm("leave\njmp *%0" : : "r"(_imp__iscntrl));
}

void _elfimplib_isdigit() asm("isdigit");
void *_imp__isdigit = NULL;
__attribute__((constructor)) void _elfimplib_init_isdigit() {
load_dll_msvcrt();
_imp__isdigit = (void *) _elf_GetProcAddress(_dll_msvcrt, "isdigit");
}
void _elfimplib_isdigit() {
asm("leave\njmp *%0" : : "r"(_imp__isdigit));
}

void _elfimplib_isgraph() asm("isgraph");
void *_imp__isgraph = NULL;
__attribute__((constructor)) void _elfimplib_init_isgraph() {
load_dll_msvcrt();
_imp__isgraph = (void *) _elf_GetProcAddress(_dll_msvcrt, "isgraph");
}
void _elfimplib_isgraph() {
asm("leave\njmp *%0" : : "r"(_imp__isgraph));
}

void _elfimplib_isleadbyte() asm("isleadbyte");
void *_imp__isleadbyte = NULL;
__attribute__((constructor)) void _elfimplib_init_isleadbyte() {
load_dll_msvcrt();
_imp__isleadbyte = (void *) _elf_GetProcAddress(_dll_msvcrt, "isleadbyte");
}
void _elfimplib_isleadbyte() {
asm("leave\njmp *%0" : : "r"(_imp__isleadbyte));
}

void _elfimplib_islower() asm("islower");
void *_imp__islower = NULL;
__attribute__((constructor)) void _elfimplib_init_islower() {
load_dll_msvcrt();
_imp__islower = (void *) _elf_GetProcAddress(_dll_msvcrt, "islower");
}
void _elfimplib_islower() {
asm("leave\njmp *%0" : : "r"(_imp__islower));
}

void _elfimplib_isprint() asm("isprint");
void *_imp__isprint = NULL;
__attribute__((constructor)) void _elfimplib_init_isprint() {
load_dll_msvcrt();
_imp__isprint = (void *) _elf_GetProcAddress(_dll_msvcrt, "isprint");
}
void _elfimplib_isprint() {
asm("leave\njmp *%0" : : "r"(_imp__isprint));
}

void _elfimplib_ispunct() asm("ispunct");
void *_imp__ispunct = NULL;
__attribute__((constructor)) void _elfimplib_init_ispunct() {
load_dll_msvcrt();
_imp__ispunct = (void *) _elf_GetProcAddress(_dll_msvcrt, "ispunct");
}
void _elfimplib_ispunct() {
asm("leave\njmp *%0" : : "r"(_imp__ispunct));
}

void _elfimplib_isspace() asm("isspace");
void *_imp__isspace = NULL;
__attribute__((constructor)) void _elfimplib_init_isspace() {
load_dll_msvcrt();
_imp__isspace = (void *) _elf_GetProcAddress(_dll_msvcrt, "isspace");
}
void _elfimplib_isspace() {
asm("leave\njmp *%0" : : "r"(_imp__isspace));
}

void _elfimplib_isupper() asm("isupper");
void *_imp__isupper = NULL;
__attribute__((constructor)) void _elfimplib_init_isupper() {
load_dll_msvcrt();
_imp__isupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "isupper");
}
void _elfimplib_isupper() {
asm("leave\njmp *%0" : : "r"(_imp__isupper));
}

void _elfimplib_iswalnum() asm("iswalnum");
void *_imp__iswalnum = NULL;
__attribute__((constructor)) void _elfimplib_init_iswalnum() {
load_dll_msvcrt();
_imp__iswalnum = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswalnum");
}
void _elfimplib_iswalnum() {
asm("leave\njmp *%0" : : "r"(_imp__iswalnum));
}

void _elfimplib_iswalpha() asm("iswalpha");
void *_imp__iswalpha = NULL;
__attribute__((constructor)) void _elfimplib_init_iswalpha() {
load_dll_msvcrt();
_imp__iswalpha = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswalpha");
}
void _elfimplib_iswalpha() {
asm("leave\njmp *%0" : : "r"(_imp__iswalpha));
}

void _elfimplib_iswascii() asm("iswascii");
void *_imp__iswascii = NULL;
__attribute__((constructor)) void _elfimplib_init_iswascii() {
load_dll_msvcrt();
_imp__iswascii = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswascii");
}
void _elfimplib_iswascii() {
asm("leave\njmp *%0" : : "r"(_imp__iswascii));
}

void _elfimplib_iswcntrl() asm("iswcntrl");
void *_imp__iswcntrl = NULL;
__attribute__((constructor)) void _elfimplib_init_iswcntrl() {
load_dll_msvcrt();
_imp__iswcntrl = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswcntrl");
}
void _elfimplib_iswcntrl() {
asm("leave\njmp *%0" : : "r"(_imp__iswcntrl));
}

void _elfimplib_iswctype() asm("iswctype");
void *_imp__iswctype = NULL;
__attribute__((constructor)) void _elfimplib_init_iswctype() {
load_dll_msvcrt();
_imp__iswctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswctype");
}
void _elfimplib_iswctype() {
asm("leave\njmp *%0" : : "r"(_imp__iswctype));
}

void _elfimplib_iswdigit() asm("iswdigit");
void *_imp__iswdigit = NULL;
__attribute__((constructor)) void _elfimplib_init_iswdigit() {
load_dll_msvcrt();
_imp__iswdigit = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswdigit");
}
void _elfimplib_iswdigit() {
asm("leave\njmp *%0" : : "r"(_imp__iswdigit));
}

void _elfimplib_iswgraph() asm("iswgraph");
void *_imp__iswgraph = NULL;
__attribute__((constructor)) void _elfimplib_init_iswgraph() {
load_dll_msvcrt();
_imp__iswgraph = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswgraph");
}
void _elfimplib_iswgraph() {
asm("leave\njmp *%0" : : "r"(_imp__iswgraph));
}

void _elfimplib_iswlower() asm("iswlower");
void *_imp__iswlower = NULL;
__attribute__((constructor)) void _elfimplib_init_iswlower() {
load_dll_msvcrt();
_imp__iswlower = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswlower");
}
void _elfimplib_iswlower() {
asm("leave\njmp *%0" : : "r"(_imp__iswlower));
}

void _elfimplib_iswprint() asm("iswprint");
void *_imp__iswprint = NULL;
__attribute__((constructor)) void _elfimplib_init_iswprint() {
load_dll_msvcrt();
_imp__iswprint = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswprint");
}
void _elfimplib_iswprint() {
asm("leave\njmp *%0" : : "r"(_imp__iswprint));
}

void _elfimplib_iswpunct() asm("iswpunct");
void *_imp__iswpunct = NULL;
__attribute__((constructor)) void _elfimplib_init_iswpunct() {
load_dll_msvcrt();
_imp__iswpunct = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswpunct");
}
void _elfimplib_iswpunct() {
asm("leave\njmp *%0" : : "r"(_imp__iswpunct));
}

void _elfimplib_iswspace() asm("iswspace");
void *_imp__iswspace = NULL;
__attribute__((constructor)) void _elfimplib_init_iswspace() {
load_dll_msvcrt();
_imp__iswspace = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswspace");
}
void _elfimplib_iswspace() {
asm("leave\njmp *%0" : : "r"(_imp__iswspace));
}

void _elfimplib_iswupper() asm("iswupper");
void *_imp__iswupper = NULL;
__attribute__((constructor)) void _elfimplib_init_iswupper() {
load_dll_msvcrt();
_imp__iswupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswupper");
}
void _elfimplib_iswupper() {
asm("leave\njmp *%0" : : "r"(_imp__iswupper));
}

void _elfimplib_iswxdigit() asm("iswxdigit");
void *_imp__iswxdigit = NULL;
__attribute__((constructor)) void _elfimplib_init_iswxdigit() {
load_dll_msvcrt();
_imp__iswxdigit = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswxdigit");
}
void _elfimplib_iswxdigit() {
asm("leave\njmp *%0" : : "r"(_imp__iswxdigit));
}

void _elfimplib_isxdigit() asm("isxdigit");
void *_imp__isxdigit = NULL;
__attribute__((constructor)) void _elfimplib_init_isxdigit() {
load_dll_msvcrt();
_imp__isxdigit = (void *) _elf_GetProcAddress(_dll_msvcrt, "isxdigit");
}
void _elfimplib_isxdigit() {
asm("leave\njmp *%0" : : "r"(_imp__isxdigit));
}

void _elfimplib_labs() asm("labs");
void *_imp__labs = NULL;
__attribute__((constructor)) void _elfimplib_init_labs() {
load_dll_msvcrt();
_imp__labs = (void *) _elf_GetProcAddress(_dll_msvcrt, "labs");
}
void _elfimplib_labs() {
asm("leave\njmp *%0" : : "r"(_imp__labs));
}

void _elfimplib_ldexp() asm("ldexp");
void *_imp__ldexp = NULL;
__attribute__((constructor)) void _elfimplib_init_ldexp() {
load_dll_msvcrt();
_imp__ldexp = (void *) _elf_GetProcAddress(_dll_msvcrt, "ldexp");
}
void _elfimplib_ldexp() {
asm("leave\njmp *%0" : : "r"(_imp__ldexp));
}

void _elfimplib_ldiv() asm("ldiv");
void *_imp__ldiv = NULL;
__attribute__((constructor)) void _elfimplib_init_ldiv() {
load_dll_msvcrt();
_imp__ldiv = (void *) _elf_GetProcAddress(_dll_msvcrt, "ldiv");
}
void _elfimplib_ldiv() {
asm("leave\njmp *%0" : : "r"(_imp__ldiv));
}

void _elfimplib_localeconv() asm("localeconv");
void *_imp__localeconv = NULL;
__attribute__((constructor)) void _elfimplib_init_localeconv() {
load_dll_msvcrt();
_imp__localeconv = (void *) _elf_GetProcAddress(_dll_msvcrt, "localeconv");
}
void _elfimplib_localeconv() {
asm("leave\njmp *%0" : : "r"(_imp__localeconv));
}

void _elfimplib_localtime() asm("localtime");
void *_imp__localtime = NULL;
__attribute__((constructor)) void _elfimplib_init_localtime() {
load_dll_msvcrt();
_imp__localtime = (void *) _elf_GetProcAddress(_dll_msvcrt, "localtime");
}
void _elfimplib_localtime() {
asm("leave\njmp *%0" : : "r"(_imp__localtime));
}

void _elfimplib_log() asm("log");
void *_imp__log = NULL;
__attribute__((constructor)) void _elfimplib_init_log() {
load_dll_msvcrt();
_imp__log = (void *) _elf_GetProcAddress(_dll_msvcrt, "log");
}
void _elfimplib_log() {
asm("leave\njmp *%0" : : "r"(_imp__log));
}

void _elfimplib_log10() asm("log10");
void *_imp__log10 = NULL;
__attribute__((constructor)) void _elfimplib_init_log10() {
load_dll_msvcrt();
_imp__log10 = (void *) _elf_GetProcAddress(_dll_msvcrt, "log10");
}
void _elfimplib_log10() {
asm("leave\njmp *%0" : : "r"(_imp__log10));
}

void _elfimplib_longjmp() asm("longjmp");
void *_imp__longjmp = NULL;
__attribute__((constructor)) void _elfimplib_init_longjmp() {
load_dll_msvcrt();
_imp__longjmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "longjmp");
}
void _elfimplib_longjmp() {
asm("leave\njmp *%0" : : "r"(_imp__longjmp));
}

void _elfimplib_malloc() asm("malloc");
void *_imp__malloc = NULL;
__attribute__((constructor)) void _elfimplib_init_malloc() {
load_dll_msvcrt();
_imp__malloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "malloc");
}
void _elfimplib_malloc() {
asm("leave\njmp *%0" : : "r"(_imp__malloc));
}

void _elfimplib_mblen() asm("mblen");
void *_imp__mblen = NULL;
__attribute__((constructor)) void _elfimplib_init_mblen() {
load_dll_msvcrt();
_imp__mblen = (void *) _elf_GetProcAddress(_dll_msvcrt, "mblen");
}
void _elfimplib_mblen() {
asm("leave\njmp *%0" : : "r"(_imp__mblen));
}

void _elfimplib_mbstowcs() asm("mbstowcs");
void *_imp__mbstowcs = NULL;
__attribute__((constructor)) void _elfimplib_init_mbstowcs() {
load_dll_msvcrt();
_imp__mbstowcs = (void *) _elf_GetProcAddress(_dll_msvcrt, "mbstowcs");
}
void _elfimplib_mbstowcs() {
asm("leave\njmp *%0" : : "r"(_imp__mbstowcs));
}

void _elfimplib_mbtowc() asm("mbtowc");
void *_imp__mbtowc = NULL;
__attribute__((constructor)) void _elfimplib_init_mbtowc() {
load_dll_msvcrt();
_imp__mbtowc = (void *) _elf_GetProcAddress(_dll_msvcrt, "mbtowc");
}
void _elfimplib_mbtowc() {
asm("leave\njmp *%0" : : "r"(_imp__mbtowc));
}

void _elfimplib_memchr() asm("memchr");
void *_imp__memchr = NULL;
__attribute__((constructor)) void _elfimplib_init_memchr() {
load_dll_msvcrt();
_imp__memchr = (void *) _elf_GetProcAddress(_dll_msvcrt, "memchr");
}
void _elfimplib_memchr() {
asm("leave\njmp *%0" : : "r"(_imp__memchr));
}

void _elfimplib_memcmp() asm("memcmp");
void *_imp__memcmp = NULL;
__attribute__((constructor)) void _elfimplib_init_memcmp() {
load_dll_msvcrt();
_imp__memcmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "memcmp");
}
void _elfimplib_memcmp() {
asm("leave\njmp *%0" : : "r"(_imp__memcmp));
}

void _elfimplib_memcpy() asm("memcpy");
void *_imp__memcpy = NULL;
__attribute__((constructor)) void _elfimplib_init_memcpy() {
load_dll_msvcrt();
_imp__memcpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "memcpy");
}
void _elfimplib_memcpy() {
asm("leave\njmp *%0" : : "r"(_imp__memcpy));
}

void _elfimplib_memmove() asm("memmove");
void *_imp__memmove = NULL;
__attribute__((constructor)) void _elfimplib_init_memmove() {
load_dll_msvcrt();
_imp__memmove = (void *) _elf_GetProcAddress(_dll_msvcrt, "memmove");
}
void _elfimplib_memmove() {
asm("leave\njmp *%0" : : "r"(_imp__memmove));
}

void _elfimplib_memset() asm("memset");
void *_imp__memset = NULL;
__attribute__((constructor)) void _elfimplib_init_memset() {
load_dll_msvcrt();
_imp__memset = (void *) _elf_GetProcAddress(_dll_msvcrt, "memset");
}
void _elfimplib_memset() {
asm("leave\njmp *%0" : : "r"(_imp__memset));
}

void _elfimplib_mktime() asm("mktime");
void *_imp__mktime = NULL;
__attribute__((constructor)) void _elfimplib_init_mktime() {
load_dll_msvcrt();
_imp__mktime = (void *) _elf_GetProcAddress(_dll_msvcrt, "mktime");
}
void _elfimplib_mktime() {
asm("leave\njmp *%0" : : "r"(_imp__mktime));
}

void _elfimplib_modf() asm("modf");
void *_imp__modf = NULL;
__attribute__((constructor)) void _elfimplib_init_modf() {
load_dll_msvcrt();
_imp__modf = (void *) _elf_GetProcAddress(_dll_msvcrt, "modf");
}
void _elfimplib_modf() {
asm("leave\njmp *%0" : : "r"(_imp__modf));
}

void _elfimplib_perror() asm("perror");
void *_imp__perror = NULL;
__attribute__((constructor)) void _elfimplib_init_perror() {
load_dll_msvcrt();
_imp__perror = (void *) _elf_GetProcAddress(_dll_msvcrt, "perror");
}
void _elfimplib_perror() {
asm("leave\njmp *%0" : : "r"(_imp__perror));
}

void _elfimplib_pow() asm("pow");
void *_imp__pow = NULL;
__attribute__((constructor)) void _elfimplib_init_pow() {
load_dll_msvcrt();
_imp__pow = (void *) _elf_GetProcAddress(_dll_msvcrt, "pow");
}
void _elfimplib_pow() {
asm("leave\njmp *%0" : : "r"(_imp__pow));
}

void _elfimplib_printf() asm("printf");
void *_imp__printf = NULL;
__attribute__((constructor)) void _elfimplib_init_printf() {
load_dll_msvcrt();
_imp__printf = (void *) _elf_GetProcAddress(_dll_msvcrt, "printf");
}
void _elfimplib_printf() {
asm("leave\njmp *%0" : : "r"(_imp__printf));
}

void _elfimplib_putc() asm("putc");
void *_imp__putc = NULL;
__attribute__((constructor)) void _elfimplib_init_putc() {
load_dll_msvcrt();
_imp__putc = (void *) _elf_GetProcAddress(_dll_msvcrt, "putc");
}
void _elfimplib_putc() {
asm("leave\njmp *%0" : : "r"(_imp__putc));
}

void _elfimplib_putchar() asm("putchar");
void *_imp__putchar = NULL;
__attribute__((constructor)) void _elfimplib_init_putchar() {
load_dll_msvcrt();
_imp__putchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "putchar");
}
void _elfimplib_putchar() {
asm("leave\njmp *%0" : : "r"(_imp__putchar));
}

void _elfimplib_puts() asm("puts");
void *_imp__puts = NULL;
__attribute__((constructor)) void _elfimplib_init_puts() {
load_dll_msvcrt();
_imp__puts = (void *) _elf_GetProcAddress(_dll_msvcrt, "puts");
}
void _elfimplib_puts() {
asm("leave\njmp *%0" : : "r"(_imp__puts));
}

void _elfimplib_putwc() asm("putwc");
void *_imp__putwc = NULL;
__attribute__((constructor)) void _elfimplib_init_putwc() {
load_dll_msvcrt();
_imp__putwc = (void *) _elf_GetProcAddress(_dll_msvcrt, "putwc");
}
void _elfimplib_putwc() {
asm("leave\njmp *%0" : : "r"(_imp__putwc));
}

void _elfimplib_putwchar() asm("putwchar");
void *_imp__putwchar = NULL;
__attribute__((constructor)) void _elfimplib_init_putwchar() {
load_dll_msvcrt();
_imp__putwchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "putwchar");
}
void _elfimplib_putwchar() {
asm("leave\njmp *%0" : : "r"(_imp__putwchar));
}

void _elfimplib_qsort() asm("qsort");
void *_imp__qsort = NULL;
__attribute__((constructor)) void _elfimplib_init_qsort() {
load_dll_msvcrt();
_imp__qsort = (void *) _elf_GetProcAddress(_dll_msvcrt, "qsort");
}
void _elfimplib_qsort() {
asm("leave\njmp *%0" : : "r"(_imp__qsort));
}

void _elfimplib_raise() asm("raise");
void *_imp__raise = NULL;
__attribute__((constructor)) void _elfimplib_init_raise() {
load_dll_msvcrt();
_imp__raise = (void *) _elf_GetProcAddress(_dll_msvcrt, "raise");
}
void _elfimplib_raise() {
asm("leave\njmp *%0" : : "r"(_imp__raise));
}

void _elfimplib_rand() asm("rand");
void *_imp__rand = NULL;
__attribute__((constructor)) void _elfimplib_init_rand() {
load_dll_msvcrt();
_imp__rand = (void *) _elf_GetProcAddress(_dll_msvcrt, "rand");
}
void _elfimplib_rand() {
asm("leave\njmp *%0" : : "r"(_imp__rand));
}

void _elfimplib_realloc() asm("realloc");
void *_imp__realloc = NULL;
__attribute__((constructor)) void _elfimplib_init_realloc() {
load_dll_msvcrt();
_imp__realloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "realloc");
}
void _elfimplib_realloc() {
asm("leave\njmp *%0" : : "r"(_imp__realloc));
}

void _elfimplib_remove() asm("remove");
void *_imp__remove = NULL;
__attribute__((constructor)) void _elfimplib_init_remove() {
load_dll_msvcrt();
_imp__remove = (void *) _elf_GetProcAddress(_dll_msvcrt, "remove");
}
void _elfimplib_remove() {
asm("leave\njmp *%0" : : "r"(_imp__remove));
}

void _elfimplib_rename() asm("rename");
void *_imp__rename = NULL;
__attribute__((constructor)) void _elfimplib_init_rename() {
load_dll_msvcrt();
_imp__rename = (void *) _elf_GetProcAddress(_dll_msvcrt, "rename");
}
void _elfimplib_rename() {
asm("leave\njmp *%0" : : "r"(_imp__rename));
}

void _elfimplib_rewind() asm("rewind");
void *_imp__rewind = NULL;
__attribute__((constructor)) void _elfimplib_init_rewind() {
load_dll_msvcrt();
_imp__rewind = (void *) _elf_GetProcAddress(_dll_msvcrt, "rewind");
}
void _elfimplib_rewind() {
asm("leave\njmp *%0" : : "r"(_imp__rewind));
}

void _elfimplib_scanf() asm("scanf");
void *_imp__scanf = NULL;
__attribute__((constructor)) void _elfimplib_init_scanf() {
load_dll_msvcrt();
_imp__scanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "scanf");
}
void _elfimplib_scanf() {
asm("leave\njmp *%0" : : "r"(_imp__scanf));
}

void _elfimplib_setbuf() asm("setbuf");
void *_imp__setbuf = NULL;
__attribute__((constructor)) void _elfimplib_init_setbuf() {
load_dll_msvcrt();
_imp__setbuf = (void *) _elf_GetProcAddress(_dll_msvcrt, "setbuf");
}
void _elfimplib_setbuf() {
asm("leave\njmp *%0" : : "r"(_imp__setbuf));
}

void _elfimplib_setlocale() asm("setlocale");
void *_imp__setlocale = NULL;
__attribute__((constructor)) void _elfimplib_init_setlocale() {
load_dll_msvcrt();
_imp__setlocale = (void *) _elf_GetProcAddress(_dll_msvcrt, "setlocale");
}
void _elfimplib_setlocale() {
asm("leave\njmp *%0" : : "r"(_imp__setlocale));
}

void _elfimplib_setvbuf() asm("setvbuf");
void *_imp__setvbuf = NULL;
__attribute__((constructor)) void _elfimplib_init_setvbuf() {
load_dll_msvcrt();
_imp__setvbuf = (void *) _elf_GetProcAddress(_dll_msvcrt, "setvbuf");
}
void _elfimplib_setvbuf() {
asm("leave\njmp *%0" : : "r"(_imp__setvbuf));
}

void _elfimplib_signal() asm("signal");
void *_imp__signal = NULL;
__attribute__((constructor)) void _elfimplib_init_signal() {
load_dll_msvcrt();
_imp__signal = (void *) _elf_GetProcAddress(_dll_msvcrt, "signal");
}
void _elfimplib_signal() {
asm("leave\njmp *%0" : : "r"(_imp__signal));
}

void _elfimplib_sin() asm("sin");
void *_imp__sin = NULL;
__attribute__((constructor)) void _elfimplib_init_sin() {
load_dll_msvcrt();
_imp__sin = (void *) _elf_GetProcAddress(_dll_msvcrt, "sin");
}
void _elfimplib_sin() {
asm("leave\njmp *%0" : : "r"(_imp__sin));
}

void _elfimplib_sinh() asm("sinh");
void *_imp__sinh = NULL;
__attribute__((constructor)) void _elfimplib_init_sinh() {
load_dll_msvcrt();
_imp__sinh = (void *) _elf_GetProcAddress(_dll_msvcrt, "sinh");
}
void _elfimplib_sinh() {
asm("leave\njmp *%0" : : "r"(_imp__sinh));
}

void _elfimplib_sprintf() asm("sprintf");
void *_imp__sprintf = NULL;
__attribute__((constructor)) void _elfimplib_init_sprintf() {
load_dll_msvcrt();
_imp__sprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "sprintf");
}
void _elfimplib_sprintf() {
asm("leave\njmp *%0" : : "r"(_imp__sprintf));
}

void _elfimplib_sqrt() asm("sqrt");
void *_imp__sqrt = NULL;
__attribute__((constructor)) void _elfimplib_init_sqrt() {
load_dll_msvcrt();
_imp__sqrt = (void *) _elf_GetProcAddress(_dll_msvcrt, "sqrt");
}
void _elfimplib_sqrt() {
asm("leave\njmp *%0" : : "r"(_imp__sqrt));
}

void _elfimplib_srand() asm("srand");
void *_imp__srand = NULL;
__attribute__((constructor)) void _elfimplib_init_srand() {
load_dll_msvcrt();
_imp__srand = (void *) _elf_GetProcAddress(_dll_msvcrt, "srand");
}
void _elfimplib_srand() {
asm("leave\njmp *%0" : : "r"(_imp__srand));
}

void _elfimplib_sscanf() asm("sscanf");
void *_imp__sscanf = NULL;
__attribute__((constructor)) void _elfimplib_init_sscanf() {
load_dll_msvcrt();
_imp__sscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "sscanf");
}
void _elfimplib_sscanf() {
asm("leave\njmp *%0" : : "r"(_imp__sscanf));
}

void _elfimplib_strcat() asm("strcat");
void *_imp__strcat = NULL;
__attribute__((constructor)) void _elfimplib_init_strcat() {
load_dll_msvcrt();
_imp__strcat = (void *) _elf_GetProcAddress(_dll_msvcrt, "strcat");
}
void _elfimplib_strcat() {
asm("leave\njmp *%0" : : "r"(_imp__strcat));
}

void _elfimplib_strchr() asm("strchr");
void *_imp__strchr = NULL;
__attribute__((constructor)) void _elfimplib_init_strchr() {
load_dll_msvcrt();
_imp__strchr = (void *) _elf_GetProcAddress(_dll_msvcrt, "strchr");
}
void _elfimplib_strchr() {
asm("leave\njmp *%0" : : "r"(_imp__strchr));
}

void _elfimplib_strcmp() asm("strcmp");
void *_imp__strcmp = NULL;
__attribute__((constructor)) void _elfimplib_init_strcmp() {
load_dll_msvcrt();
_imp__strcmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "strcmp");
}
void _elfimplib_strcmp() {
asm("leave\njmp *%0" : : "r"(_imp__strcmp));
}

void _elfimplib_strcoll() asm("strcoll");
void *_imp__strcoll = NULL;
__attribute__((constructor)) void _elfimplib_init_strcoll() {
load_dll_msvcrt();
_imp__strcoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "strcoll");
}
void _elfimplib_strcoll() {
asm("leave\njmp *%0" : : "r"(_imp__strcoll));
}

void _elfimplib_strcpy() asm("strcpy");
void *_imp__strcpy = NULL;
__attribute__((constructor)) void _elfimplib_init_strcpy() {
load_dll_msvcrt();
_imp__strcpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "strcpy");
}
void _elfimplib_strcpy() {
asm("leave\njmp *%0" : : "r"(_imp__strcpy));
}

void _elfimplib_strcspn() asm("strcspn");
void *_imp__strcspn = NULL;
__attribute__((constructor)) void _elfimplib_init_strcspn() {
load_dll_msvcrt();
_imp__strcspn = (void *) _elf_GetProcAddress(_dll_msvcrt, "strcspn");
}
void _elfimplib_strcspn() {
asm("leave\njmp *%0" : : "r"(_imp__strcspn));
}

void _elfimplib_strerror() asm("strerror");
void *_imp__strerror = NULL;
__attribute__((constructor)) void _elfimplib_init_strerror() {
load_dll_msvcrt();
_imp__strerror = (void *) _elf_GetProcAddress(_dll_msvcrt, "strerror");
}
void _elfimplib_strerror() {
asm("leave\njmp *%0" : : "r"(_imp__strerror));
}

void _elfimplib_strftime() asm("strftime");
void *_imp__strftime = NULL;
__attribute__((constructor)) void _elfimplib_init_strftime() {
load_dll_msvcrt();
_imp__strftime = (void *) _elf_GetProcAddress(_dll_msvcrt, "strftime");
}
void _elfimplib_strftime() {
asm("leave\njmp *%0" : : "r"(_imp__strftime));
}

void _elfimplib_strlen() asm("strlen");
void *_imp__strlen = NULL;
__attribute__((constructor)) void _elfimplib_init_strlen() {
load_dll_msvcrt();
_imp__strlen = (void *) _elf_GetProcAddress(_dll_msvcrt, "strlen");
}
void _elfimplib_strlen() {
asm("leave\njmp *%0" : : "r"(_imp__strlen));
}

void _elfimplib_strncat() asm("strncat");
void *_imp__strncat = NULL;
__attribute__((constructor)) void _elfimplib_init_strncat() {
load_dll_msvcrt();
_imp__strncat = (void *) _elf_GetProcAddress(_dll_msvcrt, "strncat");
}
void _elfimplib_strncat() {
asm("leave\njmp *%0" : : "r"(_imp__strncat));
}

void _elfimplib_strncmp() asm("strncmp");
void *_imp__strncmp = NULL;
__attribute__((constructor)) void _elfimplib_init_strncmp() {
load_dll_msvcrt();
_imp__strncmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "strncmp");
}
void _elfimplib_strncmp() {
asm("leave\njmp *%0" : : "r"(_imp__strncmp));
}

void _elfimplib_strncpy() asm("strncpy");
void *_imp__strncpy = NULL;
__attribute__((constructor)) void _elfimplib_init_strncpy() {
load_dll_msvcrt();
_imp__strncpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "strncpy");
}
void _elfimplib_strncpy() {
asm("leave\njmp *%0" : : "r"(_imp__strncpy));
}

void _elfimplib_strpbrk() asm("strpbrk");
void *_imp__strpbrk = NULL;
__attribute__((constructor)) void _elfimplib_init_strpbrk() {
load_dll_msvcrt();
_imp__strpbrk = (void *) _elf_GetProcAddress(_dll_msvcrt, "strpbrk");
}
void _elfimplib_strpbrk() {
asm("leave\njmp *%0" : : "r"(_imp__strpbrk));
}

void _elfimplib_strrchr() asm("strrchr");
void *_imp__strrchr = NULL;
__attribute__((constructor)) void _elfimplib_init_strrchr() {
load_dll_msvcrt();
_imp__strrchr = (void *) _elf_GetProcAddress(_dll_msvcrt, "strrchr");
}
void _elfimplib_strrchr() {
asm("leave\njmp *%0" : : "r"(_imp__strrchr));
}

void _elfimplib_strspn() asm("strspn");
void *_imp__strspn = NULL;
__attribute__((constructor)) void _elfimplib_init_strspn() {
load_dll_msvcrt();
_imp__strspn = (void *) _elf_GetProcAddress(_dll_msvcrt, "strspn");
}
void _elfimplib_strspn() {
asm("leave\njmp *%0" : : "r"(_imp__strspn));
}

void _elfimplib_strstr() asm("strstr");
void *_imp__strstr = NULL;
__attribute__((constructor)) void _elfimplib_init_strstr() {
load_dll_msvcrt();
_imp__strstr = (void *) _elf_GetProcAddress(_dll_msvcrt, "strstr");
}
void _elfimplib_strstr() {
asm("leave\njmp *%0" : : "r"(_imp__strstr));
}

void _elfimplib_strtod() asm("strtod");
void *_imp__strtod = NULL;
__attribute__((constructor)) void _elfimplib_init_strtod() {
load_dll_msvcrt();
_imp__strtod = (void *) _elf_GetProcAddress(_dll_msvcrt, "strtod");
}
void _elfimplib_strtod() {
asm("leave\njmp *%0" : : "r"(_imp__strtod));
}

void _elfimplib_strtok() asm("strtok");
void *_imp__strtok = NULL;
__attribute__((constructor)) void _elfimplib_init_strtok() {
load_dll_msvcrt();
_imp__strtok = (void *) _elf_GetProcAddress(_dll_msvcrt, "strtok");
}
void _elfimplib_strtok() {
asm("leave\njmp *%0" : : "r"(_imp__strtok));
}

void _elfimplib_strtol() asm("strtol");
void *_imp__strtol = NULL;
__attribute__((constructor)) void _elfimplib_init_strtol() {
load_dll_msvcrt();
_imp__strtol = (void *) _elf_GetProcAddress(_dll_msvcrt, "strtol");
}
void _elfimplib_strtol() {
asm("leave\njmp *%0" : : "r"(_imp__strtol));
}

void _elfimplib_strtoul() asm("strtoul");
void *_imp__strtoul = NULL;
__attribute__((constructor)) void _elfimplib_init_strtoul() {
load_dll_msvcrt();
_imp__strtoul = (void *) _elf_GetProcAddress(_dll_msvcrt, "strtoul");
}
void _elfimplib_strtoul() {
asm("leave\njmp *%0" : : "r"(_imp__strtoul));
}

void _elfimplib_strxfrm() asm("strxfrm");
void *_imp__strxfrm = NULL;
__attribute__((constructor)) void _elfimplib_init_strxfrm() {
load_dll_msvcrt();
_imp__strxfrm = (void *) _elf_GetProcAddress(_dll_msvcrt, "strxfrm");
}
void _elfimplib_strxfrm() {
asm("leave\njmp *%0" : : "r"(_imp__strxfrm));
}

void _elfimplib_swprintf() asm("swprintf");
void *_imp__swprintf = NULL;
__attribute__((constructor)) void _elfimplib_init_swprintf() {
load_dll_msvcrt();
_imp__swprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "swprintf");
}
void _elfimplib_swprintf() {
asm("leave\njmp *%0" : : "r"(_imp__swprintf));
}

void _elfimplib_swscanf() asm("swscanf");
void *_imp__swscanf = NULL;
__attribute__((constructor)) void _elfimplib_init_swscanf() {
load_dll_msvcrt();
_imp__swscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "swscanf");
}
void _elfimplib_swscanf() {
asm("leave\njmp *%0" : : "r"(_imp__swscanf));
}

void _elfimplib_system() asm("system");
void *_imp__system = NULL;
__attribute__((constructor)) void _elfimplib_init_system() {
load_dll_msvcrt();
_imp__system = (void *) _elf_GetProcAddress(_dll_msvcrt, "system");
}
void _elfimplib_system() {
asm("leave\njmp *%0" : : "r"(_imp__system));
}

void _elfimplib_tan() asm("tan");
void *_imp__tan = NULL;
__attribute__((constructor)) void _elfimplib_init_tan() {
load_dll_msvcrt();
_imp__tan = (void *) _elf_GetProcAddress(_dll_msvcrt, "tan");
}
void _elfimplib_tan() {
asm("leave\njmp *%0" : : "r"(_imp__tan));
}

void _elfimplib_tanh() asm("tanh");
void *_imp__tanh = NULL;
__attribute__((constructor)) void _elfimplib_init_tanh() {
load_dll_msvcrt();
_imp__tanh = (void *) _elf_GetProcAddress(_dll_msvcrt, "tanh");
}
void _elfimplib_tanh() {
asm("leave\njmp *%0" : : "r"(_imp__tanh));
}

void _elfimplib_time() asm("time");
void *_imp__time = NULL;
__attribute__((constructor)) void _elfimplib_init_time() {
load_dll_msvcrt();
_imp__time = (void *) _elf_GetProcAddress(_dll_msvcrt, "time");
}
void _elfimplib_time() {
asm("leave\njmp *%0" : : "r"(_imp__time));
}

void _elfimplib_tmpfile() asm("tmpfile");
void *_imp__tmpfile = NULL;
__attribute__((constructor)) void _elfimplib_init_tmpfile() {
load_dll_msvcrt();
_imp__tmpfile = (void *) _elf_GetProcAddress(_dll_msvcrt, "tmpfile");
}
void _elfimplib_tmpfile() {
asm("leave\njmp *%0" : : "r"(_imp__tmpfile));
}

void _elfimplib_tmpnam() asm("tmpnam");
void *_imp__tmpnam = NULL;
__attribute__((constructor)) void _elfimplib_init_tmpnam() {
load_dll_msvcrt();
_imp__tmpnam = (void *) _elf_GetProcAddress(_dll_msvcrt, "tmpnam");
}
void _elfimplib_tmpnam() {
asm("leave\njmp *%0" : : "r"(_imp__tmpnam));
}

void _elfimplib_tolower() asm("tolower");
void *_imp__tolower = NULL;
__attribute__((constructor)) void _elfimplib_init_tolower() {
load_dll_msvcrt();
_imp__tolower = (void *) _elf_GetProcAddress(_dll_msvcrt, "tolower");
}
void _elfimplib_tolower() {
asm("leave\njmp *%0" : : "r"(_imp__tolower));
}

void _elfimplib_toupper() asm("toupper");
void *_imp__toupper = NULL;
__attribute__((constructor)) void _elfimplib_init_toupper() {
load_dll_msvcrt();
_imp__toupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "toupper");
}
void _elfimplib_toupper() {
asm("leave\njmp *%0" : : "r"(_imp__toupper));
}

void _elfimplib_towlower() asm("towlower");
void *_imp__towlower = NULL;
__attribute__((constructor)) void _elfimplib_init_towlower() {
load_dll_msvcrt();
_imp__towlower = (void *) _elf_GetProcAddress(_dll_msvcrt, "towlower");
}
void _elfimplib_towlower() {
asm("leave\njmp *%0" : : "r"(_imp__towlower));
}

void _elfimplib_towupper() asm("towupper");
void *_imp__towupper = NULL;
__attribute__((constructor)) void _elfimplib_init_towupper() {
load_dll_msvcrt();
_imp__towupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "towupper");
}
void _elfimplib_towupper() {
asm("leave\njmp *%0" : : "r"(_imp__towupper));
}

void _elfimplib_ungetc() asm("ungetc");
void *_imp__ungetc = NULL;
__attribute__((constructor)) void _elfimplib_init_ungetc() {
load_dll_msvcrt();
_imp__ungetc = (void *) _elf_GetProcAddress(_dll_msvcrt, "ungetc");
}
void _elfimplib_ungetc() {
asm("leave\njmp *%0" : : "r"(_imp__ungetc));
}

void _elfimplib_ungetwc() asm("ungetwc");
void *_imp__ungetwc = NULL;
__attribute__((constructor)) void _elfimplib_init_ungetwc() {
load_dll_msvcrt();
_imp__ungetwc = (void *) _elf_GetProcAddress(_dll_msvcrt, "ungetwc");
}
void _elfimplib_ungetwc() {
asm("leave\njmp *%0" : : "r"(_imp__ungetwc));
}

void _elfimplib_vfprintf() asm("vfprintf");
void *_imp__vfprintf = NULL;
__attribute__((constructor)) void _elfimplib_init_vfprintf() {
load_dll_msvcrt();
_imp__vfprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "vfprintf");
}
void _elfimplib_vfprintf() {
asm("leave\njmp *%0" : : "r"(_imp__vfprintf));
}

void _elfimplib_vfwprintf() asm("vfwprintf");
void *_imp__vfwprintf = NULL;
__attribute__((constructor)) void _elfimplib_init_vfwprintf() {
load_dll_msvcrt();
_imp__vfwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "vfwprintf");
}
void _elfimplib_vfwprintf() {
asm("leave\njmp *%0" : : "r"(_imp__vfwprintf));
}

void _elfimplib_vprintf() asm("vprintf");
void *_imp__vprintf = NULL;
__attribute__((constructor)) void _elfimplib_init_vprintf() {
load_dll_msvcrt();
_imp__vprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "vprintf");
}
void _elfimplib_vprintf() {
asm("leave\njmp *%0" : : "r"(_imp__vprintf));
}

void _elfimplib_vsprintf() asm("vsprintf");
void *_imp__vsprintf = NULL;
__attribute__((constructor)) void _elfimplib_init_vsprintf() {
load_dll_msvcrt();
_imp__vsprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "vsprintf");
}
void _elfimplib_vsprintf() {
asm("leave\njmp *%0" : : "r"(_imp__vsprintf));
}

void _elfimplib_vswprintf() asm("vswprintf");
void *_imp__vswprintf = NULL;
__attribute__((constructor)) void _elfimplib_init_vswprintf() {
load_dll_msvcrt();
_imp__vswprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "vswprintf");
}
void _elfimplib_vswprintf() {
asm("leave\njmp *%0" : : "r"(_imp__vswprintf));
}

void _elfimplib_vwprintf() asm("vwprintf");
void *_imp__vwprintf = NULL;
__attribute__((constructor)) void _elfimplib_init_vwprintf() {
load_dll_msvcrt();
_imp__vwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "vwprintf");
}
void _elfimplib_vwprintf() {
asm("leave\njmp *%0" : : "r"(_imp__vwprintf));
}

void _elfimplib_wcscat() asm("wcscat");
void *_imp__wcscat = NULL;
__attribute__((constructor)) void _elfimplib_init_wcscat() {
load_dll_msvcrt();
_imp__wcscat = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcscat");
}
void _elfimplib_wcscat() {
asm("leave\njmp *%0" : : "r"(_imp__wcscat));
}

void _elfimplib_wcschr() asm("wcschr");
void *_imp__wcschr = NULL;
__attribute__((constructor)) void _elfimplib_init_wcschr() {
load_dll_msvcrt();
_imp__wcschr = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcschr");
}
void _elfimplib_wcschr() {
asm("leave\njmp *%0" : : "r"(_imp__wcschr));
}

void _elfimplib_wcscmp() asm("wcscmp");
void *_imp__wcscmp = NULL;
__attribute__((constructor)) void _elfimplib_init_wcscmp() {
load_dll_msvcrt();
_imp__wcscmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcscmp");
}
void _elfimplib_wcscmp() {
asm("leave\njmp *%0" : : "r"(_imp__wcscmp));
}

void _elfimplib_wcscoll() asm("wcscoll");
void *_imp__wcscoll = NULL;
__attribute__((constructor)) void _elfimplib_init_wcscoll() {
load_dll_msvcrt();
_imp__wcscoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcscoll");
}
void _elfimplib_wcscoll() {
asm("leave\njmp *%0" : : "r"(_imp__wcscoll));
}

void _elfimplib_wcscpy() asm("wcscpy");
void *_imp__wcscpy = NULL;
__attribute__((constructor)) void _elfimplib_init_wcscpy() {
load_dll_msvcrt();
_imp__wcscpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcscpy");
}
void _elfimplib_wcscpy() {
asm("leave\njmp *%0" : : "r"(_imp__wcscpy));
}

void _elfimplib_wcscspn() asm("wcscspn");
void *_imp__wcscspn = NULL;
__attribute__((constructor)) void _elfimplib_init_wcscspn() {
load_dll_msvcrt();
_imp__wcscspn = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcscspn");
}
void _elfimplib_wcscspn() {
asm("leave\njmp *%0" : : "r"(_imp__wcscspn));
}

void _elfimplib_wcsftime() asm("wcsftime");
void *_imp__wcsftime = NULL;
__attribute__((constructor)) void _elfimplib_init_wcsftime() {
load_dll_msvcrt();
_imp__wcsftime = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsftime");
}
void _elfimplib_wcsftime() {
asm("leave\njmp *%0" : : "r"(_imp__wcsftime));
}

void _elfimplib_wcslen() asm("wcslen");
void *_imp__wcslen = NULL;
__attribute__((constructor)) void _elfimplib_init_wcslen() {
load_dll_msvcrt();
_imp__wcslen = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcslen");
}
void _elfimplib_wcslen() {
asm("leave\njmp *%0" : : "r"(_imp__wcslen));
}

void _elfimplib_wcsncat() asm("wcsncat");
void *_imp__wcsncat = NULL;
__attribute__((constructor)) void _elfimplib_init_wcsncat() {
load_dll_msvcrt();
_imp__wcsncat = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsncat");
}
void _elfimplib_wcsncat() {
asm("leave\njmp *%0" : : "r"(_imp__wcsncat));
}

void _elfimplib_wcsncmp() asm("wcsncmp");
void *_imp__wcsncmp = NULL;
__attribute__((constructor)) void _elfimplib_init_wcsncmp() {
load_dll_msvcrt();
_imp__wcsncmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsncmp");
}
void _elfimplib_wcsncmp() {
asm("leave\njmp *%0" : : "r"(_imp__wcsncmp));
}

void _elfimplib_wcsncpy() asm("wcsncpy");
void *_imp__wcsncpy = NULL;
__attribute__((constructor)) void _elfimplib_init_wcsncpy() {
load_dll_msvcrt();
_imp__wcsncpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsncpy");
}
void _elfimplib_wcsncpy() {
asm("leave\njmp *%0" : : "r"(_imp__wcsncpy));
}

void _elfimplib_wcspbrk() asm("wcspbrk");
void *_imp__wcspbrk = NULL;
__attribute__((constructor)) void _elfimplib_init_wcspbrk() {
load_dll_msvcrt();
_imp__wcspbrk = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcspbrk");
}
void _elfimplib_wcspbrk() {
asm("leave\njmp *%0" : : "r"(_imp__wcspbrk));
}

void _elfimplib_wcsrchr() asm("wcsrchr");
void *_imp__wcsrchr = NULL;
__attribute__((constructor)) void _elfimplib_init_wcsrchr() {
load_dll_msvcrt();
_imp__wcsrchr = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsrchr");
}
void _elfimplib_wcsrchr() {
asm("leave\njmp *%0" : : "r"(_imp__wcsrchr));
}

void _elfimplib_wcsspn() asm("wcsspn");
void *_imp__wcsspn = NULL;
__attribute__((constructor)) void _elfimplib_init_wcsspn() {
load_dll_msvcrt();
_imp__wcsspn = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsspn");
}
void _elfimplib_wcsspn() {
asm("leave\njmp *%0" : : "r"(_imp__wcsspn));
}

void _elfimplib_wcsstr() asm("wcsstr");
void *_imp__wcsstr = NULL;
__attribute__((constructor)) void _elfimplib_init_wcsstr() {
load_dll_msvcrt();
_imp__wcsstr = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsstr");
}
void _elfimplib_wcsstr() {
asm("leave\njmp *%0" : : "r"(_imp__wcsstr));
}

void _elfimplib_wcstod() asm("wcstod");
void *_imp__wcstod = NULL;
__attribute__((constructor)) void _elfimplib_init_wcstod() {
load_dll_msvcrt();
_imp__wcstod = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcstod");
}
void _elfimplib_wcstod() {
asm("leave\njmp *%0" : : "r"(_imp__wcstod));
}

void _elfimplib_wcstok() asm("wcstok");
void *_imp__wcstok = NULL;
__attribute__((constructor)) void _elfimplib_init_wcstok() {
load_dll_msvcrt();
_imp__wcstok = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcstok");
}
void _elfimplib_wcstok() {
asm("leave\njmp *%0" : : "r"(_imp__wcstok));
}

void _elfimplib_wcstol() asm("wcstol");
void *_imp__wcstol = NULL;
__attribute__((constructor)) void _elfimplib_init_wcstol() {
load_dll_msvcrt();
_imp__wcstol = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcstol");
}
void _elfimplib_wcstol() {
asm("leave\njmp *%0" : : "r"(_imp__wcstol));
}

void _elfimplib_wcstombs() asm("wcstombs");
void *_imp__wcstombs = NULL;
__attribute__((constructor)) void _elfimplib_init_wcstombs() {
load_dll_msvcrt();
_imp__wcstombs = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcstombs");
}
void _elfimplib_wcstombs() {
asm("leave\njmp *%0" : : "r"(_imp__wcstombs));
}

void _elfimplib_wcstoul() asm("wcstoul");
void *_imp__wcstoul = NULL;
__attribute__((constructor)) void _elfimplib_init_wcstoul() {
load_dll_msvcrt();
_imp__wcstoul = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcstoul");
}
void _elfimplib_wcstoul() {
asm("leave\njmp *%0" : : "r"(_imp__wcstoul));
}

void _elfimplib_wcsxfrm() asm("wcsxfrm");
void *_imp__wcsxfrm = NULL;
__attribute__((constructor)) void _elfimplib_init_wcsxfrm() {
load_dll_msvcrt();
_imp__wcsxfrm = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsxfrm");
}
void _elfimplib_wcsxfrm() {
asm("leave\njmp *%0" : : "r"(_imp__wcsxfrm));
}

void _elfimplib_wctomb() asm("wctomb");
void *_imp__wctomb = NULL;
__attribute__((constructor)) void _elfimplib_init_wctomb() {
load_dll_msvcrt();
_imp__wctomb = (void *) _elf_GetProcAddress(_dll_msvcrt, "wctomb");
}
void _elfimplib_wctomb() {
asm("leave\njmp *%0" : : "r"(_imp__wctomb));
}

void _elfimplib_wprintf() asm("wprintf");
void *_imp__wprintf = NULL;
__attribute__((constructor)) void _elfimplib_init_wprintf() {
load_dll_msvcrt();
_imp__wprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "wprintf");
}
void _elfimplib_wprintf() {
asm("leave\njmp *%0" : : "r"(_imp__wprintf));
}

void _elfimplib_wscanf() asm("wscanf");
void *_imp__wscanf = NULL;
__attribute__((constructor)) void _elfimplib_init_wscanf() {
load_dll_msvcrt();
_imp__wscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "wscanf");
}
void _elfimplib_wscanf() {
asm("leave\njmp *%0" : : "r"(_imp__wscanf));
}

