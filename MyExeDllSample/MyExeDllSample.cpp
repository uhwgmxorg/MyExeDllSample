// MyExeDllSample.cpp : This file contains the function "main". Here the execution of the program starts and ends.
//

#include "pch.h"
#include <iostream>

#include <atlstr.h>

#undef DLL_EXPORT  // This is not really necessary, but is mentioned here as an example
#include "..\TheDll\TheDll.h"

using namespace std;

int main()
{
	CString strFileVersion = "0.0.0.0";
	CString strProductVersion = "0.0.0.0";
	GetVersionOfApplication(&strFileVersion, &strProductVersion);
	wcout << "Program MyExeDllSample\n" << (LPCTSTR)strFileVersion << endl << (LPCTSTR)strProductVersion << endl;

	system("pause");
}
