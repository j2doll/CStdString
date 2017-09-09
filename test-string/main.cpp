//
//
// MIT License
// Copyright (c) 2017 j2doll
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// main.cpp

#include <QtGlobal>
#include <QCoreApplication>

#include <map>
#include <iostream>
using namespace std;

#include "stdstring.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    // You can add just about any form of string to a CStdString
    // with operator+()
    CStdString strVal1("THIS IS A STRING   ");

    cout << strVal1;
        /*
    strVal1 += _bstr_t(" plus a BSTR string");
    strVal1 += '.' ;

    // Some conversion functions can be chained together

    strVal1.ToLower().TrimRight();

    // Case INsensitive comparison via Equals() or CompareNoCase()

    strVal1 = "THIS IS A STRING";
    CStdString strVal2("thIs Is a sTRing");
    Q_ASSERT(strVal1 != strVal2);
    Q_ASSERT(strVal1.Equals(strVal2));
    Q_ASSERT(strVal1.CompareNoCase(strVal2) == 0);

    // Format() works just like CString's

    strVal1.Format("This %s a string named strVal%d", "IS", 1);
    qDebug(strVal1 + "\n");

    // Declare an STL map class which maps strings to integers.  The
    // keys are case insensitive, so an integer stored under the key
    // _T("MYKEY") could be retrieved with the value _T("mykey")

    typedef std::map<CStdString, int, StdStringLessNoCase> CMyMap;
    CMyMap myMap;
    myMap["MYKEY"] = 7;
    Q_ASSERT(myMap.find("mykey") != myMap.end());


    // If we were calling some windows function that fills out a
    // buffer for us we can use the GetBuffer() function.  .

    CStdString strPath;
    ::GetTempPath( MAX_PATH, strPath.GetBuffer(MAX_PATH+1));
    strPath.ReleaseBuffer();

    // You can set the resource handle for loading string resources
    // and then load them via either the constructor or the Load()
    // function.

    CStdString::SetResourceHandle(::GetModuleHandle(NULL));
    CStdString strString(MAKEINTRESOURCE(IDS_STRING1));
    Q_ASSERT("All your base are belong to us!" == strString);

    strString.Load(IDS_STRING2);
    Q_ASSERT("I see dead people" == strString);
*/

    return 0;
    // return a.exec();
}
