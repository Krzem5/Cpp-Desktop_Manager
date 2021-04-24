#ifndef __DESKTOP_MANAGER_H__
#define __DESKTOP_MANAGER_H__ 1
#include <windows.h>
#ifdef __DLL_BUILD__
#define IMPORT_EXPORT __declspec(dllexport)
#else
#define IMPORT_EXPORT __declspec(dllimport)
#endif



extern "C" BOOL IMPORT_EXPORT move_to_desktop(HWND hwnd,UINT n);



extern "C" BOOL IMPORT_EXPORT switch_to_desktop(UINT n);



#endif
