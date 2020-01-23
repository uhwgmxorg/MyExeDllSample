#pragma once

#include <atlstr.h>


#if defined DLL_EXPORT
	#define DECLDIR __declspec(dllexport)
#else
	#define DECLDIR __declspec(dllimport)
#endif

extern "C"
{
	DECLDIR void GetVersionOfApplication(CString *strFileVersion, CString *strProductVersion);
}

