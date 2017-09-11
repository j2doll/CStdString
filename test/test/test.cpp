// test.cpp 
//

#include "stdafx.h"

#include "StdString.h"

#include <map>
using namespace std;

int main()
{
	// You can add just about any form of string to a CStdString
	// with operator+()
	CStdString strVal1(_T("THIS IS A STRING   "));
	
	// OutputDebugString(strVal1 + _T("\n"));
	// strVal1 += _bstr_t(" plus a BSTR string");
	// strVal1 += '.';

	// Some conversion functions can be chained together

	strVal1.ToLower().TrimRight();

	// Case INsensitive comparison via Equals() or CompareNoCase()

	strVal1 = _T("THIS IS A STRING");
	CStdString strVal2(_T("thIs Is a sTRing"));
	_ASSERTE(strVal1 != strVal2);
	_ASSERTE(strVal1.Equals(strVal2));
	_ASSERTE(strVal1.CompareNoCase(strVal2) == 0);

	// Format() works just like CString's

	strVal1.Format(_T("This %s a string named strVal%d"), _T("IS"), 1);
	// OutputDebugString(strVal1 + _T("\n"));

	// Declare an STL map class which maps strings to integers.  The
	// keys are case insensitive, so an integer stored under the key
	// _T("MYKEY") could be retrieved with the value _T("mykey")

	typedef std::map<CStdString, int, StdStringLessNoCase> CMyMap;
	CMyMap myMap;
	myMap[_T("MYKEY")] = 7;
	_ASSERTE(myMap.find(_T("mykey")) != myMap.end());


	// If we were calling some windows function that fills out a
	// buffer for us we can use the GetBuffer() function.  .

	CStdString strPath;
	::GetTempPath(MAX_PATH, strPath.GetBuffer(MAX_PATH + 1));
	strPath.ReleaseBuffer();

	// You can set the resource handle for loading string resources
	// and then load them via either the constructor or the Load()
	// function.
	/* 
	CStdString::SetResourceHandle(::GetModuleHandle(NULL));
	CStdString strString(MAKEINTRESOURCE(IDS_STRING1));
	_ASSERTE(_T("All your base are belong to us!") == strString);

	strString.Load(IDS_STRING2);
	_ASSERTE(_T("I see dead people") == strString);
	*/


    return 0;
}

